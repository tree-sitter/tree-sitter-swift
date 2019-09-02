#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 683
#define SYMBOL_COUNT 195
#define ALIAS_COUNT 0
#define TOKEN_COUNT 93
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9

enum {
  anon_sym_SEMI = 1,
  aux_sym__statement_token1 = 2,
  anon_sym_for = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_case = 6,
  anon_sym_in = 7,
  anon_sym_while = 8,
  anon_sym_COMMA = 9,
  anon_sym_POUNDavailable = 10,
  anon_sym_STAR = 11,
  anon_sym_iOS = 12,
  anon_sym_iOSApplicationExtension = 13,
  anon_sym_OSX = 14,
  anon_sym_OSXApplicationExtension = 15,
  anon_sym_watchOS = 16,
  anon_sym_tvOS = 17,
  aux_sym_availability_condition_token1 = 18,
  anon_sym_EQ = 19,
  anon_sym_let = 20,
  anon_sym_var = 21,
  anon_sym_repeat = 22,
  anon_sym_if = 23,
  anon_sym_else = 24,
  anon_sym_guard = 25,
  anon_sym_switch = 26,
  anon_sym_LBRACE = 27,
  anon_sym_RBRACE = 28,
  anon_sym_COLON = 29,
  anon_sym_default = 30,
  anon_sym_break = 31,
  anon_sym_continue = 32,
  sym_fallthrough_statement = 33,
  anon_sym_return = 34,
  anon_sym_throw = 35,
  anon_sym_defer = 36,
  anon_sym_do = 37,
  anon_sym_catch = 38,
  anon_sym_POUNDif = 39,
  anon_sym_POUNDelseif = 40,
  anon_sym_POUNDelse = 41,
  anon_sym_POUNDendif = 42,
  anon_sym_os = 43,
  anon_sym_arch = 44,
  anon_sym_i386 = 45,
  anon_sym_x86_64 = 46,
  anon_sym_arm = 47,
  anon_sym_arm64 = 48,
  anon_sym_BANG = 49,
  anon_sym_AMP_AMP = 50,
  anon_sym_PIPE_PIPE = 51,
  anon_sym_POUNDline = 52,
  aux_sym_line_control_statement_token1 = 53,
  anon_sym_import = 54,
  anon_sym_typealias = 55,
  anon_sym_struct = 56,
  anon_sym_class = 57,
  anon_sym_enum = 58,
  anon_sym_protocol = 59,
  anon_sym_func = 60,
  anon_sym_DOT = 61,
  anon_sym_get = 62,
  anon_sym_set = 63,
  anon_sym_throws = 64,
  anon_sym_rethrows = 65,
  anon_sym_DASH_GT = 66,
  anon_sym_inout = 67,
  anon_sym__ = 68,
  anon_sym_indirect = 69,
  anon_sym_init = 70,
  anon_sym_QMARK = 71,
  anon_sym_deinit = 72,
  anon_sym_extension = 73,
  anon_sym_subscript = 74,
  anon_sym_prefix = 75,
  anon_sym_operator = 76,
  anon_sym_postfix = 77,
  anon_sym_infix = 78,
  anon_sym_precedence = 79,
  aux_sym_precedence_clause_token1 = 80,
  anon_sym_associativity = 81,
  anon_sym_left = 82,
  anon_sym_right = 83,
  anon_sym_none = 84,
  anon_sym_is = 85,
  anon_sym_as = 86,
  anon_sym_true = 87,
  anon_sym_false = 88,
  sym_identifier = 89,
  sym_operator = 90,
  sym_static_string_literal = 91,
  anon_sym_DOT_DOT_DOT = 92,
  sym_program = 93,
  sym__statement = 94,
  sym__loop_statement = 95,
  sym_for_statement = 96,
  sym__for_init = 97,
  sym__for_condition = 98,
  sym_for_in_statement = 99,
  sym_while_statement = 100,
  sym__condition_clause = 101,
  sym__condition = 102,
  sym_availability_condition = 103,
  sym_case_condition = 104,
  sym_optional_binding_condition = 105,
  sym_optional_binding = 106,
  sym_repeat_while_statement = 107,
  sym_if_statement = 108,
  sym_guard_statement = 109,
  sym_switch_statement = 110,
  sym_case_statement = 111,
  sym__code_block = 112,
  sym_labeled_statement = 113,
  sym_break_statement = 114,
  sym_continue_statement = 115,
  sym_return_statement = 116,
  sym_throw_statement = 117,
  sym_defer_statement = 118,
  sym_do_statement = 119,
  sym_catch_clause = 120,
  sym_build_configuration_statement = 121,
  sym__build_configuration = 122,
  sym_line_control_statement = 123,
  sym__declaration = 124,
  sym_import_declaration = 125,
  sym_constant_declaration = 126,
  sym__pattern_initializer = 127,
  sym_variable_declaration = 128,
  sym__variable_declaration_head = 129,
  sym__variable_name = 130,
  sym__getter_setter_keyword_block = 131,
  sym__getter_keyword_clause = 132,
  sym__setter_keyword_clause = 133,
  sym_typealias_declaration = 134,
  sym__typealias_head = 135,
  sym_function_declaration = 136,
  sym__function_head = 137,
  sym__function_signature = 138,
  sym__parameter_clause = 139,
  sym_enum_declaration = 140,
  sym_case_declaration = 141,
  sym_struct_declaration = 142,
  sym_class_declaration = 143,
  sym_protocol_declaration = 144,
  sym_protocol_variable_declaration = 145,
  sym_protocol_method_declaration = 146,
  sym_protocol_initializer_declaration = 147,
  sym_protocol_subscript_declaration = 148,
  sym_protocol_associated_type_declaration = 149,
  sym_initializer_declaration = 150,
  sym__initializer_head = 151,
  sym_deinitializer_declaration = 152,
  sym_extension_declaration = 153,
  sym_subscript_declaration = 154,
  sym__subscript_head = 155,
  sym__subscript_result = 156,
  sym_operator_declaration = 157,
  sym_precedence_clause = 158,
  sym_associativity_clause = 159,
  sym__pattern = 160,
  sym_wildcard_pattern = 161,
  sym_value_binding_pattern = 162,
  sym_tuple_pattern = 163,
  sym__tuple_pattern_element_list = 164,
  sym_enum_case_pattern = 165,
  sym_optional_pattern = 166,
  sym_is_pattern = 167,
  sym_as_pattern = 168,
  sym__expression = 169,
  sym__expression_list = 170,
  sym_boolean_literal = 171,
  sym_type = 172,
  sym__type_annotation = 173,
  sym__type_identifier = 174,
  sym__type_name = 175,
  sym_tuple_type = 176,
  aux_sym_program_repeat1 = 177,
  aux_sym__condition_clause_repeat1 = 178,
  aux_sym_availability_condition_repeat1 = 179,
  aux_sym_optional_binding_condition_repeat1 = 180,
  aux_sym_switch_statement_repeat1 = 181,
  aux_sym_case_statement_repeat1 = 182,
  aux_sym_do_statement_repeat1 = 183,
  aux_sym_build_configuration_statement_repeat1 = 184,
  aux_sym_import_declaration_repeat1 = 185,
  aux_sym_constant_declaration_repeat1 = 186,
  aux_sym__function_signature_repeat1 = 187,
  aux_sym__parameter_clause_repeat1 = 188,
  aux_sym_enum_declaration_repeat1 = 189,
  aux_sym_struct_declaration_repeat1 = 190,
  aux_sym_protocol_declaration_repeat1 = 191,
  aux_sym__tuple_pattern_element_list_repeat1 = 192,
  aux_sym__expression_list_repeat1 = 193,
  aux_sym_tuple_type_repeat1 = 194,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym__statement_token1] = "_statement_token1",
  [anon_sym_for] = "for",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_case] = "case",
  [anon_sym_in] = "in",
  [anon_sym_while] = "while",
  [anon_sym_COMMA] = ",",
  [anon_sym_POUNDavailable] = "#available",
  [anon_sym_STAR] = "*",
  [anon_sym_iOS] = "iOS",
  [anon_sym_iOSApplicationExtension] = "iOSApplicationExtension",
  [anon_sym_OSX] = "OSX",
  [anon_sym_OSXApplicationExtension] = "OSXApplicationExtension",
  [anon_sym_watchOS] = "watchOS",
  [anon_sym_tvOS] = "tvOS",
  [aux_sym_availability_condition_token1] = "availability_condition_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_let] = "let",
  [anon_sym_var] = "var",
  [anon_sym_repeat] = "repeat",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_guard] = "guard",
  [anon_sym_switch] = "switch",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_default] = "default",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [sym_fallthrough_statement] = "fallthrough_statement",
  [anon_sym_return] = "return",
  [anon_sym_throw] = "throw",
  [anon_sym_defer] = "defer",
  [anon_sym_do] = "do",
  [anon_sym_catch] = "catch",
  [anon_sym_POUNDif] = "#if",
  [anon_sym_POUNDelseif] = "#elseif",
  [anon_sym_POUNDelse] = "#else",
  [anon_sym_POUNDendif] = "#endif",
  [anon_sym_os] = "os",
  [anon_sym_arch] = "arch",
  [anon_sym_i386] = "i386",
  [anon_sym_x86_64] = "x86_64",
  [anon_sym_arm] = "arm",
  [anon_sym_arm64] = "arm64",
  [anon_sym_BANG] = "!",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_POUNDline] = "#line",
  [aux_sym_line_control_statement_token1] = "line_control_statement_token1",
  [anon_sym_import] = "import",
  [anon_sym_typealias] = "typealias",
  [anon_sym_struct] = "struct",
  [anon_sym_class] = "class",
  [anon_sym_enum] = "enum",
  [anon_sym_protocol] = "protocol",
  [anon_sym_func] = "func",
  [anon_sym_DOT] = ".",
  [anon_sym_get] = "get",
  [anon_sym_set] = "set",
  [anon_sym_throws] = "throws",
  [anon_sym_rethrows] = "rethrows",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_inout] = "inout",
  [anon_sym__] = "_",
  [anon_sym_indirect] = "indirect",
  [anon_sym_init] = "init",
  [anon_sym_QMARK] = "?",
  [anon_sym_deinit] = "deinit",
  [anon_sym_extension] = "extension",
  [anon_sym_subscript] = "subscript",
  [anon_sym_prefix] = "prefix",
  [anon_sym_operator] = "operator",
  [anon_sym_postfix] = "postfix",
  [anon_sym_infix] = "infix",
  [anon_sym_precedence] = "precedence",
  [aux_sym_precedence_clause_token1] = "precedence_clause_token1",
  [anon_sym_associativity] = "associativity",
  [anon_sym_left] = "left",
  [anon_sym_right] = "right",
  [anon_sym_none] = "none",
  [anon_sym_is] = "is",
  [anon_sym_as] = "as",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_identifier] = "identifier",
  [sym_operator] = "operator",
  [sym_static_string_literal] = "static_string_literal",
  [anon_sym_DOT_DOT_DOT] = "...",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym__loop_statement] = "_loop_statement",
  [sym_for_statement] = "for_statement",
  [sym__for_init] = "_for_init",
  [sym__for_condition] = "_for_condition",
  [sym_for_in_statement] = "for_in_statement",
  [sym_while_statement] = "while_statement",
  [sym__condition_clause] = "_condition_clause",
  [sym__condition] = "_condition",
  [sym_availability_condition] = "availability_condition",
  [sym_case_condition] = "case_condition",
  [sym_optional_binding_condition] = "optional_binding_condition",
  [sym_optional_binding] = "optional_binding",
  [sym_repeat_while_statement] = "repeat_while_statement",
  [sym_if_statement] = "if_statement",
  [sym_guard_statement] = "guard_statement",
  [sym_switch_statement] = "switch_statement",
  [sym_case_statement] = "case_statement",
  [sym__code_block] = "_code_block",
  [sym_labeled_statement] = "labeled_statement",
  [sym_break_statement] = "break_statement",
  [sym_continue_statement] = "continue_statement",
  [sym_return_statement] = "return_statement",
  [sym_throw_statement] = "throw_statement",
  [sym_defer_statement] = "defer_statement",
  [sym_do_statement] = "do_statement",
  [sym_catch_clause] = "catch_clause",
  [sym_build_configuration_statement] = "build_configuration_statement",
  [sym__build_configuration] = "_build_configuration",
  [sym_line_control_statement] = "line_control_statement",
  [sym__declaration] = "_declaration",
  [sym_import_declaration] = "import_declaration",
  [sym_constant_declaration] = "constant_declaration",
  [sym__pattern_initializer] = "_pattern_initializer",
  [sym_variable_declaration] = "variable_declaration",
  [sym__variable_declaration_head] = "_variable_declaration_head",
  [sym__variable_name] = "_variable_name",
  [sym__getter_setter_keyword_block] = "_getter_setter_keyword_block",
  [sym__getter_keyword_clause] = "_getter_keyword_clause",
  [sym__setter_keyword_clause] = "_setter_keyword_clause",
  [sym_typealias_declaration] = "typealias_declaration",
  [sym__typealias_head] = "_typealias_head",
  [sym_function_declaration] = "function_declaration",
  [sym__function_head] = "_function_head",
  [sym__function_signature] = "_function_signature",
  [sym__parameter_clause] = "_parameter_clause",
  [sym_enum_declaration] = "enum_declaration",
  [sym_case_declaration] = "case_declaration",
  [sym_struct_declaration] = "struct_declaration",
  [sym_class_declaration] = "class_declaration",
  [sym_protocol_declaration] = "protocol_declaration",
  [sym_protocol_variable_declaration] = "protocol_variable_declaration",
  [sym_protocol_method_declaration] = "protocol_method_declaration",
  [sym_protocol_initializer_declaration] = "protocol_initializer_declaration",
  [sym_protocol_subscript_declaration] = "protocol_subscript_declaration",
  [sym_protocol_associated_type_declaration] = "protocol_associated_type_declaration",
  [sym_initializer_declaration] = "initializer_declaration",
  [sym__initializer_head] = "_initializer_head",
  [sym_deinitializer_declaration] = "deinitializer_declaration",
  [sym_extension_declaration] = "extension_declaration",
  [sym_subscript_declaration] = "subscript_declaration",
  [sym__subscript_head] = "_subscript_head",
  [sym__subscript_result] = "_subscript_result",
  [sym_operator_declaration] = "operator_declaration",
  [sym_precedence_clause] = "precedence_clause",
  [sym_associativity_clause] = "associativity_clause",
  [sym__pattern] = "_pattern",
  [sym_wildcard_pattern] = "wildcard_pattern",
  [sym_value_binding_pattern] = "value_binding_pattern",
  [sym_tuple_pattern] = "tuple_pattern",
  [sym__tuple_pattern_element_list] = "_tuple_pattern_element_list",
  [sym_enum_case_pattern] = "enum_case_pattern",
  [sym_optional_pattern] = "optional_pattern",
  [sym_is_pattern] = "is_pattern",
  [sym_as_pattern] = "as_pattern",
  [sym__expression] = "_expression",
  [sym__expression_list] = "_expression_list",
  [sym_boolean_literal] = "boolean_literal",
  [sym_type] = "type",
  [sym__type_annotation] = "_type_annotation",
  [sym__type_identifier] = "_type_identifier",
  [sym__type_name] = "_type_name",
  [sym_tuple_type] = "tuple_type",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__condition_clause_repeat1] = "_condition_clause_repeat1",
  [aux_sym_availability_condition_repeat1] = "availability_condition_repeat1",
  [aux_sym_optional_binding_condition_repeat1] = "optional_binding_condition_repeat1",
  [aux_sym_switch_statement_repeat1] = "switch_statement_repeat1",
  [aux_sym_case_statement_repeat1] = "case_statement_repeat1",
  [aux_sym_do_statement_repeat1] = "do_statement_repeat1",
  [aux_sym_build_configuration_statement_repeat1] = "build_configuration_statement_repeat1",
  [aux_sym_import_declaration_repeat1] = "import_declaration_repeat1",
  [aux_sym_constant_declaration_repeat1] = "constant_declaration_repeat1",
  [aux_sym__function_signature_repeat1] = "_function_signature_repeat1",
  [aux_sym__parameter_clause_repeat1] = "_parameter_clause_repeat1",
  [aux_sym_enum_declaration_repeat1] = "enum_declaration_repeat1",
  [aux_sym_struct_declaration_repeat1] = "struct_declaration_repeat1",
  [aux_sym_protocol_declaration_repeat1] = "protocol_declaration_repeat1",
  [aux_sym__tuple_pattern_element_list_repeat1] = "_tuple_pattern_element_list_repeat1",
  [aux_sym__expression_list_repeat1] = "_expression_list_repeat1",
  [aux_sym_tuple_type_repeat1] = "tuple_type_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__statement_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDavailable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iOS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iOSApplicationExtension] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OSX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OSXApplicationExtension] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_watchOS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tvOS] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_availability_condition_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_guard] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [sym_fallthrough_statement] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_throw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDelseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDelse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDendif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_os] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i386] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x86_64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arm64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDline] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_control_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typealias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protocol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_throws] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rethrows] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_indirect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_init] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deinit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extension] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subscript] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prefix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_operator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_postfix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_precedence] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_precedence_clause_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_associativity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_left] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_right] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_none] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_static_string_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__loop_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__for_init] = {
    .visible = false,
    .named = true,
  },
  [sym__for_condition] = {
    .visible = false,
    .named = true,
  },
  [sym_for_in_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__condition_clause] = {
    .visible = false,
    .named = true,
  },
  [sym__condition] = {
    .visible = false,
    .named = true,
  },
  [sym_availability_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_case_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_binding_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_guard_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_case_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__code_block] = {
    .visible = false,
    .named = true,
  },
  [sym_labeled_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_break_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_continue_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_throw_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_defer_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_do_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_catch_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_build_configuration_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__build_configuration] = {
    .visible = false,
    .named = true,
  },
  [sym_line_control_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_import_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__pattern_initializer] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__variable_declaration_head] = {
    .visible = false,
    .named = true,
  },
  [sym__variable_name] = {
    .visible = false,
    .named = true,
  },
  [sym__getter_setter_keyword_block] = {
    .visible = false,
    .named = true,
  },
  [sym__getter_keyword_clause] = {
    .visible = false,
    .named = true,
  },
  [sym__setter_keyword_clause] = {
    .visible = false,
    .named = true,
  },
  [sym_typealias_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__typealias_head] = {
    .visible = false,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__function_head] = {
    .visible = false,
    .named = true,
  },
  [sym__function_signature] = {
    .visible = false,
    .named = true,
  },
  [sym__parameter_clause] = {
    .visible = false,
    .named = true,
  },
  [sym_enum_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_case_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_class_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_protocol_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_protocol_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_protocol_method_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_protocol_initializer_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_protocol_subscript_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_protocol_associated_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_initializer_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__initializer_head] = {
    .visible = false,
    .named = true,
  },
  [sym_deinitializer_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_extension_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_subscript_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__subscript_head] = {
    .visible = false,
    .named = true,
  },
  [sym__subscript_result] = {
    .visible = false,
    .named = true,
  },
  [sym_operator_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_precedence_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_associativity_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__pattern] = {
    .visible = false,
    .named = true,
  },
  [sym_wildcard_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_value_binding_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym__tuple_pattern_element_list] = {
    .visible = false,
    .named = true,
  },
  [sym_enum_case_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_is_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_as_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_list] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__type_annotation] = {
    .visible = false,
    .named = true,
  },
  [sym__type_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__type_name] = {
    .visible = false,
    .named = true,
  },
  [sym_tuple_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__condition_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_availability_condition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_optional_binding_condition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_switch_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_do_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_build_configuration_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__function_signature_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__parameter_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_protocol_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__tuple_pattern_element_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_type_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(320);
      if (lookahead == '!') ADVANCE(392);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(326);
      if (lookahead == '*') ADVANCE(334);
      if (lookahead == ',') ADVANCE(332);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '0') ADVANCE(343);
      if (lookahead == '1') ADVANCE(343);
      if (lookahead == '2') ADVANCE(341);
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == ';') ADVANCE(321);
      if (lookahead == '=') ADVANCE(346);
      if (lookahead == '?') ADVANCE(427);
      if (lookahead == 'O') ADVANCE(30);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'b') ADVANCE(224);
      if (lookahead == 'c') ADVANCE(39);
      if (lookahead == 'd') ADVANCE(81);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 'g') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead == 'p') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == 'v') ADVANCE(47);
      if (lookahead == 'w') ADVANCE(46);
      if (lookahead == 'x') ADVANCE(22);
      if (lookahead == '{') ADVANCE(360);
      if (lookahead == '|') ADVANCE(304);
      if (lookahead == '}') ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(320);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == ')') ADVANCE(326);
      if (lookahead == '`') ADVANCE(319);
      if (lookahead == 'b') ADVANCE(561);
      if (lookahead == 'c') ADVANCE(524);
      if (lookahead == 'd') ADVANCE(481);
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead == 'f') ADVANCE(459);
      if (lookahead == 'g') ADVANCE(609);
      if (lookahead == 'i') ADVANCE(499);
      if (lookahead == 'l') ADVANCE(490);
      if (lookahead == 'p') ADVANCE(543);
      if (lookahead == 'r') ADVANCE(482);
      if (lookahead == 's') ADVANCE(594);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == 'v') ADVANCE(463);
      if (lookahead == 'w') ADVANCE(508);
      if (lookahead == '|') ADVANCE(304);
      if (lookahead == '}') ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(322);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ',') ADVANCE(332);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == ';') ADVANCE(321);
      if (lookahead == '=') ADVANCE(346);
      if (lookahead == '?') ADVANCE(427);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == '{') ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(322);
      if (lookahead == ';') ADVANCE(321);
      if (lookahead == '`') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(392);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == '`') ADVANCE(319);
      if (lookahead == 'a') ADVANCE(564);
      if (lookahead == 'f') ADVANCE(465);
      if (lookahead == 'o') ADVANCE(574);
      if (lookahead == 't') ADVANCE(570);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(618);
      if (lookahead == '\\') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(135);
      if (lookahead == '`') ADVANCE(319);
      if (lookahead == 'b') ADVANCE(561);
      if (lookahead == 'c') ADVANCE(468);
      if (lookahead == 'd') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead == 'f') ADVANCE(459);
      if (lookahead == 'g') ADVANCE(609);
      if (lookahead == 'i') ADVANCE(499);
      if (lookahead == 'l') ADVANCE(490);
      if (lookahead == 'p') ADVANCE(543);
      if (lookahead == 'r') ADVANCE(482);
      if (lookahead == 's') ADVANCE(594);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == 'v') ADVANCE(463);
      if (lookahead == 'w') ADVANCE(508);
      if (lookahead == '}') ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '`') ADVANCE(319);
      if (lookahead == 'c') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(490);
      if (lookahead == 'v') ADVANCE(463);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 8:
      if (lookahead == '&') ADVANCE(393);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(326);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == ';') ADVANCE(321);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == '`') ADVANCE(319);
      if (lookahead == 'i') ADVANCE(573);
      if (lookahead == 'l') ADVANCE(490);
      if (lookahead == 'v') ADVANCE(463);
      if (lookahead == '{') ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(326);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '`') ADVANCE(319);
      if (lookahead == 'i') ADVANCE(541);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ',') ADVANCE(332);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == ';') ADVANCE(321);
      if (lookahead == '=') ADVANCE(346);
      if (lookahead == '?') ADVANCE(427);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 'f') ADVANCE(286);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(195);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == 's') ADVANCE(270);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == 'v') ADVANCE(47);
      if (lookahead == 'w') ADVANCE(126);
      if (lookahead == '{') ADVANCE(360);
      if (lookahead == '}') ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == ';') ADVANCE(321);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == '`') ADVANCE(319);
      if (lookahead == 'c') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(573);
      if (lookahead == 'l') ADVANCE(490);
      if (lookahead == 'v') ADVANCE(463);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(326);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == '`') ADVANCE(319);
      if (lookahead == 'i') ADVANCE(541);
      if (lookahead == 'l') ADVANCE(490);
      if (lookahead == 'v') ADVANCE(463);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(619);
      END_STATE();
    case 16:
      if (lookahead == '3') ADVANCE(23);
      if (lookahead == 'O') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(353);
      if (lookahead == 'm') ADVANCE(210);
      if (lookahead == 'n') ADVANCE(329);
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 17:
      if (lookahead == '4') ADVANCE(391);
      END_STATE();
    case 18:
      if (lookahead == '4') ADVANCE(389);
      END_STATE();
    case 19:
      if (lookahead == '6') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == '6') ADVANCE(388);
      END_STATE();
    case 21:
      if (lookahead == '6') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == '8') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == '8') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == '`') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(419);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(300);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(301);
      END_STATE();
    case 28:
      if (lookahead == 'O') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == 'O') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == 'S') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'S') ADVANCE(335);
      END_STATE();
    case 32:
      if (lookahead == 'S') ADVANCE(340);
      END_STATE();
    case 33:
      if (lookahead == 'S') ADVANCE(339);
      END_STATE();
    case 34:
      if (lookahead == 'X') ADVANCE(337);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(21);
      END_STATE();
    case 36:
      if (lookahead == '`') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(292);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(243);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'o') ADVANCE(220);
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(288);
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == 'h') ADVANCE(138);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(280);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead == 'p') ADVANCE(235);
      if (lookahead == '}') ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(283);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(244);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(170);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(122);
      if (lookahead == 'm') ADVANCE(390);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(409);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(232);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(136);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(267);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(356);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(149);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 'o') ADVANCE(377);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 't') ADVANCE(227);
      if (lookahead == 'u') ADVANCE(59);
      if (lookahead == 'w') ADVANCE(157);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 113:
      if (lookahead == 'f') ADVANCE(380);
      END_STATE();
    case 114:
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 115:
      if (lookahead == 'f') ADVANCE(383);
      END_STATE();
    case 116:
      if (lookahead == 'f') ADVANCE(381);
      END_STATE();
    case 117:
      if (lookahead == 'f') ADVANCE(136);
      END_STATE();
    case 118:
      if (lookahead == 'f') ADVANCE(258);
      if (lookahead == 't') ADVANCE(347);
      END_STATE();
    case 119:
      if (lookahead == 'f') ADVANCE(139);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(130);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(386);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(379);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(358);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(369);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(138);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(289);
      if (lookahead == 'v') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(216);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(228);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(228);
      if (lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(259);
      END_STATE();
    case 131:
      if (lookahead == 'h') ADVANCE(230);
      END_STATE();
    case 132:
      if (lookahead == 'h') ADVANCE(29);
      END_STATE();
    case 133:
      if (lookahead == 'h') ADVANCE(236);
      END_STATE();
    case 134:
      if (lookahead == 'h') ADVANCE(236);
      if (lookahead == 'y') ADVANCE(216);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 160:
      if (lookahead == 'k') ADVANCE(365);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(245);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(245);
      if (lookahead == 'n') ADVANCE(285);
      if (lookahead == 'x') ADVANCE(273);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(407);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(264);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(210);
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(405);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(285);
      if (lookahead == 'x') ADVANCE(273);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(371);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(430);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 210:
      if (lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 211:
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == 's') ADVANCE(384);
      END_STATE();
    case 212:
      if (lookahead == 'p') ADVANCE(215);
      END_STATE();
    case 213:
      if (lookahead == 'p') ADVANCE(265);
      END_STATE();
    case 214:
      if (lookahead == 'p') ADVANCE(107);
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 215:
      if (lookahead == 'p') ADVANCE(168);
      END_STATE();
    case 216:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 217:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 218:
      if (lookahead == 'p') ADVANCE(217);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(453);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(375);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(453);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(403);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(418);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(399);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(417);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 243:
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 244:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(269);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 249:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 250:
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 251:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 253:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(413);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(347);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(415);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(448);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(449);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(397);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(351);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(401);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(363);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(423);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(227);
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 284:
      if (lookahead == 'u') ADVANCE(303);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(5);
      END_STATE();
    case 285:
      if (lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 286:
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 287:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 288:
      if (lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 289:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 290:
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 291:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 292:
      if (lookahead == 'v') ADVANCE(44);
      END_STATE();
    case 293:
      if (lookahead == 'v') ADVANCE(148);
      END_STATE();
    case 294:
      if (lookahead == 'w') ADVANCE(373);
      END_STATE();
    case 295:
      if (lookahead == 'w') ADVANCE(239);
      END_STATE();
    case 296:
      if (lookahead == 'w') ADVANCE(241);
      END_STATE();
    case 297:
      if (lookahead == 'x') ADVANCE(434);
      END_STATE();
    case 298:
      if (lookahead == 'x') ADVANCE(437);
      END_STATE();
    case 299:
      if (lookahead == 'x') ADVANCE(439);
      END_STATE();
    case 300:
      if (lookahead == 'x') ADVANCE(281);
      END_STATE();
    case 301:
      if (lookahead == 'x') ADVANCE(282);
      END_STATE();
    case 302:
      if (lookahead == 'y') ADVANCE(447);
      END_STATE();
    case 303:
      if (lookahead == '{') ADVANCE(318);
      END_STATE();
    case 304:
      if (lookahead == '|') ADVANCE(394);
      END_STATE();
    case 305:
      if (lookahead == '}') ADVANCE(5);
      END_STATE();
    case 306:
      if (lookahead == '}') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 307:
      if (lookahead == '}') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      END_STATE();
    case 308:
      if (lookahead == '}') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 309:
      if (lookahead == '}') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      END_STATE();
    case 310:
      if (lookahead == '}') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(309);
      END_STATE();
    case 311:
      if (lookahead == '}') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 312:
      if (lookahead == '}') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 313:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 314:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 315:
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(617);
      if (lookahead == '#') ADVANCE(135);
      if (lookahead == '0') ADVANCE(442);
      if (lookahead == '1') ADVANCE(446);
      if (lookahead == '2') ADVANCE(443);
      if (lookahead == '`') ADVANCE(319);
      if (lookahead == 'b') ADVANCE(561);
      if (lookahead == 'c') ADVANCE(524);
      if (lookahead == 'd') ADVANCE(481);
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead == 'f') ADVANCE(459);
      if (lookahead == 'g') ADVANCE(496);
      if (lookahead == 'i') ADVANCE(499);
      if (lookahead == 'l') ADVANCE(490);
      if (lookahead == 'p') ADVANCE(543);
      if (lookahead == 'r') ADVANCE(482);
      if (lookahead == 's') ADVANCE(497);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == 'v') ADVANCE(463);
      if (lookahead == 'w') ADVANCE(508);
      if (lookahead == '}') ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(315)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 316:
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(617);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(326);
      if (lookahead == ';') ADVANCE(321);
      if (lookahead == '`') ADVANCE(319);
      if (lookahead == '{') ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(316)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 317:
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(617);
      if (lookahead == '`') ADVANCE(319);
      if (lookahead == 'c') ADVANCE(525);
      if (lookahead == 'e') ADVANCE(537);
      if (lookahead == 'f') ADVANCE(603);
      if (lookahead == 'p') ADVANCE(567);
      if (lookahead == 's') ADVANCE(595);
      if (lookahead == 't') ADVANCE(615);
      if (lookahead == 'v') ADVANCE(463);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(317)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 318:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(312);
      END_STATE();
    case 319:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_POUNDavailable);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_iOS);
      if (lookahead == 'A') ADVANCE(218);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_iOSApplicationExtension);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_OSX);
      if (lookahead == 'A') ADVANCE(212);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_OSXApplicationExtension);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_watchOS);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_tvOS);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_availability_condition_token1);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '5') ADVANCE(342);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(343);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_availability_condition_token1);
      if (lookahead == '.') ADVANCE(314);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_availability_condition_token1);
      if (lookahead == '.') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_availability_condition_token1);
      if (lookahead == '.') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_availability_condition_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_repeat);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_guard);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_guard);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_continue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_fallthrough_statement);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_fallthrough_statement);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_throw);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_throw);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_defer);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_defer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_POUNDif);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_POUNDelseif);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_POUNDelse);
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_POUNDendif);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_os);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_os);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_arch);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_arch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_i386);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_x86_64);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_arm);
      if (lookahead == '6') ADVANCE(17);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_arm64);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_POUNDline);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_line_control_statement_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_typealias);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_typealias);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_protocol);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_protocol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_func);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(15);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_get);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_throws);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_rethrows);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_inout);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_indirect);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_indirect);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_init);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_init);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_deinit);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_deinit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_extension);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_extension);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_subscript);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_subscript);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_prefix);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_prefix);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_operator);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_postfix);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_postfix);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_infix);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_infix);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_precedence);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_precedence_clause_token1);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_precedence_clause_token1);
      if (lookahead == '5') ADVANCE(444);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(445);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_precedence_clause_token1);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(442);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_precedence_clause_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_precedence_clause_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_associativity);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_is);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(526);
      if (lookahead == 'o') ADVANCE(556);
      if (lookahead == 'u') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(610);
      if (lookahead == 'e') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(579);
      if (lookahead == 'l') ADVANCE(461);
      if (lookahead == 'o') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(520);
      if (lookahead == 'f') ADVANCE(511);
      if (lookahead == 'i') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(501);
      if (lookahead == 'o') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(502);
      if (lookahead == 'o') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(500);
      if (lookahead == 'o') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead == 'u') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(590);
      if (lookahead == 't') ADVANCE(562);
      if (lookahead == 'u') ADVANCE(471);
      if (lookahead == 'w') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(354);
      if (lookahead == 'm') ADVANCE(552);
      if (lookahead == 'n') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(467);
      if (lookahead == 'i') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(495);
      if (lookahead == 'i') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(560);
      if (lookahead == 'y') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(461);
      if (lookahead == 'o') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(601);
      if (lookahead == 'x') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(577);
      if (lookahead == 'r') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(492);
      if (lookahead == 't') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(562);
      if (lookahead == 'u') ADVANCE(471);
      if (lookahead == 'w') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(617);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_static_string_literal);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 315},
  [4] = {.lex_state = 315},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 11},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 11},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 11},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 11},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 11},
  [98] = {.lex_state = 11},
  [99] = {.lex_state = 11},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 11},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 11},
  [111] = {.lex_state = 11},
  [112] = {.lex_state = 11},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 11},
  [116] = {.lex_state = 11},
  [117] = {.lex_state = 11},
  [118] = {.lex_state = 11},
  [119] = {.lex_state = 11},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 11},
  [126] = {.lex_state = 11},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 11},
  [129] = {.lex_state = 11},
  [130] = {.lex_state = 11},
  [131] = {.lex_state = 11},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 11},
  [135] = {.lex_state = 11},
  [136] = {.lex_state = 11},
  [137] = {.lex_state = 11},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 11},
  [141] = {.lex_state = 11},
  [142] = {.lex_state = 11},
  [143] = {.lex_state = 11},
  [144] = {.lex_state = 11},
  [145] = {.lex_state = 9},
  [146] = {.lex_state = 11},
  [147] = {.lex_state = 9},
  [148] = {.lex_state = 11},
  [149] = {.lex_state = 11},
  [150] = {.lex_state = 11},
  [151] = {.lex_state = 11},
  [152] = {.lex_state = 11},
  [153] = {.lex_state = 11},
  [154] = {.lex_state = 11},
  [155] = {.lex_state = 11},
  [156] = {.lex_state = 9},
  [157] = {.lex_state = 9},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 9},
  [160] = {.lex_state = 9},
  [161] = {.lex_state = 9},
  [162] = {.lex_state = 9},
  [163] = {.lex_state = 9},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 11},
  [167] = {.lex_state = 11},
  [168] = {.lex_state = 11},
  [169] = {.lex_state = 11},
  [170] = {.lex_state = 11},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 317},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 317},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 10},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 2},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 11},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 2},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 2},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 11},
  [239] = {.lex_state = 11},
  [240] = {.lex_state = 2},
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 2},
  [243] = {.lex_state = 2},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 2},
  [246] = {.lex_state = 2},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 2},
  [250] = {.lex_state = 316},
  [251] = {.lex_state = 316},
  [252] = {.lex_state = 316},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 316},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 316},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 316},
  [260] = {.lex_state = 316},
  [261] = {.lex_state = 316},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 316},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 11},
  [267] = {.lex_state = 316},
  [268] = {.lex_state = 316},
  [269] = {.lex_state = 11},
  [270] = {.lex_state = 11},
  [271] = {.lex_state = 316},
  [272] = {.lex_state = 316},
  [273] = {.lex_state = 316},
  [274] = {.lex_state = 316},
  [275] = {.lex_state = 316},
  [276] = {.lex_state = 13},
  [277] = {.lex_state = 13},
  [278] = {.lex_state = 316},
  [279] = {.lex_state = 316},
  [280] = {.lex_state = 11},
  [281] = {.lex_state = 316},
  [282] = {.lex_state = 11},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 316},
  [285] = {.lex_state = 316},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 2},
  [288] = {.lex_state = 2},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 2},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 13},
  [295] = {.lex_state = 55},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 55},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 24},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 3},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 2},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 2},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 2},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 24},
  [315] = {.lex_state = 2},
  [316] = {.lex_state = 2},
  [317] = {.lex_state = 2},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 2},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 2},
  [327] = {.lex_state = 24},
  [328] = {.lex_state = 24},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 2},
  [337] = {.lex_state = 3},
  [338] = {.lex_state = 11},
  [339] = {.lex_state = 316},
  [340] = {.lex_state = 2},
  [341] = {.lex_state = 2},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 2},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 2},
  [349] = {.lex_state = 24},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 316},
  [352] = {.lex_state = 316},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 24},
  [356] = {.lex_state = 2},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 2},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 2},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 11},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 316},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 2},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 316},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 55},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 3},
  [410] = {.lex_state = 3},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 316},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 2},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 316},
  [429] = {.lex_state = 2},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 2},
  [433] = {.lex_state = 316},
  [434] = {.lex_state = 2},
  [435] = {.lex_state = 316},
  [436] = {.lex_state = 2},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 2},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 316},
  [441] = {.lex_state = 2},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 55},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 2},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 2},
  [452] = {.lex_state = 2},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 316},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 2},
  [462] = {.lex_state = 24},
  [463] = {.lex_state = 316},
  [464] = {.lex_state = 2},
  [465] = {.lex_state = 2},
  [466] = {.lex_state = 2},
  [467] = {.lex_state = 2},
  [468] = {.lex_state = 2},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 316},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 2},
  [473] = {.lex_state = 2},
  [474] = {.lex_state = 2},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 2},
  [478] = {.lex_state = 316},
  [479] = {.lex_state = 316},
  [480] = {.lex_state = 316},
  [481] = {.lex_state = 316},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 2},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 2},
  [486] = {.lex_state = 24},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 2},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 55},
  [491] = {.lex_state = 2},
  [492] = {.lex_state = 2},
  [493] = {.lex_state = 2},
  [494] = {.lex_state = 316},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 2},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 316},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 2},
  [501] = {.lex_state = 2},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 2},
  [505] = {.lex_state = 2},
  [506] = {.lex_state = 316},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 2},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 2},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 2},
  [520] = {.lex_state = 2},
  [521] = {.lex_state = 316},
  [522] = {.lex_state = 316},
  [523] = {.lex_state = 2},
  [524] = {.lex_state = 2},
  [525] = {.lex_state = 2},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 316},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 2},
  [530] = {.lex_state = 2},
  [531] = {.lex_state = 2},
  [532] = {.lex_state = 2},
  [533] = {.lex_state = 2},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 316},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 316},
  [539] = {.lex_state = 2},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 2},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 316},
  [544] = {.lex_state = 2},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 2},
  [550] = {.lex_state = 316},
  [551] = {.lex_state = 316},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 2},
  [554] = {.lex_state = 24},
  [555] = {.lex_state = 2},
  [556] = {.lex_state = 2},
  [557] = {.lex_state = 2},
  [558] = {.lex_state = 316},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 2},
  [561] = {.lex_state = 316},
  [562] = {.lex_state = 2},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 316},
  [566] = {.lex_state = 2},
  [567] = {.lex_state = 316},
  [568] = {.lex_state = 316},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 316},
  [571] = {.lex_state = 316},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 2},
  [574] = {.lex_state = 2},
  [575] = {.lex_state = 2},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 316},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 316},
  [582] = {.lex_state = 2},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 316},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 316},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 316},
  [598] = {.lex_state = 1},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 316},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 316},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 316},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 316},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 316},
  [614] = {.lex_state = 316},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 316},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 316},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 316},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 1},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 316},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 315},
  [660] = {.lex_state = 315},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 316},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 316},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 315},
  [671] = {.lex_state = 316},
  [672] = {.lex_state = 316},
  [673] = {.lex_state = 316},
  [674] = {.lex_state = 316},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 316},
  [677] = {.lex_state = 315},
  [678] = {.lex_state = 315},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_POUNDavailable] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_iOS] = ACTIONS(1),
    [anon_sym_iOSApplicationExtension] = ACTIONS(1),
    [anon_sym_OSX] = ACTIONS(1),
    [anon_sym_OSXApplicationExtension] = ACTIONS(1),
    [anon_sym_watchOS] = ACTIONS(1),
    [anon_sym_tvOS] = ACTIONS(1),
    [aux_sym_availability_condition_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_repeat] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_guard] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [sym_fallthrough_statement] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_throw] = ACTIONS(1),
    [anon_sym_defer] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [anon_sym_POUNDif] = ACTIONS(1),
    [anon_sym_POUNDelseif] = ACTIONS(1),
    [anon_sym_POUNDelse] = ACTIONS(1),
    [anon_sym_POUNDendif] = ACTIONS(1),
    [anon_sym_os] = ACTIONS(1),
    [anon_sym_arch] = ACTIONS(1),
    [anon_sym_i386] = ACTIONS(1),
    [anon_sym_x86_64] = ACTIONS(1),
    [anon_sym_arm] = ACTIONS(1),
    [anon_sym_arm64] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_POUNDline] = ACTIONS(1),
    [aux_sym_line_control_statement_token1] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_typealias] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_protocol] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_rethrows] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_deinit] = ACTIONS(1),
    [anon_sym_extension] = ACTIONS(1),
    [anon_sym_subscript] = ACTIONS(1),
    [anon_sym_prefix] = ACTIONS(1),
    [anon_sym_operator] = ACTIONS(1),
    [anon_sym_postfix] = ACTIONS(1),
    [anon_sym_precedence] = ACTIONS(1),
    [aux_sym_precedence_clause_token1] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [anon_sym_none] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_static_string_literal] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(624),
    [sym__statement] = STATE(25),
    [sym__loop_statement] = STATE(573),
    [sym_for_statement] = STATE(573),
    [sym_for_in_statement] = STATE(573),
    [sym_while_statement] = STATE(573),
    [sym_repeat_while_statement] = STATE(573),
    [sym_if_statement] = STATE(573),
    [sym_guard_statement] = STATE(573),
    [sym_switch_statement] = STATE(573),
    [sym_labeled_statement] = STATE(573),
    [sym_break_statement] = STATE(573),
    [sym_continue_statement] = STATE(573),
    [sym_return_statement] = STATE(573),
    [sym_throw_statement] = STATE(573),
    [sym_defer_statement] = STATE(573),
    [sym_do_statement] = STATE(573),
    [sym_build_configuration_statement] = STATE(573),
    [sym_line_control_statement] = STATE(573),
    [sym__declaration] = STATE(573),
    [sym_import_declaration] = STATE(573),
    [sym_constant_declaration] = STATE(573),
    [sym_variable_declaration] = STATE(573),
    [sym__variable_declaration_head] = STATE(113),
    [sym_typealias_declaration] = STATE(573),
    [sym__typealias_head] = STATE(625),
    [sym_function_declaration] = STATE(573),
    [sym__function_head] = STATE(370),
    [sym_enum_declaration] = STATE(573),
    [sym_struct_declaration] = STATE(573),
    [sym_class_declaration] = STATE(573),
    [sym_protocol_declaration] = STATE(573),
    [sym_initializer_declaration] = STATE(573),
    [sym__initializer_head] = STATE(537),
    [sym_deinitializer_declaration] = STATE(573),
    [sym_extension_declaration] = STATE(573),
    [sym_subscript_declaration] = STATE(573),
    [sym__subscript_head] = STATE(535),
    [sym_operator_declaration] = STATE(573),
    [sym__expression] = STATE(573),
    [aux_sym_program_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_guard] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(23),
    [sym_fallthrough_statement] = ACTIONS(25),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_defer] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(33),
    [anon_sym_POUNDif] = ACTIONS(35),
    [anon_sym_POUNDline] = ACTIONS(37),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_typealias] = ACTIONS(41),
    [anon_sym_struct] = ACTIONS(43),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(47),
    [anon_sym_protocol] = ACTIONS(49),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_indirect] = ACTIONS(53),
    [anon_sym_init] = ACTIONS(55),
    [anon_sym_deinit] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_subscript] = ACTIONS(61),
    [anon_sym_prefix] = ACTIONS(63),
    [anon_sym_postfix] = ACTIONS(63),
    [anon_sym_infix] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
  },
  [2] = {
    [sym__statement] = STATE(7),
    [sym__loop_statement] = STATE(573),
    [sym_for_statement] = STATE(573),
    [sym_for_in_statement] = STATE(573),
    [sym_while_statement] = STATE(573),
    [sym_repeat_while_statement] = STATE(573),
    [sym_if_statement] = STATE(573),
    [sym_guard_statement] = STATE(573),
    [sym_switch_statement] = STATE(573),
    [sym_labeled_statement] = STATE(573),
    [sym_break_statement] = STATE(573),
    [sym_continue_statement] = STATE(573),
    [sym_return_statement] = STATE(573),
    [sym_throw_statement] = STATE(573),
    [sym_defer_statement] = STATE(573),
    [sym_do_statement] = STATE(573),
    [sym_build_configuration_statement] = STATE(573),
    [sym_line_control_statement] = STATE(573),
    [sym__declaration] = STATE(573),
    [sym_import_declaration] = STATE(573),
    [sym_constant_declaration] = STATE(573),
    [sym_variable_declaration] = STATE(573),
    [sym__variable_declaration_head] = STATE(113),
    [sym_typealias_declaration] = STATE(573),
    [sym__typealias_head] = STATE(625),
    [sym_function_declaration] = STATE(573),
    [sym__function_head] = STATE(370),
    [sym_enum_declaration] = STATE(573),
    [sym_struct_declaration] = STATE(573),
    [sym_class_declaration] = STATE(573),
    [sym_protocol_declaration] = STATE(573),
    [sym_initializer_declaration] = STATE(573),
    [sym__initializer_head] = STATE(537),
    [sym_deinitializer_declaration] = STATE(573),
    [sym_extension_declaration] = STATE(573),
    [sym_subscript_declaration] = STATE(573),
    [sym__subscript_head] = STATE(535),
    [sym_operator_declaration] = STATE(573),
    [sym__expression] = STATE(573),
    [aux_sym_program_repeat1] = STATE(7),
    [aux_sym_build_configuration_statement_repeat1] = STATE(320),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_guard] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(23),
    [sym_fallthrough_statement] = ACTIONS(25),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_defer] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(33),
    [anon_sym_POUNDif] = ACTIONS(35),
    [anon_sym_POUNDelseif] = ACTIONS(69),
    [anon_sym_POUNDelse] = ACTIONS(71),
    [anon_sym_POUNDendif] = ACTIONS(73),
    [anon_sym_AMP_AMP] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(77),
    [anon_sym_POUNDline] = ACTIONS(37),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_typealias] = ACTIONS(41),
    [anon_sym_struct] = ACTIONS(43),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(47),
    [anon_sym_protocol] = ACTIONS(49),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_indirect] = ACTIONS(53),
    [anon_sym_init] = ACTIONS(55),
    [anon_sym_deinit] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_subscript] = ACTIONS(61),
    [anon_sym_prefix] = ACTIONS(63),
    [anon_sym_postfix] = ACTIONS(63),
    [anon_sym_infix] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
  },
  [3] = {
    [sym__statement] = STATE(19),
    [sym__loop_statement] = STATE(573),
    [sym_for_statement] = STATE(573),
    [sym_for_in_statement] = STATE(573),
    [sym_while_statement] = STATE(573),
    [sym_repeat_while_statement] = STATE(573),
    [sym_if_statement] = STATE(573),
    [sym_guard_statement] = STATE(573),
    [sym_switch_statement] = STATE(573),
    [sym_labeled_statement] = STATE(573),
    [sym_break_statement] = STATE(573),
    [sym_continue_statement] = STATE(573),
    [sym_return_statement] = STATE(573),
    [sym_throw_statement] = STATE(573),
    [sym_defer_statement] = STATE(573),
    [sym_do_statement] = STATE(573),
    [sym_build_configuration_statement] = STATE(573),
    [sym_line_control_statement] = STATE(573),
    [sym__declaration] = STATE(573),
    [sym_import_declaration] = STATE(573),
    [sym_constant_declaration] = STATE(573),
    [sym_variable_declaration] = STATE(573),
    [sym__variable_declaration_head] = STATE(113),
    [sym__getter_keyword_clause] = STATE(447),
    [sym__setter_keyword_clause] = STATE(503),
    [sym_typealias_declaration] = STATE(573),
    [sym__typealias_head] = STATE(625),
    [sym_function_declaration] = STATE(573),
    [sym__function_head] = STATE(370),
    [sym_enum_declaration] = STATE(573),
    [sym_struct_declaration] = STATE(573),
    [sym_class_declaration] = STATE(573),
    [sym_protocol_declaration] = STATE(573),
    [sym_initializer_declaration] = STATE(573),
    [sym__initializer_head] = STATE(537),
    [sym_deinitializer_declaration] = STATE(573),
    [sym_extension_declaration] = STATE(573),
    [sym_subscript_declaration] = STATE(573),
    [sym__subscript_head] = STATE(535),
    [sym_operator_declaration] = STATE(573),
    [sym__expression] = STATE(573),
    [aux_sym_program_repeat1] = STATE(19),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_guard] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(23),
    [sym_fallthrough_statement] = ACTIONS(25),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_defer] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(33),
    [anon_sym_POUNDif] = ACTIONS(35),
    [anon_sym_POUNDline] = ACTIONS(37),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_typealias] = ACTIONS(41),
    [anon_sym_struct] = ACTIONS(43),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(47),
    [anon_sym_protocol] = ACTIONS(49),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_get] = ACTIONS(81),
    [anon_sym_set] = ACTIONS(83),
    [anon_sym_indirect] = ACTIONS(53),
    [anon_sym_init] = ACTIONS(55),
    [anon_sym_deinit] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_subscript] = ACTIONS(61),
    [anon_sym_prefix] = ACTIONS(63),
    [anon_sym_postfix] = ACTIONS(63),
    [anon_sym_infix] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
  },
  [4] = {
    [sym__statement] = STATE(22),
    [sym__loop_statement] = STATE(573),
    [sym_for_statement] = STATE(573),
    [sym_for_in_statement] = STATE(573),
    [sym_while_statement] = STATE(573),
    [sym_repeat_while_statement] = STATE(573),
    [sym_if_statement] = STATE(573),
    [sym_guard_statement] = STATE(573),
    [sym_switch_statement] = STATE(573),
    [sym_labeled_statement] = STATE(573),
    [sym_break_statement] = STATE(573),
    [sym_continue_statement] = STATE(573),
    [sym_return_statement] = STATE(573),
    [sym_throw_statement] = STATE(573),
    [sym_defer_statement] = STATE(573),
    [sym_do_statement] = STATE(573),
    [sym_build_configuration_statement] = STATE(573),
    [sym_line_control_statement] = STATE(573),
    [sym__declaration] = STATE(573),
    [sym_import_declaration] = STATE(573),
    [sym_constant_declaration] = STATE(573),
    [sym_variable_declaration] = STATE(573),
    [sym__variable_declaration_head] = STATE(113),
    [sym__getter_keyword_clause] = STATE(405),
    [sym__setter_keyword_clause] = STATE(487),
    [sym_typealias_declaration] = STATE(573),
    [sym__typealias_head] = STATE(625),
    [sym_function_declaration] = STATE(573),
    [sym__function_head] = STATE(370),
    [sym_enum_declaration] = STATE(573),
    [sym_struct_declaration] = STATE(573),
    [sym_class_declaration] = STATE(573),
    [sym_protocol_declaration] = STATE(573),
    [sym_initializer_declaration] = STATE(573),
    [sym__initializer_head] = STATE(537),
    [sym_deinitializer_declaration] = STATE(573),
    [sym_extension_declaration] = STATE(573),
    [sym_subscript_declaration] = STATE(573),
    [sym__subscript_head] = STATE(535),
    [sym_operator_declaration] = STATE(573),
    [sym__expression] = STATE(573),
    [aux_sym_program_repeat1] = STATE(22),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_guard] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(23),
    [sym_fallthrough_statement] = ACTIONS(25),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_defer] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(33),
    [anon_sym_POUNDif] = ACTIONS(35),
    [anon_sym_POUNDline] = ACTIONS(37),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_typealias] = ACTIONS(41),
    [anon_sym_struct] = ACTIONS(43),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(47),
    [anon_sym_protocol] = ACTIONS(49),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_get] = ACTIONS(87),
    [anon_sym_set] = ACTIONS(89),
    [anon_sym_indirect] = ACTIONS(53),
    [anon_sym_init] = ACTIONS(55),
    [anon_sym_deinit] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_subscript] = ACTIONS(61),
    [anon_sym_prefix] = ACTIONS(63),
    [anon_sym_postfix] = ACTIONS(63),
    [anon_sym_infix] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
  },
  [5] = {
    [sym__statement] = STATE(5),
    [sym__loop_statement] = STATE(573),
    [sym_for_statement] = STATE(573),
    [sym_for_in_statement] = STATE(573),
    [sym_while_statement] = STATE(573),
    [sym_repeat_while_statement] = STATE(573),
    [sym_if_statement] = STATE(573),
    [sym_guard_statement] = STATE(573),
    [sym_switch_statement] = STATE(573),
    [sym_labeled_statement] = STATE(573),
    [sym_break_statement] = STATE(573),
    [sym_continue_statement] = STATE(573),
    [sym_return_statement] = STATE(573),
    [sym_throw_statement] = STATE(573),
    [sym_defer_statement] = STATE(573),
    [sym_do_statement] = STATE(573),
    [sym_build_configuration_statement] = STATE(573),
    [sym_line_control_statement] = STATE(573),
    [sym__declaration] = STATE(573),
    [sym_import_declaration] = STATE(573),
    [sym_constant_declaration] = STATE(573),
    [sym_variable_declaration] = STATE(573),
    [sym__variable_declaration_head] = STATE(113),
    [sym_typealias_declaration] = STATE(573),
    [sym__typealias_head] = STATE(625),
    [sym_function_declaration] = STATE(573),
    [sym__function_head] = STATE(370),
    [sym_enum_declaration] = STATE(573),
    [sym_struct_declaration] = STATE(573),
    [sym_class_declaration] = STATE(573),
    [sym_protocol_declaration] = STATE(573),
    [sym_initializer_declaration] = STATE(573),
    [sym__initializer_head] = STATE(537),
    [sym_deinitializer_declaration] = STATE(573),
    [sym_extension_declaration] = STATE(573),
    [sym_subscript_declaration] = STATE(573),
    [sym__subscript_head] = STATE(535),
    [sym_operator_declaration] = STATE(573),
    [sym__expression] = STATE(573),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_for] = ACTIONS(93),
    [anon_sym_while] = ACTIONS(96),
    [anon_sym_let] = ACTIONS(99),
    [anon_sym_var] = ACTIONS(102),
    [anon_sym_repeat] = ACTIONS(105),
    [anon_sym_if] = ACTIONS(108),
    [anon_sym_guard] = ACTIONS(111),
    [anon_sym_switch] = ACTIONS(114),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_break] = ACTIONS(117),
    [anon_sym_continue] = ACTIONS(120),
    [sym_fallthrough_statement] = ACTIONS(123),
    [anon_sym_return] = ACTIONS(126),
    [anon_sym_throw] = ACTIONS(129),
    [anon_sym_defer] = ACTIONS(132),
    [anon_sym_do] = ACTIONS(135),
    [anon_sym_POUNDif] = ACTIONS(138),
    [anon_sym_POUNDelseif] = ACTIONS(91),
    [anon_sym_POUNDelse] = ACTIONS(141),
    [anon_sym_POUNDendif] = ACTIONS(91),
    [anon_sym_POUNDline] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(146),
    [anon_sym_typealias] = ACTIONS(149),
    [anon_sym_struct] = ACTIONS(152),
    [anon_sym_class] = ACTIONS(155),
    [anon_sym_enum] = ACTIONS(158),
    [anon_sym_protocol] = ACTIONS(161),
    [anon_sym_func] = ACTIONS(164),
    [anon_sym_indirect] = ACTIONS(167),
    [anon_sym_init] = ACTIONS(170),
    [anon_sym_deinit] = ACTIONS(173),
    [anon_sym_extension] = ACTIONS(176),
    [anon_sym_subscript] = ACTIONS(179),
    [anon_sym_prefix] = ACTIONS(182),
    [anon_sym_postfix] = ACTIONS(182),
    [anon_sym_infix] = ACTIONS(185),
    [sym_identifier] = ACTIONS(188),
  },
  [6] = {
    [sym__statement] = STATE(14),
    [sym__loop_statement] = STATE(573),
    [sym_for_statement] = STATE(573),
    [sym_for_in_statement] = STATE(573),
    [sym_while_statement] = STATE(573),
    [sym_repeat_while_statement] = STATE(573),
    [sym_if_statement] = STATE(573),
    [sym_guard_statement] = STATE(573),
    [sym_switch_statement] = STATE(573),
    [sym_labeled_statement] = STATE(573),
    [sym_break_statement] = STATE(573),
    [sym_continue_statement] = STATE(573),
    [sym_return_statement] = STATE(573),
    [sym_throw_statement] = STATE(573),
    [sym_defer_statement] = STATE(573),
    [sym_do_statement] = STATE(573),
    [sym_build_configuration_statement] = STATE(573),
    [sym_line_control_statement] = STATE(573),
    [sym__declaration] = STATE(573),
    [sym_import_declaration] = STATE(573),
    [sym_constant_declaration] = STATE(573),
    [sym_variable_declaration] = STATE(573),
    [sym__variable_declaration_head] = STATE(113),
    [sym_typealias_declaration] = STATE(573),
    [sym__typealias_head] = STATE(625),
    [sym_function_declaration] = STATE(573),
    [sym__function_head] = STATE(370),
    [sym_enum_declaration] = STATE(573),
    [sym_struct_declaration] = STATE(573),
    [sym_class_declaration] = STATE(573),
    [sym_protocol_declaration] = STATE(573),
    [sym_initializer_declaration] = STATE(573),
    [sym__initializer_head] = STATE(537),
    [sym_deinitializer_declaration] = STATE(573),
    [sym_extension_declaration] = STATE(573),
    [sym_subscript_declaration] = STATE(573),
    [sym__subscript_head] = STATE(535),
    [sym_operator_declaration] = STATE(573),
    [sym__expression] = STATE(573),
    [aux_sym_program_repeat1] = STATE(14),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_guard] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(23),
    [sym_fallthrough_statement] = ACTIONS(25),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_defer] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(33),
    [anon_sym_POUNDif] = ACTIONS(35),
    [anon_sym_POUNDelseif] = ACTIONS(191),
    [anon_sym_POUNDelse] = ACTIONS(193),
    [anon_sym_POUNDendif] = ACTIONS(191),
    [anon_sym_AMP_AMP] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(77),
    [anon_sym_POUNDline] = ACTIONS(37),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_typealias] = ACTIONS(41),
    [anon_sym_struct] = ACTIONS(43),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(47),
    [anon_sym_protocol] = ACTIONS(49),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_indirect] = ACTIONS(53),
    [anon_sym_init] = ACTIONS(55),
    [anon_sym_deinit] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_subscript] = ACTIONS(61),
    [anon_sym_prefix] = ACTIONS(63),
    [anon_sym_postfix] = ACTIONS(63),
    [anon_sym_infix] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
  },
  [7] = {
    [sym__statement] = STATE(5),
    [sym__loop_statement] = STATE(573),
    [sym_for_statement] = STATE(573),
    [sym_for_in_statement] = STATE(573),
    [sym_while_statement] = STATE(573),
    [sym_repeat_while_statement] = STATE(573),
    [sym_if_statement] = STATE(573),
    [sym_guard_statement] = STATE(573),
    [sym_switch_statement] = STATE(573),
    [sym_labeled_statement] = STATE(573),
    [sym_break_statement] = STATE(573),
    [sym_continue_statement] = STATE(573),
    [sym_return_statement] = STATE(573),
    [sym_throw_statement] = STATE(573),
    [sym_defer_statement] = STATE(573),
    [sym_do_statement] = STATE(573),
    [sym_build_configuration_statement] = STATE(573),
    [sym_line_control_statement] = STATE(573),
    [sym__declaration] = STATE(573),
    [sym_import_declaration] = STATE(573),
    [sym_constant_declaration] = STATE(573),
    [sym_variable_declaration] = STATE(573),
    [sym__variable_declaration_head] = STATE(113),
    [sym_typealias_declaration] = STATE(573),
    [sym__typealias_head] = STATE(625),
    [sym_function_declaration] = STATE(573),
    [sym__function_head] = STATE(370),
    [sym_enum_declaration] = STATE(573),
    [sym_struct_declaration] = STATE(573),
    [sym_class_declaration] = STATE(573),
    [sym_protocol_declaration] = STATE(573),
    [sym_initializer_declaration] = STATE(573),
    [sym__initializer_head] = STATE(537),
    [sym_deinitializer_declaration] = STATE(573),
    [sym_extension_declaration] = STATE(573),
    [sym_subscript_declaration] = STATE(573),
    [sym__subscript_head] = STATE(535),
    [sym_operator_declaration] = STATE(573),
    [sym__expression] = STATE(573),
    [aux_sym_program_repeat1] = STATE(5),
    [aux_sym_build_configuration_statement_repeat1] = STATE(344),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_guard] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(23),
    [sym_fallthrough_statement] = ACTIONS(25),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_defer] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(33),
    [anon_sym_POUNDif] = ACTIONS(35),
    [anon_sym_POUNDelseif] = ACTIONS(69),
    [anon_sym_POUNDelse] = ACTIONS(195),
    [anon_sym_POUNDendif] = ACTIONS(197),
    [anon_sym_POUNDline] = ACTIONS(37),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_typealias] = ACTIONS(41),
    [anon_sym_struct] = ACTIONS(43),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(47),
    [anon_sym_protocol] = ACTIONS(49),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_indirect] = ACTIONS(53),
    [anon_sym_init] = ACTIONS(55),
    [anon_sym_deinit] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_subscript] = ACTIONS(61),
    [anon_sym_prefix] = ACTIONS(63),
    [anon_sym_postfix] = ACTIONS(63),
    [anon_sym_infix] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
  },
  [8] = {
    [sym__statement] = STATE(11),
    [sym__loop_statement] = STATE(557),
    [sym_for_statement] = STATE(557),
    [sym_for_in_statement] = STATE(557),
    [sym_while_statement] = STATE(557),
    [sym_repeat_while_statement] = STATE(557),
    [sym_if_statement] = STATE(557),
    [sym_guard_statement] = STATE(557),
    [sym_switch_statement] = STATE(557),
    [sym_labeled_statement] = STATE(557),
    [sym_break_statement] = STATE(557),
    [sym_continue_statement] = STATE(557),
    [sym_return_statement] = STATE(557),
    [sym_throw_statement] = STATE(557),
    [sym_defer_statement] = STATE(557),
    [sym_do_statement] = STATE(557),
    [sym_build_configuration_statement] = STATE(557),
    [sym_line_control_statement] = STATE(557),
    [sym__declaration] = STATE(557),
    [sym_import_declaration] = STATE(557),
    [sym_constant_declaration] = STATE(557),
    [sym_variable_declaration] = STATE(557),
    [sym__variable_declaration_head] = STATE(113),
    [sym_typealias_declaration] = STATE(557),
    [sym__typealias_head] = STATE(625),
    [sym_function_declaration] = STATE(557),
    [sym__function_head] = STATE(370),
    [sym_enum_declaration] = STATE(557),
    [sym_struct_declaration] = STATE(557),
    [sym_class_declaration] = STATE(557),
    [sym_protocol_declaration] = STATE(557),
    [sym_initializer_declaration] = STATE(557),
    [sym__initializer_head] = STATE(537),
    [sym_deinitializer_declaration] = STATE(557),
    [sym_extension_declaration] = STATE(557),
    [sym_subscript_declaration] = STATE(557),
    [sym__subscript_head] = STATE(535),
    [sym_operator_declaration] = STATE(557),
    [sym__expression] = STATE(557),
    [aux_sym_program_repeat1] = STATE(11),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_case] = ACTIONS(199),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_guard] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(201),
    [anon_sym_default] = ACTIONS(199),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(23),
    [sym_fallthrough_statement] = ACTIONS(203),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_defer] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(33),
    [anon_sym_POUNDif] = ACTIONS(35),
    [anon_sym_POUNDline] = ACTIONS(37),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_typealias] = ACTIONS(41),
    [anon_sym_struct] = ACTIONS(43),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(47),
    [anon_sym_protocol] = ACTIONS(49),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_indirect] = ACTIONS(53),
    [anon_sym_init] = ACTIONS(55),
    [anon_sym_deinit] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_subscript] = ACTIONS(61),
    [anon_sym_prefix] = ACTIONS(63),
    [anon_sym_postfix] = ACTIONS(63),
    [anon_sym_infix] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
  },
  [9] = {
    [sym__statement] = STATE(10),
    [sym__loop_statement] = STATE(557),
    [sym_for_statement] = STATE(557),
    [sym_for_in_statement] = STATE(557),
    [sym_while_statement] = STATE(557),
    [sym_repeat_while_statement] = STATE(557),
    [sym_if_statement] = STATE(557),
    [sym_guard_statement] = STATE(557),
    [sym_switch_statement] = STATE(557),
    [sym_labeled_statement] = STATE(557),
    [sym_break_statement] = STATE(557),
    [sym_continue_statement] = STATE(557),
    [sym_return_statement] = STATE(557),
    [sym_throw_statement] = STATE(557),
    [sym_defer_statement] = STATE(557),
    [sym_do_statement] = STATE(557),
    [sym_build_configuration_statement] = STATE(557),
    [sym_line_control_statement] = STATE(557),
    [sym__declaration] = STATE(557),
    [sym_import_declaration] = STATE(557),
    [sym_constant_declaration] = STATE(557),
    [sym_variable_declaration] = STATE(557),
    [sym__variable_declaration_head] = STATE(113),
    [sym_typealias_declaration] = STATE(557),
    [sym__typealias_head] = STATE(625),
    [sym_function_declaration] = STATE(557),
    [sym__function_head] = STATE(370),
    [sym_enum_declaration] = STATE(557),
    [sym_struct_declaration] = STATE(557),
    [sym_class_declaration] = STATE(557),
    [sym_protocol_declaration] = STATE(557),
    [sym_initializer_declaration] = STATE(557),
    [sym__initializer_head] = STATE(537),
    [sym_deinitializer_declaration] = STATE(557),
    [sym_extension_declaration] = STATE(557),
    [sym_subscript_declaration] = STATE(557),
    [sym__subscript_head] = STATE(535),
    [sym_operator_declaration] = STATE(557),
    [sym__expression] = STATE(557),
    [aux_sym_program_repeat1] = STATE(10),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_case] = ACTIONS(199),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_guard] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(201),
    [anon_sym_default] = ACTIONS(199),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(23),
    [sym_fallthrough_statement] = ACTIONS(203),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_defer] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(33),
    [anon_sym_POUNDif] = ACTIONS(35),
    [anon_sym_POUNDline] = ACTIONS(37),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_typealias] = ACTIONS(41),
    [anon_sym_struct] = ACTIONS(43),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(47),
    [anon_sym_protocol] = ACTIONS(49),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_indirect] = ACTIONS(53),
    [anon_sym_init] = ACTIONS(55),
    [anon_sym_deinit] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_subscript] = ACTIONS(61),
    [anon_sym_prefix] = ACTIONS(63),
    [anon_sym_postfix] = ACTIONS(63),
    [anon_sym_infix] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
  },
  [10] = {
    [sym__statement] = STATE(11),
    [sym__loop_statement] = STATE(557),
    [sym_for_statement] = STATE(557),
    [sym_for_in_statement] = STATE(557),
    [sym_while_statement] = STATE(557),
    [sym_repeat_while_statement] = STATE(557),
    [sym_if_statement] = STATE(557),
    [sym_guard_statement] = STATE(557),
    [sym_switch_statement] = STATE(557),
    [sym_labeled_statement] = STATE(557),
    [sym_break_statement] = STATE(557),
    [sym_continue_statement] = STATE(557),
    [sym_return_statement] = STATE(557),
    [sym_throw_statement] = STATE(557),
    [sym_defer_statement] = STATE(557),
    [sym_do_statement] = STATE(557),
    [sym_build_configuration_statement] = STATE(557),
    [sym_line_control_statement] = STATE(557),
    [sym__declaration] = STATE(557),
    [sym_import_declaration] = STATE(557),
    [sym_constant_declaration] = STATE(557),
    [sym_variable_declaration] = STATE(557),
    [sym__variable_declaration_head] = STATE(113),
    [sym_typealias_declaration] = STATE(557),
    [sym__typealias_head] = STATE(625),
    [sym_function_declaration] = STATE(557),
    [sym__function_head] = STATE(370),
    [sym_enum_declaration] = STATE(557),
    [sym_struct_declaration] = STATE(557),
    [sym_class_declaration] = STATE(557),
    [sym_protocol_declaration] = STATE(557),
    [sym_initializer_declaration] = STATE(557),
    [sym__initializer_head] = STATE(537),
    [sym_deinitializer_declaration] = STATE(557),
    [sym_extension_declaration] = STATE(557),
    [sym_subscript_declaration] = STATE(557),
    [sym__subscript_head] = STATE(535),
    [sym_operator_declaration] = STATE(557),
    [sym__expression] = STATE(557),
    [aux_sym_program_repeat1] = STATE(11),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_case] = ACTIONS(205),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_guard] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_default] = ACTIONS(205),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(23),
    [sym_fallthrough_statement] = ACTIONS(203),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_defer] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(33),
    [anon_sym_POUNDif] = ACTIONS(35),
    [anon_sym_POUNDline] = ACTIONS(37),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_typealias] = ACTIONS(41),
    [anon_sym_struct] = ACTIONS(43),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(47),
    [anon_sym_protocol] = ACTIONS(49),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_indirect] = ACTIONS(53),
    [anon_sym_init] = ACTIONS(55),
    [anon_sym_deinit] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_subscript] = ACTIONS(61),
    [anon_sym_prefix] = ACTIONS(63),
    [anon_sym_postfix] = ACTIONS(63),
    [anon_sym_infix] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
  },
  [11] = {
    [sym__statement] = STATE(11),
    [sym__loop_statement] = STATE(557),
    [sym_for_statement] = STATE(557),
    [sym_for_in_statement] = STATE(557),
    [sym_while_statement] = STATE(557),
    [sym_repeat_while_statement] = STATE(557),
    [sym_if_statement] = STATE(557),
    [sym_guard_statement] = STATE(557),
    [sym_switch_statement] = STATE(557),
    [sym_labeled_statement] = STATE(557),
    [sym_break_statement] = STATE(557),
    [sym_continue_statement] = STATE(557),
    [sym_return_statement] = STATE(557),
    [sym_throw_statement] = STATE(557),
    [sym_defer_statement] = STATE(557),
    [sym_do_statement] = STATE(557),
    [sym_build_configuration_statement] = STATE(557),
    [sym_line_control_statement] = STATE(557),
    [sym__declaration] = STATE(557),
    [sym_import_declaration] = STATE(557),
    [sym_constant_declaration] = STATE(557),
    [sym_variable_declaration] = STATE(557),
    [sym__variable_declaration_head] = STATE(113),
    [sym_typealias_declaration] = STATE(557),
    [sym__typealias_head] = STATE(625),
    [sym_function_declaration] = STATE(557),
    [sym__function_head] = STATE(370),
    [sym_enum_declaration] = STATE(557),
    [sym_struct_declaration] = STATE(557),
    [sym_class_declaration] = STATE(557),
    [sym_protocol_declaration] = STATE(557),
    [sym_initializer_declaration] = STATE(557),
    [sym__initializer_head] = STATE(537),
    [sym_deinitializer_declaration] = STATE(557),
    [sym_extension_declaration] = STATE(557),
    [sym_subscript_declaration] = STATE(557),
    [sym__subscript_head] = STATE(535),
    [sym_operator_declaration] = STATE(557),
    [sym__expression] = STATE(557),
    [aux_sym_program_repeat1] = STATE(11),
    [anon_sym_for] = ACTIONS(93),
    [anon_sym_case] = ACTIONS(141),
    [anon_sym_while] = ACTIONS(96),
    [anon_sym_let] = ACTIONS(99),
    [anon_sym_var] = ACTIONS(102),
    [anon_sym_repeat] = ACTIONS(105),
    [anon_sym_if] = ACTIONS(108),
    [anon_sym_guard] = ACTIONS(111),
    [anon_sym_switch] = ACTIONS(114),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_default] = ACTIONS(141),
    [anon_sym_break] = ACTIONS(117),
    [anon_sym_continue] = ACTIONS(120),
    [sym_fallthrough_statement] = ACTIONS(209),
    [anon_sym_return] = ACTIONS(126),
    [anon_sym_throw] = ACTIONS(129),
    [anon_sym_defer] = ACTIONS(132),
    [anon_sym_do] = ACTIONS(135),
    [anon_sym_POUNDif] = ACTIONS(138),
    [anon_sym_POUNDline] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(146),
    [anon_sym_typealias] = ACTIONS(149),
    [anon_sym_struct] = ACTIONS(152),
    [anon_sym_class] = ACTIONS(155),
    [anon_sym_enum] = ACTIONS(158),
    [anon_sym_protocol] = ACTIONS(161),
    [anon_sym_func] = ACTIONS(164),
    [anon_sym_indirect] = ACTIONS(167),
    [anon_sym_init] = ACTIONS(170),
    [anon_sym_deinit] = ACTIONS(173),
    [anon_sym_extension] = ACTIONS(176),
    [anon_sym_subscript] = ACTIONS(179),
    [anon_sym_prefix] = ACTIONS(182),
    [anon_sym_postfix] = ACTIONS(182),
    [anon_sym_infix] = ACTIONS(185),
    [sym_identifier] = ACTIONS(188),
  },
  [12] = {
    [sym__statement] = STATE(11),
    [sym__loop_statement] = STATE(557),
    [sym_for_statement] = STATE(557),
    [sym_for_in_statement] = STATE(557),
    [sym_while_statement] = STATE(557),
    [sym_repeat_while_statement] = STATE(557),
    [sym_if_statement] = STATE(557),
    [sym_guard_statement] = STATE(557),
    [sym_switch_statement] = STATE(557),
    [sym_labeled_statement] = STATE(557),
    [sym_break_statement] = STATE(557),
    [sym_continue_statement] = STATE(557),
    [sym_return_statement] = STATE(557),
    [sym_throw_statement] = STATE(557),
    [sym_defer_statement] = STATE(557),
    [sym_do_statement] = STATE(557),
    [sym_build_configuration_statement] = STATE(557),
    [sym_line_control_statement] = STATE(557),
    [sym__declaration] = STATE(557),
    [sym_import_declaration] = STATE(557),
    [sym_constant_declaration] = STATE(557),
    [sym_variable_declaration] = STATE(557),
    [sym__variable_declaration_head] = STATE(113),
    [sym_typealias_declaration] = STATE(557),
    [sym__typealias_head] = STATE(625),
    [sym_function_declaration] = STATE(557),
    [sym__function_head] = STATE(370),
    [sym_enum_declaration] = STATE(557),
    [sym_struct_declaration] = STATE(557),
    [sym_class_declaration] = STATE(557),
    [sym_protocol_declaration] = STATE(557),
    [sym_initializer_declaration] = STATE(557),
    [sym__initializer_head] = STATE(537),
    [sym_deinitializer_declaration] = STATE(557),
    [sym_extension_declaration] = STATE(557),
    [sym_subscript_declaration] = STATE(557),
    [sym__subscript_head] = STATE(535),
    [sym_operator_declaration] = STATE(557),
    [sym__expression] = STATE(557),
    [aux_sym_program_repeat1] = STATE(11),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_case] = ACTIONS(212),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_guard] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(214),
    [anon_sym_default] = ACTIONS(212),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(23),
    [sym_fallthrough_statement] = ACTIONS(203),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_defer] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(33),
    [anon_sym_POUNDif] = ACTIONS(35),
    [anon_sym_POUNDline] = ACTIONS(37),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_typealias] = ACTIONS(41),
    [anon_sym_struct] = ACTIONS(43),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(47),
    [anon_sym_protocol] = ACTIONS(49),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_indirect] = ACTIONS(53),
    [anon_sym_init] = ACTIONS(55),
    [anon_sym_deinit] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_subscript] = ACTIONS(61),
    [anon_sym_prefix] = ACTIONS(63),
    [anon_sym_postfix] = ACTIONS(63),
    [anon_sym_infix] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
  },
  [13] = {
    [sym__statement] = STATE(8),
    [sym__loop_statement] = STATE(557),
    [sym_for_statement] = STATE(557),
    [sym_for_in_statement] = STATE(557),
    [sym_while_statement] = STATE(557),
    [sym_repeat_while_statement] = STATE(557),
    [sym_if_statement] = STATE(557),
    [sym_guard_statement] = STATE(557),
    [sym_switch_statement] = STATE(557),
    [sym_labeled_statement] = STATE(557),
    [sym_break_statement] = STATE(557),
    [sym_continue_statement] = STATE(557),
    [sym_return_statement] = STATE(557),
    [sym_throw_statement] = STATE(557),
    [sym_defer_statement] = STATE(557),
    [sym_do_statement] = STATE(557),
    [sym_build_configuration_statement] = STATE(557),
    [sym_line_control_statement] = STATE(557),
    [sym__declaration] = STATE(557),
    [sym_import_declaration] = STATE(557),
    [sym_constant_declaration] = STATE(557),
    [sym_variable_declaration] = STATE(557),
    [sym__variable_declaration_head] = STATE(113),
    [sym_typealias_declaration] = STATE(557),
    [sym__typealias_head] = STATE(625),
    [sym_function_declaration] = STATE(557),
    [sym__function_head] = STATE(370),
    [sym_enum_declaration] = STATE(557),
    [sym_struct_declaration] = STATE(557),
    [sym_class_declaration] = STATE(557),
    [sym_protocol_declaration] = STATE(557),
    [sym_initializer_declaration] = STATE(557),
    [sym__initializer_head] = STATE(537),
    [sym_deinitializer_declaration] = STATE(557),
    [sym_extension_declaration] = STATE(557),
    [sym_subscript_declaration] = STATE(557),
    [sym__subscript_head] = STATE(535),
    [sym_operator_declaration] = STATE(557),
    [sym__expression] = STATE(557),
    [aux_sym_program_repeat1] = STATE(8),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_case] = ACTIONS(212),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_guard] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(214),
    [anon_sym_default] = ACTIONS(212),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(23),
    [sym_fallthrough_statement] = ACTIONS(203),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_defer] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(33),
    [anon_sym_POUNDif] = ACTIONS(35),
    [anon_sym_POUNDline] = ACTIONS(37),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_typealias] = ACTIONS(41),
    [anon_sym_struct] = ACTIONS(43),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(47),
    [anon_sym_protocol] = ACTIONS(49),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_indirect] = ACTIONS(53),
    [anon_sym_init] = ACTIONS(55),
    [anon_sym_deinit] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_subscript] = ACTIONS(61),
    [anon_sym_prefix] = ACTIONS(63),
    [anon_sym_postfix] = ACTIONS(63),
    [anon_sym_infix] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
  },
  [14] = {
    [sym__statement] = STATE(5),
    [sym__loop_statement] = STATE(573),
    [sym_for_statement] = STATE(573),
    [sym_for_in_statement] = STATE(573),
    [sym_while_statement] = STATE(573),
    [sym_repeat_while_statement] = STATE(573),
    [sym_if_statement] = STATE(573),
    [sym_guard_statement] = STATE(573),
    [sym_switch_statement] = STATE(573),
    [sym_labeled_statement] = STATE(573),
    [sym_break_statement] = STATE(573),
    [sym_continue_statement] = STATE(573),
    [sym_return_statement] = STATE(573),
    [sym_throw_statement] = STATE(573),
    [sym_defer_statement] = STATE(573),
    [sym_do_statement] = STATE(573),
    [sym_build_configuration_statement] = STATE(573),
    [sym_line_control_statement] = STATE(573),
    [sym__declaration] = STATE(573),
    [sym_import_declaration] = STATE(573),
    [sym_constant_declaration] = STATE(573),
    [sym_variable_declaration] = STATE(573),
    [sym__variable_declaration_head] = STATE(113),
    [sym_typealias_declaration] = STATE(573),
    [sym__typealias_head] = STATE(625),
    [sym_function_declaration] = STATE(573),
    [sym__function_head] = STATE(370),
    [sym_enum_declaration] = STATE(573),
    [sym_struct_declaration] = STATE(573),
    [sym_class_declaration] = STATE(573),
    [sym_protocol_declaration] = STATE(573),
    [sym_initializer_declaration] = STATE(573),
    [sym__initializer_head] = STATE(537),
    [sym_deinitializer_declaration] = STATE(573),
    [sym_extension_declaration] = STATE(573),
    [sym_subscript_declaration] = STATE(573),
    [sym__subscript_head] = STATE(535),
    [sym_operator_declaration] = STATE(573),
    [sym__expression] = STATE(573),
    [aux_sym_program_repeat1] = STATE(5),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_guard] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(23),
    [sym_fallthrough_statement] = ACTIONS(25),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_defer] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(33),
    [anon_sym_POUNDif] = ACTIONS(35),
    [anon_sym_POUNDelseif] = ACTIONS(216),
    [anon_sym_POUNDelse] = ACTIONS(218),
    [anon_sym_POUNDendif] = ACTIONS(216),
    [anon_sym_POUNDline] = ACTIONS(37),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_typealias] = ACTIONS(41),
    [anon_sym_struct] = ACTIONS(43),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(47),
    [anon_sym_protocol] = ACTIONS(49),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_indirect] = ACTIONS(53),
    [anon_sym_init] = ACTIONS(55),
    [anon_sym_deinit] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_subscript] = ACTIONS(61),
    [anon_sym_prefix] = ACTIONS(63),
    [anon_sym_postfix] = ACTIONS(63),
    [anon_sym_infix] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
  },
  [15] = {
    [sym__statement] = STATE(12),
    [sym__loop_statement] = STATE(557),
    [sym_for_statement] = STATE(557),
    [sym_for_in_statement] = STATE(557),
    [sym_while_statement] = STATE(557),
    [sym_repeat_while_statement] = STATE(557),
    [sym_if_statement] = STATE(557),
    [sym_guard_statement] = STATE(557),
    [sym_switch_statement] = STATE(557),
    [sym_labeled_statement] = STATE(557),
    [sym_break_statement] = STATE(557),
    [sym_continue_statement] = STATE(557),
    [sym_return_statement] = STATE(557),
    [sym_throw_statement] = STATE(557),
    [sym_defer_statement] = STATE(557),
    [sym_do_statement] = STATE(557),
    [sym_build_configuration_statement] = STATE(557),
    [sym_line_control_statement] = STATE(557),
    [sym__declaration] = STATE(557),
    [sym_import_declaration] = STATE(557),
    [sym_constant_declaration] = STATE(557),
    [sym_variable_declaration] = STATE(557),
    [sym__variable_declaration_head] = STATE(113),
    [sym_typealias_declaration] = STATE(557),
    [sym__typealias_head] = STATE(625),
    [sym_function_declaration] = STATE(557),
    [sym__function_head] = STATE(370),
    [sym_enum_declaration] = STATE(557),
    [sym_struct_declaration] = STATE(557),
    [sym_class_declaration] = STATE(557),
    [sym_protocol_declaration] = STATE(557),
    [sym_initializer_declaration] = STATE(557),
    [sym__initializer_head] = STATE(537),
    [sym_deinitializer_declaration] = STATE(557),
    [sym_extension_declaration] = STATE(557),
    [sym_subscript_declaration] = STATE(557),
    [sym__subscript_head] = STATE(535),
    [sym_operator_declaration] = STATE(557),
    [sym__expression] = STATE(557),
    [aux_sym_program_repeat1] = STATE(12),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_case] = ACTIONS(220),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_guard] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(222),
    [anon_sym_default] = ACTIONS(220),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(23),
    [sym_fallthrough_statement] = ACTIONS(203),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_defer] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(33),
    [anon_sym_POUNDif] = ACTIONS(35),
    [anon_sym_POUNDline] = ACTIONS(37),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_typealias] = ACTIONS(41),
    [anon_sym_struct] = ACTIONS(43),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(47),
    [anon_sym_protocol] = ACTIONS(49),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_indirect] = ACTIONS(53),
    [anon_sym_init] = ACTIONS(55),
    [anon_sym_deinit] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_subscript] = ACTIONS(61),
    [anon_sym_prefix] = ACTIONS(63),
    [anon_sym_postfix] = ACTIONS(63),
    [anon_sym_infix] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
  },
  [16] = {
    [sym__statement] = STATE(5),
    [sym__loop_statement] = STATE(573),
    [sym_for_statement] = STATE(573),
    [sym_for_in_statement] = STATE(573),
    [sym_while_statement] = STATE(573),
    [sym_repeat_while_statement] = STATE(573),
    [sym_if_statement] = STATE(573),
    [sym_guard_statement] = STATE(573),
    [sym_switch_statement] = STATE(573),
    [sym_labeled_statement] = STATE(573),
    [sym_break_statement] = STATE(573),
    [sym_continue_statement] = STATE(573),
    [sym_return_statement] = STATE(573),
    [sym_throw_statement] = STATE(573),
    [sym_defer_statement] = STATE(573),
    [sym_do_statement] = STATE(573),
    [sym_build_configuration_statement] = STATE(573),
    [sym_line_control_statement] = STATE(573),
    [sym__declaration] = STATE(573),
    [sym_import_declaration] = STATE(573),
    [sym_constant_declaration] = STATE(573),
    [sym_variable_declaration] = STATE(573),
    [sym__variable_declaration_head] = STATE(113),
    [sym_typealias_declaration] = STATE(573),
    [sym__typealias_head] = STATE(625),
    [sym_function_declaration] = STATE(573),
    [sym__function_head] = STATE(370),
    [sym_enum_declaration] = STATE(573),
    [sym_struct_declaration] = STATE(573),
    [sym_class_declaration] = STATE(573),
    [sym_protocol_declaration] = STATE(573),
    [sym_initializer_declaration] = STATE(573),
    [sym__initializer_head] = STATE(537),
    [sym_deinitializer_declaration] = STATE(573),
    [sym_extension_declaration] = STATE(573),
    [sym_subscript_declaration] = STATE(573),
    [sym__subscript_head] = STATE(535),
    [sym_operator_declaration] = STATE(573),
    [sym__expression] = STATE(573),
    [aux_sym_program_repeat1] = STATE(5),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_guard] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(23),
    [sym_fallthrough_statement] = ACTIONS(25),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_defer] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(33),
    [anon_sym_POUNDif] = ACTIONS(35),
    [anon_sym_POUNDendif] = ACTIONS(224),
    [anon_sym_POUNDline] = ACTIONS(37),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_typealias] = ACTIONS(41),
    [anon_sym_struct] = ACTIONS(43),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(47),
    [anon_sym_protocol] = ACTIONS(49),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_indirect] = ACTIONS(53),
    [anon_sym_init] = ACTIONS(55),
    [anon_sym_deinit] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_subscript] = ACTIONS(61),
    [anon_sym_prefix] = ACTIONS(63),
    [anon_sym_postfix] = ACTIONS(63),
    [anon_sym_infix] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
  },
  [17] = {
    [sym__statement] = STATE(5),
    [sym__loop_statement] = STATE(573),
    [sym_for_statement] = STATE(573),
    [sym_for_in_statement] = STATE(573),
    [sym_while_statement] = STATE(573),
    [sym_repeat_while_statement] = STATE(573),
    [sym_if_statement] = STATE(573),
    [sym_guard_statement] = STATE(573),
    [sym_switch_statement] = STATE(573),
    [sym_labeled_statement] = STATE(573),
    [sym_break_statement] = STATE(573),
    [sym_continue_statement] = STATE(573),
    [sym_return_statement] = STATE(573),
    [sym_throw_statement] = STATE(573),
    [sym_defer_statement] = STATE(573),
    [sym_do_statement] = STATE(573),
    [sym_build_configuration_statement] = STATE(573),
    [sym_line_control_statement] = STATE(573),
    [sym__declaration] = STATE(573),
    [sym_import_declaration] = STATE(573),
    [sym_constant_declaration] = STATE(573),
    [sym_variable_declaration] = STATE(573),
    [sym__variable_declaration_head] = STATE(113),
    [sym_typealias_declaration] = STATE(573),
    [sym__typealias_head] = STATE(625),
    [sym_function_declaration] = STATE(573),
    [sym__function_head] = STATE(370),
    [sym_enum_declaration] = STATE(573),
    [sym_struct_declaration] = STATE(573),
    [sym_class_declaration] = STATE(573),
    [sym_protocol_declaration] = STATE(573),
    [sym_initializer_declaration] = STATE(573),
    [sym__initializer_head] = STATE(537),
    [sym_deinitializer_declaration] = STATE(573),
    [sym_extension_declaration] = STATE(573),
    [sym_subscript_declaration] = STATE(573),
    [sym__subscript_head] = STATE(535),
    [sym_operator_declaration] = STATE(573),
    [sym__expression] = STATE(573),
    [aux_sym_program_repeat1] = STATE(5),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_guard] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(23),
    [sym_fallthrough_statement] = ACTIONS(25),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_defer] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(33),
    [anon_sym_POUNDif] = ACTIONS(35),
    [anon_sym_POUNDendif] = ACTIONS(226),
    [anon_sym_POUNDline] = ACTIONS(37),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_typealias] = ACTIONS(41),
    [anon_sym_struct] = ACTIONS(43),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(47),
    [anon_sym_protocol] = ACTIONS(49),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_indirect] = ACTIONS(53),
    [anon_sym_init] = ACTIONS(55),
    [anon_sym_deinit] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_subscript] = ACTIONS(61),
    [anon_sym_prefix] = ACTIONS(63),
    [anon_sym_postfix] = ACTIONS(63),
    [anon_sym_infix] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
  },
  [18] = {
    [sym__statement] = STATE(17),
    [sym__loop_statement] = STATE(573),
    [sym_for_statement] = STATE(573),
    [sym_for_in_statement] = STATE(573),
    [sym_while_statement] = STATE(573),
    [sym_repeat_while_statement] = STATE(573),
    [sym_if_statement] = STATE(573),
    [sym_guard_statement] = STATE(573),
    [sym_switch_statement] = STATE(573),
    [sym_labeled_statement] = STATE(573),
    [sym_break_statement] = STATE(573),
    [sym_continue_statement] = STATE(573),
    [sym_return_statement] = STATE(573),
    [sym_throw_statement] = STATE(573),
    [sym_defer_statement] = STATE(573),
    [sym_do_statement] = STATE(573),
    [sym_build_configuration_statement] = STATE(573),
    [sym_line_control_statement] = STATE(573),
    [sym__declaration] = STATE(573),
    [sym_import_declaration] = STATE(573),
    [sym_constant_declaration] = STATE(573),
    [sym_variable_declaration] = STATE(573),
    [sym__variable_declaration_head] = STATE(113),
    [sym_typealias_declaration] = STATE(573),
    [sym__typealias_head] = STATE(625),
    [sym_function_declaration] = STATE(573),
    [sym__function_head] = STATE(370),
    [sym_enum_declaration] = STATE(573),
    [sym_struct_declaration] = STATE(573),
    [sym_class_declaration] = STATE(573),
    [sym_protocol_declaration] = STATE(573),
    [sym_initializer_declaration] = STATE(573),
    [sym__initializer_head] = STATE(537),
    [sym_deinitializer_declaration] = STATE(573),
    [sym_extension_declaration] = STATE(573),
    [sym_subscript_declaration] = STATE(573),
    [sym__subscript_head] = STATE(535),
    [sym_operator_declaration] = STATE(573),
    [sym__expression] = STATE(573),
    [aux_sym_program_repeat1] = STATE(17),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_guard] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(23),
    [sym_fallthrough_statement] = ACTIONS(25),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_defer] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(33),
    [anon_sym_POUNDif] = ACTIONS(35),
    [anon_sym_POUNDendif] = ACTIONS(228),
    [anon_sym_POUNDline] = ACTIONS(37),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_typealias] = ACTIONS(41),
    [anon_sym_struct] = ACTIONS(43),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(47),
    [anon_sym_protocol] = ACTIONS(49),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_indirect] = ACTIONS(53),
    [anon_sym_init] = ACTIONS(55),
    [anon_sym_deinit] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_subscript] = ACTIONS(61),
    [anon_sym_prefix] = ACTIONS(63),
    [anon_sym_postfix] = ACTIONS(63),
    [anon_sym_infix] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
  },
  [19] = {
    [sym__statement] = STATE(5),
    [sym__loop_statement] = STATE(573),
    [sym_for_statement] = STATE(573),
    [sym_for_in_statement] = STATE(573),
    [sym_while_statement] = STATE(573),
    [sym_repeat_while_statement] = STATE(573),
    [sym_if_statement] = STATE(573),
    [sym_guard_statement] = STATE(573),
    [sym_switch_statement] = STATE(573),
    [sym_labeled_statement] = STATE(573),
    [sym_break_statement] = STATE(573),
    [sym_continue_statement] = STATE(573),
    [sym_return_statement] = STATE(573),
    [sym_throw_statement] = STATE(573),
    [sym_defer_statement] = STATE(573),
    [sym_do_statement] = STATE(573),
    [sym_build_configuration_statement] = STATE(573),
    [sym_line_control_statement] = STATE(573),
    [sym__declaration] = STATE(573),
    [sym_import_declaration] = STATE(573),
    [sym_constant_declaration] = STATE(573),
    [sym_variable_declaration] = STATE(573),
    [sym__variable_declaration_head] = STATE(113),
    [sym_typealias_declaration] = STATE(573),
    [sym__typealias_head] = STATE(625),
    [sym_function_declaration] = STATE(573),
    [sym__function_head] = STATE(370),
    [sym_enum_declaration] = STATE(573),
    [sym_struct_declaration] = STATE(573),
    [sym_class_declaration] = STATE(573),
    [sym_protocol_declaration] = STATE(573),
    [sym_initializer_declaration] = STATE(573),
    [sym__initializer_head] = STATE(537),
    [sym_deinitializer_declaration] = STATE(573),
    [sym_extension_declaration] = STATE(573),
    [sym_subscript_declaration] = STATE(573),
    [sym__subscript_head] = STATE(535),
    [sym_operator_declaration] = STATE(573),
    [sym__expression] = STATE(573),
    [aux_sym_program_repeat1] = STATE(5),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_guard] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(230),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(23),
    [sym_fallthrough_statement] = ACTIONS(25),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_defer] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(33),
    [anon_sym_POUNDif] = ACTIONS(35),
    [anon_sym_POUNDline] = ACTIONS(37),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_typealias] = ACTIONS(41),
    [anon_sym_struct] = ACTIONS(43),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(47),
    [anon_sym_protocol] = ACTIONS(49),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_indirect] = ACTIONS(53),
    [anon_sym_init] = ACTIONS(55),
    [anon_sym_deinit] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_subscript] = ACTIONS(61),
    [anon_sym_prefix] = ACTIONS(63),
    [anon_sym_postfix] = ACTIONS(63),
    [anon_sym_infix] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
  },
  [20] = {
    [sym__statement] = STATE(19),
    [sym__loop_statement] = STATE(573),
    [sym_for_statement] = STATE(573),
    [sym_for_in_statement] = STATE(573),
    [sym_while_statement] = STATE(573),
    [sym_repeat_while_statement] = STATE(573),
    [sym_if_statement] = STATE(573),
    [sym_guard_statement] = STATE(573),
    [sym_switch_statement] = STATE(573),
    [sym_labeled_statement] = STATE(573),
    [sym_break_statement] = STATE(573),
    [sym_continue_statement] = STATE(573),
    [sym_return_statement] = STATE(573),
    [sym_throw_statement] = STATE(573),
    [sym_defer_statement] = STATE(573),
    [sym_do_statement] = STATE(573),
    [sym_build_configuration_statement] = STATE(573),
    [sym_line_control_statement] = STATE(573),
    [sym__declaration] = STATE(573),
    [sym_import_declaration] = STATE(573),
    [sym_constant_declaration] = STATE(573),
    [sym_variable_declaration] = STATE(573),
    [sym__variable_declaration_head] = STATE(113),
    [sym_typealias_declaration] = STATE(573),
    [sym__typealias_head] = STATE(625),
    [sym_function_declaration] = STATE(573),
    [sym__function_head] = STATE(370),
    [sym_enum_declaration] = STATE(573),
    [sym_struct_declaration] = STATE(573),
    [sym_class_declaration] = STATE(573),
    [sym_protocol_declaration] = STATE(573),
    [sym_initializer_declaration] = STATE(573),
    [sym__initializer_head] = STATE(537),
    [sym_deinitializer_declaration] = STATE(573),
    [sym_extension_declaration] = STATE(573),
    [sym_subscript_declaration] = STATE(573),
    [sym__subscript_head] = STATE(535),
    [sym_operator_declaration] = STATE(573),
    [sym__expression] = STATE(573),
    [aux_sym_program_repeat1] = STATE(19),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_guard] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(23),
    [sym_fallthrough_statement] = ACTIONS(25),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_defer] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(33),
    [anon_sym_POUNDif] = ACTIONS(35),
    [anon_sym_POUNDline] = ACTIONS(37),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_typealias] = ACTIONS(41),
    [anon_sym_struct] = ACTIONS(43),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(47),
    [anon_sym_protocol] = ACTIONS(49),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_indirect] = ACTIONS(53),
    [anon_sym_init] = ACTIONS(55),
    [anon_sym_deinit] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_subscript] = ACTIONS(61),
    [anon_sym_prefix] = ACTIONS(63),
    [anon_sym_postfix] = ACTIONS(63),
    [anon_sym_infix] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
  },
  [21] = {
    [sym__statement] = STATE(16),
    [sym__loop_statement] = STATE(573),
    [sym_for_statement] = STATE(573),
    [sym_for_in_statement] = STATE(573),
    [sym_while_statement] = STATE(573),
    [sym_repeat_while_statement] = STATE(573),
    [sym_if_statement] = STATE(573),
    [sym_guard_statement] = STATE(573),
    [sym_switch_statement] = STATE(573),
    [sym_labeled_statement] = STATE(573),
    [sym_break_statement] = STATE(573),
    [sym_continue_statement] = STATE(573),
    [sym_return_statement] = STATE(573),
    [sym_throw_statement] = STATE(573),
    [sym_defer_statement] = STATE(573),
    [sym_do_statement] = STATE(573),
    [sym_build_configuration_statement] = STATE(573),
    [sym_line_control_statement] = STATE(573),
    [sym__declaration] = STATE(573),
    [sym_import_declaration] = STATE(573),
    [sym_constant_declaration] = STATE(573),
    [sym_variable_declaration] = STATE(573),
    [sym__variable_declaration_head] = STATE(113),
    [sym_typealias_declaration] = STATE(573),
    [sym__typealias_head] = STATE(625),
    [sym_function_declaration] = STATE(573),
    [sym__function_head] = STATE(370),
    [sym_enum_declaration] = STATE(573),
    [sym_struct_declaration] = STATE(573),
    [sym_class_declaration] = STATE(573),
    [sym_protocol_declaration] = STATE(573),
    [sym_initializer_declaration] = STATE(573),
    [sym__initializer_head] = STATE(537),
    [sym_deinitializer_declaration] = STATE(573),
    [sym_extension_declaration] = STATE(573),
    [sym_subscript_declaration] = STATE(573),
    [sym__subscript_head] = STATE(535),
    [sym_operator_declaration] = STATE(573),
    [sym__expression] = STATE(573),
    [aux_sym_program_repeat1] = STATE(16),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_guard] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(23),
    [sym_fallthrough_statement] = ACTIONS(25),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_defer] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(33),
    [anon_sym_POUNDif] = ACTIONS(35),
    [anon_sym_POUNDendif] = ACTIONS(197),
    [anon_sym_POUNDline] = ACTIONS(37),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_typealias] = ACTIONS(41),
    [anon_sym_struct] = ACTIONS(43),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(47),
    [anon_sym_protocol] = ACTIONS(49),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_indirect] = ACTIONS(53),
    [anon_sym_init] = ACTIONS(55),
    [anon_sym_deinit] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_subscript] = ACTIONS(61),
    [anon_sym_prefix] = ACTIONS(63),
    [anon_sym_postfix] = ACTIONS(63),
    [anon_sym_infix] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
  },
  [22] = {
    [sym__statement] = STATE(5),
    [sym__loop_statement] = STATE(573),
    [sym_for_statement] = STATE(573),
    [sym_for_in_statement] = STATE(573),
    [sym_while_statement] = STATE(573),
    [sym_repeat_while_statement] = STATE(573),
    [sym_if_statement] = STATE(573),
    [sym_guard_statement] = STATE(573),
    [sym_switch_statement] = STATE(573),
    [sym_labeled_statement] = STATE(573),
    [sym_break_statement] = STATE(573),
    [sym_continue_statement] = STATE(573),
    [sym_return_statement] = STATE(573),
    [sym_throw_statement] = STATE(573),
    [sym_defer_statement] = STATE(573),
    [sym_do_statement] = STATE(573),
    [sym_build_configuration_statement] = STATE(573),
    [sym_line_control_statement] = STATE(573),
    [sym__declaration] = STATE(573),
    [sym_import_declaration] = STATE(573),
    [sym_constant_declaration] = STATE(573),
    [sym_variable_declaration] = STATE(573),
    [sym__variable_declaration_head] = STATE(113),
    [sym_typealias_declaration] = STATE(573),
    [sym__typealias_head] = STATE(625),
    [sym_function_declaration] = STATE(573),
    [sym__function_head] = STATE(370),
    [sym_enum_declaration] = STATE(573),
    [sym_struct_declaration] = STATE(573),
    [sym_class_declaration] = STATE(573),
    [sym_protocol_declaration] = STATE(573),
    [sym_initializer_declaration] = STATE(573),
    [sym__initializer_head] = STATE(537),
    [sym_deinitializer_declaration] = STATE(573),
    [sym_extension_declaration] = STATE(573),
    [sym_subscript_declaration] = STATE(573),
    [sym__subscript_head] = STATE(535),
    [sym_operator_declaration] = STATE(573),
    [sym__expression] = STATE(573),
    [aux_sym_program_repeat1] = STATE(5),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_guard] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(232),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(23),
    [sym_fallthrough_statement] = ACTIONS(25),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_defer] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(33),
    [anon_sym_POUNDif] = ACTIONS(35),
    [anon_sym_POUNDline] = ACTIONS(37),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_typealias] = ACTIONS(41),
    [anon_sym_struct] = ACTIONS(43),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(47),
    [anon_sym_protocol] = ACTIONS(49),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_indirect] = ACTIONS(53),
    [anon_sym_init] = ACTIONS(55),
    [anon_sym_deinit] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_subscript] = ACTIONS(61),
    [anon_sym_prefix] = ACTIONS(63),
    [anon_sym_postfix] = ACTIONS(63),
    [anon_sym_infix] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
  },
  [23] = {
    [sym__statement] = STATE(5),
    [sym__loop_statement] = STATE(573),
    [sym_for_statement] = STATE(573),
    [sym_for_in_statement] = STATE(573),
    [sym_while_statement] = STATE(573),
    [sym_repeat_while_statement] = STATE(573),
    [sym_if_statement] = STATE(573),
    [sym_guard_statement] = STATE(573),
    [sym_switch_statement] = STATE(573),
    [sym_labeled_statement] = STATE(573),
    [sym_break_statement] = STATE(573),
    [sym_continue_statement] = STATE(573),
    [sym_return_statement] = STATE(573),
    [sym_throw_statement] = STATE(573),
    [sym_defer_statement] = STATE(573),
    [sym_do_statement] = STATE(573),
    [sym_build_configuration_statement] = STATE(573),
    [sym_line_control_statement] = STATE(573),
    [sym__declaration] = STATE(573),
    [sym_import_declaration] = STATE(573),
    [sym_constant_declaration] = STATE(573),
    [sym_variable_declaration] = STATE(573),
    [sym__variable_declaration_head] = STATE(113),
    [sym_typealias_declaration] = STATE(573),
    [sym__typealias_head] = STATE(625),
    [sym_function_declaration] = STATE(573),
    [sym__function_head] = STATE(370),
    [sym_enum_declaration] = STATE(573),
    [sym_struct_declaration] = STATE(573),
    [sym_class_declaration] = STATE(573),
    [sym_protocol_declaration] = STATE(573),
    [sym_initializer_declaration] = STATE(573),
    [sym__initializer_head] = STATE(537),
    [sym_deinitializer_declaration] = STATE(573),
    [sym_extension_declaration] = STATE(573),
    [sym_subscript_declaration] = STATE(573),
    [sym__subscript_head] = STATE(535),
    [sym_operator_declaration] = STATE(573),
    [sym__expression] = STATE(573),
    [aux_sym_program_repeat1] = STATE(5),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_guard] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(23),
    [sym_fallthrough_statement] = ACTIONS(25),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_defer] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(33),
    [anon_sym_POUNDif] = ACTIONS(35),
    [anon_sym_POUNDendif] = ACTIONS(228),
    [anon_sym_POUNDline] = ACTIONS(37),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_typealias] = ACTIONS(41),
    [anon_sym_struct] = ACTIONS(43),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(47),
    [anon_sym_protocol] = ACTIONS(49),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_indirect] = ACTIONS(53),
    [anon_sym_init] = ACTIONS(55),
    [anon_sym_deinit] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_subscript] = ACTIONS(61),
    [anon_sym_prefix] = ACTIONS(63),
    [anon_sym_postfix] = ACTIONS(63),
    [anon_sym_infix] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
  },
  [24] = {
    [sym__statement] = STATE(23),
    [sym__loop_statement] = STATE(573),
    [sym_for_statement] = STATE(573),
    [sym_for_in_statement] = STATE(573),
    [sym_while_statement] = STATE(573),
    [sym_repeat_while_statement] = STATE(573),
    [sym_if_statement] = STATE(573),
    [sym_guard_statement] = STATE(573),
    [sym_switch_statement] = STATE(573),
    [sym_labeled_statement] = STATE(573),
    [sym_break_statement] = STATE(573),
    [sym_continue_statement] = STATE(573),
    [sym_return_statement] = STATE(573),
    [sym_throw_statement] = STATE(573),
    [sym_defer_statement] = STATE(573),
    [sym_do_statement] = STATE(573),
    [sym_build_configuration_statement] = STATE(573),
    [sym_line_control_statement] = STATE(573),
    [sym__declaration] = STATE(573),
    [sym_import_declaration] = STATE(573),
    [sym_constant_declaration] = STATE(573),
    [sym_variable_declaration] = STATE(573),
    [sym__variable_declaration_head] = STATE(113),
    [sym_typealias_declaration] = STATE(573),
    [sym__typealias_head] = STATE(625),
    [sym_function_declaration] = STATE(573),
    [sym__function_head] = STATE(370),
    [sym_enum_declaration] = STATE(573),
    [sym_struct_declaration] = STATE(573),
    [sym_class_declaration] = STATE(573),
    [sym_protocol_declaration] = STATE(573),
    [sym_initializer_declaration] = STATE(573),
    [sym__initializer_head] = STATE(537),
    [sym_deinitializer_declaration] = STATE(573),
    [sym_extension_declaration] = STATE(573),
    [sym_subscript_declaration] = STATE(573),
    [sym__subscript_head] = STATE(535),
    [sym_operator_declaration] = STATE(573),
    [sym__expression] = STATE(573),
    [aux_sym_program_repeat1] = STATE(23),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_guard] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(23),
    [sym_fallthrough_statement] = ACTIONS(25),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_defer] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(33),
    [anon_sym_POUNDif] = ACTIONS(35),
    [anon_sym_POUNDendif] = ACTIONS(224),
    [anon_sym_POUNDline] = ACTIONS(37),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_typealias] = ACTIONS(41),
    [anon_sym_struct] = ACTIONS(43),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(47),
    [anon_sym_protocol] = ACTIONS(49),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_indirect] = ACTIONS(53),
    [anon_sym_init] = ACTIONS(55),
    [anon_sym_deinit] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_subscript] = ACTIONS(61),
    [anon_sym_prefix] = ACTIONS(63),
    [anon_sym_postfix] = ACTIONS(63),
    [anon_sym_infix] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
  },
  [25] = {
    [sym__statement] = STATE(5),
    [sym__loop_statement] = STATE(573),
    [sym_for_statement] = STATE(573),
    [sym_for_in_statement] = STATE(573),
    [sym_while_statement] = STATE(573),
    [sym_repeat_while_statement] = STATE(573),
    [sym_if_statement] = STATE(573),
    [sym_guard_statement] = STATE(573),
    [sym_switch_statement] = STATE(573),
    [sym_labeled_statement] = STATE(573),
    [sym_break_statement] = STATE(573),
    [sym_continue_statement] = STATE(573),
    [sym_return_statement] = STATE(573),
    [sym_throw_statement] = STATE(573),
    [sym_defer_statement] = STATE(573),
    [sym_do_statement] = STATE(573),
    [sym_build_configuration_statement] = STATE(573),
    [sym_line_control_statement] = STATE(573),
    [sym__declaration] = STATE(573),
    [sym_import_declaration] = STATE(573),
    [sym_constant_declaration] = STATE(573),
    [sym_variable_declaration] = STATE(573),
    [sym__variable_declaration_head] = STATE(113),
    [sym_typealias_declaration] = STATE(573),
    [sym__typealias_head] = STATE(625),
    [sym_function_declaration] = STATE(573),
    [sym__function_head] = STATE(370),
    [sym_enum_declaration] = STATE(573),
    [sym_struct_declaration] = STATE(573),
    [sym_class_declaration] = STATE(573),
    [sym_protocol_declaration] = STATE(573),
    [sym_initializer_declaration] = STATE(573),
    [sym__initializer_head] = STATE(537),
    [sym_deinitializer_declaration] = STATE(573),
    [sym_extension_declaration] = STATE(573),
    [sym_subscript_declaration] = STATE(573),
    [sym__subscript_head] = STATE(535),
    [sym_operator_declaration] = STATE(573),
    [sym__expression] = STATE(573),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(234),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_guard] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(23),
    [sym_fallthrough_statement] = ACTIONS(25),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_defer] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(33),
    [anon_sym_POUNDif] = ACTIONS(35),
    [anon_sym_POUNDline] = ACTIONS(37),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_typealias] = ACTIONS(41),
    [anon_sym_struct] = ACTIONS(43),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(47),
    [anon_sym_protocol] = ACTIONS(49),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_indirect] = ACTIONS(53),
    [anon_sym_init] = ACTIONS(55),
    [anon_sym_deinit] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_subscript] = ACTIONS(61),
    [anon_sym_prefix] = ACTIONS(63),
    [anon_sym_postfix] = ACTIONS(63),
    [anon_sym_infix] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
  },
  [26] = {
    [sym__statement] = STATE(22),
    [sym__loop_statement] = STATE(573),
    [sym_for_statement] = STATE(573),
    [sym_for_in_statement] = STATE(573),
    [sym_while_statement] = STATE(573),
    [sym_repeat_while_statement] = STATE(573),
    [sym_if_statement] = STATE(573),
    [sym_guard_statement] = STATE(573),
    [sym_switch_statement] = STATE(573),
    [sym_labeled_statement] = STATE(573),
    [sym_break_statement] = STATE(573),
    [sym_continue_statement] = STATE(573),
    [sym_return_statement] = STATE(573),
    [sym_throw_statement] = STATE(573),
    [sym_defer_statement] = STATE(573),
    [sym_do_statement] = STATE(573),
    [sym_build_configuration_statement] = STATE(573),
    [sym_line_control_statement] = STATE(573),
    [sym__declaration] = STATE(573),
    [sym_import_declaration] = STATE(573),
    [sym_constant_declaration] = STATE(573),
    [sym_variable_declaration] = STATE(573),
    [sym__variable_declaration_head] = STATE(113),
    [sym_typealias_declaration] = STATE(573),
    [sym__typealias_head] = STATE(625),
    [sym_function_declaration] = STATE(573),
    [sym__function_head] = STATE(370),
    [sym_enum_declaration] = STATE(573),
    [sym_struct_declaration] = STATE(573),
    [sym_class_declaration] = STATE(573),
    [sym_protocol_declaration] = STATE(573),
    [sym_initializer_declaration] = STATE(573),
    [sym__initializer_head] = STATE(537),
    [sym_deinitializer_declaration] = STATE(573),
    [sym_extension_declaration] = STATE(573),
    [sym_subscript_declaration] = STATE(573),
    [sym__subscript_head] = STATE(535),
    [sym_operator_declaration] = STATE(573),
    [sym__expression] = STATE(573),
    [aux_sym_program_repeat1] = STATE(22),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_guard] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_continue] = ACTIONS(23),
    [sym_fallthrough_statement] = ACTIONS(25),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_defer] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(33),
    [anon_sym_POUNDif] = ACTIONS(35),
    [anon_sym_POUNDline] = ACTIONS(37),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_typealias] = ACTIONS(41),
    [anon_sym_struct] = ACTIONS(43),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(47),
    [anon_sym_protocol] = ACTIONS(49),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_indirect] = ACTIONS(53),
    [anon_sym_init] = ACTIONS(55),
    [anon_sym_deinit] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_subscript] = ACTIONS(61),
    [anon_sym_prefix] = ACTIONS(63),
    [anon_sym_postfix] = ACTIONS(63),
    [anon_sym_infix] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
  },
  [27] = {
    [sym__declaration] = STATE(30),
    [sym_import_declaration] = STATE(30),
    [sym_constant_declaration] = STATE(30),
    [sym_variable_declaration] = STATE(30),
    [sym__variable_declaration_head] = STATE(124),
    [sym_typealias_declaration] = STATE(30),
    [sym__typealias_head] = STATE(643),
    [sym_function_declaration] = STATE(30),
    [sym__function_head] = STATE(374),
    [sym_enum_declaration] = STATE(30),
    [sym_case_declaration] = STATE(30),
    [sym_struct_declaration] = STATE(30),
    [sym_class_declaration] = STATE(30),
    [sym_protocol_declaration] = STATE(30),
    [sym_initializer_declaration] = STATE(30),
    [sym__initializer_head] = STATE(518),
    [sym_deinitializer_declaration] = STATE(30),
    [sym_extension_declaration] = STATE(30),
    [sym_subscript_declaration] = STATE(30),
    [sym__subscript_head] = STATE(517),
    [sym_operator_declaration] = STATE(30),
    [aux_sym_enum_declaration_repeat1] = STATE(30),
    [anon_sym_case] = ACTIONS(236),
    [anon_sym_let] = ACTIONS(238),
    [anon_sym_var] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(242),
    [anon_sym_import] = ACTIONS(244),
    [anon_sym_typealias] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_enum] = ACTIONS(252),
    [anon_sym_protocol] = ACTIONS(254),
    [anon_sym_func] = ACTIONS(256),
    [anon_sym_indirect] = ACTIONS(258),
    [anon_sym_init] = ACTIONS(260),
    [anon_sym_deinit] = ACTIONS(262),
    [anon_sym_extension] = ACTIONS(264),
    [anon_sym_subscript] = ACTIONS(266),
    [anon_sym_prefix] = ACTIONS(268),
    [anon_sym_postfix] = ACTIONS(268),
    [anon_sym_infix] = ACTIONS(270),
  },
  [28] = {
    [sym__declaration] = STATE(33),
    [sym_import_declaration] = STATE(33),
    [sym_constant_declaration] = STATE(33),
    [sym_variable_declaration] = STATE(33),
    [sym__variable_declaration_head] = STATE(124),
    [sym_typealias_declaration] = STATE(33),
    [sym__typealias_head] = STATE(643),
    [sym_function_declaration] = STATE(33),
    [sym__function_head] = STATE(374),
    [sym_enum_declaration] = STATE(33),
    [sym_case_declaration] = STATE(33),
    [sym_struct_declaration] = STATE(33),
    [sym_class_declaration] = STATE(33),
    [sym_protocol_declaration] = STATE(33),
    [sym_initializer_declaration] = STATE(33),
    [sym__initializer_head] = STATE(518),
    [sym_deinitializer_declaration] = STATE(33),
    [sym_extension_declaration] = STATE(33),
    [sym_subscript_declaration] = STATE(33),
    [sym__subscript_head] = STATE(517),
    [sym_operator_declaration] = STATE(33),
    [aux_sym_enum_declaration_repeat1] = STATE(33),
    [anon_sym_case] = ACTIONS(236),
    [anon_sym_let] = ACTIONS(238),
    [anon_sym_var] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(272),
    [anon_sym_import] = ACTIONS(244),
    [anon_sym_typealias] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_enum] = ACTIONS(252),
    [anon_sym_protocol] = ACTIONS(254),
    [anon_sym_func] = ACTIONS(256),
    [anon_sym_indirect] = ACTIONS(258),
    [anon_sym_init] = ACTIONS(260),
    [anon_sym_deinit] = ACTIONS(262),
    [anon_sym_extension] = ACTIONS(264),
    [anon_sym_subscript] = ACTIONS(266),
    [anon_sym_prefix] = ACTIONS(268),
    [anon_sym_postfix] = ACTIONS(268),
    [anon_sym_infix] = ACTIONS(270),
  },
  [29] = {
    [sym__declaration] = STATE(32),
    [sym_import_declaration] = STATE(32),
    [sym_constant_declaration] = STATE(32),
    [sym_variable_declaration] = STATE(32),
    [sym__variable_declaration_head] = STATE(124),
    [sym_typealias_declaration] = STATE(32),
    [sym__typealias_head] = STATE(643),
    [sym_function_declaration] = STATE(32),
    [sym__function_head] = STATE(374),
    [sym_enum_declaration] = STATE(32),
    [sym_case_declaration] = STATE(32),
    [sym_struct_declaration] = STATE(32),
    [sym_class_declaration] = STATE(32),
    [sym_protocol_declaration] = STATE(32),
    [sym_initializer_declaration] = STATE(32),
    [sym__initializer_head] = STATE(518),
    [sym_deinitializer_declaration] = STATE(32),
    [sym_extension_declaration] = STATE(32),
    [sym_subscript_declaration] = STATE(32),
    [sym__subscript_head] = STATE(517),
    [sym_operator_declaration] = STATE(32),
    [aux_sym_enum_declaration_repeat1] = STATE(32),
    [anon_sym_case] = ACTIONS(236),
    [anon_sym_let] = ACTIONS(238),
    [anon_sym_var] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(274),
    [anon_sym_import] = ACTIONS(244),
    [anon_sym_typealias] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_enum] = ACTIONS(252),
    [anon_sym_protocol] = ACTIONS(254),
    [anon_sym_func] = ACTIONS(256),
    [anon_sym_indirect] = ACTIONS(258),
    [anon_sym_init] = ACTIONS(260),
    [anon_sym_deinit] = ACTIONS(262),
    [anon_sym_extension] = ACTIONS(264),
    [anon_sym_subscript] = ACTIONS(266),
    [anon_sym_prefix] = ACTIONS(268),
    [anon_sym_postfix] = ACTIONS(268),
    [anon_sym_infix] = ACTIONS(270),
  },
  [30] = {
    [sym__declaration] = STATE(30),
    [sym_import_declaration] = STATE(30),
    [sym_constant_declaration] = STATE(30),
    [sym_variable_declaration] = STATE(30),
    [sym__variable_declaration_head] = STATE(124),
    [sym_typealias_declaration] = STATE(30),
    [sym__typealias_head] = STATE(643),
    [sym_function_declaration] = STATE(30),
    [sym__function_head] = STATE(374),
    [sym_enum_declaration] = STATE(30),
    [sym_case_declaration] = STATE(30),
    [sym_struct_declaration] = STATE(30),
    [sym_class_declaration] = STATE(30),
    [sym_protocol_declaration] = STATE(30),
    [sym_initializer_declaration] = STATE(30),
    [sym__initializer_head] = STATE(518),
    [sym_deinitializer_declaration] = STATE(30),
    [sym_extension_declaration] = STATE(30),
    [sym_subscript_declaration] = STATE(30),
    [sym__subscript_head] = STATE(517),
    [sym_operator_declaration] = STATE(30),
    [aux_sym_enum_declaration_repeat1] = STATE(30),
    [anon_sym_case] = ACTIONS(276),
    [anon_sym_let] = ACTIONS(279),
    [anon_sym_var] = ACTIONS(282),
    [anon_sym_RBRACE] = ACTIONS(285),
    [anon_sym_import] = ACTIONS(287),
    [anon_sym_typealias] = ACTIONS(290),
    [anon_sym_struct] = ACTIONS(293),
    [anon_sym_class] = ACTIONS(296),
    [anon_sym_enum] = ACTIONS(299),
    [anon_sym_protocol] = ACTIONS(302),
    [anon_sym_func] = ACTIONS(305),
    [anon_sym_indirect] = ACTIONS(308),
    [anon_sym_init] = ACTIONS(311),
    [anon_sym_deinit] = ACTIONS(314),
    [anon_sym_extension] = ACTIONS(317),
    [anon_sym_subscript] = ACTIONS(320),
    [anon_sym_prefix] = ACTIONS(323),
    [anon_sym_postfix] = ACTIONS(323),
    [anon_sym_infix] = ACTIONS(326),
  },
  [31] = {
    [sym__declaration] = STATE(30),
    [sym_import_declaration] = STATE(30),
    [sym_constant_declaration] = STATE(30),
    [sym_variable_declaration] = STATE(30),
    [sym__variable_declaration_head] = STATE(124),
    [sym_typealias_declaration] = STATE(30),
    [sym__typealias_head] = STATE(643),
    [sym_function_declaration] = STATE(30),
    [sym__function_head] = STATE(374),
    [sym_enum_declaration] = STATE(30),
    [sym_case_declaration] = STATE(30),
    [sym_struct_declaration] = STATE(30),
    [sym_class_declaration] = STATE(30),
    [sym_protocol_declaration] = STATE(30),
    [sym_initializer_declaration] = STATE(30),
    [sym__initializer_head] = STATE(518),
    [sym_deinitializer_declaration] = STATE(30),
    [sym_extension_declaration] = STATE(30),
    [sym_subscript_declaration] = STATE(30),
    [sym__subscript_head] = STATE(517),
    [sym_operator_declaration] = STATE(30),
    [aux_sym_enum_declaration_repeat1] = STATE(30),
    [anon_sym_case] = ACTIONS(236),
    [anon_sym_let] = ACTIONS(238),
    [anon_sym_var] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(274),
    [anon_sym_import] = ACTIONS(244),
    [anon_sym_typealias] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_enum] = ACTIONS(252),
    [anon_sym_protocol] = ACTIONS(254),
    [anon_sym_func] = ACTIONS(256),
    [anon_sym_indirect] = ACTIONS(258),
    [anon_sym_init] = ACTIONS(260),
    [anon_sym_deinit] = ACTIONS(262),
    [anon_sym_extension] = ACTIONS(264),
    [anon_sym_subscript] = ACTIONS(266),
    [anon_sym_prefix] = ACTIONS(268),
    [anon_sym_postfix] = ACTIONS(268),
    [anon_sym_infix] = ACTIONS(270),
  },
  [32] = {
    [sym__declaration] = STATE(30),
    [sym_import_declaration] = STATE(30),
    [sym_constant_declaration] = STATE(30),
    [sym_variable_declaration] = STATE(30),
    [sym__variable_declaration_head] = STATE(124),
    [sym_typealias_declaration] = STATE(30),
    [sym__typealias_head] = STATE(643),
    [sym_function_declaration] = STATE(30),
    [sym__function_head] = STATE(374),
    [sym_enum_declaration] = STATE(30),
    [sym_case_declaration] = STATE(30),
    [sym_struct_declaration] = STATE(30),
    [sym_class_declaration] = STATE(30),
    [sym_protocol_declaration] = STATE(30),
    [sym_initializer_declaration] = STATE(30),
    [sym__initializer_head] = STATE(518),
    [sym_deinitializer_declaration] = STATE(30),
    [sym_extension_declaration] = STATE(30),
    [sym_subscript_declaration] = STATE(30),
    [sym__subscript_head] = STATE(517),
    [sym_operator_declaration] = STATE(30),
    [aux_sym_enum_declaration_repeat1] = STATE(30),
    [anon_sym_case] = ACTIONS(236),
    [anon_sym_let] = ACTIONS(238),
    [anon_sym_var] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(329),
    [anon_sym_import] = ACTIONS(244),
    [anon_sym_typealias] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_enum] = ACTIONS(252),
    [anon_sym_protocol] = ACTIONS(254),
    [anon_sym_func] = ACTIONS(256),
    [anon_sym_indirect] = ACTIONS(258),
    [anon_sym_init] = ACTIONS(260),
    [anon_sym_deinit] = ACTIONS(262),
    [anon_sym_extension] = ACTIONS(264),
    [anon_sym_subscript] = ACTIONS(266),
    [anon_sym_prefix] = ACTIONS(268),
    [anon_sym_postfix] = ACTIONS(268),
    [anon_sym_infix] = ACTIONS(270),
  },
  [33] = {
    [sym__declaration] = STATE(30),
    [sym_import_declaration] = STATE(30),
    [sym_constant_declaration] = STATE(30),
    [sym_variable_declaration] = STATE(30),
    [sym__variable_declaration_head] = STATE(124),
    [sym_typealias_declaration] = STATE(30),
    [sym__typealias_head] = STATE(643),
    [sym_function_declaration] = STATE(30),
    [sym__function_head] = STATE(374),
    [sym_enum_declaration] = STATE(30),
    [sym_case_declaration] = STATE(30),
    [sym_struct_declaration] = STATE(30),
    [sym_class_declaration] = STATE(30),
    [sym_protocol_declaration] = STATE(30),
    [sym_initializer_declaration] = STATE(30),
    [sym__initializer_head] = STATE(518),
    [sym_deinitializer_declaration] = STATE(30),
    [sym_extension_declaration] = STATE(30),
    [sym_subscript_declaration] = STATE(30),
    [sym__subscript_head] = STATE(517),
    [sym_operator_declaration] = STATE(30),
    [aux_sym_enum_declaration_repeat1] = STATE(30),
    [anon_sym_case] = ACTIONS(236),
    [anon_sym_let] = ACTIONS(238),
    [anon_sym_var] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(331),
    [anon_sym_import] = ACTIONS(244),
    [anon_sym_typealias] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_enum] = ACTIONS(252),
    [anon_sym_protocol] = ACTIONS(254),
    [anon_sym_func] = ACTIONS(256),
    [anon_sym_indirect] = ACTIONS(258),
    [anon_sym_init] = ACTIONS(260),
    [anon_sym_deinit] = ACTIONS(262),
    [anon_sym_extension] = ACTIONS(264),
    [anon_sym_subscript] = ACTIONS(266),
    [anon_sym_prefix] = ACTIONS(268),
    [anon_sym_postfix] = ACTIONS(268),
    [anon_sym_infix] = ACTIONS(270),
  },
  [34] = {
    [sym__declaration] = STATE(31),
    [sym_import_declaration] = STATE(31),
    [sym_constant_declaration] = STATE(31),
    [sym_variable_declaration] = STATE(31),
    [sym__variable_declaration_head] = STATE(124),
    [sym_typealias_declaration] = STATE(31),
    [sym__typealias_head] = STATE(643),
    [sym_function_declaration] = STATE(31),
    [sym__function_head] = STATE(374),
    [sym_enum_declaration] = STATE(31),
    [sym_case_declaration] = STATE(31),
    [sym_struct_declaration] = STATE(31),
    [sym_class_declaration] = STATE(31),
    [sym_protocol_declaration] = STATE(31),
    [sym_initializer_declaration] = STATE(31),
    [sym__initializer_head] = STATE(518),
    [sym_deinitializer_declaration] = STATE(31),
    [sym_extension_declaration] = STATE(31),
    [sym_subscript_declaration] = STATE(31),
    [sym__subscript_head] = STATE(517),
    [sym_operator_declaration] = STATE(31),
    [aux_sym_enum_declaration_repeat1] = STATE(31),
    [anon_sym_case] = ACTIONS(236),
    [anon_sym_let] = ACTIONS(238),
    [anon_sym_var] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(333),
    [anon_sym_import] = ACTIONS(244),
    [anon_sym_typealias] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_enum] = ACTIONS(252),
    [anon_sym_protocol] = ACTIONS(254),
    [anon_sym_func] = ACTIONS(256),
    [anon_sym_indirect] = ACTIONS(258),
    [anon_sym_init] = ACTIONS(260),
    [anon_sym_deinit] = ACTIONS(262),
    [anon_sym_extension] = ACTIONS(264),
    [anon_sym_subscript] = ACTIONS(266),
    [anon_sym_prefix] = ACTIONS(268),
    [anon_sym_postfix] = ACTIONS(268),
    [anon_sym_infix] = ACTIONS(270),
  },
  [35] = {
    [sym__declaration] = STATE(27),
    [sym_import_declaration] = STATE(27),
    [sym_constant_declaration] = STATE(27),
    [sym_variable_declaration] = STATE(27),
    [sym__variable_declaration_head] = STATE(124),
    [sym_typealias_declaration] = STATE(27),
    [sym__typealias_head] = STATE(643),
    [sym_function_declaration] = STATE(27),
    [sym__function_head] = STATE(374),
    [sym_enum_declaration] = STATE(27),
    [sym_case_declaration] = STATE(27),
    [sym_struct_declaration] = STATE(27),
    [sym_class_declaration] = STATE(27),
    [sym_protocol_declaration] = STATE(27),
    [sym_initializer_declaration] = STATE(27),
    [sym__initializer_head] = STATE(518),
    [sym_deinitializer_declaration] = STATE(27),
    [sym_extension_declaration] = STATE(27),
    [sym_subscript_declaration] = STATE(27),
    [sym__subscript_head] = STATE(517),
    [sym_operator_declaration] = STATE(27),
    [aux_sym_enum_declaration_repeat1] = STATE(27),
    [anon_sym_case] = ACTIONS(236),
    [anon_sym_let] = ACTIONS(238),
    [anon_sym_var] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(331),
    [anon_sym_import] = ACTIONS(244),
    [anon_sym_typealias] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_enum] = ACTIONS(252),
    [anon_sym_protocol] = ACTIONS(254),
    [anon_sym_func] = ACTIONS(256),
    [anon_sym_indirect] = ACTIONS(258),
    [anon_sym_init] = ACTIONS(260),
    [anon_sym_deinit] = ACTIONS(262),
    [anon_sym_extension] = ACTIONS(264),
    [anon_sym_subscript] = ACTIONS(266),
    [anon_sym_prefix] = ACTIONS(268),
    [anon_sym_postfix] = ACTIONS(268),
    [anon_sym_infix] = ACTIONS(270),
  },
  [36] = {
    [sym__declaration] = STATE(44),
    [sym_import_declaration] = STATE(44),
    [sym_constant_declaration] = STATE(44),
    [sym_variable_declaration] = STATE(44),
    [sym__variable_declaration_head] = STATE(124),
    [sym_typealias_declaration] = STATE(44),
    [sym__typealias_head] = STATE(643),
    [sym_function_declaration] = STATE(44),
    [sym__function_head] = STATE(374),
    [sym_enum_declaration] = STATE(44),
    [sym_struct_declaration] = STATE(44),
    [sym_class_declaration] = STATE(44),
    [sym_protocol_declaration] = STATE(44),
    [sym_initializer_declaration] = STATE(44),
    [sym__initializer_head] = STATE(518),
    [sym_deinitializer_declaration] = STATE(44),
    [sym_extension_declaration] = STATE(44),
    [sym_subscript_declaration] = STATE(44),
    [sym__subscript_head] = STATE(517),
    [sym_operator_declaration] = STATE(44),
    [aux_sym_struct_declaration_repeat1] = STATE(44),
    [anon_sym_let] = ACTIONS(238),
    [anon_sym_var] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(335),
    [anon_sym_import] = ACTIONS(244),
    [anon_sym_typealias] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_enum] = ACTIONS(252),
    [anon_sym_protocol] = ACTIONS(254),
    [anon_sym_func] = ACTIONS(256),
    [anon_sym_indirect] = ACTIONS(337),
    [anon_sym_init] = ACTIONS(260),
    [anon_sym_deinit] = ACTIONS(262),
    [anon_sym_extension] = ACTIONS(264),
    [anon_sym_subscript] = ACTIONS(266),
    [anon_sym_prefix] = ACTIONS(268),
    [anon_sym_postfix] = ACTIONS(268),
    [anon_sym_infix] = ACTIONS(270),
  },
  [37] = {
    [sym__declaration] = STATE(45),
    [sym_import_declaration] = STATE(45),
    [sym_constant_declaration] = STATE(45),
    [sym_variable_declaration] = STATE(45),
    [sym__variable_declaration_head] = STATE(124),
    [sym_typealias_declaration] = STATE(45),
    [sym__typealias_head] = STATE(643),
    [sym_function_declaration] = STATE(45),
    [sym__function_head] = STATE(374),
    [sym_enum_declaration] = STATE(45),
    [sym_struct_declaration] = STATE(45),
    [sym_class_declaration] = STATE(45),
    [sym_protocol_declaration] = STATE(45),
    [sym_initializer_declaration] = STATE(45),
    [sym__initializer_head] = STATE(518),
    [sym_deinitializer_declaration] = STATE(45),
    [sym_extension_declaration] = STATE(45),
    [sym_subscript_declaration] = STATE(45),
    [sym__subscript_head] = STATE(517),
    [sym_operator_declaration] = STATE(45),
    [aux_sym_struct_declaration_repeat1] = STATE(45),
    [anon_sym_let] = ACTIONS(238),
    [anon_sym_var] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(339),
    [anon_sym_import] = ACTIONS(244),
    [anon_sym_typealias] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_enum] = ACTIONS(252),
    [anon_sym_protocol] = ACTIONS(254),
    [anon_sym_func] = ACTIONS(256),
    [anon_sym_indirect] = ACTIONS(337),
    [anon_sym_init] = ACTIONS(260),
    [anon_sym_deinit] = ACTIONS(262),
    [anon_sym_extension] = ACTIONS(264),
    [anon_sym_subscript] = ACTIONS(266),
    [anon_sym_prefix] = ACTIONS(268),
    [anon_sym_postfix] = ACTIONS(268),
    [anon_sym_infix] = ACTIONS(270),
  },
  [38] = {
    [anon_sym_for] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(343),
    [anon_sym_while] = ACTIONS(341),
    [anon_sym_let] = ACTIONS(341),
    [anon_sym_var] = ACTIONS(341),
    [anon_sym_repeat] = ACTIONS(341),
    [anon_sym_if] = ACTIONS(341),
    [anon_sym_guard] = ACTIONS(341),
    [anon_sym_switch] = ACTIONS(341),
    [anon_sym_break] = ACTIONS(341),
    [anon_sym_continue] = ACTIONS(341),
    [sym_fallthrough_statement] = ACTIONS(341),
    [anon_sym_return] = ACTIONS(341),
    [anon_sym_throw] = ACTIONS(341),
    [anon_sym_defer] = ACTIONS(341),
    [anon_sym_do] = ACTIONS(341),
    [anon_sym_POUNDif] = ACTIONS(343),
    [anon_sym_POUNDelseif] = ACTIONS(343),
    [anon_sym_POUNDelse] = ACTIONS(341),
    [anon_sym_POUNDendif] = ACTIONS(343),
    [anon_sym_AMP_AMP] = ACTIONS(343),
    [anon_sym_PIPE_PIPE] = ACTIONS(343),
    [anon_sym_POUNDline] = ACTIONS(343),
    [anon_sym_import] = ACTIONS(341),
    [anon_sym_typealias] = ACTIONS(341),
    [anon_sym_struct] = ACTIONS(341),
    [anon_sym_class] = ACTIONS(341),
    [anon_sym_enum] = ACTIONS(341),
    [anon_sym_protocol] = ACTIONS(341),
    [anon_sym_func] = ACTIONS(341),
    [anon_sym_indirect] = ACTIONS(341),
    [anon_sym_init] = ACTIONS(341),
    [anon_sym_deinit] = ACTIONS(341),
    [anon_sym_extension] = ACTIONS(341),
    [anon_sym_subscript] = ACTIONS(341),
    [anon_sym_prefix] = ACTIONS(341),
    [anon_sym_postfix] = ACTIONS(341),
    [anon_sym_infix] = ACTIONS(341),
    [sym_identifier] = ACTIONS(341),
  },
  [39] = {
    [anon_sym_for] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(343),
    [anon_sym_while] = ACTIONS(341),
    [anon_sym_let] = ACTIONS(341),
    [anon_sym_var] = ACTIONS(341),
    [anon_sym_repeat] = ACTIONS(341),
    [anon_sym_if] = ACTIONS(341),
    [anon_sym_guard] = ACTIONS(341),
    [anon_sym_switch] = ACTIONS(341),
    [anon_sym_break] = ACTIONS(341),
    [anon_sym_continue] = ACTIONS(341),
    [sym_fallthrough_statement] = ACTIONS(341),
    [anon_sym_return] = ACTIONS(341),
    [anon_sym_throw] = ACTIONS(341),
    [anon_sym_defer] = ACTIONS(341),
    [anon_sym_do] = ACTIONS(341),
    [anon_sym_POUNDif] = ACTIONS(343),
    [anon_sym_POUNDelseif] = ACTIONS(343),
    [anon_sym_POUNDelse] = ACTIONS(341),
    [anon_sym_POUNDendif] = ACTIONS(343),
    [anon_sym_AMP_AMP] = ACTIONS(343),
    [anon_sym_PIPE_PIPE] = ACTIONS(343),
    [anon_sym_POUNDline] = ACTIONS(343),
    [anon_sym_import] = ACTIONS(341),
    [anon_sym_typealias] = ACTIONS(341),
    [anon_sym_struct] = ACTIONS(341),
    [anon_sym_class] = ACTIONS(341),
    [anon_sym_enum] = ACTIONS(341),
    [anon_sym_protocol] = ACTIONS(341),
    [anon_sym_func] = ACTIONS(341),
    [anon_sym_indirect] = ACTIONS(341),
    [anon_sym_init] = ACTIONS(341),
    [anon_sym_deinit] = ACTIONS(341),
    [anon_sym_extension] = ACTIONS(341),
    [anon_sym_subscript] = ACTIONS(341),
    [anon_sym_prefix] = ACTIONS(341),
    [anon_sym_postfix] = ACTIONS(341),
    [anon_sym_infix] = ACTIONS(341),
    [sym_identifier] = ACTIONS(341),
  },
  [40] = {
    [sym__declaration] = STATE(48),
    [sym_import_declaration] = STATE(48),
    [sym_constant_declaration] = STATE(48),
    [sym_variable_declaration] = STATE(48),
    [sym__variable_declaration_head] = STATE(124),
    [sym_typealias_declaration] = STATE(48),
    [sym__typealias_head] = STATE(643),
    [sym_function_declaration] = STATE(48),
    [sym__function_head] = STATE(374),
    [sym_enum_declaration] = STATE(48),
    [sym_struct_declaration] = STATE(48),
    [sym_class_declaration] = STATE(48),
    [sym_protocol_declaration] = STATE(48),
    [sym_initializer_declaration] = STATE(48),
    [sym__initializer_head] = STATE(518),
    [sym_deinitializer_declaration] = STATE(48),
    [sym_extension_declaration] = STATE(48),
    [sym_subscript_declaration] = STATE(48),
    [sym__subscript_head] = STATE(517),
    [sym_operator_declaration] = STATE(48),
    [aux_sym_struct_declaration_repeat1] = STATE(48),
    [anon_sym_let] = ACTIONS(238),
    [anon_sym_var] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(345),
    [anon_sym_import] = ACTIONS(244),
    [anon_sym_typealias] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_enum] = ACTIONS(252),
    [anon_sym_protocol] = ACTIONS(254),
    [anon_sym_func] = ACTIONS(256),
    [anon_sym_indirect] = ACTIONS(337),
    [anon_sym_init] = ACTIONS(260),
    [anon_sym_deinit] = ACTIONS(262),
    [anon_sym_extension] = ACTIONS(264),
    [anon_sym_subscript] = ACTIONS(266),
    [anon_sym_prefix] = ACTIONS(268),
    [anon_sym_postfix] = ACTIONS(268),
    [anon_sym_infix] = ACTIONS(270),
  },
  [41] = {
    [sym__declaration] = STATE(54),
    [sym_import_declaration] = STATE(54),
    [sym_constant_declaration] = STATE(54),
    [sym_variable_declaration] = STATE(54),
    [sym__variable_declaration_head] = STATE(124),
    [sym_typealias_declaration] = STATE(54),
    [sym__typealias_head] = STATE(643),
    [sym_function_declaration] = STATE(54),
    [sym__function_head] = STATE(374),
    [sym_enum_declaration] = STATE(54),
    [sym_struct_declaration] = STATE(54),
    [sym_class_declaration] = STATE(54),
    [sym_protocol_declaration] = STATE(54),
    [sym_initializer_declaration] = STATE(54),
    [sym__initializer_head] = STATE(518),
    [sym_deinitializer_declaration] = STATE(54),
    [sym_extension_declaration] = STATE(54),
    [sym_subscript_declaration] = STATE(54),
    [sym__subscript_head] = STATE(517),
    [sym_operator_declaration] = STATE(54),
    [aux_sym_struct_declaration_repeat1] = STATE(54),
    [anon_sym_let] = ACTIONS(238),
    [anon_sym_var] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(347),
    [anon_sym_import] = ACTIONS(244),
    [anon_sym_typealias] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_enum] = ACTIONS(252),
    [anon_sym_protocol] = ACTIONS(254),
    [anon_sym_func] = ACTIONS(256),
    [anon_sym_indirect] = ACTIONS(337),
    [anon_sym_init] = ACTIONS(260),
    [anon_sym_deinit] = ACTIONS(262),
    [anon_sym_extension] = ACTIONS(264),
    [anon_sym_subscript] = ACTIONS(266),
    [anon_sym_prefix] = ACTIONS(268),
    [anon_sym_postfix] = ACTIONS(268),
    [anon_sym_infix] = ACTIONS(270),
  },
  [42] = {
    [anon_sym_for] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(343),
    [anon_sym_while] = ACTIONS(341),
    [anon_sym_let] = ACTIONS(341),
    [anon_sym_var] = ACTIONS(341),
    [anon_sym_repeat] = ACTIONS(341),
    [anon_sym_if] = ACTIONS(341),
    [anon_sym_guard] = ACTIONS(341),
    [anon_sym_switch] = ACTIONS(341),
    [anon_sym_break] = ACTIONS(341),
    [anon_sym_continue] = ACTIONS(341),
    [sym_fallthrough_statement] = ACTIONS(341),
    [anon_sym_return] = ACTIONS(341),
    [anon_sym_throw] = ACTIONS(341),
    [anon_sym_defer] = ACTIONS(341),
    [anon_sym_do] = ACTIONS(341),
    [anon_sym_POUNDif] = ACTIONS(343),
    [anon_sym_POUNDelseif] = ACTIONS(343),
    [anon_sym_POUNDelse] = ACTIONS(341),
    [anon_sym_POUNDendif] = ACTIONS(343),
    [anon_sym_AMP_AMP] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(343),
    [anon_sym_POUNDline] = ACTIONS(343),
    [anon_sym_import] = ACTIONS(341),
    [anon_sym_typealias] = ACTIONS(341),
    [anon_sym_struct] = ACTIONS(341),
    [anon_sym_class] = ACTIONS(341),
    [anon_sym_enum] = ACTIONS(341),
    [anon_sym_protocol] = ACTIONS(341),
    [anon_sym_func] = ACTIONS(341),
    [anon_sym_indirect] = ACTIONS(341),
    [anon_sym_init] = ACTIONS(341),
    [anon_sym_deinit] = ACTIONS(341),
    [anon_sym_extension] = ACTIONS(341),
    [anon_sym_subscript] = ACTIONS(341),
    [anon_sym_prefix] = ACTIONS(341),
    [anon_sym_postfix] = ACTIONS(341),
    [anon_sym_infix] = ACTIONS(341),
    [sym_identifier] = ACTIONS(341),
  },
  [43] = {
    [sym__declaration] = STATE(41),
    [sym_import_declaration] = STATE(41),
    [sym_constant_declaration] = STATE(41),
    [sym_variable_declaration] = STATE(41),
    [sym__variable_declaration_head] = STATE(124),
    [sym_typealias_declaration] = STATE(41),
    [sym__typealias_head] = STATE(643),
    [sym_function_declaration] = STATE(41),
    [sym__function_head] = STATE(374),
    [sym_enum_declaration] = STATE(41),
    [sym_struct_declaration] = STATE(41),
    [sym_class_declaration] = STATE(41),
    [sym_protocol_declaration] = STATE(41),
    [sym_initializer_declaration] = STATE(41),
    [sym__initializer_head] = STATE(518),
    [sym_deinitializer_declaration] = STATE(41),
    [sym_extension_declaration] = STATE(41),
    [sym_subscript_declaration] = STATE(41),
    [sym__subscript_head] = STATE(517),
    [sym_operator_declaration] = STATE(41),
    [aux_sym_struct_declaration_repeat1] = STATE(41),
    [anon_sym_let] = ACTIONS(238),
    [anon_sym_var] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(349),
    [anon_sym_import] = ACTIONS(244),
    [anon_sym_typealias] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_enum] = ACTIONS(252),
    [anon_sym_protocol] = ACTIONS(254),
    [anon_sym_func] = ACTIONS(256),
    [anon_sym_indirect] = ACTIONS(337),
    [anon_sym_init] = ACTIONS(260),
    [anon_sym_deinit] = ACTIONS(262),
    [anon_sym_extension] = ACTIONS(264),
    [anon_sym_subscript] = ACTIONS(266),
    [anon_sym_prefix] = ACTIONS(268),
    [anon_sym_postfix] = ACTIONS(268),
    [anon_sym_infix] = ACTIONS(270),
  },
  [44] = {
    [sym__declaration] = STATE(54),
    [sym_import_declaration] = STATE(54),
    [sym_constant_declaration] = STATE(54),
    [sym_variable_declaration] = STATE(54),
    [sym__variable_declaration_head] = STATE(124),
    [sym_typealias_declaration] = STATE(54),
    [sym__typealias_head] = STATE(643),
    [sym_function_declaration] = STATE(54),
    [sym__function_head] = STATE(374),
    [sym_enum_declaration] = STATE(54),
    [sym_struct_declaration] = STATE(54),
    [sym_class_declaration] = STATE(54),
    [sym_protocol_declaration] = STATE(54),
    [sym_initializer_declaration] = STATE(54),
    [sym__initializer_head] = STATE(518),
    [sym_deinitializer_declaration] = STATE(54),
    [sym_extension_declaration] = STATE(54),
    [sym_subscript_declaration] = STATE(54),
    [sym__subscript_head] = STATE(517),
    [sym_operator_declaration] = STATE(54),
    [aux_sym_struct_declaration_repeat1] = STATE(54),
    [anon_sym_let] = ACTIONS(238),
    [anon_sym_var] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(351),
    [anon_sym_import] = ACTIONS(244),
    [anon_sym_typealias] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_enum] = ACTIONS(252),
    [anon_sym_protocol] = ACTIONS(254),
    [anon_sym_func] = ACTIONS(256),
    [anon_sym_indirect] = ACTIONS(337),
    [anon_sym_init] = ACTIONS(260),
    [anon_sym_deinit] = ACTIONS(262),
    [anon_sym_extension] = ACTIONS(264),
    [anon_sym_subscript] = ACTIONS(266),
    [anon_sym_prefix] = ACTIONS(268),
    [anon_sym_postfix] = ACTIONS(268),
    [anon_sym_infix] = ACTIONS(270),
  },
  [45] = {
    [sym__declaration] = STATE(54),
    [sym_import_declaration] = STATE(54),
    [sym_constant_declaration] = STATE(54),
    [sym_variable_declaration] = STATE(54),
    [sym__variable_declaration_head] = STATE(124),
    [sym_typealias_declaration] = STATE(54),
    [sym__typealias_head] = STATE(643),
    [sym_function_declaration] = STATE(54),
    [sym__function_head] = STATE(374),
    [sym_enum_declaration] = STATE(54),
    [sym_struct_declaration] = STATE(54),
    [sym_class_declaration] = STATE(54),
    [sym_protocol_declaration] = STATE(54),
    [sym_initializer_declaration] = STATE(54),
    [sym__initializer_head] = STATE(518),
    [sym_deinitializer_declaration] = STATE(54),
    [sym_extension_declaration] = STATE(54),
    [sym_subscript_declaration] = STATE(54),
    [sym__subscript_head] = STATE(517),
    [sym_operator_declaration] = STATE(54),
    [aux_sym_struct_declaration_repeat1] = STATE(54),
    [anon_sym_let] = ACTIONS(238),
    [anon_sym_var] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(353),
    [anon_sym_import] = ACTIONS(244),
    [anon_sym_typealias] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_enum] = ACTIONS(252),
    [anon_sym_protocol] = ACTIONS(254),
    [anon_sym_func] = ACTIONS(256),
    [anon_sym_indirect] = ACTIONS(337),
    [anon_sym_init] = ACTIONS(260),
    [anon_sym_deinit] = ACTIONS(262),
    [anon_sym_extension] = ACTIONS(264),
    [anon_sym_subscript] = ACTIONS(266),
    [anon_sym_prefix] = ACTIONS(268),
    [anon_sym_postfix] = ACTIONS(268),
    [anon_sym_infix] = ACTIONS(270),
  },
  [46] = {
    [sym__declaration] = STATE(54),
    [sym_import_declaration] = STATE(54),
    [sym_constant_declaration] = STATE(54),
    [sym_variable_declaration] = STATE(54),
    [sym__variable_declaration_head] = STATE(124),
    [sym_typealias_declaration] = STATE(54),
    [sym__typealias_head] = STATE(643),
    [sym_function_declaration] = STATE(54),
    [sym__function_head] = STATE(374),
    [sym_enum_declaration] = STATE(54),
    [sym_struct_declaration] = STATE(54),
    [sym_class_declaration] = STATE(54),
    [sym_protocol_declaration] = STATE(54),
    [sym_initializer_declaration] = STATE(54),
    [sym__initializer_head] = STATE(518),
    [sym_deinitializer_declaration] = STATE(54),
    [sym_extension_declaration] = STATE(54),
    [sym_subscript_declaration] = STATE(54),
    [sym__subscript_head] = STATE(517),
    [sym_operator_declaration] = STATE(54),
    [aux_sym_struct_declaration_repeat1] = STATE(54),
    [anon_sym_let] = ACTIONS(238),
    [anon_sym_var] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(355),
    [anon_sym_import] = ACTIONS(244),
    [anon_sym_typealias] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_enum] = ACTIONS(252),
    [anon_sym_protocol] = ACTIONS(254),
    [anon_sym_func] = ACTIONS(256),
    [anon_sym_indirect] = ACTIONS(337),
    [anon_sym_init] = ACTIONS(260),
    [anon_sym_deinit] = ACTIONS(262),
    [anon_sym_extension] = ACTIONS(264),
    [anon_sym_subscript] = ACTIONS(266),
    [anon_sym_prefix] = ACTIONS(268),
    [anon_sym_postfix] = ACTIONS(268),
    [anon_sym_infix] = ACTIONS(270),
  },
  [47] = {
    [sym__declaration] = STATE(46),
    [sym_import_declaration] = STATE(46),
    [sym_constant_declaration] = STATE(46),
    [sym_variable_declaration] = STATE(46),
    [sym__variable_declaration_head] = STATE(124),
    [sym_typealias_declaration] = STATE(46),
    [sym__typealias_head] = STATE(643),
    [sym_function_declaration] = STATE(46),
    [sym__function_head] = STATE(374),
    [sym_enum_declaration] = STATE(46),
    [sym_struct_declaration] = STATE(46),
    [sym_class_declaration] = STATE(46),
    [sym_protocol_declaration] = STATE(46),
    [sym_initializer_declaration] = STATE(46),
    [sym__initializer_head] = STATE(518),
    [sym_deinitializer_declaration] = STATE(46),
    [sym_extension_declaration] = STATE(46),
    [sym_subscript_declaration] = STATE(46),
    [sym__subscript_head] = STATE(517),
    [sym_operator_declaration] = STATE(46),
    [aux_sym_struct_declaration_repeat1] = STATE(46),
    [anon_sym_let] = ACTIONS(238),
    [anon_sym_var] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(357),
    [anon_sym_import] = ACTIONS(244),
    [anon_sym_typealias] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_enum] = ACTIONS(252),
    [anon_sym_protocol] = ACTIONS(254),
    [anon_sym_func] = ACTIONS(256),
    [anon_sym_indirect] = ACTIONS(337),
    [anon_sym_init] = ACTIONS(260),
    [anon_sym_deinit] = ACTIONS(262),
    [anon_sym_extension] = ACTIONS(264),
    [anon_sym_subscript] = ACTIONS(266),
    [anon_sym_prefix] = ACTIONS(268),
    [anon_sym_postfix] = ACTIONS(268),
    [anon_sym_infix] = ACTIONS(270),
  },
  [48] = {
    [sym__declaration] = STATE(54),
    [sym_import_declaration] = STATE(54),
    [sym_constant_declaration] = STATE(54),
    [sym_variable_declaration] = STATE(54),
    [sym__variable_declaration_head] = STATE(124),
    [sym_typealias_declaration] = STATE(54),
    [sym__typealias_head] = STATE(643),
    [sym_function_declaration] = STATE(54),
    [sym__function_head] = STATE(374),
    [sym_enum_declaration] = STATE(54),
    [sym_struct_declaration] = STATE(54),
    [sym_class_declaration] = STATE(54),
    [sym_protocol_declaration] = STATE(54),
    [sym_initializer_declaration] = STATE(54),
    [sym__initializer_head] = STATE(518),
    [sym_deinitializer_declaration] = STATE(54),
    [sym_extension_declaration] = STATE(54),
    [sym_subscript_declaration] = STATE(54),
    [sym__subscript_head] = STATE(517),
    [sym_operator_declaration] = STATE(54),
    [aux_sym_struct_declaration_repeat1] = STATE(54),
    [anon_sym_let] = ACTIONS(238),
    [anon_sym_var] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(359),
    [anon_sym_import] = ACTIONS(244),
    [anon_sym_typealias] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_enum] = ACTIONS(252),
    [anon_sym_protocol] = ACTIONS(254),
    [anon_sym_func] = ACTIONS(256),
    [anon_sym_indirect] = ACTIONS(337),
    [anon_sym_init] = ACTIONS(260),
    [anon_sym_deinit] = ACTIONS(262),
    [anon_sym_extension] = ACTIONS(264),
    [anon_sym_subscript] = ACTIONS(266),
    [anon_sym_prefix] = ACTIONS(268),
    [anon_sym_postfix] = ACTIONS(268),
    [anon_sym_infix] = ACTIONS(270),
  },
  [49] = {
    [anon_sym_for] = ACTIONS(361),
    [anon_sym_RPAREN] = ACTIONS(363),
    [anon_sym_while] = ACTIONS(361),
    [anon_sym_let] = ACTIONS(361),
    [anon_sym_var] = ACTIONS(361),
    [anon_sym_repeat] = ACTIONS(361),
    [anon_sym_if] = ACTIONS(361),
    [anon_sym_guard] = ACTIONS(361),
    [anon_sym_switch] = ACTIONS(361),
    [anon_sym_break] = ACTIONS(361),
    [anon_sym_continue] = ACTIONS(361),
    [sym_fallthrough_statement] = ACTIONS(361),
    [anon_sym_return] = ACTIONS(361),
    [anon_sym_throw] = ACTIONS(361),
    [anon_sym_defer] = ACTIONS(361),
    [anon_sym_do] = ACTIONS(361),
    [anon_sym_POUNDif] = ACTIONS(363),
    [anon_sym_POUNDelseif] = ACTIONS(363),
    [anon_sym_POUNDelse] = ACTIONS(361),
    [anon_sym_POUNDendif] = ACTIONS(363),
    [anon_sym_AMP_AMP] = ACTIONS(363),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_POUNDline] = ACTIONS(363),
    [anon_sym_import] = ACTIONS(361),
    [anon_sym_typealias] = ACTIONS(361),
    [anon_sym_struct] = ACTIONS(361),
    [anon_sym_class] = ACTIONS(361),
    [anon_sym_enum] = ACTIONS(361),
    [anon_sym_protocol] = ACTIONS(361),
    [anon_sym_func] = ACTIONS(361),
    [anon_sym_indirect] = ACTIONS(361),
    [anon_sym_init] = ACTIONS(361),
    [anon_sym_deinit] = ACTIONS(361),
    [anon_sym_extension] = ACTIONS(361),
    [anon_sym_subscript] = ACTIONS(361),
    [anon_sym_prefix] = ACTIONS(361),
    [anon_sym_postfix] = ACTIONS(361),
    [anon_sym_infix] = ACTIONS(361),
    [sym_identifier] = ACTIONS(361),
  },
  [50] = {
    [anon_sym_for] = ACTIONS(365),
    [anon_sym_RPAREN] = ACTIONS(367),
    [anon_sym_while] = ACTIONS(365),
    [anon_sym_let] = ACTIONS(365),
    [anon_sym_var] = ACTIONS(365),
    [anon_sym_repeat] = ACTIONS(365),
    [anon_sym_if] = ACTIONS(365),
    [anon_sym_guard] = ACTIONS(365),
    [anon_sym_switch] = ACTIONS(365),
    [anon_sym_break] = ACTIONS(365),
    [anon_sym_continue] = ACTIONS(365),
    [sym_fallthrough_statement] = ACTIONS(365),
    [anon_sym_return] = ACTIONS(365),
    [anon_sym_throw] = ACTIONS(365),
    [anon_sym_defer] = ACTIONS(365),
    [anon_sym_do] = ACTIONS(365),
    [anon_sym_POUNDif] = ACTIONS(367),
    [anon_sym_POUNDelseif] = ACTIONS(367),
    [anon_sym_POUNDelse] = ACTIONS(365),
    [anon_sym_POUNDendif] = ACTIONS(367),
    [anon_sym_AMP_AMP] = ACTIONS(367),
    [anon_sym_PIPE_PIPE] = ACTIONS(367),
    [anon_sym_POUNDline] = ACTIONS(367),
    [anon_sym_import] = ACTIONS(365),
    [anon_sym_typealias] = ACTIONS(365),
    [anon_sym_struct] = ACTIONS(365),
    [anon_sym_class] = ACTIONS(365),
    [anon_sym_enum] = ACTIONS(365),
    [anon_sym_protocol] = ACTIONS(365),
    [anon_sym_func] = ACTIONS(365),
    [anon_sym_indirect] = ACTIONS(365),
    [anon_sym_init] = ACTIONS(365),
    [anon_sym_deinit] = ACTIONS(365),
    [anon_sym_extension] = ACTIONS(365),
    [anon_sym_subscript] = ACTIONS(365),
    [anon_sym_prefix] = ACTIONS(365),
    [anon_sym_postfix] = ACTIONS(365),
    [anon_sym_infix] = ACTIONS(365),
    [sym_identifier] = ACTIONS(365),
  },
  [51] = {
    [sym__declaration] = STATE(52),
    [sym_import_declaration] = STATE(52),
    [sym_constant_declaration] = STATE(52),
    [sym_variable_declaration] = STATE(52),
    [sym__variable_declaration_head] = STATE(124),
    [sym_typealias_declaration] = STATE(52),
    [sym__typealias_head] = STATE(643),
    [sym_function_declaration] = STATE(52),
    [sym__function_head] = STATE(374),
    [sym_enum_declaration] = STATE(52),
    [sym_struct_declaration] = STATE(52),
    [sym_class_declaration] = STATE(52),
    [sym_protocol_declaration] = STATE(52),
    [sym_initializer_declaration] = STATE(52),
    [sym__initializer_head] = STATE(518),
    [sym_deinitializer_declaration] = STATE(52),
    [sym_extension_declaration] = STATE(52),
    [sym_subscript_declaration] = STATE(52),
    [sym__subscript_head] = STATE(517),
    [sym_operator_declaration] = STATE(52),
    [aux_sym_struct_declaration_repeat1] = STATE(52),
    [anon_sym_let] = ACTIONS(238),
    [anon_sym_var] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(369),
    [anon_sym_import] = ACTIONS(244),
    [anon_sym_typealias] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_enum] = ACTIONS(252),
    [anon_sym_protocol] = ACTIONS(254),
    [anon_sym_func] = ACTIONS(256),
    [anon_sym_indirect] = ACTIONS(337),
    [anon_sym_init] = ACTIONS(260),
    [anon_sym_deinit] = ACTIONS(262),
    [anon_sym_extension] = ACTIONS(264),
    [anon_sym_subscript] = ACTIONS(266),
    [anon_sym_prefix] = ACTIONS(268),
    [anon_sym_postfix] = ACTIONS(268),
    [anon_sym_infix] = ACTIONS(270),
  },
  [52] = {
    [sym__declaration] = STATE(54),
    [sym_import_declaration] = STATE(54),
    [sym_constant_declaration] = STATE(54),
    [sym_variable_declaration] = STATE(54),
    [sym__variable_declaration_head] = STATE(124),
    [sym_typealias_declaration] = STATE(54),
    [sym__typealias_head] = STATE(643),
    [sym_function_declaration] = STATE(54),
    [sym__function_head] = STATE(374),
    [sym_enum_declaration] = STATE(54),
    [sym_struct_declaration] = STATE(54),
    [sym_class_declaration] = STATE(54),
    [sym_protocol_declaration] = STATE(54),
    [sym_initializer_declaration] = STATE(54),
    [sym__initializer_head] = STATE(518),
    [sym_deinitializer_declaration] = STATE(54),
    [sym_extension_declaration] = STATE(54),
    [sym_subscript_declaration] = STATE(54),
    [sym__subscript_head] = STATE(517),
    [sym_operator_declaration] = STATE(54),
    [aux_sym_struct_declaration_repeat1] = STATE(54),
    [anon_sym_let] = ACTIONS(238),
    [anon_sym_var] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(371),
    [anon_sym_import] = ACTIONS(244),
    [anon_sym_typealias] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_enum] = ACTIONS(252),
    [anon_sym_protocol] = ACTIONS(254),
    [anon_sym_func] = ACTIONS(256),
    [anon_sym_indirect] = ACTIONS(337),
    [anon_sym_init] = ACTIONS(260),
    [anon_sym_deinit] = ACTIONS(262),
    [anon_sym_extension] = ACTIONS(264),
    [anon_sym_subscript] = ACTIONS(266),
    [anon_sym_prefix] = ACTIONS(268),
    [anon_sym_postfix] = ACTIONS(268),
    [anon_sym_infix] = ACTIONS(270),
  },
  [53] = {
    [anon_sym_for] = ACTIONS(373),
    [anon_sym_RPAREN] = ACTIONS(375),
    [anon_sym_while] = ACTIONS(373),
    [anon_sym_let] = ACTIONS(373),
    [anon_sym_var] = ACTIONS(373),
    [anon_sym_repeat] = ACTIONS(373),
    [anon_sym_if] = ACTIONS(373),
    [anon_sym_guard] = ACTIONS(373),
    [anon_sym_switch] = ACTIONS(373),
    [anon_sym_break] = ACTIONS(373),
    [anon_sym_continue] = ACTIONS(373),
    [sym_fallthrough_statement] = ACTIONS(373),
    [anon_sym_return] = ACTIONS(373),
    [anon_sym_throw] = ACTIONS(373),
    [anon_sym_defer] = ACTIONS(373),
    [anon_sym_do] = ACTIONS(373),
    [anon_sym_POUNDif] = ACTIONS(375),
    [anon_sym_POUNDelseif] = ACTIONS(375),
    [anon_sym_POUNDelse] = ACTIONS(373),
    [anon_sym_POUNDendif] = ACTIONS(375),
    [anon_sym_AMP_AMP] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(77),
    [anon_sym_POUNDline] = ACTIONS(375),
    [anon_sym_import] = ACTIONS(373),
    [anon_sym_typealias] = ACTIONS(373),
    [anon_sym_struct] = ACTIONS(373),
    [anon_sym_class] = ACTIONS(373),
    [anon_sym_enum] = ACTIONS(373),
    [anon_sym_protocol] = ACTIONS(373),
    [anon_sym_func] = ACTIONS(373),
    [anon_sym_indirect] = ACTIONS(373),
    [anon_sym_init] = ACTIONS(373),
    [anon_sym_deinit] = ACTIONS(373),
    [anon_sym_extension] = ACTIONS(373),
    [anon_sym_subscript] = ACTIONS(373),
    [anon_sym_prefix] = ACTIONS(373),
    [anon_sym_postfix] = ACTIONS(373),
    [anon_sym_infix] = ACTIONS(373),
    [sym_identifier] = ACTIONS(373),
  },
  [54] = {
    [sym__declaration] = STATE(54),
    [sym_import_declaration] = STATE(54),
    [sym_constant_declaration] = STATE(54),
    [sym_variable_declaration] = STATE(54),
    [sym__variable_declaration_head] = STATE(124),
    [sym_typealias_declaration] = STATE(54),
    [sym__typealias_head] = STATE(643),
    [sym_function_declaration] = STATE(54),
    [sym__function_head] = STATE(374),
    [sym_enum_declaration] = STATE(54),
    [sym_struct_declaration] = STATE(54),
    [sym_class_declaration] = STATE(54),
    [sym_protocol_declaration] = STATE(54),
    [sym_initializer_declaration] = STATE(54),
    [sym__initializer_head] = STATE(518),
    [sym_deinitializer_declaration] = STATE(54),
    [sym_extension_declaration] = STATE(54),
    [sym_subscript_declaration] = STATE(54),
    [sym__subscript_head] = STATE(517),
    [sym_operator_declaration] = STATE(54),
    [aux_sym_struct_declaration_repeat1] = STATE(54),
    [anon_sym_let] = ACTIONS(377),
    [anon_sym_var] = ACTIONS(380),
    [anon_sym_RBRACE] = ACTIONS(383),
    [anon_sym_import] = ACTIONS(385),
    [anon_sym_typealias] = ACTIONS(388),
    [anon_sym_struct] = ACTIONS(391),
    [anon_sym_class] = ACTIONS(394),
    [anon_sym_enum] = ACTIONS(397),
    [anon_sym_protocol] = ACTIONS(400),
    [anon_sym_func] = ACTIONS(403),
    [anon_sym_indirect] = ACTIONS(406),
    [anon_sym_init] = ACTIONS(409),
    [anon_sym_deinit] = ACTIONS(412),
    [anon_sym_extension] = ACTIONS(415),
    [anon_sym_subscript] = ACTIONS(418),
    [anon_sym_prefix] = ACTIONS(421),
    [anon_sym_postfix] = ACTIONS(421),
    [anon_sym_infix] = ACTIONS(424),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(427),
    [anon_sym_for] = ACTIONS(429),
    [anon_sym_while] = ACTIONS(429),
    [anon_sym_let] = ACTIONS(429),
    [anon_sym_var] = ACTIONS(429),
    [anon_sym_repeat] = ACTIONS(429),
    [anon_sym_if] = ACTIONS(429),
    [anon_sym_guard] = ACTIONS(429),
    [anon_sym_switch] = ACTIONS(429),
    [anon_sym_RBRACE] = ACTIONS(427),
    [anon_sym_break] = ACTIONS(429),
    [anon_sym_continue] = ACTIONS(429),
    [sym_fallthrough_statement] = ACTIONS(429),
    [anon_sym_return] = ACTIONS(429),
    [anon_sym_throw] = ACTIONS(429),
    [anon_sym_defer] = ACTIONS(429),
    [anon_sym_do] = ACTIONS(429),
    [anon_sym_POUNDif] = ACTIONS(427),
    [anon_sym_POUNDelseif] = ACTIONS(427),
    [anon_sym_POUNDelse] = ACTIONS(429),
    [anon_sym_POUNDendif] = ACTIONS(427),
    [anon_sym_POUNDline] = ACTIONS(427),
    [anon_sym_import] = ACTIONS(429),
    [anon_sym_typealias] = ACTIONS(429),
    [anon_sym_struct] = ACTIONS(429),
    [anon_sym_class] = ACTIONS(429),
    [anon_sym_enum] = ACTIONS(429),
    [anon_sym_protocol] = ACTIONS(429),
    [anon_sym_func] = ACTIONS(429),
    [anon_sym_indirect] = ACTIONS(429),
    [anon_sym_init] = ACTIONS(429),
    [anon_sym_deinit] = ACTIONS(429),
    [anon_sym_extension] = ACTIONS(429),
    [anon_sym_subscript] = ACTIONS(429),
    [anon_sym_prefix] = ACTIONS(429),
    [anon_sym_postfix] = ACTIONS(429),
    [anon_sym_infix] = ACTIONS(429),
    [sym_identifier] = ACTIONS(429),
  },
  [56] = {
    [anon_sym_for] = ACTIONS(429),
    [anon_sym_case] = ACTIONS(429),
    [anon_sym_while] = ACTIONS(429),
    [anon_sym_let] = ACTIONS(429),
    [anon_sym_var] = ACTIONS(429),
    [anon_sym_repeat] = ACTIONS(429),
    [anon_sym_if] = ACTIONS(429),
    [anon_sym_guard] = ACTIONS(429),
    [anon_sym_switch] = ACTIONS(429),
    [anon_sym_RBRACE] = ACTIONS(427),
    [anon_sym_default] = ACTIONS(429),
    [anon_sym_break] = ACTIONS(429),
    [anon_sym_continue] = ACTIONS(429),
    [sym_fallthrough_statement] = ACTIONS(429),
    [anon_sym_return] = ACTIONS(429),
    [anon_sym_throw] = ACTIONS(429),
    [anon_sym_defer] = ACTIONS(429),
    [anon_sym_do] = ACTIONS(429),
    [anon_sym_POUNDif] = ACTIONS(427),
    [anon_sym_POUNDline] = ACTIONS(427),
    [anon_sym_import] = ACTIONS(429),
    [anon_sym_typealias] = ACTIONS(429),
    [anon_sym_struct] = ACTIONS(429),
    [anon_sym_class] = ACTIONS(429),
    [anon_sym_enum] = ACTIONS(429),
    [anon_sym_protocol] = ACTIONS(429),
    [anon_sym_func] = ACTIONS(429),
    [anon_sym_indirect] = ACTIONS(429),
    [anon_sym_init] = ACTIONS(429),
    [anon_sym_deinit] = ACTIONS(429),
    [anon_sym_extension] = ACTIONS(429),
    [anon_sym_subscript] = ACTIONS(429),
    [anon_sym_prefix] = ACTIONS(429),
    [anon_sym_postfix] = ACTIONS(429),
    [anon_sym_infix] = ACTIONS(429),
    [sym_identifier] = ACTIONS(429),
  },
  [57] = {
    [sym_tuple_pattern] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(431),
    [anon_sym_case] = ACTIONS(433),
    [anon_sym_COMMA] = ACTIONS(433),
    [anon_sym_EQ] = ACTIONS(433),
    [anon_sym_let] = ACTIONS(433),
    [anon_sym_var] = ACTIONS(433),
    [anon_sym_RBRACE] = ACTIONS(433),
    [anon_sym_COLON] = ACTIONS(433),
    [anon_sym_import] = ACTIONS(433),
    [anon_sym_typealias] = ACTIONS(433),
    [anon_sym_struct] = ACTIONS(433),
    [anon_sym_class] = ACTIONS(433),
    [anon_sym_enum] = ACTIONS(433),
    [anon_sym_protocol] = ACTIONS(433),
    [anon_sym_func] = ACTIONS(433),
    [anon_sym_indirect] = ACTIONS(433),
    [anon_sym_init] = ACTIONS(433),
    [anon_sym_QMARK] = ACTIONS(433),
    [anon_sym_deinit] = ACTIONS(433),
    [anon_sym_extension] = ACTIONS(433),
    [anon_sym_subscript] = ACTIONS(433),
    [anon_sym_prefix] = ACTIONS(433),
    [anon_sym_postfix] = ACTIONS(433),
    [anon_sym_infix] = ACTIONS(433),
    [anon_sym_as] = ACTIONS(433),
  },
  [58] = {
    [anon_sym_case] = ACTIONS(435),
    [anon_sym_COMMA] = ACTIONS(435),
    [anon_sym_EQ] = ACTIONS(435),
    [anon_sym_let] = ACTIONS(435),
    [anon_sym_var] = ACTIONS(435),
    [anon_sym_LBRACE] = ACTIONS(435),
    [anon_sym_RBRACE] = ACTIONS(435),
    [anon_sym_COLON] = ACTIONS(435),
    [anon_sym_import] = ACTIONS(435),
    [anon_sym_typealias] = ACTIONS(435),
    [anon_sym_struct] = ACTIONS(435),
    [anon_sym_class] = ACTIONS(435),
    [anon_sym_enum] = ACTIONS(435),
    [anon_sym_protocol] = ACTIONS(435),
    [anon_sym_func] = ACTIONS(435),
    [anon_sym_DOT] = ACTIONS(437),
    [anon_sym_indirect] = ACTIONS(435),
    [anon_sym_init] = ACTIONS(435),
    [anon_sym_QMARK] = ACTIONS(435),
    [anon_sym_deinit] = ACTIONS(435),
    [anon_sym_extension] = ACTIONS(435),
    [anon_sym_subscript] = ACTIONS(435),
    [anon_sym_prefix] = ACTIONS(435),
    [anon_sym_postfix] = ACTIONS(435),
    [anon_sym_infix] = ACTIONS(435),
    [anon_sym_as] = ACTIONS(435),
  },
  [59] = {
    [sym__parameter_clause] = STATE(59),
    [aux_sym__function_signature_repeat1] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(439),
    [anon_sym_case] = ACTIONS(442),
    [anon_sym_let] = ACTIONS(442),
    [anon_sym_var] = ACTIONS(442),
    [anon_sym_LBRACE] = ACTIONS(442),
    [anon_sym_RBRACE] = ACTIONS(442),
    [anon_sym_import] = ACTIONS(442),
    [anon_sym_typealias] = ACTIONS(442),
    [anon_sym_struct] = ACTIONS(442),
    [anon_sym_class] = ACTIONS(442),
    [anon_sym_enum] = ACTIONS(442),
    [anon_sym_protocol] = ACTIONS(442),
    [anon_sym_func] = ACTIONS(442),
    [anon_sym_throws] = ACTIONS(442),
    [anon_sym_rethrows] = ACTIONS(442),
    [anon_sym_DASH_GT] = ACTIONS(442),
    [anon_sym_indirect] = ACTIONS(442),
    [anon_sym_init] = ACTIONS(442),
    [anon_sym_deinit] = ACTIONS(442),
    [anon_sym_extension] = ACTIONS(442),
    [anon_sym_subscript] = ACTIONS(442),
    [anon_sym_prefix] = ACTIONS(442),
    [anon_sym_postfix] = ACTIONS(442),
    [anon_sym_infix] = ACTIONS(442),
  },
  [60] = {
    [sym__for_init] = STATE(645),
    [sym__for_condition] = STATE(644),
    [sym_variable_declaration] = STATE(645),
    [sym__variable_declaration_head] = STATE(121),
    [sym__pattern] = STATE(289),
    [sym_wildcard_pattern] = STATE(289),
    [sym_value_binding_pattern] = STATE(289),
    [sym_tuple_pattern] = STATE(289),
    [sym__tuple_pattern_element_list] = STATE(592),
    [sym_enum_case_pattern] = STATE(289),
    [sym_optional_pattern] = STATE(289),
    [sym_is_pattern] = STATE(289),
    [sym_as_pattern] = STATE(289),
    [sym__expression] = STATE(255),
    [sym__expression_list] = STATE(645),
    [sym__type_identifier] = STATE(675),
    [sym__type_name] = STATE(675),
    [anon_sym_SEMI] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(446),
    [anon_sym_RPAREN] = ACTIONS(448),
    [anon_sym_let] = ACTIONS(450),
    [anon_sym_var] = ACTIONS(452),
    [anon_sym_DOT] = ACTIONS(454),
    [anon_sym__] = ACTIONS(456),
    [anon_sym_is] = ACTIONS(458),
    [sym_identifier] = ACTIONS(460),
  },
  [61] = {
    [sym_tuple_pattern] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(431),
    [anon_sym_case] = ACTIONS(462),
    [anon_sym_COMMA] = ACTIONS(462),
    [anon_sym_EQ] = ACTIONS(462),
    [anon_sym_let] = ACTIONS(462),
    [anon_sym_var] = ACTIONS(462),
    [anon_sym_RBRACE] = ACTIONS(462),
    [anon_sym_COLON] = ACTIONS(462),
    [anon_sym_import] = ACTIONS(462),
    [anon_sym_typealias] = ACTIONS(462),
    [anon_sym_struct] = ACTIONS(462),
    [anon_sym_class] = ACTIONS(462),
    [anon_sym_enum] = ACTIONS(462),
    [anon_sym_protocol] = ACTIONS(462),
    [anon_sym_func] = ACTIONS(462),
    [anon_sym_indirect] = ACTIONS(462),
    [anon_sym_init] = ACTIONS(462),
    [anon_sym_QMARK] = ACTIONS(462),
    [anon_sym_deinit] = ACTIONS(462),
    [anon_sym_extension] = ACTIONS(462),
    [anon_sym_subscript] = ACTIONS(462),
    [anon_sym_prefix] = ACTIONS(462),
    [anon_sym_postfix] = ACTIONS(462),
    [anon_sym_infix] = ACTIONS(462),
    [anon_sym_as] = ACTIONS(462),
  },
  [62] = {
    [sym__parameter_clause] = STATE(59),
    [aux_sym__function_signature_repeat1] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(464),
    [anon_sym_case] = ACTIONS(466),
    [anon_sym_let] = ACTIONS(466),
    [anon_sym_var] = ACTIONS(466),
    [anon_sym_LBRACE] = ACTIONS(466),
    [anon_sym_RBRACE] = ACTIONS(466),
    [anon_sym_import] = ACTIONS(466),
    [anon_sym_typealias] = ACTIONS(466),
    [anon_sym_struct] = ACTIONS(466),
    [anon_sym_class] = ACTIONS(466),
    [anon_sym_enum] = ACTIONS(466),
    [anon_sym_protocol] = ACTIONS(466),
    [anon_sym_func] = ACTIONS(466),
    [anon_sym_throws] = ACTIONS(468),
    [anon_sym_rethrows] = ACTIONS(468),
    [anon_sym_DASH_GT] = ACTIONS(470),
    [anon_sym_indirect] = ACTIONS(466),
    [anon_sym_init] = ACTIONS(466),
    [anon_sym_deinit] = ACTIONS(466),
    [anon_sym_extension] = ACTIONS(466),
    [anon_sym_subscript] = ACTIONS(466),
    [anon_sym_prefix] = ACTIONS(466),
    [anon_sym_postfix] = ACTIONS(466),
    [anon_sym_infix] = ACTIONS(466),
  },
  [63] = {
    [anon_sym_SEMI] = ACTIONS(472),
    [anon_sym_case] = ACTIONS(472),
    [anon_sym_COMMA] = ACTIONS(472),
    [anon_sym_EQ] = ACTIONS(472),
    [anon_sym_let] = ACTIONS(472),
    [anon_sym_var] = ACTIONS(472),
    [anon_sym_RBRACE] = ACTIONS(472),
    [anon_sym_COLON] = ACTIONS(474),
    [anon_sym_import] = ACTIONS(472),
    [anon_sym_typealias] = ACTIONS(472),
    [anon_sym_struct] = ACTIONS(472),
    [anon_sym_class] = ACTIONS(472),
    [anon_sym_enum] = ACTIONS(472),
    [anon_sym_protocol] = ACTIONS(472),
    [anon_sym_func] = ACTIONS(472),
    [anon_sym_DOT] = ACTIONS(477),
    [anon_sym_indirect] = ACTIONS(472),
    [anon_sym_init] = ACTIONS(472),
    [anon_sym_QMARK] = ACTIONS(472),
    [anon_sym_deinit] = ACTIONS(472),
    [anon_sym_extension] = ACTIONS(472),
    [anon_sym_subscript] = ACTIONS(472),
    [anon_sym_prefix] = ACTIONS(472),
    [anon_sym_postfix] = ACTIONS(472),
    [anon_sym_infix] = ACTIONS(472),
    [anon_sym_as] = ACTIONS(472),
  },
  [64] = {
    [sym__for_init] = STATE(645),
    [sym__for_condition] = STATE(512),
    [sym_variable_declaration] = STATE(645),
    [sym__variable_declaration_head] = STATE(121),
    [sym__pattern] = STATE(293),
    [sym_wildcard_pattern] = STATE(293),
    [sym_value_binding_pattern] = STATE(293),
    [sym_tuple_pattern] = STATE(293),
    [sym_enum_case_pattern] = STATE(293),
    [sym_optional_pattern] = STATE(293),
    [sym_is_pattern] = STATE(293),
    [sym_as_pattern] = STATE(293),
    [sym__expression] = STATE(236),
    [sym__expression_list] = STATE(645),
    [sym__type_identifier] = STATE(675),
    [sym__type_name] = STATE(675),
    [anon_sym_SEMI] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(479),
    [anon_sym_case] = ACTIONS(481),
    [anon_sym_let] = ACTIONS(450),
    [anon_sym_var] = ACTIONS(452),
    [anon_sym_DOT] = ACTIONS(454),
    [anon_sym__] = ACTIONS(456),
    [anon_sym_is] = ACTIONS(458),
    [sym_identifier] = ACTIONS(460),
  },
  [65] = {
    [anon_sym_case] = ACTIONS(472),
    [anon_sym_COMMA] = ACTIONS(472),
    [anon_sym_EQ] = ACTIONS(472),
    [anon_sym_let] = ACTIONS(472),
    [anon_sym_var] = ACTIONS(472),
    [anon_sym_RBRACE] = ACTIONS(472),
    [anon_sym_COLON] = ACTIONS(472),
    [anon_sym_import] = ACTIONS(472),
    [anon_sym_typealias] = ACTIONS(472),
    [anon_sym_struct] = ACTIONS(472),
    [anon_sym_class] = ACTIONS(472),
    [anon_sym_enum] = ACTIONS(472),
    [anon_sym_protocol] = ACTIONS(472),
    [anon_sym_func] = ACTIONS(472),
    [anon_sym_DOT] = ACTIONS(477),
    [anon_sym_indirect] = ACTIONS(472),
    [anon_sym_init] = ACTIONS(472),
    [anon_sym_QMARK] = ACTIONS(472),
    [anon_sym_deinit] = ACTIONS(472),
    [anon_sym_extension] = ACTIONS(472),
    [anon_sym_subscript] = ACTIONS(472),
    [anon_sym_prefix] = ACTIONS(472),
    [anon_sym_postfix] = ACTIONS(472),
    [anon_sym_infix] = ACTIONS(472),
    [anon_sym_as] = ACTIONS(472),
  },
  [66] = {
    [sym__type_annotation] = STATE(93),
    [anon_sym_case] = ACTIONS(483),
    [anon_sym_COMMA] = ACTIONS(483),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_let] = ACTIONS(483),
    [anon_sym_var] = ACTIONS(483),
    [anon_sym_RBRACE] = ACTIONS(483),
    [anon_sym_COLON] = ACTIONS(487),
    [anon_sym_import] = ACTIONS(483),
    [anon_sym_typealias] = ACTIONS(483),
    [anon_sym_struct] = ACTIONS(483),
    [anon_sym_class] = ACTIONS(483),
    [anon_sym_enum] = ACTIONS(483),
    [anon_sym_protocol] = ACTIONS(483),
    [anon_sym_func] = ACTIONS(483),
    [anon_sym_indirect] = ACTIONS(483),
    [anon_sym_init] = ACTIONS(483),
    [anon_sym_QMARK] = ACTIONS(489),
    [anon_sym_deinit] = ACTIONS(483),
    [anon_sym_extension] = ACTIONS(483),
    [anon_sym_subscript] = ACTIONS(483),
    [anon_sym_prefix] = ACTIONS(483),
    [anon_sym_postfix] = ACTIONS(483),
    [anon_sym_infix] = ACTIONS(483),
    [anon_sym_as] = ACTIONS(491),
  },
  [67] = {
    [anon_sym_case] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(493),
    [anon_sym_EQ] = ACTIONS(493),
    [anon_sym_let] = ACTIONS(493),
    [anon_sym_var] = ACTIONS(493),
    [anon_sym_LBRACE] = ACTIONS(493),
    [anon_sym_RBRACE] = ACTIONS(493),
    [anon_sym_COLON] = ACTIONS(493),
    [anon_sym_import] = ACTIONS(493),
    [anon_sym_typealias] = ACTIONS(493),
    [anon_sym_struct] = ACTIONS(493),
    [anon_sym_class] = ACTIONS(493),
    [anon_sym_enum] = ACTIONS(493),
    [anon_sym_protocol] = ACTIONS(493),
    [anon_sym_func] = ACTIONS(493),
    [anon_sym_indirect] = ACTIONS(493),
    [anon_sym_init] = ACTIONS(493),
    [anon_sym_QMARK] = ACTIONS(493),
    [anon_sym_deinit] = ACTIONS(493),
    [anon_sym_extension] = ACTIONS(493),
    [anon_sym_subscript] = ACTIONS(493),
    [anon_sym_prefix] = ACTIONS(493),
    [anon_sym_postfix] = ACTIONS(493),
    [anon_sym_infix] = ACTIONS(493),
    [anon_sym_as] = ACTIONS(493),
  },
  [68] = {
    [anon_sym_case] = ACTIONS(495),
    [anon_sym_COMMA] = ACTIONS(495),
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_let] = ACTIONS(495),
    [anon_sym_var] = ACTIONS(495),
    [anon_sym_LBRACE] = ACTIONS(495),
    [anon_sym_RBRACE] = ACTIONS(495),
    [anon_sym_COLON] = ACTIONS(495),
    [anon_sym_import] = ACTIONS(495),
    [anon_sym_typealias] = ACTIONS(495),
    [anon_sym_struct] = ACTIONS(495),
    [anon_sym_class] = ACTIONS(495),
    [anon_sym_enum] = ACTIONS(495),
    [anon_sym_protocol] = ACTIONS(495),
    [anon_sym_func] = ACTIONS(495),
    [anon_sym_indirect] = ACTIONS(495),
    [anon_sym_init] = ACTIONS(495),
    [anon_sym_QMARK] = ACTIONS(495),
    [anon_sym_deinit] = ACTIONS(495),
    [anon_sym_extension] = ACTIONS(495),
    [anon_sym_subscript] = ACTIONS(495),
    [anon_sym_prefix] = ACTIONS(495),
    [anon_sym_postfix] = ACTIONS(495),
    [anon_sym_infix] = ACTIONS(495),
    [anon_sym_as] = ACTIONS(495),
  },
  [69] = {
    [anon_sym_case] = ACTIONS(497),
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_EQ] = ACTIONS(497),
    [anon_sym_let] = ACTIONS(497),
    [anon_sym_var] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_RBRACE] = ACTIONS(497),
    [anon_sym_COLON] = ACTIONS(497),
    [anon_sym_import] = ACTIONS(497),
    [anon_sym_typealias] = ACTIONS(497),
    [anon_sym_struct] = ACTIONS(497),
    [anon_sym_class] = ACTIONS(497),
    [anon_sym_enum] = ACTIONS(497),
    [anon_sym_protocol] = ACTIONS(497),
    [anon_sym_func] = ACTIONS(497),
    [anon_sym_indirect] = ACTIONS(497),
    [anon_sym_init] = ACTIONS(497),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_deinit] = ACTIONS(497),
    [anon_sym_extension] = ACTIONS(497),
    [anon_sym_subscript] = ACTIONS(497),
    [anon_sym_prefix] = ACTIONS(497),
    [anon_sym_postfix] = ACTIONS(497),
    [anon_sym_infix] = ACTIONS(497),
    [anon_sym_as] = ACTIONS(497),
  },
  [70] = {
    [anon_sym_case] = ACTIONS(499),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_EQ] = ACTIONS(499),
    [anon_sym_let] = ACTIONS(499),
    [anon_sym_var] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(499),
    [anon_sym_RBRACE] = ACTIONS(499),
    [anon_sym_COLON] = ACTIONS(499),
    [anon_sym_import] = ACTIONS(499),
    [anon_sym_typealias] = ACTIONS(499),
    [anon_sym_struct] = ACTIONS(499),
    [anon_sym_class] = ACTIONS(499),
    [anon_sym_enum] = ACTIONS(499),
    [anon_sym_protocol] = ACTIONS(499),
    [anon_sym_func] = ACTIONS(499),
    [anon_sym_indirect] = ACTIONS(499),
    [anon_sym_init] = ACTIONS(499),
    [anon_sym_QMARK] = ACTIONS(499),
    [anon_sym_deinit] = ACTIONS(499),
    [anon_sym_extension] = ACTIONS(499),
    [anon_sym_subscript] = ACTIONS(499),
    [anon_sym_prefix] = ACTIONS(499),
    [anon_sym_postfix] = ACTIONS(499),
    [anon_sym_infix] = ACTIONS(499),
    [anon_sym_as] = ACTIONS(499),
  },
  [71] = {
    [anon_sym_case] = ACTIONS(501),
    [anon_sym_COMMA] = ACTIONS(501),
    [anon_sym_EQ] = ACTIONS(501),
    [anon_sym_let] = ACTIONS(501),
    [anon_sym_var] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_RBRACE] = ACTIONS(501),
    [anon_sym_COLON] = ACTIONS(501),
    [anon_sym_import] = ACTIONS(501),
    [anon_sym_typealias] = ACTIONS(501),
    [anon_sym_struct] = ACTIONS(501),
    [anon_sym_class] = ACTIONS(501),
    [anon_sym_enum] = ACTIONS(501),
    [anon_sym_protocol] = ACTIONS(501),
    [anon_sym_func] = ACTIONS(501),
    [anon_sym_indirect] = ACTIONS(501),
    [anon_sym_init] = ACTIONS(501),
    [anon_sym_QMARK] = ACTIONS(501),
    [anon_sym_deinit] = ACTIONS(501),
    [anon_sym_extension] = ACTIONS(501),
    [anon_sym_subscript] = ACTIONS(501),
    [anon_sym_prefix] = ACTIONS(501),
    [anon_sym_postfix] = ACTIONS(501),
    [anon_sym_infix] = ACTIONS(501),
    [anon_sym_as] = ACTIONS(501),
  },
  [72] = {
    [anon_sym_case] = ACTIONS(503),
    [anon_sym_COMMA] = ACTIONS(503),
    [anon_sym_EQ] = ACTIONS(503),
    [anon_sym_let] = ACTIONS(503),
    [anon_sym_var] = ACTIONS(503),
    [anon_sym_LBRACE] = ACTIONS(503),
    [anon_sym_RBRACE] = ACTIONS(503),
    [anon_sym_COLON] = ACTIONS(503),
    [anon_sym_import] = ACTIONS(503),
    [anon_sym_typealias] = ACTIONS(503),
    [anon_sym_struct] = ACTIONS(503),
    [anon_sym_class] = ACTIONS(503),
    [anon_sym_enum] = ACTIONS(503),
    [anon_sym_protocol] = ACTIONS(503),
    [anon_sym_func] = ACTIONS(503),
    [anon_sym_indirect] = ACTIONS(503),
    [anon_sym_init] = ACTIONS(503),
    [anon_sym_QMARK] = ACTIONS(503),
    [anon_sym_deinit] = ACTIONS(503),
    [anon_sym_extension] = ACTIONS(503),
    [anon_sym_subscript] = ACTIONS(503),
    [anon_sym_prefix] = ACTIONS(503),
    [anon_sym_postfix] = ACTIONS(503),
    [anon_sym_infix] = ACTIONS(503),
    [anon_sym_as] = ACTIONS(503),
  },
  [73] = {
    [anon_sym_case] = ACTIONS(505),
    [anon_sym_COMMA] = ACTIONS(505),
    [anon_sym_EQ] = ACTIONS(505),
    [anon_sym_let] = ACTIONS(505),
    [anon_sym_var] = ACTIONS(505),
    [anon_sym_LBRACE] = ACTIONS(505),
    [anon_sym_RBRACE] = ACTIONS(505),
    [anon_sym_COLON] = ACTIONS(505),
    [anon_sym_import] = ACTIONS(505),
    [anon_sym_typealias] = ACTIONS(505),
    [anon_sym_struct] = ACTIONS(505),
    [anon_sym_class] = ACTIONS(505),
    [anon_sym_enum] = ACTIONS(505),
    [anon_sym_protocol] = ACTIONS(505),
    [anon_sym_func] = ACTIONS(505),
    [anon_sym_indirect] = ACTIONS(505),
    [anon_sym_init] = ACTIONS(505),
    [anon_sym_QMARK] = ACTIONS(505),
    [anon_sym_deinit] = ACTIONS(505),
    [anon_sym_extension] = ACTIONS(505),
    [anon_sym_subscript] = ACTIONS(505),
    [anon_sym_prefix] = ACTIONS(505),
    [anon_sym_postfix] = ACTIONS(505),
    [anon_sym_infix] = ACTIONS(505),
    [anon_sym_as] = ACTIONS(505),
  },
  [74] = {
    [anon_sym_case] = ACTIONS(507),
    [anon_sym_COMMA] = ACTIONS(507),
    [anon_sym_EQ] = ACTIONS(507),
    [anon_sym_let] = ACTIONS(507),
    [anon_sym_var] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(507),
    [anon_sym_RBRACE] = ACTIONS(507),
    [anon_sym_COLON] = ACTIONS(507),
    [anon_sym_import] = ACTIONS(507),
    [anon_sym_typealias] = ACTIONS(507),
    [anon_sym_struct] = ACTIONS(507),
    [anon_sym_class] = ACTIONS(507),
    [anon_sym_enum] = ACTIONS(507),
    [anon_sym_protocol] = ACTIONS(507),
    [anon_sym_func] = ACTIONS(507),
    [anon_sym_indirect] = ACTIONS(507),
    [anon_sym_init] = ACTIONS(507),
    [anon_sym_QMARK] = ACTIONS(507),
    [anon_sym_deinit] = ACTIONS(507),
    [anon_sym_extension] = ACTIONS(507),
    [anon_sym_subscript] = ACTIONS(507),
    [anon_sym_prefix] = ACTIONS(507),
    [anon_sym_postfix] = ACTIONS(507),
    [anon_sym_infix] = ACTIONS(507),
    [anon_sym_as] = ACTIONS(507),
  },
  [75] = {
    [anon_sym_case] = ACTIONS(433),
    [anon_sym_COMMA] = ACTIONS(433),
    [anon_sym_EQ] = ACTIONS(433),
    [anon_sym_let] = ACTIONS(433),
    [anon_sym_var] = ACTIONS(433),
    [anon_sym_RBRACE] = ACTIONS(433),
    [anon_sym_COLON] = ACTIONS(433),
    [anon_sym_import] = ACTIONS(433),
    [anon_sym_typealias] = ACTIONS(433),
    [anon_sym_struct] = ACTIONS(433),
    [anon_sym_class] = ACTIONS(433),
    [anon_sym_enum] = ACTIONS(433),
    [anon_sym_protocol] = ACTIONS(433),
    [anon_sym_func] = ACTIONS(433),
    [anon_sym_indirect] = ACTIONS(433),
    [anon_sym_init] = ACTIONS(433),
    [anon_sym_QMARK] = ACTIONS(433),
    [anon_sym_deinit] = ACTIONS(433),
    [anon_sym_extension] = ACTIONS(433),
    [anon_sym_subscript] = ACTIONS(433),
    [anon_sym_prefix] = ACTIONS(433),
    [anon_sym_postfix] = ACTIONS(433),
    [anon_sym_infix] = ACTIONS(433),
    [anon_sym_as] = ACTIONS(433),
  },
  [76] = {
    [anon_sym_LPAREN] = ACTIONS(509),
    [anon_sym_case] = ACTIONS(509),
    [anon_sym_let] = ACTIONS(509),
    [anon_sym_var] = ACTIONS(509),
    [anon_sym_LBRACE] = ACTIONS(509),
    [anon_sym_RBRACE] = ACTIONS(509),
    [anon_sym_import] = ACTIONS(509),
    [anon_sym_typealias] = ACTIONS(509),
    [anon_sym_struct] = ACTIONS(509),
    [anon_sym_class] = ACTIONS(509),
    [anon_sym_enum] = ACTIONS(509),
    [anon_sym_protocol] = ACTIONS(509),
    [anon_sym_func] = ACTIONS(509),
    [anon_sym_throws] = ACTIONS(509),
    [anon_sym_rethrows] = ACTIONS(509),
    [anon_sym_DASH_GT] = ACTIONS(509),
    [anon_sym_indirect] = ACTIONS(509),
    [anon_sym_init] = ACTIONS(509),
    [anon_sym_deinit] = ACTIONS(509),
    [anon_sym_extension] = ACTIONS(509),
    [anon_sym_subscript] = ACTIONS(509),
    [anon_sym_prefix] = ACTIONS(509),
    [anon_sym_postfix] = ACTIONS(509),
    [anon_sym_infix] = ACTIONS(509),
  },
  [77] = {
    [anon_sym_LPAREN] = ACTIONS(511),
    [anon_sym_case] = ACTIONS(511),
    [anon_sym_let] = ACTIONS(511),
    [anon_sym_var] = ACTIONS(511),
    [anon_sym_LBRACE] = ACTIONS(511),
    [anon_sym_RBRACE] = ACTIONS(511),
    [anon_sym_import] = ACTIONS(511),
    [anon_sym_typealias] = ACTIONS(511),
    [anon_sym_struct] = ACTIONS(511),
    [anon_sym_class] = ACTIONS(511),
    [anon_sym_enum] = ACTIONS(511),
    [anon_sym_protocol] = ACTIONS(511),
    [anon_sym_func] = ACTIONS(511),
    [anon_sym_throws] = ACTIONS(511),
    [anon_sym_rethrows] = ACTIONS(511),
    [anon_sym_DASH_GT] = ACTIONS(511),
    [anon_sym_indirect] = ACTIONS(511),
    [anon_sym_init] = ACTIONS(511),
    [anon_sym_deinit] = ACTIONS(511),
    [anon_sym_extension] = ACTIONS(511),
    [anon_sym_subscript] = ACTIONS(511),
    [anon_sym_prefix] = ACTIONS(511),
    [anon_sym_postfix] = ACTIONS(511),
    [anon_sym_infix] = ACTIONS(511),
  },
  [78] = {
    [anon_sym_LPAREN] = ACTIONS(513),
    [anon_sym_case] = ACTIONS(513),
    [anon_sym_let] = ACTIONS(513),
    [anon_sym_var] = ACTIONS(513),
    [anon_sym_LBRACE] = ACTIONS(513),
    [anon_sym_RBRACE] = ACTIONS(513),
    [anon_sym_import] = ACTIONS(513),
    [anon_sym_typealias] = ACTIONS(513),
    [anon_sym_struct] = ACTIONS(513),
    [anon_sym_class] = ACTIONS(513),
    [anon_sym_enum] = ACTIONS(513),
    [anon_sym_protocol] = ACTIONS(513),
    [anon_sym_func] = ACTIONS(513),
    [anon_sym_throws] = ACTIONS(513),
    [anon_sym_rethrows] = ACTIONS(513),
    [anon_sym_DASH_GT] = ACTIONS(513),
    [anon_sym_indirect] = ACTIONS(513),
    [anon_sym_init] = ACTIONS(513),
    [anon_sym_deinit] = ACTIONS(513),
    [anon_sym_extension] = ACTIONS(513),
    [anon_sym_subscript] = ACTIONS(513),
    [anon_sym_prefix] = ACTIONS(513),
    [anon_sym_postfix] = ACTIONS(513),
    [anon_sym_infix] = ACTIONS(513),
  },
  [79] = {
    [anon_sym_LPAREN] = ACTIONS(515),
    [anon_sym_case] = ACTIONS(515),
    [anon_sym_let] = ACTIONS(515),
    [anon_sym_var] = ACTIONS(515),
    [anon_sym_LBRACE] = ACTIONS(515),
    [anon_sym_RBRACE] = ACTIONS(515),
    [anon_sym_import] = ACTIONS(515),
    [anon_sym_typealias] = ACTIONS(515),
    [anon_sym_struct] = ACTIONS(515),
    [anon_sym_class] = ACTIONS(515),
    [anon_sym_enum] = ACTIONS(515),
    [anon_sym_protocol] = ACTIONS(515),
    [anon_sym_func] = ACTIONS(515),
    [anon_sym_throws] = ACTIONS(515),
    [anon_sym_rethrows] = ACTIONS(515),
    [anon_sym_DASH_GT] = ACTIONS(515),
    [anon_sym_indirect] = ACTIONS(515),
    [anon_sym_init] = ACTIONS(515),
    [anon_sym_deinit] = ACTIONS(515),
    [anon_sym_extension] = ACTIONS(515),
    [anon_sym_subscript] = ACTIONS(515),
    [anon_sym_prefix] = ACTIONS(515),
    [anon_sym_postfix] = ACTIONS(515),
    [anon_sym_infix] = ACTIONS(515),
  },
  [80] = {
    [anon_sym_case] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(517),
    [anon_sym_EQ] = ACTIONS(517),
    [anon_sym_let] = ACTIONS(517),
    [anon_sym_var] = ACTIONS(517),
    [anon_sym_RBRACE] = ACTIONS(517),
    [anon_sym_COLON] = ACTIONS(517),
    [anon_sym_import] = ACTIONS(517),
    [anon_sym_typealias] = ACTIONS(517),
    [anon_sym_struct] = ACTIONS(517),
    [anon_sym_class] = ACTIONS(517),
    [anon_sym_enum] = ACTIONS(517),
    [anon_sym_protocol] = ACTIONS(517),
    [anon_sym_func] = ACTIONS(517),
    [anon_sym_indirect] = ACTIONS(517),
    [anon_sym_init] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
    [anon_sym_deinit] = ACTIONS(517),
    [anon_sym_extension] = ACTIONS(517),
    [anon_sym_subscript] = ACTIONS(517),
    [anon_sym_prefix] = ACTIONS(517),
    [anon_sym_postfix] = ACTIONS(517),
    [anon_sym_infix] = ACTIONS(517),
    [anon_sym_as] = ACTIONS(517),
  },
  [81] = {
    [anon_sym_case] = ACTIONS(519),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_EQ] = ACTIONS(519),
    [anon_sym_let] = ACTIONS(519),
    [anon_sym_var] = ACTIONS(519),
    [anon_sym_RBRACE] = ACTIONS(519),
    [anon_sym_COLON] = ACTIONS(519),
    [anon_sym_import] = ACTIONS(519),
    [anon_sym_typealias] = ACTIONS(519),
    [anon_sym_struct] = ACTIONS(519),
    [anon_sym_class] = ACTIONS(519),
    [anon_sym_enum] = ACTIONS(519),
    [anon_sym_protocol] = ACTIONS(519),
    [anon_sym_func] = ACTIONS(519),
    [anon_sym_indirect] = ACTIONS(519),
    [anon_sym_init] = ACTIONS(519),
    [anon_sym_QMARK] = ACTIONS(519),
    [anon_sym_deinit] = ACTIONS(519),
    [anon_sym_extension] = ACTIONS(519),
    [anon_sym_subscript] = ACTIONS(519),
    [anon_sym_prefix] = ACTIONS(519),
    [anon_sym_postfix] = ACTIONS(519),
    [anon_sym_infix] = ACTIONS(519),
    [anon_sym_as] = ACTIONS(519),
  },
  [82] = {
    [anon_sym_case] = ACTIONS(521),
    [anon_sym_COMMA] = ACTIONS(521),
    [anon_sym_EQ] = ACTIONS(521),
    [anon_sym_let] = ACTIONS(521),
    [anon_sym_var] = ACTIONS(521),
    [anon_sym_RBRACE] = ACTIONS(521),
    [anon_sym_COLON] = ACTIONS(521),
    [anon_sym_import] = ACTIONS(521),
    [anon_sym_typealias] = ACTIONS(521),
    [anon_sym_struct] = ACTIONS(521),
    [anon_sym_class] = ACTIONS(521),
    [anon_sym_enum] = ACTIONS(521),
    [anon_sym_protocol] = ACTIONS(521),
    [anon_sym_func] = ACTIONS(521),
    [anon_sym_indirect] = ACTIONS(521),
    [anon_sym_init] = ACTIONS(521),
    [anon_sym_QMARK] = ACTIONS(489),
    [anon_sym_deinit] = ACTIONS(521),
    [anon_sym_extension] = ACTIONS(521),
    [anon_sym_subscript] = ACTIONS(521),
    [anon_sym_prefix] = ACTIONS(521),
    [anon_sym_postfix] = ACTIONS(521),
    [anon_sym_infix] = ACTIONS(521),
    [anon_sym_as] = ACTIONS(491),
  },
  [83] = {
    [anon_sym_LPAREN] = ACTIONS(523),
    [anon_sym_case] = ACTIONS(523),
    [anon_sym_let] = ACTIONS(523),
    [anon_sym_var] = ACTIONS(523),
    [anon_sym_LBRACE] = ACTIONS(523),
    [anon_sym_RBRACE] = ACTIONS(523),
    [anon_sym_import] = ACTIONS(523),
    [anon_sym_typealias] = ACTIONS(523),
    [anon_sym_struct] = ACTIONS(523),
    [anon_sym_class] = ACTIONS(523),
    [anon_sym_enum] = ACTIONS(523),
    [anon_sym_protocol] = ACTIONS(523),
    [anon_sym_func] = ACTIONS(523),
    [anon_sym_throws] = ACTIONS(523),
    [anon_sym_rethrows] = ACTIONS(523),
    [anon_sym_DASH_GT] = ACTIONS(523),
    [anon_sym_indirect] = ACTIONS(523),
    [anon_sym_init] = ACTIONS(523),
    [anon_sym_deinit] = ACTIONS(523),
    [anon_sym_extension] = ACTIONS(523),
    [anon_sym_subscript] = ACTIONS(523),
    [anon_sym_prefix] = ACTIONS(523),
    [anon_sym_postfix] = ACTIONS(523),
    [anon_sym_infix] = ACTIONS(523),
  },
  [84] = {
    [anon_sym_case] = ACTIONS(525),
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_EQ] = ACTIONS(525),
    [anon_sym_let] = ACTIONS(525),
    [anon_sym_var] = ACTIONS(525),
    [anon_sym_RBRACE] = ACTIONS(525),
    [anon_sym_COLON] = ACTIONS(525),
    [anon_sym_import] = ACTIONS(525),
    [anon_sym_typealias] = ACTIONS(525),
    [anon_sym_struct] = ACTIONS(525),
    [anon_sym_class] = ACTIONS(525),
    [anon_sym_enum] = ACTIONS(525),
    [anon_sym_protocol] = ACTIONS(525),
    [anon_sym_func] = ACTIONS(525),
    [anon_sym_indirect] = ACTIONS(525),
    [anon_sym_init] = ACTIONS(525),
    [anon_sym_QMARK] = ACTIONS(525),
    [anon_sym_deinit] = ACTIONS(525),
    [anon_sym_extension] = ACTIONS(525),
    [anon_sym_subscript] = ACTIONS(525),
    [anon_sym_prefix] = ACTIONS(525),
    [anon_sym_postfix] = ACTIONS(525),
    [anon_sym_infix] = ACTIONS(525),
    [anon_sym_as] = ACTIONS(525),
  },
  [85] = {
    [anon_sym_case] = ACTIONS(527),
    [anon_sym_COMMA] = ACTIONS(527),
    [anon_sym_EQ] = ACTIONS(527),
    [anon_sym_let] = ACTIONS(527),
    [anon_sym_var] = ACTIONS(527),
    [anon_sym_RBRACE] = ACTIONS(527),
    [anon_sym_COLON] = ACTIONS(527),
    [anon_sym_import] = ACTIONS(527),
    [anon_sym_typealias] = ACTIONS(527),
    [anon_sym_struct] = ACTIONS(527),
    [anon_sym_class] = ACTIONS(527),
    [anon_sym_enum] = ACTIONS(527),
    [anon_sym_protocol] = ACTIONS(527),
    [anon_sym_func] = ACTIONS(527),
    [anon_sym_indirect] = ACTIONS(527),
    [anon_sym_init] = ACTIONS(527),
    [anon_sym_QMARK] = ACTIONS(527),
    [anon_sym_deinit] = ACTIONS(527),
    [anon_sym_extension] = ACTIONS(527),
    [anon_sym_subscript] = ACTIONS(527),
    [anon_sym_prefix] = ACTIONS(527),
    [anon_sym_postfix] = ACTIONS(527),
    [anon_sym_infix] = ACTIONS(527),
    [anon_sym_as] = ACTIONS(527),
  },
  [86] = {
    [anon_sym_LPAREN] = ACTIONS(529),
    [anon_sym_case] = ACTIONS(529),
    [anon_sym_let] = ACTIONS(529),
    [anon_sym_var] = ACTIONS(529),
    [anon_sym_LBRACE] = ACTIONS(529),
    [anon_sym_RBRACE] = ACTIONS(529),
    [anon_sym_import] = ACTIONS(529),
    [anon_sym_typealias] = ACTIONS(529),
    [anon_sym_struct] = ACTIONS(529),
    [anon_sym_class] = ACTIONS(529),
    [anon_sym_enum] = ACTIONS(529),
    [anon_sym_protocol] = ACTIONS(529),
    [anon_sym_func] = ACTIONS(529),
    [anon_sym_throws] = ACTIONS(529),
    [anon_sym_rethrows] = ACTIONS(529),
    [anon_sym_DASH_GT] = ACTIONS(529),
    [anon_sym_indirect] = ACTIONS(529),
    [anon_sym_init] = ACTIONS(529),
    [anon_sym_deinit] = ACTIONS(529),
    [anon_sym_extension] = ACTIONS(529),
    [anon_sym_subscript] = ACTIONS(529),
    [anon_sym_prefix] = ACTIONS(529),
    [anon_sym_postfix] = ACTIONS(529),
    [anon_sym_infix] = ACTIONS(529),
  },
  [87] = {
    [anon_sym_case] = ACTIONS(531),
    [anon_sym_COMMA] = ACTIONS(531),
    [anon_sym_EQ] = ACTIONS(531),
    [anon_sym_let] = ACTIONS(531),
    [anon_sym_var] = ACTIONS(531),
    [anon_sym_RBRACE] = ACTIONS(531),
    [anon_sym_COLON] = ACTIONS(531),
    [anon_sym_import] = ACTIONS(531),
    [anon_sym_typealias] = ACTIONS(531),
    [anon_sym_struct] = ACTIONS(531),
    [anon_sym_class] = ACTIONS(531),
    [anon_sym_enum] = ACTIONS(531),
    [anon_sym_protocol] = ACTIONS(531),
    [anon_sym_func] = ACTIONS(531),
    [anon_sym_indirect] = ACTIONS(531),
    [anon_sym_init] = ACTIONS(531),
    [anon_sym_QMARK] = ACTIONS(531),
    [anon_sym_deinit] = ACTIONS(531),
    [anon_sym_extension] = ACTIONS(531),
    [anon_sym_subscript] = ACTIONS(531),
    [anon_sym_prefix] = ACTIONS(531),
    [anon_sym_postfix] = ACTIONS(531),
    [anon_sym_infix] = ACTIONS(531),
    [anon_sym_as] = ACTIONS(531),
  },
  [88] = {
    [anon_sym_LPAREN] = ACTIONS(533),
    [anon_sym_case] = ACTIONS(533),
    [anon_sym_let] = ACTIONS(533),
    [anon_sym_var] = ACTIONS(533),
    [anon_sym_LBRACE] = ACTIONS(533),
    [anon_sym_RBRACE] = ACTIONS(533),
    [anon_sym_import] = ACTIONS(533),
    [anon_sym_typealias] = ACTIONS(533),
    [anon_sym_struct] = ACTIONS(533),
    [anon_sym_class] = ACTIONS(533),
    [anon_sym_enum] = ACTIONS(533),
    [anon_sym_protocol] = ACTIONS(533),
    [anon_sym_func] = ACTIONS(533),
    [anon_sym_throws] = ACTIONS(533),
    [anon_sym_rethrows] = ACTIONS(533),
    [anon_sym_DASH_GT] = ACTIONS(533),
    [anon_sym_indirect] = ACTIONS(533),
    [anon_sym_init] = ACTIONS(533),
    [anon_sym_deinit] = ACTIONS(533),
    [anon_sym_extension] = ACTIONS(533),
    [anon_sym_subscript] = ACTIONS(533),
    [anon_sym_prefix] = ACTIONS(533),
    [anon_sym_postfix] = ACTIONS(533),
    [anon_sym_infix] = ACTIONS(533),
  },
  [89] = {
    [anon_sym_case] = ACTIONS(535),
    [anon_sym_COMMA] = ACTIONS(535),
    [anon_sym_EQ] = ACTIONS(535),
    [anon_sym_let] = ACTIONS(535),
    [anon_sym_var] = ACTIONS(535),
    [anon_sym_RBRACE] = ACTIONS(535),
    [anon_sym_COLON] = ACTIONS(535),
    [anon_sym_import] = ACTIONS(535),
    [anon_sym_typealias] = ACTIONS(535),
    [anon_sym_struct] = ACTIONS(535),
    [anon_sym_class] = ACTIONS(535),
    [anon_sym_enum] = ACTIONS(535),
    [anon_sym_protocol] = ACTIONS(535),
    [anon_sym_func] = ACTIONS(535),
    [anon_sym_indirect] = ACTIONS(535),
    [anon_sym_init] = ACTIONS(535),
    [anon_sym_QMARK] = ACTIONS(535),
    [anon_sym_deinit] = ACTIONS(535),
    [anon_sym_extension] = ACTIONS(535),
    [anon_sym_subscript] = ACTIONS(535),
    [anon_sym_prefix] = ACTIONS(535),
    [anon_sym_postfix] = ACTIONS(535),
    [anon_sym_infix] = ACTIONS(535),
    [anon_sym_as] = ACTIONS(535),
  },
  [90] = {
    [anon_sym_case] = ACTIONS(537),
    [anon_sym_COMMA] = ACTIONS(537),
    [anon_sym_EQ] = ACTIONS(537),
    [anon_sym_let] = ACTIONS(537),
    [anon_sym_var] = ACTIONS(537),
    [anon_sym_RBRACE] = ACTIONS(537),
    [anon_sym_COLON] = ACTIONS(537),
    [anon_sym_import] = ACTIONS(537),
    [anon_sym_typealias] = ACTIONS(537),
    [anon_sym_struct] = ACTIONS(537),
    [anon_sym_class] = ACTIONS(537),
    [anon_sym_enum] = ACTIONS(537),
    [anon_sym_protocol] = ACTIONS(537),
    [anon_sym_func] = ACTIONS(537),
    [anon_sym_indirect] = ACTIONS(537),
    [anon_sym_init] = ACTIONS(537),
    [anon_sym_QMARK] = ACTIONS(537),
    [anon_sym_deinit] = ACTIONS(537),
    [anon_sym_extension] = ACTIONS(537),
    [anon_sym_subscript] = ACTIONS(537),
    [anon_sym_prefix] = ACTIONS(537),
    [anon_sym_postfix] = ACTIONS(537),
    [anon_sym_infix] = ACTIONS(537),
    [anon_sym_as] = ACTIONS(537),
  },
  [91] = {
    [sym_tuple_type] = STATE(152),
    [anon_sym_LPAREN] = ACTIONS(539),
    [anon_sym_case] = ACTIONS(541),
    [anon_sym_EQ] = ACTIONS(543),
    [anon_sym_let] = ACTIONS(541),
    [anon_sym_var] = ACTIONS(541),
    [anon_sym_RBRACE] = ACTIONS(541),
    [anon_sym_import] = ACTIONS(541),
    [anon_sym_typealias] = ACTIONS(541),
    [anon_sym_struct] = ACTIONS(541),
    [anon_sym_class] = ACTIONS(541),
    [anon_sym_enum] = ACTIONS(541),
    [anon_sym_protocol] = ACTIONS(541),
    [anon_sym_func] = ACTIONS(541),
    [anon_sym_indirect] = ACTIONS(541),
    [anon_sym_init] = ACTIONS(541),
    [anon_sym_deinit] = ACTIONS(541),
    [anon_sym_extension] = ACTIONS(541),
    [anon_sym_subscript] = ACTIONS(541),
    [anon_sym_prefix] = ACTIONS(541),
    [anon_sym_postfix] = ACTIONS(541),
    [anon_sym_infix] = ACTIONS(541),
  },
  [92] = {
    [sym_tuple_type] = STATE(128),
    [anon_sym_LPAREN] = ACTIONS(539),
    [anon_sym_case] = ACTIONS(545),
    [anon_sym_EQ] = ACTIONS(547),
    [anon_sym_let] = ACTIONS(545),
    [anon_sym_var] = ACTIONS(545),
    [anon_sym_RBRACE] = ACTIONS(545),
    [anon_sym_import] = ACTIONS(545),
    [anon_sym_typealias] = ACTIONS(545),
    [anon_sym_struct] = ACTIONS(545),
    [anon_sym_class] = ACTIONS(545),
    [anon_sym_enum] = ACTIONS(545),
    [anon_sym_protocol] = ACTIONS(545),
    [anon_sym_func] = ACTIONS(545),
    [anon_sym_indirect] = ACTIONS(545),
    [anon_sym_init] = ACTIONS(545),
    [anon_sym_deinit] = ACTIONS(545),
    [anon_sym_extension] = ACTIONS(545),
    [anon_sym_subscript] = ACTIONS(545),
    [anon_sym_prefix] = ACTIONS(545),
    [anon_sym_postfix] = ACTIONS(545),
    [anon_sym_infix] = ACTIONS(545),
  },
  [93] = {
    [anon_sym_SEMI] = ACTIONS(549),
    [anon_sym_case] = ACTIONS(549),
    [anon_sym_COMMA] = ACTIONS(549),
    [anon_sym_EQ] = ACTIONS(551),
    [anon_sym_let] = ACTIONS(549),
    [anon_sym_var] = ACTIONS(549),
    [anon_sym_RBRACE] = ACTIONS(549),
    [anon_sym_import] = ACTIONS(549),
    [anon_sym_typealias] = ACTIONS(549),
    [anon_sym_struct] = ACTIONS(549),
    [anon_sym_class] = ACTIONS(549),
    [anon_sym_enum] = ACTIONS(549),
    [anon_sym_protocol] = ACTIONS(549),
    [anon_sym_func] = ACTIONS(549),
    [anon_sym_indirect] = ACTIONS(549),
    [anon_sym_init] = ACTIONS(549),
    [anon_sym_deinit] = ACTIONS(549),
    [anon_sym_extension] = ACTIONS(549),
    [anon_sym_subscript] = ACTIONS(549),
    [anon_sym_prefix] = ACTIONS(549),
    [anon_sym_postfix] = ACTIONS(549),
    [anon_sym_infix] = ACTIONS(549),
  },
  [94] = {
    [aux_sym_constant_declaration_repeat1] = STATE(94),
    [anon_sym_case] = ACTIONS(553),
    [anon_sym_COMMA] = ACTIONS(555),
    [anon_sym_let] = ACTIONS(553),
    [anon_sym_var] = ACTIONS(553),
    [anon_sym_RBRACE] = ACTIONS(553),
    [anon_sym_import] = ACTIONS(553),
    [anon_sym_typealias] = ACTIONS(553),
    [anon_sym_struct] = ACTIONS(553),
    [anon_sym_class] = ACTIONS(553),
    [anon_sym_enum] = ACTIONS(553),
    [anon_sym_protocol] = ACTIONS(553),
    [anon_sym_func] = ACTIONS(553),
    [anon_sym_indirect] = ACTIONS(553),
    [anon_sym_init] = ACTIONS(553),
    [anon_sym_deinit] = ACTIONS(553),
    [anon_sym_extension] = ACTIONS(553),
    [anon_sym_subscript] = ACTIONS(553),
    [anon_sym_prefix] = ACTIONS(553),
    [anon_sym_postfix] = ACTIONS(553),
    [anon_sym_infix] = ACTIONS(553),
  },
  [95] = {
    [anon_sym_SEMI] = ACTIONS(553),
    [anon_sym_case] = ACTIONS(553),
    [anon_sym_COMMA] = ACTIONS(553),
    [anon_sym_let] = ACTIONS(553),
    [anon_sym_var] = ACTIONS(553),
    [anon_sym_RBRACE] = ACTIONS(553),
    [anon_sym_import] = ACTIONS(553),
    [anon_sym_typealias] = ACTIONS(553),
    [anon_sym_struct] = ACTIONS(553),
    [anon_sym_class] = ACTIONS(553),
    [anon_sym_enum] = ACTIONS(553),
    [anon_sym_protocol] = ACTIONS(553),
    [anon_sym_func] = ACTIONS(553),
    [anon_sym_indirect] = ACTIONS(553),
    [anon_sym_init] = ACTIONS(553),
    [anon_sym_deinit] = ACTIONS(553),
    [anon_sym_extension] = ACTIONS(553),
    [anon_sym_subscript] = ACTIONS(553),
    [anon_sym_prefix] = ACTIONS(553),
    [anon_sym_postfix] = ACTIONS(553),
    [anon_sym_infix] = ACTIONS(553),
  },
  [96] = {
    [anon_sym_SEMI] = ACTIONS(558),
    [anon_sym_case] = ACTIONS(558),
    [anon_sym_while] = ACTIONS(558),
    [anon_sym_let] = ACTIONS(558),
    [anon_sym_var] = ACTIONS(558),
    [anon_sym_RBRACE] = ACTIONS(558),
    [anon_sym_import] = ACTIONS(558),
    [anon_sym_typealias] = ACTIONS(558),
    [anon_sym_struct] = ACTIONS(558),
    [anon_sym_class] = ACTIONS(558),
    [anon_sym_enum] = ACTIONS(558),
    [anon_sym_protocol] = ACTIONS(558),
    [anon_sym_func] = ACTIONS(558),
    [anon_sym_indirect] = ACTIONS(558),
    [anon_sym_init] = ACTIONS(558),
    [anon_sym_deinit] = ACTIONS(558),
    [anon_sym_extension] = ACTIONS(558),
    [anon_sym_subscript] = ACTIONS(558),
    [anon_sym_prefix] = ACTIONS(558),
    [anon_sym_postfix] = ACTIONS(558),
    [anon_sym_infix] = ACTIONS(558),
  },
  [97] = {
    [anon_sym_SEMI] = ACTIONS(560),
    [anon_sym_case] = ACTIONS(560),
    [anon_sym_COMMA] = ACTIONS(560),
    [anon_sym_let] = ACTIONS(560),
    [anon_sym_var] = ACTIONS(560),
    [anon_sym_RBRACE] = ACTIONS(560),
    [anon_sym_import] = ACTIONS(560),
    [anon_sym_typealias] = ACTIONS(560),
    [anon_sym_struct] = ACTIONS(560),
    [anon_sym_class] = ACTIONS(560),
    [anon_sym_enum] = ACTIONS(560),
    [anon_sym_protocol] = ACTIONS(560),
    [anon_sym_func] = ACTIONS(560),
    [anon_sym_indirect] = ACTIONS(560),
    [anon_sym_init] = ACTIONS(560),
    [anon_sym_deinit] = ACTIONS(560),
    [anon_sym_extension] = ACTIONS(560),
    [anon_sym_subscript] = ACTIONS(560),
    [anon_sym_prefix] = ACTIONS(560),
    [anon_sym_postfix] = ACTIONS(560),
    [anon_sym_infix] = ACTIONS(560),
  },
  [98] = {
    [aux_sym_import_declaration_repeat1] = STATE(100),
    [anon_sym_case] = ACTIONS(562),
    [anon_sym_let] = ACTIONS(562),
    [anon_sym_var] = ACTIONS(562),
    [anon_sym_RBRACE] = ACTIONS(562),
    [anon_sym_import] = ACTIONS(562),
    [anon_sym_typealias] = ACTIONS(562),
    [anon_sym_struct] = ACTIONS(562),
    [anon_sym_class] = ACTIONS(562),
    [anon_sym_enum] = ACTIONS(562),
    [anon_sym_protocol] = ACTIONS(562),
    [anon_sym_func] = ACTIONS(562),
    [anon_sym_DOT] = ACTIONS(564),
    [anon_sym_indirect] = ACTIONS(562),
    [anon_sym_init] = ACTIONS(562),
    [anon_sym_deinit] = ACTIONS(562),
    [anon_sym_extension] = ACTIONS(562),
    [anon_sym_subscript] = ACTIONS(562),
    [anon_sym_prefix] = ACTIONS(562),
    [anon_sym_postfix] = ACTIONS(562),
    [anon_sym_infix] = ACTIONS(562),
  },
  [99] = {
    [aux_sym_import_declaration_repeat1] = STATE(98),
    [anon_sym_case] = ACTIONS(566),
    [anon_sym_let] = ACTIONS(566),
    [anon_sym_var] = ACTIONS(566),
    [anon_sym_RBRACE] = ACTIONS(566),
    [anon_sym_import] = ACTIONS(566),
    [anon_sym_typealias] = ACTIONS(566),
    [anon_sym_struct] = ACTIONS(566),
    [anon_sym_class] = ACTIONS(566),
    [anon_sym_enum] = ACTIONS(566),
    [anon_sym_protocol] = ACTIONS(566),
    [anon_sym_func] = ACTIONS(566),
    [anon_sym_DOT] = ACTIONS(564),
    [anon_sym_indirect] = ACTIONS(566),
    [anon_sym_init] = ACTIONS(566),
    [anon_sym_deinit] = ACTIONS(566),
    [anon_sym_extension] = ACTIONS(566),
    [anon_sym_subscript] = ACTIONS(566),
    [anon_sym_prefix] = ACTIONS(566),
    [anon_sym_postfix] = ACTIONS(566),
    [anon_sym_infix] = ACTIONS(566),
  },
  [100] = {
    [aux_sym_import_declaration_repeat1] = STATE(100),
    [anon_sym_case] = ACTIONS(568),
    [anon_sym_let] = ACTIONS(568),
    [anon_sym_var] = ACTIONS(568),
    [anon_sym_RBRACE] = ACTIONS(568),
    [anon_sym_import] = ACTIONS(568),
    [anon_sym_typealias] = ACTIONS(568),
    [anon_sym_struct] = ACTIONS(568),
    [anon_sym_class] = ACTIONS(568),
    [anon_sym_enum] = ACTIONS(568),
    [anon_sym_protocol] = ACTIONS(568),
    [anon_sym_func] = ACTIONS(568),
    [anon_sym_DOT] = ACTIONS(570),
    [anon_sym_indirect] = ACTIONS(568),
    [anon_sym_init] = ACTIONS(568),
    [anon_sym_deinit] = ACTIONS(568),
    [anon_sym_extension] = ACTIONS(568),
    [anon_sym_subscript] = ACTIONS(568),
    [anon_sym_prefix] = ACTIONS(568),
    [anon_sym_postfix] = ACTIONS(568),
    [anon_sym_infix] = ACTIONS(568),
  },
  [101] = {
    [anon_sym_case] = ACTIONS(573),
    [anon_sym_COMMA] = ACTIONS(573),
    [anon_sym_EQ] = ACTIONS(573),
    [anon_sym_let] = ACTIONS(573),
    [anon_sym_var] = ACTIONS(573),
    [anon_sym_RBRACE] = ACTIONS(573),
    [anon_sym_import] = ACTIONS(573),
    [anon_sym_typealias] = ACTIONS(573),
    [anon_sym_struct] = ACTIONS(573),
    [anon_sym_class] = ACTIONS(573),
    [anon_sym_enum] = ACTIONS(573),
    [anon_sym_protocol] = ACTIONS(573),
    [anon_sym_func] = ACTIONS(573),
    [anon_sym_indirect] = ACTIONS(573),
    [anon_sym_init] = ACTIONS(573),
    [anon_sym_deinit] = ACTIONS(573),
    [anon_sym_extension] = ACTIONS(573),
    [anon_sym_subscript] = ACTIONS(573),
    [anon_sym_prefix] = ACTIONS(573),
    [anon_sym_postfix] = ACTIONS(573),
    [anon_sym_infix] = ACTIONS(573),
  },
  [102] = {
    [aux_sym_constant_declaration_repeat1] = STATE(109),
    [anon_sym_case] = ACTIONS(575),
    [anon_sym_COMMA] = ACTIONS(577),
    [anon_sym_let] = ACTIONS(575),
    [anon_sym_var] = ACTIONS(575),
    [anon_sym_RBRACE] = ACTIONS(575),
    [anon_sym_import] = ACTIONS(575),
    [anon_sym_typealias] = ACTIONS(575),
    [anon_sym_struct] = ACTIONS(575),
    [anon_sym_class] = ACTIONS(575),
    [anon_sym_enum] = ACTIONS(575),
    [anon_sym_protocol] = ACTIONS(575),
    [anon_sym_func] = ACTIONS(575),
    [anon_sym_indirect] = ACTIONS(575),
    [anon_sym_init] = ACTIONS(575),
    [anon_sym_deinit] = ACTIONS(575),
    [anon_sym_extension] = ACTIONS(575),
    [anon_sym_subscript] = ACTIONS(575),
    [anon_sym_prefix] = ACTIONS(575),
    [anon_sym_postfix] = ACTIONS(575),
    [anon_sym_infix] = ACTIONS(575),
  },
  [103] = {
    [anon_sym_SEMI] = ACTIONS(579),
    [anon_sym_case] = ACTIONS(579),
    [anon_sym_COMMA] = ACTIONS(579),
    [anon_sym_let] = ACTIONS(579),
    [anon_sym_var] = ACTIONS(579),
    [anon_sym_RBRACE] = ACTIONS(579),
    [anon_sym_import] = ACTIONS(579),
    [anon_sym_typealias] = ACTIONS(579),
    [anon_sym_struct] = ACTIONS(579),
    [anon_sym_class] = ACTIONS(579),
    [anon_sym_enum] = ACTIONS(579),
    [anon_sym_protocol] = ACTIONS(579),
    [anon_sym_func] = ACTIONS(579),
    [anon_sym_indirect] = ACTIONS(579),
    [anon_sym_init] = ACTIONS(579),
    [anon_sym_deinit] = ACTIONS(579),
    [anon_sym_extension] = ACTIONS(579),
    [anon_sym_subscript] = ACTIONS(579),
    [anon_sym_prefix] = ACTIONS(579),
    [anon_sym_postfix] = ACTIONS(579),
    [anon_sym_infix] = ACTIONS(579),
  },
  [104] = {
    [anon_sym_SEMI] = ACTIONS(581),
    [anon_sym_case] = ACTIONS(581),
    [anon_sym_while] = ACTIONS(581),
    [anon_sym_let] = ACTIONS(581),
    [anon_sym_var] = ACTIONS(581),
    [anon_sym_RBRACE] = ACTIONS(581),
    [anon_sym_import] = ACTIONS(581),
    [anon_sym_typealias] = ACTIONS(581),
    [anon_sym_struct] = ACTIONS(581),
    [anon_sym_class] = ACTIONS(581),
    [anon_sym_enum] = ACTIONS(581),
    [anon_sym_protocol] = ACTIONS(581),
    [anon_sym_func] = ACTIONS(581),
    [anon_sym_indirect] = ACTIONS(581),
    [anon_sym_init] = ACTIONS(581),
    [anon_sym_deinit] = ACTIONS(581),
    [anon_sym_extension] = ACTIONS(581),
    [anon_sym_subscript] = ACTIONS(581),
    [anon_sym_prefix] = ACTIONS(581),
    [anon_sym_postfix] = ACTIONS(581),
    [anon_sym_infix] = ACTIONS(581),
  },
  [105] = {
    [anon_sym_case] = ACTIONS(583),
    [anon_sym_let] = ACTIONS(583),
    [anon_sym_var] = ACTIONS(583),
    [anon_sym_LBRACE] = ACTIONS(583),
    [anon_sym_RBRACE] = ACTIONS(583),
    [anon_sym_import] = ACTIONS(583),
    [anon_sym_typealias] = ACTIONS(583),
    [anon_sym_struct] = ACTIONS(583),
    [anon_sym_class] = ACTIONS(583),
    [anon_sym_enum] = ACTIONS(583),
    [anon_sym_protocol] = ACTIONS(583),
    [anon_sym_func] = ACTIONS(583),
    [anon_sym_DASH_GT] = ACTIONS(585),
    [anon_sym_indirect] = ACTIONS(583),
    [anon_sym_init] = ACTIONS(583),
    [anon_sym_deinit] = ACTIONS(583),
    [anon_sym_extension] = ACTIONS(583),
    [anon_sym_subscript] = ACTIONS(583),
    [anon_sym_prefix] = ACTIONS(583),
    [anon_sym_postfix] = ACTIONS(583),
    [anon_sym_infix] = ACTIONS(583),
  },
  [106] = {
    [aux_sym_import_declaration_repeat1] = STATE(100),
    [anon_sym_case] = ACTIONS(566),
    [anon_sym_let] = ACTIONS(566),
    [anon_sym_var] = ACTIONS(566),
    [anon_sym_RBRACE] = ACTIONS(566),
    [anon_sym_import] = ACTIONS(566),
    [anon_sym_typealias] = ACTIONS(566),
    [anon_sym_struct] = ACTIONS(566),
    [anon_sym_class] = ACTIONS(566),
    [anon_sym_enum] = ACTIONS(566),
    [anon_sym_protocol] = ACTIONS(566),
    [anon_sym_func] = ACTIONS(566),
    [anon_sym_DOT] = ACTIONS(564),
    [anon_sym_indirect] = ACTIONS(566),
    [anon_sym_init] = ACTIONS(566),
    [anon_sym_deinit] = ACTIONS(566),
    [anon_sym_extension] = ACTIONS(566),
    [anon_sym_subscript] = ACTIONS(566),
    [anon_sym_prefix] = ACTIONS(566),
    [anon_sym_postfix] = ACTIONS(566),
    [anon_sym_infix] = ACTIONS(566),
  },
  [107] = {
    [aux_sym_constant_declaration_repeat1] = STATE(111),
    [anon_sym_case] = ACTIONS(587),
    [anon_sym_COMMA] = ACTIONS(577),
    [anon_sym_let] = ACTIONS(587),
    [anon_sym_var] = ACTIONS(587),
    [anon_sym_RBRACE] = ACTIONS(587),
    [anon_sym_import] = ACTIONS(587),
    [anon_sym_typealias] = ACTIONS(587),
    [anon_sym_struct] = ACTIONS(587),
    [anon_sym_class] = ACTIONS(587),
    [anon_sym_enum] = ACTIONS(587),
    [anon_sym_protocol] = ACTIONS(587),
    [anon_sym_func] = ACTIONS(587),
    [anon_sym_indirect] = ACTIONS(587),
    [anon_sym_init] = ACTIONS(587),
    [anon_sym_deinit] = ACTIONS(587),
    [anon_sym_extension] = ACTIONS(587),
    [anon_sym_subscript] = ACTIONS(587),
    [anon_sym_prefix] = ACTIONS(587),
    [anon_sym_postfix] = ACTIONS(587),
    [anon_sym_infix] = ACTIONS(587),
  },
  [108] = {
    [aux_sym_import_declaration_repeat1] = STATE(106),
    [anon_sym_case] = ACTIONS(589),
    [anon_sym_let] = ACTIONS(589),
    [anon_sym_var] = ACTIONS(589),
    [anon_sym_RBRACE] = ACTIONS(589),
    [anon_sym_import] = ACTIONS(589),
    [anon_sym_typealias] = ACTIONS(589),
    [anon_sym_struct] = ACTIONS(589),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_enum] = ACTIONS(589),
    [anon_sym_protocol] = ACTIONS(589),
    [anon_sym_func] = ACTIONS(589),
    [anon_sym_DOT] = ACTIONS(564),
    [anon_sym_indirect] = ACTIONS(589),
    [anon_sym_init] = ACTIONS(589),
    [anon_sym_deinit] = ACTIONS(589),
    [anon_sym_extension] = ACTIONS(589),
    [anon_sym_subscript] = ACTIONS(589),
    [anon_sym_prefix] = ACTIONS(589),
    [anon_sym_postfix] = ACTIONS(589),
    [anon_sym_infix] = ACTIONS(589),
  },
  [109] = {
    [aux_sym_constant_declaration_repeat1] = STATE(94),
    [anon_sym_case] = ACTIONS(591),
    [anon_sym_COMMA] = ACTIONS(577),
    [anon_sym_let] = ACTIONS(591),
    [anon_sym_var] = ACTIONS(591),
    [anon_sym_RBRACE] = ACTIONS(591),
    [anon_sym_import] = ACTIONS(591),
    [anon_sym_typealias] = ACTIONS(591),
    [anon_sym_struct] = ACTIONS(591),
    [anon_sym_class] = ACTIONS(591),
    [anon_sym_enum] = ACTIONS(591),
    [anon_sym_protocol] = ACTIONS(591),
    [anon_sym_func] = ACTIONS(591),
    [anon_sym_indirect] = ACTIONS(591),
    [anon_sym_init] = ACTIONS(591),
    [anon_sym_deinit] = ACTIONS(591),
    [anon_sym_extension] = ACTIONS(591),
    [anon_sym_subscript] = ACTIONS(591),
    [anon_sym_prefix] = ACTIONS(591),
    [anon_sym_postfix] = ACTIONS(591),
    [anon_sym_infix] = ACTIONS(591),
  },
  [110] = {
    [sym__code_block] = STATE(135),
    [anon_sym_case] = ACTIONS(593),
    [anon_sym_let] = ACTIONS(593),
    [anon_sym_var] = ACTIONS(593),
    [anon_sym_LBRACE] = ACTIONS(595),
    [anon_sym_RBRACE] = ACTIONS(593),
    [anon_sym_import] = ACTIONS(593),
    [anon_sym_typealias] = ACTIONS(593),
    [anon_sym_struct] = ACTIONS(593),
    [anon_sym_class] = ACTIONS(593),
    [anon_sym_enum] = ACTIONS(593),
    [anon_sym_protocol] = ACTIONS(593),
    [anon_sym_func] = ACTIONS(593),
    [anon_sym_indirect] = ACTIONS(593),
    [anon_sym_init] = ACTIONS(593),
    [anon_sym_deinit] = ACTIONS(593),
    [anon_sym_extension] = ACTIONS(593),
    [anon_sym_subscript] = ACTIONS(593),
    [anon_sym_prefix] = ACTIONS(593),
    [anon_sym_postfix] = ACTIONS(593),
    [anon_sym_infix] = ACTIONS(593),
  },
  [111] = {
    [aux_sym_constant_declaration_repeat1] = STATE(94),
    [anon_sym_case] = ACTIONS(597),
    [anon_sym_COMMA] = ACTIONS(577),
    [anon_sym_let] = ACTIONS(597),
    [anon_sym_var] = ACTIONS(597),
    [anon_sym_RBRACE] = ACTIONS(597),
    [anon_sym_import] = ACTIONS(597),
    [anon_sym_typealias] = ACTIONS(597),
    [anon_sym_struct] = ACTIONS(597),
    [anon_sym_class] = ACTIONS(597),
    [anon_sym_enum] = ACTIONS(597),
    [anon_sym_protocol] = ACTIONS(597),
    [anon_sym_func] = ACTIONS(597),
    [anon_sym_indirect] = ACTIONS(597),
    [anon_sym_init] = ACTIONS(597),
    [anon_sym_deinit] = ACTIONS(597),
    [anon_sym_extension] = ACTIONS(597),
    [anon_sym_subscript] = ACTIONS(597),
    [anon_sym_prefix] = ACTIONS(597),
    [anon_sym_postfix] = ACTIONS(597),
    [anon_sym_infix] = ACTIONS(597),
  },
  [112] = {
    [anon_sym_case] = ACTIONS(599),
    [anon_sym_let] = ACTIONS(599),
    [anon_sym_var] = ACTIONS(599),
    [anon_sym_LBRACE] = ACTIONS(599),
    [anon_sym_RBRACE] = ACTIONS(599),
    [anon_sym_import] = ACTIONS(599),
    [anon_sym_typealias] = ACTIONS(599),
    [anon_sym_struct] = ACTIONS(599),
    [anon_sym_class] = ACTIONS(599),
    [anon_sym_enum] = ACTIONS(599),
    [anon_sym_protocol] = ACTIONS(599),
    [anon_sym_func] = ACTIONS(599),
    [anon_sym_indirect] = ACTIONS(599),
    [anon_sym_init] = ACTIONS(599),
    [anon_sym_deinit] = ACTIONS(599),
    [anon_sym_extension] = ACTIONS(599),
    [anon_sym_subscript] = ACTIONS(599),
    [anon_sym_prefix] = ACTIONS(599),
    [anon_sym_postfix] = ACTIONS(599),
    [anon_sym_infix] = ACTIONS(599),
  },
  [113] = {
    [sym__pattern_initializer] = STATE(311),
    [sym__variable_name] = STATE(508),
    [sym__pattern] = STATE(222),
    [sym_wildcard_pattern] = STATE(222),
    [sym_value_binding_pattern] = STATE(222),
    [sym_tuple_pattern] = STATE(222),
    [sym_enum_case_pattern] = STATE(222),
    [sym_optional_pattern] = STATE(222),
    [sym_is_pattern] = STATE(222),
    [sym_as_pattern] = STATE(222),
    [sym__expression] = STATE(222),
    [sym__type_identifier] = STATE(646),
    [sym__type_name] = STATE(646),
    [anon_sym_LPAREN] = ACTIONS(601),
    [anon_sym_let] = ACTIONS(603),
    [anon_sym_var] = ACTIONS(603),
    [anon_sym_DOT] = ACTIONS(605),
    [anon_sym__] = ACTIONS(607),
    [anon_sym_is] = ACTIONS(609),
    [sym_identifier] = ACTIONS(611),
  },
  [114] = {
    [sym__pattern] = STATE(289),
    [sym_wildcard_pattern] = STATE(289),
    [sym_value_binding_pattern] = STATE(289),
    [sym_tuple_pattern] = STATE(289),
    [sym__tuple_pattern_element_list] = STATE(629),
    [sym_enum_case_pattern] = STATE(289),
    [sym_optional_pattern] = STATE(289),
    [sym_is_pattern] = STATE(289),
    [sym_as_pattern] = STATE(289),
    [sym__expression] = STATE(289),
    [sym__type_identifier] = STATE(675),
    [sym__type_name] = STATE(675),
    [anon_sym_LPAREN] = ACTIONS(446),
    [anon_sym_RPAREN] = ACTIONS(613),
    [anon_sym_let] = ACTIONS(450),
    [anon_sym_var] = ACTIONS(450),
    [anon_sym_DOT] = ACTIONS(454),
    [anon_sym__] = ACTIONS(456),
    [anon_sym_is] = ACTIONS(458),
    [sym_identifier] = ACTIONS(460),
  },
  [115] = {
    [anon_sym_SEMI] = ACTIONS(615),
    [anon_sym_case] = ACTIONS(615),
    [anon_sym_let] = ACTIONS(615),
    [anon_sym_var] = ACTIONS(615),
    [anon_sym_RBRACE] = ACTIONS(615),
    [anon_sym_import] = ACTIONS(615),
    [anon_sym_typealias] = ACTIONS(615),
    [anon_sym_struct] = ACTIONS(615),
    [anon_sym_class] = ACTIONS(615),
    [anon_sym_enum] = ACTIONS(615),
    [anon_sym_protocol] = ACTIONS(615),
    [anon_sym_func] = ACTIONS(615),
    [anon_sym_indirect] = ACTIONS(615),
    [anon_sym_init] = ACTIONS(615),
    [anon_sym_deinit] = ACTIONS(615),
    [anon_sym_extension] = ACTIONS(615),
    [anon_sym_subscript] = ACTIONS(615),
    [anon_sym_prefix] = ACTIONS(615),
    [anon_sym_postfix] = ACTIONS(615),
    [anon_sym_infix] = ACTIONS(615),
  },
  [116] = {
    [anon_sym_SEMI] = ACTIONS(617),
    [anon_sym_case] = ACTIONS(617),
    [anon_sym_let] = ACTIONS(617),
    [anon_sym_var] = ACTIONS(617),
    [anon_sym_RBRACE] = ACTIONS(617),
    [anon_sym_import] = ACTIONS(617),
    [anon_sym_typealias] = ACTIONS(617),
    [anon_sym_struct] = ACTIONS(617),
    [anon_sym_class] = ACTIONS(617),
    [anon_sym_enum] = ACTIONS(617),
    [anon_sym_protocol] = ACTIONS(617),
    [anon_sym_func] = ACTIONS(617),
    [anon_sym_indirect] = ACTIONS(617),
    [anon_sym_init] = ACTIONS(617),
    [anon_sym_deinit] = ACTIONS(617),
    [anon_sym_extension] = ACTIONS(617),
    [anon_sym_subscript] = ACTIONS(617),
    [anon_sym_prefix] = ACTIONS(617),
    [anon_sym_postfix] = ACTIONS(617),
    [anon_sym_infix] = ACTIONS(617),
  },
  [117] = {
    [anon_sym_case] = ACTIONS(619),
    [anon_sym_let] = ACTIONS(619),
    [anon_sym_var] = ACTIONS(619),
    [anon_sym_LBRACE] = ACTIONS(619),
    [anon_sym_RBRACE] = ACTIONS(619),
    [anon_sym_import] = ACTIONS(619),
    [anon_sym_typealias] = ACTIONS(619),
    [anon_sym_struct] = ACTIONS(619),
    [anon_sym_class] = ACTIONS(619),
    [anon_sym_enum] = ACTIONS(619),
    [anon_sym_protocol] = ACTIONS(619),
    [anon_sym_func] = ACTIONS(619),
    [anon_sym_indirect] = ACTIONS(619),
    [anon_sym_init] = ACTIONS(619),
    [anon_sym_deinit] = ACTIONS(619),
    [anon_sym_extension] = ACTIONS(619),
    [anon_sym_subscript] = ACTIONS(619),
    [anon_sym_prefix] = ACTIONS(619),
    [anon_sym_postfix] = ACTIONS(619),
    [anon_sym_infix] = ACTIONS(619),
  },
  [118] = {
    [anon_sym_SEMI] = ACTIONS(621),
    [anon_sym_case] = ACTIONS(621),
    [anon_sym_let] = ACTIONS(621),
    [anon_sym_var] = ACTIONS(621),
    [anon_sym_RBRACE] = ACTIONS(621),
    [anon_sym_import] = ACTIONS(621),
    [anon_sym_typealias] = ACTIONS(621),
    [anon_sym_struct] = ACTIONS(621),
    [anon_sym_class] = ACTIONS(621),
    [anon_sym_enum] = ACTIONS(621),
    [anon_sym_protocol] = ACTIONS(621),
    [anon_sym_func] = ACTIONS(621),
    [anon_sym_indirect] = ACTIONS(621),
    [anon_sym_init] = ACTIONS(621),
    [anon_sym_deinit] = ACTIONS(621),
    [anon_sym_extension] = ACTIONS(621),
    [anon_sym_subscript] = ACTIONS(621),
    [anon_sym_prefix] = ACTIONS(621),
    [anon_sym_postfix] = ACTIONS(621),
    [anon_sym_infix] = ACTIONS(621),
  },
  [119] = {
    [anon_sym_case] = ACTIONS(568),
    [anon_sym_let] = ACTIONS(568),
    [anon_sym_var] = ACTIONS(568),
    [anon_sym_RBRACE] = ACTIONS(568),
    [anon_sym_import] = ACTIONS(568),
    [anon_sym_typealias] = ACTIONS(568),
    [anon_sym_struct] = ACTIONS(568),
    [anon_sym_class] = ACTIONS(568),
    [anon_sym_enum] = ACTIONS(568),
    [anon_sym_protocol] = ACTIONS(568),
    [anon_sym_func] = ACTIONS(568),
    [anon_sym_DOT] = ACTIONS(568),
    [anon_sym_indirect] = ACTIONS(568),
    [anon_sym_init] = ACTIONS(568),
    [anon_sym_deinit] = ACTIONS(568),
    [anon_sym_extension] = ACTIONS(568),
    [anon_sym_subscript] = ACTIONS(568),
    [anon_sym_prefix] = ACTIONS(568),
    [anon_sym_postfix] = ACTIONS(568),
    [anon_sym_infix] = ACTIONS(568),
  },
  [120] = {
    [sym__pattern] = STATE(289),
    [sym_wildcard_pattern] = STATE(289),
    [sym_value_binding_pattern] = STATE(289),
    [sym_tuple_pattern] = STATE(289),
    [sym__tuple_pattern_element_list] = STATE(590),
    [sym_enum_case_pattern] = STATE(289),
    [sym_optional_pattern] = STATE(289),
    [sym_is_pattern] = STATE(289),
    [sym_as_pattern] = STATE(289),
    [sym__expression] = STATE(289),
    [sym__type_identifier] = STATE(675),
    [sym__type_name] = STATE(675),
    [anon_sym_LPAREN] = ACTIONS(446),
    [anon_sym_RPAREN] = ACTIONS(623),
    [anon_sym_let] = ACTIONS(450),
    [anon_sym_var] = ACTIONS(450),
    [anon_sym_DOT] = ACTIONS(454),
    [anon_sym__] = ACTIONS(456),
    [anon_sym_is] = ACTIONS(458),
    [sym_identifier] = ACTIONS(460),
  },
  [121] = {
    [sym__pattern_initializer] = STATE(449),
    [sym__variable_name] = STATE(513),
    [sym__pattern] = STATE(247),
    [sym_wildcard_pattern] = STATE(247),
    [sym_value_binding_pattern] = STATE(247),
    [sym_tuple_pattern] = STATE(247),
    [sym_enum_case_pattern] = STATE(247),
    [sym_optional_pattern] = STATE(247),
    [sym_is_pattern] = STATE(247),
    [sym_as_pattern] = STATE(247),
    [sym__expression] = STATE(247),
    [sym__type_identifier] = STATE(675),
    [sym__type_name] = STATE(675),
    [anon_sym_LPAREN] = ACTIONS(446),
    [anon_sym_let] = ACTIONS(450),
    [anon_sym_var] = ACTIONS(450),
    [anon_sym_DOT] = ACTIONS(454),
    [anon_sym__] = ACTIONS(456),
    [anon_sym_is] = ACTIONS(458),
    [sym_identifier] = ACTIONS(625),
  },
  [122] = {
    [sym__pattern] = STATE(289),
    [sym_wildcard_pattern] = STATE(289),
    [sym_value_binding_pattern] = STATE(289),
    [sym_tuple_pattern] = STATE(289),
    [sym__tuple_pattern_element_list] = STATE(592),
    [sym_enum_case_pattern] = STATE(289),
    [sym_optional_pattern] = STATE(289),
    [sym_is_pattern] = STATE(289),
    [sym_as_pattern] = STATE(289),
    [sym__expression] = STATE(289),
    [sym__type_identifier] = STATE(675),
    [sym__type_name] = STATE(675),
    [anon_sym_LPAREN] = ACTIONS(446),
    [anon_sym_RPAREN] = ACTIONS(448),
    [anon_sym_let] = ACTIONS(450),
    [anon_sym_var] = ACTIONS(450),
    [anon_sym_DOT] = ACTIONS(454),
    [anon_sym__] = ACTIONS(456),
    [anon_sym_is] = ACTIONS(458),
    [sym_identifier] = ACTIONS(460),
  },
  [123] = {
    [sym__code_block] = STATE(436),
    [sym__pattern] = STATE(357),
    [sym_wildcard_pattern] = STATE(357),
    [sym_value_binding_pattern] = STATE(357),
    [sym_tuple_pattern] = STATE(357),
    [sym_enum_case_pattern] = STATE(357),
    [sym_optional_pattern] = STATE(357),
    [sym_is_pattern] = STATE(357),
    [sym_as_pattern] = STATE(357),
    [sym__expression] = STATE(357),
    [sym__type_identifier] = STATE(675),
    [sym__type_name] = STATE(675),
    [anon_sym_LPAREN] = ACTIONS(446),
    [anon_sym_let] = ACTIONS(450),
    [anon_sym_var] = ACTIONS(450),
    [anon_sym_LBRACE] = ACTIONS(627),
    [anon_sym_DOT] = ACTIONS(454),
    [anon_sym__] = ACTIONS(456),
    [anon_sym_is] = ACTIONS(458),
    [sym_identifier] = ACTIONS(460),
  },
  [124] = {
    [sym__pattern_initializer] = STATE(107),
    [sym__variable_name] = STATE(513),
    [sym__pattern] = STATE(66),
    [sym_wildcard_pattern] = STATE(66),
    [sym_value_binding_pattern] = STATE(66),
    [sym_tuple_pattern] = STATE(66),
    [sym_enum_case_pattern] = STATE(66),
    [sym_optional_pattern] = STATE(66),
    [sym_is_pattern] = STATE(66),
    [sym_as_pattern] = STATE(66),
    [sym__expression] = STATE(66),
    [sym__type_identifier] = STATE(667),
    [sym__type_name] = STATE(667),
    [anon_sym_LPAREN] = ACTIONS(431),
    [anon_sym_let] = ACTIONS(629),
    [anon_sym_var] = ACTIONS(629),
    [anon_sym_DOT] = ACTIONS(631),
    [anon_sym__] = ACTIONS(633),
    [anon_sym_is] = ACTIONS(635),
    [sym_identifier] = ACTIONS(625),
  },
  [125] = {
    [anon_sym_case] = ACTIONS(637),
    [anon_sym_let] = ACTIONS(637),
    [anon_sym_var] = ACTIONS(637),
    [anon_sym_RBRACE] = ACTIONS(637),
    [anon_sym_import] = ACTIONS(637),
    [anon_sym_typealias] = ACTIONS(637),
    [anon_sym_struct] = ACTIONS(637),
    [anon_sym_class] = ACTIONS(637),
    [anon_sym_enum] = ACTIONS(637),
    [anon_sym_protocol] = ACTIONS(637),
    [anon_sym_func] = ACTIONS(637),
    [anon_sym_indirect] = ACTIONS(637),
    [anon_sym_init] = ACTIONS(637),
    [anon_sym_deinit] = ACTIONS(637),
    [anon_sym_extension] = ACTIONS(637),
    [anon_sym_subscript] = ACTIONS(637),
    [anon_sym_prefix] = ACTIONS(637),
    [anon_sym_postfix] = ACTIONS(637),
    [anon_sym_infix] = ACTIONS(637),
  },
  [126] = {
    [anon_sym_case] = ACTIONS(639),
    [anon_sym_let] = ACTIONS(639),
    [anon_sym_var] = ACTIONS(639),
    [anon_sym_RBRACE] = ACTIONS(639),
    [anon_sym_import] = ACTIONS(639),
    [anon_sym_typealias] = ACTIONS(639),
    [anon_sym_struct] = ACTIONS(639),
    [anon_sym_class] = ACTIONS(639),
    [anon_sym_enum] = ACTIONS(639),
    [anon_sym_protocol] = ACTIONS(639),
    [anon_sym_func] = ACTIONS(639),
    [anon_sym_indirect] = ACTIONS(639),
    [anon_sym_init] = ACTIONS(639),
    [anon_sym_deinit] = ACTIONS(639),
    [anon_sym_extension] = ACTIONS(639),
    [anon_sym_subscript] = ACTIONS(639),
    [anon_sym_prefix] = ACTIONS(639),
    [anon_sym_postfix] = ACTIONS(639),
    [anon_sym_infix] = ACTIONS(639),
  },
  [127] = {
    [sym_optional_binding] = STATE(399),
    [sym__pattern] = STATE(386),
    [sym_wildcard_pattern] = STATE(386),
    [sym_value_binding_pattern] = STATE(386),
    [sym_tuple_pattern] = STATE(386),
    [sym_enum_case_pattern] = STATE(386),
    [sym_optional_pattern] = STATE(386),
    [sym_is_pattern] = STATE(386),
    [sym_as_pattern] = STATE(386),
    [sym__expression] = STATE(386),
    [sym__type_identifier] = STATE(675),
    [sym__type_name] = STATE(675),
    [anon_sym_LPAREN] = ACTIONS(446),
    [anon_sym_let] = ACTIONS(450),
    [anon_sym_var] = ACTIONS(450),
    [anon_sym_DOT] = ACTIONS(454),
    [anon_sym__] = ACTIONS(456),
    [anon_sym_is] = ACTIONS(458),
    [sym_identifier] = ACTIONS(460),
  },
  [128] = {
    [anon_sym_case] = ACTIONS(641),
    [anon_sym_let] = ACTIONS(641),
    [anon_sym_var] = ACTIONS(641),
    [anon_sym_RBRACE] = ACTIONS(641),
    [anon_sym_import] = ACTIONS(641),
    [anon_sym_typealias] = ACTIONS(641),
    [anon_sym_struct] = ACTIONS(641),
    [anon_sym_class] = ACTIONS(641),
    [anon_sym_enum] = ACTIONS(641),
    [anon_sym_protocol] = ACTIONS(641),
    [anon_sym_func] = ACTIONS(641),
    [anon_sym_indirect] = ACTIONS(641),
    [anon_sym_init] = ACTIONS(641),
    [anon_sym_deinit] = ACTIONS(641),
    [anon_sym_extension] = ACTIONS(641),
    [anon_sym_subscript] = ACTIONS(641),
    [anon_sym_prefix] = ACTIONS(641),
    [anon_sym_postfix] = ACTIONS(641),
    [anon_sym_infix] = ACTIONS(641),
  },
  [129] = {
    [anon_sym_case] = ACTIONS(643),
    [anon_sym_let] = ACTIONS(643),
    [anon_sym_var] = ACTIONS(643),
    [anon_sym_RBRACE] = ACTIONS(643),
    [anon_sym_import] = ACTIONS(643),
    [anon_sym_typealias] = ACTIONS(643),
    [anon_sym_struct] = ACTIONS(643),
    [anon_sym_class] = ACTIONS(643),
    [anon_sym_enum] = ACTIONS(643),
    [anon_sym_protocol] = ACTIONS(643),
    [anon_sym_func] = ACTIONS(643),
    [anon_sym_indirect] = ACTIONS(643),
    [anon_sym_init] = ACTIONS(643),
    [anon_sym_deinit] = ACTIONS(643),
    [anon_sym_extension] = ACTIONS(643),
    [anon_sym_subscript] = ACTIONS(643),
    [anon_sym_prefix] = ACTIONS(643),
    [anon_sym_postfix] = ACTIONS(643),
    [anon_sym_infix] = ACTIONS(643),
  },
  [130] = {
    [anon_sym_case] = ACTIONS(363),
    [anon_sym_let] = ACTIONS(363),
    [anon_sym_var] = ACTIONS(363),
    [anon_sym_RBRACE] = ACTIONS(363),
    [anon_sym_import] = ACTIONS(363),
    [anon_sym_typealias] = ACTIONS(363),
    [anon_sym_struct] = ACTIONS(363),
    [anon_sym_class] = ACTIONS(363),
    [anon_sym_enum] = ACTIONS(363),
    [anon_sym_protocol] = ACTIONS(363),
    [anon_sym_func] = ACTIONS(363),
    [anon_sym_indirect] = ACTIONS(363),
    [anon_sym_init] = ACTIONS(363),
    [anon_sym_deinit] = ACTIONS(363),
    [anon_sym_extension] = ACTIONS(363),
    [anon_sym_subscript] = ACTIONS(363),
    [anon_sym_prefix] = ACTIONS(363),
    [anon_sym_postfix] = ACTIONS(363),
    [anon_sym_infix] = ACTIONS(363),
  },
  [131] = {
    [anon_sym_case] = ACTIONS(645),
    [anon_sym_let] = ACTIONS(645),
    [anon_sym_var] = ACTIONS(645),
    [anon_sym_RBRACE] = ACTIONS(645),
    [anon_sym_import] = ACTIONS(645),
    [anon_sym_typealias] = ACTIONS(645),
    [anon_sym_struct] = ACTIONS(645),
    [anon_sym_class] = ACTIONS(645),
    [anon_sym_enum] = ACTIONS(645),
    [anon_sym_protocol] = ACTIONS(645),
    [anon_sym_func] = ACTIONS(645),
    [anon_sym_indirect] = ACTIONS(645),
    [anon_sym_init] = ACTIONS(645),
    [anon_sym_deinit] = ACTIONS(645),
    [anon_sym_extension] = ACTIONS(645),
    [anon_sym_subscript] = ACTIONS(645),
    [anon_sym_prefix] = ACTIONS(645),
    [anon_sym_postfix] = ACTIONS(645),
    [anon_sym_infix] = ACTIONS(645),
  },
  [132] = {
    [sym__pattern_initializer] = STATE(95),
    [sym__pattern] = STATE(247),
    [sym_wildcard_pattern] = STATE(247),
    [sym_value_binding_pattern] = STATE(247),
    [sym_tuple_pattern] = STATE(247),
    [sym_enum_case_pattern] = STATE(247),
    [sym_optional_pattern] = STATE(247),
    [sym_is_pattern] = STATE(247),
    [sym_as_pattern] = STATE(247),
    [sym__expression] = STATE(247),
    [sym__type_identifier] = STATE(675),
    [sym__type_name] = STATE(675),
    [anon_sym_LPAREN] = ACTIONS(446),
    [anon_sym_let] = ACTIONS(450),
    [anon_sym_var] = ACTIONS(450),
    [anon_sym_DOT] = ACTIONS(454),
    [anon_sym__] = ACTIONS(456),
    [anon_sym_is] = ACTIONS(458),
    [sym_identifier] = ACTIONS(460),
  },
  [133] = {
    [sym__pattern_initializer] = STATE(102),
    [sym__pattern] = STATE(66),
    [sym_wildcard_pattern] = STATE(66),
    [sym_value_binding_pattern] = STATE(66),
    [sym_tuple_pattern] = STATE(66),
    [sym_enum_case_pattern] = STATE(66),
    [sym_optional_pattern] = STATE(66),
    [sym_is_pattern] = STATE(66),
    [sym_as_pattern] = STATE(66),
    [sym__expression] = STATE(66),
    [sym__type_identifier] = STATE(667),
    [sym__type_name] = STATE(667),
    [anon_sym_LPAREN] = ACTIONS(431),
    [anon_sym_let] = ACTIONS(629),
    [anon_sym_var] = ACTIONS(629),
    [anon_sym_DOT] = ACTIONS(631),
    [anon_sym__] = ACTIONS(633),
    [anon_sym_is] = ACTIONS(635),
    [sym_identifier] = ACTIONS(647),
  },
  [134] = {
    [anon_sym_case] = ACTIONS(649),
    [anon_sym_let] = ACTIONS(649),
    [anon_sym_var] = ACTIONS(649),
    [anon_sym_RBRACE] = ACTIONS(649),
    [anon_sym_import] = ACTIONS(649),
    [anon_sym_typealias] = ACTIONS(649),
    [anon_sym_struct] = ACTIONS(649),
    [anon_sym_class] = ACTIONS(649),
    [anon_sym_enum] = ACTIONS(649),
    [anon_sym_protocol] = ACTIONS(649),
    [anon_sym_func] = ACTIONS(649),
    [anon_sym_indirect] = ACTIONS(649),
    [anon_sym_init] = ACTIONS(649),
    [anon_sym_deinit] = ACTIONS(649),
    [anon_sym_extension] = ACTIONS(649),
    [anon_sym_subscript] = ACTIONS(649),
    [anon_sym_prefix] = ACTIONS(649),
    [anon_sym_postfix] = ACTIONS(649),
    [anon_sym_infix] = ACTIONS(649),
  },
  [135] = {
    [anon_sym_case] = ACTIONS(651),
    [anon_sym_let] = ACTIONS(651),
    [anon_sym_var] = ACTIONS(651),
    [anon_sym_RBRACE] = ACTIONS(651),
    [anon_sym_import] = ACTIONS(651),
    [anon_sym_typealias] = ACTIONS(651),
    [anon_sym_struct] = ACTIONS(651),
    [anon_sym_class] = ACTIONS(651),
    [anon_sym_enum] = ACTIONS(651),
    [anon_sym_protocol] = ACTIONS(651),
    [anon_sym_func] = ACTIONS(651),
    [anon_sym_indirect] = ACTIONS(651),
    [anon_sym_init] = ACTIONS(651),
    [anon_sym_deinit] = ACTIONS(651),
    [anon_sym_extension] = ACTIONS(651),
    [anon_sym_subscript] = ACTIONS(651),
    [anon_sym_prefix] = ACTIONS(651),
    [anon_sym_postfix] = ACTIONS(651),
    [anon_sym_infix] = ACTIONS(651),
  },
  [136] = {
    [anon_sym_case] = ACTIONS(653),
    [anon_sym_let] = ACTIONS(653),
    [anon_sym_var] = ACTIONS(653),
    [anon_sym_RBRACE] = ACTIONS(653),
    [anon_sym_import] = ACTIONS(653),
    [anon_sym_typealias] = ACTIONS(653),
    [anon_sym_struct] = ACTIONS(653),
    [anon_sym_class] = ACTIONS(653),
    [anon_sym_enum] = ACTIONS(653),
    [anon_sym_protocol] = ACTIONS(653),
    [anon_sym_func] = ACTIONS(653),
    [anon_sym_indirect] = ACTIONS(653),
    [anon_sym_init] = ACTIONS(653),
    [anon_sym_deinit] = ACTIONS(653),
    [anon_sym_extension] = ACTIONS(653),
    [anon_sym_subscript] = ACTIONS(653),
    [anon_sym_prefix] = ACTIONS(653),
    [anon_sym_postfix] = ACTIONS(653),
    [anon_sym_infix] = ACTIONS(653),
  },
  [137] = {
    [anon_sym_case] = ACTIONS(655),
    [anon_sym_let] = ACTIONS(655),
    [anon_sym_var] = ACTIONS(655),
    [anon_sym_RBRACE] = ACTIONS(655),
    [anon_sym_import] = ACTIONS(655),
    [anon_sym_typealias] = ACTIONS(655),
    [anon_sym_struct] = ACTIONS(655),
    [anon_sym_class] = ACTIONS(655),
    [anon_sym_enum] = ACTIONS(655),
    [anon_sym_protocol] = ACTIONS(655),
    [anon_sym_func] = ACTIONS(655),
    [anon_sym_indirect] = ACTIONS(655),
    [anon_sym_init] = ACTIONS(655),
    [anon_sym_deinit] = ACTIONS(655),
    [anon_sym_extension] = ACTIONS(655),
    [anon_sym_subscript] = ACTIONS(655),
    [anon_sym_prefix] = ACTIONS(655),
    [anon_sym_postfix] = ACTIONS(655),
    [anon_sym_infix] = ACTIONS(655),
  },
  [138] = {
    [sym__pattern_initializer] = STATE(432),
    [sym__pattern] = STATE(222),
    [sym_wildcard_pattern] = STATE(222),
    [sym_value_binding_pattern] = STATE(222),
    [sym_tuple_pattern] = STATE(222),
    [sym_enum_case_pattern] = STATE(222),
    [sym_optional_pattern] = STATE(222),
    [sym_is_pattern] = STATE(222),
    [sym_as_pattern] = STATE(222),
    [sym__expression] = STATE(222),
    [sym__type_identifier] = STATE(646),
    [sym__type_name] = STATE(646),
    [anon_sym_LPAREN] = ACTIONS(601),
    [anon_sym_let] = ACTIONS(603),
    [anon_sym_var] = ACTIONS(603),
    [anon_sym_DOT] = ACTIONS(605),
    [anon_sym__] = ACTIONS(607),
    [anon_sym_is] = ACTIONS(609),
    [sym_identifier] = ACTIONS(657),
  },
  [139] = {
    [sym_optional_binding] = STATE(383),
    [sym__pattern] = STATE(386),
    [sym_wildcard_pattern] = STATE(386),
    [sym_value_binding_pattern] = STATE(386),
    [sym_tuple_pattern] = STATE(386),
    [sym_enum_case_pattern] = STATE(386),
    [sym_optional_pattern] = STATE(386),
    [sym_is_pattern] = STATE(386),
    [sym_as_pattern] = STATE(386),
    [sym__expression] = STATE(386),
    [sym__type_identifier] = STATE(675),
    [sym__type_name] = STATE(675),
    [anon_sym_LPAREN] = ACTIONS(446),
    [anon_sym_let] = ACTIONS(450),
    [anon_sym_var] = ACTIONS(450),
    [anon_sym_DOT] = ACTIONS(454),
    [anon_sym__] = ACTIONS(456),
    [anon_sym_is] = ACTIONS(458),
    [sym_identifier] = ACTIONS(460),
  },
  [140] = {
    [anon_sym_case] = ACTIONS(659),
    [anon_sym_let] = ACTIONS(659),
    [anon_sym_var] = ACTIONS(659),
    [anon_sym_RBRACE] = ACTIONS(659),
    [anon_sym_import] = ACTIONS(659),
    [anon_sym_typealias] = ACTIONS(659),
    [anon_sym_struct] = ACTIONS(659),
    [anon_sym_class] = ACTIONS(659),
    [anon_sym_enum] = ACTIONS(659),
    [anon_sym_protocol] = ACTIONS(659),
    [anon_sym_func] = ACTIONS(659),
    [anon_sym_indirect] = ACTIONS(659),
    [anon_sym_init] = ACTIONS(659),
    [anon_sym_deinit] = ACTIONS(659),
    [anon_sym_extension] = ACTIONS(659),
    [anon_sym_subscript] = ACTIONS(659),
    [anon_sym_prefix] = ACTIONS(659),
    [anon_sym_postfix] = ACTIONS(659),
    [anon_sym_infix] = ACTIONS(659),
  },
  [141] = {
    [anon_sym_case] = ACTIONS(661),
    [anon_sym_let] = ACTIONS(661),
    [anon_sym_var] = ACTIONS(661),
    [anon_sym_RBRACE] = ACTIONS(661),
    [anon_sym_import] = ACTIONS(661),
    [anon_sym_typealias] = ACTIONS(661),
    [anon_sym_struct] = ACTIONS(661),
    [anon_sym_class] = ACTIONS(661),
    [anon_sym_enum] = ACTIONS(661),
    [anon_sym_protocol] = ACTIONS(661),
    [anon_sym_func] = ACTIONS(661),
    [anon_sym_indirect] = ACTIONS(661),
    [anon_sym_init] = ACTIONS(661),
    [anon_sym_deinit] = ACTIONS(661),
    [anon_sym_extension] = ACTIONS(661),
    [anon_sym_subscript] = ACTIONS(661),
    [anon_sym_prefix] = ACTIONS(661),
    [anon_sym_postfix] = ACTIONS(661),
    [anon_sym_infix] = ACTIONS(661),
  },
  [142] = {
    [anon_sym_case] = ACTIONS(663),
    [anon_sym_let] = ACTIONS(663),
    [anon_sym_var] = ACTIONS(663),
    [anon_sym_RBRACE] = ACTIONS(663),
    [anon_sym_import] = ACTIONS(663),
    [anon_sym_typealias] = ACTIONS(663),
    [anon_sym_struct] = ACTIONS(663),
    [anon_sym_class] = ACTIONS(663),
    [anon_sym_enum] = ACTIONS(663),
    [anon_sym_protocol] = ACTIONS(663),
    [anon_sym_func] = ACTIONS(663),
    [anon_sym_indirect] = ACTIONS(663),
    [anon_sym_init] = ACTIONS(663),
    [anon_sym_deinit] = ACTIONS(663),
    [anon_sym_extension] = ACTIONS(663),
    [anon_sym_subscript] = ACTIONS(663),
    [anon_sym_prefix] = ACTIONS(663),
    [anon_sym_postfix] = ACTIONS(663),
    [anon_sym_infix] = ACTIONS(663),
  },
  [143] = {
    [anon_sym_case] = ACTIONS(665),
    [anon_sym_let] = ACTIONS(665),
    [anon_sym_var] = ACTIONS(665),
    [anon_sym_RBRACE] = ACTIONS(665),
    [anon_sym_import] = ACTIONS(665),
    [anon_sym_typealias] = ACTIONS(665),
    [anon_sym_struct] = ACTIONS(665),
    [anon_sym_class] = ACTIONS(665),
    [anon_sym_enum] = ACTIONS(665),
    [anon_sym_protocol] = ACTIONS(665),
    [anon_sym_func] = ACTIONS(665),
    [anon_sym_indirect] = ACTIONS(665),
    [anon_sym_init] = ACTIONS(665),
    [anon_sym_deinit] = ACTIONS(665),
    [anon_sym_extension] = ACTIONS(665),
    [anon_sym_subscript] = ACTIONS(665),
    [anon_sym_prefix] = ACTIONS(665),
    [anon_sym_postfix] = ACTIONS(665),
    [anon_sym_infix] = ACTIONS(665),
  },
  [144] = {
    [anon_sym_case] = ACTIONS(667),
    [anon_sym_let] = ACTIONS(667),
    [anon_sym_var] = ACTIONS(667),
    [anon_sym_RBRACE] = ACTIONS(667),
    [anon_sym_import] = ACTIONS(667),
    [anon_sym_typealias] = ACTIONS(667),
    [anon_sym_struct] = ACTIONS(667),
    [anon_sym_class] = ACTIONS(667),
    [anon_sym_enum] = ACTIONS(667),
    [anon_sym_protocol] = ACTIONS(667),
    [anon_sym_func] = ACTIONS(667),
    [anon_sym_indirect] = ACTIONS(667),
    [anon_sym_init] = ACTIONS(667),
    [anon_sym_deinit] = ACTIONS(667),
    [anon_sym_extension] = ACTIONS(667),
    [anon_sym_subscript] = ACTIONS(667),
    [anon_sym_prefix] = ACTIONS(667),
    [anon_sym_postfix] = ACTIONS(667),
    [anon_sym_infix] = ACTIONS(667),
  },
  [145] = {
    [sym__pattern_initializer] = STATE(95),
    [sym__pattern] = STATE(66),
    [sym_wildcard_pattern] = STATE(66),
    [sym_value_binding_pattern] = STATE(66),
    [sym_tuple_pattern] = STATE(66),
    [sym_enum_case_pattern] = STATE(66),
    [sym_optional_pattern] = STATE(66),
    [sym_is_pattern] = STATE(66),
    [sym_as_pattern] = STATE(66),
    [sym__expression] = STATE(66),
    [sym__type_identifier] = STATE(667),
    [sym__type_name] = STATE(667),
    [anon_sym_LPAREN] = ACTIONS(431),
    [anon_sym_let] = ACTIONS(629),
    [anon_sym_var] = ACTIONS(629),
    [anon_sym_DOT] = ACTIONS(631),
    [anon_sym__] = ACTIONS(633),
    [anon_sym_is] = ACTIONS(635),
    [sym_identifier] = ACTIONS(647),
  },
  [146] = {
    [anon_sym_case] = ACTIONS(669),
    [anon_sym_let] = ACTIONS(669),
    [anon_sym_var] = ACTIONS(669),
    [anon_sym_RBRACE] = ACTIONS(669),
    [anon_sym_import] = ACTIONS(669),
    [anon_sym_typealias] = ACTIONS(669),
    [anon_sym_struct] = ACTIONS(669),
    [anon_sym_class] = ACTIONS(669),
    [anon_sym_enum] = ACTIONS(669),
    [anon_sym_protocol] = ACTIONS(669),
    [anon_sym_func] = ACTIONS(669),
    [anon_sym_indirect] = ACTIONS(669),
    [anon_sym_init] = ACTIONS(669),
    [anon_sym_deinit] = ACTIONS(669),
    [anon_sym_extension] = ACTIONS(669),
    [anon_sym_subscript] = ACTIONS(669),
    [anon_sym_prefix] = ACTIONS(669),
    [anon_sym_postfix] = ACTIONS(669),
    [anon_sym_infix] = ACTIONS(669),
  },
  [147] = {
    [sym_optional_binding] = STATE(307),
    [sym__pattern] = STATE(386),
    [sym_wildcard_pattern] = STATE(386),
    [sym_value_binding_pattern] = STATE(386),
    [sym_tuple_pattern] = STATE(386),
    [sym_enum_case_pattern] = STATE(386),
    [sym_optional_pattern] = STATE(386),
    [sym_is_pattern] = STATE(386),
    [sym_as_pattern] = STATE(386),
    [sym__expression] = STATE(386),
    [sym__type_identifier] = STATE(675),
    [sym__type_name] = STATE(675),
    [anon_sym_LPAREN] = ACTIONS(446),
    [anon_sym_let] = ACTIONS(450),
    [anon_sym_var] = ACTIONS(450),
    [anon_sym_DOT] = ACTIONS(454),
    [anon_sym__] = ACTIONS(456),
    [anon_sym_is] = ACTIONS(458),
    [sym_identifier] = ACTIONS(460),
  },
  [148] = {
    [anon_sym_case] = ACTIONS(671),
    [anon_sym_let] = ACTIONS(671),
    [anon_sym_var] = ACTIONS(671),
    [anon_sym_RBRACE] = ACTIONS(671),
    [anon_sym_import] = ACTIONS(671),
    [anon_sym_typealias] = ACTIONS(671),
    [anon_sym_struct] = ACTIONS(671),
    [anon_sym_class] = ACTIONS(671),
    [anon_sym_enum] = ACTIONS(671),
    [anon_sym_protocol] = ACTIONS(671),
    [anon_sym_func] = ACTIONS(671),
    [anon_sym_indirect] = ACTIONS(671),
    [anon_sym_init] = ACTIONS(671),
    [anon_sym_deinit] = ACTIONS(671),
    [anon_sym_extension] = ACTIONS(671),
    [anon_sym_subscript] = ACTIONS(671),
    [anon_sym_prefix] = ACTIONS(671),
    [anon_sym_postfix] = ACTIONS(671),
    [anon_sym_infix] = ACTIONS(671),
  },
  [149] = {
    [anon_sym_case] = ACTIONS(673),
    [anon_sym_let] = ACTIONS(673),
    [anon_sym_var] = ACTIONS(673),
    [anon_sym_RBRACE] = ACTIONS(673),
    [anon_sym_import] = ACTIONS(673),
    [anon_sym_typealias] = ACTIONS(673),
    [anon_sym_struct] = ACTIONS(673),
    [anon_sym_class] = ACTIONS(673),
    [anon_sym_enum] = ACTIONS(673),
    [anon_sym_protocol] = ACTIONS(673),
    [anon_sym_func] = ACTIONS(673),
    [anon_sym_indirect] = ACTIONS(673),
    [anon_sym_init] = ACTIONS(673),
    [anon_sym_deinit] = ACTIONS(673),
    [anon_sym_extension] = ACTIONS(673),
    [anon_sym_subscript] = ACTIONS(673),
    [anon_sym_prefix] = ACTIONS(673),
    [anon_sym_postfix] = ACTIONS(673),
    [anon_sym_infix] = ACTIONS(673),
  },
  [150] = {
    [anon_sym_case] = ACTIONS(675),
    [anon_sym_let] = ACTIONS(675),
    [anon_sym_var] = ACTIONS(675),
    [anon_sym_RBRACE] = ACTIONS(675),
    [anon_sym_import] = ACTIONS(675),
    [anon_sym_typealias] = ACTIONS(675),
    [anon_sym_struct] = ACTIONS(675),
    [anon_sym_class] = ACTIONS(675),
    [anon_sym_enum] = ACTIONS(675),
    [anon_sym_protocol] = ACTIONS(675),
    [anon_sym_func] = ACTIONS(675),
    [anon_sym_indirect] = ACTIONS(675),
    [anon_sym_init] = ACTIONS(675),
    [anon_sym_deinit] = ACTIONS(675),
    [anon_sym_extension] = ACTIONS(675),
    [anon_sym_subscript] = ACTIONS(675),
    [anon_sym_prefix] = ACTIONS(675),
    [anon_sym_postfix] = ACTIONS(675),
    [anon_sym_infix] = ACTIONS(675),
  },
  [151] = {
    [anon_sym_case] = ACTIONS(677),
    [anon_sym_let] = ACTIONS(677),
    [anon_sym_var] = ACTIONS(677),
    [anon_sym_RBRACE] = ACTIONS(677),
    [anon_sym_import] = ACTIONS(677),
    [anon_sym_typealias] = ACTIONS(677),
    [anon_sym_struct] = ACTIONS(677),
    [anon_sym_class] = ACTIONS(677),
    [anon_sym_enum] = ACTIONS(677),
    [anon_sym_protocol] = ACTIONS(677),
    [anon_sym_func] = ACTIONS(677),
    [anon_sym_indirect] = ACTIONS(677),
    [anon_sym_init] = ACTIONS(677),
    [anon_sym_deinit] = ACTIONS(677),
    [anon_sym_extension] = ACTIONS(677),
    [anon_sym_subscript] = ACTIONS(677),
    [anon_sym_prefix] = ACTIONS(677),
    [anon_sym_postfix] = ACTIONS(677),
    [anon_sym_infix] = ACTIONS(677),
  },
  [152] = {
    [anon_sym_case] = ACTIONS(545),
    [anon_sym_let] = ACTIONS(545),
    [anon_sym_var] = ACTIONS(545),
    [anon_sym_RBRACE] = ACTIONS(545),
    [anon_sym_import] = ACTIONS(545),
    [anon_sym_typealias] = ACTIONS(545),
    [anon_sym_struct] = ACTIONS(545),
    [anon_sym_class] = ACTIONS(545),
    [anon_sym_enum] = ACTIONS(545),
    [anon_sym_protocol] = ACTIONS(545),
    [anon_sym_func] = ACTIONS(545),
    [anon_sym_indirect] = ACTIONS(545),
    [anon_sym_init] = ACTIONS(545),
    [anon_sym_deinit] = ACTIONS(545),
    [anon_sym_extension] = ACTIONS(545),
    [anon_sym_subscript] = ACTIONS(545),
    [anon_sym_prefix] = ACTIONS(545),
    [anon_sym_postfix] = ACTIONS(545),
    [anon_sym_infix] = ACTIONS(545),
  },
  [153] = {
    [anon_sym_case] = ACTIONS(679),
    [anon_sym_let] = ACTIONS(679),
    [anon_sym_var] = ACTIONS(679),
    [anon_sym_RBRACE] = ACTIONS(679),
    [anon_sym_import] = ACTIONS(679),
    [anon_sym_typealias] = ACTIONS(679),
    [anon_sym_struct] = ACTIONS(679),
    [anon_sym_class] = ACTIONS(679),
    [anon_sym_enum] = ACTIONS(679),
    [anon_sym_protocol] = ACTIONS(679),
    [anon_sym_func] = ACTIONS(679),
    [anon_sym_indirect] = ACTIONS(679),
    [anon_sym_init] = ACTIONS(679),
    [anon_sym_deinit] = ACTIONS(679),
    [anon_sym_extension] = ACTIONS(679),
    [anon_sym_subscript] = ACTIONS(679),
    [anon_sym_prefix] = ACTIONS(679),
    [anon_sym_postfix] = ACTIONS(679),
    [anon_sym_infix] = ACTIONS(679),
  },
  [154] = {
    [anon_sym_case] = ACTIONS(681),
    [anon_sym_let] = ACTIONS(681),
    [anon_sym_var] = ACTIONS(681),
    [anon_sym_RBRACE] = ACTIONS(681),
    [anon_sym_import] = ACTIONS(681),
    [anon_sym_typealias] = ACTIONS(681),
    [anon_sym_struct] = ACTIONS(681),
    [anon_sym_class] = ACTIONS(681),
    [anon_sym_enum] = ACTIONS(681),
    [anon_sym_protocol] = ACTIONS(681),
    [anon_sym_func] = ACTIONS(681),
    [anon_sym_indirect] = ACTIONS(681),
    [anon_sym_init] = ACTIONS(681),
    [anon_sym_deinit] = ACTIONS(681),
    [anon_sym_extension] = ACTIONS(681),
    [anon_sym_subscript] = ACTIONS(681),
    [anon_sym_prefix] = ACTIONS(681),
    [anon_sym_postfix] = ACTIONS(681),
    [anon_sym_infix] = ACTIONS(681),
  },
  [155] = {
    [anon_sym_case] = ACTIONS(683),
    [anon_sym_let] = ACTIONS(683),
    [anon_sym_var] = ACTIONS(683),
    [anon_sym_RBRACE] = ACTIONS(683),
    [anon_sym_import] = ACTIONS(683),
    [anon_sym_typealias] = ACTIONS(683),
    [anon_sym_struct] = ACTIONS(683),
    [anon_sym_class] = ACTIONS(683),
    [anon_sym_enum] = ACTIONS(683),
    [anon_sym_protocol] = ACTIONS(683),
    [anon_sym_func] = ACTIONS(683),
    [anon_sym_indirect] = ACTIONS(683),
    [anon_sym_init] = ACTIONS(683),
    [anon_sym_deinit] = ACTIONS(683),
    [anon_sym_extension] = ACTIONS(683),
    [anon_sym_subscript] = ACTIONS(683),
    [anon_sym_prefix] = ACTIONS(683),
    [anon_sym_postfix] = ACTIONS(683),
    [anon_sym_infix] = ACTIONS(683),
  },
  [156] = {
    [sym__pattern_initializer] = STATE(316),
    [sym__pattern] = STATE(222),
    [sym_wildcard_pattern] = STATE(222),
    [sym_value_binding_pattern] = STATE(222),
    [sym_tuple_pattern] = STATE(222),
    [sym_enum_case_pattern] = STATE(222),
    [sym_optional_pattern] = STATE(222),
    [sym_is_pattern] = STATE(222),
    [sym_as_pattern] = STATE(222),
    [sym__expression] = STATE(222),
    [sym__type_identifier] = STATE(646),
    [sym__type_name] = STATE(646),
    [anon_sym_LPAREN] = ACTIONS(601),
    [anon_sym_let] = ACTIONS(603),
    [anon_sym_var] = ACTIONS(603),
    [anon_sym_DOT] = ACTIONS(605),
    [anon_sym__] = ACTIONS(607),
    [anon_sym_is] = ACTIONS(609),
    [sym_identifier] = ACTIONS(657),
  },
  [157] = {
    [sym__pattern] = STATE(365),
    [sym_wildcard_pattern] = STATE(365),
    [sym_value_binding_pattern] = STATE(365),
    [sym_tuple_pattern] = STATE(365),
    [sym_enum_case_pattern] = STATE(365),
    [sym_optional_pattern] = STATE(365),
    [sym_is_pattern] = STATE(365),
    [sym_as_pattern] = STATE(365),
    [sym__expression] = STATE(365),
    [sym__type_identifier] = STATE(675),
    [sym__type_name] = STATE(675),
    [anon_sym_LPAREN] = ACTIONS(446),
    [anon_sym_let] = ACTIONS(450),
    [anon_sym_var] = ACTIONS(450),
    [anon_sym_DOT] = ACTIONS(454),
    [anon_sym__] = ACTIONS(456),
    [anon_sym_is] = ACTIONS(458),
    [sym_identifier] = ACTIONS(460),
  },
  [158] = {
    [sym__pattern] = STATE(82),
    [sym_wildcard_pattern] = STATE(82),
    [sym_value_binding_pattern] = STATE(82),
    [sym_tuple_pattern] = STATE(82),
    [sym_enum_case_pattern] = STATE(82),
    [sym_optional_pattern] = STATE(82),
    [sym_is_pattern] = STATE(82),
    [sym_as_pattern] = STATE(82),
    [sym__expression] = STATE(82),
    [sym__type_identifier] = STATE(667),
    [sym__type_name] = STATE(667),
    [anon_sym_LPAREN] = ACTIONS(431),
    [anon_sym_let] = ACTIONS(629),
    [anon_sym_var] = ACTIONS(629),
    [anon_sym_DOT] = ACTIONS(631),
    [anon_sym__] = ACTIONS(633),
    [anon_sym_is] = ACTIONS(635),
    [sym_identifier] = ACTIONS(647),
  },
  [159] = {
    [sym__pattern] = STATE(299),
    [sym_wildcard_pattern] = STATE(299),
    [sym_value_binding_pattern] = STATE(299),
    [sym_tuple_pattern] = STATE(299),
    [sym_enum_case_pattern] = STATE(299),
    [sym_optional_pattern] = STATE(299),
    [sym_is_pattern] = STATE(299),
    [sym_as_pattern] = STATE(299),
    [sym__expression] = STATE(299),
    [sym__type_identifier] = STATE(675),
    [sym__type_name] = STATE(675),
    [anon_sym_LPAREN] = ACTIONS(446),
    [anon_sym_let] = ACTIONS(450),
    [anon_sym_var] = ACTIONS(450),
    [anon_sym_DOT] = ACTIONS(454),
    [anon_sym__] = ACTIONS(456),
    [anon_sym_is] = ACTIONS(458),
    [sym_identifier] = ACTIONS(460),
  },
  [160] = {
    [sym__pattern] = STATE(334),
    [sym_wildcard_pattern] = STATE(334),
    [sym_value_binding_pattern] = STATE(334),
    [sym_tuple_pattern] = STATE(334),
    [sym_enum_case_pattern] = STATE(334),
    [sym_optional_pattern] = STATE(334),
    [sym_is_pattern] = STATE(334),
    [sym_as_pattern] = STATE(334),
    [sym__expression] = STATE(334),
    [sym__type_identifier] = STATE(675),
    [sym__type_name] = STATE(675),
    [anon_sym_LPAREN] = ACTIONS(446),
    [anon_sym_let] = ACTIONS(450),
    [anon_sym_var] = ACTIONS(450),
    [anon_sym_DOT] = ACTIONS(454),
    [anon_sym__] = ACTIONS(456),
    [anon_sym_is] = ACTIONS(458),
    [sym_identifier] = ACTIONS(460),
  },
  [161] = {
    [sym__pattern] = STATE(240),
    [sym_wildcard_pattern] = STATE(240),
    [sym_value_binding_pattern] = STATE(240),
    [sym_tuple_pattern] = STATE(240),
    [sym_enum_case_pattern] = STATE(240),
    [sym_optional_pattern] = STATE(240),
    [sym_is_pattern] = STATE(240),
    [sym_as_pattern] = STATE(240),
    [sym__expression] = STATE(240),
    [sym__type_identifier] = STATE(646),
    [sym__type_name] = STATE(646),
    [anon_sym_LPAREN] = ACTIONS(601),
    [anon_sym_let] = ACTIONS(603),
    [anon_sym_var] = ACTIONS(603),
    [anon_sym_DOT] = ACTIONS(605),
    [anon_sym__] = ACTIONS(607),
    [anon_sym_is] = ACTIONS(609),
    [sym_identifier] = ACTIONS(657),
  },
  [162] = {
    [sym__pattern] = STATE(292),
    [sym_wildcard_pattern] = STATE(292),
    [sym_value_binding_pattern] = STATE(292),
    [sym_tuple_pattern] = STATE(292),
    [sym_enum_case_pattern] = STATE(292),
    [sym_optional_pattern] = STATE(292),
    [sym_is_pattern] = STATE(292),
    [sym_as_pattern] = STATE(292),
    [sym__expression] = STATE(292),
    [sym__type_identifier] = STATE(675),
    [sym__type_name] = STATE(675),
    [anon_sym_LPAREN] = ACTIONS(446),
    [anon_sym_let] = ACTIONS(450),
    [anon_sym_var] = ACTIONS(450),
    [anon_sym_DOT] = ACTIONS(454),
    [anon_sym__] = ACTIONS(456),
    [anon_sym_is] = ACTIONS(458),
    [sym_identifier] = ACTIONS(460),
  },
  [163] = {
    [sym__pattern] = STATE(381),
    [sym_wildcard_pattern] = STATE(381),
    [sym_value_binding_pattern] = STATE(381),
    [sym_tuple_pattern] = STATE(381),
    [sym_enum_case_pattern] = STATE(381),
    [sym_optional_pattern] = STATE(381),
    [sym_is_pattern] = STATE(381),
    [sym_as_pattern] = STATE(381),
    [sym__expression] = STATE(381),
    [sym__type_identifier] = STATE(675),
    [sym__type_name] = STATE(675),
    [anon_sym_LPAREN] = ACTIONS(446),
    [anon_sym_let] = ACTIONS(450),
    [anon_sym_var] = ACTIONS(450),
    [anon_sym_DOT] = ACTIONS(454),
    [anon_sym__] = ACTIONS(456),
    [anon_sym_is] = ACTIONS(458),
    [sym_identifier] = ACTIONS(460),
  },
  [164] = {
    [sym__pattern] = STATE(189),
    [sym_wildcard_pattern] = STATE(189),
    [sym_value_binding_pattern] = STATE(189),
    [sym_tuple_pattern] = STATE(189),
    [sym_enum_case_pattern] = STATE(189),
    [sym_optional_pattern] = STATE(189),
    [sym_is_pattern] = STATE(189),
    [sym_as_pattern] = STATE(189),
    [sym__expression] = STATE(189),
    [sym__type_identifier] = STATE(675),
    [sym__type_name] = STATE(675),
    [anon_sym_LPAREN] = ACTIONS(685),
    [anon_sym_let] = ACTIONS(688),
    [anon_sym_var] = ACTIONS(688),
    [anon_sym_DOT] = ACTIONS(691),
    [anon_sym__] = ACTIONS(694),
    [anon_sym_is] = ACTIONS(697),
    [sym_identifier] = ACTIONS(700),
  },
  [165] = {
    [sym__pattern] = STATE(189),
    [sym_wildcard_pattern] = STATE(189),
    [sym_value_binding_pattern] = STATE(189),
    [sym_tuple_pattern] = STATE(189),
    [sym_enum_case_pattern] = STATE(189),
    [sym_optional_pattern] = STATE(189),
    [sym_is_pattern] = STATE(189),
    [sym_as_pattern] = STATE(189),
    [sym__expression] = STATE(189),
    [sym__type_identifier] = STATE(675),
    [sym__type_name] = STATE(675),
    [anon_sym_LPAREN] = ACTIONS(446),
    [anon_sym_let] = ACTIONS(450),
    [anon_sym_var] = ACTIONS(450),
    [anon_sym_DOT] = ACTIONS(454),
    [anon_sym__] = ACTIONS(456),
    [anon_sym_is] = ACTIONS(458),
    [sym_identifier] = ACTIONS(460),
  },
  [166] = {
    [sym__variable_declaration_head] = STATE(652),
    [sym__typealias_head] = STATE(238),
    [sym__function_head] = STATE(333),
    [sym_protocol_variable_declaration] = STATE(170),
    [sym_protocol_method_declaration] = STATE(170),
    [sym_protocol_initializer_declaration] = STATE(170),
    [sym_protocol_subscript_declaration] = STATE(170),
    [sym_protocol_associated_type_declaration] = STATE(170),
    [sym__initializer_head] = STATE(511),
    [sym__subscript_head] = STATE(510),
    [aux_sym_protocol_declaration_repeat1] = STATE(170),
    [anon_sym_var] = ACTIONS(703),
    [anon_sym_RBRACE] = ACTIONS(705),
    [anon_sym_typealias] = ACTIONS(246),
    [anon_sym_func] = ACTIONS(256),
    [anon_sym_init] = ACTIONS(260),
    [anon_sym_subscript] = ACTIONS(266),
  },
  [167] = {
    [sym__variable_declaration_head] = STATE(652),
    [sym__typealias_head] = STATE(238),
    [sym__function_head] = STATE(333),
    [sym_protocol_variable_declaration] = STATE(167),
    [sym_protocol_method_declaration] = STATE(167),
    [sym_protocol_initializer_declaration] = STATE(167),
    [sym_protocol_subscript_declaration] = STATE(167),
    [sym_protocol_associated_type_declaration] = STATE(167),
    [sym__initializer_head] = STATE(511),
    [sym__subscript_head] = STATE(510),
    [aux_sym_protocol_declaration_repeat1] = STATE(167),
    [anon_sym_var] = ACTIONS(707),
    [anon_sym_RBRACE] = ACTIONS(710),
    [anon_sym_typealias] = ACTIONS(712),
    [anon_sym_func] = ACTIONS(715),
    [anon_sym_init] = ACTIONS(718),
    [anon_sym_subscript] = ACTIONS(721),
  },
  [168] = {
    [sym__variable_declaration_head] = STATE(652),
    [sym__typealias_head] = STATE(238),
    [sym__function_head] = STATE(333),
    [sym_protocol_variable_declaration] = STATE(169),
    [sym_protocol_method_declaration] = STATE(169),
    [sym_protocol_initializer_declaration] = STATE(169),
    [sym_protocol_subscript_declaration] = STATE(169),
    [sym_protocol_associated_type_declaration] = STATE(169),
    [sym__initializer_head] = STATE(511),
    [sym__subscript_head] = STATE(510),
    [aux_sym_protocol_declaration_repeat1] = STATE(169),
    [anon_sym_var] = ACTIONS(703),
    [anon_sym_RBRACE] = ACTIONS(724),
    [anon_sym_typealias] = ACTIONS(246),
    [anon_sym_func] = ACTIONS(256),
    [anon_sym_init] = ACTIONS(260),
    [anon_sym_subscript] = ACTIONS(266),
  },
  [169] = {
    [sym__variable_declaration_head] = STATE(652),
    [sym__typealias_head] = STATE(238),
    [sym__function_head] = STATE(333),
    [sym_protocol_variable_declaration] = STATE(167),
    [sym_protocol_method_declaration] = STATE(167),
    [sym_protocol_initializer_declaration] = STATE(167),
    [sym_protocol_subscript_declaration] = STATE(167),
    [sym_protocol_associated_type_declaration] = STATE(167),
    [sym__initializer_head] = STATE(511),
    [sym__subscript_head] = STATE(510),
    [aux_sym_protocol_declaration_repeat1] = STATE(167),
    [anon_sym_var] = ACTIONS(703),
    [anon_sym_RBRACE] = ACTIONS(726),
    [anon_sym_typealias] = ACTIONS(246),
    [anon_sym_func] = ACTIONS(256),
    [anon_sym_init] = ACTIONS(260),
    [anon_sym_subscript] = ACTIONS(266),
  },
  [170] = {
    [sym__variable_declaration_head] = STATE(652),
    [sym__typealias_head] = STATE(238),
    [sym__function_head] = STATE(333),
    [sym_protocol_variable_declaration] = STATE(167),
    [sym_protocol_method_declaration] = STATE(167),
    [sym_protocol_initializer_declaration] = STATE(167),
    [sym_protocol_subscript_declaration] = STATE(167),
    [sym_protocol_associated_type_declaration] = STATE(167),
    [sym__initializer_head] = STATE(511),
    [sym__subscript_head] = STATE(510),
    [aux_sym_protocol_declaration_repeat1] = STATE(167),
    [anon_sym_var] = ACTIONS(703),
    [anon_sym_RBRACE] = ACTIONS(728),
    [anon_sym_typealias] = ACTIONS(246),
    [anon_sym_func] = ACTIONS(256),
    [anon_sym_init] = ACTIONS(260),
    [anon_sym_subscript] = ACTIONS(266),
  },
  [171] = {
    [sym__condition_clause] = STATE(495),
    [sym__condition] = STATE(304),
    [sym_availability_condition] = STATE(378),
    [sym_case_condition] = STATE(304),
    [sym_optional_binding_condition] = STATE(304),
    [sym__expression] = STATE(457),
    [anon_sym_case] = ACTIONS(730),
    [anon_sym_POUNDavailable] = ACTIONS(732),
    [anon_sym_let] = ACTIONS(734),
    [anon_sym_var] = ACTIONS(734),
    [sym_identifier] = ACTIONS(736),
  },
  [172] = {
    [anon_sym_SEMI] = ACTIONS(435),
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_in] = ACTIONS(435),
    [anon_sym_COMMA] = ACTIONS(435),
    [anon_sym_EQ] = ACTIONS(435),
    [anon_sym_LBRACE] = ACTIONS(435),
    [anon_sym_COLON] = ACTIONS(435),
    [anon_sym_DOT] = ACTIONS(738),
    [anon_sym_QMARK] = ACTIONS(435),
    [anon_sym_as] = ACTIONS(435),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(435),
  },
  [173] = {
    [sym__condition_clause] = STATE(482),
    [sym__condition] = STATE(304),
    [sym_availability_condition] = STATE(378),
    [sym_case_condition] = STATE(304),
    [sym_optional_binding_condition] = STATE(304),
    [sym__expression] = STATE(457),
    [anon_sym_case] = ACTIONS(730),
    [anon_sym_POUNDavailable] = ACTIONS(732),
    [anon_sym_let] = ACTIONS(734),
    [anon_sym_var] = ACTIONS(734),
    [sym_identifier] = ACTIONS(736),
  },
  [174] = {
    [sym_tuple_pattern] = STATE(209),
    [anon_sym_SEMI] = ACTIONS(462),
    [anon_sym_LPAREN] = ACTIONS(446),
    [anon_sym_RPAREN] = ACTIONS(462),
    [anon_sym_in] = ACTIONS(462),
    [anon_sym_COMMA] = ACTIONS(462),
    [anon_sym_EQ] = ACTIONS(462),
    [anon_sym_LBRACE] = ACTIONS(462),
    [anon_sym_COLON] = ACTIONS(462),
    [anon_sym_QMARK] = ACTIONS(462),
    [anon_sym_as] = ACTIONS(462),
  },
  [175] = {
    [sym__condition_clause] = STATE(664),
    [sym__condition] = STATE(304),
    [sym_availability_condition] = STATE(378),
    [sym_case_condition] = STATE(304),
    [sym_optional_binding_condition] = STATE(304),
    [sym__expression] = STATE(457),
    [anon_sym_case] = ACTIONS(730),
    [anon_sym_POUNDavailable] = ACTIONS(732),
    [anon_sym_let] = ACTIONS(734),
    [anon_sym_var] = ACTIONS(734),
    [sym_identifier] = ACTIONS(736),
  },
  [176] = {
    [sym_tuple_pattern] = STATE(203),
    [anon_sym_SEMI] = ACTIONS(433),
    [anon_sym_LPAREN] = ACTIONS(446),
    [anon_sym_RPAREN] = ACTIONS(433),
    [anon_sym_in] = ACTIONS(433),
    [anon_sym_COMMA] = ACTIONS(433),
    [anon_sym_EQ] = ACTIONS(433),
    [anon_sym_LBRACE] = ACTIONS(433),
    [anon_sym_COLON] = ACTIONS(433),
    [anon_sym_QMARK] = ACTIONS(433),
    [anon_sym_as] = ACTIONS(433),
  },
  [177] = {
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(497),
    [anon_sym_in] = ACTIONS(497),
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_EQ] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_COLON] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(740),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_as] = ACTIONS(497),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(497),
  },
  [178] = {
    [sym__loop_statement] = STATE(555),
    [sym_for_statement] = STATE(555),
    [sym_for_in_statement] = STATE(555),
    [sym_while_statement] = STATE(555),
    [sym_repeat_while_statement] = STATE(555),
    [sym_if_statement] = STATE(555),
    [anon_sym_for] = ACTIONS(742),
    [anon_sym_while] = ACTIONS(744),
    [anon_sym_repeat] = ACTIONS(746),
    [anon_sym_if] = ACTIONS(748),
  },
  [179] = {
    [anon_sym_SEMI] = ACTIONS(493),
    [anon_sym_RPAREN] = ACTIONS(493),
    [anon_sym_in] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(493),
    [anon_sym_EQ] = ACTIONS(493),
    [anon_sym_LBRACE] = ACTIONS(493),
    [anon_sym_COLON] = ACTIONS(493),
    [anon_sym_QMARK] = ACTIONS(493),
    [anon_sym_as] = ACTIONS(493),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(493),
  },
  [180] = {
    [anon_sym_SEMI] = ACTIONS(503),
    [anon_sym_RPAREN] = ACTIONS(503),
    [anon_sym_in] = ACTIONS(503),
    [anon_sym_COMMA] = ACTIONS(503),
    [anon_sym_EQ] = ACTIONS(503),
    [anon_sym_LBRACE] = ACTIONS(503),
    [anon_sym_COLON] = ACTIONS(503),
    [anon_sym_QMARK] = ACTIONS(503),
    [anon_sym_as] = ACTIONS(503),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(503),
  },
  [181] = {
    [anon_sym_SEMI] = ACTIONS(472),
    [anon_sym_RPAREN] = ACTIONS(472),
    [anon_sym_in] = ACTIONS(472),
    [anon_sym_COMMA] = ACTIONS(472),
    [anon_sym_EQ] = ACTIONS(472),
    [anon_sym_LBRACE] = ACTIONS(472),
    [anon_sym_COLON] = ACTIONS(472),
    [anon_sym_DOT] = ACTIONS(477),
    [anon_sym_QMARK] = ACTIONS(472),
    [anon_sym_as] = ACTIONS(472),
  },
  [182] = {
    [anon_sym_SEMI] = ACTIONS(505),
    [anon_sym_RPAREN] = ACTIONS(505),
    [anon_sym_in] = ACTIONS(505),
    [anon_sym_COMMA] = ACTIONS(505),
    [anon_sym_EQ] = ACTIONS(505),
    [anon_sym_LBRACE] = ACTIONS(505),
    [anon_sym_COLON] = ACTIONS(505),
    [anon_sym_QMARK] = ACTIONS(505),
    [anon_sym_as] = ACTIONS(505),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(505),
  },
  [183] = {
    [anon_sym_SEMI] = ACTIONS(501),
    [anon_sym_RPAREN] = ACTIONS(501),
    [anon_sym_in] = ACTIONS(501),
    [anon_sym_COMMA] = ACTIONS(501),
    [anon_sym_EQ] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_COLON] = ACTIONS(501),
    [anon_sym_QMARK] = ACTIONS(501),
    [anon_sym_as] = ACTIONS(501),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(501),
  },
  [184] = {
    [anon_sym_SEMI] = ACTIONS(507),
    [anon_sym_RPAREN] = ACTIONS(507),
    [anon_sym_in] = ACTIONS(507),
    [anon_sym_COMMA] = ACTIONS(507),
    [anon_sym_EQ] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(507),
    [anon_sym_COLON] = ACTIONS(507),
    [anon_sym_QMARK] = ACTIONS(507),
    [anon_sym_as] = ACTIONS(507),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(507),
  },
  [185] = {
    [anon_sym_SEMI] = ACTIONS(495),
    [anon_sym_RPAREN] = ACTIONS(495),
    [anon_sym_in] = ACTIONS(495),
    [anon_sym_COMMA] = ACTIONS(495),
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_LBRACE] = ACTIONS(495),
    [anon_sym_COLON] = ACTIONS(495),
    [anon_sym_QMARK] = ACTIONS(495),
    [anon_sym_as] = ACTIONS(495),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(495),
  },
  [186] = {
    [anon_sym_SEMI] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(499),
    [anon_sym_in] = ACTIONS(499),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_EQ] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(499),
    [anon_sym_COLON] = ACTIONS(499),
    [anon_sym_QMARK] = ACTIONS(499),
    [anon_sym_as] = ACTIONS(499),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(499),
  },
  [187] = {
    [sym_tuple_pattern] = STATE(232),
    [anon_sym_SEMI] = ACTIONS(750),
    [aux_sym__statement_token1] = ACTIONS(433),
    [anon_sym_LPAREN] = ACTIONS(752),
    [anon_sym_COMMA] = ACTIONS(750),
    [anon_sym_EQ] = ACTIONS(750),
    [anon_sym_COLON] = ACTIONS(750),
    [anon_sym_QMARK] = ACTIONS(750),
    [anon_sym_as] = ACTIONS(750),
  },
  [188] = {
    [sym__parameter_clause] = STATE(188),
    [aux_sym__function_signature_repeat1] = STATE(188),
    [anon_sym_SEMI] = ACTIONS(754),
    [aux_sym__statement_token1] = ACTIONS(442),
    [anon_sym_LPAREN] = ACTIONS(756),
    [anon_sym_LBRACE] = ACTIONS(754),
    [anon_sym_throws] = ACTIONS(754),
    [anon_sym_rethrows] = ACTIONS(754),
    [anon_sym_DASH_GT] = ACTIONS(754),
  },
  [189] = {
    [anon_sym_SEMI] = ACTIONS(521),
    [anon_sym_RPAREN] = ACTIONS(521),
    [anon_sym_in] = ACTIONS(521),
    [anon_sym_COMMA] = ACTIONS(521),
    [anon_sym_EQ] = ACTIONS(521),
    [anon_sym_LBRACE] = ACTIONS(521),
    [anon_sym_COLON] = ACTIONS(521),
    [anon_sym_QMARK] = ACTIONS(759),
    [anon_sym_as] = ACTIONS(761),
  },
  [190] = {
    [anon_sym_SEMI] = ACTIONS(519),
    [anon_sym_RPAREN] = ACTIONS(519),
    [anon_sym_in] = ACTIONS(519),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_EQ] = ACTIONS(519),
    [anon_sym_LBRACE] = ACTIONS(519),
    [anon_sym_COLON] = ACTIONS(519),
    [anon_sym_QMARK] = ACTIONS(519),
    [anon_sym_as] = ACTIONS(519),
  },
  [191] = {
    [sym__build_configuration] = STATE(388),
    [sym_boolean_literal] = STATE(388),
    [anon_sym_LPAREN] = ACTIONS(763),
    [anon_sym_os] = ACTIONS(765),
    [anon_sym_arch] = ACTIONS(767),
    [anon_sym_BANG] = ACTIONS(769),
    [anon_sym_true] = ACTIONS(771),
    [anon_sym_false] = ACTIONS(771),
    [sym_identifier] = ACTIONS(773),
  },
  [192] = {
    [sym_tuple_pattern] = STATE(230),
    [anon_sym_SEMI] = ACTIONS(775),
    [aux_sym__statement_token1] = ACTIONS(462),
    [anon_sym_LPAREN] = ACTIONS(752),
    [anon_sym_COMMA] = ACTIONS(775),
    [anon_sym_EQ] = ACTIONS(775),
    [anon_sym_COLON] = ACTIONS(775),
    [anon_sym_QMARK] = ACTIONS(775),
    [anon_sym_as] = ACTIONS(775),
  },
  [193] = {
    [sym__build_configuration] = STATE(42),
    [sym_boolean_literal] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(763),
    [anon_sym_os] = ACTIONS(765),
    [anon_sym_arch] = ACTIONS(767),
    [anon_sym_BANG] = ACTIONS(769),
    [anon_sym_true] = ACTIONS(771),
    [anon_sym_false] = ACTIONS(771),
    [sym_identifier] = ACTIONS(777),
  },
  [194] = {
    [anon_sym_var] = ACTIONS(779),
    [anon_sym_typealias] = ACTIONS(779),
    [anon_sym_struct] = ACTIONS(779),
    [anon_sym_class] = ACTIONS(779),
    [anon_sym_enum] = ACTIONS(779),
    [anon_sym_protocol] = ACTIONS(779),
    [anon_sym_func] = ACTIONS(779),
    [sym_identifier] = ACTIONS(781),
    [sym_operator] = ACTIONS(783),
  },
  [195] = {
    [sym__parameter_clause] = STATE(188),
    [aux_sym__function_signature_repeat1] = STATE(188),
    [anon_sym_SEMI] = ACTIONS(785),
    [aux_sym__statement_token1] = ACTIONS(466),
    [anon_sym_LPAREN] = ACTIONS(787),
    [anon_sym_LBRACE] = ACTIONS(785),
    [anon_sym_throws] = ACTIONS(789),
    [anon_sym_rethrows] = ACTIONS(789),
    [anon_sym_DASH_GT] = ACTIONS(791),
  },
  [196] = {
    [anon_sym_var] = ACTIONS(793),
    [anon_sym_typealias] = ACTIONS(793),
    [anon_sym_struct] = ACTIONS(793),
    [anon_sym_class] = ACTIONS(793),
    [anon_sym_enum] = ACTIONS(793),
    [anon_sym_protocol] = ACTIONS(793),
    [anon_sym_func] = ACTIONS(793),
    [sym_identifier] = ACTIONS(795),
    [sym_operator] = ACTIONS(797),
  },
  [197] = {
    [sym__build_configuration] = STATE(53),
    [sym_boolean_literal] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(763),
    [anon_sym_os] = ACTIONS(765),
    [anon_sym_arch] = ACTIONS(767),
    [anon_sym_BANG] = ACTIONS(769),
    [anon_sym_true] = ACTIONS(771),
    [anon_sym_false] = ACTIONS(771),
    [sym_identifier] = ACTIONS(799),
  },
  [198] = {
    [anon_sym_SEMI] = ACTIONS(537),
    [anon_sym_RPAREN] = ACTIONS(537),
    [anon_sym_in] = ACTIONS(537),
    [anon_sym_COMMA] = ACTIONS(537),
    [anon_sym_EQ] = ACTIONS(537),
    [anon_sym_LBRACE] = ACTIONS(537),
    [anon_sym_COLON] = ACTIONS(537),
    [anon_sym_QMARK] = ACTIONS(537),
    [anon_sym_as] = ACTIONS(537),
  },
  [199] = {
    [anon_sym_SEMI] = ACTIONS(801),
    [aux_sym__statement_token1] = ACTIONS(435),
    [anon_sym_COMMA] = ACTIONS(801),
    [anon_sym_EQ] = ACTIONS(801),
    [anon_sym_LBRACE] = ACTIONS(801),
    [anon_sym_COLON] = ACTIONS(801),
    [anon_sym_DOT] = ACTIONS(803),
    [anon_sym_QMARK] = ACTIONS(801),
    [anon_sym_as] = ACTIONS(801),
  },
  [200] = {
    [sym_type] = STATE(306),
    [sym__type_identifier] = STATE(179),
    [sym__type_name] = STATE(172),
    [sym_tuple_type] = STATE(179),
    [anon_sym_LPAREN] = ACTIONS(805),
    [anon_sym_RPAREN] = ACTIONS(807),
    [anon_sym_inout] = ACTIONS(809),
    [sym_identifier] = ACTIONS(811),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(813),
  },
  [201] = {
    [sym_type] = STATE(321),
    [sym__type_identifier] = STATE(179),
    [sym__type_name] = STATE(172),
    [sym_tuple_type] = STATE(179),
    [anon_sym_LPAREN] = ACTIONS(805),
    [anon_sym_RPAREN] = ACTIONS(815),
    [anon_sym_inout] = ACTIONS(817),
    [sym_identifier] = ACTIONS(819),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(821),
  },
  [202] = {
    [anon_sym_SEMI] = ACTIONS(527),
    [anon_sym_RPAREN] = ACTIONS(527),
    [anon_sym_in] = ACTIONS(527),
    [anon_sym_COMMA] = ACTIONS(527),
    [anon_sym_EQ] = ACTIONS(527),
    [anon_sym_LBRACE] = ACTIONS(527),
    [anon_sym_COLON] = ACTIONS(527),
    [anon_sym_QMARK] = ACTIONS(527),
    [anon_sym_as] = ACTIONS(527),
  },
  [203] = {
    [anon_sym_SEMI] = ACTIONS(535),
    [anon_sym_RPAREN] = ACTIONS(535),
    [anon_sym_in] = ACTIONS(535),
    [anon_sym_COMMA] = ACTIONS(535),
    [anon_sym_EQ] = ACTIONS(535),
    [anon_sym_LBRACE] = ACTIONS(535),
    [anon_sym_COLON] = ACTIONS(535),
    [anon_sym_QMARK] = ACTIONS(535),
    [anon_sym_as] = ACTIONS(535),
  },
  [204] = {
    [anon_sym_SEMI] = ACTIONS(517),
    [anon_sym_RPAREN] = ACTIONS(517),
    [anon_sym_in] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(517),
    [anon_sym_EQ] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_COLON] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
    [anon_sym_as] = ACTIONS(517),
  },
  [205] = {
    [sym__build_configuration] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(763),
    [anon_sym_os] = ACTIONS(765),
    [anon_sym_arch] = ACTIONS(767),
    [anon_sym_BANG] = ACTIONS(769),
    [anon_sym_true] = ACTIONS(771),
    [anon_sym_false] = ACTIONS(771),
    [sym_identifier] = ACTIONS(823),
  },
  [206] = {
    [anon_sym_SEMI] = ACTIONS(525),
    [anon_sym_RPAREN] = ACTIONS(525),
    [anon_sym_in] = ACTIONS(525),
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_EQ] = ACTIONS(525),
    [anon_sym_LBRACE] = ACTIONS(525),
    [anon_sym_COLON] = ACTIONS(525),
    [anon_sym_QMARK] = ACTIONS(525),
    [anon_sym_as] = ACTIONS(525),
  },
  [207] = {
    [anon_sym_SEMI] = ACTIONS(531),
    [anon_sym_RPAREN] = ACTIONS(531),
    [anon_sym_in] = ACTIONS(531),
    [anon_sym_COMMA] = ACTIONS(531),
    [anon_sym_EQ] = ACTIONS(531),
    [anon_sym_LBRACE] = ACTIONS(531),
    [anon_sym_COLON] = ACTIONS(531),
    [anon_sym_QMARK] = ACTIONS(531),
    [anon_sym_as] = ACTIONS(531),
  },
  [208] = {
    [sym__build_configuration] = STATE(2),
    [sym_boolean_literal] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(763),
    [anon_sym_os] = ACTIONS(765),
    [anon_sym_arch] = ACTIONS(767),
    [anon_sym_BANG] = ACTIONS(769),
    [anon_sym_true] = ACTIONS(771),
    [anon_sym_false] = ACTIONS(771),
    [sym_identifier] = ACTIONS(825),
  },
  [209] = {
    [anon_sym_SEMI] = ACTIONS(433),
    [anon_sym_RPAREN] = ACTIONS(433),
    [anon_sym_in] = ACTIONS(433),
    [anon_sym_COMMA] = ACTIONS(433),
    [anon_sym_EQ] = ACTIONS(433),
    [anon_sym_LBRACE] = ACTIONS(433),
    [anon_sym_COLON] = ACTIONS(433),
    [anon_sym_QMARK] = ACTIONS(433),
    [anon_sym_as] = ACTIONS(433),
  },
  [210] = {
    [sym_type] = STATE(312),
    [sym__type_identifier] = STATE(179),
    [sym__type_name] = STATE(172),
    [sym_tuple_type] = STATE(179),
    [anon_sym_LPAREN] = ACTIONS(805),
    [anon_sym_RPAREN] = ACTIONS(827),
    [anon_sym_inout] = ACTIONS(829),
    [sym_identifier] = ACTIONS(831),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(833),
  },
  [211] = {
    [sym__build_configuration] = STATE(38),
    [sym_boolean_literal] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(763),
    [anon_sym_os] = ACTIONS(765),
    [anon_sym_arch] = ACTIONS(767),
    [anon_sym_BANG] = ACTIONS(769),
    [anon_sym_true] = ACTIONS(771),
    [anon_sym_false] = ACTIONS(771),
    [sym_identifier] = ACTIONS(835),
  },
  [212] = {
    [sym__condition] = STATE(367),
    [sym_availability_condition] = STATE(367),
    [sym_case_condition] = STATE(367),
    [sym_optional_binding_condition] = STATE(367),
    [anon_sym_case] = ACTIONS(837),
    [anon_sym_POUNDavailable] = ACTIONS(732),
    [anon_sym_let] = ACTIONS(839),
    [anon_sym_var] = ACTIONS(839),
  },
  [213] = {
    [anon_sym_SEMI] = ACTIONS(841),
    [aux_sym__statement_token1] = ACTIONS(507),
    [anon_sym_COMMA] = ACTIONS(841),
    [anon_sym_EQ] = ACTIONS(841),
    [anon_sym_LBRACE] = ACTIONS(841),
    [anon_sym_COLON] = ACTIONS(841),
    [anon_sym_QMARK] = ACTIONS(841),
    [anon_sym_as] = ACTIONS(841),
  },
  [214] = {
    [anon_sym_SEMI] = ACTIONS(843),
    [aux_sym__statement_token1] = ACTIONS(472),
    [anon_sym_COMMA] = ACTIONS(843),
    [anon_sym_EQ] = ACTIONS(843),
    [anon_sym_COLON] = ACTIONS(843),
    [anon_sym_DOT] = ACTIONS(845),
    [anon_sym_QMARK] = ACTIONS(843),
    [anon_sym_as] = ACTIONS(843),
  },
  [215] = {
    [anon_sym_SEMI] = ACTIONS(847),
    [aux_sym__statement_token1] = ACTIONS(501),
    [anon_sym_COMMA] = ACTIONS(847),
    [anon_sym_EQ] = ACTIONS(847),
    [anon_sym_LBRACE] = ACTIONS(847),
    [anon_sym_COLON] = ACTIONS(847),
    [anon_sym_QMARK] = ACTIONS(847),
    [anon_sym_as] = ACTIONS(847),
  },
  [216] = {
    [anon_sym_SEMI] = ACTIONS(849),
    [aux_sym__statement_token1] = ACTIONS(499),
    [anon_sym_COMMA] = ACTIONS(849),
    [anon_sym_EQ] = ACTIONS(849),
    [anon_sym_LBRACE] = ACTIONS(849),
    [anon_sym_COLON] = ACTIONS(849),
    [anon_sym_QMARK] = ACTIONS(849),
    [anon_sym_as] = ACTIONS(849),
  },
  [217] = {
    [anon_sym_SEMI] = ACTIONS(740),
    [aux_sym__statement_token1] = ACTIONS(497),
    [anon_sym_COMMA] = ACTIONS(740),
    [anon_sym_EQ] = ACTIONS(740),
    [anon_sym_LBRACE] = ACTIONS(740),
    [anon_sym_COLON] = ACTIONS(740),
    [anon_sym_QMARK] = ACTIONS(740),
    [anon_sym_as] = ACTIONS(740),
  },
  [218] = {
    [anon_sym_SEMI] = ACTIONS(851),
    [aux_sym__statement_token1] = ACTIONS(495),
    [anon_sym_COMMA] = ACTIONS(851),
    [anon_sym_EQ] = ACTIONS(851),
    [anon_sym_LBRACE] = ACTIONS(851),
    [anon_sym_COLON] = ACTIONS(851),
    [anon_sym_QMARK] = ACTIONS(851),
    [anon_sym_as] = ACTIONS(851),
  },
  [219] = {
    [anon_sym_SEMI] = ACTIONS(853),
    [aux_sym__statement_token1] = ACTIONS(505),
    [anon_sym_COMMA] = ACTIONS(853),
    [anon_sym_EQ] = ACTIONS(853),
    [anon_sym_LBRACE] = ACTIONS(853),
    [anon_sym_COLON] = ACTIONS(853),
    [anon_sym_QMARK] = ACTIONS(853),
    [anon_sym_as] = ACTIONS(853),
  },
  [220] = {
    [anon_sym_SEMI] = ACTIONS(843),
    [aux_sym__statement_token1] = ACTIONS(472),
    [anon_sym_COMMA] = ACTIONS(843),
    [anon_sym_EQ] = ACTIONS(843),
    [anon_sym_COLON] = ACTIONS(855),
    [anon_sym_DOT] = ACTIONS(845),
    [anon_sym_QMARK] = ACTIONS(843),
    [anon_sym_as] = ACTIONS(843),
  },
  [221] = {
    [anon_sym_SEMI] = ACTIONS(858),
    [aux_sym__statement_token1] = ACTIONS(503),
    [anon_sym_COMMA] = ACTIONS(858),
    [anon_sym_EQ] = ACTIONS(858),
    [anon_sym_LBRACE] = ACTIONS(858),
    [anon_sym_COLON] = ACTIONS(858),
    [anon_sym_QMARK] = ACTIONS(858),
    [anon_sym_as] = ACTIONS(858),
  },
  [222] = {
    [sym__type_annotation] = STATE(345),
    [anon_sym_SEMI] = ACTIONS(860),
    [aux_sym__statement_token1] = ACTIONS(483),
    [anon_sym_COMMA] = ACTIONS(860),
    [anon_sym_EQ] = ACTIONS(862),
    [anon_sym_COLON] = ACTIONS(864),
    [anon_sym_QMARK] = ACTIONS(866),
    [anon_sym_as] = ACTIONS(868),
  },
  [223] = {
    [sym__condition] = STATE(425),
    [sym_availability_condition] = STATE(425),
    [sym_case_condition] = STATE(425),
    [sym_optional_binding_condition] = STATE(425),
    [anon_sym_case] = ACTIONS(837),
    [anon_sym_POUNDavailable] = ACTIONS(732),
    [anon_sym_let] = ACTIONS(839),
    [anon_sym_var] = ACTIONS(839),
  },
  [224] = {
    [anon_sym_var] = ACTIONS(870),
    [anon_sym_RBRACE] = ACTIONS(870),
    [anon_sym_typealias] = ACTIONS(870),
    [anon_sym_func] = ACTIONS(870),
    [anon_sym_throws] = ACTIONS(872),
    [anon_sym_rethrows] = ACTIONS(872),
    [anon_sym_init] = ACTIONS(870),
    [anon_sym_subscript] = ACTIONS(870),
  },
  [225] = {
    [anon_sym_SEMI] = ACTIONS(874),
    [aux_sym__statement_token1] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(874),
    [anon_sym_EQ] = ACTIONS(874),
    [anon_sym_LBRACE] = ACTIONS(874),
    [anon_sym_COLON] = ACTIONS(874),
    [anon_sym_QMARK] = ACTIONS(874),
    [anon_sym_as] = ACTIONS(874),
  },
  [226] = {
    [anon_sym_SEMI] = ACTIONS(876),
    [aux_sym__statement_token1] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(876),
    [anon_sym_EQ] = ACTIONS(876),
    [anon_sym_COLON] = ACTIONS(876),
    [anon_sym_QMARK] = ACTIONS(876),
    [anon_sym_as] = ACTIONS(876),
  },
  [227] = {
    [anon_sym_SEMI] = ACTIONS(878),
    [aux_sym__statement_token1] = ACTIONS(513),
    [anon_sym_LPAREN] = ACTIONS(878),
    [anon_sym_LBRACE] = ACTIONS(878),
    [anon_sym_throws] = ACTIONS(878),
    [anon_sym_rethrows] = ACTIONS(878),
    [anon_sym_DASH_GT] = ACTIONS(878),
  },
  [228] = {
    [anon_sym_SEMI] = ACTIONS(880),
    [aux_sym__statement_token1] = ACTIONS(537),
    [anon_sym_COMMA] = ACTIONS(880),
    [anon_sym_EQ] = ACTIONS(880),
    [anon_sym_COLON] = ACTIONS(880),
    [anon_sym_QMARK] = ACTIONS(880),
    [anon_sym_as] = ACTIONS(880),
  },
  [229] = {
    [sym_type] = STATE(421),
    [sym__type_identifier] = STATE(179),
    [sym__type_name] = STATE(172),
    [sym_tuple_type] = STATE(179),
    [anon_sym_LPAREN] = ACTIONS(805),
    [anon_sym_inout] = ACTIONS(882),
    [sym_identifier] = ACTIONS(884),
  },
  [230] = {
    [anon_sym_SEMI] = ACTIONS(750),
    [aux_sym__statement_token1] = ACTIONS(433),
    [anon_sym_COMMA] = ACTIONS(750),
    [anon_sym_EQ] = ACTIONS(750),
    [anon_sym_COLON] = ACTIONS(750),
    [anon_sym_QMARK] = ACTIONS(750),
    [anon_sym_as] = ACTIONS(750),
  },
  [231] = {
    [anon_sym_SEMI] = ACTIONS(886),
    [aux_sym__statement_token1] = ACTIONS(531),
    [anon_sym_COMMA] = ACTIONS(886),
    [anon_sym_EQ] = ACTIONS(886),
    [anon_sym_COLON] = ACTIONS(886),
    [anon_sym_QMARK] = ACTIONS(886),
    [anon_sym_as] = ACTIONS(886),
  },
  [232] = {
    [anon_sym_SEMI] = ACTIONS(888),
    [aux_sym__statement_token1] = ACTIONS(535),
    [anon_sym_COMMA] = ACTIONS(888),
    [anon_sym_EQ] = ACTIONS(888),
    [anon_sym_COLON] = ACTIONS(888),
    [anon_sym_QMARK] = ACTIONS(888),
    [anon_sym_as] = ACTIONS(888),
  },
  [233] = {
    [anon_sym_SEMI] = ACTIONS(573),
    [anon_sym_RPAREN] = ACTIONS(573),
    [anon_sym_in] = ACTIONS(573),
    [anon_sym_COMMA] = ACTIONS(573),
    [anon_sym_EQ] = ACTIONS(573),
    [anon_sym_LBRACE] = ACTIONS(573),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(573),
  },
  [234] = {
    [anon_sym_SEMI] = ACTIONS(890),
    [aux_sym__statement_token1] = ACTIONS(533),
    [anon_sym_LPAREN] = ACTIONS(890),
    [anon_sym_LBRACE] = ACTIONS(890),
    [anon_sym_throws] = ACTIONS(890),
    [anon_sym_rethrows] = ACTIONS(890),
    [anon_sym_DASH_GT] = ACTIONS(890),
  },
  [235] = {
    [anon_sym_SEMI] = ACTIONS(892),
    [aux_sym__statement_token1] = ACTIONS(509),
    [anon_sym_LPAREN] = ACTIONS(892),
    [anon_sym_LBRACE] = ACTIONS(892),
    [anon_sym_throws] = ACTIONS(892),
    [anon_sym_rethrows] = ACTIONS(892),
    [anon_sym_DASH_GT] = ACTIONS(892),
  },
  [236] = {
    [aux_sym__expression_list_repeat1] = STATE(380),
    [anon_sym_SEMI] = ACTIONS(894),
    [anon_sym_in] = ACTIONS(896),
    [anon_sym_COMMA] = ACTIONS(898),
    [anon_sym_COLON] = ACTIONS(896),
    [anon_sym_QMARK] = ACTIONS(896),
    [anon_sym_as] = ACTIONS(896),
  },
  [237] = {
    [anon_sym_SEMI] = ACTIONS(900),
    [aux_sym__statement_token1] = ACTIONS(519),
    [anon_sym_COMMA] = ACTIONS(900),
    [anon_sym_EQ] = ACTIONS(900),
    [anon_sym_COLON] = ACTIONS(900),
    [anon_sym_QMARK] = ACTIONS(900),
    [anon_sym_as] = ACTIONS(900),
  },
  [238] = {
    [anon_sym_EQ] = ACTIONS(902),
    [anon_sym_var] = ACTIONS(904),
    [anon_sym_RBRACE] = ACTIONS(904),
    [anon_sym_typealias] = ACTIONS(904),
    [anon_sym_func] = ACTIONS(904),
    [anon_sym_init] = ACTIONS(904),
    [anon_sym_subscript] = ACTIONS(904),
  },
  [239] = {
    [anon_sym_EQ] = ACTIONS(906),
    [anon_sym_var] = ACTIONS(906),
    [anon_sym_RBRACE] = ACTIONS(906),
    [anon_sym_typealias] = ACTIONS(906),
    [anon_sym_func] = ACTIONS(906),
    [anon_sym_init] = ACTIONS(906),
    [anon_sym_subscript] = ACTIONS(906),
  },
  [240] = {
    [anon_sym_SEMI] = ACTIONS(908),
    [aux_sym__statement_token1] = ACTIONS(521),
    [anon_sym_COMMA] = ACTIONS(908),
    [anon_sym_EQ] = ACTIONS(908),
    [anon_sym_COLON] = ACTIONS(908),
    [anon_sym_QMARK] = ACTIONS(866),
    [anon_sym_as] = ACTIONS(868),
  },
  [241] = {
    [anon_sym_SEMI] = ACTIONS(910),
    [aux_sym__statement_token1] = ACTIONS(525),
    [anon_sym_COMMA] = ACTIONS(910),
    [anon_sym_EQ] = ACTIONS(910),
    [anon_sym_COLON] = ACTIONS(910),
    [anon_sym_QMARK] = ACTIONS(910),
    [anon_sym_as] = ACTIONS(910),
  },
  [242] = {
    [anon_sym_SEMI] = ACTIONS(912),
    [aux_sym__statement_token1] = ACTIONS(529),
    [anon_sym_LPAREN] = ACTIONS(912),
    [anon_sym_LBRACE] = ACTIONS(912),
    [anon_sym_throws] = ACTIONS(912),
    [anon_sym_rethrows] = ACTIONS(912),
    [anon_sym_DASH_GT] = ACTIONS(912),
  },
  [243] = {
    [anon_sym_SEMI] = ACTIONS(914),
    [aux_sym__statement_token1] = ACTIONS(523),
    [anon_sym_LPAREN] = ACTIONS(914),
    [anon_sym_LBRACE] = ACTIONS(914),
    [anon_sym_throws] = ACTIONS(914),
    [anon_sym_rethrows] = ACTIONS(914),
    [anon_sym_DASH_GT] = ACTIONS(914),
  },
  [244] = {
    [anon_sym_STAR] = ACTIONS(916),
    [anon_sym_iOS] = ACTIONS(918),
    [anon_sym_iOSApplicationExtension] = ACTIONS(920),
    [anon_sym_OSX] = ACTIONS(918),
    [anon_sym_OSXApplicationExtension] = ACTIONS(920),
    [anon_sym_watchOS] = ACTIONS(920),
    [anon_sym_tvOS] = ACTIONS(920),
  },
  [245] = {
    [anon_sym_SEMI] = ACTIONS(922),
    [aux_sym__statement_token1] = ACTIONS(527),
    [anon_sym_COMMA] = ACTIONS(922),
    [anon_sym_EQ] = ACTIONS(922),
    [anon_sym_COLON] = ACTIONS(922),
    [anon_sym_QMARK] = ACTIONS(922),
    [anon_sym_as] = ACTIONS(922),
  },
  [246] = {
    [anon_sym_SEMI] = ACTIONS(924),
    [aux_sym__statement_token1] = ACTIONS(515),
    [anon_sym_LPAREN] = ACTIONS(924),
    [anon_sym_LBRACE] = ACTIONS(924),
    [anon_sym_throws] = ACTIONS(924),
    [anon_sym_rethrows] = ACTIONS(924),
    [anon_sym_DASH_GT] = ACTIONS(924),
  },
  [247] = {
    [sym__type_annotation] = STATE(93),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_COMMA] = ACTIONS(483),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_COLON] = ACTIONS(926),
    [anon_sym_QMARK] = ACTIONS(759),
    [anon_sym_as] = ACTIONS(761),
  },
  [248] = {
    [anon_sym_STAR] = ACTIONS(928),
    [anon_sym_iOS] = ACTIONS(930),
    [anon_sym_iOSApplicationExtension] = ACTIONS(932),
    [anon_sym_OSX] = ACTIONS(930),
    [anon_sym_OSXApplicationExtension] = ACTIONS(932),
    [anon_sym_watchOS] = ACTIONS(932),
    [anon_sym_tvOS] = ACTIONS(932),
  },
  [249] = {
    [anon_sym_SEMI] = ACTIONS(934),
    [aux_sym__statement_token1] = ACTIONS(511),
    [anon_sym_LPAREN] = ACTIONS(934),
    [anon_sym_LBRACE] = ACTIONS(934),
    [anon_sym_throws] = ACTIONS(934),
    [anon_sym_rethrows] = ACTIONS(934),
    [anon_sym_DASH_GT] = ACTIONS(934),
  },
  [250] = {
    [sym_type] = STATE(198),
    [sym__type_identifier] = STATE(179),
    [sym__type_name] = STATE(172),
    [sym_tuple_type] = STATE(179),
    [anon_sym_LPAREN] = ACTIONS(805),
    [sym_identifier] = ACTIONS(936),
  },
  [251] = {
    [sym_type] = STATE(309),
    [sym__type_identifier] = STATE(225),
    [sym__type_name] = STATE(199),
    [sym_tuple_type] = STATE(225),
    [anon_sym_LPAREN] = ACTIONS(938),
    [sym_identifier] = ACTIONS(940),
  },
  [252] = {
    [sym_type] = STATE(190),
    [sym__type_identifier] = STATE(179),
    [sym__type_name] = STATE(172),
    [sym_tuple_type] = STATE(179),
    [anon_sym_LPAREN] = ACTIONS(805),
    [sym_identifier] = ACTIONS(936),
  },
  [253] = {
    [sym__type_annotation] = STATE(396),
    [anon_sym_RPAREN] = ACTIONS(477),
    [anon_sym_COMMA] = ACTIONS(477),
    [anon_sym_COLON] = ACTIONS(926),
    [anon_sym_DOT] = ACTIONS(845),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(477),
  },
  [254] = {
    [sym_type] = STATE(396),
    [sym__type_identifier] = STATE(179),
    [sym__type_name] = STATE(172),
    [sym_tuple_type] = STATE(179),
    [anon_sym_LPAREN] = ACTIONS(805),
    [sym_identifier] = ACTIONS(942),
  },
  [255] = {
    [aux_sym__expression_list_repeat1] = STATE(380),
    [anon_sym_SEMI] = ACTIONS(894),
    [anon_sym_RPAREN] = ACTIONS(896),
    [anon_sym_COMMA] = ACTIONS(944),
    [anon_sym_QMARK] = ACTIONS(896),
    [anon_sym_as] = ACTIONS(896),
  },
  [256] = {
    [sym_type] = STATE(359),
    [sym__type_identifier] = STATE(179),
    [sym__type_name] = STATE(172),
    [sym_tuple_type] = STATE(179),
    [anon_sym_LPAREN] = ACTIONS(805),
    [sym_identifier] = ACTIONS(947),
  },
  [257] = {
    [sym__type_annotation] = STATE(325),
    [anon_sym_RPAREN] = ACTIONS(477),
    [anon_sym_COMMA] = ACTIONS(477),
    [anon_sym_COLON] = ACTIONS(926),
    [anon_sym_DOT] = ACTIONS(845),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(477),
  },
  [258] = {
    [sym__type_annotation] = STATE(343),
    [anon_sym_RPAREN] = ACTIONS(477),
    [anon_sym_COMMA] = ACTIONS(477),
    [anon_sym_COLON] = ACTIONS(926),
    [anon_sym_DOT] = ACTIONS(845),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(477),
  },
  [259] = {
    [sym_type] = STATE(325),
    [sym__type_identifier] = STATE(179),
    [sym__type_name] = STATE(172),
    [sym_tuple_type] = STATE(179),
    [anon_sym_LPAREN] = ACTIONS(805),
    [sym_identifier] = ACTIONS(949),
  },
  [260] = {
    [sym_type] = STATE(313),
    [sym__type_identifier] = STATE(179),
    [sym__type_name] = STATE(172),
    [sym_tuple_type] = STATE(179),
    [anon_sym_LPAREN] = ACTIONS(805),
    [sym_identifier] = ACTIONS(951),
  },
  [261] = {
    [sym_type] = STATE(101),
    [sym__type_identifier] = STATE(67),
    [sym__type_name] = STATE(58),
    [sym_tuple_type] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(539),
    [sym_identifier] = ACTIONS(953),
  },
  [262] = {
    [sym__type_annotation] = STATE(313),
    [anon_sym_RPAREN] = ACTIONS(477),
    [anon_sym_COMMA] = ACTIONS(477),
    [anon_sym_COLON] = ACTIONS(926),
    [anon_sym_DOT] = ACTIONS(845),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(477),
  },
  [263] = {
    [sym_type] = STATE(90),
    [sym__type_identifier] = STATE(67),
    [sym__type_name] = STATE(58),
    [sym_tuple_type] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(539),
    [sym_identifier] = ACTIONS(953),
  },
  [264] = {
    [sym__type_annotation] = STATE(419),
    [anon_sym_RPAREN] = ACTIONS(477),
    [anon_sym_COMMA] = ACTIONS(477),
    [anon_sym_COLON] = ACTIONS(926),
    [anon_sym_DOT] = ACTIONS(845),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(477),
  },
  [265] = {
    [sym__type_annotation] = STATE(363),
    [anon_sym_RPAREN] = ACTIONS(477),
    [anon_sym_COMMA] = ACTIONS(477),
    [anon_sym_COLON] = ACTIONS(926),
    [anon_sym_DOT] = ACTIONS(845),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(477),
  },
  [266] = {
    [anon_sym_var] = ACTIONS(955),
    [anon_sym_RBRACE] = ACTIONS(955),
    [anon_sym_typealias] = ACTIONS(955),
    [anon_sym_func] = ACTIONS(955),
    [anon_sym_init] = ACTIONS(955),
    [anon_sym_subscript] = ACTIONS(955),
  },
  [267] = {
    [sym_type] = STATE(81),
    [sym__type_identifier] = STATE(67),
    [sym__type_name] = STATE(58),
    [sym_tuple_type] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(539),
    [sym_identifier] = ACTIONS(953),
  },
  [268] = {
    [sym_type] = STATE(560),
    [sym__type_identifier] = STATE(225),
    [sym__type_name] = STATE(199),
    [sym_tuple_type] = STATE(225),
    [anon_sym_LPAREN] = ACTIONS(938),
    [sym_identifier] = ACTIONS(940),
  },
  [269] = {
    [anon_sym_var] = ACTIONS(957),
    [anon_sym_RBRACE] = ACTIONS(957),
    [anon_sym_typealias] = ACTIONS(957),
    [anon_sym_func] = ACTIONS(957),
    [anon_sym_init] = ACTIONS(957),
    [anon_sym_subscript] = ACTIONS(957),
  },
  [270] = {
    [anon_sym_var] = ACTIONS(959),
    [anon_sym_RBRACE] = ACTIONS(959),
    [anon_sym_typealias] = ACTIONS(959),
    [anon_sym_func] = ACTIONS(959),
    [anon_sym_init] = ACTIONS(959),
    [anon_sym_subscript] = ACTIONS(959),
  },
  [271] = {
    [sym_type] = STATE(266),
    [sym__type_identifier] = STATE(67),
    [sym__type_name] = STATE(58),
    [sym_tuple_type] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(539),
    [sym_identifier] = ACTIONS(953),
  },
  [272] = {
    [sym_type] = STATE(228),
    [sym__type_identifier] = STATE(225),
    [sym__type_name] = STATE(199),
    [sym_tuple_type] = STATE(225),
    [anon_sym_LPAREN] = ACTIONS(938),
    [sym_identifier] = ACTIONS(940),
  },
  [273] = {
    [sym_type] = STATE(117),
    [sym__type_identifier] = STATE(67),
    [sym__type_name] = STATE(58),
    [sym_tuple_type] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(539),
    [sym_identifier] = ACTIONS(953),
  },
  [274] = {
    [sym_type] = STATE(237),
    [sym__type_identifier] = STATE(225),
    [sym__type_name] = STATE(199),
    [sym_tuple_type] = STATE(225),
    [anon_sym_LPAREN] = ACTIONS(938),
    [sym_identifier] = ACTIONS(940),
  },
  [275] = {
    [sym_type] = STATE(441),
    [sym__type_identifier] = STATE(225),
    [sym__type_name] = STATE(199),
    [sym_tuple_type] = STATE(225),
    [anon_sym_LPAREN] = ACTIONS(938),
    [sym_identifier] = ACTIONS(940),
  },
  [276] = {
    [anon_sym_RPAREN] = ACTIONS(961),
    [anon_sym_let] = ACTIONS(963),
    [anon_sym_var] = ACTIONS(963),
    [anon_sym_inout] = ACTIONS(963),
    [anon_sym__] = ACTIONS(965),
    [sym_identifier] = ACTIONS(965),
  },
  [277] = {
    [anon_sym_RPAREN] = ACTIONS(967),
    [anon_sym_let] = ACTIONS(969),
    [anon_sym_var] = ACTIONS(969),
    [anon_sym_inout] = ACTIONS(969),
    [anon_sym__] = ACTIONS(971),
    [sym_identifier] = ACTIONS(971),
  },
  [278] = {
    [sym_type] = STATE(451),
    [sym__type_identifier] = STATE(225),
    [sym__type_name] = STATE(199),
    [sym_tuple_type] = STATE(225),
    [anon_sym_LPAREN] = ACTIONS(938),
    [sym_identifier] = ACTIONS(940),
  },
  [279] = {
    [sym_type] = STATE(134),
    [sym__type_identifier] = STATE(67),
    [sym__type_name] = STATE(58),
    [sym_tuple_type] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(539),
    [sym_identifier] = ACTIONS(953),
  },
  [280] = {
    [anon_sym_var] = ACTIONS(973),
    [anon_sym_RBRACE] = ACTIONS(973),
    [anon_sym_typealias] = ACTIONS(973),
    [anon_sym_func] = ACTIONS(973),
    [anon_sym_init] = ACTIONS(973),
    [anon_sym_subscript] = ACTIONS(973),
  },
  [281] = {
    [sym_type] = STATE(112),
    [sym__type_identifier] = STATE(67),
    [sym__type_name] = STATE(58),
    [sym_tuple_type] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(539),
    [sym_identifier] = ACTIONS(953),
  },
  [282] = {
    [anon_sym_var] = ACTIONS(975),
    [anon_sym_RBRACE] = ACTIONS(975),
    [anon_sym_typealias] = ACTIONS(975),
    [anon_sym_func] = ACTIONS(975),
    [anon_sym_init] = ACTIONS(975),
    [anon_sym_subscript] = ACTIONS(975),
  },
  [283] = {
    [sym__type_annotation] = STATE(359),
    [anon_sym_RPAREN] = ACTIONS(477),
    [anon_sym_COMMA] = ACTIONS(477),
    [anon_sym_COLON] = ACTIONS(926),
    [anon_sym_DOT] = ACTIONS(845),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(477),
  },
  [284] = {
    [sym_type] = STATE(233),
    [sym__type_identifier] = STATE(179),
    [sym__type_name] = STATE(172),
    [sym_tuple_type] = STATE(179),
    [anon_sym_LPAREN] = ACTIONS(805),
    [sym_identifier] = ACTIONS(936),
  },
  [285] = {
    [sym_type] = STATE(594),
    [sym__type_identifier] = STATE(179),
    [sym__type_name] = STATE(172),
    [sym_tuple_type] = STATE(179),
    [anon_sym_LPAREN] = ACTIONS(805),
    [sym_identifier] = ACTIONS(936),
  },
  [286] = {
    [sym__type_annotation] = STATE(347),
    [anon_sym_RPAREN] = ACTIONS(477),
    [anon_sym_COMMA] = ACTIONS(477),
    [anon_sym_COLON] = ACTIONS(926),
    [anon_sym_DOT] = ACTIONS(845),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(477),
  },
  [287] = {
    [sym_catch_clause] = STATE(288),
    [aux_sym_do_statement_repeat1] = STATE(288),
    [anon_sym_SEMI] = ACTIONS(977),
    [aux_sym__statement_token1] = ACTIONS(979),
    [anon_sym_catch] = ACTIONS(981),
  },
  [288] = {
    [sym_catch_clause] = STATE(291),
    [aux_sym_do_statement_repeat1] = STATE(291),
    [anon_sym_SEMI] = ACTIONS(983),
    [aux_sym__statement_token1] = ACTIONS(985),
    [anon_sym_catch] = ACTIONS(981),
  },
  [289] = {
    [aux_sym__tuple_pattern_element_list_repeat1] = STATE(414),
    [anon_sym_RPAREN] = ACTIONS(987),
    [anon_sym_COMMA] = ACTIONS(989),
    [anon_sym_QMARK] = ACTIONS(759),
    [anon_sym_as] = ACTIONS(761),
  },
  [290] = {
    [sym_case_statement] = STATE(296),
    [aux_sym_switch_statement_repeat1] = STATE(296),
    [anon_sym_case] = ACTIONS(991),
    [anon_sym_RBRACE] = ACTIONS(993),
    [anon_sym_default] = ACTIONS(995),
  },
  [291] = {
    [sym_catch_clause] = STATE(291),
    [aux_sym_do_statement_repeat1] = STATE(291),
    [anon_sym_SEMI] = ACTIONS(997),
    [aux_sym__statement_token1] = ACTIONS(999),
    [anon_sym_catch] = ACTIONS(1001),
  },
  [292] = {
    [sym__type_annotation] = STATE(596),
    [anon_sym_in] = ACTIONS(1004),
    [anon_sym_COLON] = ACTIONS(926),
    [anon_sym_QMARK] = ACTIONS(759),
    [anon_sym_as] = ACTIONS(761),
  },
  [293] = {
    [sym__type_annotation] = STATE(602),
    [anon_sym_in] = ACTIONS(1006),
    [anon_sym_COLON] = ACTIONS(926),
    [anon_sym_QMARK] = ACTIONS(759),
    [anon_sym_as] = ACTIONS(761),
  },
  [294] = {
    [anon_sym_let] = ACTIONS(1008),
    [anon_sym_var] = ACTIONS(1008),
    [anon_sym_inout] = ACTIONS(1008),
    [anon_sym__] = ACTIONS(1010),
    [sym_identifier] = ACTIONS(1010),
  },
  [295] = {
    [sym_precedence_clause] = STATE(401),
    [sym_associativity_clause] = STATE(400),
    [anon_sym_RBRACE] = ACTIONS(1012),
    [anon_sym_precedence] = ACTIONS(1014),
    [anon_sym_associativity] = ACTIONS(1016),
  },
  [296] = {
    [sym_case_statement] = STATE(296),
    [aux_sym_switch_statement_repeat1] = STATE(296),
    [anon_sym_case] = ACTIONS(1018),
    [anon_sym_RBRACE] = ACTIONS(1021),
    [anon_sym_default] = ACTIONS(1023),
  },
  [297] = {
    [sym_precedence_clause] = STATE(444),
    [sym_associativity_clause] = STATE(443),
    [anon_sym_RBRACE] = ACTIONS(1026),
    [anon_sym_precedence] = ACTIONS(1014),
    [anon_sym_associativity] = ACTIONS(1016),
  },
  [298] = {
    [sym_case_statement] = STATE(290),
    [aux_sym_switch_statement_repeat1] = STATE(290),
    [anon_sym_case] = ACTIONS(991),
    [anon_sym_RBRACE] = ACTIONS(1028),
    [anon_sym_default] = ACTIONS(995),
  },
  [299] = {
    [aux_sym_case_statement_repeat1] = STATE(403),
    [anon_sym_COMMA] = ACTIONS(1030),
    [anon_sym_COLON] = ACTIONS(1032),
    [anon_sym_QMARK] = ACTIONS(759),
    [anon_sym_as] = ACTIONS(761),
  },
  [300] = {
    [aux_sym__parameter_clause_repeat1] = STATE(382),
    [anon_sym_RPAREN] = ACTIONS(1034),
    [anon_sym_COMMA] = ACTIONS(1036),
    [anon_sym_EQ] = ACTIONS(1038),
  },
  [301] = {
    [sym__type_annotation] = STATE(323),
    [anon_sym_COLON] = ACTIONS(926),
    [anon_sym__] = ACTIONS(1040),
    [sym_identifier] = ACTIONS(1040),
  },
  [302] = {
    [aux_sym_tuple_type_repeat1] = STATE(354),
    [anon_sym_RPAREN] = ACTIONS(1042),
    [anon_sym_COMMA] = ACTIONS(1044),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1046),
  },
  [303] = {
    [sym__expression] = STATE(467),
    [anon_sym_SEMI] = ACTIONS(1048),
    [aux_sym__statement_token1] = ACTIONS(1050),
    [sym_identifier] = ACTIONS(1052),
  },
  [304] = {
    [aux_sym__condition_clause_repeat1] = STATE(319),
    [anon_sym_COMMA] = ACTIONS(1054),
    [anon_sym_else] = ACTIONS(1056),
    [anon_sym_LBRACE] = ACTIONS(1056),
  },
  [305] = {
    [anon_sym_SEMI] = ACTIONS(1058),
    [aux_sym__statement_token1] = ACTIONS(558),
    [anon_sym_else] = ACTIONS(1058),
    [anon_sym_catch] = ACTIONS(1058),
  },
  [306] = {
    [aux_sym_tuple_type_repeat1] = STATE(329),
    [anon_sym_RPAREN] = ACTIONS(1060),
    [anon_sym_COMMA] = ACTIONS(1044),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1062),
  },
  [307] = {
    [aux_sym_optional_binding_condition_repeat1] = STATE(362),
    [anon_sym_COMMA] = ACTIONS(1064),
    [anon_sym_else] = ACTIONS(1066),
    [anon_sym_LBRACE] = ACTIONS(1066),
  },
  [308] = {
    [aux_sym__condition_clause_repeat1] = STATE(373),
    [anon_sym_COMMA] = ACTIONS(1054),
    [anon_sym_else] = ACTIONS(1068),
    [anon_sym_LBRACE] = ACTIONS(1068),
  },
  [309] = {
    [anon_sym_SEMI] = ACTIONS(1070),
    [aux_sym__statement_token1] = ACTIONS(573),
    [anon_sym_COMMA] = ACTIONS(1070),
    [anon_sym_EQ] = ACTIONS(1070),
  },
  [310] = {
    [aux_sym__parameter_clause_repeat1] = STATE(402),
    [anon_sym_RPAREN] = ACTIONS(1072),
    [anon_sym_COMMA] = ACTIONS(1036),
    [anon_sym_EQ] = ACTIONS(1074),
  },
  [311] = {
    [aux_sym_constant_declaration_repeat1] = STATE(326),
    [anon_sym_SEMI] = ACTIONS(1076),
    [aux_sym__statement_token1] = ACTIONS(587),
    [anon_sym_COMMA] = ACTIONS(1078),
  },
  [312] = {
    [aux_sym_tuple_type_repeat1] = STATE(335),
    [anon_sym_RPAREN] = ACTIONS(1080),
    [anon_sym_COMMA] = ACTIONS(1044),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1082),
  },
  [313] = {
    [aux_sym_tuple_type_repeat1] = STATE(302),
    [anon_sym_RPAREN] = ACTIONS(1084),
    [anon_sym_COMMA] = ACTIONS(1044),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1086),
  },
  [314] = {
    [sym__type_annotation] = STATE(415),
    [anon_sym_COLON] = ACTIONS(926),
    [anon_sym__] = ACTIONS(1088),
    [sym_identifier] = ACTIONS(1088),
  },
  [315] = {
    [aux_sym_constant_declaration_repeat1] = STATE(364),
    [anon_sym_SEMI] = ACTIONS(1090),
    [aux_sym__statement_token1] = ACTIONS(591),
    [anon_sym_COMMA] = ACTIONS(1078),
  },
  [316] = {
    [aux_sym_constant_declaration_repeat1] = STATE(315),
    [anon_sym_SEMI] = ACTIONS(1092),
    [aux_sym__statement_token1] = ACTIONS(575),
    [anon_sym_COMMA] = ACTIONS(1078),
  },
  [317] = {
    [anon_sym_SEMI] = ACTIONS(1094),
    [aux_sym__statement_token1] = ACTIONS(583),
    [anon_sym_LBRACE] = ACTIONS(1094),
    [anon_sym_DASH_GT] = ACTIONS(1096),
  },
  [318] = {
    [aux_sym_tuple_type_repeat1] = STATE(354),
    [anon_sym_RPAREN] = ACTIONS(1098),
    [anon_sym_COMMA] = ACTIONS(1044),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1100),
  },
  [319] = {
    [aux_sym__condition_clause_repeat1] = STATE(373),
    [anon_sym_COMMA] = ACTIONS(1054),
    [anon_sym_else] = ACTIONS(1102),
    [anon_sym_LBRACE] = ACTIONS(1102),
  },
  [320] = {
    [aux_sym_build_configuration_statement_repeat1] = STATE(342),
    [anon_sym_POUNDelseif] = ACTIONS(69),
    [anon_sym_POUNDelse] = ACTIONS(195),
    [anon_sym_POUNDendif] = ACTIONS(197),
  },
  [321] = {
    [aux_sym_tuple_type_repeat1] = STATE(332),
    [anon_sym_RPAREN] = ACTIONS(1104),
    [anon_sym_COMMA] = ACTIONS(1044),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1106),
  },
  [322] = {
    [anon_sym_SEMI] = ACTIONS(1108),
    [aux_sym__statement_token1] = ACTIONS(581),
    [anon_sym_else] = ACTIONS(1108),
    [anon_sym_catch] = ACTIONS(1108),
  },
  [323] = {
    [aux_sym__parameter_clause_repeat1] = STATE(453),
    [anon_sym_RPAREN] = ACTIONS(1110),
    [anon_sym_COMMA] = ACTIONS(1036),
    [anon_sym_EQ] = ACTIONS(1112),
  },
  [324] = {
    [anon_sym_iOS] = ACTIONS(1114),
    [anon_sym_OSX] = ACTIONS(1114),
    [anon_sym_watchOS] = ACTIONS(1114),
    [anon_sym_tvOS] = ACTIONS(1114),
  },
  [325] = {
    [aux_sym_tuple_type_repeat1] = STATE(346),
    [anon_sym_RPAREN] = ACTIONS(1116),
    [anon_sym_COMMA] = ACTIONS(1044),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1118),
  },
  [326] = {
    [aux_sym_constant_declaration_repeat1] = STATE(364),
    [anon_sym_SEMI] = ACTIONS(1120),
    [aux_sym__statement_token1] = ACTIONS(597),
    [anon_sym_COMMA] = ACTIONS(1078),
  },
  [327] = {
    [sym__type_annotation] = STATE(300),
    [anon_sym_COLON] = ACTIONS(926),
    [anon_sym__] = ACTIONS(1122),
    [sym_identifier] = ACTIONS(1122),
  },
  [328] = {
    [sym__type_annotation] = STATE(310),
    [anon_sym_COLON] = ACTIONS(926),
    [anon_sym__] = ACTIONS(1124),
    [sym_identifier] = ACTIONS(1124),
  },
  [329] = {
    [aux_sym_tuple_type_repeat1] = STATE(354),
    [anon_sym_RPAREN] = ACTIONS(1116),
    [anon_sym_COMMA] = ACTIONS(1044),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1118),
  },
  [330] = {
    [anon_sym_i386] = ACTIONS(1114),
    [anon_sym_x86_64] = ACTIONS(1114),
    [anon_sym_arm] = ACTIONS(1126),
    [anon_sym_arm64] = ACTIONS(1114),
  },
  [331] = {
    [aux_sym__parameter_clause_repeat1] = STATE(397),
    [anon_sym_RPAREN] = ACTIONS(1128),
    [anon_sym_COMMA] = ACTIONS(1036),
    [anon_sym_EQ] = ACTIONS(1130),
  },
  [332] = {
    [aux_sym_tuple_type_repeat1] = STATE(354),
    [anon_sym_RPAREN] = ACTIONS(1084),
    [anon_sym_COMMA] = ACTIONS(1044),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1086),
  },
  [333] = {
    [sym__function_signature] = STATE(270),
    [sym__parameter_clause] = STATE(62),
    [aux_sym__function_signature_repeat1] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(464),
  },
  [334] = {
    [anon_sym_RPAREN] = ACTIONS(1132),
    [anon_sym_COMMA] = ACTIONS(1132),
    [anon_sym_QMARK] = ACTIONS(759),
    [anon_sym_as] = ACTIONS(761),
  },
  [335] = {
    [aux_sym_tuple_type_repeat1] = STATE(354),
    [anon_sym_RPAREN] = ACTIONS(1134),
    [anon_sym_COMMA] = ACTIONS(1044),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1136),
  },
  [336] = {
    [sym__code_block] = STATE(562),
    [anon_sym_SEMI] = ACTIONS(1138),
    [aux_sym__statement_token1] = ACTIONS(593),
    [anon_sym_LBRACE] = ACTIONS(1140),
  },
  [337] = {
    [sym__expression] = STATE(466),
    [anon_sym_SEMI] = ACTIONS(1142),
    [aux_sym__statement_token1] = ACTIONS(1144),
    [sym_identifier] = ACTIONS(1146),
  },
  [338] = {
    [sym__code_block] = STATE(566),
    [anon_sym_LBRACE] = ACTIONS(627),
    [anon_sym_throws] = ACTIONS(1148),
    [anon_sym_rethrows] = ACTIONS(1148),
  },
  [339] = {
    [sym__expression] = STATE(545),
    [anon_sym_RPAREN] = ACTIONS(1150),
    [anon_sym_LBRACE] = ACTIONS(1150),
    [sym_identifier] = ACTIONS(1152),
  },
  [340] = {
    [aux_sym_import_declaration_repeat1] = STATE(340),
    [anon_sym_SEMI] = ACTIONS(1154),
    [aux_sym__statement_token1] = ACTIONS(568),
    [anon_sym_DOT] = ACTIONS(1156),
  },
  [341] = {
    [aux_sym_import_declaration_repeat1] = STATE(340),
    [anon_sym_SEMI] = ACTIONS(1159),
    [aux_sym__statement_token1] = ACTIONS(562),
    [anon_sym_DOT] = ACTIONS(1161),
  },
  [342] = {
    [aux_sym_build_configuration_statement_repeat1] = STATE(342),
    [anon_sym_POUNDelseif] = ACTIONS(1163),
    [anon_sym_POUNDelse] = ACTIONS(193),
    [anon_sym_POUNDendif] = ACTIONS(191),
  },
  [343] = {
    [aux_sym_tuple_type_repeat1] = STATE(371),
    [anon_sym_RPAREN] = ACTIONS(1166),
    [anon_sym_COMMA] = ACTIONS(1044),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1168),
  },
  [344] = {
    [aux_sym_build_configuration_statement_repeat1] = STATE(342),
    [anon_sym_POUNDelseif] = ACTIONS(69),
    [anon_sym_POUNDelse] = ACTIONS(1170),
    [anon_sym_POUNDendif] = ACTIONS(224),
  },
  [345] = {
    [anon_sym_SEMI] = ACTIONS(1172),
    [aux_sym__statement_token1] = ACTIONS(549),
    [anon_sym_COMMA] = ACTIONS(1172),
    [anon_sym_EQ] = ACTIONS(1174),
  },
  [346] = {
    [aux_sym_tuple_type_repeat1] = STATE(354),
    [anon_sym_RPAREN] = ACTIONS(1166),
    [anon_sym_COMMA] = ACTIONS(1044),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1168),
  },
  [347] = {
    [aux_sym_tuple_type_repeat1] = STATE(368),
    [anon_sym_RPAREN] = ACTIONS(1176),
    [anon_sym_COMMA] = ACTIONS(1044),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1178),
  },
  [348] = {
    [aux_sym_import_declaration_repeat1] = STATE(340),
    [anon_sym_SEMI] = ACTIONS(1180),
    [aux_sym__statement_token1] = ACTIONS(566),
    [anon_sym_DOT] = ACTIONS(1161),
  },
  [349] = {
    [sym__type_annotation] = STATE(331),
    [anon_sym_COLON] = ACTIONS(926),
    [anon_sym__] = ACTIONS(1182),
    [sym_identifier] = ACTIONS(1182),
  },
  [350] = {
    [aux_sym_tuple_type_repeat1] = STATE(354),
    [anon_sym_RPAREN] = ACTIONS(1176),
    [anon_sym_COMMA] = ACTIONS(1044),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1178),
  },
  [351] = {
    [sym__expression] = STATE(577),
    [anon_sym_RPAREN] = ACTIONS(1184),
    [anon_sym_LBRACE] = ACTIONS(1184),
    [sym_identifier] = ACTIONS(1186),
  },
  [352] = {
    [sym__expression] = STATE(502),
    [anon_sym_RPAREN] = ACTIONS(1188),
    [anon_sym_LBRACE] = ACTIONS(1188),
    [sym_identifier] = ACTIONS(1190),
  },
  [353] = {
    [aux_sym__parameter_clause_repeat1] = STATE(394),
    [anon_sym_RPAREN] = ACTIONS(1192),
    [anon_sym_COMMA] = ACTIONS(1036),
    [anon_sym_EQ] = ACTIONS(1194),
  },
  [354] = {
    [aux_sym_tuple_type_repeat1] = STATE(354),
    [anon_sym_RPAREN] = ACTIONS(1196),
    [anon_sym_COMMA] = ACTIONS(1198),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1196),
  },
  [355] = {
    [sym__type_annotation] = STATE(426),
    [anon_sym_COLON] = ACTIONS(926),
    [anon_sym__] = ACTIONS(1201),
    [sym_identifier] = ACTIONS(1201),
  },
  [356] = {
    [aux_sym_import_declaration_repeat1] = STATE(348),
    [anon_sym_SEMI] = ACTIONS(1203),
    [aux_sym__statement_token1] = ACTIONS(589),
    [anon_sym_DOT] = ACTIONS(1161),
  },
  [357] = {
    [sym__code_block] = STATE(448),
    [anon_sym_LBRACE] = ACTIONS(627),
    [anon_sym_QMARK] = ACTIONS(759),
    [anon_sym_as] = ACTIONS(761),
  },
  [358] = {
    [sym_boolean_literal] = STATE(129),
    [anon_sym_true] = ACTIONS(1205),
    [anon_sym_false] = ACTIONS(1205),
    [sym_static_string_literal] = ACTIONS(1207),
  },
  [359] = {
    [aux_sym_tuple_type_repeat1] = STATE(350),
    [anon_sym_RPAREN] = ACTIONS(1134),
    [anon_sym_COMMA] = ACTIONS(1044),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1136),
  },
  [360] = {
    [aux_sym_import_declaration_repeat1] = STATE(341),
    [anon_sym_SEMI] = ACTIONS(1180),
    [aux_sym__statement_token1] = ACTIONS(566),
    [anon_sym_DOT] = ACTIONS(1161),
  },
  [361] = {
    [sym_if_statement] = STATE(493),
    [sym__code_block] = STATE(493),
    [anon_sym_if] = ACTIONS(748),
    [anon_sym_LBRACE] = ACTIONS(627),
  },
  [362] = {
    [aux_sym_optional_binding_condition_repeat1] = STATE(366),
    [anon_sym_COMMA] = ACTIONS(1209),
    [anon_sym_else] = ACTIONS(1209),
    [anon_sym_LBRACE] = ACTIONS(1209),
  },
  [363] = {
    [aux_sym_tuple_type_repeat1] = STATE(318),
    [anon_sym_RPAREN] = ACTIONS(1042),
    [anon_sym_COMMA] = ACTIONS(1044),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1046),
  },
  [364] = {
    [aux_sym_constant_declaration_repeat1] = STATE(364),
    [anon_sym_SEMI] = ACTIONS(1211),
    [aux_sym__statement_token1] = ACTIONS(553),
    [anon_sym_COMMA] = ACTIONS(1213),
  },
  [365] = {
    [anon_sym_COMMA] = ACTIONS(1216),
    [anon_sym_COLON] = ACTIONS(1216),
    [anon_sym_QMARK] = ACTIONS(759),
    [anon_sym_as] = ACTIONS(761),
  },
  [366] = {
    [aux_sym_optional_binding_condition_repeat1] = STATE(366),
    [anon_sym_COMMA] = ACTIONS(1218),
    [anon_sym_else] = ACTIONS(1221),
    [anon_sym_LBRACE] = ACTIONS(1221),
  },
  [367] = {
    [aux_sym__condition_clause_repeat1] = STATE(308),
    [anon_sym_COMMA] = ACTIONS(1054),
    [anon_sym_else] = ACTIONS(1223),
    [anon_sym_LBRACE] = ACTIONS(1223),
  },
  [368] = {
    [aux_sym_tuple_type_repeat1] = STATE(354),
    [anon_sym_RPAREN] = ACTIONS(1225),
    [anon_sym_COMMA] = ACTIONS(1044),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1227),
  },
  [369] = {
    [sym_boolean_literal] = STATE(128),
    [anon_sym_true] = ACTIONS(1205),
    [anon_sym_false] = ACTIONS(1205),
    [sym_static_string_literal] = ACTIONS(1229),
  },
  [370] = {
    [sym__function_signature] = STATE(336),
    [sym__parameter_clause] = STATE(195),
    [aux_sym__function_signature_repeat1] = STATE(195),
    [anon_sym_LPAREN] = ACTIONS(1231),
  },
  [371] = {
    [aux_sym_tuple_type_repeat1] = STATE(354),
    [anon_sym_RPAREN] = ACTIONS(1233),
    [anon_sym_COMMA] = ACTIONS(1044),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1235),
  },
  [372] = {
    [aux_sym__parameter_clause_repeat1] = STATE(411),
    [anon_sym_RPAREN] = ACTIONS(1237),
    [anon_sym_COMMA] = ACTIONS(1036),
    [anon_sym_EQ] = ACTIONS(1239),
  },
  [373] = {
    [aux_sym__condition_clause_repeat1] = STATE(373),
    [anon_sym_COMMA] = ACTIONS(1241),
    [anon_sym_else] = ACTIONS(1244),
    [anon_sym_LBRACE] = ACTIONS(1244),
  },
  [374] = {
    [sym__function_signature] = STATE(110),
    [sym__parameter_clause] = STATE(62),
    [aux_sym__function_signature_repeat1] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(464),
  },
  [375] = {
    [sym__getter_keyword_clause] = STATE(405),
    [sym__setter_keyword_clause] = STATE(487),
    [anon_sym_get] = ACTIONS(1246),
    [anon_sym_set] = ACTIONS(1248),
  },
  [376] = {
    [sym__code_block] = STATE(136),
    [anon_sym_LBRACE] = ACTIONS(595),
    [anon_sym_throws] = ACTIONS(1250),
    [anon_sym_rethrows] = ACTIONS(1250),
  },
  [377] = {
    [aux_sym_case_statement_repeat1] = STATE(377),
    [anon_sym_COMMA] = ACTIONS(1252),
    [anon_sym_COLON] = ACTIONS(1216),
  },
  [378] = {
    [anon_sym_COMMA] = ACTIONS(1255),
    [anon_sym_else] = ACTIONS(1258),
    [anon_sym_LBRACE] = ACTIONS(1258),
  },
  [379] = {
    [sym__type_identifier] = STATE(651),
    [sym__type_name] = STATE(172),
    [sym_identifier] = ACTIONS(936),
  },
  [380] = {
    [aux_sym__expression_list_repeat1] = STATE(418),
    [anon_sym_SEMI] = ACTIONS(1260),
    [anon_sym_COMMA] = ACTIONS(898),
  },
  [381] = {
    [anon_sym_EQ] = ACTIONS(1262),
    [anon_sym_QMARK] = ACTIONS(759),
    [anon_sym_as] = ACTIONS(761),
  },
  [382] = {
    [aux_sym__parameter_clause_repeat1] = STATE(385),
    [anon_sym_RPAREN] = ACTIONS(1237),
    [anon_sym_COMMA] = ACTIONS(1036),
  },
  [383] = {
    [anon_sym_COMMA] = ACTIONS(1264),
    [anon_sym_else] = ACTIONS(1266),
    [anon_sym_LBRACE] = ACTIONS(1266),
  },
  [384] = {
    [aux_sym__parameter_clause_repeat1] = STATE(411),
    [anon_sym_RPAREN] = ACTIONS(1237),
    [anon_sym_COMMA] = ACTIONS(1036),
  },
  [385] = {
    [aux_sym__parameter_clause_repeat1] = STATE(385),
    [anon_sym_RPAREN] = ACTIONS(1268),
    [anon_sym_COMMA] = ACTIONS(1270),
  },
  [386] = {
    [anon_sym_EQ] = ACTIONS(1273),
    [anon_sym_QMARK] = ACTIONS(759),
    [anon_sym_as] = ACTIONS(761),
  },
  [387] = {
    [anon_sym_SEMI] = ACTIONS(1275),
    [aux_sym__statement_token1] = ACTIONS(1277),
    [anon_sym_else] = ACTIONS(1279),
  },
  [388] = {
    [anon_sym_RPAREN] = ACTIONS(1281),
    [anon_sym_AMP_AMP] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(77),
  },
  [389] = {
    [sym__expression] = STATE(589),
    [anon_sym_SEMI] = ACTIONS(1283),
    [sym_identifier] = ACTIONS(1285),
  },
  [390] = {
    [aux_sym__parameter_clause_repeat1] = STATE(385),
    [anon_sym_RPAREN] = ACTIONS(1287),
    [anon_sym_COMMA] = ACTIONS(1036),
  },
  [391] = {
    [aux_sym__parameter_clause_repeat1] = STATE(385),
    [anon_sym_RPAREN] = ACTIONS(1289),
    [anon_sym_COMMA] = ACTIONS(1036),
  },
  [392] = {
    [aux_sym__parameter_clause_repeat1] = STATE(390),
    [anon_sym_RPAREN] = ACTIONS(1289),
    [anon_sym_COMMA] = ACTIONS(1036),
  },
  [393] = {
    [aux_sym__parameter_clause_repeat1] = STATE(391),
    [anon_sym_RPAREN] = ACTIONS(1291),
    [anon_sym_COMMA] = ACTIONS(1036),
  },
  [394] = {
    [aux_sym__parameter_clause_repeat1] = STATE(385),
    [anon_sym_RPAREN] = ACTIONS(1291),
    [anon_sym_COMMA] = ACTIONS(1036),
  },
  [395] = {
    [aux_sym__parameter_clause_repeat1] = STATE(394),
    [anon_sym_RPAREN] = ACTIONS(1192),
    [anon_sym_COMMA] = ACTIONS(1036),
  },
  [396] = {
    [anon_sym_RPAREN] = ACTIONS(1293),
    [anon_sym_COMMA] = ACTIONS(1293),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1293),
  },
  [397] = {
    [aux_sym__parameter_clause_repeat1] = STATE(385),
    [anon_sym_RPAREN] = ACTIONS(1192),
    [anon_sym_COMMA] = ACTIONS(1036),
  },
  [398] = {
    [anon_sym_COMMA] = ACTIONS(1295),
    [anon_sym_else] = ACTIONS(1295),
    [anon_sym_LBRACE] = ACTIONS(1295),
  },
  [399] = {
    [anon_sym_COMMA] = ACTIONS(1221),
    [anon_sym_else] = ACTIONS(1221),
    [anon_sym_LBRACE] = ACTIONS(1221),
  },
  [400] = {
    [sym_precedence_clause] = STATE(615),
    [anon_sym_RBRACE] = ACTIONS(1297),
    [anon_sym_precedence] = ACTIONS(1014),
  },
  [401] = {
    [sym_associativity_clause] = STATE(615),
    [anon_sym_RBRACE] = ACTIONS(1297),
    [anon_sym_associativity] = ACTIONS(1016),
  },
  [402] = {
    [aux_sym__parameter_clause_repeat1] = STATE(385),
    [anon_sym_RPAREN] = ACTIONS(1128),
    [anon_sym_COMMA] = ACTIONS(1036),
  },
  [403] = {
    [aux_sym_case_statement_repeat1] = STATE(377),
    [anon_sym_COMMA] = ACTIONS(1030),
    [anon_sym_COLON] = ACTIONS(1299),
  },
  [404] = {
    [sym__code_block] = STATE(505),
    [sym__getter_setter_keyword_block] = STATE(505),
    [anon_sym_LBRACE] = ACTIONS(1301),
  },
  [405] = {
    [sym__setter_keyword_clause] = STATE(608),
    [anon_sym_RBRACE] = ACTIONS(1303),
    [anon_sym_set] = ACTIONS(1305),
  },
  [406] = {
    [aux_sym_availability_condition_repeat1] = STATE(407),
    [anon_sym_RPAREN] = ACTIONS(1307),
    [anon_sym_COMMA] = ACTIONS(1309),
  },
  [407] = {
    [aux_sym_availability_condition_repeat1] = STATE(407),
    [anon_sym_RPAREN] = ACTIONS(1311),
    [anon_sym_COMMA] = ACTIONS(1313),
  },
  [408] = {
    [anon_sym_COMMA] = ACTIONS(1316),
    [anon_sym_else] = ACTIONS(1316),
    [anon_sym_LBRACE] = ACTIONS(1316),
  },
  [409] = {
    [anon_sym_SEMI] = ACTIONS(1318),
    [aux_sym__statement_token1] = ACTIONS(1320),
    [sym_identifier] = ACTIONS(1322),
  },
  [410] = {
    [anon_sym_SEMI] = ACTIONS(1324),
    [aux_sym__statement_token1] = ACTIONS(1326),
    [sym_identifier] = ACTIONS(1328),
  },
  [411] = {
    [aux_sym__parameter_clause_repeat1] = STATE(385),
    [anon_sym_RPAREN] = ACTIONS(1330),
    [anon_sym_COMMA] = ACTIONS(1036),
  },
  [412] = {
    [aux_sym__parameter_clause_repeat1] = STATE(424),
    [anon_sym_RPAREN] = ACTIONS(1330),
    [anon_sym_COMMA] = ACTIONS(1036),
  },
  [413] = {
    [sym__code_block] = STATE(118),
    [sym__getter_setter_keyword_block] = STATE(118),
    [anon_sym_LBRACE] = ACTIONS(1332),
  },
  [414] = {
    [aux_sym__tuple_pattern_element_list_repeat1] = STATE(439),
    [anon_sym_RPAREN] = ACTIONS(1334),
    [anon_sym_COMMA] = ACTIONS(989),
  },
  [415] = {
    [anon_sym_RPAREN] = ACTIONS(1336),
    [anon_sym_COMMA] = ACTIONS(1336),
    [anon_sym_EQ] = ACTIONS(1338),
  },
  [416] = {
    [sym__type_identifier] = STATE(177),
    [sym__type_name] = STATE(172),
    [sym_identifier] = ACTIONS(936),
  },
  [417] = {
    [sym__code_block] = STATE(137),
    [sym__getter_setter_keyword_block] = STATE(137),
    [anon_sym_LBRACE] = ACTIONS(1332),
  },
  [418] = {
    [aux_sym__expression_list_repeat1] = STATE(418),
    [anon_sym_SEMI] = ACTIONS(1340),
    [anon_sym_COMMA] = ACTIONS(1342),
  },
  [419] = {
    [anon_sym_RPAREN] = ACTIONS(1345),
    [anon_sym_COMMA] = ACTIONS(1345),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1345),
  },
  [420] = {
    [anon_sym_SEMI] = ACTIONS(1347),
    [aux_sym__statement_token1] = ACTIONS(1349),
    [aux_sym_line_control_statement_token1] = ACTIONS(1351),
  },
  [421] = {
    [anon_sym_RPAREN] = ACTIONS(1196),
    [anon_sym_COMMA] = ACTIONS(1196),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1196),
  },
  [422] = {
    [aux_sym__parameter_clause_repeat1] = STATE(430),
    [anon_sym_RPAREN] = ACTIONS(1353),
    [anon_sym_COMMA] = ACTIONS(1036),
  },
  [423] = {
    [aux_sym_availability_condition_repeat1] = STATE(442),
    [anon_sym_RPAREN] = ACTIONS(1355),
    [anon_sym_COMMA] = ACTIONS(1309),
  },
  [424] = {
    [aux_sym__parameter_clause_repeat1] = STATE(385),
    [anon_sym_RPAREN] = ACTIONS(1353),
    [anon_sym_COMMA] = ACTIONS(1036),
  },
  [425] = {
    [anon_sym_COMMA] = ACTIONS(1244),
    [anon_sym_else] = ACTIONS(1244),
    [anon_sym_LBRACE] = ACTIONS(1244),
  },
  [426] = {
    [anon_sym_RPAREN] = ACTIONS(1357),
    [anon_sym_COMMA] = ACTIONS(1357),
    [anon_sym_EQ] = ACTIONS(1359),
  },
  [427] = {
    [anon_sym_LPAREN] = ACTIONS(1361),
    [anon_sym_BANG] = ACTIONS(1363),
    [anon_sym_QMARK] = ACTIONS(1363),
  },
  [428] = {
    [sym__type_identifier] = STATE(665),
    [sym__type_name] = STATE(172),
    [sym_identifier] = ACTIONS(936),
  },
  [429] = {
    [anon_sym_SEMI] = ACTIONS(843),
    [aux_sym__statement_token1] = ACTIONS(472),
    [anon_sym_COLON] = ACTIONS(1365),
  },
  [430] = {
    [aux_sym__parameter_clause_repeat1] = STATE(385),
    [anon_sym_RPAREN] = ACTIONS(1367),
    [anon_sym_COMMA] = ACTIONS(1036),
  },
  [431] = {
    [anon_sym_RPAREN] = ACTIONS(1369),
    [anon_sym_COMMA] = ACTIONS(1369),
    [anon_sym_EQ] = ACTIONS(1371),
  },
  [432] = {
    [anon_sym_SEMI] = ACTIONS(1211),
    [aux_sym__statement_token1] = ACTIONS(553),
    [anon_sym_COMMA] = ACTIONS(1211),
  },
  [433] = {
    [sym__type_identifier] = STATE(69),
    [sym__type_name] = STATE(58),
    [sym_identifier] = ACTIONS(953),
  },
  [434] = {
    [anon_sym_SEMI] = ACTIONS(1373),
    [aux_sym__statement_token1] = ACTIONS(560),
    [anon_sym_COMMA] = ACTIONS(1373),
  },
  [435] = {
    [sym__expression] = STATE(637),
    [anon_sym_SEMI] = ACTIONS(1375),
    [sym_identifier] = ACTIONS(1377),
  },
  [436] = {
    [anon_sym_SEMI] = ACTIONS(1379),
    [aux_sym__statement_token1] = ACTIONS(1381),
    [anon_sym_catch] = ACTIONS(1379),
  },
  [437] = {
    [sym__code_block] = STATE(574),
    [sym__getter_setter_keyword_block] = STATE(574),
    [anon_sym_LBRACE] = ACTIONS(1301),
  },
  [438] = {
    [anon_sym_SEMI] = ACTIONS(1154),
    [aux_sym__statement_token1] = ACTIONS(568),
    [anon_sym_DOT] = ACTIONS(1154),
  },
  [439] = {
    [aux_sym__tuple_pattern_element_list_repeat1] = STATE(439),
    [anon_sym_RPAREN] = ACTIONS(1132),
    [anon_sym_COMMA] = ACTIONS(1383),
  },
  [440] = {
    [sym__type_identifier] = STATE(217),
    [sym__type_name] = STATE(199),
    [sym_identifier] = ACTIONS(940),
  },
  [441] = {
    [anon_sym_SEMI] = ACTIONS(1386),
    [aux_sym__statement_token1] = ACTIONS(619),
    [anon_sym_LBRACE] = ACTIONS(1386),
  },
  [442] = {
    [aux_sym_availability_condition_repeat1] = STATE(407),
    [anon_sym_RPAREN] = ACTIONS(1388),
    [anon_sym_COMMA] = ACTIONS(1309),
  },
  [443] = {
    [sym_precedence_clause] = STATE(585),
    [anon_sym_RBRACE] = ACTIONS(1390),
    [anon_sym_precedence] = ACTIONS(1014),
  },
  [444] = {
    [sym_associativity_clause] = STATE(585),
    [anon_sym_RBRACE] = ACTIONS(1390),
    [anon_sym_associativity] = ACTIONS(1016),
  },
  [445] = {
    [anon_sym_left] = ACTIONS(1392),
    [anon_sym_right] = ACTIONS(1392),
    [anon_sym_none] = ACTIONS(1392),
  },
  [446] = {
    [anon_sym_COMMA] = ACTIONS(1394),
    [anon_sym_else] = ACTIONS(1394),
    [anon_sym_LBRACE] = ACTIONS(1394),
  },
  [447] = {
    [sym__setter_keyword_clause] = STATE(593),
    [anon_sym_RBRACE] = ACTIONS(1396),
    [anon_sym_set] = ACTIONS(1398),
  },
  [448] = {
    [anon_sym_SEMI] = ACTIONS(1400),
    [aux_sym__statement_token1] = ACTIONS(1402),
    [anon_sym_catch] = ACTIONS(1400),
  },
  [449] = {
    [aux_sym_constant_declaration_repeat1] = STATE(455),
    [anon_sym_SEMI] = ACTIONS(587),
    [anon_sym_COMMA] = ACTIONS(1404),
  },
  [450] = {
    [anon_sym_COMMA] = ACTIONS(1406),
    [anon_sym_else] = ACTIONS(1406),
    [anon_sym_LBRACE] = ACTIONS(1406),
  },
  [451] = {
    [anon_sym_SEMI] = ACTIONS(1408),
    [aux_sym__statement_token1] = ACTIONS(599),
    [anon_sym_LBRACE] = ACTIONS(1408),
  },
  [452] = {
    [anon_sym_SEMI] = ACTIONS(1410),
    [aux_sym__statement_token1] = ACTIONS(579),
    [anon_sym_COMMA] = ACTIONS(1410),
  },
  [453] = {
    [aux_sym__parameter_clause_repeat1] = STATE(385),
    [anon_sym_RPAREN] = ACTIONS(1034),
    [anon_sym_COMMA] = ACTIONS(1036),
  },
  [454] = {
    [anon_sym_COMMA] = ACTIONS(1412),
    [anon_sym_else] = ACTIONS(1412),
    [anon_sym_LBRACE] = ACTIONS(1412),
  },
  [455] = {
    [aux_sym_constant_declaration_repeat1] = STATE(458),
    [anon_sym_SEMI] = ACTIONS(597),
    [anon_sym_COMMA] = ACTIONS(1404),
  },
  [456] = {
    [aux_sym_availability_condition_repeat1] = STATE(406),
    [anon_sym_RPAREN] = ACTIONS(1388),
    [anon_sym_COMMA] = ACTIONS(1309),
  },
  [457] = {
    [anon_sym_COMMA] = ACTIONS(1414),
    [anon_sym_else] = ACTIONS(1056),
    [anon_sym_LBRACE] = ACTIONS(1056),
  },
  [458] = {
    [aux_sym_constant_declaration_repeat1] = STATE(458),
    [anon_sym_SEMI] = ACTIONS(553),
    [anon_sym_COMMA] = ACTIONS(1416),
  },
  [459] = {
    [sym__expression] = STATE(384),
    [sym_identifier] = ACTIONS(1419),
  },
  [460] = {
    [sym__code_block] = STATE(496),
    [anon_sym_LBRACE] = ACTIONS(627),
  },
  [461] = {
    [anon_sym_SEMI] = ACTIONS(1421),
    [aux_sym__statement_token1] = ACTIONS(617),
  },
  [462] = {
    [anon_sym__] = ACTIONS(1423),
    [sym_identifier] = ACTIONS(1423),
  },
  [463] = {
    [sym__expression] = STATE(569),
    [sym_identifier] = ACTIONS(1425),
  },
  [464] = {
    [anon_sym_SEMI] = ACTIONS(1427),
    [aux_sym__statement_token1] = ACTIONS(637),
  },
  [465] = {
    [anon_sym_SEMI] = ACTIONS(1429),
    [aux_sym__statement_token1] = ACTIONS(1431),
  },
  [466] = {
    [anon_sym_SEMI] = ACTIONS(1433),
    [aux_sym__statement_token1] = ACTIONS(1435),
  },
  [467] = {
    [anon_sym_SEMI] = ACTIONS(1437),
    [aux_sym__statement_token1] = ACTIONS(1439),
  },
  [468] = {
    [anon_sym_SEMI] = ACTIONS(1441),
    [aux_sym__statement_token1] = ACTIONS(1443),
  },
  [469] = {
    [sym__getter_setter_keyword_block] = STATE(269),
    [anon_sym_LBRACE] = ACTIONS(1445),
  },
  [470] = {
    [sym__expression] = STATE(412),
    [sym_identifier] = ACTIONS(1447),
  },
  [471] = {
    [sym__type_annotation] = STATE(372),
    [anon_sym_COLON] = ACTIONS(926),
  },
  [472] = {
    [anon_sym_SEMI] = ACTIONS(1449),
    [aux_sym__statement_token1] = ACTIONS(683),
  },
  [473] = {
    [anon_sym_SEMI] = ACTIONS(1451),
    [aux_sym__statement_token1] = ACTIONS(645),
  },
  [474] = {
    [anon_sym_SEMI] = ACTIONS(1453),
    [aux_sym__statement_token1] = ACTIONS(681),
  },
  [475] = {
    [sym__getter_setter_keyword_block] = STATE(282),
    [anon_sym_LBRACE] = ACTIONS(1445),
  },
  [476] = {
    [sym__type_annotation] = STATE(469),
    [anon_sym_COLON] = ACTIONS(926),
  },
  [477] = {
    [anon_sym_SEMI] = ACTIONS(1455),
    [aux_sym__statement_token1] = ACTIONS(1457),
  },
  [478] = {
    [sym__expression] = STATE(97),
    [sym_identifier] = ACTIONS(1459),
  },
  [479] = {
    [sym__expression] = STATE(392),
    [sym_identifier] = ACTIONS(1461),
  },
  [480] = {
    [sym__expression] = STATE(393),
    [sym_identifier] = ACTIONS(1463),
  },
  [481] = {
    [sym__expression] = STATE(395),
    [sym_identifier] = ACTIONS(1465),
  },
  [482] = {
    [sym__code_block] = STATE(387),
    [anon_sym_LBRACE] = ACTIONS(627),
  },
  [483] = {
    [anon_sym_SEMI] = ACTIONS(1467),
    [aux_sym__statement_token1] = ACTIONS(679),
  },
  [484] = {
    [sym__type_annotation] = STATE(353),
    [anon_sym_COLON] = ACTIONS(926),
  },
  [485] = {
    [anon_sym_SEMI] = ACTIONS(1469),
    [aux_sym__statement_token1] = ACTIONS(639),
  },
  [486] = {
    [anon_sym__] = ACTIONS(1471),
    [sym_identifier] = ACTIONS(1471),
  },
  [487] = {
    [sym__getter_keyword_clause] = STATE(608),
    [anon_sym_get] = ACTIONS(1305),
  },
  [488] = {
    [anon_sym_SEMI] = ACTIONS(1473),
    [aux_sym__statement_token1] = ACTIONS(677),
  },
  [489] = {
    [sym__type_annotation] = STATE(331),
    [anon_sym_COLON] = ACTIONS(926),
  },
  [490] = {
    [anon_sym_RBRACE] = ACTIONS(1475),
    [anon_sym_associativity] = ACTIONS(1475),
  },
  [491] = {
    [anon_sym_SEMI] = ACTIONS(1477),
    [aux_sym__statement_token1] = ACTIONS(1479),
  },
  [492] = {
    [anon_sym_SEMI] = ACTIONS(1481),
    [aux_sym__statement_token1] = ACTIONS(1483),
  },
  [493] = {
    [anon_sym_SEMI] = ACTIONS(1485),
    [aux_sym__statement_token1] = ACTIONS(1487),
  },
  [494] = {
    [sym__expression] = STATE(103),
    [sym_identifier] = ACTIONS(1489),
  },
  [495] = {
    [sym__code_block] = STATE(500),
    [anon_sym_LBRACE] = ACTIONS(627),
  },
  [496] = {
    [anon_sym_SEMI] = ACTIONS(1491),
    [aux_sym__statement_token1] = ACTIONS(1493),
  },
  [497] = {
    [anon_sym_RBRACE] = ACTIONS(1495),
    [anon_sym_precedence] = ACTIONS(1495),
  },
  [498] = {
    [sym__expression] = STATE(547),
    [sym_identifier] = ACTIONS(1497),
  },
  [499] = {
    [sym__code_block] = STATE(523),
    [anon_sym_LBRACE] = ACTIONS(627),
  },
  [500] = {
    [anon_sym_SEMI] = ACTIONS(1499),
    [aux_sym__statement_token1] = ACTIONS(1501),
  },
  [501] = {
    [anon_sym_SEMI] = ACTIONS(1503),
    [aux_sym__statement_token1] = ACTIONS(1505),
  },
  [502] = {
    [anon_sym_RPAREN] = ACTIONS(1150),
    [anon_sym_LBRACE] = ACTIONS(1150),
  },
  [503] = {
    [sym__getter_keyword_clause] = STATE(593),
    [anon_sym_get] = ACTIONS(1398),
  },
  [504] = {
    [anon_sym_SEMI] = ACTIONS(1507),
    [aux_sym__statement_token1] = ACTIONS(669),
  },
  [505] = {
    [anon_sym_SEMI] = ACTIONS(1509),
    [aux_sym__statement_token1] = ACTIONS(621),
  },
  [506] = {
    [sym__expression] = STATE(516),
    [sym_identifier] = ACTIONS(1511),
  },
  [507] = {
    [sym__type_annotation] = STATE(300),
    [anon_sym_COLON] = ACTIONS(926),
  },
  [508] = {
    [sym__type_annotation] = STATE(404),
    [anon_sym_COLON] = ACTIONS(926),
  },
  [509] = {
    [anon_sym_SEMI] = ACTIONS(1513),
    [aux_sym__statement_token1] = ACTIONS(667),
  },
  [510] = {
    [sym__subscript_result] = STATE(475),
    [anon_sym_DASH_GT] = ACTIONS(1515),
  },
  [511] = {
    [sym__parameter_clause] = STATE(224),
    [anon_sym_LPAREN] = ACTIONS(464),
  },
  [512] = {
    [sym__code_block] = STATE(529),
    [anon_sym_LBRACE] = ACTIONS(627),
  },
  [513] = {
    [sym__type_annotation] = STATE(413),
    [anon_sym_COLON] = ACTIONS(926),
  },
  [514] = {
    [anon_sym_SEMI] = ACTIONS(1517),
    [aux_sym__statement_token1] = ACTIONS(665),
  },
  [515] = {
    [anon_sym_case] = ACTIONS(1519),
    [anon_sym_enum] = ACTIONS(1521),
  },
  [516] = {
    [anon_sym_else] = ACTIONS(1223),
    [anon_sym_LBRACE] = ACTIONS(1223),
  },
  [517] = {
    [sym__subscript_result] = STATE(417),
    [anon_sym_DASH_GT] = ACTIONS(1515),
  },
  [518] = {
    [sym__parameter_clause] = STATE(376),
    [anon_sym_LPAREN] = ACTIONS(464),
  },
  [519] = {
    [anon_sym_SEMI] = ACTIONS(1523),
    [aux_sym__statement_token1] = ACTIONS(661),
  },
  [520] = {
    [anon_sym_SEMI] = ACTIONS(1525),
    [aux_sym__statement_token1] = ACTIONS(659),
  },
  [521] = {
    [sym__expression] = STATE(434),
    [sym_identifier] = ACTIONS(1527),
  },
  [522] = {
    [sym__expression] = STATE(533),
    [sym_identifier] = ACTIONS(1529),
  },
  [523] = {
    [anon_sym_SEMI] = ACTIONS(1531),
    [aux_sym__statement_token1] = ACTIONS(1533),
  },
  [524] = {
    [anon_sym_SEMI] = ACTIONS(1535),
    [aux_sym__statement_token1] = ACTIONS(673),
  },
  [525] = {
    [anon_sym_SEMI] = ACTIONS(1537),
    [aux_sym__statement_token1] = ACTIONS(1539),
  },
  [526] = {
    [sym__code_block] = STATE(532),
    [anon_sym_LBRACE] = ACTIONS(627),
  },
  [527] = {
    [sym__expression] = STATE(460),
    [sym_identifier] = ACTIONS(1541),
  },
  [528] = {
    [anon_sym_RPAREN] = ACTIONS(1543),
    [anon_sym_COMMA] = ACTIONS(1543),
  },
  [529] = {
    [anon_sym_SEMI] = ACTIONS(1545),
    [aux_sym__statement_token1] = ACTIONS(1547),
  },
  [530] = {
    [anon_sym_SEMI] = ACTIONS(1549),
    [aux_sym__statement_token1] = ACTIONS(615),
  },
  [531] = {
    [anon_sym_SEMI] = ACTIONS(1551),
    [aux_sym__statement_token1] = ACTIONS(1553),
  },
  [532] = {
    [anon_sym_SEMI] = ACTIONS(1555),
    [aux_sym__statement_token1] = ACTIONS(1557),
  },
  [533] = {
    [anon_sym_SEMI] = ACTIONS(1559),
    [aux_sym__statement_token1] = ACTIONS(1561),
  },
  [534] = {
    [anon_sym_RPAREN] = ACTIONS(1563),
    [anon_sym_COMMA] = ACTIONS(1563),
  },
  [535] = {
    [sym__subscript_result] = STATE(437),
    [anon_sym_DASH_GT] = ACTIONS(1515),
  },
  [536] = {
    [sym__expression] = STATE(452),
    [sym_identifier] = ACTIONS(1565),
  },
  [537] = {
    [sym__parameter_clause] = STATE(338),
    [anon_sym_LPAREN] = ACTIONS(464),
  },
  [538] = {
    [sym__expression] = STATE(528),
    [sym_identifier] = ACTIONS(1567),
  },
  [539] = {
    [anon_sym_SEMI] = ACTIONS(1569),
    [aux_sym__statement_token1] = ACTIONS(1571),
  },
  [540] = {
    [anon_sym_RPAREN] = ACTIONS(1369),
    [anon_sym_COMMA] = ACTIONS(1369),
  },
  [541] = {
    [anon_sym_SEMI] = ACTIONS(1573),
    [aux_sym__statement_token1] = ACTIONS(1575),
  },
  [542] = {
    [sym__code_block] = STATE(662),
    [anon_sym_LBRACE] = ACTIONS(595),
  },
  [543] = {
    [sym__expression] = STATE(534),
    [sym_identifier] = ACTIONS(1577),
  },
  [544] = {
    [anon_sym_SEMI] = ACTIONS(1579),
    [aux_sym__statement_token1] = ACTIONS(1581),
  },
  [545] = {
    [anon_sym_RPAREN] = ACTIONS(1583),
    [anon_sym_LBRACE] = ACTIONS(1583),
  },
  [546] = {
    [sym__parameter_clause] = STATE(661),
    [anon_sym_LPAREN] = ACTIONS(464),
  },
  [547] = {
    [sym__code_block] = STATE(544),
    [anon_sym_LBRACE] = ACTIONS(627),
  },
  [548] = {
    [sym__code_block] = STATE(473),
    [anon_sym_LBRACE] = ACTIONS(627),
  },
  [549] = {
    [anon_sym_SEMI] = ACTIONS(1585),
    [aux_sym__statement_token1] = ACTIONS(675),
  },
  [550] = {
    [sym_identifier] = ACTIONS(1587),
    [sym_operator] = ACTIONS(1587),
  },
  [551] = {
    [sym_identifier] = ACTIONS(1589),
    [sym_operator] = ACTIONS(1589),
  },
  [552] = {
    [anon_sym_RPAREN] = ACTIONS(1591),
    [anon_sym_COMMA] = ACTIONS(1591),
  },
  [553] = {
    [anon_sym_SEMI] = ACTIONS(1593),
    [aux_sym__statement_token1] = ACTIONS(1595),
  },
  [554] = {
    [anon_sym__] = ACTIONS(1597),
    [sym_identifier] = ACTIONS(1597),
  },
  [555] = {
    [anon_sym_SEMI] = ACTIONS(1599),
    [aux_sym__statement_token1] = ACTIONS(1601),
  },
  [556] = {
    [anon_sym_SEMI] = ACTIONS(1603),
    [aux_sym__statement_token1] = ACTIONS(1605),
  },
  [557] = {
    [anon_sym_SEMI] = ACTIONS(1607),
    [aux_sym__statement_token1] = ACTIONS(1609),
  },
  [558] = {
    [sym__expression] = STATE(540),
    [sym_identifier] = ACTIONS(1611),
  },
  [559] = {
    [sym__code_block] = STATE(131),
    [anon_sym_LBRACE] = ACTIONS(595),
  },
  [560] = {
    [anon_sym_SEMI] = ACTIONS(1613),
    [aux_sym__statement_token1] = ACTIONS(649),
  },
  [561] = {
    [sym__expression] = STATE(454),
    [sym_identifier] = ACTIONS(1615),
  },
  [562] = {
    [anon_sym_SEMI] = ACTIONS(1617),
    [aux_sym__statement_token1] = ACTIONS(651),
  },
  [563] = {
    [sym__code_block] = STATE(504),
    [anon_sym_LBRACE] = ACTIONS(627),
  },
  [564] = {
    [sym__type_annotation] = STATE(431),
    [anon_sym_COLON] = ACTIONS(926),
  },
  [565] = {
    [sym__expression] = STATE(450),
    [sym_identifier] = ACTIONS(1619),
  },
  [566] = {
    [anon_sym_SEMI] = ACTIONS(1621),
    [aux_sym__statement_token1] = ACTIONS(653),
  },
  [567] = {
    [sym_identifier] = ACTIONS(1623),
    [sym_operator] = ACTIONS(1623),
  },
  [568] = {
    [sym_identifier] = ACTIONS(1625),
    [sym_operator] = ACTIONS(1625),
  },
  [569] = {
    [anon_sym_SEMI] = ACTIONS(1340),
    [anon_sym_COMMA] = ACTIONS(1340),
  },
  [570] = {
    [sym__expression] = STATE(666),
    [sym_identifier] = ACTIONS(1627),
  },
  [571] = {
    [sym__expression] = STATE(422),
    [sym_identifier] = ACTIONS(1629),
  },
  [572] = {
    [anon_sym_RPAREN] = ACTIONS(1311),
    [anon_sym_COMMA] = ACTIONS(1311),
  },
  [573] = {
    [anon_sym_SEMI] = ACTIONS(1631),
    [aux_sym__statement_token1] = ACTIONS(1633),
  },
  [574] = {
    [anon_sym_SEMI] = ACTIONS(1635),
    [aux_sym__statement_token1] = ACTIONS(655),
  },
  [575] = {
    [anon_sym_SEMI] = ACTIONS(1637),
    [aux_sym__statement_token1] = ACTIONS(663),
  },
  [576] = {
    [sym__code_block] = STATE(146),
    [anon_sym_LBRACE] = ACTIONS(595),
  },
  [577] = {
    [anon_sym_RPAREN] = ACTIONS(1188),
    [anon_sym_LBRACE] = ACTIONS(1188),
  },
  [578] = {
    [sym_identifier] = ACTIONS(1639),
    [sym_operator] = ACTIONS(1639),
  },
  [579] = {
    [sym__code_block] = STATE(287),
    [anon_sym_LBRACE] = ACTIONS(627),
  },
  [580] = {
    [sym__code_block] = STATE(465),
    [anon_sym_LBRACE] = ACTIONS(627),
  },
  [581] = {
    [sym__expression] = STATE(499),
    [sym_identifier] = ACTIONS(1641),
  },
  [582] = {
    [anon_sym_SEMI] = ACTIONS(1643),
    [aux_sym__statement_token1] = ACTIONS(671),
  },
  [583] = {
    [sym__code_block] = STATE(501),
    [anon_sym_LBRACE] = ACTIONS(627),
  },
  [584] = {
    [sym__type_annotation] = STATE(426),
    [anon_sym_COLON] = ACTIONS(926),
  },
  [585] = {
    [anon_sym_RBRACE] = ACTIONS(1645),
  },
  [586] = {
    [sym_identifier] = ACTIONS(1647),
  },
  [587] = {
    [anon_sym_RPAREN] = ACTIONS(1060),
  },
  [588] = {
    [sym_identifier] = ACTIONS(1649),
  },
  [589] = {
    [anon_sym_SEMI] = ACTIONS(1651),
  },
  [590] = {
    [anon_sym_RPAREN] = ACTIONS(1653),
  },
  [591] = {
    [anon_sym_RPAREN] = ACTIONS(1655),
  },
  [592] = {
    [anon_sym_RPAREN] = ACTIONS(1657),
  },
  [593] = {
    [anon_sym_RBRACE] = ACTIONS(1659),
  },
  [594] = {
    [anon_sym_LBRACE] = ACTIONS(1661),
  },
  [595] = {
    [sym_static_string_literal] = ACTIONS(1663),
  },
  [596] = {
    [anon_sym_in] = ACTIONS(1665),
  },
  [597] = {
    [sym_identifier] = ACTIONS(1667),
  },
  [598] = {
    [aux_sym_availability_condition_token1] = ACTIONS(1669),
  },
  [599] = {
    [anon_sym_RPAREN] = ACTIONS(1084),
  },
  [600] = {
    [sym_identifier] = ACTIONS(1671),
  },
  [601] = {
    [anon_sym_RPAREN] = ACTIONS(1116),
  },
  [602] = {
    [anon_sym_in] = ACTIONS(1004),
  },
  [603] = {
    [sym_identifier] = ACTIONS(1673),
  },
  [604] = {
    [anon_sym_LBRACE] = ACTIONS(1675),
  },
  [605] = {
    [sym_identifier] = ACTIONS(1677),
  },
  [606] = {
    [anon_sym_LBRACE] = ACTIONS(1679),
  },
  [607] = {
    [anon_sym_LPAREN] = ACTIONS(1681),
  },
  [608] = {
    [anon_sym_RBRACE] = ACTIONS(1683),
  },
  [609] = {
    [anon_sym_LBRACE] = ACTIONS(1685),
  },
  [610] = {
    [anon_sym_RPAREN] = ACTIONS(1166),
  },
  [611] = {
    [sym_identifier] = ACTIONS(1687),
  },
  [612] = {
    [anon_sym_LBRACE] = ACTIONS(1689),
  },
  [613] = {
    [sym_identifier] = ACTIONS(1691),
  },
  [614] = {
    [sym_identifier] = ACTIONS(1693),
  },
  [615] = {
    [anon_sym_RBRACE] = ACTIONS(1695),
  },
  [616] = {
    [anon_sym_RPAREN] = ACTIONS(1233),
  },
  [617] = {
    [anon_sym_enum] = ACTIONS(1697),
  },
  [618] = {
    [anon_sym_LBRACE] = ACTIONS(1699),
  },
  [619] = {
    [anon_sym_LBRACE] = ACTIONS(1701),
  },
  [620] = {
    [anon_sym_RPAREN] = ACTIONS(1703),
  },
  [621] = {
    [anon_sym_RPAREN] = ACTIONS(1225),
  },
  [622] = {
    [anon_sym_operator] = ACTIONS(1705),
  },
  [623] = {
    [anon_sym_operator] = ACTIONS(1707),
  },
  [624] = {
    [ts_builtin_sym_end] = ACTIONS(1709),
  },
  [625] = {
    [anon_sym_EQ] = ACTIONS(1711),
  },
  [626] = {
    [sym_identifier] = ACTIONS(1713),
  },
  [627] = {
    [anon_sym_LPAREN] = ACTIONS(1715),
  },
  [628] = {
    [sym_identifier] = ACTIONS(1717),
  },
  [629] = {
    [anon_sym_RPAREN] = ACTIONS(1719),
  },
  [630] = {
    [anon_sym_COLON] = ACTIONS(1721),
  },
  [631] = {
    [sym_identifier] = ACTIONS(1723),
  },
  [632] = {
    [anon_sym_RPAREN] = ACTIONS(1104),
  },
  [633] = {
    [anon_sym_RBRACE] = ACTIONS(1012),
  },
  [634] = {
    [anon_sym_RPAREN] = ACTIONS(1080),
  },
  [635] = {
    [aux_sym_availability_condition_token1] = ACTIONS(1725),
  },
  [636] = {
    [anon_sym_RPAREN] = ACTIONS(1727),
  },
  [637] = {
    [anon_sym_SEMI] = ACTIONS(1283),
  },
  [638] = {
    [anon_sym_RPAREN] = ACTIONS(1042),
  },
  [639] = {
    [anon_sym_LBRACE] = ACTIONS(1729),
  },
  [640] = {
    [anon_sym_RPAREN] = ACTIONS(1098),
  },
  [641] = {
    [anon_sym_RPAREN] = ACTIONS(1176),
  },
  [642] = {
    [anon_sym_RPAREN] = ACTIONS(1731),
  },
  [643] = {
    [anon_sym_EQ] = ACTIONS(1733),
  },
  [644] = {
    [anon_sym_RPAREN] = ACTIONS(1735),
  },
  [645] = {
    [anon_sym_SEMI] = ACTIONS(1737),
  },
  [646] = {
    [anon_sym_DOT] = ACTIONS(1739),
  },
  [647] = {
    [anon_sym_LBRACE] = ACTIONS(1741),
  },
  [648] = {
    [anon_sym_LBRACE] = ACTIONS(1743),
  },
  [649] = {
    [anon_sym_LBRACE] = ACTIONS(1745),
  },
  [650] = {
    [anon_sym_LBRACE] = ACTIONS(1747),
  },
  [651] = {
    [anon_sym_LBRACE] = ACTIONS(1749),
  },
  [652] = {
    [sym_identifier] = ACTIONS(1751),
  },
  [653] = {
    [anon_sym_LBRACE] = ACTIONS(1753),
  },
  [654] = {
    [anon_sym_RBRACE] = ACTIONS(1026),
  },
  [655] = {
    [anon_sym_LBRACE] = ACTIONS(1755),
  },
  [656] = {
    [anon_sym_LBRACE] = ACTIONS(1757),
  },
  [657] = {
    [anon_sym_LPAREN] = ACTIONS(1759),
  },
  [658] = {
    [anon_sym_RPAREN] = ACTIONS(1134),
  },
  [659] = {
    [sym_operator] = ACTIONS(1761),
  },
  [660] = {
    [sym_operator] = ACTIONS(1763),
  },
  [661] = {
    [anon_sym_DASH_GT] = ACTIONS(1765),
  },
  [662] = {
    [anon_sym_while] = ACTIONS(1767),
  },
  [663] = {
    [sym_identifier] = ACTIONS(1769),
  },
  [664] = {
    [anon_sym_else] = ACTIONS(1771),
  },
  [665] = {
    [anon_sym_LBRACE] = ACTIONS(1773),
  },
  [666] = {
    [anon_sym_LBRACE] = ACTIONS(1775),
  },
  [667] = {
    [anon_sym_DOT] = ACTIONS(1777),
  },
  [668] = {
    [sym_identifier] = ACTIONS(1779),
  },
  [669] = {
    [anon_sym_LPAREN] = ACTIONS(1781),
  },
  [670] = {
    [aux_sym_precedence_clause_token1] = ACTIONS(1783),
  },
  [671] = {
    [sym_identifier] = ACTIONS(1785),
  },
  [672] = {
    [sym_identifier] = ACTIONS(1787),
  },
  [673] = {
    [sym_identifier] = ACTIONS(1789),
  },
  [674] = {
    [sym_identifier] = ACTIONS(1791),
  },
  [675] = {
    [anon_sym_DOT] = ACTIONS(1793),
  },
  [676] = {
    [sym_identifier] = ACTIONS(1795),
  },
  [677] = {
    [sym_operator] = ACTIONS(1797),
  },
  [678] = {
    [sym_operator] = ACTIONS(1799),
  },
  [679] = {
    [anon_sym_LPAREN] = ACTIONS(1801),
  },
  [680] = {
    [anon_sym_enum] = ACTIONS(1521),
  },
  [681] = {
    [anon_sym_operator] = ACTIONS(1803),
  },
  [682] = {
    [anon_sym_operator] = ACTIONS(1805),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [5] = {.count = 1, .reusable = false}, SHIFT(64),
  [7] = {.count = 1, .reusable = false}, SHIFT(171),
  [9] = {.count = 1, .reusable = false}, SHIFT(156),
  [11] = {.count = 1, .reusable = false}, SHIFT(113),
  [13] = {.count = 1, .reusable = false}, SHIFT(542),
  [15] = {.count = 1, .reusable = false}, SHIFT(173),
  [17] = {.count = 1, .reusable = false}, SHIFT(175),
  [19] = {.count = 1, .reusable = false}, SHIFT(570),
  [21] = {.count = 1, .reusable = false}, SHIFT(409),
  [23] = {.count = 1, .reusable = false}, SHIFT(410),
  [25] = {.count = 1, .reusable = false}, SHIFT(573),
  [27] = {.count = 1, .reusable = false}, SHIFT(303),
  [29] = {.count = 1, .reusable = false}, SHIFT(337),
  [31] = {.count = 1, .reusable = false}, SHIFT(580),
  [33] = {.count = 1, .reusable = false}, SHIFT(579),
  [35] = {.count = 1, .reusable = true}, SHIFT(208),
  [37] = {.count = 1, .reusable = true}, SHIFT(420),
  [39] = {.count = 1, .reusable = false}, SHIFT(196),
  [41] = {.count = 1, .reusable = false}, SHIFT(600),
  [43] = {.count = 1, .reusable = false}, SHIFT(603),
  [45] = {.count = 1, .reusable = false}, SHIFT(611),
  [47] = {.count = 1, .reusable = false}, SHIFT(613),
  [49] = {.count = 1, .reusable = false}, SHIFT(614),
  [51] = {.count = 1, .reusable = false}, SHIFT(551),
  [53] = {.count = 1, .reusable = false}, SHIFT(617),
  [55] = {.count = 1, .reusable = false}, SHIFT(427),
  [57] = {.count = 1, .reusable = false}, SHIFT(548),
  [59] = {.count = 1, .reusable = false}, SHIFT(428),
  [61] = {.count = 1, .reusable = false}, SHIFT(546),
  [63] = {.count = 1, .reusable = false}, SHIFT(622),
  [65] = {.count = 1, .reusable = false}, SHIFT(623),
  [67] = {.count = 1, .reusable = false}, SHIFT(429),
  [69] = {.count = 1, .reusable = true}, SHIFT(205),
  [71] = {.count = 1, .reusable = false}, SHIFT(21),
  [73] = {.count = 1, .reusable = true}, SHIFT(539),
  [75] = {.count = 1, .reusable = true}, SHIFT(211),
  [77] = {.count = 1, .reusable = true}, SHIFT(193),
  [79] = {.count = 1, .reusable = true}, SHIFT(322),
  [81] = {.count = 1, .reusable = false}, SHIFT(447),
  [83] = {.count = 1, .reusable = false}, SHIFT(503),
  [85] = {.count = 1, .reusable = true}, SHIFT(104),
  [87] = {.count = 1, .reusable = false}, SHIFT(405),
  [89] = {.count = 1, .reusable = false}, SHIFT(487),
  [91] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [93] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(64),
  [96] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(171),
  [99] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(156),
  [102] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(113),
  [105] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(542),
  [108] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(173),
  [111] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(175),
  [114] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(570),
  [117] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(409),
  [120] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(410),
  [123] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(573),
  [126] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(303),
  [129] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(337),
  [132] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(580),
  [135] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(579),
  [138] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(208),
  [141] = {.count = 1, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2),
  [143] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(420),
  [146] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(196),
  [149] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(600),
  [152] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(603),
  [155] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(611),
  [158] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(613),
  [161] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(614),
  [164] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(551),
  [167] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(617),
  [170] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(427),
  [173] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(548),
  [176] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(428),
  [179] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(546),
  [182] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(622),
  [185] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(623),
  [188] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(429),
  [191] = {.count = 1, .reusable = true}, REDUCE(aux_sym_build_configuration_statement_repeat1, 2),
  [193] = {.count = 1, .reusable = false}, REDUCE(aux_sym_build_configuration_statement_repeat1, 2),
  [195] = {.count = 1, .reusable = false}, SHIFT(24),
  [197] = {.count = 1, .reusable = true}, SHIFT(525),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_case_statement, 4),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_case_statement, 4),
  [203] = {.count = 1, .reusable = false}, SHIFT(557),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_case_statement, 5),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_case_statement, 5),
  [209] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(557),
  [212] = {.count = 1, .reusable = false}, REDUCE(sym_case_statement, 3),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_case_statement, 3),
  [216] = {.count = 1, .reusable = true}, REDUCE(aux_sym_build_configuration_statement_repeat1, 3),
  [218] = {.count = 1, .reusable = false}, REDUCE(aux_sym_build_configuration_statement_repeat1, 3),
  [220] = {.count = 1, .reusable = false}, REDUCE(sym_case_statement, 2),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_case_statement, 2),
  [224] = {.count = 1, .reusable = true}, SHIFT(491),
  [226] = {.count = 1, .reusable = true}, SHIFT(556),
  [228] = {.count = 1, .reusable = true}, SHIFT(553),
  [230] = {.count = 1, .reusable = true}, SHIFT(305),
  [232] = {.count = 1, .reusable = true}, SHIFT(96),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [236] = {.count = 1, .reusable = true}, SHIFT(586),
  [238] = {.count = 1, .reusable = true}, SHIFT(133),
  [240] = {.count = 1, .reusable = true}, SHIFT(124),
  [242] = {.count = 1, .reusable = true}, SHIFT(150),
  [244] = {.count = 1, .reusable = true}, SHIFT(194),
  [246] = {.count = 1, .reusable = true}, SHIFT(600),
  [248] = {.count = 1, .reusable = true}, SHIFT(671),
  [250] = {.count = 1, .reusable = true}, SHIFT(672),
  [252] = {.count = 1, .reusable = true}, SHIFT(673),
  [254] = {.count = 1, .reusable = true}, SHIFT(674),
  [256] = {.count = 1, .reusable = true}, SHIFT(551),
  [258] = {.count = 1, .reusable = true}, SHIFT(515),
  [260] = {.count = 1, .reusable = true}, SHIFT(427),
  [262] = {.count = 1, .reusable = true}, SHIFT(559),
  [264] = {.count = 1, .reusable = true}, SHIFT(379),
  [266] = {.count = 1, .reusable = true}, SHIFT(546),
  [268] = {.count = 1, .reusable = true}, SHIFT(681),
  [270] = {.count = 1, .reusable = true}, SHIFT(682),
  [272] = {.count = 1, .reusable = true}, SHIFT(142),
  [274] = {.count = 1, .reusable = true}, SHIFT(483),
  [276] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(586),
  [279] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(133),
  [282] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(124),
  [285] = {.count = 1, .reusable = true}, REDUCE(aux_sym_enum_declaration_repeat1, 2),
  [287] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(194),
  [290] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(600),
  [293] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(671),
  [296] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(672),
  [299] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(673),
  [302] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(674),
  [305] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(551),
  [308] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(515),
  [311] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(427),
  [314] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(559),
  [317] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(379),
  [320] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(546),
  [323] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(681),
  [326] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(682),
  [329] = {.count = 1, .reusable = true}, SHIFT(549),
  [331] = {.count = 1, .reusable = true}, SHIFT(153),
  [333] = {.count = 1, .reusable = true}, SHIFT(575),
  [335] = {.count = 1, .reusable = true}, SHIFT(520),
  [337] = {.count = 1, .reusable = true}, SHIFT(680),
  [339] = {.count = 1, .reusable = true}, SHIFT(140),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym__build_configuration, 3),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym__build_configuration, 3),
  [345] = {.count = 1, .reusable = true}, SHIFT(509),
  [347] = {.count = 1, .reusable = true}, SHIFT(126),
  [349] = {.count = 1, .reusable = true}, SHIFT(141),
  [351] = {.count = 1, .reusable = true}, SHIFT(488),
  [353] = {.count = 1, .reusable = true}, SHIFT(151),
  [355] = {.count = 1, .reusable = true}, SHIFT(485),
  [357] = {.count = 1, .reusable = true}, SHIFT(519),
  [359] = {.count = 1, .reusable = true}, SHIFT(472),
  [361] = {.count = 1, .reusable = false}, REDUCE(sym_boolean_literal, 1),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_literal, 1),
  [365] = {.count = 1, .reusable = false}, REDUCE(sym__build_configuration, 4),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym__build_configuration, 4),
  [369] = {.count = 1, .reusable = true}, SHIFT(144),
  [371] = {.count = 1, .reusable = true}, SHIFT(155),
  [373] = {.count = 1, .reusable = false}, REDUCE(sym__build_configuration, 2),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym__build_configuration, 2),
  [377] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(133),
  [380] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(124),
  [383] = {.count = 1, .reusable = true}, REDUCE(aux_sym_struct_declaration_repeat1, 2),
  [385] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(194),
  [388] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(600),
  [391] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(671),
  [394] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(672),
  [397] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(673),
  [400] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(674),
  [403] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(551),
  [406] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(680),
  [409] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(427),
  [412] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(559),
  [415] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(379),
  [418] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(546),
  [421] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(681),
  [424] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(682),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 2),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 2),
  [431] = {.count = 1, .reusable = true}, SHIFT(114),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_enum_case_pattern, 3),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym__type_identifier, 1),
  [437] = {.count = 1, .reusable = true}, SHIFT(433),
  [439] = {.count = 2, .reusable = true}, REDUCE(aux_sym__function_signature_repeat1, 2), SHIFT_REPEAT(276),
  [442] = {.count = 1, .reusable = true}, REDUCE(aux_sym__function_signature_repeat1, 2),
  [444] = {.count = 1, .reusable = true}, SHIFT(435),
  [446] = {.count = 1, .reusable = true}, SHIFT(122),
  [448] = {.count = 1, .reusable = true}, SHIFT(206),
  [450] = {.count = 1, .reusable = false}, SHIFT(165),
  [452] = {.count = 1, .reusable = false}, SHIFT(164),
  [454] = {.count = 1, .reusable = true}, SHIFT(628),
  [456] = {.count = 1, .reusable = false}, SHIFT(202),
  [458] = {.count = 1, .reusable = false}, SHIFT(252),
  [460] = {.count = 1, .reusable = false}, SHIFT(181),
  [462] = {.count = 1, .reusable = true}, REDUCE(sym_enum_case_pattern, 2),
  [464] = {.count = 1, .reusable = true}, SHIFT(276),
  [466] = {.count = 1, .reusable = true}, REDUCE(sym__function_signature, 1),
  [468] = {.count = 1, .reusable = true}, SHIFT(105),
  [470] = {.count = 1, .reusable = true}, SHIFT(281),
  [472] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [474] = {.count = 2, .reusable = true}, REDUCE(sym__variable_name, 1), REDUCE(sym__expression, 1),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym__type_name, 1),
  [479] = {.count = 1, .reusable = true}, SHIFT(60),
  [481] = {.count = 1, .reusable = false}, SHIFT(162),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym__pattern_initializer, 1),
  [485] = {.count = 1, .reusable = true}, SHIFT(478),
  [487] = {.count = 1, .reusable = true}, SHIFT(261),
  [489] = {.count = 1, .reusable = true}, SHIFT(80),
  [491] = {.count = 1, .reusable = true}, SHIFT(263),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym_tuple_type, 2),
  [497] = {.count = 1, .reusable = true}, REDUCE(sym__type_identifier, 3),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_tuple_type, 3),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_tuple_type, 4),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym_tuple_type, 5),
  [505] = {.count = 1, .reusable = true}, REDUCE(sym_tuple_type, 6),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_tuple_type, 7),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym__parameter_clause, 4),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym__parameter_clause, 9),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym__parameter_clause, 8),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym__parameter_clause, 7),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym_optional_pattern, 2),
  [519] = {.count = 1, .reusable = true}, REDUCE(sym_is_pattern, 2),
  [521] = {.count = 1, .reusable = true}, REDUCE(sym_value_binding_pattern, 2),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym__parameter_clause, 6),
  [525] = {.count = 1, .reusable = true}, REDUCE(sym_tuple_pattern, 2),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym_wildcard_pattern, 1),
  [529] = {.count = 1, .reusable = true}, REDUCE(sym__parameter_clause, 5),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_tuple_pattern, 3),
  [533] = {.count = 1, .reusable = true}, REDUCE(sym__parameter_clause, 2),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_enum_case_pattern, 4),
  [537] = {.count = 1, .reusable = true}, REDUCE(sym_as_pattern, 3),
  [539] = {.count = 1, .reusable = true}, SHIFT(201),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym_case_declaration, 2),
  [543] = {.count = 1, .reusable = true}, SHIFT(369),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym_case_declaration, 3),
  [547] = {.count = 1, .reusable = true}, SHIFT(358),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym__pattern_initializer, 2),
  [551] = {.count = 1, .reusable = true}, SHIFT(494),
  [553] = {.count = 1, .reusable = true}, REDUCE(aux_sym_constant_declaration_repeat1, 2),
  [555] = {.count = 2, .reusable = true}, REDUCE(aux_sym_constant_declaration_repeat1, 2), SHIFT_REPEAT(145),
  [558] = {.count = 1, .reusable = true}, REDUCE(sym__code_block, 3),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym__pattern_initializer, 3),
  [562] = {.count = 1, .reusable = true}, REDUCE(sym_import_declaration, 4),
  [564] = {.count = 1, .reusable = true}, SHIFT(578),
  [566] = {.count = 1, .reusable = true}, REDUCE(sym_import_declaration, 3),
  [568] = {.count = 1, .reusable = true}, REDUCE(aux_sym_import_declaration_repeat1, 2),
  [570] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_declaration_repeat1, 2), SHIFT_REPEAT(578),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym__type_annotation, 2),
  [575] = {.count = 1, .reusable = true}, REDUCE(sym_constant_declaration, 2),
  [577] = {.count = 1, .reusable = true}, SHIFT(145),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym__pattern_initializer, 4),
  [581] = {.count = 1, .reusable = true}, REDUCE(sym__code_block, 2),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym__function_signature, 2),
  [585] = {.count = 1, .reusable = true}, SHIFT(273),
  [587] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration, 2),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym_import_declaration, 2),
  [591] = {.count = 1, .reusable = true}, REDUCE(sym_constant_declaration, 3),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym_function_declaration, 2),
  [595] = {.count = 1, .reusable = true}, SHIFT(26),
  [597] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration, 3),
  [599] = {.count = 1, .reusable = true}, REDUCE(sym__function_signature, 3),
  [601] = {.count = 1, .reusable = true}, SHIFT(120),
  [603] = {.count = 1, .reusable = false}, SHIFT(161),
  [605] = {.count = 1, .reusable = true}, SHIFT(597),
  [607] = {.count = 1, .reusable = false}, SHIFT(245),
  [609] = {.count = 1, .reusable = false}, SHIFT(274),
  [611] = {.count = 1, .reusable = false}, SHIFT(220),
  [613] = {.count = 1, .reusable = true}, SHIFT(84),
  [615] = {.count = 1, .reusable = true}, REDUCE(sym__getter_setter_keyword_block, 4),
  [617] = {.count = 1, .reusable = true}, REDUCE(sym__getter_setter_keyword_block, 3),
  [619] = {.count = 1, .reusable = true}, REDUCE(sym__function_signature, 4),
  [621] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration, 4),
  [623] = {.count = 1, .reusable = true}, SHIFT(241),
  [625] = {.count = 1, .reusable = false}, SHIFT(63),
  [627] = {.count = 1, .reusable = true}, SHIFT(20),
  [629] = {.count = 1, .reusable = false}, SHIFT(158),
  [631] = {.count = 1, .reusable = true}, SHIFT(626),
  [633] = {.count = 1, .reusable = false}, SHIFT(85),
  [635] = {.count = 1, .reusable = false}, SHIFT(267),
  [637] = {.count = 1, .reusable = true}, REDUCE(sym_operator_declaration, 5),
  [639] = {.count = 1, .reusable = true}, REDUCE(sym_class_declaration, 5),
  [641] = {.count = 1, .reusable = true}, REDUCE(sym_case_declaration, 4),
  [643] = {.count = 1, .reusable = true}, REDUCE(sym_case_declaration, 5),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym_deinitializer_declaration, 2),
  [647] = {.count = 1, .reusable = false}, SHIFT(65),
  [649] = {.count = 1, .reusable = true}, REDUCE(sym_typealias_declaration, 3),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym_function_declaration, 3),
  [653] = {.count = 1, .reusable = true}, REDUCE(sym_initializer_declaration, 3),
  [655] = {.count = 1, .reusable = true}, REDUCE(sym_subscript_declaration, 3),
  [657] = {.count = 1, .reusable = false}, SHIFT(214),
  [659] = {.count = 1, .reusable = true}, REDUCE(sym_struct_declaration, 4),
  [661] = {.count = 1, .reusable = true}, REDUCE(sym_class_declaration, 4),
  [663] = {.count = 1, .reusable = true}, REDUCE(sym_enum_declaration, 4),
  [665] = {.count = 1, .reusable = true}, REDUCE(sym_protocol_declaration, 4),
  [667] = {.count = 1, .reusable = true}, REDUCE(sym_extension_declaration, 4),
  [669] = {.count = 1, .reusable = true}, REDUCE(sym_initializer_declaration, 4),
  [671] = {.count = 1, .reusable = true}, REDUCE(sym_operator_declaration, 7),
  [673] = {.count = 1, .reusable = true}, REDUCE(sym_operator_declaration, 6),
  [675] = {.count = 1, .reusable = true}, REDUCE(sym_enum_declaration, 6),
  [677] = {.count = 1, .reusable = true}, REDUCE(sym_struct_declaration, 5),
  [679] = {.count = 1, .reusable = true}, REDUCE(sym_enum_declaration, 5),
  [681] = {.count = 1, .reusable = true}, REDUCE(sym_protocol_declaration, 5),
  [683] = {.count = 1, .reusable = true}, REDUCE(sym_extension_declaration, 5),
  [685] = {.count = 2, .reusable = true}, REDUCE(sym__variable_declaration_head, 1), SHIFT(122),
  [688] = {.count = 2, .reusable = false}, REDUCE(sym__variable_declaration_head, 1), SHIFT(165),
  [691] = {.count = 2, .reusable = true}, REDUCE(sym__variable_declaration_head, 1), SHIFT(628),
  [694] = {.count = 2, .reusable = false}, REDUCE(sym__variable_declaration_head, 1), SHIFT(202),
  [697] = {.count = 2, .reusable = false}, REDUCE(sym__variable_declaration_head, 1), SHIFT(252),
  [700] = {.count = 2, .reusable = false}, REDUCE(sym__variable_declaration_head, 1), SHIFT(181),
  [703] = {.count = 1, .reusable = true}, SHIFT(652),
  [705] = {.count = 1, .reusable = true}, SHIFT(143),
  [707] = {.count = 2, .reusable = true}, REDUCE(aux_sym_protocol_declaration_repeat1, 2), SHIFT_REPEAT(652),
  [710] = {.count = 1, .reusable = true}, REDUCE(aux_sym_protocol_declaration_repeat1, 2),
  [712] = {.count = 2, .reusable = true}, REDUCE(aux_sym_protocol_declaration_repeat1, 2), SHIFT_REPEAT(600),
  [715] = {.count = 2, .reusable = true}, REDUCE(aux_sym_protocol_declaration_repeat1, 2), SHIFT_REPEAT(551),
  [718] = {.count = 2, .reusable = true}, REDUCE(aux_sym_protocol_declaration_repeat1, 2), SHIFT_REPEAT(427),
  [721] = {.count = 2, .reusable = true}, REDUCE(aux_sym_protocol_declaration_repeat1, 2), SHIFT_REPEAT(546),
  [724] = {.count = 1, .reusable = true}, SHIFT(514),
  [726] = {.count = 1, .reusable = true}, SHIFT(474),
  [728] = {.count = 1, .reusable = true}, SHIFT(154),
  [730] = {.count = 1, .reusable = false}, SHIFT(163),
  [732] = {.count = 1, .reusable = true}, SHIFT(657),
  [734] = {.count = 1, .reusable = false}, SHIFT(139),
  [736] = {.count = 1, .reusable = false}, SHIFT(457),
  [738] = {.count = 1, .reusable = false}, SHIFT(416),
  [740] = {.count = 1, .reusable = false}, REDUCE(sym__type_identifier, 3),
  [742] = {.count = 1, .reusable = true}, SHIFT(64),
  [744] = {.count = 1, .reusable = true}, SHIFT(171),
  [746] = {.count = 1, .reusable = true}, SHIFT(542),
  [748] = {.count = 1, .reusable = true}, SHIFT(173),
  [750] = {.count = 1, .reusable = false}, REDUCE(sym_enum_case_pattern, 3),
  [752] = {.count = 1, .reusable = false}, SHIFT(120),
  [754] = {.count = 1, .reusable = false}, REDUCE(aux_sym__function_signature_repeat1, 2),
  [756] = {.count = 2, .reusable = false}, REDUCE(aux_sym__function_signature_repeat1, 2), SHIFT_REPEAT(277),
  [759] = {.count = 1, .reusable = true}, SHIFT(204),
  [761] = {.count = 1, .reusable = true}, SHIFT(250),
  [763] = {.count = 1, .reusable = true}, SHIFT(191),
  [765] = {.count = 1, .reusable = false}, SHIFT(679),
  [767] = {.count = 1, .reusable = false}, SHIFT(627),
  [769] = {.count = 1, .reusable = true}, SHIFT(197),
  [771] = {.count = 1, .reusable = false}, SHIFT(49),
  [773] = {.count = 1, .reusable = false}, SHIFT(388),
  [775] = {.count = 1, .reusable = false}, REDUCE(sym_enum_case_pattern, 2),
  [777] = {.count = 1, .reusable = false}, SHIFT(42),
  [779] = {.count = 1, .reusable = false}, SHIFT(567),
  [781] = {.count = 1, .reusable = false}, SHIFT(108),
  [783] = {.count = 1, .reusable = true}, SHIFT(108),
  [785] = {.count = 1, .reusable = false}, REDUCE(sym__function_signature, 1),
  [787] = {.count = 1, .reusable = false}, SHIFT(277),
  [789] = {.count = 1, .reusable = false}, SHIFT(317),
  [791] = {.count = 1, .reusable = false}, SHIFT(278),
  [793] = {.count = 1, .reusable = false}, SHIFT(568),
  [795] = {.count = 1, .reusable = false}, SHIFT(356),
  [797] = {.count = 1, .reusable = true}, SHIFT(356),
  [799] = {.count = 1, .reusable = false}, SHIFT(53),
  [801] = {.count = 1, .reusable = false}, REDUCE(sym__type_identifier, 1),
  [803] = {.count = 1, .reusable = false}, SHIFT(440),
  [805] = {.count = 1, .reusable = true}, SHIFT(210),
  [807] = {.count = 1, .reusable = true}, SHIFT(218),
  [809] = {.count = 1, .reusable = false}, SHIFT(259),
  [811] = {.count = 1, .reusable = false}, SHIFT(257),
  [813] = {.count = 1, .reusable = true}, SHIFT(587),
  [815] = {.count = 1, .reusable = true}, SHIFT(68),
  [817] = {.count = 1, .reusable = false}, SHIFT(260),
  [819] = {.count = 1, .reusable = false}, SHIFT(262),
  [821] = {.count = 1, .reusable = true}, SHIFT(632),
  [823] = {.count = 1, .reusable = false}, SHIFT(6),
  [825] = {.count = 1, .reusable = false}, SHIFT(2),
  [827] = {.count = 1, .reusable = true}, SHIFT(185),
  [829] = {.count = 1, .reusable = false}, SHIFT(256),
  [831] = {.count = 1, .reusable = false}, SHIFT(283),
  [833] = {.count = 1, .reusable = true}, SHIFT(634),
  [835] = {.count = 1, .reusable = false}, SHIFT(38),
  [837] = {.count = 1, .reusable = true}, SHIFT(163),
  [839] = {.count = 1, .reusable = true}, SHIFT(139),
  [841] = {.count = 1, .reusable = false}, REDUCE(sym_tuple_type, 7),
  [843] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [845] = {.count = 1, .reusable = false}, REDUCE(sym__type_name, 1),
  [847] = {.count = 1, .reusable = false}, REDUCE(sym_tuple_type, 4),
  [849] = {.count = 1, .reusable = false}, REDUCE(sym_tuple_type, 3),
  [851] = {.count = 1, .reusable = false}, REDUCE(sym_tuple_type, 2),
  [853] = {.count = 1, .reusable = false}, REDUCE(sym_tuple_type, 6),
  [855] = {.count = 2, .reusable = false}, REDUCE(sym__variable_name, 1), REDUCE(sym__expression, 1),
  [858] = {.count = 1, .reusable = false}, REDUCE(sym_tuple_type, 5),
  [860] = {.count = 1, .reusable = false}, REDUCE(sym__pattern_initializer, 1),
  [862] = {.count = 1, .reusable = false}, SHIFT(521),
  [864] = {.count = 1, .reusable = false}, SHIFT(251),
  [866] = {.count = 1, .reusable = false}, SHIFT(226),
  [868] = {.count = 1, .reusable = false}, SHIFT(272),
  [870] = {.count = 1, .reusable = true}, REDUCE(sym_protocol_initializer_declaration, 2),
  [872] = {.count = 1, .reusable = true}, SHIFT(280),
  [874] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [876] = {.count = 1, .reusable = false}, REDUCE(sym_optional_pattern, 2),
  [878] = {.count = 1, .reusable = false}, REDUCE(sym__parameter_clause, 8),
  [880] = {.count = 1, .reusable = false}, REDUCE(sym_as_pattern, 3),
  [882] = {.count = 1, .reusable = false}, SHIFT(254),
  [884] = {.count = 1, .reusable = false}, SHIFT(253),
  [886] = {.count = 1, .reusable = false}, REDUCE(sym_tuple_pattern, 3),
  [888] = {.count = 1, .reusable = false}, REDUCE(sym_enum_case_pattern, 4),
  [890] = {.count = 1, .reusable = false}, REDUCE(sym__parameter_clause, 2),
  [892] = {.count = 1, .reusable = false}, REDUCE(sym__parameter_clause, 4),
  [894] = {.count = 1, .reusable = true}, REDUCE(sym__expression_list, 1),
  [896] = {.count = 1, .reusable = true}, REDUCE(sym__pattern, 1),
  [898] = {.count = 1, .reusable = true}, SHIFT(463),
  [900] = {.count = 1, .reusable = false}, REDUCE(sym_is_pattern, 2),
  [902] = {.count = 1, .reusable = true}, SHIFT(271),
  [904] = {.count = 1, .reusable = true}, REDUCE(sym_protocol_associated_type_declaration, 1),
  [906] = {.count = 1, .reusable = true}, REDUCE(sym__typealias_head, 2),
  [908] = {.count = 1, .reusable = false}, REDUCE(sym_value_binding_pattern, 2),
  [910] = {.count = 1, .reusable = false}, REDUCE(sym_tuple_pattern, 2),
  [912] = {.count = 1, .reusable = false}, REDUCE(sym__parameter_clause, 5),
  [914] = {.count = 1, .reusable = false}, REDUCE(sym__parameter_clause, 6),
  [916] = {.count = 1, .reusable = true}, SHIFT(572),
  [918] = {.count = 1, .reusable = false}, SHIFT(635),
  [920] = {.count = 1, .reusable = true}, SHIFT(635),
  [922] = {.count = 1, .reusable = false}, REDUCE(sym_wildcard_pattern, 1),
  [924] = {.count = 1, .reusable = false}, REDUCE(sym__parameter_clause, 7),
  [926] = {.count = 1, .reusable = true}, SHIFT(284),
  [928] = {.count = 1, .reusable = true}, SHIFT(423),
  [930] = {.count = 1, .reusable = false}, SHIFT(598),
  [932] = {.count = 1, .reusable = true}, SHIFT(598),
  [934] = {.count = 1, .reusable = false}, REDUCE(sym__parameter_clause, 9),
  [936] = {.count = 1, .reusable = true}, SHIFT(172),
  [938] = {.count = 1, .reusable = true}, SHIFT(200),
  [940] = {.count = 1, .reusable = true}, SHIFT(199),
  [942] = {.count = 1, .reusable = true}, SHIFT(264),
  [944] = {.count = 2, .reusable = true}, REDUCE(sym__pattern, 1), SHIFT(463),
  [947] = {.count = 1, .reusable = true}, SHIFT(286),
  [949] = {.count = 1, .reusable = true}, SHIFT(258),
  [951] = {.count = 1, .reusable = true}, SHIFT(265),
  [953] = {.count = 1, .reusable = true}, SHIFT(58),
  [955] = {.count = 1, .reusable = true}, REDUCE(sym_protocol_associated_type_declaration, 3),
  [957] = {.count = 1, .reusable = true}, REDUCE(sym_protocol_variable_declaration, 4),
  [959] = {.count = 1, .reusable = true}, REDUCE(sym_protocol_method_declaration, 2),
  [961] = {.count = 1, .reusable = true}, SHIFT(88),
  [963] = {.count = 1, .reusable = false}, SHIFT(554),
  [965] = {.count = 1, .reusable = false}, SHIFT(301),
  [967] = {.count = 1, .reusable = true}, SHIFT(234),
  [969] = {.count = 1, .reusable = false}, SHIFT(462),
  [971] = {.count = 1, .reusable = false}, SHIFT(328),
  [973] = {.count = 1, .reusable = true}, REDUCE(sym_protocol_initializer_declaration, 3),
  [975] = {.count = 1, .reusable = true}, REDUCE(sym_protocol_subscript_declaration, 3),
  [977] = {.count = 1, .reusable = false}, REDUCE(sym_do_statement, 2),
  [979] = {.count = 1, .reusable = true}, REDUCE(sym_do_statement, 2),
  [981] = {.count = 1, .reusable = false}, SHIFT(123),
  [983] = {.count = 1, .reusable = false}, REDUCE(sym_do_statement, 3),
  [985] = {.count = 1, .reusable = true}, REDUCE(sym_do_statement, 3),
  [987] = {.count = 1, .reusable = true}, REDUCE(sym__tuple_pattern_element_list, 1),
  [989] = {.count = 1, .reusable = true}, SHIFT(160),
  [991] = {.count = 1, .reusable = true}, SHIFT(159),
  [993] = {.count = 1, .reusable = true}, SHIFT(492),
  [995] = {.count = 1, .reusable = true}, SHIFT(630),
  [997] = {.count = 1, .reusable = false}, REDUCE(aux_sym_do_statement_repeat1, 2),
  [999] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_statement_repeat1, 2),
  [1001] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_statement_repeat1, 2), SHIFT_REPEAT(123),
  [1004] = {.count = 1, .reusable = true}, SHIFT(581),
  [1006] = {.count = 1, .reusable = true}, SHIFT(527),
  [1008] = {.count = 1, .reusable = false}, SHIFT(486),
  [1010] = {.count = 1, .reusable = false}, SHIFT(314),
  [1012] = {.count = 1, .reusable = true}, SHIFT(125),
  [1014] = {.count = 1, .reusable = true}, SHIFT(670),
  [1016] = {.count = 1, .reusable = true}, SHIFT(445),
  [1018] = {.count = 2, .reusable = true}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(159),
  [1021] = {.count = 1, .reusable = true}, REDUCE(aux_sym_switch_statement_repeat1, 2),
  [1023] = {.count = 2, .reusable = true}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(630),
  [1026] = {.count = 1, .reusable = true}, SHIFT(464),
  [1028] = {.count = 1, .reusable = true}, SHIFT(531),
  [1030] = {.count = 1, .reusable = true}, SHIFT(157),
  [1032] = {.count = 1, .reusable = true}, SHIFT(13),
  [1034] = {.count = 1, .reusable = true}, SHIFT(86),
  [1036] = {.count = 1, .reusable = true}, SHIFT(294),
  [1038] = {.count = 1, .reusable = true}, SHIFT(470),
  [1040] = {.count = 1, .reusable = false}, SHIFT(507),
  [1042] = {.count = 1, .reusable = true}, SHIFT(72),
  [1044] = {.count = 1, .reusable = true}, SHIFT(229),
  [1046] = {.count = 1, .reusable = true}, SHIFT(640),
  [1048] = {.count = 1, .reusable = false}, REDUCE(sym_return_statement, 1),
  [1050] = {.count = 1, .reusable = true}, REDUCE(sym_return_statement, 1),
  [1052] = {.count = 1, .reusable = false}, SHIFT(467),
  [1054] = {.count = 1, .reusable = true}, SHIFT(223),
  [1056] = {.count = 1, .reusable = true}, REDUCE(sym__condition_clause, 1),
  [1058] = {.count = 1, .reusable = false}, REDUCE(sym__code_block, 3),
  [1060] = {.count = 1, .reusable = true}, SHIFT(216),
  [1062] = {.count = 1, .reusable = true}, SHIFT(601),
  [1064] = {.count = 1, .reusable = true}, SHIFT(127),
  [1066] = {.count = 1, .reusable = true}, REDUCE(sym_optional_binding_condition, 4),
  [1068] = {.count = 1, .reusable = true}, REDUCE(sym__condition_clause, 4),
  [1070] = {.count = 1, .reusable = false}, REDUCE(sym__type_annotation, 2),
  [1072] = {.count = 1, .reusable = true}, SHIFT(235),
  [1074] = {.count = 1, .reusable = true}, SHIFT(481),
  [1076] = {.count = 1, .reusable = false}, REDUCE(sym_variable_declaration, 2),
  [1078] = {.count = 1, .reusable = false}, SHIFT(138),
  [1080] = {.count = 1, .reusable = true}, SHIFT(186),
  [1082] = {.count = 1, .reusable = true}, SHIFT(658),
  [1084] = {.count = 1, .reusable = true}, SHIFT(71),
  [1086] = {.count = 1, .reusable = true}, SHIFT(638),
  [1088] = {.count = 1, .reusable = false}, SHIFT(584),
  [1090] = {.count = 1, .reusable = false}, REDUCE(sym_constant_declaration, 3),
  [1092] = {.count = 1, .reusable = false}, REDUCE(sym_constant_declaration, 2),
  [1094] = {.count = 1, .reusable = false}, REDUCE(sym__function_signature, 2),
  [1096] = {.count = 1, .reusable = false}, SHIFT(275),
  [1098] = {.count = 1, .reusable = true}, SHIFT(73),
  [1100] = {.count = 1, .reusable = true}, SHIFT(642),
  [1102] = {.count = 1, .reusable = true}, REDUCE(sym__condition_clause, 2),
  [1104] = {.count = 1, .reusable = true}, SHIFT(70),
  [1106] = {.count = 1, .reusable = true}, SHIFT(599),
  [1108] = {.count = 1, .reusable = false}, REDUCE(sym__code_block, 2),
  [1110] = {.count = 1, .reusable = true}, SHIFT(76),
  [1112] = {.count = 1, .reusable = true}, SHIFT(459),
  [1114] = {.count = 1, .reusable = true}, SHIFT(636),
  [1116] = {.count = 1, .reusable = true}, SHIFT(215),
  [1118] = {.count = 1, .reusable = true}, SHIFT(610),
  [1120] = {.count = 1, .reusable = false}, REDUCE(sym_variable_declaration, 3),
  [1122] = {.count = 1, .reusable = false}, SHIFT(471),
  [1124] = {.count = 1, .reusable = false}, SHIFT(489),
  [1126] = {.count = 1, .reusable = false}, SHIFT(636),
  [1128] = {.count = 1, .reusable = true}, SHIFT(242),
  [1130] = {.count = 1, .reusable = true}, SHIFT(480),
  [1132] = {.count = 1, .reusable = true}, REDUCE(aux_sym__tuple_pattern_element_list_repeat1, 2),
  [1134] = {.count = 1, .reusable = true}, SHIFT(183),
  [1136] = {.count = 1, .reusable = true}, SHIFT(641),
  [1138] = {.count = 1, .reusable = false}, REDUCE(sym_function_declaration, 2),
  [1140] = {.count = 1, .reusable = false}, SHIFT(20),
  [1142] = {.count = 1, .reusable = false}, REDUCE(sym_throw_statement, 1),
  [1144] = {.count = 1, .reusable = true}, REDUCE(sym_throw_statement, 1),
  [1146] = {.count = 1, .reusable = false}, SHIFT(466),
  [1148] = {.count = 1, .reusable = true}, SHIFT(563),
  [1150] = {.count = 1, .reusable = true}, REDUCE(sym__for_condition, 4),
  [1152] = {.count = 1, .reusable = true}, SHIFT(545),
  [1154] = {.count = 1, .reusable = false}, REDUCE(aux_sym_import_declaration_repeat1, 2),
  [1156] = {.count = 2, .reusable = false}, REDUCE(aux_sym_import_declaration_repeat1, 2), SHIFT_REPEAT(550),
  [1159] = {.count = 1, .reusable = false}, REDUCE(sym_import_declaration, 4),
  [1161] = {.count = 1, .reusable = false}, SHIFT(550),
  [1163] = {.count = 2, .reusable = true}, REDUCE(aux_sym_build_configuration_statement_repeat1, 2), SHIFT_REPEAT(205),
  [1166] = {.count = 1, .reusable = true}, SHIFT(221),
  [1168] = {.count = 1, .reusable = true}, SHIFT(616),
  [1170] = {.count = 1, .reusable = false}, SHIFT(18),
  [1172] = {.count = 1, .reusable = false}, REDUCE(sym__pattern_initializer, 2),
  [1174] = {.count = 1, .reusable = false}, SHIFT(536),
  [1176] = {.count = 1, .reusable = true}, SHIFT(180),
  [1178] = {.count = 1, .reusable = true}, SHIFT(621),
  [1180] = {.count = 1, .reusable = false}, REDUCE(sym_import_declaration, 3),
  [1182] = {.count = 1, .reusable = false}, SHIFT(484),
  [1184] = {.count = 1, .reusable = true}, REDUCE(sym__for_condition, 2),
  [1186] = {.count = 1, .reusable = true}, SHIFT(577),
  [1188] = {.count = 1, .reusable = true}, REDUCE(sym__for_condition, 3),
  [1190] = {.count = 1, .reusable = true}, SHIFT(502),
  [1192] = {.count = 1, .reusable = true}, SHIFT(243),
  [1194] = {.count = 1, .reusable = true}, SHIFT(479),
  [1196] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_type_repeat1, 2),
  [1198] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_type_repeat1, 2), SHIFT_REPEAT(229),
  [1201] = {.count = 1, .reusable = false}, SHIFT(564),
  [1203] = {.count = 1, .reusable = false}, REDUCE(sym_import_declaration, 2),
  [1205] = {.count = 1, .reusable = true}, SHIFT(130),
  [1207] = {.count = 1, .reusable = true}, SHIFT(129),
  [1209] = {.count = 1, .reusable = true}, REDUCE(sym_optional_binding_condition, 5),
  [1211] = {.count = 1, .reusable = false}, REDUCE(aux_sym_constant_declaration_repeat1, 2),
  [1213] = {.count = 2, .reusable = false}, REDUCE(aux_sym_constant_declaration_repeat1, 2), SHIFT_REPEAT(138),
  [1216] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [1218] = {.count = 2, .reusable = true}, REDUCE(aux_sym_optional_binding_condition_repeat1, 2), SHIFT_REPEAT(127),
  [1221] = {.count = 1, .reusable = true}, REDUCE(aux_sym_optional_binding_condition_repeat1, 2),
  [1223] = {.count = 1, .reusable = true}, REDUCE(sym__condition_clause, 3),
  [1225] = {.count = 1, .reusable = true}, SHIFT(182),
  [1227] = {.count = 1, .reusable = true}, SHIFT(591),
  [1229] = {.count = 1, .reusable = true}, SHIFT(128),
  [1231] = {.count = 1, .reusable = true}, SHIFT(277),
  [1233] = {.count = 1, .reusable = true}, SHIFT(219),
  [1235] = {.count = 1, .reusable = true}, SHIFT(620),
  [1237] = {.count = 1, .reusable = true}, SHIFT(83),
  [1239] = {.count = 1, .reusable = true}, SHIFT(571),
  [1241] = {.count = 2, .reusable = true}, REDUCE(aux_sym__condition_clause_repeat1, 2), SHIFT_REPEAT(223),
  [1244] = {.count = 1, .reusable = true}, REDUCE(aux_sym__condition_clause_repeat1, 2),
  [1246] = {.count = 1, .reusable = true}, SHIFT(405),
  [1248] = {.count = 1, .reusable = true}, SHIFT(487),
  [1250] = {.count = 1, .reusable = true}, SHIFT(576),
  [1252] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(157),
  [1255] = {.count = 2, .reusable = true}, REDUCE(sym__condition, 1), SHIFT(506),
  [1258] = {.count = 1, .reusable = true}, REDUCE(sym__condition, 1),
  [1260] = {.count = 1, .reusable = true}, REDUCE(sym__expression_list, 2),
  [1262] = {.count = 1, .reusable = true}, SHIFT(565),
  [1264] = {.count = 1, .reusable = true}, SHIFT(147),
  [1266] = {.count = 1, .reusable = true}, REDUCE(sym_optional_binding_condition, 2),
  [1268] = {.count = 1, .reusable = true}, REDUCE(aux_sym__parameter_clause_repeat1, 2),
  [1270] = {.count = 2, .reusable = true}, REDUCE(aux_sym__parameter_clause_repeat1, 2), SHIFT_REPEAT(294),
  [1273] = {.count = 1, .reusable = true}, SHIFT(561),
  [1275] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 3),
  [1277] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 3),
  [1279] = {.count = 1, .reusable = false}, SHIFT(361),
  [1281] = {.count = 1, .reusable = true}, SHIFT(39),
  [1283] = {.count = 1, .reusable = true}, SHIFT(352),
  [1285] = {.count = 1, .reusable = true}, SHIFT(589),
  [1287] = {.count = 1, .reusable = true}, SHIFT(249),
  [1289] = {.count = 1, .reusable = true}, SHIFT(227),
  [1291] = {.count = 1, .reusable = true}, SHIFT(246),
  [1293] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_type_repeat1, 3),
  [1295] = {.count = 1, .reusable = true}, REDUCE(sym_availability_condition, 6),
  [1297] = {.count = 1, .reusable = true}, SHIFT(149),
  [1299] = {.count = 1, .reusable = true}, SHIFT(9),
  [1301] = {.count = 1, .reusable = true}, SHIFT(3),
  [1303] = {.count = 1, .reusable = true}, SHIFT(116),
  [1305] = {.count = 1, .reusable = true}, SHIFT(608),
  [1307] = {.count = 1, .reusable = true}, SHIFT(398),
  [1309] = {.count = 1, .reusable = true}, SHIFT(244),
  [1311] = {.count = 1, .reusable = true}, REDUCE(aux_sym_availability_condition_repeat1, 2),
  [1313] = {.count = 2, .reusable = true}, REDUCE(aux_sym_availability_condition_repeat1, 2), SHIFT_REPEAT(244),
  [1316] = {.count = 1, .reusable = true}, REDUCE(sym_availability_condition, 5),
  [1318] = {.count = 1, .reusable = false}, REDUCE(sym_break_statement, 1),
  [1320] = {.count = 1, .reusable = true}, REDUCE(sym_break_statement, 1),
  [1322] = {.count = 1, .reusable = false}, SHIFT(477),
  [1324] = {.count = 1, .reusable = false}, REDUCE(sym_continue_statement, 1),
  [1326] = {.count = 1, .reusable = true}, REDUCE(sym_continue_statement, 1),
  [1328] = {.count = 1, .reusable = false}, SHIFT(468),
  [1330] = {.count = 1, .reusable = true}, SHIFT(79),
  [1332] = {.count = 1, .reusable = true}, SHIFT(4),
  [1334] = {.count = 1, .reusable = true}, REDUCE(sym__tuple_pattern_element_list, 2),
  [1336] = {.count = 1, .reusable = true}, REDUCE(aux_sym__parameter_clause_repeat1, 3),
  [1338] = {.count = 1, .reusable = true}, SHIFT(558),
  [1340] = {.count = 1, .reusable = true}, REDUCE(aux_sym__expression_list_repeat1, 2),
  [1342] = {.count = 2, .reusable = true}, REDUCE(aux_sym__expression_list_repeat1, 2), SHIFT_REPEAT(463),
  [1345] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_type_repeat1, 4),
  [1347] = {.count = 1, .reusable = false}, REDUCE(sym_line_control_statement, 1),
  [1349] = {.count = 1, .reusable = true}, REDUCE(sym_line_control_statement, 1),
  [1351] = {.count = 1, .reusable = false}, SHIFT(595),
  [1353] = {.count = 1, .reusable = true}, SHIFT(78),
  [1355] = {.count = 1, .reusable = true}, SHIFT(446),
  [1357] = {.count = 1, .reusable = true}, REDUCE(aux_sym__parameter_clause_repeat1, 4),
  [1359] = {.count = 1, .reusable = true}, SHIFT(543),
  [1361] = {.count = 1, .reusable = true}, REDUCE(sym__initializer_head, 1),
  [1363] = {.count = 1, .reusable = true}, SHIFT(669),
  [1365] = {.count = 1, .reusable = false}, SHIFT(178),
  [1367] = {.count = 1, .reusable = true}, SHIFT(77),
  [1369] = {.count = 1, .reusable = true}, REDUCE(aux_sym__parameter_clause_repeat1, 5),
  [1371] = {.count = 1, .reusable = true}, SHIFT(538),
  [1373] = {.count = 1, .reusable = false}, REDUCE(sym__pattern_initializer, 3),
  [1375] = {.count = 1, .reusable = true}, SHIFT(351),
  [1377] = {.count = 1, .reusable = true}, SHIFT(637),
  [1379] = {.count = 1, .reusable = false}, REDUCE(sym_catch_clause, 2),
  [1381] = {.count = 1, .reusable = true}, REDUCE(sym_catch_clause, 2),
  [1383] = {.count = 2, .reusable = true}, REDUCE(aux_sym__tuple_pattern_element_list_repeat1, 2), SHIFT_REPEAT(160),
  [1386] = {.count = 1, .reusable = false}, REDUCE(sym__function_signature, 4),
  [1388] = {.count = 1, .reusable = true}, SHIFT(408),
  [1390] = {.count = 1, .reusable = true}, SHIFT(524),
  [1392] = {.count = 1, .reusable = true}, SHIFT(497),
  [1394] = {.count = 1, .reusable = true}, REDUCE(sym_availability_condition, 4),
  [1396] = {.count = 1, .reusable = true}, SHIFT(461),
  [1398] = {.count = 1, .reusable = true}, SHIFT(593),
  [1400] = {.count = 1, .reusable = false}, REDUCE(sym_catch_clause, 3),
  [1402] = {.count = 1, .reusable = true}, REDUCE(sym_catch_clause, 3),
  [1404] = {.count = 1, .reusable = true}, SHIFT(132),
  [1406] = {.count = 1, .reusable = true}, REDUCE(sym_case_condition, 4),
  [1408] = {.count = 1, .reusable = false}, REDUCE(sym__function_signature, 3),
  [1410] = {.count = 1, .reusable = false}, REDUCE(sym__pattern_initializer, 4),
  [1412] = {.count = 1, .reusable = true}, REDUCE(sym_optional_binding, 3),
  [1414] = {.count = 1, .reusable = true}, SHIFT(212),
  [1416] = {.count = 2, .reusable = true}, REDUCE(aux_sym_constant_declaration_repeat1, 2), SHIFT_REPEAT(132),
  [1419] = {.count = 1, .reusable = true}, SHIFT(384),
  [1421] = {.count = 1, .reusable = false}, REDUCE(sym__getter_setter_keyword_block, 3),
  [1423] = {.count = 1, .reusable = false}, SHIFT(349),
  [1425] = {.count = 1, .reusable = true}, SHIFT(569),
  [1427] = {.count = 1, .reusable = false}, REDUCE(sym_operator_declaration, 5),
  [1429] = {.count = 1, .reusable = false}, REDUCE(sym_defer_statement, 2),
  [1431] = {.count = 1, .reusable = true}, REDUCE(sym_defer_statement, 2),
  [1433] = {.count = 1, .reusable = false}, REDUCE(sym_throw_statement, 2),
  [1435] = {.count = 1, .reusable = true}, REDUCE(sym_throw_statement, 2),
  [1437] = {.count = 1, .reusable = false}, REDUCE(sym_return_statement, 2),
  [1439] = {.count = 1, .reusable = true}, REDUCE(sym_return_statement, 2),
  [1441] = {.count = 1, .reusable = false}, REDUCE(sym_continue_statement, 2),
  [1443] = {.count = 1, .reusable = true}, REDUCE(sym_continue_statement, 2),
  [1445] = {.count = 1, .reusable = true}, SHIFT(375),
  [1447] = {.count = 1, .reusable = true}, SHIFT(412),
  [1449] = {.count = 1, .reusable = false}, REDUCE(sym_extension_declaration, 5),
  [1451] = {.count = 1, .reusable = false}, REDUCE(sym_deinitializer_declaration, 2),
  [1453] = {.count = 1, .reusable = false}, REDUCE(sym_protocol_declaration, 5),
  [1455] = {.count = 1, .reusable = false}, REDUCE(sym_break_statement, 2),
  [1457] = {.count = 1, .reusable = true}, REDUCE(sym_break_statement, 2),
  [1459] = {.count = 1, .reusable = true}, SHIFT(97),
  [1461] = {.count = 1, .reusable = true}, SHIFT(392),
  [1463] = {.count = 1, .reusable = true}, SHIFT(393),
  [1465] = {.count = 1, .reusable = true}, SHIFT(395),
  [1467] = {.count = 1, .reusable = false}, REDUCE(sym_enum_declaration, 5),
  [1469] = {.count = 1, .reusable = false}, REDUCE(sym_class_declaration, 5),
  [1471] = {.count = 1, .reusable = false}, SHIFT(355),
  [1473] = {.count = 1, .reusable = false}, REDUCE(sym_struct_declaration, 5),
  [1475] = {.count = 1, .reusable = true}, REDUCE(sym_precedence_clause, 2),
  [1477] = {.count = 1, .reusable = false}, REDUCE(sym_build_configuration_statement, 5),
  [1479] = {.count = 1, .reusable = true}, REDUCE(sym_build_configuration_statement, 5),
  [1481] = {.count = 1, .reusable = false}, REDUCE(sym_switch_statement, 5),
  [1483] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement, 5),
  [1485] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 5),
  [1487] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 5),
  [1489] = {.count = 1, .reusable = true}, SHIFT(103),
  [1491] = {.count = 1, .reusable = false}, REDUCE(sym_for_in_statement, 5),
  [1493] = {.count = 1, .reusable = true}, REDUCE(sym_for_in_statement, 5),
  [1495] = {.count = 1, .reusable = true}, REDUCE(sym_associativity_clause, 2),
  [1497] = {.count = 1, .reusable = true}, SHIFT(547),
  [1499] = {.count = 1, .reusable = false}, REDUCE(sym_while_statement, 3),
  [1501] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 3),
  [1503] = {.count = 1, .reusable = false}, REDUCE(sym_for_statement, 5),
  [1505] = {.count = 1, .reusable = true}, REDUCE(sym_for_statement, 5),
  [1507] = {.count = 1, .reusable = false}, REDUCE(sym_initializer_declaration, 4),
  [1509] = {.count = 1, .reusable = false}, REDUCE(sym_variable_declaration, 4),
  [1511] = {.count = 1, .reusable = true}, SHIFT(516),
  [1513] = {.count = 1, .reusable = false}, REDUCE(sym_extension_declaration, 4),
  [1515] = {.count = 1, .reusable = true}, SHIFT(285),
  [1517] = {.count = 1, .reusable = false}, REDUCE(sym_protocol_declaration, 4),
  [1519] = {.count = 1, .reusable = true}, SHIFT(663),
  [1521] = {.count = 1, .reusable = true}, SHIFT(676),
  [1523] = {.count = 1, .reusable = false}, REDUCE(sym_class_declaration, 4),
  [1525] = {.count = 1, .reusable = false}, REDUCE(sym_struct_declaration, 4),
  [1527] = {.count = 1, .reusable = true}, SHIFT(434),
  [1529] = {.count = 1, .reusable = true}, SHIFT(533),
  [1531] = {.count = 1, .reusable = false}, REDUCE(sym_for_in_statement, 6),
  [1533] = {.count = 1, .reusable = true}, REDUCE(sym_for_in_statement, 6),
  [1535] = {.count = 1, .reusable = false}, REDUCE(sym_operator_declaration, 6),
  [1537] = {.count = 1, .reusable = false}, REDUCE(sym_build_configuration_statement, 4),
  [1539] = {.count = 1, .reusable = true}, REDUCE(sym_build_configuration_statement, 4),
  [1541] = {.count = 1, .reusable = true}, SHIFT(460),
  [1543] = {.count = 1, .reusable = true}, REDUCE(aux_sym__parameter_clause_repeat1, 7),
  [1545] = {.count = 1, .reusable = false}, REDUCE(sym_for_statement, 3),
  [1547] = {.count = 1, .reusable = true}, REDUCE(sym_for_statement, 3),
  [1549] = {.count = 1, .reusable = false}, REDUCE(sym__getter_setter_keyword_block, 4),
  [1551] = {.count = 1, .reusable = false}, REDUCE(sym_switch_statement, 4),
  [1553] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement, 4),
  [1555] = {.count = 1, .reusable = false}, REDUCE(sym_guard_statement, 4),
  [1557] = {.count = 1, .reusable = true}, REDUCE(sym_guard_statement, 4),
  [1559] = {.count = 1, .reusable = false}, REDUCE(sym_repeat_while_statement, 4),
  [1561] = {.count = 1, .reusable = true}, REDUCE(sym_repeat_while_statement, 4),
  [1563] = {.count = 1, .reusable = true}, REDUCE(aux_sym__parameter_clause_repeat1, 6),
  [1565] = {.count = 1, .reusable = true}, SHIFT(452),
  [1567] = {.count = 1, .reusable = true}, SHIFT(528),
  [1569] = {.count = 1, .reusable = false}, REDUCE(sym_build_configuration_statement, 3),
  [1571] = {.count = 1, .reusable = true}, REDUCE(sym_build_configuration_statement, 3),
  [1573] = {.count = 1, .reusable = false}, REDUCE(sym_line_control_statement, 3),
  [1575] = {.count = 1, .reusable = true}, REDUCE(sym_line_control_statement, 3),
  [1577] = {.count = 1, .reusable = true}, SHIFT(534),
  [1579] = {.count = 1, .reusable = false}, REDUCE(sym_for_in_statement, 7),
  [1581] = {.count = 1, .reusable = true}, REDUCE(sym_for_in_statement, 7),
  [1583] = {.count = 1, .reusable = true}, REDUCE(sym__for_condition, 5),
  [1585] = {.count = 1, .reusable = false}, REDUCE(sym_enum_declaration, 6),
  [1587] = {.count = 1, .reusable = true}, SHIFT(438),
  [1589] = {.count = 1, .reusable = true}, SHIFT(607),
  [1591] = {.count = 1, .reusable = true}, REDUCE(aux_sym_availability_condition_repeat1, 3),
  [1593] = {.count = 1, .reusable = false}, REDUCE(sym_build_configuration_statement, 6),
  [1595] = {.count = 1, .reusable = true}, REDUCE(sym_build_configuration_statement, 6),
  [1597] = {.count = 1, .reusable = false}, SHIFT(327),
  [1599] = {.count = 1, .reusable = false}, REDUCE(sym_labeled_statement, 3),
  [1601] = {.count = 1, .reusable = true}, REDUCE(sym_labeled_statement, 3),
  [1603] = {.count = 1, .reusable = false}, REDUCE(sym_build_configuration_statement, 7),
  [1605] = {.count = 1, .reusable = true}, REDUCE(sym_build_configuration_statement, 7),
  [1607] = {.count = 1, .reusable = false}, SHIFT(56),
  [1609] = {.count = 1, .reusable = true}, SHIFT(56),
  [1611] = {.count = 1, .reusable = true}, SHIFT(540),
  [1613] = {.count = 1, .reusable = false}, REDUCE(sym_typealias_declaration, 3),
  [1615] = {.count = 1, .reusable = true}, SHIFT(454),
  [1617] = {.count = 1, .reusable = false}, REDUCE(sym_function_declaration, 3),
  [1619] = {.count = 1, .reusable = true}, SHIFT(450),
  [1621] = {.count = 1, .reusable = false}, REDUCE(sym_initializer_declaration, 3),
  [1623] = {.count = 1, .reusable = true}, SHIFT(99),
  [1625] = {.count = 1, .reusable = true}, SHIFT(360),
  [1627] = {.count = 1, .reusable = true}, SHIFT(666),
  [1629] = {.count = 1, .reusable = true}, SHIFT(422),
  [1631] = {.count = 1, .reusable = false}, SHIFT(55),
  [1633] = {.count = 1, .reusable = true}, SHIFT(55),
  [1635] = {.count = 1, .reusable = false}, REDUCE(sym_subscript_declaration, 3),
  [1637] = {.count = 1, .reusable = false}, REDUCE(sym_enum_declaration, 4),
  [1639] = {.count = 1, .reusable = true}, SHIFT(119),
  [1641] = {.count = 1, .reusable = true}, SHIFT(499),
  [1643] = {.count = 1, .reusable = false}, REDUCE(sym_operator_declaration, 7),
  [1645] = {.count = 1, .reusable = true}, SHIFT(582),
  [1647] = {.count = 1, .reusable = true}, SHIFT(91),
  [1649] = {.count = 1, .reusable = true}, SHIFT(187),
  [1651] = {.count = 1, .reusable = true}, SHIFT(339),
  [1653] = {.count = 1, .reusable = true}, SHIFT(231),
  [1655] = {.count = 1, .reusable = true}, SHIFT(184),
  [1657] = {.count = 1, .reusable = true}, SHIFT(207),
  [1659] = {.count = 1, .reusable = true}, SHIFT(530),
  [1661] = {.count = 1, .reusable = true}, REDUCE(sym__subscript_result, 2),
  [1663] = {.count = 1, .reusable = true}, SHIFT(541),
  [1665] = {.count = 1, .reusable = true}, SHIFT(498),
  [1667] = {.count = 1, .reusable = true}, SHIFT(192),
  [1669] = {.count = 1, .reusable = true}, SHIFT(456),
  [1671] = {.count = 1, .reusable = true}, SHIFT(239),
  [1673] = {.count = 1, .reusable = true}, SHIFT(606),
  [1675] = {.count = 1, .reusable = true}, SHIFT(297),
  [1677] = {.count = 1, .reusable = true}, SHIFT(612),
  [1679] = {.count = 1, .reusable = true}, SHIFT(36),
  [1681] = {.count = 1, .reusable = true}, REDUCE(sym__function_head, 2),
  [1683] = {.count = 1, .reusable = true}, SHIFT(115),
  [1685] = {.count = 1, .reusable = true}, SHIFT(654),
  [1687] = {.count = 1, .reusable = true}, SHIFT(639),
  [1689] = {.count = 1, .reusable = true}, SHIFT(29),
  [1691] = {.count = 1, .reusable = true}, SHIFT(619),
  [1693] = {.count = 1, .reusable = true}, SHIFT(618),
  [1695] = {.count = 1, .reusable = true}, SHIFT(148),
  [1697] = {.count = 1, .reusable = true}, SHIFT(605),
  [1699] = {.count = 1, .reusable = true}, SHIFT(168),
  [1701] = {.count = 1, .reusable = true}, SHIFT(34),
  [1703] = {.count = 1, .reusable = true}, SHIFT(213),
  [1705] = {.count = 1, .reusable = true}, SHIFT(660),
  [1707] = {.count = 1, .reusable = true}, SHIFT(659),
  [1709] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [1711] = {.count = 1, .reusable = true}, SHIFT(268),
  [1713] = {.count = 1, .reusable = true}, SHIFT(61),
  [1715] = {.count = 1, .reusable = true}, SHIFT(330),
  [1717] = {.count = 1, .reusable = true}, SHIFT(174),
  [1719] = {.count = 1, .reusable = true}, SHIFT(87),
  [1721] = {.count = 1, .reusable = true}, SHIFT(15),
  [1723] = {.count = 1, .reusable = true}, SHIFT(57),
  [1725] = {.count = 1, .reusable = true}, SHIFT(552),
  [1727] = {.count = 1, .reusable = true}, SHIFT(50),
  [1729] = {.count = 1, .reusable = true}, SHIFT(47),
  [1731] = {.count = 1, .reusable = true}, SHIFT(74),
  [1733] = {.count = 1, .reusable = true}, SHIFT(279),
  [1735] = {.count = 1, .reusable = true}, SHIFT(583),
  [1737] = {.count = 1, .reusable = true}, SHIFT(389),
  [1739] = {.count = 1, .reusable = true}, SHIFT(588),
  [1741] = {.count = 1, .reusable = true}, SHIFT(37),
  [1743] = {.count = 1, .reusable = true}, SHIFT(43),
  [1745] = {.count = 1, .reusable = true}, SHIFT(28),
  [1747] = {.count = 1, .reusable = true}, SHIFT(166),
  [1749] = {.count = 1, .reusable = true}, SHIFT(51),
  [1751] = {.count = 1, .reusable = true}, SHIFT(476),
  [1753] = {.count = 1, .reusable = true}, SHIFT(35),
  [1755] = {.count = 1, .reusable = true}, SHIFT(633),
  [1757] = {.count = 1, .reusable = true}, SHIFT(295),
  [1759] = {.count = 1, .reusable = true}, SHIFT(248),
  [1761] = {.count = 1, .reusable = true}, SHIFT(604),
  [1763] = {.count = 1, .reusable = true}, SHIFT(609),
  [1765] = {.count = 1, .reusable = true}, REDUCE(sym__subscript_head, 2),
  [1767] = {.count = 1, .reusable = true}, SHIFT(522),
  [1769] = {.count = 1, .reusable = true}, SHIFT(92),
  [1771] = {.count = 1, .reusable = true}, SHIFT(526),
  [1773] = {.count = 1, .reusable = true}, SHIFT(40),
  [1775] = {.count = 1, .reusable = true}, SHIFT(298),
  [1777] = {.count = 1, .reusable = true}, SHIFT(631),
  [1779] = {.count = 1, .reusable = true}, SHIFT(176),
  [1781] = {.count = 1, .reusable = true}, REDUCE(sym__initializer_head, 2),
  [1783] = {.count = 1, .reusable = true}, SHIFT(490),
  [1785] = {.count = 1, .reusable = true}, SHIFT(647),
  [1787] = {.count = 1, .reusable = true}, SHIFT(648),
  [1789] = {.count = 1, .reusable = true}, SHIFT(649),
  [1791] = {.count = 1, .reusable = true}, SHIFT(650),
  [1793] = {.count = 1, .reusable = true}, SHIFT(668),
  [1795] = {.count = 1, .reusable = true}, SHIFT(653),
  [1797] = {.count = 1, .reusable = true}, SHIFT(655),
  [1799] = {.count = 1, .reusable = true}, SHIFT(656),
  [1801] = {.count = 1, .reusable = true}, SHIFT(324),
  [1803] = {.count = 1, .reusable = true}, SHIFT(677),
  [1805] = {.count = 1, .reusable = true}, SHIFT(678),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_swift(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
