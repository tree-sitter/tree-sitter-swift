module.exports = grammar
	name: "swift"

	rules:
		program: -> repeat(@_statement)


		# Statements

		_statement: -> seq(choice(
			@_expression,
			@_declaration,
			@_loop_statement,
			# @_branch_statement,
			# @_labeled_statement,
			# @_control_transfer_statement,
			# @defer_statement,
			# @do_statement
		), ';')

		_statements: -> repeat(@_statement)

		_loop_statement: -> choice(
			@for_statement,
			# @for_in_statement,
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
			optional(@_generic_argument_clause),
			optional(seq(
				'.',
				@_type_identifier
			))
		)

		_type_name: -> @identifier


	ubiquitous: -> [
		/\s+/
	]
