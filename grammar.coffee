commaSep1 = (rule) ->
	seq(rule, repeat(seq(",", rule)))

commaSep = (rule) ->
	optional(commaSep1(rule))

PREC =
	CAST: 132
	CONJUNCTIVE: 120
	DISJUNCTIVE: 110
	OPTIONAL_PATTERN: 10
	TYPE_IDENTIFIER: 10
	OPTIONAL_BINDING_CONDITION: 10
	BREAK_STATEMENT: 10
	CONTINUE_STATEMENT: 10
	RETURN_STATEMENT: 10

module.exports = grammar
	name: "swift"

	expectedConflicts: ->
		[
			[ @_variable_declaration_head, @value_binding_pattern ],
			[ @_pattern, @_expression_list ],
			[ @_condition, @_condition_clause ]
		]

	ubiquitous: -> [
		/\s+/
	]

	rules:
		program: -> repeat(@_statement)


		# Statements

		_statement: -> seq(choice(
			@_expression,
			@_declaration,
			@_loop_statement,
			@if_statement,
			@guard_statement,
			@switch_statement
			@labeled_statement,
			@break_statement,
			@continue_statement,
			@fallthrough_statement,
			@return_statement,
			@throw_statement,
			@defer_statement,
			@do_statement,
			@build_configuration_statement,
			@line_control_statement
		), choice(';', /\n/))

		_loop_statement: -> choice(
			@for_statement,
			@for_in_statement,
			@while_statement,
			@repeat_while_statement
		)

		for_statement: -> seq(
			'for',
			choice(
				@_for_condition,
				seq('(', @_for_condition, ')')
			),
			@_code_block
		)

		_for_init: -> choice(
			@variable_declaration,
			@_expression_list
		)

		_for_condition: -> seq(
			optional(@_for_init),
			';',
			optional(@_expression),
			';',
			optional(@_expression)
		)

		for_in_statement: -> seq(
			'for',
			optional('case'),
			seq(@_pattern, optional(@_type_annotation)),
			'in',
			@_expression,
			# optional(@_where_clause),
			@_code_block
		)

		while_statement: -> seq(
			'while',
			@_condition_clause,
			@_code_block
		)

		_condition_clause: -> choice(
			seq(@_expression, optional(seq(',', commaSep1(@_condition)))),
			seq(commaSep1(@_condition)),
			seq(@availability_condition, ',', @_expression)
		)

		_condition: -> choice(
			@availability_condition,
			@case_condition,
			@optional_binding_condition
		)

		availability_condition: -> seq(
			'#available',
			'(',
			commaSep1(
				choice(
					'*',
					seq(
						choice('iOS', 'iOSApplicationExtension', 'OSX', 'OSXApplicationExtension', 'watchOS', 'tvOS'),
						token(seq(/[0-9]+/, optional(seq('.', /[0-9]+/, optional(seq('.', /[0-9]+/))))))
					)
				)
			),
			')'
		)

		case_condition: -> seq(
			'case',
			@_pattern,
			'=',
			@_expression
			# optional(@_where_clause)
		)

		optional_binding_condition: -> prec.right(PREC.OPTIONAL_BINDING_CONDITION, seq(
			choice('let', 'var'),
			@optional_binding,
			optional(seq(',', commaSep1(@optional_binding)))
			# optional(@_where_clause)
		))

		optional_binding: -> seq(
			@_pattern,
			'=',
			@_expression
		)

		repeat_while_statement: -> seq(
			'repeat',
			@_code_block,
			'while',
			@_expression
		)

		if_statement: -> seq(
			'if',
			@_condition_clause,
			@_code_block,
			optional(seq('else', choice(@_code_block, @if_statement)))
		)

		guard_statement: -> seq(
			'guard',
			@_condition_clause,
			'else',
			@_code_block
		)

		switch_statement: -> seq(
			'switch',
			@_expression,
			'{',
			repeat(@case_statement),
			'}'
		)

		case_statement: -> seq(
			choice(
				seq(
					'case',
					commaSep1(seq(
						@_pattern
						# optional(@_where_clause)
					)),
					':'
				),
				seq('default', ':')
			),
			repeat(@_statement))

		_code_block: -> seq(
			'{',
			repeat(@_statement),
			'}'
		)

		labeled_statement: -> seq(
			@identifier,
			':',
			choice(@_loop_statement, @if_statement)
		)

		break_statement: -> prec(PREC.BREAK_STATEMENT, seq('break', optional(@identifier)))

		continue_statement: -> prec(PREC.CONTINUE_STATEMENT, seq('continue', optional(@identifier)))

		fallthrough_statement: -> 'fallthrough'

		return_statement: -> prec(PREC.RETURN_STATEMENT, seq('return', optional(@_expression)))

		throw_statement: -> seq('throw', optional(@_expression))

		defer_statement: -> seq('defer', @_code_block)

		do_statement: -> seq('do', @_code_block, repeat(@catch_clause))

		catch_clause: -> seq(
			'catch',
			optional(@_pattern),
			# optional(@_where_clause),
			@_code_block
		)

		build_configuration_statement: -> seq(
			'#if', @_build_configuration, repeat(@_statement),
			repeat(seq('#elseif', @_build_configuration, repeat(@_statement))),
			optional(seq('#else', repeat(@_statement))),
			'#endif'
		)

		_build_configuration: -> choice(
			seq('os', '(', choice('iOS', 'OSX', 'watchOS', 'tvOS'), ')'),
			seq('arch', '(', choice('i386', 'x86_64', 'arm', 'arm64'), ')'),
			@identifier,
			@boolean_literal,
			seq('(', @_build_configuration, ')'),
			seq('!', @_build_configuration),
			prec.left(PREC.CONJUNCTIVE, seq(@_build_configuration, '&&', @_build_configuration)),
			prec.left(PREC.DISJUNCTIVE, seq(@_build_configuration, '||', @_build_configuration)),
		)

		line_control_statement: -> seq(
			'#line',
			optional(seq(
				/[0-9]+/,
				/\"((\\\\([\\0tnr'\"]|u\\{[a-fA-F0-9]{1,8}\\}))|[^\"\\\\])*\"/
			))
		)


		# Declarations

		_declaration: -> choice(
			@import_declaration,
			@constant_declaration,
			@variable_declaration,
		)

		import_declaration: -> seq(
			# optional(@_attributes),
			'import',
			optional(choice('typealias', 'struct', 'class', 'enum', 'protocol', 'var', 'func')),
			@_pattern_initializer_list
		)

		_pattern_initializer_list: -> seq(choice(@identifier, @operator), repeat(seq(".", choice(@identifier, @operator)))

		constant_declaration: -> seq(
			# optional(@_attributes),
			# optional(@_declaration_modifiers),
			'let',
			commaSep1(seq(@_pattern, optional(@_type_annotation), optional(seq('=', @_expression))))
		)

		variable_declaration: -> seq(@_variable_declaration_head, choice(
			@_pattern_initializer_list,
			seq(@_variable_name, @_type_annotation, @_code_block)
			# seq(@_variable_name, @_type_annotation, @_getter_setter_block),
			# seq(@_variable_name, @_type_annotation, @_getter_setter_keyword_block),
			# seq(@_variable_name, @_initializer, @_willSet_didSet_block),
			# seq(@_variable_name, @_type_annotation, optional(@_initializer), @_willSet_didSet_block)
		))

		_variable_declaration_head: -> seq(
			# optional(@_attributes),
			# optional(@_declaration_modifiers),
			'var'
		)

		_variable_name: -> @identifier


		# Patterns

		_pattern: -> choice(
			@wildcard_pattern,
			@value_binding_pattern,
			@tuple_pattern,
			@enum_case_pattern,
			@optional_pattern,
			@is_pattern,
			@as_pattern,
			@_expression
		)

		wildcard_pattern: -> '_'

		value_binding_pattern: -> seq(choice('var', 'let'), @_pattern)

		tuple_pattern: -> seq('(', optional(@_tuple_pattern_element_list), ')')
		_tuple_pattern_element_list: -> commaSep1(@_pattern)

		enum_case_pattern: -> seq(optional(@_type_identifier), '.', @identifier, optional(@tuple_pattern))

		optional_pattern: -> prec(PREC.OPTIONAL_PATTERN, seq(@_pattern, '?'))

		is_pattern: -> seq('is', @type)
		as_pattern: -> prec(PREC.CAST, seq(@_pattern, 'as', @type))


		# Expressions

		_expression: ->
			@identifier

		_expression_list: -> commaSep1(@_expression)

		boolean_literal: -> choice('true', 'false')


		# Lexical Structure

		identifier: ->
			_identifier_head = /[A-Za-z_]/
			_identifier_characters = repeat(choice(
				_identifier_head,
				/[0-9]/
			))
			token(choice(
				seq(
					_identifier_head,
					optional(_identifier_characters)
				),
				seq(
					'`',
					_identifier_head,
					optional(_identifier_characters),
					'`'
				)
			))

		operator: ->
			_operator_head = choice('/', '=', '-', '+', '!', '*', '%', '<', '>', '&', '|', '^', '~', '?')
			token(repeat1(_operator_head))

		# Types

		type: ->
			@_type_identifier

		_type_annotation: -> seq(
			':',
			# optional(@_attributes),
			@type
		)

		_type_identifier: -> prec.left(PREC.TYPE_IDENTIFIER, seq(
			@_type_name,
			# optional(@_generic_argument_clause),
			optional(seq(
				'.',
				@_type_identifier
			))
		))

		_type_name: -> @identifier
