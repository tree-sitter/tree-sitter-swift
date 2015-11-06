module.exports = grammar
	name: "swift"

	rules:
		program: -> repeat(@_statement)

		_statement: -> choice(
			@_expression,
			@_declaration,
			# @_loop_statement,
			# @_branch_statement,
			# @_labeled_statement,
			# @_control_transfer_statement,
			# @defer_statement,
			# @do_statement
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

	ubiquitous: -> [
		/\s+/
	]
