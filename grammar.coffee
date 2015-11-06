module.exports = grammar
	name: "swift"

	rules:
		program: -> repeat(@_statement)

		_statement: -> choice(
			@_expression,
			@_declaration
		)

		_expression: ->
			'try'

		_declaration: ->
			'import'

	ubiquitous: -> [
		/\s+/
	]
