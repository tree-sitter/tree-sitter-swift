commaSep1 = (rule) ->
  seq(rule, repeat(seq(",", rule)))

commaSep = (rule) ->
  optional(commaSep1(rule))

PREC =
	CAST: 132

module.exports = grammar
	name: "swift"

	rules:
		program: -> @_statements


		# Statements

		_statement: -> seq(choice(
			@_expression,
			@_declaration,
			@_loop_statement,
			# @_branch_statement,
			# @_labeled_statement,
			# @_control_transfer_statement,
			# @defer_statement,
			# @do_statement,
			# @compiler_control_statement
		), optional(';'))

		_statements: -> repeat(@_statement)

		_loop_statement: -> choice(
			@for_statement,
			@for_in_statement,
			# @while_statement,
			# @repeat_while_statement
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
			@_pattern,
			'in',
			@_expression,
			# optional(@_where_clause),
			@_code_block
		)

		_code_block: -> seq(
			'{',
			@_statements,
			'}'
		)


		# Declarations

		_declaration: ->
			'import'

		variable_declaration: -> seq(@_variable_declaration_head, choice(
			# @_pattern_initializer_list,
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
			seq(@wildcard_pattern, optional(@_type_annotation)),
			seq(@identifier_pattern, optional(@_type_annotation)),
			@value_binding_pattern,
			seq(@tuple_pattern, optional(@_type_annotation)),
			# @enum_case_pattern,
			@optional_pattern,
			@_type_casting_pattern,
			@expression_pattern
		)

		wildcard_pattern: -> '_'

		identifier_pattern: -> @identifier

		value_binding_pattern: -> seq(choice('var', 'let'), @_pattern)

		tuple_pattern: -> seq('(', optional(@_tuple_pattern_element_list), ')')
		_tuple_pattern_element_list: -> commaSep1(@_pattern)

		# enum_case_pattern: -> seq(optional(@_type_identifier), '.', @_enum_case_name, optional(@tuple_pattern))

		optional_pattern: -> seq(@identifier_pattern, '?')

		_type_casting_pattern: -> choice(
			@is_pattern,
			@as_pattern
		)
		is_pattern: -> seq('is', @type)
		as_pattern: -> prec.left(PREC.CAST, seq(@_pattern, 'as', @type))

		expression_pattern: -> @_expression


		# Expressions

		_expression: ->
			'try'

		_expression_list: -> commaSep1(@_expression)


		# Lexical Structure

		identifier: -> token(choice(
			seq(
				@_identifier_head,
				optional(@_identifier_characters)
			),
			seq(
				'`',
				@_identifier_head,
				optional(@_identifier_characters),
				'`'
			)
		))

		_identifier_head: ->
			/[A-Za-z_]/

		_identifier_characters: -> repeat(choice(
			@_identifier_head,
			/[0-9]/
		))


		# Types

		type: ->
			@_type_identifier

		_type_annotation: -> seq(
			# optional(@_attributes),
			@type
		)

		_type_identifier: -> seq(
			@_type_name,
			# optional(@_generic_argument_clause),
			optional(seq(
				'.',
				@_type_identifier
			))
		)

		_type_name: -> @identifier


	ubiquitous: -> [
		/\s+/
	]
