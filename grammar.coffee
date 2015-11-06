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


		# Expressions

		_expression: ->
			'try'

		_expression_list: -> commaSep1(@_expression)


	ubiquitous: -> [
		/\s+/
	]
