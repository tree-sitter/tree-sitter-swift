module.exports = grammar
	name: "swift"

	rules:
		program: -> repeat(@_statement)

		_statement: -> choice(
			@_expression,
			@_declaration,
			@_loop_statement,
			# @_branch_statement,
			# @_labeled_statement,
			# @_control_transfer_statement,
			# @defer_statement,
			# @do_statement
		)

		_statements: -> seq(
			@statement,
			optional(@statements)
		)

		_expression: ->
			'try'

		_declaration: ->
			'import'

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
			@code_block
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

	ubiquitous: -> [
		/\s+/
	]
