// Swift Lexical Structure
// https://docs.swift.org/swift-book/ReferenceManual/LexicalStructure.html

const PREC = {
  COMMENT: -1,
  CAST: 132,
  CONJUNCTIVE: 120,
  DISJUNCTIVE: 110,
  OPTIONAL_PATTERN: 10,
  TYPE_IDENTIFIER: 10,
  OPTIONAL_BINDING_CONDITION: 10,
  BREAK_STATEMENT: 10,
  CONTINUE_STATEMENT: 10,
  RETURN_STATEMENT: 10,
};

module.exports = grammar({
  name: "swift",

  conflicts: $ => [
    [$._variable_declaration_head, $.value_binding_pattern],
    [$._pattern, $._expression_list],
    [$._condition, $._condition_clause],
    [
      $._variable_name,
      $._expression // conflict between var foo: Int { … } and var foo: Int = …
    ],
  ],

  word: $ => $.identifier,

  extras: $ => [
    /\s+/,
    $.comment,
  ],

  rules: {
    program: $ => repeat($._statement),

    //
    // Statements
    //
    _statement: $ => seq(
      choice(
        $._expression,
        $._declaration,
        $._loop_statement,
        $.if_statement,
        $.guard_statement,
        $.switch_statement,
        $.labeled_statement,
        $.break_statement,
        $.continue_statement,
        $.fallthrough_statement,
        $.return_statement,
        $.throw_statement,
        $.defer_statement,
        $.do_statement,
        $.build_configuration_statement,
        $.diagnostic_statement,
        $.line_control_statement),
      choice(';', /\n/),
    ),

    _loop_statement: $ => choice(
      $.for_statement, $.while_statement, $.repeat_while_statement
    ),

    for_statement: $ => seq(
      'for',
      optional('case'),
      seq($._pattern, optional($._type_annotation)),
      'in',
      $._expression,
      $._code_block
    ),

    while_statement: $ => seq('while', $._condition_clause, $._code_block),

    _condition_clause: $ => choice(seq($._expression, optional(seq(',', commaSep1($._condition)))), seq(commaSep1($._condition)), seq($.availability_condition, ',', $._expression)),

    _condition: $ => choice($.availability_condition, $.case_condition, $.optional_binding_condition),

    _availability_platforms: $ => choice('iOS', 'iOSApplicationExtension', 'macOS', 'macOSApplicationExtension', 'watchOS', 'tvOS'),

    availability_condition: $ => seq(
      '#available',
      '(',
      commaSep1(
        choice(
          '*',
          seq($._availability_platforms,
            token(seq(/[0-9]+/, optional(seq('.', /[0-9]+/, optional(seq('.', /[0-9]+/)))))))
        )
      ),
      ')'
      ),

    case_condition: $ => seq('case', $._pattern, '=', $._expression),

    optional_binding_condition: $ => prec.right(PREC.OPTIONAL_BINDING_CONDITION, seq(choice('let', 'var'), $.optional_binding, optional(seq(',', commaSep1($.optional_binding))))),

    optional_binding: $ => seq($._pattern, '=', $._expression),

    repeat_while_statement: $ => seq('repeat', $._code_block, 'while', $._expression),

    if_statement: $ => seq(
      'if',
      $._condition_clause,
      $._code_block,
      optional(seq('else', choice($._code_block, $.if_statement)))
    ),

    guard_statement: $ => seq('guard', $._condition_clause, 'else', $._code_block),

    switch_statement: $ => seq('switch', $._expression, '{', repeat($.case_statement), '}'),

    case_statement: $ => seq(
      choice(seq('case', commaSep1(seq($._pattern)), ':'),
      seq('default', ':')), repeat($._statement)
    ),

    _code_block: $ => seq('{', repeat($._statement), '}'),

    labeled_statement: $ => seq($.identifier, ':', choice($._loop_statement, $.if_statement)),

    break_statement: $ => prec(PREC.BREAK_STATEMENT, seq('break', optional($.identifier))),

    continue_statement: $ => prec(PREC.CONTINUE_STATEMENT, seq('continue', optional($.identifier))),

    fallthrough_statement: $ => 'fallthrough',

    return_statement: $ => prec(PREC.RETURN_STATEMENT, seq('return', optional($._expression))),

    throw_statement: $ => seq('throw', optional($._expression)),

    defer_statement: $ => seq('defer', $._code_block),

    do_statement: $ => seq('do', $._code_block, repeat($.catch_clause)),

    catch_clause: $ => seq('catch', optional($._pattern), $._code_block),

    build_configuration_statement: $ => seq(
      '#if',
      $._build_configuration,
      repeat($._statement),
      repeat(seq('#elseif', $._build_configuration, repeat($._statement))),
      optional(seq('#else', repeat($._statement))),
      '#endif'
    ),

    _build_configuration: $ => choice(
      seq('os', '(', choice('iOS', 'macOS', 'watchOS', 'tvOS', 'Linux'), ')'),
      seq('arch', '(', choice('i386', 'x86_64', 'arm', 'arm64'), ')'),
      seq('canImport', '(', $.identifier, ')'),
      seq('targetEnvironment', '(', choice('simulator', 'macCatalyst'), ')'),
      seq(choice('compiler', 'swift'), '(', choice('>=', '<'), $.semantic_version, ')'),
      $.identifier,
      $.boolean_literal,
      seq('(', $._build_configuration, ')'),
      seq('!', $._build_configuration),
      prec.left(PREC.CONJUNCTIVE, seq($._build_configuration, '&&', $._build_configuration)),
      prec.left(PREC.DISJUNCTIVE, seq($._build_configuration, '||', $._build_configuration))
    ),

    line_control_statement: $ => seq('#line', optional(seq(/[0-9]+/, $.static_string_literal))),

    diagnostic_statement: $ => seq(
      choice('#error', '#warning'), '(', $.static_string_literal ,')'
    ),

    //
    // Declarations
    //
    _declaration: $ => choice(
      $.import_declaration,
      $.constant_declaration,
      $.variable_declaration,
      $.typealias_declaration,
      $.function_declaration,
      $.enum_declaration,
      $.struct_declaration,
      $.class_declaration,
      $.protocol_declaration,
      $.initializer_declaration,
      $.deinitializer_declaration,
      $.extension_declaration,
      $.subscript_declaration,
      $.operator_declaration
    ),

    import_declaration: $ => seq(
      'import',
      optional(choice('typealias', 'struct', 'class', 'enum', 'protocol', 'var', 'func')),
      seq(
        choice($.identifier, $.operator),
        repeat(seq(".", choice($.identifier, $.operator)))
      )
    ),

    constant_declaration: $ => seq(optional($.modifier), 'let', commaSep1($._pattern_initializer)),

    _pattern_initializer: $ => seq(
      field('name', $._pattern),
      optional(field('type', $._type_annotation)),
      optional(seq('=', field('value', $._expression)))
    ),

    variable_declaration: $ => seq(
      $._variable_declaration_head,
      choice(
        commaSep1($._pattern_initializer),
        seq(
          field('name', $._variable_name),
          field('type', $._type_annotation),
          choice($._code_block, $._getter_setter_keyword_block)
        )
      )
    ),

    _variable_declaration_head: $ => seq(optional($.modifier), 'var'),

    _variable_name: $ => $.identifier,

    _getter_setter_keyword_block: $ => seq(
      '{',
      choice(seq($._getter_keyword_clause, optional($._setter_keyword_clause)),
      seq($._setter_keyword_clause, $._getter_keyword_clause)),
      '}'
    ),

    _getter_keyword_clause: $ => seq('get'),

    _setter_keyword_clause: $ => seq('set'),

    typealias_declaration: $ => seq($._typealias_head, '=', $.type),

    _typealias_head: $ => seq(optional($.modifier), 'typealias', $.identifier),

    function_declaration: $ => seq(
      $._function_head,
      $._function_signature,
      optional($._code_block)
    ),

    _function_head: $ => seq(
      optional($.modifier),
      'func',
      field('name', choice($.identifier, $.operator))
    ),

    _function_signature: $ => seq(
      $.parameter_list,
      optional(choice('throws', 'rethrows')),
      optional($._function_return_statement)
    ),

    parameter_list: $ => seq(
      '(',
      optional(seq(
        commaSep1(
          alias($._single_parameter, $.parameter_declaration),
          optional(',')
        ))),
      ')'
    ),

    _function_return_statement: $ => seq('->', field('return', $.type)),

    _parameter_clause: $ => seq(
      '(',
      optional(seq(
        commaSep1($._single_parameter),
        optional(',')
      )),
      ')'
    ),

    _single_parameter: $ => seq(
      optional(choice($.identifier, '_')),
      optional($.identifier),
      $._type_annotation,
      optional(seq('=', $._expression))
    ),

    enum_declaration: $ => seq(
      repeat($.modifier),
      optional('indirect'),
      'enum',
      $.identifier,
      '{',
      repeat(choice($._declaration, $.case_declaration)),
      '}'
    ),

    case_declaration: $ => seq(
      optional('indirect'),
      'case',
      $.identifier,
      optional(
        choice($.tuple_type, seq('=', choice($.static_string_literal, $.boolean_literal)))
      )
    ),

    modifier: $ => choice(
      'public',
      'private',
      'fileprivate',
      'open',
      'internal',
      'final'
    ),

    struct_declaration: $ => seq(
      repeat($.modifier),
      'struct',
      $.identifier,
      '{',
      repeat($._declaration),
      '}'
    ),

    class_declaration: $ => seq(
      repeat($.modifier),
      'class',
      $.identifier,
      '{',
      repeat($._declaration),
      '}'
    ),

    protocol_declaration: $ => seq(
      repeat($.modifier),
      'protocol',
      $.identifier,
      '{',
      repeat(
        choice(
          $.protocol_variable_declaration,
          $.protocol_method_declaration,
          $.protocol_initializer_declaration,
          $.protocol_subscript_declaration,
          $.protocol_associated_type_declaration)
        ),
      '}'
    ),

    protocol_variable_declaration: $ => seq(
      $._variable_declaration_head,
      $.identifier,
      $._type_annotation,
      $._getter_setter_keyword_block
    ),

    protocol_method_declaration: $ => seq($._function_head, $._function_signature),

    protocol_initializer_declaration: $ => seq(
      $._initializer_head,
      $._parameter_clause,
      optional(choice('throws', 'rethrows'))
    ),

    protocol_subscript_declaration: $ => seq($._subscript_head, $._subscript_result, $._getter_setter_keyword_block),

    protocol_associated_type_declaration: $ => seq(
      $._typealias_head,
      optional(seq('=', $.type))
    ),

    initializer_declaration: $ => seq(
      $._initializer_head,
      $._parameter_clause,
      optional(choice('throws', 'rethrows')),
      $._code_block
    ),

    _initializer_head: $ => seq('init', optional(choice('!', '?'))),

    deinitializer_declaration: $ => seq('deinit', $._code_block),

    extension_declaration: $ => seq(
      repeat($.modifier),
      'extension',
      $._type_identifier,
      '{',
      repeat($._declaration),
      '}'
    ),

    subscript_declaration: $ => seq(
      $._subscript_head,
      $._subscript_result,
      choice($._code_block, $._getter_setter_keyword_block)
    ),

    _subscript_head: $ => seq('subscript', $._parameter_clause),

    _subscript_result: $ => seq('->', $.type),

    operator_declaration: $ => choice(
      seq('prefix', 'operator', $.operator, '{', '}'),
      seq('postfix', 'operator', $.operator, '{', '}'),
      seq(
        'infix',
        'operator',
        $.operator,
        '{',
        choice(
          seq(optional($.precedence_clause), optional($.associativity_clause)),
          seq($.associativity_clause, optional($.precedence_clause))
        ),
        '}'
      )
    ),

    precedence_clause: $ => seq('precedence', /[0-9]|[1-9][0-9]|1[0-9][0-9]|2([0-4][0-9]|5[0-5])/),

    associativity_clause: $ => seq('associativity', choice('left', 'right', 'none')),

    //
    // Patterns
    //
    _pattern: $ => choice(
      $.wildcard_pattern,
      $.value_binding_pattern,
      $.tuple_pattern,
      $.enum_case_pattern,
      $.optional_pattern,
      $.is_pattern,
      $.as_pattern,
      $._expression
    ),

    wildcard_pattern: $ => '_',

    value_binding_pattern: $ => seq(choice('var', 'let'), $._pattern),

    tuple_pattern: $ => seq(
      '(',
      optional($._tuple_pattern_element_list),
      ')'
    ),

    _tuple_pattern_element_list: $ => commaSep1($._pattern),

    enum_case_pattern: $ => seq(
      optional($._type_identifier),
      '.',
      $.identifier,
      optional($.tuple_pattern)
    ),

    optional_pattern: $ => prec(PREC.OPTIONAL_PATTERN, seq($._pattern, '?')),

    is_pattern: $ => seq('is', $.type),

    as_pattern: $ => prec(PREC.CAST, seq($._pattern, 'as', $.type)),

    //
    // Expressions
    //
    _expression: $ => choice(
      $.identifier,
      $.number,
      alias($.boolean_literal, $.boolean),
      $.nil,
      alias($.static_string_literal, $.string),
    ),

    _expression_list: $ => commaSep1($._expression),

    //
    // Standard Library Types
    //
    boolean_literal: $ => choice('true', 'false'),

    static_string_literal: $ => /"((\\([\\0tnr'"]|u\{[a-fA-F0-9]{1,8}\}))|[^"\\\u000a\u000d])*"/,

    number: $ => {
      const decimal_digits = /\d(_?\d)*/
      const signed_operators = optional(/[-\+]/)
      const signed_integer = seq(signed_operators, decimal_digits)
      const decimal_integer_literal = seq(
        choice(
          '0',
          seq(
            optional('0'), /[1-9]/,
            optional(seq(optional('_'), decimal_digits))
          )
        )
      )
      const hex_literal = seq(
        choice('0x', '0X'),
        /[\da-fA-F](_?[\da-fA-F])*/
      )

      const exponent_part = seq(choice('e', 'E'), signed_integer)
      const binary_literal = seq(choice('0b', '0B'), /[0-1](_?[0-1])*/)
      const octal_literal = seq(choice('0o', '0O'), /[0-7](_?[0-7])*/)
      const bigint_literal = seq(choice(hex_literal, binary_literal, octal_literal, decimal_digits), 'n')

      const decimal_literal = choice(
        seq(signed_operators, decimal_integer_literal, '.', optional(decimal_digits), optional(exponent_part)),
        seq(signed_operators, '.', decimal_digits, optional(exponent_part)),
        seq(signed_operators, decimal_integer_literal, exponent_part),
        seq(signed_operators, decimal_digits),
      )

      return token(choice(
        hex_literal,
        decimal_literal,
        binary_literal,
        octal_literal,
        bigint_literal
      ))
    },

    nil: $ => 'nil',

    //
    // Types
    //
    type: $ => choice($._type_identifier, $.tuple_type),

    _type_annotation: $ => seq(':', $.type),

    _type_identifier: $ => prec.left(PREC.TYPE_IDENTIFIER, seq($._type_name, optional(seq('.', $._type_identifier)))),

    _type_name: $ => $.identifier,

    tuple_type: $ => seq(
      '(',
      commaSep(
        seq(optional('inout'), choice($.type, seq($.identifier, $._type_annotation)))
      ),
      optional('...'),
      ')'
    ),

    //
    // Lexical Structure
    //
    identifier: $ => {
      const _identifier_head = /[A-Za-z_]/;
      const _identifier_characters = repeat(choice(_identifier_head, /[0-9]/));

      return token(
        choice(
          seq(_identifier_head, optional(_identifier_characters)),
          seq('`', _identifier_head, optional(_identifier_characters), '`')
        )
      );
    },

    operator: $ => {
      const _operator_head = choice('/', '=', '-', '+', '!', '*', '%', '<', '>', '&', '|', '^', '~', '?');
      return token(repeat1(_operator_head));
    },

    semantic_version: $ => /(\d+\.)?(\d+\.)?(\*|\d+)/,


    comment: $ => token(prec(PREC.COMMENT, choice(
      // Single-line comments (including documentation comments)
      seq(/\/{2,3}[^/].*/),
      // Multiple-line comments (including documentation comments).
      seq(
        /\/\*{1,}[^*]*\*+([^/*][^*]*\*+)*\//,
      ),
    ))),
  }
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
