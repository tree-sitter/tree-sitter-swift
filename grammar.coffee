commaSep1 = (rule) ->
	seq(rule, repeat(seq(",", rule)))

commaSep = (rule) ->
	optional(commaSep1(rule))

PREC =
	CAST: 132
	CONJUNCTIVE: 120
	DISJUNCTIVE: 110
	TERNARY_CONDITIONAL: 100
	ASSIGNMENT: 90
	OPTIONAL_PATTERN: 10
	OPTIONAL_BINDING_CONDITION: 110
	BREAK_STATEMENT: 10
	CONTINUE_STATEMENT: 10
	RETURN_STATEMENT: 10
	KEYWORD: 10
	POSTFIX: 1000

module.exports = grammar
	name: "swift"

	expectedConflicts: ->
		[
			[ @_variable_declaration_head, @value_binding_pattern ],
			# [ @array_literal, @capture_list ], # { […] in … } vs. { […] }
			# [ @_array_literal_items, @_capture_list_elements ],
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

		_expression_list: -> seq(
			@_expression,
			optional(seq(',', @_expression_list))
		)


		for_statement: ->
			_for_condition = seq(
				optional(choice(
					@variable_declaration,
					@_expression_list
				)),
				';',
				optional(@_expression),
				';',
				optional(@_expression)
			)
			seq(
				'for',
				choice(
					_for_condition,
					seq('(', _for_condition, ')')
				),
				@_code_block
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
			commaSep1(@_condition),
			@_code_block
		)

		_condition: -> choice(
			@availability_condition,
			@case_condition,
			seq(optional(choice('let', 'var')), @_expression)
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

		repeat_while_statement: -> seq(
			'repeat',
			@_code_block,
			'while',
			@_expression
		)

		if_statement: -> seq(
			'if',
			commaSep1(@_condition),
			@_code_block,
			optional(seq('else', choice(@_code_block, @if_statement)))
		)

		guard_statement: -> seq(
			'guard',
			commaSep1(@_condition),
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
				@static_string_literal
			))
		)


		# Declarations

		_declaration: -> choice(
			@import_declaration,
			@constant_declaration,
			@variable_declaration,
			@typealias_declaration,
			@function_declaration,
			@enum_declaration,
			@struct_declaration,
			@class_declaration,
			@protocol_declaration,
			@initializer_declaration,
			@deinitializer_declaration,
			@extension_declaration,
			@subscript_declaration,
			@operator_declaration,
		)

		import_declaration: -> seq(
			# optional(@_attributes),
			'import',
			optional(choice('typealias', 'struct', 'class', 'enum', 'protocol', 'var', 'func')),
			seq(choice(@identifier, @operator), repeat(seq(".", choice(@identifier, @operator))))
		)

		constant_declaration: -> seq(
			# optional(@_attributes),
			# optional(@_declaration_modifiers),
			'let',
			commaSep1(@_pattern_initializer)
		)

		_pattern_initializer: -> seq(@_pattern, optional(@_type_annotation), optional(seq('=', @_expression)))

		variable_declaration: -> seq(@_variable_declaration_head,
			commaSep1(@_pattern_initializer),
			optional(choice(
				@_code_block,
				# @_getter_setter_block,
				@_getter_setter_keyword_block,
				# seq(optional(@_initializer), @_willSet_didSet_block)
			)),
			# seq(@identifier, @_initializer, @_willSet_didSet_block),
		)

		_variable_declaration_head: -> seq(
			# optional(@_attributes),
			# optional(@_declaration_modifiers),
			'var'
		)

		_getter_setter_keyword_block: -> seq(
			'{',
			choice(
				seq(
					@_getter_keyword_clause,
					optional(@_setter_keyword_clause)
				),
				seq(
					@_setter_keyword_clause,
					@_getter_keyword_clause
				)
			)
			'}'
		)

		_getter_keyword_clause: -> seq(
			# optional(@_attributes),
			'get'
		)

		_setter_keyword_clause: -> seq(
			# optional(@_attributes),
			'set'
		)

		typealias_declaration: -> seq(
			@_typealias_head,
			'=',
			@type
		)

		_typealias_head: -> seq(
			# optional(@_attributes),
			# optional(@access_level_modifier),
			'typealias',
			@identifier
		)

		function_declaration: -> seq(
			@_function_head,
			# optional(@_generic_parameter_clause),
			@_function_signature,
			optional(@_code_block)
		)

		_function_head: -> seq(
			# optional(@_attributes),
			# optional(@_declaration_modifiers),
			'func',
			choice(@identifier, @operator),
		)

		_function_signature: -> seq(
			repeat1(@_parameter_clause),
			optional(choice('throws', 'rethrows')),
			optional(@_function_result)
		)

		_function_result: -> seq(
			'->',
			# optional(@_attributes),
			@type
		)

		_parameter_clause: -> seq(
			'(',
			commaSep(seq(
				optional(choice('let', 'var', 'inout')),
				optional(choice(@identifier, '_')),
				choice(@identifier, '_'),
				@_type_annotation,
				optional(seq('=', @_expression))
			)),
			')'
		)

		enum_declaration: -> seq(
			# optional(@_attributes),
			# optional(@access_level_modifier),
			optional('indirect'),
			'enum',
			@identifier,
			# optional(@_generic_parameter_clause),
			# optional(@_type_inheritance_clause),
			'{',
			repeat(choice(
				@_declaration,
				@case_declaration
			))
			'}'
		)

		case_declaration: -> seq(
			# optional(@_attributes),
			optional('indirect'),
			'case',
			@identifier,
			optional(choice(
				@tuple_type,
				seq('=', choice(
					# @numeric_literal,
					@static_string_literal,
					@boolean_literal,
				))
			))
		)

		struct_declaration: -> seq(
			# optional(@_attributes),
			# optional(@access_level_modifier),
			'struct',
			@identifier,
			# optional(@_generic_parameter_clause),
			# optional(@_type_inheritance_clause),
			'{',
			repeat(@_declaration),
			'}'
		)

		class_declaration: -> seq(
			# optional(@_attributes),
			# optional(@access_level_modifier),
			'class',
			@identifier,
			# optional(@_generic_parameter_clause),
			# optional(@_type_inheritance_clause),
			'{',
			repeat(@_declaration),
			'}'
		)

		protocol_declaration: -> seq(
			# optional(@_attributes),
			# optional(@access_level_modifier),
			'protocol',
			@identifier,
			# optional(@_type_inheritance_clause),
			'{',
			repeat(choice(
				@protocol_variable_declaration,
				@protocol_method_declaration,
				@protocol_initializer_declaration,
				@protocol_subscript_declaration,
				@protocol_associated_type_declaration,
			)),
			'}'
		)

		protocol_variable_declaration: -> seq(@_variable_declaration_head, @identifier, @_type_annotation, @_getter_setter_keyword_block)
		protocol_method_declaration: -> seq(
			@_function_head,
			# optional(@_generic_parameter_clause),
			@_function_signature
		)
		protocol_initializer_declaration: -> seq(
			@_initializer_head,
			# optional(@_generic_parameter_clause),
			@_parameter_clause,
			optional(choice('throws', 'rethrows'))
		)
		protocol_subscript_declaration: -> seq(
			@_subscript_head,
			@_subscript_result,
			@_getter_setter_keyword_block
		)
		protocol_associated_type_declaration: -> seq(
			@_typealias_head,
			# optional(@_type_inheritance_clause),
			optional(seq('=', @type))
		)

		initializer_declaration: -> seq(
			@_initializer_head
			# optional(@_generic_parameter_clause),
			@_parameter_clause,
			optional(choice('throws', 'rethrows')),
			@_code_block
		)

		_initializer_head: -> seq(
			# optional(@_attributes),
			# optional(@_declaration_modifiers),
			'init',
			optional(choice('!', '?')),
		)

		deinitializer_declaration: -> seq(
			# optional(@_attributes),
			'deinit',
			@_code_block
		)

		extension_declaration: -> seq(
			# optional(@access_level_modifier),
			'extension',
			choice(@identifier, @member_expression),
			# optional(@_type_inheritance_clause),
			'{',
			repeat(@_declaration),
			'}'
		)

		subscript_declaration: -> seq(
			@_subscript_head,
			@_subscript_result,
			choice(
				@_code_block,
				# @_getter_setter_block,
				@_getter_setter_keyword_block
			)
		)

		_subscript_head: -> seq(
			# optional(@_attributes),
			# optional(@_declaration_modifiers),
			'subscript',
			@_parameter_clause
		)

		_subscript_result: -> seq(
			'->',
			# optional(@_attributes),
			@type
		)

		operator_declaration: -> choice(
			seq('prefix', 'operator', @operator, '{', '}'),
			seq('postfix', 'operator', @operator, '{', '}'),
			seq('infix', 'operator', @operator, '{',
				choice(
					seq(optional(@precedence_clause), optional(@associativity_clause)),
					seq(@associativity_clause, optional(@precedence_clause))
				)
			'}'),
		)

		precedence_clause: -> seq('precedence', /[0-9]|[1-9][0-9]|1[0-9][0-9]|2([0-4][0-9]|5[0-5])/)

		associativity_clause: -> seq('associativity', choice('left', 'right', 'none'))


		# Patterns

		_pattern: -> choice(
			@value_binding_pattern,
			@is_pattern,
			@_expression
		)

		value_binding_pattern: -> seq(choice('var', 'let'), @_pattern)

		is_pattern: -> seq('is', @type)


		# Expressions

		_expression: -> choice(
			@assignment_expression,
			@ternary_conditional_expression,
			@cast_expression,
			@binary_expression,
			@try_expression,
			seq('&', @identifier),
			@_prefix_expression
		)

		try_expression: -> prec.right(seq(
			choice('try', 'try?', 'try!'),
			@_expression
		))

		_prefix_expression: -> seq(
			optional(@operator),
			@_postfix_expression
		)

		binary_expression: -> prec.right(seq(@_expression, @operator, @_prefix_expression))

		assignment_expression: -> prec.right(PREC.ASSIGNMENT, seq(
			@_expression,
			'=',
			@_prefix_expression
		))

		ternary_conditional_expression: -> prec.right(PREC.TERNARY_CONDITIONAL, seq(
			@_expression,
			'?',
			@_expression,
			':',
			@_prefix_expression
		))

		cast_expression: -> prec.right(PREC.CAST, seq(@_expression, choice('is', 'as', 'as?', 'as!'), @type))

		_postfix_expression: -> prec(PREC.POSTFIX, seq(choice(
			@identifier,
			# @numeric_literal,
			# @string_literal,
			@boolean_literal,
			@nil_literal
			@array_literal,
			@dictionary_literal,
			@file_literal,
			@line_literal,
			@column_literal,
			@function_literal,
			@self_expression,
			@super_expression,
			# @closure_expression,
			@parenthesized_expression,
			@member_expression,
			@wildcard_expression,
			@function_call_expression,
			@subscript_expression,
		), optional(@operator)))

		array_literal: -> seq('[', optional(@_array_literal_items), ']')

		_array_literal_items: -> choice(
			seq(@_expression, optional(',')),
			seq(@_expression, ',', @_array_literal_items)
		)

		dictionary_literal: -> seq('[', choice(
			':',
			seq(@dictionary_literal_item, optional(',')),
			commaSep1(@dictionary_literal_item),
		), ']')
		dictionary_literal_item: -> seq(@_expression, ':', @_expression)

		boolean_literal: -> choice('true', 'false')
		nil_literal: -> 'nil'

		file_literal: -> '__FILE__'
		line_literal: -> '__LINE__'
		column_literal: -> '__COLUMN__'
		function_literal: -> '__FUNCTION__'

		self_expression: -> 'self'

		super_expression: -> 'super'

		closure_expression: -> seq(
			'{',
			optional(@closure_signature),
			repeat(@_statement),
			'}'
		)

		closure_signature: -> seq(
			optional(@capture_list),
			optional(seq(
				choice(@_parameter_clause, commaSep1(@identifier)),
				optional(@_function_result),
			)),
			'in'
		)

		capture_list: -> seq(
			'[',
			@_capture_list_elements,
			']'
		)

		_capture_list_elements: -> seq(
			optional(choice(
				'weak',
				'unowned',
				'unowned(safe)',
				'unowned(unsafe)'
			)),
			@_expression,
			optional(seq(',', @_capture_list_elements))
		)

		parenthesized_expression: -> seq(
			'(',
			commaSep(choice(
				@pair,
				@_expression
			)),
			')'
		)

		pair: -> seq(@identifier, ':', @_expression)

		member_expression: -> seq(
			optional(@identifier),
			'.',
			choice(
				@identifier,
				@member_expression
			)
		)

		wildcard_expression: -> '_'

		function_call_expression: -> prec.left(seq(@_postfix_expression, choice(
			@parenthesized_expression,
			# seq(optional(@parenthesized_expression), @closure_expression)
		)))

		subscript_expression: -> seq(
			@_postfix_expression,
			'[',
			optional(@_expression_list),
			']'
		)


		# Lexical Structure

		identifier: ->
			_identifier_head = /[A-Za-z_]/
			_identifier_characters = repeat(choice(
				_identifier_head,
				/[0-9]/
			))
			token(choice(
				seq(_identifier_head, optional(_identifier_characters)),
				seq('`', _identifier_head, optional(_identifier_characters), '`')
			))

		operator: ->
			_operator_head = choice('/', '=', '-', '+', '!', '*', '%', '<', '>', '&', '|', '^', '~', '?')
			token(repeat1(_operator_head))

		static_string_literal: -> /"((\\([\\0tnr'"]|u\{[a-fA-F0-9]{1,8}\}))|[^"\\\u000a\u000d])*"/


		# Types

		type: -> choice(
			@identifier,
			@member_expression,
			@tuple_type,
		)

		_type_annotation: -> seq(
			':',
			# optional(@_attributes),
			@type
		)

		tuple_type: -> seq(
			'(',
			commaSep(seq(
				# optional(@_attributes),
				optional('inout'),
				choice(@type, seq(@identifier, @_type_annotation))
			)),
			optional('...')
			')'
		)
