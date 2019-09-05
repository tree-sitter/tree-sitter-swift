// Generated by CoffeeScript 2.4.1
(function() {
  var PREC, commaSep, commaSep1;

  commaSep1 = function(rule) {
    return seq(rule, repeat(seq(",", rule)));
  };

  commaSep = function(rule) {
    return optional(commaSep1(rule));
  };

  PREC = {
    CAST: 132,
    CONJUNCTIVE: 120,
    DISJUNCTIVE: 110,
    OPTIONAL_PATTERN: 10,
    TYPE_IDENTIFIER: 10,
    OPTIONAL_BINDING_CONDITION: 10,
    BREAK_STATEMENT: 10,
    CONTINUE_STATEMENT: 10,
    RETURN_STATEMENT: 10
  };

  module.exports = grammar({
    name: "swift",
    conflicts: function() {
      return [
        [this._variable_declaration_head,
        this.value_binding_pattern],
        [this._pattern,
        this._expression_list],
        [this._condition,
        this._condition_clause],
        [
          this._variable_name,
          this._expression // conflict between var foo: Int { … } and var foo: Int = …
        ]
      ];
    },
    ubiquitous: function() {
      return [/\s+/];
    },
    rules: {
      program: function() {
        return repeat(this._statement);
      },
      // Statements
      _statement: function() {
        return seq(choice(this._expression, this._declaration, this._loop_statement, this.if_statement, this.guard_statement, this.switch_statement, this.labeled_statement, this.break_statement, this.continue_statement, this.fallthrough_statement, this.return_statement, this.throw_statement, this.defer_statement, this.do_statement, this.build_configuration_statement, this.line_control_statement), choice(';', /\n/));
      },
      _loop_statement: function() {
        return choice(this.for_statement, this.for_in_statement, this.while_statement, this.repeat_while_statement);
      },
      for_statement: function() {
        return seq('for', choice(this._for_condition, seq('(', this._for_condition, ')')), this._code_block);
      },
      _for_init: function() {
        return choice(this.variable_declaration, this._expression_list);
      },
      _for_condition: function() {
        return seq(optional(this._for_init), ';', optional(this._expression), ';', optional(this._expression));
      },
      for_in_statement: function() {
        // optional(@_where_clause),
        return seq('for', optional('case'), seq(this._pattern, optional(this._type_annotation)), 'in', this._expression, this._code_block);
      },
      while_statement: function() {
        return seq('while', this._condition_clause, this._code_block);
      },
      _condition_clause: function() {
        return choice(seq(this._expression, optional(seq(',', commaSep1(this._condition)))), seq(commaSep1(this._condition)), seq(this.availability_condition, ',', this._expression));
      },
      _condition: function() {
        return choice(this.availability_condition, this.case_condition, this.optional_binding_condition);
      },
      availability_condition: function() {
        return seq('#available', '(', commaSep1(choice('*', seq(choice('iOS', 'iOSApplicationExtension', 'OSX', 'OSXApplicationExtension', 'watchOS', 'tvOS'), token(seq(/[0-9]+/, optional(seq('.', /[0-9]+/, optional(seq('.', /[0-9]+/))))))))), ')');
      },
      case_condition: function() {
        return seq('case', this._pattern, '=', this._expression);
      },
      // optional(@_where_clause)
      optional_binding_condition: function() {
        return prec.right(PREC.OPTIONAL_BINDING_CONDITION, seq(choice('let', 'var'), this.optional_binding, optional(seq(',', commaSep1(this.optional_binding)))));
      },
      // optional(@_where_clause)
      optional_binding: function() {
        return seq(this._pattern, '=', this._expression);
      },
      repeat_while_statement: function() {
        return seq('repeat', this._code_block, 'while', this._expression);
      },
      if_statement: function() {
        return seq('if', this._condition_clause, this._code_block, optional(seq('else', choice(this._code_block, this.if_statement))));
      },
      guard_statement: function() {
        return seq('guard', this._condition_clause, 'else', this._code_block);
      },
      switch_statement: function() {
        return seq('switch', this._expression, '{', repeat(this.case_statement), '}');
      },
      case_statement: function() {
        // optional(@_where_clause)
        return seq(choice(seq('case', commaSep1(seq(this._pattern)), ':'), seq('default', ':')), repeat(this._statement));
      },
      _code_block: function() {
        return seq('{', repeat(this._statement), '}');
      },
      labeled_statement: function() {
        return seq(this.identifier, ':', choice(this._loop_statement, this.if_statement));
      },
      break_statement: function() {
        return prec(PREC.BREAK_STATEMENT, seq('break', optional(this.identifier)));
      },
      continue_statement: function() {
        return prec(PREC.CONTINUE_STATEMENT, seq('continue', optional(this.identifier)));
      },
      fallthrough_statement: function() {
        return 'fallthrough';
      },
      return_statement: function() {
        return prec(PREC.RETURN_STATEMENT, seq('return', optional(this._expression)));
      },
      throw_statement: function() {
        return seq('throw', optional(this._expression));
      },
      defer_statement: function() {
        return seq('defer', this._code_block);
      },
      do_statement: function() {
        return seq('do', this._code_block, repeat(this.catch_clause));
      },
      catch_clause: function() {
        // optional(@_where_clause),
        return seq('catch', optional(this._pattern), this._code_block);
      },
      build_configuration_statement: function() {
        return seq('#if', this._build_configuration, repeat(this._statement), repeat(seq('#elseif', this._build_configuration, repeat(this._statement))), optional(seq('#else', repeat(this._statement))), '#endif');
      },
      _build_configuration: function() {
        return choice(seq('os', '(', choice('iOS', 'OSX', 'watchOS', 'tvOS'), ')'), seq('arch', '(', choice('i386', 'x86_64', 'arm', 'arm64'), ')'), this.identifier, this.boolean_literal, seq('(', this._build_configuration, ')'), seq('!', this._build_configuration), prec.left(PREC.CONJUNCTIVE, seq(this._build_configuration, '&&', this._build_configuration)), prec.left(PREC.DISJUNCTIVE, seq(this._build_configuration, '||', this._build_configuration)));
      },
      line_control_statement: function() {
        return seq('#line', optional(seq(/[0-9]+/, this.static_string_literal)));
      },
      // Declarations
      _declaration: function() {
        return choice(this.import_declaration, this.constant_declaration, this.variable_declaration, this.typealias_declaration, this.function_declaration, this.enum_declaration, this.struct_declaration, this.class_declaration, this.protocol_declaration, this.initializer_declaration, this.deinitializer_declaration, this.extension_declaration, this.subscript_declaration, this.operator_declaration);
      },
      import_declaration: function() {
        // optional(@_attributes),
        return seq('import', optional(choice('typealias', 'struct', 'class', 'enum', 'protocol', 'var', 'func')), seq(choice(this.identifier, this.operator), repeat(seq(".", choice(this.identifier, this.operator)))));
      },
      constant_declaration: function() {
        // optional(@_attributes),
        // optional(@_declaration_modifiers),
        return seq('let', commaSep1(this._pattern_initializer));
      },
      _pattern_initializer: function() {
        return seq(this._pattern, optional(this._type_annotation), optional(seq('=', this._expression)));
      },
      variable_declaration: function() {
        // @_getter_setter_block,
        return seq(this._variable_declaration_head, choice(commaSep1(this._pattern_initializer), seq(this._variable_name, this._type_annotation, choice(this._code_block, this._getter_setter_keyword_block))));
      },
      // seq(@_variable_name, @_initializer, @_willSet_didSet_block),
      // seq(optional(@_initializer), @_willSet_didSet_block)
      _variable_declaration_head: function() {
        // optional(@_attributes),
        // optional(@_declaration_modifiers),
        return seq('var');
      },
      _variable_name: function() {
        return this.identifier;
      },
      _getter_setter_keyword_block: function() {
        return seq('{', choice(seq(this._getter_keyword_clause, optional(this._setter_keyword_clause)), seq(this._setter_keyword_clause, this._getter_keyword_clause)), '}');
      },
      _getter_keyword_clause: function() {
        // optional(@_attributes),
        return seq('get');
      },
      _setter_keyword_clause: function() {
        // optional(@_attributes),
        return seq('set');
      },
      typealias_declaration: function() {
        return seq(this._typealias_head, '=', this.type);
      },
      _typealias_head: function() {
        // optional(@_attributes),
        // optional(@access_level_modifier),
        return seq('typealias', this.identifier);
      },
      function_declaration: function() {
        // optional(@_generic_parameter_clause),
        return seq(this._function_head, this._function_signature, optional(this._code_block));
      },
      _function_head: function() {
        // optional(@_attributes),
        // optional(@_declaration_modifiers),
        return seq('func', choice(this.identifier, this.operator));
      },
      _function_signature: function() {
        // optional(@_attributes),
        return seq(repeat1(this._parameter_clause), optional(choice('throws', 'rethrows')), optional(seq('->', this.type)));
      },
      _parameter_clause: function() {
        return seq('(', commaSep(seq(optional(choice('let', 'var', 'inout')), optional(choice(this.identifier, '_')), choice(this.identifier, '_'), this._type_annotation, optional(seq('=', this._expression)))), ')');
      },
      enum_declaration: function() {
        // optional(@_attributes),
        // optional(@access_level_modifier),
        // optional(@_generic_parameter_clause),
        // optional(@_type_inheritance_clause),
        return seq(optional('indirect'), 'enum', this.identifier, '{', repeat(choice(this._declaration, this.case_declaration)), '}');
      },
      case_declaration: function() {
        // optional(@_attributes),
        // @numeric_literal,
        return seq(optional('indirect'), 'case', this.identifier, optional(choice(this.tuple_type, seq('=', choice(this.static_string_literal, this.boolean_literal)))));
      },
      struct_declaration: function() {
        // optional(@_attributes),
        // optional(@access_level_modifier),
        // optional(@_generic_parameter_clause),
        // optional(@_type_inheritance_clause),
        return seq('struct', this.identifier, '{', repeat(this._declaration), '}');
      },
      class_declaration: function() {
        // optional(@_attributes),
        // optional(@access_level_modifier),
        // optional(@_generic_parameter_clause),
        // optional(@_type_inheritance_clause),
        return seq('class', this.identifier, '{', repeat(this._declaration), '}');
      },
      protocol_declaration: function() {
        // optional(@_attributes),
        // optional(@access_level_modifier),
        // optional(@_type_inheritance_clause),
        return seq('protocol', this.identifier, '{', repeat(choice(this.protocol_variable_declaration, this.protocol_method_declaration, this.protocol_initializer_declaration, this.protocol_subscript_declaration, this.protocol_associated_type_declaration)), '}');
      },
      protocol_variable_declaration: function() {
        return seq(this._variable_declaration_head, this.identifier, this._type_annotation, this._getter_setter_keyword_block);
      },
      protocol_method_declaration: function() {
        // optional(@_generic_parameter_clause),
        return seq(this._function_head, this._function_signature);
      },
      protocol_initializer_declaration: function() {
        // optional(@_generic_parameter_clause),
        return seq(this._initializer_head, this._parameter_clause, optional(choice('throws', 'rethrows')));
      },
      protocol_subscript_declaration: function() {
        return seq(this._subscript_head, this._subscript_result, this._getter_setter_keyword_block);
      },
      protocol_associated_type_declaration: function() {
        // optional(@_type_inheritance_clause),
        return seq(this._typealias_head, optional(seq('=', this.type)));
      },
      initializer_declaration: function() {
        // optional(@_generic_parameter_clause),
        return seq(this._initializer_head, this._parameter_clause, optional(choice('throws', 'rethrows')), this._code_block);
      },
      _initializer_head: function() {
        // optional(@_attributes),
        // optional(@_declaration_modifiers),
        return seq('init', optional(choice('!', '?')));
      },
      deinitializer_declaration: function() {
        // optional(@_attributes),
        return seq('deinit', this._code_block);
      },
      extension_declaration: function() {
        // optional(@access_level_modifier),
        // optional(@_type_inheritance_clause),
        return seq('extension', this._type_identifier, '{', repeat(this._declaration), '}');
      },
      subscript_declaration: function() {
        // @_getter_setter_block,
        return seq(this._subscript_head, this._subscript_result, choice(this._code_block, this._getter_setter_keyword_block));
      },
      _subscript_head: function() {
        // optional(@_attributes),
        // optional(@_declaration_modifiers),
        return seq('subscript', this._parameter_clause);
      },
      _subscript_result: function() {
        // optional(@_attributes),
        return seq('->', this.type);
      },
      operator_declaration: function() {
        return choice(seq('prefix', 'operator', this.operator, '{', '}'), seq('postfix', 'operator', this.operator, '{', '}'), seq('infix', 'operator', this.operator, '{', choice(seq(optional(this.precedence_clause), optional(this.associativity_clause)), seq(this.associativity_clause, optional(this.precedence_clause))), '}'));
      },
      precedence_clause: function() {
        return seq('precedence', /[0-9]|[1-9][0-9]|1[0-9][0-9]|2([0-4][0-9]|5[0-5])/);
      },
      associativity_clause: function() {
        return seq('associativity', choice('left', 'right', 'none'));
      },
      // Patterns
      _pattern: function() {
        return choice(this.wildcard_pattern, this.value_binding_pattern, this.tuple_pattern, this.enum_case_pattern, this.optional_pattern, this.is_pattern, this.as_pattern, this._expression);
      },
      wildcard_pattern: function() {
        return '_';
      },
      value_binding_pattern: function() {
        return seq(choice('var', 'let'), this._pattern);
      },
      tuple_pattern: function() {
        return seq('(', optional(this._tuple_pattern_element_list), ')');
      },
      _tuple_pattern_element_list: function() {
        return commaSep1(this._pattern);
      },
      enum_case_pattern: function() {
        return seq(optional(this._type_identifier), '.', this.identifier, optional(this.tuple_pattern));
      },
      optional_pattern: function() {
        return prec(PREC.OPTIONAL_PATTERN, seq(this._pattern, '?'));
      },
      is_pattern: function() {
        return seq('is', this.type);
      },
      as_pattern: function() {
        return prec(PREC.CAST, seq(this._pattern, 'as', this.type));
      },
      // Expressions
      _expression: function() {
        return this.identifier;
      },
      _expression_list: function() {
        return commaSep1(this._expression);
      },
      boolean_literal: function() {
        return choice('true', 'false');
      },
      // Lexical Structure
      identifier: function() {
        var _identifier_characters, _identifier_head;
        _identifier_head = /[A-Za-z_]/;
        _identifier_characters = repeat(choice(_identifier_head, /[0-9]/));
        return token(choice(seq(_identifier_head, optional(_identifier_characters)), seq('`', _identifier_head, optional(_identifier_characters), '`')));
      },
      operator: function() {
        var _operator_head;
        _operator_head = choice('/', '=', '-', '+', '!', '*', '%', '<', '>', '&', '|', '^', '~', '?');
        return token(repeat1(_operator_head));
      },
      static_string_literal: function() {
        return /"((\\([\\0tnr'"]|u\{[a-fA-F0-9]{1,8}\}))|[^"\\\u000a\u000d])*"/;
      },
      // Types
      type: function() {
        return choice(this._type_identifier, this.tuple_type);
      },
      _type_annotation: function() {
        // optional(@_attributes),
        return seq(':', this.type);
      },
      _type_identifier: function() {
        // optional(@_generic_argument_clause),
        return prec.left(PREC.TYPE_IDENTIFIER, seq(this._type_name, optional(seq('.', this._type_identifier))));
      },
      _type_name: function() {
        return this.identifier;
      },
      tuple_type: function() {
        // optional(@_attributes),
        return seq('(', commaSep(seq(optional('inout'), choice(this.type, seq(this.identifier, this._type_annotation)))), optional('...'), ')');
      }
    }
  });

}).call(this);
