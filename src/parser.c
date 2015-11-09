#include "tree_sitter/parser.h"

#define STATE_COUNT 665
#define SYMBOL_COUNT 145

enum {
    sym_program = ts_builtin_sym_start,
    sym__statement,
    sym__loop_statement,
    sym_for_statement,
    sym__for_init,
    sym__for_condition,
    sym_for_in_statement,
    sym_while_statement,
    sym__condition_clause,
    sym__condition,
    sym_availability_condition,
    sym_case_condition,
    sym_optional_binding_condition,
    sym_optional_binding,
    sym_repeat_while_statement,
    sym_if_statement,
    sym_guard_statement,
    sym_switch_statement,
    sym_case_statement,
    sym__code_block,
    sym_labeled_statement,
    sym_break_statement,
    sym_continue_statement,
    sym_return_statement,
    sym_throw_statement,
    sym_defer_statement,
    sym_do_statement,
    sym_catch_clause,
    sym_build_configuration_statement,
    sym__build_configuration,
    sym_line_control_statement,
    sym__declaration,
    sym_import_declaration,
    sym_constant_declaration,
    sym__pattern_initializer,
    sym_variable_declaration,
    sym__variable_declaration_head,
    sym__variable_name,
    sym_typealias_declaration,
    sym_function_declaration,
    sym__pattern,
    sym_wildcard_pattern,
    sym_value_binding_pattern,
    sym_tuple_pattern,
    sym__tuple_pattern_element_list,
    sym_enum_case_pattern,
    sym_optional_pattern,
    sym_is_pattern,
    sym_as_pattern,
    sym__expression,
    sym__expression_list,
    sym_boolean_literal,
    sym_type,
    sym__type_annotation,
    sym__type_identifier,
    sym__type_name,
    aux_sym_program_repeat1,
    aux_sym__condition_clause_repeat1,
    aux_sym_availability_condition_repeat1,
    aux_sym_optional_binding_condition_repeat1,
    aux_sym_switch_statement_repeat1,
    aux_sym_case_statement_repeat1,
    aux_sym_do_statement_repeat1,
    aux_sym_build_configuration_statement_repeat1,
    aux_sym_import_declaration_repeat1,
    aux_sym_constant_declaration_repeat1,
    aux_sym_function_declaration_repeat1,
    aux_sym_function_declaration_repeat2,
    aux_sym__expression_list_repeat1,
    anon_sym_SEMI,
    aux_sym_SLASH_BSLASHn_SLASH,
    anon_sym_for,
    anon_sym_LPAREN,
    anon_sym_RPAREN,
    anon_sym_case,
    anon_sym_in,
    anon_sym_while,
    anon_sym_COMMA,
    anon_sym_POUNDavailable,
    anon_sym_STAR,
    anon_sym_iOS,
    anon_sym_iOSApplicationExtension,
    anon_sym_OSX,
    anon_sym_OSXApplicationExtension,
    anon_sym_watchOS,
    anon_sym_tvOS,
    aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH,
    anon_sym_EQ,
    anon_sym_let,
    anon_sym_var,
    anon_sym_repeat,
    anon_sym_if,
    anon_sym_else,
    anon_sym_guard,
    anon_sym_switch,
    anon_sym_LBRACE,
    anon_sym_RBRACE,
    anon_sym_COLON,
    anon_sym_default,
    anon_sym_break,
    anon_sym_continue,
    sym_fallthrough_statement,
    anon_sym_return,
    anon_sym_throw,
    anon_sym_defer,
    anon_sym_do,
    anon_sym_catch,
    anon_sym_POUNDif,
    anon_sym_POUNDelseif,
    anon_sym_POUNDelse,
    anon_sym_POUNDendif,
    anon_sym_os,
    anon_sym_arch,
    anon_sym_i386,
    anon_sym_x86_64,
    anon_sym_arm,
    anon_sym_arm64,
    anon_sym_BANG,
    anon_sym_AMP_AMP,
    anon_sym_PIPE_PIPE,
    anon_sym_POUNDline,
    aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH,
    aux_sym_SLASH_DQUOTE_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_LBRACK_BSLASH_BSLASH0tnr_SQUOTE_DQUOTE_RBRACK_PIPEu_BSLASH_LBRACE_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA8_RBRACE_BSLASH_RBRACE_RPAREN_RPAREN_PIPE_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_LF_CR_RBRACK_RPAREN_STAR_DQUOTE_SLASH,
    anon_sym_import,
    anon_sym_typealias,
    anon_sym_struct,
    anon_sym_class,
    anon_sym_enum,
    anon_sym_protocol,
    anon_sym_func,
    anon_sym_DOT,
    anon_sym_inout,
    anon_sym__,
    anon_sym_throws,
    anon_sym_rethrows,
    anon_sym_DASH_GT,
    anon_sym_QMARK,
    anon_sym_is,
    anon_sym_as,
    anon_sym_true,
    anon_sym_false,
    sym_identifier,
    sym_operator,
};

static const char *ts_symbol_names[] = {
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
    [sym_typealias_declaration] = "typealias_declaration",
    [sym_function_declaration] = "function_declaration",
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
    [aux_sym_function_declaration_repeat1] = "function_declaration_repeat1",
    [aux_sym_function_declaration_repeat2] = "function_declaration_repeat2",
    [aux_sym__expression_list_repeat1] = "_expression_list_repeat1",
    [ts_builtin_sym_error] = "ERROR",
    [ts_builtin_sym_end] = "END",
    [anon_sym_SEMI] = ";",
    [aux_sym_SLASH_BSLASHn_SLASH] = "/\\n/",
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
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = "/[0-9]+(.[0-9]+(.[0-9]+|)|)/",
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
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = "/[0-9]+/",
    [aux_sym_SLASH_DQUOTE_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_LBRACK_BSLASH_BSLASH0tnr_SQUOTE_DQUOTE_RBRACK_PIPEu_BSLASH_LBRACE_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA8_RBRACE_BSLASH_RBRACE_RPAREN_RPAREN_PIPE_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_LF_CR_RBRACK_RPAREN_STAR_DQUOTE_SLASH] = "/\"((\\\\([\\\\0tnr'\"]|u\\{[a-fA-F0-9]{1,8}\\}))|[^\"\\\\\n\r])*\"/",
    [anon_sym_import] = "import",
    [anon_sym_typealias] = "typealias",
    [anon_sym_struct] = "struct",
    [anon_sym_class] = "class",
    [anon_sym_enum] = "enum",
    [anon_sym_protocol] = "protocol",
    [anon_sym_func] = "func",
    [anon_sym_DOT] = ".",
    [anon_sym_inout] = "inout",
    [anon_sym__] = "_",
    [anon_sym_throws] = "throws",
    [anon_sym_rethrows] = "rethrows",
    [anon_sym_DASH_GT] = "->",
    [anon_sym_QMARK] = "?",
    [anon_sym_is] = "is",
    [anon_sym_as] = "as",
    [anon_sym_true] = "true",
    [anon_sym_false] = "false",
    [sym_identifier] = "identifier",
    [sym_operator] = "operator",
};

static const TSNodeType ts_node_types[SYMBOL_COUNT] = {
    [sym_program] = TSNodeTypeNamed,
    [sym__statement] = TSNodeTypeHidden,
    [sym__loop_statement] = TSNodeTypeHidden,
    [sym_for_statement] = TSNodeTypeNamed,
    [sym__for_init] = TSNodeTypeHidden,
    [sym__for_condition] = TSNodeTypeHidden,
    [sym_for_in_statement] = TSNodeTypeNamed,
    [sym_while_statement] = TSNodeTypeNamed,
    [sym__condition_clause] = TSNodeTypeHidden,
    [sym__condition] = TSNodeTypeHidden,
    [sym_availability_condition] = TSNodeTypeNamed,
    [sym_case_condition] = TSNodeTypeNamed,
    [sym_optional_binding_condition] = TSNodeTypeNamed,
    [sym_optional_binding] = TSNodeTypeNamed,
    [sym_repeat_while_statement] = TSNodeTypeNamed,
    [sym_if_statement] = TSNodeTypeNamed,
    [sym_guard_statement] = TSNodeTypeNamed,
    [sym_switch_statement] = TSNodeTypeNamed,
    [sym_case_statement] = TSNodeTypeNamed,
    [sym__code_block] = TSNodeTypeHidden,
    [sym_labeled_statement] = TSNodeTypeNamed,
    [sym_break_statement] = TSNodeTypeNamed,
    [sym_continue_statement] = TSNodeTypeNamed,
    [sym_return_statement] = TSNodeTypeNamed,
    [sym_throw_statement] = TSNodeTypeNamed,
    [sym_defer_statement] = TSNodeTypeNamed,
    [sym_do_statement] = TSNodeTypeNamed,
    [sym_catch_clause] = TSNodeTypeNamed,
    [sym_build_configuration_statement] = TSNodeTypeNamed,
    [sym__build_configuration] = TSNodeTypeHidden,
    [sym_line_control_statement] = TSNodeTypeNamed,
    [sym__declaration] = TSNodeTypeHidden,
    [sym_import_declaration] = TSNodeTypeNamed,
    [sym_constant_declaration] = TSNodeTypeNamed,
    [sym__pattern_initializer] = TSNodeTypeHidden,
    [sym_variable_declaration] = TSNodeTypeNamed,
    [sym__variable_declaration_head] = TSNodeTypeHidden,
    [sym__variable_name] = TSNodeTypeHidden,
    [sym_typealias_declaration] = TSNodeTypeNamed,
    [sym_function_declaration] = TSNodeTypeNamed,
    [sym__pattern] = TSNodeTypeHidden,
    [sym_wildcard_pattern] = TSNodeTypeNamed,
    [sym_value_binding_pattern] = TSNodeTypeNamed,
    [sym_tuple_pattern] = TSNodeTypeNamed,
    [sym__tuple_pattern_element_list] = TSNodeTypeHidden,
    [sym_enum_case_pattern] = TSNodeTypeNamed,
    [sym_optional_pattern] = TSNodeTypeNamed,
    [sym_is_pattern] = TSNodeTypeNamed,
    [sym_as_pattern] = TSNodeTypeNamed,
    [sym__expression] = TSNodeTypeHidden,
    [sym__expression_list] = TSNodeTypeHidden,
    [sym_boolean_literal] = TSNodeTypeNamed,
    [sym_type] = TSNodeTypeNamed,
    [sym__type_annotation] = TSNodeTypeHidden,
    [sym__type_identifier] = TSNodeTypeHidden,
    [sym__type_name] = TSNodeTypeHidden,
    [aux_sym_program_repeat1] = TSNodeTypeHidden,
    [aux_sym__condition_clause_repeat1] = TSNodeTypeHidden,
    [aux_sym_availability_condition_repeat1] = TSNodeTypeHidden,
    [aux_sym_optional_binding_condition_repeat1] = TSNodeTypeHidden,
    [aux_sym_switch_statement_repeat1] = TSNodeTypeHidden,
    [aux_sym_case_statement_repeat1] = TSNodeTypeHidden,
    [aux_sym_do_statement_repeat1] = TSNodeTypeHidden,
    [aux_sym_build_configuration_statement_repeat1] = TSNodeTypeHidden,
    [aux_sym_import_declaration_repeat1] = TSNodeTypeHidden,
    [aux_sym_constant_declaration_repeat1] = TSNodeTypeHidden,
    [aux_sym_function_declaration_repeat1] = TSNodeTypeHidden,
    [aux_sym_function_declaration_repeat2] = TSNodeTypeHidden,
    [aux_sym__expression_list_repeat1] = TSNodeTypeHidden,
    [ts_builtin_sym_error] = TSNodeTypeNamed,
    [ts_builtin_sym_end] = TSNodeTypeHidden,
    [anon_sym_SEMI] = TSNodeTypeAnonymous,
    [aux_sym_SLASH_BSLASHn_SLASH] = TSNodeTypeHidden,
    [anon_sym_for] = TSNodeTypeAnonymous,
    [anon_sym_LPAREN] = TSNodeTypeAnonymous,
    [anon_sym_RPAREN] = TSNodeTypeAnonymous,
    [anon_sym_case] = TSNodeTypeAnonymous,
    [anon_sym_in] = TSNodeTypeAnonymous,
    [anon_sym_while] = TSNodeTypeAnonymous,
    [anon_sym_COMMA] = TSNodeTypeAnonymous,
    [anon_sym_POUNDavailable] = TSNodeTypeAnonymous,
    [anon_sym_STAR] = TSNodeTypeAnonymous,
    [anon_sym_iOS] = TSNodeTypeAnonymous,
    [anon_sym_iOSApplicationExtension] = TSNodeTypeAnonymous,
    [anon_sym_OSX] = TSNodeTypeAnonymous,
    [anon_sym_OSXApplicationExtension] = TSNodeTypeAnonymous,
    [anon_sym_watchOS] = TSNodeTypeAnonymous,
    [anon_sym_tvOS] = TSNodeTypeAnonymous,
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = TSNodeTypeHidden,
    [anon_sym_EQ] = TSNodeTypeAnonymous,
    [anon_sym_let] = TSNodeTypeAnonymous,
    [anon_sym_var] = TSNodeTypeAnonymous,
    [anon_sym_repeat] = TSNodeTypeAnonymous,
    [anon_sym_if] = TSNodeTypeAnonymous,
    [anon_sym_else] = TSNodeTypeAnonymous,
    [anon_sym_guard] = TSNodeTypeAnonymous,
    [anon_sym_switch] = TSNodeTypeAnonymous,
    [anon_sym_LBRACE] = TSNodeTypeAnonymous,
    [anon_sym_RBRACE] = TSNodeTypeAnonymous,
    [anon_sym_COLON] = TSNodeTypeAnonymous,
    [anon_sym_default] = TSNodeTypeAnonymous,
    [anon_sym_break] = TSNodeTypeAnonymous,
    [anon_sym_continue] = TSNodeTypeAnonymous,
    [sym_fallthrough_statement] = TSNodeTypeNamed,
    [anon_sym_return] = TSNodeTypeAnonymous,
    [anon_sym_throw] = TSNodeTypeAnonymous,
    [anon_sym_defer] = TSNodeTypeAnonymous,
    [anon_sym_do] = TSNodeTypeAnonymous,
    [anon_sym_catch] = TSNodeTypeAnonymous,
    [anon_sym_POUNDif] = TSNodeTypeAnonymous,
    [anon_sym_POUNDelseif] = TSNodeTypeAnonymous,
    [anon_sym_POUNDelse] = TSNodeTypeAnonymous,
    [anon_sym_POUNDendif] = TSNodeTypeAnonymous,
    [anon_sym_os] = TSNodeTypeAnonymous,
    [anon_sym_arch] = TSNodeTypeAnonymous,
    [anon_sym_i386] = TSNodeTypeAnonymous,
    [anon_sym_x86_64] = TSNodeTypeAnonymous,
    [anon_sym_arm] = TSNodeTypeAnonymous,
    [anon_sym_arm64] = TSNodeTypeAnonymous,
    [anon_sym_BANG] = TSNodeTypeAnonymous,
    [anon_sym_AMP_AMP] = TSNodeTypeAnonymous,
    [anon_sym_PIPE_PIPE] = TSNodeTypeAnonymous,
    [anon_sym_POUNDline] = TSNodeTypeAnonymous,
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = TSNodeTypeHidden,
    [aux_sym_SLASH_DQUOTE_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_LBRACK_BSLASH_BSLASH0tnr_SQUOTE_DQUOTE_RBRACK_PIPEu_BSLASH_LBRACE_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA8_RBRACE_BSLASH_RBRACE_RPAREN_RPAREN_PIPE_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_LF_CR_RBRACK_RPAREN_STAR_DQUOTE_SLASH] = TSNodeTypeHidden,
    [anon_sym_import] = TSNodeTypeAnonymous,
    [anon_sym_typealias] = TSNodeTypeAnonymous,
    [anon_sym_struct] = TSNodeTypeAnonymous,
    [anon_sym_class] = TSNodeTypeAnonymous,
    [anon_sym_enum] = TSNodeTypeAnonymous,
    [anon_sym_protocol] = TSNodeTypeAnonymous,
    [anon_sym_func] = TSNodeTypeAnonymous,
    [anon_sym_DOT] = TSNodeTypeAnonymous,
    [anon_sym_inout] = TSNodeTypeAnonymous,
    [anon_sym__] = TSNodeTypeAnonymous,
    [anon_sym_throws] = TSNodeTypeAnonymous,
    [anon_sym_rethrows] = TSNodeTypeAnonymous,
    [anon_sym_DASH_GT] = TSNodeTypeAnonymous,
    [anon_sym_QMARK] = TSNodeTypeAnonymous,
    [anon_sym_is] = TSNodeTypeAnonymous,
    [anon_sym_as] = TSNodeTypeAnonymous,
    [anon_sym_true] = TSNodeTypeAnonymous,
    [anon_sym_false] = TSNodeTypeAnonymous,
    [sym_identifier] = TSNodeTypeNamed,
    [sym_operator] = TSNodeTypeNamed,
};

static TSTree *ts_lex(TSLexer *lexer, TSStateId lex_state) {
    START_LEXER();
    switch (lex_state) {
        case 1:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(1);
            if (lookahead == '#')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'b')
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(27);
            if (lookahead == 'f')
                ADVANCE(33);
            if (lookahead == 'g')
                ADVANCE(49);
            if (lookahead == 'i')
                ADVANCE(54);
            if (lookahead == 'l')
                ADVANCE(61);
            if (lookahead == 'r')
                ADVANCE(64);
            if (lookahead == 's')
                ADVANCE(74);
            if (lookahead == 't')
                ADVANCE(80);
            if (lookahead == 'v')
                ADVANCE(93);
            if (lookahead == 'w')
                ADVANCE(96);
            LEX_ERROR();
        case 2:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 3:
            if (lookahead == 'i')
                ADVANCE(4);
            if (lookahead == 'l')
                ADVANCE(6);
            LEX_ERROR();
        case 4:
            if (lookahead == 'f')
                ADVANCE(5);
            LEX_ERROR();
        case 5:
            ACCEPT_TOKEN(anon_sym_POUNDif);
        case 6:
            if (lookahead == 'i')
                ADVANCE(7);
            LEX_ERROR();
        case 7:
            if (lookahead == 'n')
                ADVANCE(8);
            LEX_ERROR();
        case 8:
            if (lookahead == 'e')
                ADVANCE(9);
            LEX_ERROR();
        case 9:
            ACCEPT_TOKEN(anon_sym_POUNDline);
        case 10:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 11:
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            LEX_ERROR();
        case 12:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            if (lookahead == '`')
                ADVANCE(13);
            LEX_ERROR();
        case 13:
            ACCEPT_TOKEN(sym_identifier);
        case 14:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(15);
            ACCEPT_TOKEN(sym_identifier);
        case 15:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(16);
            ACCEPT_TOKEN(sym_identifier);
        case 16:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(17);
            ACCEPT_TOKEN(sym_identifier);
        case 17:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'j') ||
                ('l' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'k')
                ADVANCE(18);
            ACCEPT_TOKEN(sym_identifier);
        case 18:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_break);
        case 19:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(20);
            ACCEPT_TOKEN(sym_identifier);
        case 20:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(21);
            ACCEPT_TOKEN(sym_identifier);
        case 21:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(22);
            ACCEPT_TOKEN(sym_identifier);
        case 22:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(23);
            ACCEPT_TOKEN(sym_identifier);
        case 23:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(24);
            ACCEPT_TOKEN(sym_identifier);
        case 24:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(25);
            ACCEPT_TOKEN(sym_identifier);
        case 25:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(26);
            ACCEPT_TOKEN(sym_identifier);
        case 26:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_continue);
        case 27:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(28);
            if (lookahead == 'o')
                ADVANCE(32);
            ACCEPT_TOKEN(sym_identifier);
        case 28:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'f')
                ADVANCE(29);
            ACCEPT_TOKEN(sym_identifier);
        case 29:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(30);
            ACCEPT_TOKEN(sym_identifier);
        case 30:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(31);
            ACCEPT_TOKEN(sym_identifier);
        case 31:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_defer);
        case 32:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_do);
        case 33:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(34);
            if (lookahead == 'o')
                ADVANCE(44);
            if (lookahead == 'u')
                ADVANCE(46);
            ACCEPT_TOKEN(sym_identifier);
        case 34:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(35);
            ACCEPT_TOKEN(sym_identifier);
        case 35:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier);
        case 36:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(37);
            ACCEPT_TOKEN(sym_identifier);
        case 37:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(38);
            ACCEPT_TOKEN(sym_identifier);
        case 38:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(39);
            ACCEPT_TOKEN(sym_identifier);
        case 39:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(40);
            ACCEPT_TOKEN(sym_identifier);
        case 40:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(41);
            ACCEPT_TOKEN(sym_identifier);
        case 41:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'g')
                ADVANCE(42);
            ACCEPT_TOKEN(sym_identifier);
        case 42:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(43);
            ACCEPT_TOKEN(sym_identifier);
        case 43:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_fallthrough_statement);
        case 44:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(45);
            ACCEPT_TOKEN(sym_identifier);
        case 45:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_for);
        case 46:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(47);
            ACCEPT_TOKEN(sym_identifier);
        case 47:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(48);
            ACCEPT_TOKEN(sym_identifier);
        case 48:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_func);
        case 49:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(50);
            ACCEPT_TOKEN(sym_identifier);
        case 50:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(51);
            ACCEPT_TOKEN(sym_identifier);
        case 51:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(52);
            ACCEPT_TOKEN(sym_identifier);
        case 52:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'd')
                ADVANCE(53);
            ACCEPT_TOKEN(sym_identifier);
        case 53:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_guard);
        case 54:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'm')
                ADVANCE(56);
            ACCEPT_TOKEN(sym_identifier);
        case 55:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_if);
        case 56:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(57);
            ACCEPT_TOKEN(sym_identifier);
        case 57:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(58);
            ACCEPT_TOKEN(sym_identifier);
        case 58:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(59);
            ACCEPT_TOKEN(sym_identifier);
        case 59:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(60);
            ACCEPT_TOKEN(sym_identifier);
        case 60:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_import);
        case 61:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(62);
            ACCEPT_TOKEN(sym_identifier);
        case 62:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier);
        case 63:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_let);
        case 64:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(65);
            ACCEPT_TOKEN(sym_identifier);
        case 65:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(66);
            if (lookahead == 't')
                ADVANCE(70);
            ACCEPT_TOKEN(sym_identifier);
        case 66:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier);
        case 67:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(68);
            ACCEPT_TOKEN(sym_identifier);
        case 68:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(69);
            ACCEPT_TOKEN(sym_identifier);
        case 69:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_repeat);
        case 70:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(71);
            ACCEPT_TOKEN(sym_identifier);
        case 71:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(72);
            ACCEPT_TOKEN(sym_identifier);
        case 72:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(73);
            ACCEPT_TOKEN(sym_identifier);
        case 73:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_return);
        case 74:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'w')
                ADVANCE(75);
            ACCEPT_TOKEN(sym_identifier);
        case 75:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(76);
            ACCEPT_TOKEN(sym_identifier);
        case 76:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(77);
            ACCEPT_TOKEN(sym_identifier);
        case 77:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(78);
            ACCEPT_TOKEN(sym_identifier);
        case 78:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(79);
            ACCEPT_TOKEN(sym_identifier);
        case 79:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_switch);
        case 80:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(81);
            if (lookahead == 'y')
                ADVANCE(85);
            ACCEPT_TOKEN(sym_identifier);
        case 81:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(82);
            ACCEPT_TOKEN(sym_identifier);
        case 82:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(83);
            ACCEPT_TOKEN(sym_identifier);
        case 83:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'w')
                ADVANCE(84);
            ACCEPT_TOKEN(sym_identifier);
        case 84:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_throw);
        case 85:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(86);
            ACCEPT_TOKEN(sym_identifier);
        case 86:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(87);
            ACCEPT_TOKEN(sym_identifier);
        case 87:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(88);
            ACCEPT_TOKEN(sym_identifier);
        case 88:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(89);
            ACCEPT_TOKEN(sym_identifier);
        case 89:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(90);
            ACCEPT_TOKEN(sym_identifier);
        case 90:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(91);
            ACCEPT_TOKEN(sym_identifier);
        case 91:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(92);
            ACCEPT_TOKEN(sym_identifier);
        case 92:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_typealias);
        case 93:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(94);
            ACCEPT_TOKEN(sym_identifier);
        case 94:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(95);
            ACCEPT_TOKEN(sym_identifier);
        case 95:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_var);
        case 96:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(97);
            ACCEPT_TOKEN(sym_identifier);
        case 97:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(98);
            ACCEPT_TOKEN(sym_identifier);
        case 98:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(99);
            ACCEPT_TOKEN(sym_identifier);
        case 99:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(100);
            ACCEPT_TOKEN(sym_identifier);
        case 100:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_while);
        case 101:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(101);
            LEX_ERROR();
        case 102:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(102);
            if (lookahead == '\n')
                ADVANCE(103);
            if (lookahead == ';')
                ADVANCE(104);
            LEX_ERROR();
        case 103:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 104:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 105:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(105);
            if (lookahead == '(')
                ADVANCE(106);
            if (lookahead == '.')
                ADVANCE(107);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(108);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(109);
            if (lookahead == 'l')
                ADVANCE(61);
            if (lookahead == 'v')
                ADVANCE(93);
            LEX_ERROR();
        case 106:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 107:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 108:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym__);
        case 109:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(110);
            ACCEPT_TOKEN(sym_identifier);
        case 110:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_is);
        case 111:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(111);
            if (lookahead == '(')
                ADVANCE(106);
            if (lookahead == '.')
                ADVANCE(107);
            if (lookahead == ';')
                ADVANCE(104);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(108);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'c')
                ADVANCE(112);
            if (lookahead == 'i')
                ADVANCE(109);
            if (lookahead == 'l')
                ADVANCE(61);
            if (lookahead == 'v')
                ADVANCE(93);
            LEX_ERROR();
        case 112:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(113);
            ACCEPT_TOKEN(sym_identifier);
        case 113:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(114);
            ACCEPT_TOKEN(sym_identifier);
        case 114:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(115);
            ACCEPT_TOKEN(sym_identifier);
        case 115:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_case);
        case 116:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(116);
            if (lookahead == '#')
                ADVANCE(117);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'c')
                ADVANCE(112);
            if (lookahead == 'l')
                ADVANCE(61);
            if (lookahead == 'v')
                ADVANCE(93);
            LEX_ERROR();
        case 117:
            if (lookahead == 'a')
                ADVANCE(118);
            LEX_ERROR();
        case 118:
            if (lookahead == 'v')
                ADVANCE(119);
            LEX_ERROR();
        case 119:
            if (lookahead == 'a')
                ADVANCE(120);
            LEX_ERROR();
        case 120:
            if (lookahead == 'i')
                ADVANCE(121);
            LEX_ERROR();
        case 121:
            if (lookahead == 'l')
                ADVANCE(122);
            LEX_ERROR();
        case 122:
            if (lookahead == 'a')
                ADVANCE(123);
            LEX_ERROR();
        case 123:
            if (lookahead == 'b')
                ADVANCE(124);
            LEX_ERROR();
        case 124:
            if (lookahead == 'l')
                ADVANCE(125);
            LEX_ERROR();
        case 125:
            if (lookahead == 'e')
                ADVANCE(126);
            LEX_ERROR();
        case 126:
            ACCEPT_TOKEN(anon_sym_POUNDavailable);
        case 127:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(127);
            if (lookahead == '{')
                ADVANCE(128);
            LEX_ERROR();
        case 128:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 129:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(129);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            LEX_ERROR();
        case 130:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(130);
            if (lookahead == '\n')
                ADVANCE(131);
            if (lookahead == ';')
                ADVANCE(104);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            LEX_ERROR();
        case 131:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 132:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(132);
            if (lookahead == '!')
                ADVANCE(133);
            if (lookahead == '(')
                ADVANCE(106);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'a')
                ADVANCE(134);
            if (lookahead == 'f')
                ADVANCE(138);
            if (lookahead == 'o')
                ADVANCE(143);
            if (lookahead == 't')
                ADVANCE(145);
            LEX_ERROR();
        case 133:
            ACCEPT_TOKEN(anon_sym_BANG);
        case 134:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(135);
            ACCEPT_TOKEN(sym_identifier);
        case 135:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(136);
            ACCEPT_TOKEN(sym_identifier);
        case 136:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(137);
            ACCEPT_TOKEN(sym_identifier);
        case 137:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_arch);
        case 138:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(139);
            ACCEPT_TOKEN(sym_identifier);
        case 139:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(140);
            ACCEPT_TOKEN(sym_identifier);
        case 140:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(141);
            ACCEPT_TOKEN(sym_identifier);
        case 141:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(142);
            ACCEPT_TOKEN(sym_identifier);
        case 142:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_false);
        case 143:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(144);
            ACCEPT_TOKEN(sym_identifier);
        case 144:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_os);
        case 145:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(146);
            ACCEPT_TOKEN(sym_identifier);
        case 146:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(147);
            ACCEPT_TOKEN(sym_identifier);
        case 147:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(148);
            ACCEPT_TOKEN(sym_identifier);
        case 148:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_true);
        case 149:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(149);
            if (lookahead == '\n')
                ADVANCE(150);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(151);
            if (lookahead == ';')
                ADVANCE(104);
            LEX_ERROR();
        case 150:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 151:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(151);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH);
        case 152:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(152);
            if (lookahead == '!')
                ADVANCE(153);
            if (lookahead == '%')
                ADVANCE(153);
            if (lookahead == '&')
                ADVANCE(153);
            if (lookahead == '*')
                ADVANCE(153);
            if (lookahead == '+')
                ADVANCE(153);
            if (lookahead == '-')
                ADVANCE(153);
            if (lookahead == '/')
                ADVANCE(153);
            if (lookahead == '<')
                ADVANCE(153);
            if (lookahead == '=')
                ADVANCE(153);
            if (lookahead == '>')
                ADVANCE(153);
            if (lookahead == '?')
                ADVANCE(153);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                ('g' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 'r') ||
                (lookahead == 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '^')
                ADVANCE(153);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'c')
                ADVANCE(154);
            if (lookahead == 'e')
                ADVANCE(159);
            if (lookahead == 'f')
                ADVANCE(163);
            if (lookahead == 'p')
                ADVANCE(164);
            if (lookahead == 's')
                ADVANCE(172);
            if (lookahead == 't')
                ADVANCE(178);
            if (lookahead == 'v')
                ADVANCE(93);
            if (lookahead == '|')
                ADVANCE(153);
            if (lookahead == '~')
                ADVANCE(153);
            LEX_ERROR();
        case 153:
            if (lookahead == '!')
                ADVANCE(153);
            if (lookahead == '%')
                ADVANCE(153);
            if (lookahead == '&')
                ADVANCE(153);
            if (lookahead == '*')
                ADVANCE(153);
            if (lookahead == '+')
                ADVANCE(153);
            if (lookahead == '-')
                ADVANCE(153);
            if (lookahead == '/')
                ADVANCE(153);
            if (lookahead == '<')
                ADVANCE(153);
            if (lookahead == '=')
                ADVANCE(153);
            if (lookahead == '>')
                ADVANCE(153);
            if (lookahead == '?')
                ADVANCE(153);
            if (lookahead == '^')
                ADVANCE(153);
            if (lookahead == '|')
                ADVANCE(153);
            if (lookahead == '~')
                ADVANCE(153);
            ACCEPT_TOKEN(sym_operator);
        case 154:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(155);
            ACCEPT_TOKEN(sym_identifier);
        case 155:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(156);
            ACCEPT_TOKEN(sym_identifier);
        case 156:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(157);
            ACCEPT_TOKEN(sym_identifier);
        case 157:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(158);
            ACCEPT_TOKEN(sym_identifier);
        case 158:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_class);
        case 159:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(160);
            ACCEPT_TOKEN(sym_identifier);
        case 160:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(161);
            ACCEPT_TOKEN(sym_identifier);
        case 161:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'm')
                ADVANCE(162);
            ACCEPT_TOKEN(sym_identifier);
        case 162:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_enum);
        case 163:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(46);
            ACCEPT_TOKEN(sym_identifier);
        case 164:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(165);
            ACCEPT_TOKEN(sym_identifier);
        case 165:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(166);
            ACCEPT_TOKEN(sym_identifier);
        case 166:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(167);
            ACCEPT_TOKEN(sym_identifier);
        case 167:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(168);
            ACCEPT_TOKEN(sym_identifier);
        case 168:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(169);
            ACCEPT_TOKEN(sym_identifier);
        case 169:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(170);
            ACCEPT_TOKEN(sym_identifier);
        case 170:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(171);
            ACCEPT_TOKEN(sym_identifier);
        case 171:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_protocol);
        case 172:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(173);
            ACCEPT_TOKEN(sym_identifier);
        case 173:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(174);
            ACCEPT_TOKEN(sym_identifier);
        case 174:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(175);
            ACCEPT_TOKEN(sym_identifier);
        case 175:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(176);
            ACCEPT_TOKEN(sym_identifier);
        case 176:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(177);
            ACCEPT_TOKEN(sym_identifier);
        case 177:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_struct);
        case 178:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(10);
            if (lookahead == 'y')
                ADVANCE(85);
            ACCEPT_TOKEN(sym_identifier);
        case 179:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(179);
            if (lookahead == '!')
                ADVANCE(153);
            if (lookahead == '%')
                ADVANCE(153);
            if (lookahead == '&')
                ADVANCE(153);
            if (lookahead == '*')
                ADVANCE(153);
            if (lookahead == '+')
                ADVANCE(153);
            if (lookahead == '-')
                ADVANCE(153);
            if (lookahead == '/')
                ADVANCE(153);
            if (lookahead == '<')
                ADVANCE(153);
            if (lookahead == '=')
                ADVANCE(153);
            if (lookahead == '>')
                ADVANCE(153);
            if (lookahead == '?')
                ADVANCE(153);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '^')
                ADVANCE(153);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == '|')
                ADVANCE(153);
            if (lookahead == '~')
                ADVANCE(153);
            LEX_ERROR();
        case 180:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(180);
            if (lookahead == '\n')
                ADVANCE(181);
            if (lookahead == ':')
                ADVANCE(182);
            if (lookahead == ';')
                ADVANCE(104);
            LEX_ERROR();
        case 181:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 182:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 183:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(183);
            if (lookahead == 'f')
                ADVANCE(184);
            if (lookahead == 'i')
                ADVANCE(187);
            if (lookahead == 'r')
                ADVANCE(189);
            if (lookahead == 'w')
                ADVANCE(195);
            LEX_ERROR();
        case 184:
            if (lookahead == 'o')
                ADVANCE(185);
            LEX_ERROR();
        case 185:
            if (lookahead == 'r')
                ADVANCE(186);
            LEX_ERROR();
        case 186:
            ACCEPT_TOKEN(anon_sym_for);
        case 187:
            if (lookahead == 'f')
                ADVANCE(188);
            LEX_ERROR();
        case 188:
            ACCEPT_TOKEN(anon_sym_if);
        case 189:
            if (lookahead == 'e')
                ADVANCE(190);
            LEX_ERROR();
        case 190:
            if (lookahead == 'p')
                ADVANCE(191);
            LEX_ERROR();
        case 191:
            if (lookahead == 'e')
                ADVANCE(192);
            LEX_ERROR();
        case 192:
            if (lookahead == 'a')
                ADVANCE(193);
            LEX_ERROR();
        case 193:
            if (lookahead == 't')
                ADVANCE(194);
            LEX_ERROR();
        case 194:
            ACCEPT_TOKEN(anon_sym_repeat);
        case 195:
            if (lookahead == 'h')
                ADVANCE(196);
            LEX_ERROR();
        case 196:
            if (lookahead == 'i')
                ADVANCE(197);
            LEX_ERROR();
        case 197:
            if (lookahead == 'l')
                ADVANCE(198);
            LEX_ERROR();
        case 198:
            if (lookahead == 'e')
                ADVANCE(199);
            LEX_ERROR();
        case 199:
            ACCEPT_TOKEN(anon_sym_while);
        case 200:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(200);
            if (lookahead == '(')
                ADVANCE(106);
            LEX_ERROR();
        case 201:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(201);
            if (lookahead == '\n')
                ADVANCE(202);
            if (lookahead == '-')
                ADVANCE(203);
            if (lookahead == ';')
                ADVANCE(104);
            if (lookahead == 'r')
                ADVANCE(205);
            if (lookahead == 't')
                ADVANCE(213);
            if (lookahead == '{')
                ADVANCE(128);
            LEX_ERROR();
        case 202:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 203:
            if (lookahead == '>')
                ADVANCE(204);
            LEX_ERROR();
        case 204:
            ACCEPT_TOKEN(anon_sym_DASH_GT);
        case 205:
            if (lookahead == 'e')
                ADVANCE(206);
            LEX_ERROR();
        case 206:
            if (lookahead == 't')
                ADVANCE(207);
            LEX_ERROR();
        case 207:
            if (lookahead == 'h')
                ADVANCE(208);
            LEX_ERROR();
        case 208:
            if (lookahead == 'r')
                ADVANCE(209);
            LEX_ERROR();
        case 209:
            if (lookahead == 'o')
                ADVANCE(210);
            LEX_ERROR();
        case 210:
            if (lookahead == 'w')
                ADVANCE(211);
            LEX_ERROR();
        case 211:
            if (lookahead == 's')
                ADVANCE(212);
            LEX_ERROR();
        case 212:
            ACCEPT_TOKEN(anon_sym_rethrows);
        case 213:
            if (lookahead == 'h')
                ADVANCE(214);
            LEX_ERROR();
        case 214:
            if (lookahead == 'r')
                ADVANCE(215);
            LEX_ERROR();
        case 215:
            if (lookahead == 'o')
                ADVANCE(216);
            LEX_ERROR();
        case 216:
            if (lookahead == 'w')
                ADVANCE(217);
            LEX_ERROR();
        case 217:
            if (lookahead == 's')
                ADVANCE(218);
            LEX_ERROR();
        case 218:
            ACCEPT_TOKEN(anon_sym_throws);
        case 219:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(219);
            if (lookahead == ')')
                ADVANCE(220);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(108);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(221);
            if (lookahead == 'l')
                ADVANCE(61);
            if (lookahead == 'v')
                ADVANCE(93);
            LEX_ERROR();
        case 220:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 221:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(222);
            ACCEPT_TOKEN(sym_identifier);
        case 222:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(223);
            ACCEPT_TOKEN(sym_identifier);
        case 223:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(224);
            ACCEPT_TOKEN(sym_identifier);
        case 224:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(225);
            ACCEPT_TOKEN(sym_identifier);
        case 225:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_inout);
        case 226:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(226);
            if (lookahead == '\n')
                ADVANCE(227);
            if (lookahead == '(')
                ADVANCE(106);
            if (lookahead == '-')
                ADVANCE(203);
            if (lookahead == ';')
                ADVANCE(104);
            if (lookahead == 'r')
                ADVANCE(205);
            if (lookahead == 't')
                ADVANCE(213);
            if (lookahead == '{')
                ADVANCE(128);
            LEX_ERROR();
        case 227:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 228:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(228);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(108);
            if (lookahead == '`')
                ADVANCE(11);
            LEX_ERROR();
        case 229:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(229);
            if (lookahead == ':')
                ADVANCE(182);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(108);
            if (lookahead == '`')
                ADVANCE(11);
            LEX_ERROR();
        case 230:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(230);
            if (lookahead == ')')
                ADVANCE(220);
            if (lookahead == ',')
                ADVANCE(231);
            if (lookahead == '=')
                ADVANCE(232);
            LEX_ERROR();
        case 231:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 232:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 233:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(233);
            if (lookahead == ':')
                ADVANCE(182);
            LEX_ERROR();
        case 234:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(234);
            if (lookahead == ')')
                ADVANCE(220);
            LEX_ERROR();
        case 235:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(235);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(108);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(221);
            if (lookahead == 'l')
                ADVANCE(61);
            if (lookahead == 'v')
                ADVANCE(93);
            LEX_ERROR();
        case 236:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(236);
            if (lookahead == ')')
                ADVANCE(220);
            if (lookahead == ',')
                ADVANCE(231);
            LEX_ERROR();
        case 237:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(237);
            if (lookahead == ')')
                ADVANCE(220);
            if (lookahead == ',')
                ADVANCE(231);
            if (lookahead == '.')
                ADVANCE(107);
            if (lookahead == '=')
                ADVANCE(232);
            LEX_ERROR();
        case 238:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(238);
            if (lookahead == '#')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'b')
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(27);
            if (lookahead == 'f')
                ADVANCE(33);
            if (lookahead == 'g')
                ADVANCE(49);
            if (lookahead == 'i')
                ADVANCE(54);
            if (lookahead == 'l')
                ADVANCE(61);
            if (lookahead == 'r')
                ADVANCE(64);
            if (lookahead == 's')
                ADVANCE(74);
            if (lookahead == 't')
                ADVANCE(80);
            if (lookahead == 'v')
                ADVANCE(93);
            if (lookahead == 'w')
                ADVANCE(96);
            if (lookahead == '}')
                ADVANCE(239);
            LEX_ERROR();
        case 239:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 240:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(240);
            if (lookahead == '\n')
                ADVANCE(241);
            if (lookahead == '-')
                ADVANCE(203);
            if (lookahead == ';')
                ADVANCE(104);
            if (lookahead == '{')
                ADVANCE(128);
            LEX_ERROR();
        case 241:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 242:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(242);
            if (lookahead == '\n')
                ADVANCE(243);
            if (lookahead == ';')
                ADVANCE(104);
            if (lookahead == '{')
                ADVANCE(128);
            LEX_ERROR();
        case 243:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 244:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(244);
            if (lookahead == '\n')
                ADVANCE(245);
            if (lookahead == '.')
                ADVANCE(107);
            if (lookahead == ';')
                ADVANCE(104);
            if (lookahead == '{')
                ADVANCE(128);
            LEX_ERROR();
        case 245:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 246:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(246);
            if (lookahead == '}')
                ADVANCE(239);
            LEX_ERROR();
        case 247:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(247);
            if (lookahead == '=')
                ADVANCE(232);
            LEX_ERROR();
        case 248:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(248);
            if (lookahead == '\n')
                ADVANCE(249);
            if (lookahead == '.')
                ADVANCE(107);
            if (lookahead == ';')
                ADVANCE(104);
            LEX_ERROR();
        case 249:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 250:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(250);
            if (lookahead == '\"')
                ADVANCE(251);
            LEX_ERROR();
        case 251:
            if (lookahead == '\"')
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(253);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(251);
            LEX_ERROR();
        case 252:
            ACCEPT_TOKEN(aux_sym_SLASH_DQUOTE_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_LBRACK_BSLASH_BSLASH0tnr_SQUOTE_DQUOTE_RBRACK_PIPEu_BSLASH_LBRACE_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA8_RBRACE_BSLASH_RBRACE_RPAREN_RPAREN_PIPE_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_LF_CR_RBRACK_RPAREN_STAR_DQUOTE_SLASH);
        case 253:
            if ((lookahead == '\"') ||
                (lookahead == '\'') ||
                (lookahead == '0') ||
                (lookahead == '\\') ||
                (lookahead == 'n') ||
                (lookahead == 'r') ||
                (lookahead == 't'))
                ADVANCE(251);
            if (lookahead == 'u')
                ADVANCE(254);
            LEX_ERROR();
        case 254:
            if (lookahead == '{')
                ADVANCE(255);
            LEX_ERROR();
        case 255:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(256);
            LEX_ERROR();
        case 256:
            if (lookahead == '{')
                ADVANCE(257);
            LEX_ERROR();
        case 257:
            if (lookahead == '1')
                ADVANCE(258);
            LEX_ERROR();
        case 258:
            if (lookahead == ',')
                ADVANCE(259);
            LEX_ERROR();
        case 259:
            if (lookahead == '8')
                ADVANCE(260);
            LEX_ERROR();
        case 260:
            if (lookahead == '}')
                ADVANCE(261);
            LEX_ERROR();
        case 261:
            if (lookahead == '}')
                ADVANCE(251);
            LEX_ERROR();
        case 262:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(262);
            if (lookahead == '#')
                ADVANCE(263);
            if (lookahead == '&')
                ADVANCE(274);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'b')
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(27);
            if (lookahead == 'f')
                ADVANCE(33);
            if (lookahead == 'g')
                ADVANCE(49);
            if (lookahead == 'i')
                ADVANCE(54);
            if (lookahead == 'l')
                ADVANCE(61);
            if (lookahead == 'r')
                ADVANCE(64);
            if (lookahead == 's')
                ADVANCE(74);
            if (lookahead == 't')
                ADVANCE(80);
            if (lookahead == 'v')
                ADVANCE(93);
            if (lookahead == 'w')
                ADVANCE(96);
            if (lookahead == '|')
                ADVANCE(276);
            LEX_ERROR();
        case 263:
            if (lookahead == 'e')
                ADVANCE(264);
            if (lookahead == 'i')
                ADVANCE(4);
            if (lookahead == 'l')
                ADVANCE(6);
            LEX_ERROR();
        case 264:
            if (lookahead == 'l')
                ADVANCE(265);
            if (lookahead == 'n')
                ADVANCE(270);
            LEX_ERROR();
        case 265:
            if (lookahead == 's')
                ADVANCE(266);
            LEX_ERROR();
        case 266:
            if (lookahead == 'e')
                ADVANCE(267);
            LEX_ERROR();
        case 267:
            if (lookahead == 'i')
                ADVANCE(268);
            ACCEPT_TOKEN(anon_sym_POUNDelse);
        case 268:
            if (lookahead == 'f')
                ADVANCE(269);
            LEX_ERROR();
        case 269:
            ACCEPT_TOKEN(anon_sym_POUNDelseif);
        case 270:
            if (lookahead == 'd')
                ADVANCE(271);
            LEX_ERROR();
        case 271:
            if (lookahead == 'i')
                ADVANCE(272);
            LEX_ERROR();
        case 272:
            if (lookahead == 'f')
                ADVANCE(273);
            LEX_ERROR();
        case 273:
            ACCEPT_TOKEN(anon_sym_POUNDendif);
        case 274:
            if (lookahead == '&')
                ADVANCE(275);
            LEX_ERROR();
        case 275:
            ACCEPT_TOKEN(anon_sym_AMP_AMP);
        case 276:
            if (lookahead == '|')
                ADVANCE(277);
            LEX_ERROR();
        case 277:
            ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
        case 278:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(278);
            if (lookahead == 'a')
                ADVANCE(279);
            if (lookahead == 'i')
                ADVANCE(284);
            if (lookahead == 'x')
                ADVANCE(288);
            LEX_ERROR();
        case 279:
            if (lookahead == 'r')
                ADVANCE(280);
            LEX_ERROR();
        case 280:
            if (lookahead == 'm')
                ADVANCE(281);
            LEX_ERROR();
        case 281:
            if (lookahead == '6')
                ADVANCE(282);
            ACCEPT_TOKEN(anon_sym_arm);
        case 282:
            if (lookahead == '4')
                ADVANCE(283);
            LEX_ERROR();
        case 283:
            ACCEPT_TOKEN(anon_sym_arm64);
        case 284:
            if (lookahead == '3')
                ADVANCE(285);
            LEX_ERROR();
        case 285:
            if (lookahead == '8')
                ADVANCE(286);
            LEX_ERROR();
        case 286:
            if (lookahead == '6')
                ADVANCE(287);
            LEX_ERROR();
        case 287:
            ACCEPT_TOKEN(anon_sym_i386);
        case 288:
            if (lookahead == '8')
                ADVANCE(289);
            LEX_ERROR();
        case 289:
            if (lookahead == '6')
                ADVANCE(290);
            LEX_ERROR();
        case 290:
            if (lookahead == '_')
                ADVANCE(291);
            LEX_ERROR();
        case 291:
            if (lookahead == '6')
                ADVANCE(292);
            LEX_ERROR();
        case 292:
            if (lookahead == '4')
                ADVANCE(293);
            LEX_ERROR();
        case 293:
            ACCEPT_TOKEN(anon_sym_x86_64);
        case 294:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(294);
            if (lookahead == 'O')
                ADVANCE(295);
            if (lookahead == 'i')
                ADVANCE(298);
            if (lookahead == 't')
                ADVANCE(301);
            if (lookahead == 'w')
                ADVANCE(305);
            LEX_ERROR();
        case 295:
            if (lookahead == 'S')
                ADVANCE(296);
            LEX_ERROR();
        case 296:
            if (lookahead == 'X')
                ADVANCE(297);
            LEX_ERROR();
        case 297:
            ACCEPT_TOKEN(anon_sym_OSX);
        case 298:
            if (lookahead == 'O')
                ADVANCE(299);
            LEX_ERROR();
        case 299:
            if (lookahead == 'S')
                ADVANCE(300);
            LEX_ERROR();
        case 300:
            ACCEPT_TOKEN(anon_sym_iOS);
        case 301:
            if (lookahead == 'v')
                ADVANCE(302);
            LEX_ERROR();
        case 302:
            if (lookahead == 'O')
                ADVANCE(303);
            LEX_ERROR();
        case 303:
            if (lookahead == 'S')
                ADVANCE(304);
            LEX_ERROR();
        case 304:
            ACCEPT_TOKEN(anon_sym_tvOS);
        case 305:
            if (lookahead == 'a')
                ADVANCE(306);
            LEX_ERROR();
        case 306:
            if (lookahead == 't')
                ADVANCE(307);
            LEX_ERROR();
        case 307:
            if (lookahead == 'c')
                ADVANCE(308);
            LEX_ERROR();
        case 308:
            if (lookahead == 'h')
                ADVANCE(309);
            LEX_ERROR();
        case 309:
            if (lookahead == 'O')
                ADVANCE(310);
            LEX_ERROR();
        case 310:
            if (lookahead == 'S')
                ADVANCE(311);
            LEX_ERROR();
        case 311:
            ACCEPT_TOKEN(anon_sym_watchOS);
        case 312:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(312);
            if (lookahead == '&')
                ADVANCE(274);
            if (lookahead == ')')
                ADVANCE(220);
            if (lookahead == '|')
                ADVANCE(276);
            LEX_ERROR();
        case 313:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(313);
            if (lookahead == '#')
                ADVANCE(263);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'b')
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(27);
            if (lookahead == 'f')
                ADVANCE(33);
            if (lookahead == 'g')
                ADVANCE(49);
            if (lookahead == 'i')
                ADVANCE(54);
            if (lookahead == 'l')
                ADVANCE(61);
            if (lookahead == 'r')
                ADVANCE(64);
            if (lookahead == 's')
                ADVANCE(74);
            if (lookahead == 't')
                ADVANCE(80);
            if (lookahead == 'v')
                ADVANCE(93);
            if (lookahead == 'w')
                ADVANCE(96);
            LEX_ERROR();
        case 314:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(314);
            if (lookahead == '#')
                ADVANCE(315);
            LEX_ERROR();
        case 315:
            if (lookahead == 'e')
                ADVANCE(264);
            LEX_ERROR();
        case 316:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(316);
            if (lookahead == '#')
                ADVANCE(317);
            LEX_ERROR();
        case 317:
            if (lookahead == 'e')
                ADVANCE(318);
            LEX_ERROR();
        case 318:
            if (lookahead == 'l')
                ADVANCE(319);
            if (lookahead == 'n')
                ADVANCE(270);
            LEX_ERROR();
        case 319:
            if (lookahead == 's')
                ADVANCE(320);
            LEX_ERROR();
        case 320:
            if (lookahead == 'e')
                ADVANCE(321);
            LEX_ERROR();
        case 321:
            ACCEPT_TOKEN(anon_sym_POUNDelse);
        case 322:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(322);
            if (lookahead == '#')
                ADVANCE(323);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'b')
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(27);
            if (lookahead == 'f')
                ADVANCE(33);
            if (lookahead == 'g')
                ADVANCE(49);
            if (lookahead == 'i')
                ADVANCE(54);
            if (lookahead == 'l')
                ADVANCE(61);
            if (lookahead == 'r')
                ADVANCE(64);
            if (lookahead == 's')
                ADVANCE(74);
            if (lookahead == 't')
                ADVANCE(80);
            if (lookahead == 'v')
                ADVANCE(93);
            if (lookahead == 'w')
                ADVANCE(96);
            LEX_ERROR();
        case 323:
            if (lookahead == 'e')
                ADVANCE(324);
            if (lookahead == 'i')
                ADVANCE(4);
            if (lookahead == 'l')
                ADVANCE(6);
            LEX_ERROR();
        case 324:
            if (lookahead == 'n')
                ADVANCE(270);
            LEX_ERROR();
        case 325:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(325);
            if (lookahead == '#')
                ADVANCE(326);
            LEX_ERROR();
        case 326:
            if (lookahead == 'e')
                ADVANCE(324);
            LEX_ERROR();
        case 327:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(327);
            if (lookahead == '\n')
                ADVANCE(328);
            if (lookahead == ';')
                ADVANCE(104);
            if (lookahead == 'c')
                ADVANCE(329);
            LEX_ERROR();
        case 328:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 329:
            if (lookahead == 'a')
                ADVANCE(330);
            LEX_ERROR();
        case 330:
            if (lookahead == 't')
                ADVANCE(331);
            LEX_ERROR();
        case 331:
            if (lookahead == 'c')
                ADVANCE(332);
            LEX_ERROR();
        case 332:
            if (lookahead == 'h')
                ADVANCE(333);
            LEX_ERROR();
        case 333:
            ACCEPT_TOKEN(anon_sym_catch);
        case 334:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(334);
            if (lookahead == '(')
                ADVANCE(106);
            if (lookahead == '.')
                ADVANCE(107);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(108);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(109);
            if (lookahead == 'l')
                ADVANCE(61);
            if (lookahead == 'v')
                ADVANCE(93);
            if (lookahead == '{')
                ADVANCE(128);
            LEX_ERROR();
        case 335:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(335);
            if (lookahead == '?')
                ADVANCE(336);
            if (lookahead == 'a')
                ADVANCE(337);
            if (lookahead == '{')
                ADVANCE(128);
            LEX_ERROR();
        case 336:
            ACCEPT_TOKEN(anon_sym_QMARK);
        case 337:
            if (lookahead == 's')
                ADVANCE(338);
            LEX_ERROR();
        case 338:
            ACCEPT_TOKEN(anon_sym_as);
        case 339:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(339);
            if (lookahead == '.')
                ADVANCE(107);
            LEX_ERROR();
        case 340:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(340);
            if (lookahead == '(')
                ADVANCE(106);
            if (lookahead == ')')
                ADVANCE(220);
            if (lookahead == '.')
                ADVANCE(107);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(108);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(109);
            if (lookahead == 'l')
                ADVANCE(61);
            if (lookahead == 'v')
                ADVANCE(93);
            LEX_ERROR();
        case 341:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(341);
            if (lookahead == '.')
                ADVANCE(107);
            if (lookahead == '?')
                ADVANCE(336);
            if (lookahead == 'a')
                ADVANCE(337);
            if (lookahead == '{')
                ADVANCE(128);
            LEX_ERROR();
        case 342:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(342);
            if (lookahead == '(')
                ADVANCE(106);
            if (lookahead == '?')
                ADVANCE(336);
            if (lookahead == 'a')
                ADVANCE(337);
            if (lookahead == '{')
                ADVANCE(128);
            LEX_ERROR();
        case 343:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(343);
            if (lookahead == ')')
                ADVANCE(220);
            if (lookahead == ',')
                ADVANCE(231);
            if (lookahead == '?')
                ADVANCE(336);
            if (lookahead == 'a')
                ADVANCE(337);
            LEX_ERROR();
        case 344:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(344);
            if (lookahead == ')')
                ADVANCE(220);
            if (lookahead == ',')
                ADVANCE(231);
            if (lookahead == '.')
                ADVANCE(107);
            if (lookahead == '?')
                ADVANCE(336);
            if (lookahead == 'a')
                ADVANCE(337);
            LEX_ERROR();
        case 345:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(345);
            if (lookahead == '(')
                ADVANCE(106);
            if (lookahead == ')')
                ADVANCE(220);
            if (lookahead == ',')
                ADVANCE(231);
            if (lookahead == '?')
                ADVANCE(336);
            if (lookahead == 'a')
                ADVANCE(337);
            LEX_ERROR();
        case 346:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(346);
            if (lookahead == 'c')
                ADVANCE(347);
            if (lookahead == 'd')
                ADVANCE(351);
            if (lookahead == '}')
                ADVANCE(239);
            LEX_ERROR();
        case 347:
            if (lookahead == 'a')
                ADVANCE(348);
            LEX_ERROR();
        case 348:
            if (lookahead == 's')
                ADVANCE(349);
            LEX_ERROR();
        case 349:
            if (lookahead == 'e')
                ADVANCE(350);
            LEX_ERROR();
        case 350:
            ACCEPT_TOKEN(anon_sym_case);
        case 351:
            if (lookahead == 'e')
                ADVANCE(352);
            LEX_ERROR();
        case 352:
            if (lookahead == 'f')
                ADVANCE(353);
            LEX_ERROR();
        case 353:
            if (lookahead == 'a')
                ADVANCE(354);
            LEX_ERROR();
        case 354:
            if (lookahead == 'u')
                ADVANCE(355);
            LEX_ERROR();
        case 355:
            if (lookahead == 'l')
                ADVANCE(356);
            LEX_ERROR();
        case 356:
            if (lookahead == 't')
                ADVANCE(357);
            LEX_ERROR();
        case 357:
            ACCEPT_TOKEN(anon_sym_default);
        case 358:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(358);
            if (lookahead == '#')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'b')
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(359);
            if (lookahead == 'd')
                ADVANCE(360);
            if (lookahead == 'f')
                ADVANCE(33);
            if (lookahead == 'g')
                ADVANCE(49);
            if (lookahead == 'i')
                ADVANCE(54);
            if (lookahead == 'l')
                ADVANCE(61);
            if (lookahead == 'r')
                ADVANCE(64);
            if (lookahead == 's')
                ADVANCE(74);
            if (lookahead == 't')
                ADVANCE(80);
            if (lookahead == 'v')
                ADVANCE(93);
            if (lookahead == 'w')
                ADVANCE(96);
            if (lookahead == '}')
                ADVANCE(239);
            LEX_ERROR();
        case 359:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(113);
            if (lookahead == 'o')
                ADVANCE(20);
            ACCEPT_TOKEN(sym_identifier);
        case 360:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(361);
            if (lookahead == 'o')
                ADVANCE(32);
            ACCEPT_TOKEN(sym_identifier);
        case 361:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'f')
                ADVANCE(362);
            ACCEPT_TOKEN(sym_identifier);
        case 362:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(363);
            if (lookahead == 'e')
                ADVANCE(30);
            ACCEPT_TOKEN(sym_identifier);
        case 363:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(364);
            ACCEPT_TOKEN(sym_identifier);
        case 364:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(365);
            ACCEPT_TOKEN(sym_identifier);
        case 365:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(366);
            ACCEPT_TOKEN(sym_identifier);
        case 366:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_default);
        case 367:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(367);
            if (lookahead == ',')
                ADVANCE(231);
            if (lookahead == ':')
                ADVANCE(182);
            if (lookahead == '?')
                ADVANCE(336);
            if (lookahead == 'a')
                ADVANCE(337);
            LEX_ERROR();
        case 368:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(368);
            if (lookahead == ',')
                ADVANCE(231);
            if (lookahead == '.')
                ADVANCE(107);
            if (lookahead == ':')
                ADVANCE(182);
            if (lookahead == '?')
                ADVANCE(336);
            if (lookahead == 'a')
                ADVANCE(337);
            LEX_ERROR();
        case 369:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(369);
            if (lookahead == '(')
                ADVANCE(106);
            if (lookahead == ',')
                ADVANCE(231);
            if (lookahead == ':')
                ADVANCE(182);
            if (lookahead == '?')
                ADVANCE(336);
            if (lookahead == 'a')
                ADVANCE(337);
            LEX_ERROR();
        case 370:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(370);
            if (lookahead == 'e')
                ADVANCE(371);
            LEX_ERROR();
        case 371:
            if (lookahead == 'l')
                ADVANCE(372);
            LEX_ERROR();
        case 372:
            if (lookahead == 's')
                ADVANCE(373);
            LEX_ERROR();
        case 373:
            if (lookahead == 'e')
                ADVANCE(374);
            LEX_ERROR();
        case 374:
            ACCEPT_TOKEN(anon_sym_else);
        case 375:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(375);
            if (lookahead == ',')
                ADVANCE(231);
            if (lookahead == 'e')
                ADVANCE(371);
            LEX_ERROR();
        case 376:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(376);
            if (lookahead == '=')
                ADVANCE(232);
            if (lookahead == '?')
                ADVANCE(336);
            if (lookahead == 'a')
                ADVANCE(337);
            LEX_ERROR();
        case 377:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(377);
            if (lookahead == '.')
                ADVANCE(107);
            if (lookahead == '=')
                ADVANCE(232);
            if (lookahead == '?')
                ADVANCE(336);
            if (lookahead == 'a')
                ADVANCE(337);
            LEX_ERROR();
        case 378:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(378);
            if (lookahead == '(')
                ADVANCE(106);
            if (lookahead == '=')
                ADVANCE(232);
            if (lookahead == '?')
                ADVANCE(336);
            if (lookahead == 'a')
                ADVANCE(337);
            LEX_ERROR();
        case 379:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(379);
            if (lookahead == '*')
                ADVANCE(380);
            if (lookahead == 'O')
                ADVANCE(381);
            if (lookahead == 'i')
                ADVANCE(404);
            if (lookahead == 't')
                ADVANCE(301);
            if (lookahead == 'w')
                ADVANCE(305);
            LEX_ERROR();
        case 380:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 381:
            if (lookahead == 'S')
                ADVANCE(382);
            LEX_ERROR();
        case 382:
            if (lookahead == 'X')
                ADVANCE(383);
            LEX_ERROR();
        case 383:
            if (lookahead == 'A')
                ADVANCE(384);
            ACCEPT_TOKEN(anon_sym_OSX);
        case 384:
            if (lookahead == 'p')
                ADVANCE(385);
            LEX_ERROR();
        case 385:
            if (lookahead == 'p')
                ADVANCE(386);
            LEX_ERROR();
        case 386:
            if (lookahead == 'l')
                ADVANCE(387);
            LEX_ERROR();
        case 387:
            if (lookahead == 'i')
                ADVANCE(388);
            LEX_ERROR();
        case 388:
            if (lookahead == 'c')
                ADVANCE(389);
            LEX_ERROR();
        case 389:
            if (lookahead == 'a')
                ADVANCE(390);
            LEX_ERROR();
        case 390:
            if (lookahead == 't')
                ADVANCE(391);
            LEX_ERROR();
        case 391:
            if (lookahead == 'i')
                ADVANCE(392);
            LEX_ERROR();
        case 392:
            if (lookahead == 'o')
                ADVANCE(393);
            LEX_ERROR();
        case 393:
            if (lookahead == 'n')
                ADVANCE(394);
            LEX_ERROR();
        case 394:
            if (lookahead == 'E')
                ADVANCE(395);
            LEX_ERROR();
        case 395:
            if (lookahead == 'x')
                ADVANCE(396);
            LEX_ERROR();
        case 396:
            if (lookahead == 't')
                ADVANCE(397);
            LEX_ERROR();
        case 397:
            if (lookahead == 'e')
                ADVANCE(398);
            LEX_ERROR();
        case 398:
            if (lookahead == 'n')
                ADVANCE(399);
            LEX_ERROR();
        case 399:
            if (lookahead == 's')
                ADVANCE(400);
            LEX_ERROR();
        case 400:
            if (lookahead == 'i')
                ADVANCE(401);
            LEX_ERROR();
        case 401:
            if (lookahead == 'o')
                ADVANCE(402);
            LEX_ERROR();
        case 402:
            if (lookahead == 'n')
                ADVANCE(403);
            LEX_ERROR();
        case 403:
            ACCEPT_TOKEN(anon_sym_OSXApplicationExtension);
        case 404:
            if (lookahead == 'O')
                ADVANCE(405);
            LEX_ERROR();
        case 405:
            if (lookahead == 'S')
                ADVANCE(406);
            LEX_ERROR();
        case 406:
            if (lookahead == 'A')
                ADVANCE(407);
            ACCEPT_TOKEN(anon_sym_iOS);
        case 407:
            if (lookahead == 'p')
                ADVANCE(408);
            LEX_ERROR();
        case 408:
            if (lookahead == 'p')
                ADVANCE(409);
            LEX_ERROR();
        case 409:
            if (lookahead == 'l')
                ADVANCE(410);
            LEX_ERROR();
        case 410:
            if (lookahead == 'i')
                ADVANCE(411);
            LEX_ERROR();
        case 411:
            if (lookahead == 'c')
                ADVANCE(412);
            LEX_ERROR();
        case 412:
            if (lookahead == 'a')
                ADVANCE(413);
            LEX_ERROR();
        case 413:
            if (lookahead == 't')
                ADVANCE(414);
            LEX_ERROR();
        case 414:
            if (lookahead == 'i')
                ADVANCE(415);
            LEX_ERROR();
        case 415:
            if (lookahead == 'o')
                ADVANCE(416);
            LEX_ERROR();
        case 416:
            if (lookahead == 'n')
                ADVANCE(417);
            LEX_ERROR();
        case 417:
            if (lookahead == 'E')
                ADVANCE(418);
            LEX_ERROR();
        case 418:
            if (lookahead == 'x')
                ADVANCE(419);
            LEX_ERROR();
        case 419:
            if (lookahead == 't')
                ADVANCE(420);
            LEX_ERROR();
        case 420:
            if (lookahead == 'e')
                ADVANCE(421);
            LEX_ERROR();
        case 421:
            if (lookahead == 'n')
                ADVANCE(422);
            LEX_ERROR();
        case 422:
            if (lookahead == 's')
                ADVANCE(423);
            LEX_ERROR();
        case 423:
            if (lookahead == 'i')
                ADVANCE(424);
            LEX_ERROR();
        case 424:
            if (lookahead == 'o')
                ADVANCE(425);
            LEX_ERROR();
        case 425:
            if (lookahead == 'n')
                ADVANCE(426);
            LEX_ERROR();
        case 426:
            ACCEPT_TOKEN(anon_sym_iOSApplicationExtension);
        case 427:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(427);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(428);
            LEX_ERROR();
        case 428:
            if (lookahead == '.')
                ADVANCE(429);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(428);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 429:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(430);
            LEX_ERROR();
        case 430:
            if (lookahead == '.')
                ADVANCE(431);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(430);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 431:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(432);
            LEX_ERROR();
        case 432:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(432);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 433:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(433);
            if (lookahead == '#')
                ADVANCE(117);
            if (lookahead == 'c')
                ADVANCE(347);
            if (lookahead == 'l')
                ADVANCE(434);
            if (lookahead == 'v')
                ADVANCE(437);
            LEX_ERROR();
        case 434:
            if (lookahead == 'e')
                ADVANCE(435);
            LEX_ERROR();
        case 435:
            if (lookahead == 't')
                ADVANCE(436);
            LEX_ERROR();
        case 436:
            ACCEPT_TOKEN(anon_sym_let);
        case 437:
            if (lookahead == 'a')
                ADVANCE(438);
            LEX_ERROR();
        case 438:
            if (lookahead == 'r')
                ADVANCE(439);
            LEX_ERROR();
        case 439:
            ACCEPT_TOKEN(anon_sym_var);
        case 440:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(440);
            if (lookahead == ',')
                ADVANCE(231);
            if (lookahead == '{')
                ADVANCE(128);
            LEX_ERROR();
        case 441:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(441);
            if (lookahead == '\n')
                ADVANCE(442);
            if (lookahead == ';')
                ADVANCE(104);
            if (lookahead == 'e')
                ADVANCE(371);
            LEX_ERROR();
        case 442:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 443:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(443);
            if (lookahead == 'i')
                ADVANCE(187);
            if (lookahead == '{')
                ADVANCE(128);
            LEX_ERROR();
        case 444:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(444);
            if (lookahead == 'w')
                ADVANCE(195);
            LEX_ERROR();
        case 445:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(445);
            if (lookahead == '\n')
                ADVANCE(446);
            if (lookahead == ',')
                ADVANCE(231);
            if (lookahead == ';')
                ADVANCE(104);
            LEX_ERROR();
        case 446:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 447:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(447);
            if (lookahead == '\n')
                ADVANCE(448);
            if (lookahead == ',')
                ADVANCE(231);
            if (lookahead == ':')
                ADVANCE(182);
            if (lookahead == ';')
                ADVANCE(104);
            if (lookahead == '=')
                ADVANCE(232);
            if (lookahead == '?')
                ADVANCE(336);
            if (lookahead == 'a')
                ADVANCE(337);
            LEX_ERROR();
        case 448:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 449:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(449);
            if (lookahead == '\n')
                ADVANCE(450);
            if (lookahead == ',')
                ADVANCE(231);
            if (lookahead == '.')
                ADVANCE(107);
            if (lookahead == ':')
                ADVANCE(182);
            if (lookahead == ';')
                ADVANCE(104);
            if (lookahead == '=')
                ADVANCE(232);
            if (lookahead == '?')
                ADVANCE(336);
            if (lookahead == 'a')
                ADVANCE(337);
            LEX_ERROR();
        case 450:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 451:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(451);
            if (lookahead == '\n')
                ADVANCE(452);
            if (lookahead == '(')
                ADVANCE(106);
            if (lookahead == ',')
                ADVANCE(231);
            if (lookahead == ':')
                ADVANCE(182);
            if (lookahead == ';')
                ADVANCE(104);
            if (lookahead == '=')
                ADVANCE(232);
            if (lookahead == '?')
                ADVANCE(336);
            if (lookahead == 'a')
                ADVANCE(337);
            LEX_ERROR();
        case 452:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 453:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(453);
            if (lookahead == '\n')
                ADVANCE(454);
            if (lookahead == ',')
                ADVANCE(231);
            if (lookahead == ';')
                ADVANCE(104);
            if (lookahead == '=')
                ADVANCE(232);
            LEX_ERROR();
        case 454:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 455:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(455);
            if (lookahead == '\n')
                ADVANCE(456);
            if (lookahead == ',')
                ADVANCE(231);
            if (lookahead == '.')
                ADVANCE(107);
            if (lookahead == ';')
                ADVANCE(104);
            if (lookahead == '=')
                ADVANCE(232);
            LEX_ERROR();
        case 456:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 457:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(457);
            if (lookahead == ';')
                ADVANCE(104);
            LEX_ERROR();
        case 458:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(458);
            if (lookahead == ':')
                ADVANCE(182);
            if (lookahead == '?')
                ADVANCE(336);
            if (lookahead == 'a')
                ADVANCE(337);
            if (lookahead == 'i')
                ADVANCE(459);
            LEX_ERROR();
        case 459:
            if (lookahead == 'n')
                ADVANCE(460);
            LEX_ERROR();
        case 460:
            ACCEPT_TOKEN(anon_sym_in);
        case 461:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(461);
            if (lookahead == ',')
                ADVANCE(231);
            if (lookahead == ':')
                ADVANCE(182);
            if (lookahead == ';')
                ADVANCE(104);
            if (lookahead == '?')
                ADVANCE(336);
            if (lookahead == 'a')
                ADVANCE(337);
            if (lookahead == 'i')
                ADVANCE(459);
            LEX_ERROR();
        case 462:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(462);
            if (lookahead == ';')
                ADVANCE(104);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            LEX_ERROR();
        case 463:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(463);
            if (lookahead == '(')
                ADVANCE(106);
            if (lookahead == ')')
                ADVANCE(220);
            if (lookahead == '.')
                ADVANCE(107);
            if (lookahead == ';')
                ADVANCE(104);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(108);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(109);
            if (lookahead == 'l')
                ADVANCE(61);
            if (lookahead == 'v')
                ADVANCE(93);
            LEX_ERROR();
        case 464:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(464);
            if (lookahead == ',')
                ADVANCE(231);
            if (lookahead == '.')
                ADVANCE(107);
            if (lookahead == ':')
                ADVANCE(182);
            if (lookahead == ';')
                ADVANCE(104);
            if (lookahead == '?')
                ADVANCE(336);
            if (lookahead == 'a')
                ADVANCE(337);
            if (lookahead == 'i')
                ADVANCE(459);
            LEX_ERROR();
        case 465:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(465);
            if (lookahead == '.')
                ADVANCE(107);
            if (lookahead == ':')
                ADVANCE(182);
            if (lookahead == '?')
                ADVANCE(336);
            if (lookahead == 'a')
                ADVANCE(337);
            if (lookahead == 'i')
                ADVANCE(459);
            LEX_ERROR();
        case 466:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(466);
            if (lookahead == '(')
                ADVANCE(106);
            if (lookahead == ':')
                ADVANCE(182);
            if (lookahead == '?')
                ADVANCE(336);
            if (lookahead == 'a')
                ADVANCE(337);
            if (lookahead == 'i')
                ADVANCE(459);
            LEX_ERROR();
        case 467:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(467);
            if (lookahead == 'i')
                ADVANCE(459);
            LEX_ERROR();
        case 468:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(468);
            if (lookahead == '.')
                ADVANCE(107);
            if (lookahead == 'i')
                ADVANCE(459);
            LEX_ERROR();
        case 469:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(469);
            if (lookahead == ')')
                ADVANCE(220);
            if (lookahead == ',')
                ADVANCE(231);
            if (lookahead == ';')
                ADVANCE(104);
            if (lookahead == '?')
                ADVANCE(336);
            if (lookahead == 'a')
                ADVANCE(337);
            LEX_ERROR();
        case 470:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(470);
            if (lookahead == ')')
                ADVANCE(220);
            if (lookahead == ',')
                ADVANCE(231);
            if (lookahead == '.')
                ADVANCE(107);
            if (lookahead == ';')
                ADVANCE(104);
            if (lookahead == '?')
                ADVANCE(336);
            if (lookahead == 'a')
                ADVANCE(337);
            LEX_ERROR();
        case 471:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(471);
            if (lookahead == ')')
                ADVANCE(220);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            LEX_ERROR();
        case 472:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(472);
            if (lookahead == ',')
                ADVANCE(231);
            if (lookahead == ';')
                ADVANCE(104);
            LEX_ERROR();
        case 473:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(473);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == '{')
                ADVANCE(128);
            LEX_ERROR();
        case 474:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(474);
            if (lookahead == ',')
                ADVANCE(231);
            if (lookahead == ':')
                ADVANCE(182);
            if (lookahead == ';')
                ADVANCE(104);
            if (lookahead == '=')
                ADVANCE(232);
            if (lookahead == '?')
                ADVANCE(336);
            if (lookahead == 'a')
                ADVANCE(337);
            LEX_ERROR();
        case 475:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(475);
            if (lookahead == ',')
                ADVANCE(231);
            if (lookahead == '.')
                ADVANCE(107);
            if (lookahead == ':')
                ADVANCE(182);
            if (lookahead == ';')
                ADVANCE(104);
            if (lookahead == '=')
                ADVANCE(232);
            if (lookahead == '?')
                ADVANCE(336);
            if (lookahead == 'a')
                ADVANCE(337);
            LEX_ERROR();
        case 476:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(476);
            if (lookahead == '(')
                ADVANCE(106);
            if (lookahead == ',')
                ADVANCE(231);
            if (lookahead == ':')
                ADVANCE(182);
            if (lookahead == ';')
                ADVANCE(104);
            if (lookahead == '=')
                ADVANCE(232);
            if (lookahead == '?')
                ADVANCE(336);
            if (lookahead == 'a')
                ADVANCE(337);
            LEX_ERROR();
        case 477:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(477);
            if (lookahead == ',')
                ADVANCE(231);
            if (lookahead == ';')
                ADVANCE(104);
            if (lookahead == '=')
                ADVANCE(232);
            LEX_ERROR();
        case 478:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(478);
            if (lookahead == ',')
                ADVANCE(231);
            if (lookahead == '.')
                ADVANCE(107);
            if (lookahead == ';')
                ADVANCE(104);
            if (lookahead == '=')
                ADVANCE(232);
            LEX_ERROR();
        case 479:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(479);
            if (lookahead == '.')
                ADVANCE(107);
            if (lookahead == '{')
                ADVANCE(128);
            LEX_ERROR();
        case 480:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(480);
            if (lookahead == '\n')
                ADVANCE(481);
            if (lookahead == '!')
                ADVANCE(482);
            if (lookahead == '\"')
                ADVANCE(251);
            if (lookahead == '#')
                ADVANCE(483);
            if (lookahead == '%')
                ADVANCE(153);
            if (lookahead == '&')
                ADVANCE(484);
            if (lookahead == '(')
                ADVANCE(106);
            if (lookahead == ')')
                ADVANCE(220);
            if (lookahead == '*')
                ADVANCE(486);
            if (lookahead == '+')
                ADVANCE(153);
            if (lookahead == ',')
                ADVANCE(231);
            if (lookahead == '-')
                ADVANCE(487);
            if (lookahead == '.')
                ADVANCE(107);
            if (lookahead == '/')
                ADVANCE(153);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(489);
            if (lookahead == ':')
                ADVANCE(182);
            if (lookahead == ';')
                ADVANCE(104);
            if (lookahead == '<')
                ADVANCE(153);
            if (lookahead == '=')
                ADVANCE(490);
            if (lookahead == '>')
                ADVANCE(153);
            if (lookahead == '?')
                ADVANCE(491);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'n') ||
                (lookahead == 'q') ||
                (lookahead == 'u') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(10);
            if (lookahead == 'O')
                ADVANCE(492);
            if (lookahead == '^')
                ADVANCE(153);
            if (lookahead == '_')
                ADVANCE(108);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'a')
                ADVANCE(515);
            if (lookahead == 'b')
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(521);
            if (lookahead == 'd')
                ADVANCE(360);
            if (lookahead == 'e')
                ADVANCE(526);
            if (lookahead == 'f')
                ADVANCE(530);
            if (lookahead == 'g')
                ADVANCE(49);
            if (lookahead == 'i')
                ADVANCE(533);
            if (lookahead == 'l')
                ADVANCE(61);
            if (lookahead == 'o')
                ADVANCE(143);
            if (lookahead == 'p')
                ADVANCE(164);
            if (lookahead == 'r')
                ADVANCE(560);
            if (lookahead == 's')
                ADVANCE(568);
            if (lookahead == 't')
                ADVANCE(569);
            if (lookahead == 'v')
                ADVANCE(93);
            if (lookahead == 'w')
                ADVANCE(578);
            if (lookahead == 'x')
                ADVANCE(585);
            if (lookahead == '{')
                ADVANCE(128);
            if (lookahead == '|')
                ADVANCE(591);
            if (lookahead == '}')
                ADVANCE(239);
            if (lookahead == '~')
                ADVANCE(153);
            LEX_ERROR();
        case 481:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 482:
            if (lookahead == '!')
                ADVANCE(153);
            if (lookahead == '%')
                ADVANCE(153);
            if (lookahead == '&')
                ADVANCE(153);
            if (lookahead == '*')
                ADVANCE(153);
            if (lookahead == '+')
                ADVANCE(153);
            if (lookahead == '-')
                ADVANCE(153);
            if (lookahead == '/')
                ADVANCE(153);
            if (lookahead == '<')
                ADVANCE(153);
            if (lookahead == '=')
                ADVANCE(153);
            if (lookahead == '>')
                ADVANCE(153);
            if (lookahead == '?')
                ADVANCE(153);
            if (lookahead == '^')
                ADVANCE(153);
            if (lookahead == '|')
                ADVANCE(153);
            if (lookahead == '~')
                ADVANCE(153);
            ACCEPT_TOKEN(anon_sym_BANG);
        case 483:
            if (lookahead == 'a')
                ADVANCE(118);
            if (lookahead == 'e')
                ADVANCE(264);
            if (lookahead == 'i')
                ADVANCE(4);
            if (lookahead == 'l')
                ADVANCE(6);
            LEX_ERROR();
        case 484:
            if (lookahead == '!')
                ADVANCE(153);
            if (lookahead == '%')
                ADVANCE(153);
            if (lookahead == '&')
                ADVANCE(485);
            if (lookahead == '*')
                ADVANCE(153);
            if (lookahead == '+')
                ADVANCE(153);
            if (lookahead == '-')
                ADVANCE(153);
            if (lookahead == '/')
                ADVANCE(153);
            if (lookahead == '<')
                ADVANCE(153);
            if (lookahead == '=')
                ADVANCE(153);
            if (lookahead == '>')
                ADVANCE(153);
            if (lookahead == '?')
                ADVANCE(153);
            if (lookahead == '^')
                ADVANCE(153);
            if (lookahead == '|')
                ADVANCE(153);
            if (lookahead == '~')
                ADVANCE(153);
            ACCEPT_TOKEN(sym_operator);
        case 485:
            if (lookahead == '!')
                ADVANCE(153);
            if (lookahead == '%')
                ADVANCE(153);
            if (lookahead == '&')
                ADVANCE(153);
            if (lookahead == '*')
                ADVANCE(153);
            if (lookahead == '+')
                ADVANCE(153);
            if (lookahead == '-')
                ADVANCE(153);
            if (lookahead == '/')
                ADVANCE(153);
            if (lookahead == '<')
                ADVANCE(153);
            if (lookahead == '=')
                ADVANCE(153);
            if (lookahead == '>')
                ADVANCE(153);
            if (lookahead == '?')
                ADVANCE(153);
            if (lookahead == '^')
                ADVANCE(153);
            if (lookahead == '|')
                ADVANCE(153);
            if (lookahead == '~')
                ADVANCE(153);
            ACCEPT_TOKEN(anon_sym_AMP_AMP);
        case 486:
            if (lookahead == '!')
                ADVANCE(153);
            if (lookahead == '%')
                ADVANCE(153);
            if (lookahead == '&')
                ADVANCE(153);
            if (lookahead == '*')
                ADVANCE(153);
            if (lookahead == '+')
                ADVANCE(153);
            if (lookahead == '-')
                ADVANCE(153);
            if (lookahead == '/')
                ADVANCE(153);
            if (lookahead == '<')
                ADVANCE(153);
            if (lookahead == '=')
                ADVANCE(153);
            if (lookahead == '>')
                ADVANCE(153);
            if (lookahead == '?')
                ADVANCE(153);
            if (lookahead == '^')
                ADVANCE(153);
            if (lookahead == '|')
                ADVANCE(153);
            if (lookahead == '~')
                ADVANCE(153);
            ACCEPT_TOKEN(anon_sym_STAR);
        case 487:
            if (lookahead == '!')
                ADVANCE(153);
            if (lookahead == '%')
                ADVANCE(153);
            if (lookahead == '&')
                ADVANCE(153);
            if (lookahead == '*')
                ADVANCE(153);
            if (lookahead == '+')
                ADVANCE(153);
            if (lookahead == '-')
                ADVANCE(153);
            if (lookahead == '/')
                ADVANCE(153);
            if (lookahead == '<')
                ADVANCE(153);
            if (lookahead == '=')
                ADVANCE(153);
            if (lookahead == '>')
                ADVANCE(488);
            if (lookahead == '?')
                ADVANCE(153);
            if (lookahead == '^')
                ADVANCE(153);
            if (lookahead == '|')
                ADVANCE(153);
            if (lookahead == '~')
                ADVANCE(153);
            ACCEPT_TOKEN(sym_operator);
        case 488:
            if (lookahead == '!')
                ADVANCE(153);
            if (lookahead == '%')
                ADVANCE(153);
            if (lookahead == '&')
                ADVANCE(153);
            if (lookahead == '*')
                ADVANCE(153);
            if (lookahead == '+')
                ADVANCE(153);
            if (lookahead == '-')
                ADVANCE(153);
            if (lookahead == '/')
                ADVANCE(153);
            if (lookahead == '<')
                ADVANCE(153);
            if (lookahead == '=')
                ADVANCE(153);
            if (lookahead == '>')
                ADVANCE(153);
            if (lookahead == '?')
                ADVANCE(153);
            if (lookahead == '^')
                ADVANCE(153);
            if (lookahead == '|')
                ADVANCE(153);
            if (lookahead == '~')
                ADVANCE(153);
            ACCEPT_TOKEN(anon_sym_DASH_GT);
        case 489:
            if (lookahead == '.')
                ADVANCE(429);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(489);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 490:
            if (lookahead == '!')
                ADVANCE(153);
            if (lookahead == '%')
                ADVANCE(153);
            if (lookahead == '&')
                ADVANCE(153);
            if (lookahead == '*')
                ADVANCE(153);
            if (lookahead == '+')
                ADVANCE(153);
            if (lookahead == '-')
                ADVANCE(153);
            if (lookahead == '/')
                ADVANCE(153);
            if (lookahead == '<')
                ADVANCE(153);
            if (lookahead == '=')
                ADVANCE(153);
            if (lookahead == '>')
                ADVANCE(153);
            if (lookahead == '?')
                ADVANCE(153);
            if (lookahead == '^')
                ADVANCE(153);
            if (lookahead == '|')
                ADVANCE(153);
            if (lookahead == '~')
                ADVANCE(153);
            ACCEPT_TOKEN(anon_sym_EQ);
        case 491:
            if (lookahead == '!')
                ADVANCE(153);
            if (lookahead == '%')
                ADVANCE(153);
            if (lookahead == '&')
                ADVANCE(153);
            if (lookahead == '*')
                ADVANCE(153);
            if (lookahead == '+')
                ADVANCE(153);
            if (lookahead == '-')
                ADVANCE(153);
            if (lookahead == '/')
                ADVANCE(153);
            if (lookahead == '<')
                ADVANCE(153);
            if (lookahead == '=')
                ADVANCE(153);
            if (lookahead == '>')
                ADVANCE(153);
            if (lookahead == '?')
                ADVANCE(153);
            if (lookahead == '^')
                ADVANCE(153);
            if (lookahead == '|')
                ADVANCE(153);
            if (lookahead == '~')
                ADVANCE(153);
            ACCEPT_TOKEN(anon_sym_QMARK);
        case 492:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'S')
                ADVANCE(493);
            ACCEPT_TOKEN(sym_identifier);
        case 493:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'W') ||
                (lookahead == 'Y') ||
                (lookahead == 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'X')
                ADVANCE(494);
            ACCEPT_TOKEN(sym_identifier);
        case 494:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == 'A')
                ADVANCE(495);
            if (('B' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_OSX);
        case 495:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(496);
            ACCEPT_TOKEN(sym_identifier);
        case 496:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(497);
            ACCEPT_TOKEN(sym_identifier);
        case 497:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(498);
            ACCEPT_TOKEN(sym_identifier);
        case 498:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(499);
            ACCEPT_TOKEN(sym_identifier);
        case 499:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(500);
            ACCEPT_TOKEN(sym_identifier);
        case 500:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(501);
            ACCEPT_TOKEN(sym_identifier);
        case 501:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(502);
            ACCEPT_TOKEN(sym_identifier);
        case 502:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(503);
            ACCEPT_TOKEN(sym_identifier);
        case 503:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(504);
            ACCEPT_TOKEN(sym_identifier);
        case 504:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(505);
            ACCEPT_TOKEN(sym_identifier);
        case 505:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'D') ||
                ('F' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'E')
                ADVANCE(506);
            ACCEPT_TOKEN(sym_identifier);
        case 506:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(10);
            if (lookahead == 'x')
                ADVANCE(507);
            ACCEPT_TOKEN(sym_identifier);
        case 507:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(508);
            ACCEPT_TOKEN(sym_identifier);
        case 508:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(509);
            ACCEPT_TOKEN(sym_identifier);
        case 509:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(510);
            ACCEPT_TOKEN(sym_identifier);
        case 510:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(511);
            ACCEPT_TOKEN(sym_identifier);
        case 511:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(512);
            ACCEPT_TOKEN(sym_identifier);
        case 512:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(513);
            ACCEPT_TOKEN(sym_identifier);
        case 513:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(514);
            ACCEPT_TOKEN(sym_identifier);
        case 514:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_OSXApplicationExtension);
        case 515:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(516);
            if (lookahead == 's')
                ADVANCE(520);
            ACCEPT_TOKEN(sym_identifier);
        case 516:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(136);
            if (lookahead == 'm')
                ADVANCE(517);
            ACCEPT_TOKEN(sym_identifier);
        case 517:
            if (('0' <= lookahead && lookahead <= '5') ||
                ('7' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '6')
                ADVANCE(518);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_arm);
        case 518:
            if (('0' <= lookahead && lookahead <= '3') ||
                ('5' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '4')
                ADVANCE(519);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 519:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_arm64);
        case 520:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_as);
        case 521:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(522);
            if (lookahead == 'l')
                ADVANCE(155);
            if (lookahead == 'o')
                ADVANCE(20);
            ACCEPT_TOKEN(sym_identifier);
        case 522:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(114);
            if (lookahead == 't')
                ADVANCE(523);
            ACCEPT_TOKEN(sym_identifier);
        case 523:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(524);
            ACCEPT_TOKEN(sym_identifier);
        case 524:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(525);
            ACCEPT_TOKEN(sym_identifier);
        case 525:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_catch);
        case 526:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(527);
            if (lookahead == 'n')
                ADVANCE(160);
            ACCEPT_TOKEN(sym_identifier);
        case 527:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(528);
            ACCEPT_TOKEN(sym_identifier);
        case 528:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(529);
            ACCEPT_TOKEN(sym_identifier);
        case 529:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_else);
        case 530:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(531);
            if (lookahead == 'o')
                ADVANCE(44);
            if (lookahead == 'u')
                ADVANCE(46);
            ACCEPT_TOKEN(sym_identifier);
        case 531:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(532);
            ACCEPT_TOKEN(sym_identifier);
        case 532:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(36);
            if (lookahead == 's')
                ADVANCE(141);
            ACCEPT_TOKEN(sym_identifier);
        case 533:
            if (('0' <= lookahead && lookahead <= '2') ||
                ('4' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '3')
                ADVANCE(534);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'O')
                ADVANCE(537);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'm')
                ADVANCE(56);
            if (lookahead == 'n')
                ADVANCE(559);
            if (lookahead == 's')
                ADVANCE(110);
            ACCEPT_TOKEN(sym_identifier);
        case 534:
            if (('0' <= lookahead && lookahead <= '7') ||
                (lookahead == '9'))
                ADVANCE(10);
            if (lookahead == '8')
                ADVANCE(535);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 535:
            if (('0' <= lookahead && lookahead <= '5') ||
                ('7' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '6')
                ADVANCE(536);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 536:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_i386);
        case 537:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'S')
                ADVANCE(538);
            ACCEPT_TOKEN(sym_identifier);
        case 538:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == 'A')
                ADVANCE(539);
            if (('B' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_iOS);
        case 539:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(540);
            ACCEPT_TOKEN(sym_identifier);
        case 540:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(541);
            ACCEPT_TOKEN(sym_identifier);
        case 541:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(542);
            ACCEPT_TOKEN(sym_identifier);
        case 542:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(543);
            ACCEPT_TOKEN(sym_identifier);
        case 543:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(544);
            ACCEPT_TOKEN(sym_identifier);
        case 544:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(545);
            ACCEPT_TOKEN(sym_identifier);
        case 545:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(546);
            ACCEPT_TOKEN(sym_identifier);
        case 546:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(547);
            ACCEPT_TOKEN(sym_identifier);
        case 547:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(548);
            ACCEPT_TOKEN(sym_identifier);
        case 548:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(549);
            ACCEPT_TOKEN(sym_identifier);
        case 549:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'D') ||
                ('F' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'E')
                ADVANCE(550);
            ACCEPT_TOKEN(sym_identifier);
        case 550:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(10);
            if (lookahead == 'x')
                ADVANCE(551);
            ACCEPT_TOKEN(sym_identifier);
        case 551:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(552);
            ACCEPT_TOKEN(sym_identifier);
        case 552:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(553);
            ACCEPT_TOKEN(sym_identifier);
        case 553:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(554);
            ACCEPT_TOKEN(sym_identifier);
        case 554:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(555);
            ACCEPT_TOKEN(sym_identifier);
        case 555:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(556);
            ACCEPT_TOKEN(sym_identifier);
        case 556:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(557);
            ACCEPT_TOKEN(sym_identifier);
        case 557:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(558);
            ACCEPT_TOKEN(sym_identifier);
        case 558:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_iOSApplicationExtension);
        case 559:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(223);
            ACCEPT_TOKEN(anon_sym_in);
        case 560:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(561);
            ACCEPT_TOKEN(sym_identifier);
        case 561:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(66);
            if (lookahead == 't')
                ADVANCE(562);
            ACCEPT_TOKEN(sym_identifier);
        case 562:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(563);
            if (lookahead == 'u')
                ADVANCE(71);
            ACCEPT_TOKEN(sym_identifier);
        case 563:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(564);
            ACCEPT_TOKEN(sym_identifier);
        case 564:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(565);
            ACCEPT_TOKEN(sym_identifier);
        case 565:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'w')
                ADVANCE(566);
            ACCEPT_TOKEN(sym_identifier);
        case 566:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(567);
            ACCEPT_TOKEN(sym_identifier);
        case 567:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_rethrows);
        case 568:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(173);
            if (lookahead == 'w')
                ADVANCE(75);
            ACCEPT_TOKEN(sym_identifier);
        case 569:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'u') ||
                (lookahead == 'w') ||
                (lookahead == 'x') ||
                (lookahead == 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(570);
            if (lookahead == 'r')
                ADVANCE(146);
            if (lookahead == 'v')
                ADVANCE(575);
            if (lookahead == 'y')
                ADVANCE(85);
            ACCEPT_TOKEN(sym_identifier);
        case 570:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(571);
            ACCEPT_TOKEN(sym_identifier);
        case 571:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(572);
            ACCEPT_TOKEN(sym_identifier);
        case 572:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'w')
                ADVANCE(573);
            ACCEPT_TOKEN(sym_identifier);
        case 573:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(574);
            ACCEPT_TOKEN(anon_sym_throw);
        case 574:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_throws);
        case 575:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'O')
                ADVANCE(576);
            ACCEPT_TOKEN(sym_identifier);
        case 576:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'S')
                ADVANCE(577);
            ACCEPT_TOKEN(sym_identifier);
        case 577:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_tvOS);
        case 578:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(579);
            if (lookahead == 'h')
                ADVANCE(97);
            ACCEPT_TOKEN(sym_identifier);
        case 579:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(580);
            ACCEPT_TOKEN(sym_identifier);
        case 580:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(581);
            ACCEPT_TOKEN(sym_identifier);
        case 581:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(582);
            ACCEPT_TOKEN(sym_identifier);
        case 582:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'O')
                ADVANCE(583);
            ACCEPT_TOKEN(sym_identifier);
        case 583:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'S')
                ADVANCE(584);
            ACCEPT_TOKEN(sym_identifier);
        case 584:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_watchOS);
        case 585:
            if (('0' <= lookahead && lookahead <= '7') ||
                (lookahead == '9'))
                ADVANCE(10);
            if (lookahead == '8')
                ADVANCE(586);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 586:
            if (('0' <= lookahead && lookahead <= '5') ||
                ('7' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '6')
                ADVANCE(587);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 587:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(588);
            ACCEPT_TOKEN(sym_identifier);
        case 588:
            if (('0' <= lookahead && lookahead <= '5') ||
                ('7' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '6')
                ADVANCE(589);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 589:
            if (('0' <= lookahead && lookahead <= '3') ||
                ('5' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '4')
                ADVANCE(590);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 590:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_x86_64);
        case 591:
            if (lookahead == '!')
                ADVANCE(153);
            if (lookahead == '%')
                ADVANCE(153);
            if (lookahead == '&')
                ADVANCE(153);
            if (lookahead == '*')
                ADVANCE(153);
            if (lookahead == '+')
                ADVANCE(153);
            if (lookahead == '-')
                ADVANCE(153);
            if (lookahead == '/')
                ADVANCE(153);
            if (lookahead == '<')
                ADVANCE(153);
            if (lookahead == '=')
                ADVANCE(153);
            if (lookahead == '>')
                ADVANCE(153);
            if (lookahead == '?')
                ADVANCE(153);
            if (lookahead == '^')
                ADVANCE(153);
            if (lookahead == '|')
                ADVANCE(592);
            if (lookahead == '~')
                ADVANCE(153);
            ACCEPT_TOKEN(sym_operator);
        case 592:
            if (lookahead == '!')
                ADVANCE(153);
            if (lookahead == '%')
                ADVANCE(153);
            if (lookahead == '&')
                ADVANCE(153);
            if (lookahead == '*')
                ADVANCE(153);
            if (lookahead == '+')
                ADVANCE(153);
            if (lookahead == '-')
                ADVANCE(153);
            if (lookahead == '/')
                ADVANCE(153);
            if (lookahead == '<')
                ADVANCE(153);
            if (lookahead == '=')
                ADVANCE(153);
            if (lookahead == '>')
                ADVANCE(153);
            if (lookahead == '?')
                ADVANCE(153);
            if (lookahead == '^')
                ADVANCE(153);
            if (lookahead == '|')
                ADVANCE(153);
            if (lookahead == '~')
                ADVANCE(153);
            ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
        case ts_lex_state_error:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(480);
            if (lookahead == '\n')
                ADVANCE(481);
            if (lookahead == '!')
                ADVANCE(482);
            if (lookahead == '\"')
                ADVANCE(251);
            if (lookahead == '#')
                ADVANCE(483);
            if (lookahead == '%')
                ADVANCE(153);
            if (lookahead == '&')
                ADVANCE(484);
            if (lookahead == '(')
                ADVANCE(106);
            if (lookahead == ')')
                ADVANCE(220);
            if (lookahead == '*')
                ADVANCE(486);
            if (lookahead == '+')
                ADVANCE(153);
            if (lookahead == ',')
                ADVANCE(231);
            if (lookahead == '-')
                ADVANCE(487);
            if (lookahead == '.')
                ADVANCE(107);
            if (lookahead == '/')
                ADVANCE(153);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(489);
            if (lookahead == ':')
                ADVANCE(182);
            if (lookahead == ';')
                ADVANCE(104);
            if (lookahead == '<')
                ADVANCE(153);
            if (lookahead == '=')
                ADVANCE(490);
            if (lookahead == '>')
                ADVANCE(153);
            if (lookahead == '?')
                ADVANCE(491);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'n') ||
                (lookahead == 'q') ||
                (lookahead == 'u') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(10);
            if (lookahead == 'O')
                ADVANCE(492);
            if (lookahead == '^')
                ADVANCE(153);
            if (lookahead == '_')
                ADVANCE(108);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'a')
                ADVANCE(515);
            if (lookahead == 'b')
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(521);
            if (lookahead == 'd')
                ADVANCE(360);
            if (lookahead == 'e')
                ADVANCE(526);
            if (lookahead == 'f')
                ADVANCE(530);
            if (lookahead == 'g')
                ADVANCE(49);
            if (lookahead == 'i')
                ADVANCE(533);
            if (lookahead == 'l')
                ADVANCE(61);
            if (lookahead == 'o')
                ADVANCE(143);
            if (lookahead == 'p')
                ADVANCE(164);
            if (lookahead == 'r')
                ADVANCE(560);
            if (lookahead == 's')
                ADVANCE(568);
            if (lookahead == 't')
                ADVANCE(569);
            if (lookahead == 'v')
                ADVANCE(93);
            if (lookahead == 'w')
                ADVANCE(578);
            if (lookahead == 'x')
                ADVANCE(585);
            if (lookahead == '{')
                ADVANCE(128);
            if (lookahead == '|')
                ADVANCE(591);
            if (lookahead == '}')
                ADVANCE(239);
            if (lookahead == '~')
                ADVANCE(153);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 1,
    [1] = 101,
    [2] = 1,
    [3] = 102,
    [4] = 102,
    [5] = 102,
    [6] = 105,
    [7] = 101,
    [8] = 111,
    [9] = 116,
    [10] = 105,
    [11] = 105,
    [12] = 127,
    [13] = 116,
    [14] = 116,
    [15] = 129,
    [16] = 130,
    [17] = 130,
    [18] = 130,
    [19] = 130,
    [20] = 127,
    [21] = 127,
    [22] = 132,
    [23] = 149,
    [24] = 152,
    [25] = 129,
    [26] = 179,
    [27] = 180,
    [28] = 183,
    [29] = 102,
    [30] = 200,
    [31] = 201,
    [32] = 219,
    [33] = 226,
    [34] = 228,
    [35] = 229,
    [36] = 230,
    [37] = 129,
    [38] = 233,
    [39] = 230,
    [40] = 234,
    [41] = 226,
    [42] = 235,
    [43] = 129,
    [44] = 236,
    [45] = 236,
    [46] = 234,
    [47] = 226,
    [48] = 201,
    [49] = 226,
    [50] = 201,
    [51] = 228,
    [52] = 229,
    [53] = 230,
    [54] = 233,
    [55] = 230,
    [56] = 234,
    [57] = 129,
    [58] = 236,
    [59] = 234,
    [60] = 234,
    [61] = 129,
    [62] = 236,
    [63] = 234,
    [64] = 229,
    [65] = 233,
    [66] = 230,
    [67] = 129,
    [68] = 236,
    [69] = 234,
    [70] = 201,
    [71] = 226,
    [72] = 201,
    [73] = 230,
    [74] = 230,
    [75] = 237,
    [76] = 237,
    [77] = 129,
    [78] = 230,
    [79] = 234,
    [80] = 226,
    [81] = 129,
    [82] = 236,
    [83] = 234,
    [84] = 201,
    [85] = 229,
    [86] = 233,
    [87] = 230,
    [88] = 129,
    [89] = 236,
    [90] = 234,
    [91] = 226,
    [92] = 201,
    [93] = 201,
    [94] = 102,
    [95] = 238,
    [96] = 240,
    [97] = 129,
    [98] = 242,
    [99] = 242,
    [100] = 244,
    [101] = 244,
    [102] = 129,
    [103] = 242,
    [104] = 102,
    [105] = 102,
    [106] = 129,
    [107] = 242,
    [108] = 102,
    [109] = 238,
    [110] = 102,
    [111] = 246,
    [112] = 102,
    [113] = 102,
    [114] = 238,
    [115] = 246,
    [116] = 247,
    [117] = 129,
    [118] = 102,
    [119] = 102,
    [120] = 248,
    [121] = 248,
    [122] = 129,
    [123] = 102,
    [124] = 179,
    [125] = 248,
    [126] = 102,
    [127] = 179,
    [128] = 248,
    [129] = 102,
    [130] = 248,
    [131] = 102,
    [132] = 250,
    [133] = 102,
    [134] = 262,
    [135] = 262,
    [136] = 132,
    [137] = 200,
    [138] = 200,
    [139] = 132,
    [140] = 262,
    [141] = 262,
    [142] = 132,
    [143] = 132,
    [144] = 262,
    [145] = 262,
    [146] = 278,
    [147] = 234,
    [148] = 262,
    [149] = 294,
    [150] = 312,
    [151] = 312,
    [152] = 132,
    [153] = 200,
    [154] = 200,
    [155] = 132,
    [156] = 312,
    [157] = 312,
    [158] = 132,
    [159] = 132,
    [160] = 312,
    [161] = 312,
    [162] = 278,
    [163] = 234,
    [164] = 312,
    [165] = 294,
    [166] = 312,
    [167] = 312,
    [168] = 262,
    [169] = 313,
    [170] = 102,
    [171] = 314,
    [172] = 316,
    [173] = 132,
    [174] = 322,
    [175] = 102,
    [176] = 322,
    [177] = 102,
    [178] = 325,
    [179] = 102,
    [180] = 102,
    [181] = 322,
    [182] = 325,
    [183] = 262,
    [184] = 314,
    [185] = 316,
    [186] = 316,
    [187] = 322,
    [188] = 325,
    [189] = 102,
    [190] = 316,
    [191] = 322,
    [192] = 325,
    [193] = 102,
    [194] = 313,
    [195] = 314,
    [196] = 327,
    [197] = 238,
    [198] = 246,
    [199] = 327,
    [200] = 327,
    [201] = 327,
    [202] = 102,
    [203] = 334,
    [204] = 327,
    [205] = 335,
    [206] = 335,
    [207] = 339,
    [208] = 339,
    [209] = 340,
    [210] = 105,
    [211] = 129,
    [212] = 335,
    [213] = 129,
    [214] = 341,
    [215] = 335,
    [216] = 335,
    [217] = 341,
    [218] = 341,
    [219] = 129,
    [220] = 335,
    [221] = 342,
    [222] = 335,
    [223] = 335,
    [224] = 335,
    [225] = 129,
    [226] = 335,
    [227] = 343,
    [228] = 343,
    [229] = 234,
    [230] = 339,
    [231] = 340,
    [232] = 335,
    [233] = 105,
    [234] = 129,
    [235] = 343,
    [236] = 129,
    [237] = 344,
    [238] = 343,
    [239] = 343,
    [240] = 344,
    [241] = 344,
    [242] = 129,
    [243] = 343,
    [244] = 345,
    [245] = 343,
    [246] = 343,
    [247] = 343,
    [248] = 129,
    [249] = 343,
    [250] = 234,
    [251] = 343,
    [252] = 343,
    [253] = 129,
    [254] = 345,
    [255] = 343,
    [256] = 335,
    [257] = 234,
    [258] = 105,
    [259] = 343,
    [260] = 234,
    [261] = 129,
    [262] = 339,
    [263] = 339,
    [264] = 129,
    [265] = 342,
    [266] = 335,
    [267] = 327,
    [268] = 102,
    [269] = 102,
    [270] = 102,
    [271] = 102,
    [272] = 102,
    [273] = 102,
    [274] = 102,
    [275] = 127,
    [276] = 127,
    [277] = 346,
    [278] = 346,
    [279] = 246,
    [280] = 105,
    [281] = 102,
    [282] = 233,
    [283] = 358,
    [284] = 358,
    [285] = 102,
    [286] = 346,
    [287] = 358,
    [288] = 346,
    [289] = 367,
    [290] = 367,
    [291] = 339,
    [292] = 340,
    [293] = 105,
    [294] = 129,
    [295] = 367,
    [296] = 129,
    [297] = 368,
    [298] = 367,
    [299] = 367,
    [300] = 368,
    [301] = 368,
    [302] = 129,
    [303] = 367,
    [304] = 369,
    [305] = 367,
    [306] = 367,
    [307] = 367,
    [308] = 129,
    [309] = 367,
    [310] = 234,
    [311] = 367,
    [312] = 367,
    [313] = 129,
    [314] = 369,
    [315] = 367,
    [316] = 233,
    [317] = 105,
    [318] = 358,
    [319] = 346,
    [320] = 367,
    [321] = 233,
    [322] = 358,
    [323] = 346,
    [324] = 102,
    [325] = 246,
    [326] = 370,
    [327] = 375,
    [328] = 375,
    [329] = 375,
    [330] = 375,
    [331] = 105,
    [332] = 200,
    [333] = 105,
    [334] = 375,
    [335] = 375,
    [336] = 376,
    [337] = 376,
    [338] = 339,
    [339] = 340,
    [340] = 105,
    [341] = 129,
    [342] = 376,
    [343] = 129,
    [344] = 377,
    [345] = 376,
    [346] = 376,
    [347] = 377,
    [348] = 377,
    [349] = 129,
    [350] = 376,
    [351] = 378,
    [352] = 376,
    [353] = 376,
    [354] = 376,
    [355] = 129,
    [356] = 376,
    [357] = 234,
    [358] = 376,
    [359] = 376,
    [360] = 129,
    [361] = 378,
    [362] = 376,
    [363] = 129,
    [364] = 375,
    [365] = 375,
    [366] = 105,
    [367] = 375,
    [368] = 376,
    [369] = 129,
    [370] = 375,
    [371] = 375,
    [372] = 375,
    [373] = 379,
    [374] = 236,
    [375] = 427,
    [376] = 236,
    [377] = 234,
    [378] = 375,
    [379] = 379,
    [380] = 236,
    [381] = 427,
    [382] = 236,
    [383] = 234,
    [384] = 234,
    [385] = 375,
    [386] = 234,
    [387] = 375,
    [388] = 376,
    [389] = 129,
    [390] = 375,
    [391] = 433,
    [392] = 375,
    [393] = 370,
    [394] = 433,
    [395] = 375,
    [396] = 370,
    [397] = 129,
    [398] = 370,
    [399] = 370,
    [400] = 370,
    [401] = 127,
    [402] = 102,
    [403] = 127,
    [404] = 440,
    [405] = 440,
    [406] = 440,
    [407] = 440,
    [408] = 105,
    [409] = 200,
    [410] = 105,
    [411] = 440,
    [412] = 440,
    [413] = 376,
    [414] = 129,
    [415] = 440,
    [416] = 440,
    [417] = 105,
    [418] = 440,
    [419] = 376,
    [420] = 129,
    [421] = 440,
    [422] = 440,
    [423] = 440,
    [424] = 379,
    [425] = 236,
    [426] = 427,
    [427] = 236,
    [428] = 234,
    [429] = 440,
    [430] = 440,
    [431] = 234,
    [432] = 440,
    [433] = 376,
    [434] = 129,
    [435] = 440,
    [436] = 433,
    [437] = 440,
    [438] = 127,
    [439] = 433,
    [440] = 440,
    [441] = 127,
    [442] = 129,
    [443] = 127,
    [444] = 127,
    [445] = 127,
    [446] = 441,
    [447] = 238,
    [448] = 246,
    [449] = 441,
    [450] = 441,
    [451] = 443,
    [452] = 102,
    [453] = 444,
    [454] = 238,
    [455] = 246,
    [456] = 444,
    [457] = 444,
    [458] = 129,
    [459] = 102,
    [460] = 445,
    [461] = 447,
    [462] = 447,
    [463] = 339,
    [464] = 340,
    [465] = 105,
    [466] = 129,
    [467] = 447,
    [468] = 129,
    [469] = 449,
    [470] = 447,
    [471] = 447,
    [472] = 449,
    [473] = 449,
    [474] = 129,
    [475] = 447,
    [476] = 451,
    [477] = 447,
    [478] = 447,
    [479] = 447,
    [480] = 129,
    [481] = 447,
    [482] = 234,
    [483] = 447,
    [484] = 447,
    [485] = 129,
    [486] = 451,
    [487] = 447,
    [488] = 453,
    [489] = 129,
    [490] = 129,
    [491] = 453,
    [492] = 453,
    [493] = 455,
    [494] = 455,
    [495] = 129,
    [496] = 453,
    [497] = 445,
    [498] = 445,
    [499] = 129,
    [500] = 445,
    [501] = 102,
    [502] = 105,
    [503] = 445,
    [504] = 102,
    [505] = 127,
    [506] = 102,
    [507] = 457,
    [508] = 127,
    [509] = 457,
    [510] = 105,
    [511] = 458,
    [512] = 458,
    [513] = 461,
    [514] = 339,
    [515] = 462,
    [516] = 463,
    [517] = 105,
    [518] = 105,
    [519] = 105,
    [520] = 129,
    [521] = 458,
    [522] = 129,
    [523] = 464,
    [524] = 458,
    [525] = 458,
    [526] = 465,
    [527] = 465,
    [528] = 129,
    [529] = 458,
    [530] = 466,
    [531] = 458,
    [532] = 340,
    [533] = 234,
    [534] = 458,
    [535] = 458,
    [536] = 458,
    [537] = 465,
    [538] = 458,
    [539] = 129,
    [540] = 458,
    [541] = 458,
    [542] = 467,
    [543] = 129,
    [544] = 129,
    [545] = 467,
    [546] = 467,
    [547] = 468,
    [548] = 468,
    [549] = 129,
    [550] = 467,
    [551] = 127,
    [552] = 102,
    [553] = 129,
    [554] = 127,
    [555] = 102,
    [556] = 457,
    [557] = 234,
    [558] = 469,
    [559] = 462,
    [560] = 105,
    [561] = 470,
    [562] = 457,
    [563] = 471,
    [564] = 457,
    [565] = 234,
    [566] = 234,
    [567] = 471,
    [568] = 234,
    [569] = 457,
    [570] = 129,
    [571] = 472,
    [572] = 472,
    [573] = 457,
    [574] = 127,
    [575] = 102,
    [576] = 462,
    [577] = 457,
    [578] = 471,
    [579] = 234,
    [580] = 457,
    [581] = 473,
    [582] = 127,
    [583] = 473,
    [584] = 127,
    [585] = 129,
    [586] = 466,
    [587] = 458,
    [588] = 467,
    [589] = 129,
    [590] = 127,
    [591] = 102,
    [592] = 472,
    [593] = 233,
    [594] = 474,
    [595] = 474,
    [596] = 339,
    [597] = 340,
    [598] = 105,
    [599] = 129,
    [600] = 474,
    [601] = 129,
    [602] = 475,
    [603] = 474,
    [604] = 474,
    [605] = 475,
    [606] = 475,
    [607] = 129,
    [608] = 474,
    [609] = 476,
    [610] = 474,
    [611] = 474,
    [612] = 475,
    [613] = 474,
    [614] = 129,
    [615] = 474,
    [616] = 234,
    [617] = 474,
    [618] = 474,
    [619] = 129,
    [620] = 476,
    [621] = 474,
    [622] = 477,
    [623] = 129,
    [624] = 129,
    [625] = 477,
    [626] = 477,
    [627] = 478,
    [628] = 478,
    [629] = 129,
    [630] = 477,
    [631] = 472,
    [632] = 472,
    [633] = 129,
    [634] = 472,
    [635] = 127,
    [636] = 129,
    [637] = 127,
    [638] = 127,
    [639] = 479,
    [640] = 479,
    [641] = 129,
    [642] = 127,
    [643] = 457,
    [644] = 238,
    [645] = 246,
    [646] = 457,
    [647] = 457,
    [648] = 457,
    [649] = 105,
    [650] = 472,
    [651] = 457,
    [652] = 102,
    [653] = 462,
    [654] = 457,
    [655] = 473,
    [656] = 127,
    [657] = 445,
    [658] = 233,
    [659] = 449,
    [660] = 127,
    [661] = 102,
    [662] = 102,
    [663] = 1,
    [664] = 101,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static const TSParseAction *ts_parse_actions[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_program] = ACTIONS(SHIFT(1)),
        [sym__statement] = ACTIONS(SHIFT(2)),
        [sym__loop_statement] = ACTIONS(SHIFT(3)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(3)),
        [sym_guard_statement] = ACTIONS(SHIFT(3)),
        [sym_switch_statement] = ACTIONS(SHIFT(3)),
        [sym_labeled_statement] = ACTIONS(SHIFT(3)),
        [sym_break_statement] = ACTIONS(SHIFT(3)),
        [sym_continue_statement] = ACTIONS(SHIFT(3)),
        [sym_return_statement] = ACTIONS(SHIFT(3)),
        [sym_throw_statement] = ACTIONS(SHIFT(3)),
        [sym_defer_statement] = ACTIONS(SHIFT(3)),
        [sym_do_statement] = ACTIONS(SHIFT(3)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(3)),
        [sym_line_control_statement] = ACTIONS(SHIFT(3)),
        [sym__declaration] = ACTIONS(SHIFT(3)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym_typealias_declaration] = ACTIONS(SHIFT(5)),
        [sym_function_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(3)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(7)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_program, 0)),
        [anon_sym_for] = ACTIONS(SHIFT(8)),
        [anon_sym_while] = ACTIONS(SHIFT(9)),
        [anon_sym_let] = ACTIONS(SHIFT(10)),
        [anon_sym_var] = ACTIONS(SHIFT(11)),
        [anon_sym_repeat] = ACTIONS(SHIFT(12)),
        [anon_sym_if] = ACTIONS(SHIFT(13)),
        [anon_sym_guard] = ACTIONS(SHIFT(14)),
        [anon_sym_switch] = ACTIONS(SHIFT(15)),
        [anon_sym_break] = ACTIONS(SHIFT(16)),
        [anon_sym_continue] = ACTIONS(SHIFT(17)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(3)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [anon_sym_typealias] = ACTIONS(SHIFT(25)),
        [anon_sym_func] = ACTIONS(SHIFT(26)),
        [sym_identifier] = ACTIONS(SHIFT(27)),
    },
    [1] = {
        [ts_builtin_sym_end] = ACTIONS(ACCEPT_INPUT()),
    },
    [2] = {
        [sym__statement] = ACTIONS(SHIFT(2)),
        [sym__loop_statement] = ACTIONS(SHIFT(3)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(3)),
        [sym_guard_statement] = ACTIONS(SHIFT(3)),
        [sym_switch_statement] = ACTIONS(SHIFT(3)),
        [sym_labeled_statement] = ACTIONS(SHIFT(3)),
        [sym_break_statement] = ACTIONS(SHIFT(3)),
        [sym_continue_statement] = ACTIONS(SHIFT(3)),
        [sym_return_statement] = ACTIONS(SHIFT(3)),
        [sym_throw_statement] = ACTIONS(SHIFT(3)),
        [sym_defer_statement] = ACTIONS(SHIFT(3)),
        [sym_do_statement] = ACTIONS(SHIFT(3)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(3)),
        [sym_line_control_statement] = ACTIONS(SHIFT(3)),
        [sym__declaration] = ACTIONS(SHIFT(3)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym_typealias_declaration] = ACTIONS(SHIFT(5)),
        [sym_function_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(3)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(664)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_for] = ACTIONS(SHIFT(8)),
        [anon_sym_while] = ACTIONS(SHIFT(9)),
        [anon_sym_let] = ACTIONS(SHIFT(10)),
        [anon_sym_var] = ACTIONS(SHIFT(11)),
        [anon_sym_repeat] = ACTIONS(SHIFT(12)),
        [anon_sym_if] = ACTIONS(SHIFT(13)),
        [anon_sym_guard] = ACTIONS(SHIFT(14)),
        [anon_sym_switch] = ACTIONS(SHIFT(15)),
        [anon_sym_break] = ACTIONS(SHIFT(16)),
        [anon_sym_continue] = ACTIONS(SHIFT(17)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(3)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [anon_sym_typealias] = ACTIONS(SHIFT(25)),
        [anon_sym_func] = ACTIONS(SHIFT(26)),
        [sym_identifier] = ACTIONS(SHIFT(27)),
    },
    [3] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(663)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(SHIFT(663)),
    },
    [4] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__loop_statement, 1)),
    },
    [5] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__declaration, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__declaration, 1)),
    },
    [6] = {
        [sym__pattern_initializer] = ACTIONS(SHIFT(657)),
        [sym__variable_name] = ACTIONS(SHIFT(658)),
        [sym__pattern] = ACTIONS(SHIFT(461)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(462)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(462)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(462)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(462)),
        [sym_optional_pattern] = ACTIONS(SHIFT(462)),
        [sym_is_pattern] = ACTIONS(SHIFT(462)),
        [sym_as_pattern] = ACTIONS(SHIFT(462)),
        [sym__expression] = ACTIONS(SHIFT(462)),
        [sym__type_identifier] = ACTIONS(SHIFT(463)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(464)),
        [anon_sym_let] = ACTIONS(SHIFT(465)),
        [anon_sym_var] = ACTIONS(SHIFT(465)),
        [anon_sym_DOT] = ACTIONS(SHIFT(466)),
        [anon_sym__] = ACTIONS(SHIFT(467)),
        [anon_sym_is] = ACTIONS(SHIFT(468)),
        [sym_identifier] = ACTIONS(SHIFT(659)),
    },
    [7] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_program, 1)),
    },
    [8] = {
        [sym__for_init] = ACTIONS(SHIFT(507)),
        [sym__for_condition] = ACTIONS(SHIFT(508)),
        [sym_variable_declaration] = ACTIONS(SHIFT(509)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(510)),
        [sym__pattern] = ACTIONS(SHIFT(511)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(512)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(512)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(512)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(512)),
        [sym_optional_pattern] = ACTIONS(SHIFT(512)),
        [sym_is_pattern] = ACTIONS(SHIFT(512)),
        [sym_as_pattern] = ACTIONS(SHIFT(512)),
        [sym__expression] = ACTIONS(SHIFT(513)),
        [sym__expression_list] = ACTIONS(SHIFT(509)),
        [sym__type_identifier] = ACTIONS(SHIFT(514)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(515)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(516)),
        [anon_sym_case] = ACTIONS(SHIFT(517)),
        [anon_sym_let] = ACTIONS(SHIFT(518)),
        [anon_sym_var] = ACTIONS(SHIFT(519)),
        [anon_sym_DOT] = ACTIONS(SHIFT(520)),
        [anon_sym__] = ACTIONS(SHIFT(521)),
        [anon_sym_is] = ACTIONS(SHIFT(522)),
        [sym_identifier] = ACTIONS(SHIFT(523)),
    },
    [9] = {
        [sym__condition_clause] = ACTIONS(SHIFT(505)),
        [sym__condition] = ACTIONS(SHIFT(404)),
        [sym_availability_condition] = ACTIONS(SHIFT(405)),
        [sym_case_condition] = ACTIONS(SHIFT(406)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(406)),
        [sym__expression] = ACTIONS(SHIFT(407)),
        [anon_sym_case] = ACTIONS(SHIFT(408)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(409)),
        [anon_sym_let] = ACTIONS(SHIFT(410)),
        [anon_sym_var] = ACTIONS(SHIFT(410)),
        [sym_identifier] = ACTIONS(SHIFT(411)),
    },
    [10] = {
        [sym__pattern_initializer] = ACTIONS(SHIFT(460)),
        [sym__pattern] = ACTIONS(SHIFT(461)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(462)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(462)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(462)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(462)),
        [sym_optional_pattern] = ACTIONS(SHIFT(462)),
        [sym_is_pattern] = ACTIONS(SHIFT(462)),
        [sym_as_pattern] = ACTIONS(SHIFT(462)),
        [sym__expression] = ACTIONS(SHIFT(462)),
        [sym__type_identifier] = ACTIONS(SHIFT(463)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(464)),
        [anon_sym_let] = ACTIONS(SHIFT(465)),
        [anon_sym_var] = ACTIONS(SHIFT(465)),
        [anon_sym_DOT] = ACTIONS(SHIFT(466)),
        [anon_sym__] = ACTIONS(SHIFT(467)),
        [anon_sym_is] = ACTIONS(SHIFT(468)),
        [sym_identifier] = ACTIONS(SHIFT(469)),
    },
    [11] = {
        [sym__pattern_initializer] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym_wildcard_pattern] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym_value_binding_pattern] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym_tuple_pattern] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym_enum_case_pattern] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym_optional_pattern] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym_is_pattern] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym_as_pattern] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__type_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__type_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [anon_sym_LPAREN] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [anon_sym_let] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [anon_sym_var] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [anon_sym__] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [anon_sym_is] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
    },
    [12] = {
        [sym__code_block] = ACTIONS(SHIFT(453)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(454)),
    },
    [13] = {
        [sym__condition_clause] = ACTIONS(SHIFT(403)),
        [sym__condition] = ACTIONS(SHIFT(404)),
        [sym_availability_condition] = ACTIONS(SHIFT(405)),
        [sym_case_condition] = ACTIONS(SHIFT(406)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(406)),
        [sym__expression] = ACTIONS(SHIFT(407)),
        [anon_sym_case] = ACTIONS(SHIFT(408)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(409)),
        [anon_sym_let] = ACTIONS(SHIFT(410)),
        [anon_sym_var] = ACTIONS(SHIFT(410)),
        [sym_identifier] = ACTIONS(SHIFT(411)),
    },
    [14] = {
        [sym__condition_clause] = ACTIONS(SHIFT(326)),
        [sym__condition] = ACTIONS(SHIFT(327)),
        [sym_availability_condition] = ACTIONS(SHIFT(328)),
        [sym_case_condition] = ACTIONS(SHIFT(329)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(329)),
        [sym__expression] = ACTIONS(SHIFT(330)),
        [anon_sym_case] = ACTIONS(SHIFT(331)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(332)),
        [anon_sym_let] = ACTIONS(SHIFT(333)),
        [anon_sym_var] = ACTIONS(SHIFT(333)),
        [sym_identifier] = ACTIONS(SHIFT(334)),
    },
    [15] = {
        [sym__expression] = ACTIONS(SHIFT(275)),
        [sym_identifier] = ACTIONS(SHIFT(276)),
    },
    [16] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(274)),
    },
    [17] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_continue_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_continue_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(273)),
    },
    [18] = {
        [sym__expression] = ACTIONS(SHIFT(272)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_return_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_return_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(271)),
    },
    [19] = {
        [sym__expression] = ACTIONS(SHIFT(270)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_throw_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_throw_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(271)),
    },
    [20] = {
        [sym__code_block] = ACTIONS(SHIFT(269)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(95)),
    },
    [21] = {
        [sym__code_block] = ACTIONS(SHIFT(196)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(197)),
    },
    [22] = {
        [sym__build_configuration] = ACTIONS(SHIFT(134)),
        [sym_boolean_literal] = ACTIONS(SHIFT(135)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(136)),
        [anon_sym_os] = ACTIONS(SHIFT(137)),
        [anon_sym_arch] = ACTIONS(SHIFT(138)),
        [anon_sym_BANG] = ACTIONS(SHIFT(139)),
        [anon_sym_true] = ACTIONS(SHIFT(140)),
        [anon_sym_false] = ACTIONS(SHIFT(140)),
        [sym_identifier] = ACTIONS(SHIFT(135)),
    },
    [23] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_line_control_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_line_control_statement, 1)),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(SHIFT(132)),
    },
    [24] = {
        [anon_sym_var] = ACTIONS(SHIFT(124)),
        [anon_sym_typealias] = ACTIONS(SHIFT(124)),
        [anon_sym_struct] = ACTIONS(SHIFT(124)),
        [anon_sym_class] = ACTIONS(SHIFT(124)),
        [anon_sym_enum] = ACTIONS(SHIFT(124)),
        [anon_sym_protocol] = ACTIONS(SHIFT(124)),
        [anon_sym_func] = ACTIONS(SHIFT(124)),
        [sym_identifier] = ACTIONS(SHIFT(125)),
        [sym_operator] = ACTIONS(SHIFT(125)),
    },
    [25] = {
        [sym_identifier] = ACTIONS(SHIFT(116)),
    },
    [26] = {
        [sym_identifier] = ACTIONS(SHIFT(30)),
        [sym_operator] = ACTIONS(SHIFT(30)),
    },
    [27] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(SHIFT(28)),
    },
    [28] = {
        [sym__loop_statement] = ACTIONS(SHIFT(29)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(29)),
        [anon_sym_for] = ACTIONS(SHIFT(8)),
        [anon_sym_while] = ACTIONS(SHIFT(9)),
        [anon_sym_repeat] = ACTIONS(SHIFT(12)),
        [anon_sym_if] = ACTIONS(SHIFT(13)),
    },
    [29] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
    },
    [30] = {
        [aux_sym_function_declaration_repeat2] = ACTIONS(SHIFT(31)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(32)),
    },
    [31] = {
        [sym__code_block] = ACTIONS(SHIFT(94)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_function_declaration, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_function_declaration, 3)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(95)),
        [anon_sym_throws] = ACTIONS(SHIFT(96)),
        [anon_sym_rethrows] = ACTIONS(SHIFT(96)),
        [anon_sym_DASH_GT] = ACTIONS(SHIFT(97)),
    },
    [32] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(33)),
        [anon_sym_let] = ACTIONS(SHIFT(34)),
        [anon_sym_var] = ACTIONS(SHIFT(34)),
        [anon_sym_inout] = ACTIONS(SHIFT(34)),
        [anon_sym__] = ACTIONS(SHIFT(35)),
        [sym_identifier] = ACTIONS(SHIFT(35)),
    },
    [33] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 2)),
        [aux_sym_function_declaration_repeat2] = ACTIONS(SHIFT(93)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(32)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 2)),
        [anon_sym_throws] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 2)),
        [anon_sym_rethrows] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 2)),
        [anon_sym_DASH_GT] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 2)),
    },
    [34] = {
        [anon_sym__] = ACTIONS(SHIFT(85)),
        [sym_identifier] = ACTIONS(SHIFT(85)),
    },
    [35] = {
        [sym__type_annotation] = ACTIONS(SHIFT(36)),
        [anon_sym_COLON] = ACTIONS(SHIFT(37)),
        [anon_sym__] = ACTIONS(SHIFT(38)),
        [sym_identifier] = ACTIONS(SHIFT(38)),
    },
    [36] = {
        [aux_sym_function_declaration_repeat1] = ACTIONS(SHIFT(79)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(80)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(42)),
        [anon_sym_EQ] = ACTIONS(SHIFT(81)),
    },
    [37] = {
        [sym_type] = ACTIONS(SHIFT(73)),
        [sym__type_identifier] = ACTIONS(SHIFT(74)),
        [sym__type_name] = ACTIONS(SHIFT(75)),
        [sym_identifier] = ACTIONS(SHIFT(76)),
    },
    [38] = {
        [sym__type_annotation] = ACTIONS(SHIFT(39)),
        [anon_sym_COLON] = ACTIONS(SHIFT(37)),
    },
    [39] = {
        [aux_sym_function_declaration_repeat1] = ACTIONS(SHIFT(40)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(41)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(42)),
        [anon_sym_EQ] = ACTIONS(SHIFT(43)),
    },
    [40] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(71)),
    },
    [41] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 5)),
        [aux_sym_function_declaration_repeat2] = ACTIONS(SHIFT(70)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 5)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(32)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 5)),
        [anon_sym_throws] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 5)),
        [anon_sym_rethrows] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 5)),
        [anon_sym_DASH_GT] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 5)),
    },
    [42] = {
        [anon_sym_let] = ACTIONS(SHIFT(51)),
        [anon_sym_var] = ACTIONS(SHIFT(51)),
        [anon_sym_inout] = ACTIONS(SHIFT(51)),
        [anon_sym__] = ACTIONS(SHIFT(52)),
        [sym_identifier] = ACTIONS(SHIFT(52)),
    },
    [43] = {
        [sym__expression] = ACTIONS(SHIFT(44)),
        [sym_identifier] = ACTIONS(SHIFT(45)),
    },
    [44] = {
        [aux_sym_function_declaration_repeat1] = ACTIONS(SHIFT(46)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(47)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(42)),
    },
    [45] = {
        [aux_sym_function_declaration_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [46] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(49)),
    },
    [47] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 7)),
        [aux_sym_function_declaration_repeat2] = ACTIONS(SHIFT(48)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 7)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 7)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(32)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 7)),
        [anon_sym_throws] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 7)),
        [anon_sym_rethrows] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 7)),
        [anon_sym_DASH_GT] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 7)),
    },
    [48] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 8)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 8)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 8)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 8)),
        [anon_sym_throws] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 8)),
        [anon_sym_rethrows] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 8)),
        [anon_sym_DASH_GT] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 8)),
    },
    [49] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 8)),
        [aux_sym_function_declaration_repeat2] = ACTIONS(SHIFT(50)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 8)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 8)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(32)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 8)),
        [anon_sym_throws] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 8)),
        [anon_sym_rethrows] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 8)),
        [anon_sym_DASH_GT] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 8)),
    },
    [50] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 9)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 9)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 9)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 9)),
        [anon_sym_throws] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 9)),
        [anon_sym_rethrows] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 9)),
        [anon_sym_DASH_GT] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 9)),
    },
    [51] = {
        [anon_sym__] = ACTIONS(SHIFT(64)),
        [sym_identifier] = ACTIONS(SHIFT(64)),
    },
    [52] = {
        [sym__type_annotation] = ACTIONS(SHIFT(53)),
        [anon_sym_COLON] = ACTIONS(SHIFT(37)),
        [anon_sym__] = ACTIONS(SHIFT(54)),
        [sym_identifier] = ACTIONS(SHIFT(54)),
    },
    [53] = {
        [aux_sym_function_declaration_repeat1] = ACTIONS(SHIFT(60)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat1, 3)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(42)),
        [anon_sym_EQ] = ACTIONS(SHIFT(61)),
    },
    [54] = {
        [sym__type_annotation] = ACTIONS(SHIFT(55)),
        [anon_sym_COLON] = ACTIONS(SHIFT(37)),
    },
    [55] = {
        [aux_sym_function_declaration_repeat1] = ACTIONS(SHIFT(56)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat1, 4)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(42)),
        [anon_sym_EQ] = ACTIONS(SHIFT(57)),
    },
    [56] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat1, 5)),
    },
    [57] = {
        [sym__expression] = ACTIONS(SHIFT(58)),
        [sym_identifier] = ACTIONS(SHIFT(45)),
    },
    [58] = {
        [aux_sym_function_declaration_repeat1] = ACTIONS(SHIFT(59)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat1, 6)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(42)),
    },
    [59] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat1, 7)),
    },
    [60] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat1, 4)),
    },
    [61] = {
        [sym__expression] = ACTIONS(SHIFT(62)),
        [sym_identifier] = ACTIONS(SHIFT(45)),
    },
    [62] = {
        [aux_sym_function_declaration_repeat1] = ACTIONS(SHIFT(63)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat1, 5)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(42)),
    },
    [63] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat1, 6)),
    },
    [64] = {
        [sym__type_annotation] = ACTIONS(SHIFT(55)),
        [anon_sym_COLON] = ACTIONS(SHIFT(37)),
        [anon_sym__] = ACTIONS(SHIFT(65)),
        [sym_identifier] = ACTIONS(SHIFT(65)),
    },
    [65] = {
        [sym__type_annotation] = ACTIONS(SHIFT(66)),
        [anon_sym_COLON] = ACTIONS(SHIFT(37)),
    },
    [66] = {
        [aux_sym_function_declaration_repeat1] = ACTIONS(SHIFT(63)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat1, 5)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(42)),
        [anon_sym_EQ] = ACTIONS(SHIFT(67)),
    },
    [67] = {
        [sym__expression] = ACTIONS(SHIFT(68)),
        [sym_identifier] = ACTIONS(SHIFT(45)),
    },
    [68] = {
        [aux_sym_function_declaration_repeat1] = ACTIONS(SHIFT(69)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat1, 7)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(42)),
    },
    [69] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat1, 8)),
    },
    [70] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 6)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 6)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 6)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 6)),
        [anon_sym_throws] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 6)),
        [anon_sym_rethrows] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 6)),
        [anon_sym_DASH_GT] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 6)),
    },
    [71] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 6)),
        [aux_sym_function_declaration_repeat2] = ACTIONS(SHIFT(72)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 6)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 6)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(32)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 6)),
        [anon_sym_throws] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 6)),
        [anon_sym_rethrows] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 6)),
        [anon_sym_DASH_GT] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 6)),
    },
    [72] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 7)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 7)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 7)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 7)),
        [anon_sym_throws] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 7)),
        [anon_sym_rethrows] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 7)),
        [anon_sym_DASH_GT] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 7)),
    },
    [73] = {
        [aux_sym_function_declaration_repeat1] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [74] = {
        [aux_sym_function_declaration_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [75] = {
        [aux_sym_function_declaration_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(77)),
    },
    [76] = {
        [aux_sym_function_declaration_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [77] = {
        [sym__type_identifier] = ACTIONS(SHIFT(78)),
        [sym__type_name] = ACTIONS(SHIFT(75)),
        [sym_identifier] = ACTIONS(SHIFT(76)),
    },
    [78] = {
        [aux_sym_function_declaration_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [79] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(41)),
    },
    [80] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 4)),
        [aux_sym_function_declaration_repeat2] = ACTIONS(SHIFT(84)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 4)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(32)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 4)),
        [anon_sym_throws] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 4)),
        [anon_sym_rethrows] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 4)),
        [anon_sym_DASH_GT] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 4)),
    },
    [81] = {
        [sym__expression] = ACTIONS(SHIFT(82)),
        [sym_identifier] = ACTIONS(SHIFT(45)),
    },
    [82] = {
        [aux_sym_function_declaration_repeat1] = ACTIONS(SHIFT(83)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(71)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(42)),
    },
    [83] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(47)),
    },
    [84] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 5)),
        [anon_sym_throws] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 5)),
        [anon_sym_rethrows] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 5)),
        [anon_sym_DASH_GT] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 5)),
    },
    [85] = {
        [sym__type_annotation] = ACTIONS(SHIFT(39)),
        [anon_sym_COLON] = ACTIONS(SHIFT(37)),
        [anon_sym__] = ACTIONS(SHIFT(86)),
        [sym_identifier] = ACTIONS(SHIFT(86)),
    },
    [86] = {
        [sym__type_annotation] = ACTIONS(SHIFT(87)),
        [anon_sym_COLON] = ACTIONS(SHIFT(37)),
    },
    [87] = {
        [aux_sym_function_declaration_repeat1] = ACTIONS(SHIFT(83)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(71)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(42)),
        [anon_sym_EQ] = ACTIONS(SHIFT(88)),
    },
    [88] = {
        [sym__expression] = ACTIONS(SHIFT(89)),
        [sym_identifier] = ACTIONS(SHIFT(45)),
    },
    [89] = {
        [aux_sym_function_declaration_repeat1] = ACTIONS(SHIFT(90)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(49)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(42)),
    },
    [90] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(91)),
    },
    [91] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 9)),
        [aux_sym_function_declaration_repeat2] = ACTIONS(SHIFT(92)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 9)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 9)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(32)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 9)),
        [anon_sym_throws] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 9)),
        [anon_sym_rethrows] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 9)),
        [anon_sym_DASH_GT] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 9)),
    },
    [92] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 10)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 10)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 10)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 10)),
        [anon_sym_throws] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 10)),
        [anon_sym_rethrows] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 10)),
        [anon_sym_DASH_GT] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 10)),
    },
    [93] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 3)),
        [anon_sym_throws] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 3)),
        [anon_sym_rethrows] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 3)),
        [anon_sym_DASH_GT] = ACTIONS(REDUCE(aux_sym_function_declaration_repeat2, 3)),
    },
    [94] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_function_declaration, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_function_declaration, 4)),
    },
    [95] = {
        [sym__statement] = ACTIONS(SHIFT(109)),
        [sym__loop_statement] = ACTIONS(SHIFT(110)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(110)),
        [sym_guard_statement] = ACTIONS(SHIFT(110)),
        [sym_switch_statement] = ACTIONS(SHIFT(110)),
        [sym_labeled_statement] = ACTIONS(SHIFT(110)),
        [sym_break_statement] = ACTIONS(SHIFT(110)),
        [sym_continue_statement] = ACTIONS(SHIFT(110)),
        [sym_return_statement] = ACTIONS(SHIFT(110)),
        [sym_throw_statement] = ACTIONS(SHIFT(110)),
        [sym_defer_statement] = ACTIONS(SHIFT(110)),
        [sym_do_statement] = ACTIONS(SHIFT(110)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(110)),
        [sym_line_control_statement] = ACTIONS(SHIFT(110)),
        [sym__declaration] = ACTIONS(SHIFT(110)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym_typealias_declaration] = ACTIONS(SHIFT(5)),
        [sym_function_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(110)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(111)),
        [anon_sym_for] = ACTIONS(SHIFT(8)),
        [anon_sym_while] = ACTIONS(SHIFT(9)),
        [anon_sym_let] = ACTIONS(SHIFT(10)),
        [anon_sym_var] = ACTIONS(SHIFT(11)),
        [anon_sym_repeat] = ACTIONS(SHIFT(12)),
        [anon_sym_if] = ACTIONS(SHIFT(13)),
        [anon_sym_guard] = ACTIONS(SHIFT(14)),
        [anon_sym_switch] = ACTIONS(SHIFT(15)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(112)),
        [anon_sym_break] = ACTIONS(SHIFT(16)),
        [anon_sym_continue] = ACTIONS(SHIFT(17)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(110)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [anon_sym_typealias] = ACTIONS(SHIFT(25)),
        [anon_sym_func] = ACTIONS(SHIFT(26)),
        [sym_identifier] = ACTIONS(SHIFT(27)),
    },
    [96] = {
        [sym__code_block] = ACTIONS(SHIFT(105)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_function_declaration, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_function_declaration, 4)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(95)),
        [anon_sym_DASH_GT] = ACTIONS(SHIFT(106)),
    },
    [97] = {
        [sym_type] = ACTIONS(SHIFT(98)),
        [sym__type_identifier] = ACTIONS(SHIFT(99)),
        [sym__type_name] = ACTIONS(SHIFT(100)),
        [sym_identifier] = ACTIONS(SHIFT(101)),
    },
    [98] = {
        [sym__code_block] = ACTIONS(SHIFT(104)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_function_declaration, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_function_declaration, 5)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(95)),
    },
    [99] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_type, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [100] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(102)),
    },
    [101] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__type_name, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [102] = {
        [sym__type_identifier] = ACTIONS(SHIFT(103)),
        [sym__type_name] = ACTIONS(SHIFT(100)),
        [sym_identifier] = ACTIONS(SHIFT(101)),
    },
    [103] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [104] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_function_declaration, 6)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_function_declaration, 6)),
    },
    [105] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_function_declaration, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_function_declaration, 5)),
    },
    [106] = {
        [sym_type] = ACTIONS(SHIFT(107)),
        [sym__type_identifier] = ACTIONS(SHIFT(99)),
        [sym__type_name] = ACTIONS(SHIFT(100)),
        [sym_identifier] = ACTIONS(SHIFT(101)),
    },
    [107] = {
        [sym__code_block] = ACTIONS(SHIFT(108)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_function_declaration, 6)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_function_declaration, 6)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(95)),
    },
    [108] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_function_declaration, 7)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_function_declaration, 7)),
    },
    [109] = {
        [sym__statement] = ACTIONS(SHIFT(109)),
        [sym__loop_statement] = ACTIONS(SHIFT(110)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(110)),
        [sym_guard_statement] = ACTIONS(SHIFT(110)),
        [sym_switch_statement] = ACTIONS(SHIFT(110)),
        [sym_labeled_statement] = ACTIONS(SHIFT(110)),
        [sym_break_statement] = ACTIONS(SHIFT(110)),
        [sym_continue_statement] = ACTIONS(SHIFT(110)),
        [sym_return_statement] = ACTIONS(SHIFT(110)),
        [sym_throw_statement] = ACTIONS(SHIFT(110)),
        [sym_defer_statement] = ACTIONS(SHIFT(110)),
        [sym_do_statement] = ACTIONS(SHIFT(110)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(110)),
        [sym_line_control_statement] = ACTIONS(SHIFT(110)),
        [sym__declaration] = ACTIONS(SHIFT(110)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym_typealias_declaration] = ACTIONS(SHIFT(5)),
        [sym_function_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(110)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(115)),
        [anon_sym_for] = ACTIONS(SHIFT(8)),
        [anon_sym_while] = ACTIONS(SHIFT(9)),
        [anon_sym_let] = ACTIONS(SHIFT(10)),
        [anon_sym_var] = ACTIONS(SHIFT(11)),
        [anon_sym_repeat] = ACTIONS(SHIFT(12)),
        [anon_sym_if] = ACTIONS(SHIFT(13)),
        [anon_sym_guard] = ACTIONS(SHIFT(14)),
        [anon_sym_switch] = ACTIONS(SHIFT(15)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_break] = ACTIONS(SHIFT(16)),
        [anon_sym_continue] = ACTIONS(SHIFT(17)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(110)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [anon_sym_typealias] = ACTIONS(SHIFT(25)),
        [anon_sym_func] = ACTIONS(SHIFT(26)),
        [sym_identifier] = ACTIONS(SHIFT(27)),
    },
    [110] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(114)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(SHIFT(114)),
    },
    [111] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(113)),
    },
    [112] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [113] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [114] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_break_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_continue_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_return_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_throw_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_defer_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_do_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_build_configuration_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_line_control_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_import_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_constant_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_variable_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__variable_declaration_head] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_typealias_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_function_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_let] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_var] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_break] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_continue] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_fallthrough_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_return] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_throw] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_defer] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_do] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDif] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_import] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_typealias] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_func] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [115] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [116] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(117)),
    },
    [117] = {
        [sym_type] = ACTIONS(SHIFT(118)),
        [sym__type_identifier] = ACTIONS(SHIFT(119)),
        [sym__type_name] = ACTIONS(SHIFT(120)),
        [sym_identifier] = ACTIONS(SHIFT(121)),
    },
    [118] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_typealias_declaration, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_typealias_declaration, 4)),
    },
    [119] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_type, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [120] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(122)),
    },
    [121] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__type_name, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [122] = {
        [sym__type_identifier] = ACTIONS(SHIFT(123)),
        [sym__type_name] = ACTIONS(SHIFT(120)),
        [sym_identifier] = ACTIONS(SHIFT(121)),
    },
    [123] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [124] = {
        [sym_identifier] = ACTIONS(SHIFT(130)),
        [sym_operator] = ACTIONS(SHIFT(130)),
    },
    [125] = {
        [aux_sym_import_declaration_repeat1] = ACTIONS(SHIFT(126)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_import_declaration, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_import_declaration, 2)),
        [anon_sym_DOT] = ACTIONS(SHIFT(127)),
    },
    [126] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_import_declaration, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_import_declaration, 3)),
    },
    [127] = {
        [sym_identifier] = ACTIONS(SHIFT(128)),
        [sym_operator] = ACTIONS(SHIFT(128)),
    },
    [128] = {
        [aux_sym_import_declaration_repeat1] = ACTIONS(SHIFT(129)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_import_declaration_repeat1, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_import_declaration_repeat1, 2)),
        [anon_sym_DOT] = ACTIONS(SHIFT(127)),
    },
    [129] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_import_declaration_repeat1, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_import_declaration_repeat1, 3)),
    },
    [130] = {
        [aux_sym_import_declaration_repeat1] = ACTIONS(SHIFT(131)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_import_declaration, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_import_declaration, 3)),
        [anon_sym_DOT] = ACTIONS(SHIFT(127)),
    },
    [131] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_import_declaration, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_import_declaration, 4)),
    },
    [132] = {
        [aux_sym_SLASH_DQUOTE_LPAREN_LPAREN_BSLASH_BSLASH_LPAREN_LBRACK_BSLASH_BSLASH0tnr_SQUOTE_DQUOTE_RBRACK_PIPEu_BSLASH_LBRACE_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA8_RBRACE_BSLASH_RBRACE_RPAREN_RPAREN_PIPE_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_LF_CR_RBRACK_RPAREN_STAR_DQUOTE_SLASH] = ACTIONS(SHIFT(133)),
    },
    [133] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_line_control_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_line_control_statement, 3)),
    },
    [134] = {
        [sym__statement] = ACTIONS(SHIFT(169)),
        [sym__loop_statement] = ACTIONS(SHIFT(170)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(170)),
        [sym_guard_statement] = ACTIONS(SHIFT(170)),
        [sym_switch_statement] = ACTIONS(SHIFT(170)),
        [sym_labeled_statement] = ACTIONS(SHIFT(170)),
        [sym_break_statement] = ACTIONS(SHIFT(170)),
        [sym_continue_statement] = ACTIONS(SHIFT(170)),
        [sym_return_statement] = ACTIONS(SHIFT(170)),
        [sym_throw_statement] = ACTIONS(SHIFT(170)),
        [sym_defer_statement] = ACTIONS(SHIFT(170)),
        [sym_do_statement] = ACTIONS(SHIFT(170)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(170)),
        [sym_line_control_statement] = ACTIONS(SHIFT(170)),
        [sym__declaration] = ACTIONS(SHIFT(170)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym_typealias_declaration] = ACTIONS(SHIFT(5)),
        [sym_function_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(170)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(171)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(SHIFT(172)),
        [anon_sym_for] = ACTIONS(SHIFT(8)),
        [anon_sym_while] = ACTIONS(SHIFT(9)),
        [anon_sym_let] = ACTIONS(SHIFT(10)),
        [anon_sym_var] = ACTIONS(SHIFT(11)),
        [anon_sym_repeat] = ACTIONS(SHIFT(12)),
        [anon_sym_if] = ACTIONS(SHIFT(13)),
        [anon_sym_guard] = ACTIONS(SHIFT(14)),
        [anon_sym_switch] = ACTIONS(SHIFT(15)),
        [anon_sym_break] = ACTIONS(SHIFT(16)),
        [anon_sym_continue] = ACTIONS(SHIFT(17)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(170)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDelseif] = ACTIONS(SHIFT(173)),
        [anon_sym_POUNDelse] = ACTIONS(SHIFT(174)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(175)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(142)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(143)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [anon_sym_typealias] = ACTIONS(SHIFT(25)),
        [anon_sym_func] = ACTIONS(SHIFT(26)),
        [sym_identifier] = ACTIONS(SHIFT(27)),
    },
    [135] = {
        [sym__statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_break_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_continue_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_return_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_throw_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_defer_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_do_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_build_configuration_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_line_control_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_import_declaration] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_constant_declaration] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_variable_declaration] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym__variable_declaration_head] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_typealias_declaration] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_function_declaration] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_let] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_var] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_break] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_continue] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_fallthrough_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_return] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_throw] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_defer] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_do] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_POUNDif] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_POUNDelseif] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_import] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_typealias] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_func] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__build_configuration, 1)),
    },
    [136] = {
        [sym__build_configuration] = ACTIONS(SHIFT(150)),
        [sym_boolean_literal] = ACTIONS(SHIFT(151)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(152)),
        [anon_sym_os] = ACTIONS(SHIFT(153)),
        [anon_sym_arch] = ACTIONS(SHIFT(154)),
        [anon_sym_BANG] = ACTIONS(SHIFT(155)),
        [anon_sym_true] = ACTIONS(SHIFT(156)),
        [anon_sym_false] = ACTIONS(SHIFT(156)),
        [sym_identifier] = ACTIONS(SHIFT(151)),
    },
    [137] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(149)),
    },
    [138] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(146)),
    },
    [139] = {
        [sym__build_configuration] = ACTIONS(SHIFT(141)),
        [sym_boolean_literal] = ACTIONS(SHIFT(135)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(136)),
        [anon_sym_os] = ACTIONS(SHIFT(137)),
        [anon_sym_arch] = ACTIONS(SHIFT(138)),
        [anon_sym_BANG] = ACTIONS(SHIFT(139)),
        [anon_sym_true] = ACTIONS(SHIFT(140)),
        [anon_sym_false] = ACTIONS(SHIFT(140)),
        [sym_identifier] = ACTIONS(SHIFT(135)),
    },
    [140] = {
        [sym__statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_break_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_continue_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_return_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_throw_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_defer_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_do_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_build_configuration_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_line_control_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_import_declaration] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_constant_declaration] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_variable_declaration] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym__variable_declaration_head] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_typealias_declaration] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_function_declaration] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_let] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_var] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_break] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_continue] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_fallthrough_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_return] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_throw] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_defer] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_do] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_POUNDif] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_POUNDelseif] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_import] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_typealias] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_func] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
    },
    [141] = {
        [sym__statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_break_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_continue_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_return_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_throw_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_defer_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_do_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_build_configuration_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_line_control_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_import_declaration] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_constant_declaration] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_variable_declaration] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym__variable_declaration_head] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_typealias_declaration] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_function_declaration] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_let] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_var] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_break] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_continue] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_fallthrough_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_return] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_throw] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_defer] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_do] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_POUNDif] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_POUNDelseif] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(142)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(143)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_import] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_typealias] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_func] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__build_configuration, 2)),
    },
    [142] = {
        [sym__build_configuration] = ACTIONS(SHIFT(145)),
        [sym_boolean_literal] = ACTIONS(SHIFT(135)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(136)),
        [anon_sym_os] = ACTIONS(SHIFT(137)),
        [anon_sym_arch] = ACTIONS(SHIFT(138)),
        [anon_sym_BANG] = ACTIONS(SHIFT(139)),
        [anon_sym_true] = ACTIONS(SHIFT(140)),
        [anon_sym_false] = ACTIONS(SHIFT(140)),
        [sym_identifier] = ACTIONS(SHIFT(135)),
    },
    [143] = {
        [sym__build_configuration] = ACTIONS(SHIFT(144)),
        [sym_boolean_literal] = ACTIONS(SHIFT(135)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(136)),
        [anon_sym_os] = ACTIONS(SHIFT(137)),
        [anon_sym_arch] = ACTIONS(SHIFT(138)),
        [anon_sym_BANG] = ACTIONS(SHIFT(139)),
        [anon_sym_true] = ACTIONS(SHIFT(140)),
        [anon_sym_false] = ACTIONS(SHIFT(140)),
        [sym_identifier] = ACTIONS(SHIFT(135)),
    },
    [144] = {
        [sym__statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_for_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_while_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_if_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_labeled_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_break_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_continue_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_return_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_throw_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_defer_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_do_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_build_configuration_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_line_control_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym__declaration] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_import_declaration] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_constant_declaration] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_variable_declaration] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym__variable_declaration_head] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_typealias_declaration] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_function_declaration] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym__expression] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_for] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_while] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_let] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_var] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_if] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_guard] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_break] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_continue] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_fallthrough_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_return] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_throw] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_defer] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_do] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_POUNDif] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_POUNDelseif] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(142)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_import] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_typealias] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_func] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_identifier] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
    },
    [145] = {
        [sym__statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_for_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_while_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_if_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_labeled_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_break_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_continue_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_return_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_throw_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_defer_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_do_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_build_configuration_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_line_control_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym__declaration] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_import_declaration] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_constant_declaration] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_variable_declaration] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym__variable_declaration_head] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_typealias_declaration] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_function_declaration] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym__expression] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_for] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_while] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_let] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_var] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_if] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_guard] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_break] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_continue] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_fallthrough_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_return] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_throw] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_defer] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_do] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_POUNDif] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_POUNDelseif] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_import] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_typealias] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_func] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_identifier] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
    },
    [146] = {
        [anon_sym_i386] = ACTIONS(SHIFT(147)),
        [anon_sym_x86_64] = ACTIONS(SHIFT(147)),
        [anon_sym_arm] = ACTIONS(SHIFT(147)),
        [anon_sym_arm64] = ACTIONS(SHIFT(147)),
    },
    [147] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(148)),
    },
    [148] = {
        [sym__statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_break_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_continue_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_return_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_throw_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_defer_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_do_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_build_configuration_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_line_control_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_import_declaration] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_constant_declaration] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_variable_declaration] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym__variable_declaration_head] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_typealias_declaration] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_function_declaration] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_let] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_var] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_break] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_continue] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_fallthrough_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_return] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_throw] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_defer] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_do] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_POUNDif] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_POUNDelseif] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_import] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_typealias] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_func] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym__build_configuration, 4)),
    },
    [149] = {
        [anon_sym_iOS] = ACTIONS(SHIFT(147)),
        [anon_sym_OSX] = ACTIONS(SHIFT(147)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(147)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(147)),
    },
    [150] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(168)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(158)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(159)),
    },
    [151] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE(sym__build_configuration, 1)),
    },
    [152] = {
        [sym__build_configuration] = ACTIONS(SHIFT(166)),
        [sym_boolean_literal] = ACTIONS(SHIFT(151)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(152)),
        [anon_sym_os] = ACTIONS(SHIFT(153)),
        [anon_sym_arch] = ACTIONS(SHIFT(154)),
        [anon_sym_BANG] = ACTIONS(SHIFT(155)),
        [anon_sym_true] = ACTIONS(SHIFT(156)),
        [anon_sym_false] = ACTIONS(SHIFT(156)),
        [sym_identifier] = ACTIONS(SHIFT(151)),
    },
    [153] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(165)),
    },
    [154] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(162)),
    },
    [155] = {
        [sym__build_configuration] = ACTIONS(SHIFT(157)),
        [sym_boolean_literal] = ACTIONS(SHIFT(151)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(152)),
        [anon_sym_os] = ACTIONS(SHIFT(153)),
        [anon_sym_arch] = ACTIONS(SHIFT(154)),
        [anon_sym_BANG] = ACTIONS(SHIFT(155)),
        [anon_sym_true] = ACTIONS(SHIFT(156)),
        [anon_sym_false] = ACTIONS(SHIFT(156)),
        [sym_identifier] = ACTIONS(SHIFT(151)),
    },
    [156] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
    },
    [157] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(158)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(159)),
    },
    [158] = {
        [sym__build_configuration] = ACTIONS(SHIFT(161)),
        [sym_boolean_literal] = ACTIONS(SHIFT(151)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(152)),
        [anon_sym_os] = ACTIONS(SHIFT(153)),
        [anon_sym_arch] = ACTIONS(SHIFT(154)),
        [anon_sym_BANG] = ACTIONS(SHIFT(155)),
        [anon_sym_true] = ACTIONS(SHIFT(156)),
        [anon_sym_false] = ACTIONS(SHIFT(156)),
        [sym_identifier] = ACTIONS(SHIFT(151)),
    },
    [159] = {
        [sym__build_configuration] = ACTIONS(SHIFT(160)),
        [sym_boolean_literal] = ACTIONS(SHIFT(151)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(152)),
        [anon_sym_os] = ACTIONS(SHIFT(153)),
        [anon_sym_arch] = ACTIONS(SHIFT(154)),
        [anon_sym_BANG] = ACTIONS(SHIFT(155)),
        [anon_sym_true] = ACTIONS(SHIFT(156)),
        [anon_sym_false] = ACTIONS(SHIFT(156)),
        [sym_identifier] = ACTIONS(SHIFT(151)),
    },
    [160] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(158)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
    },
    [161] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
    },
    [162] = {
        [anon_sym_i386] = ACTIONS(SHIFT(163)),
        [anon_sym_x86_64] = ACTIONS(SHIFT(163)),
        [anon_sym_arm] = ACTIONS(SHIFT(163)),
        [anon_sym_arm64] = ACTIONS(SHIFT(163)),
    },
    [163] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(164)),
    },
    [164] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE(sym__build_configuration, 4)),
    },
    [165] = {
        [anon_sym_iOS] = ACTIONS(SHIFT(163)),
        [anon_sym_OSX] = ACTIONS(SHIFT(163)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(163)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(163)),
    },
    [166] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(167)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(158)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(159)),
    },
    [167] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE(sym__build_configuration, 3)),
    },
    [168] = {
        [sym__statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_break_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_continue_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_return_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_throw_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_defer_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_do_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_build_configuration_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_line_control_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_import_declaration] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_constant_declaration] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_variable_declaration] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym__variable_declaration_head] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_typealias_declaration] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_function_declaration] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_let] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_var] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_break] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_continue] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_fallthrough_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_return] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_throw] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_defer] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_do] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_POUNDif] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_POUNDelseif] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_import] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_typealias] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_func] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym__build_configuration, 3)),
    },
    [169] = {
        [sym__statement] = ACTIONS(SHIFT(169)),
        [sym__loop_statement] = ACTIONS(SHIFT(170)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(170)),
        [sym_guard_statement] = ACTIONS(SHIFT(170)),
        [sym_switch_statement] = ACTIONS(SHIFT(170)),
        [sym_labeled_statement] = ACTIONS(SHIFT(170)),
        [sym_break_statement] = ACTIONS(SHIFT(170)),
        [sym_continue_statement] = ACTIONS(SHIFT(170)),
        [sym_return_statement] = ACTIONS(SHIFT(170)),
        [sym_throw_statement] = ACTIONS(SHIFT(170)),
        [sym_defer_statement] = ACTIONS(SHIFT(170)),
        [sym_do_statement] = ACTIONS(SHIFT(170)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(170)),
        [sym_line_control_statement] = ACTIONS(SHIFT(170)),
        [sym__declaration] = ACTIONS(SHIFT(170)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym_typealias_declaration] = ACTIONS(SHIFT(5)),
        [sym_function_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(170)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(195)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_for] = ACTIONS(SHIFT(8)),
        [anon_sym_while] = ACTIONS(SHIFT(9)),
        [anon_sym_let] = ACTIONS(SHIFT(10)),
        [anon_sym_var] = ACTIONS(SHIFT(11)),
        [anon_sym_repeat] = ACTIONS(SHIFT(12)),
        [anon_sym_if] = ACTIONS(SHIFT(13)),
        [anon_sym_guard] = ACTIONS(SHIFT(14)),
        [anon_sym_switch] = ACTIONS(SHIFT(15)),
        [anon_sym_break] = ACTIONS(SHIFT(16)),
        [anon_sym_continue] = ACTIONS(SHIFT(17)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(170)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDelseif] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [anon_sym_typealias] = ACTIONS(SHIFT(25)),
        [anon_sym_func] = ACTIONS(SHIFT(26)),
        [sym_identifier] = ACTIONS(SHIFT(27)),
    },
    [170] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(194)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(SHIFT(194)),
    },
    [171] = {
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(SHIFT(190)),
        [anon_sym_POUNDelseif] = ACTIONS(SHIFT(173)),
        [anon_sym_POUNDelse] = ACTIONS(SHIFT(187)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(179)),
    },
    [172] = {
        [anon_sym_POUNDelse] = ACTIONS(SHIFT(187)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(179)),
    },
    [173] = {
        [sym__build_configuration] = ACTIONS(SHIFT(183)),
        [sym_boolean_literal] = ACTIONS(SHIFT(135)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(136)),
        [anon_sym_os] = ACTIONS(SHIFT(137)),
        [anon_sym_arch] = ACTIONS(SHIFT(138)),
        [anon_sym_BANG] = ACTIONS(SHIFT(139)),
        [anon_sym_true] = ACTIONS(SHIFT(140)),
        [anon_sym_false] = ACTIONS(SHIFT(140)),
        [sym_identifier] = ACTIONS(SHIFT(135)),
    },
    [174] = {
        [sym__statement] = ACTIONS(SHIFT(176)),
        [sym__loop_statement] = ACTIONS(SHIFT(177)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(177)),
        [sym_guard_statement] = ACTIONS(SHIFT(177)),
        [sym_switch_statement] = ACTIONS(SHIFT(177)),
        [sym_labeled_statement] = ACTIONS(SHIFT(177)),
        [sym_break_statement] = ACTIONS(SHIFT(177)),
        [sym_continue_statement] = ACTIONS(SHIFT(177)),
        [sym_return_statement] = ACTIONS(SHIFT(177)),
        [sym_throw_statement] = ACTIONS(SHIFT(177)),
        [sym_defer_statement] = ACTIONS(SHIFT(177)),
        [sym_do_statement] = ACTIONS(SHIFT(177)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(177)),
        [sym_line_control_statement] = ACTIONS(SHIFT(177)),
        [sym__declaration] = ACTIONS(SHIFT(177)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym_typealias_declaration] = ACTIONS(SHIFT(5)),
        [sym_function_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(177)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(178)),
        [anon_sym_for] = ACTIONS(SHIFT(8)),
        [anon_sym_while] = ACTIONS(SHIFT(9)),
        [anon_sym_let] = ACTIONS(SHIFT(10)),
        [anon_sym_var] = ACTIONS(SHIFT(11)),
        [anon_sym_repeat] = ACTIONS(SHIFT(12)),
        [anon_sym_if] = ACTIONS(SHIFT(13)),
        [anon_sym_guard] = ACTIONS(SHIFT(14)),
        [anon_sym_switch] = ACTIONS(SHIFT(15)),
        [anon_sym_break] = ACTIONS(SHIFT(16)),
        [anon_sym_continue] = ACTIONS(SHIFT(17)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(177)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(179)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [anon_sym_typealias] = ACTIONS(SHIFT(25)),
        [anon_sym_func] = ACTIONS(SHIFT(26)),
        [sym_identifier] = ACTIONS(SHIFT(27)),
    },
    [175] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_build_configuration_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_build_configuration_statement, 3)),
    },
    [176] = {
        [sym__statement] = ACTIONS(SHIFT(176)),
        [sym__loop_statement] = ACTIONS(SHIFT(177)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(177)),
        [sym_guard_statement] = ACTIONS(SHIFT(177)),
        [sym_switch_statement] = ACTIONS(SHIFT(177)),
        [sym_labeled_statement] = ACTIONS(SHIFT(177)),
        [sym_break_statement] = ACTIONS(SHIFT(177)),
        [sym_continue_statement] = ACTIONS(SHIFT(177)),
        [sym_return_statement] = ACTIONS(SHIFT(177)),
        [sym_throw_statement] = ACTIONS(SHIFT(177)),
        [sym_defer_statement] = ACTIONS(SHIFT(177)),
        [sym_do_statement] = ACTIONS(SHIFT(177)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(177)),
        [sym_line_control_statement] = ACTIONS(SHIFT(177)),
        [sym__declaration] = ACTIONS(SHIFT(177)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym_typealias_declaration] = ACTIONS(SHIFT(5)),
        [sym_function_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(177)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(182)),
        [anon_sym_for] = ACTIONS(SHIFT(8)),
        [anon_sym_while] = ACTIONS(SHIFT(9)),
        [anon_sym_let] = ACTIONS(SHIFT(10)),
        [anon_sym_var] = ACTIONS(SHIFT(11)),
        [anon_sym_repeat] = ACTIONS(SHIFT(12)),
        [anon_sym_if] = ACTIONS(SHIFT(13)),
        [anon_sym_guard] = ACTIONS(SHIFT(14)),
        [anon_sym_switch] = ACTIONS(SHIFT(15)),
        [anon_sym_break] = ACTIONS(SHIFT(16)),
        [anon_sym_continue] = ACTIONS(SHIFT(17)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(177)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [anon_sym_typealias] = ACTIONS(SHIFT(25)),
        [anon_sym_func] = ACTIONS(SHIFT(26)),
        [sym_identifier] = ACTIONS(SHIFT(27)),
    },
    [177] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(181)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(SHIFT(181)),
    },
    [178] = {
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(180)),
    },
    [179] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_build_configuration_statement, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_build_configuration_statement, 4)),
    },
    [180] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_build_configuration_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_build_configuration_statement, 5)),
    },
    [181] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_break_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_continue_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_return_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_throw_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_defer_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_do_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_build_configuration_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_line_control_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_import_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_constant_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_variable_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__variable_declaration_head] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_typealias_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_function_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_let] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_var] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_break] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_continue] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_fallthrough_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_return] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_throw] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_defer] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_do] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDif] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_import] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_typealias] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_func] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [182] = {
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [183] = {
        [sym__statement] = ACTIONS(SHIFT(169)),
        [sym__loop_statement] = ACTIONS(SHIFT(170)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(170)),
        [sym_guard_statement] = ACTIONS(SHIFT(170)),
        [sym_switch_statement] = ACTIONS(SHIFT(170)),
        [sym_labeled_statement] = ACTIONS(SHIFT(170)),
        [sym_break_statement] = ACTIONS(SHIFT(170)),
        [sym_continue_statement] = ACTIONS(SHIFT(170)),
        [sym_return_statement] = ACTIONS(SHIFT(170)),
        [sym_throw_statement] = ACTIONS(SHIFT(170)),
        [sym_defer_statement] = ACTIONS(SHIFT(170)),
        [sym_do_statement] = ACTIONS(SHIFT(170)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(170)),
        [sym_line_control_statement] = ACTIONS(SHIFT(170)),
        [sym__declaration] = ACTIONS(SHIFT(170)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym_typealias_declaration] = ACTIONS(SHIFT(5)),
        [sym_function_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(170)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(184)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(SHIFT(185)),
        [anon_sym_for] = ACTIONS(SHIFT(8)),
        [anon_sym_while] = ACTIONS(SHIFT(9)),
        [anon_sym_let] = ACTIONS(SHIFT(10)),
        [anon_sym_var] = ACTIONS(SHIFT(11)),
        [anon_sym_repeat] = ACTIONS(SHIFT(12)),
        [anon_sym_if] = ACTIONS(SHIFT(13)),
        [anon_sym_guard] = ACTIONS(SHIFT(14)),
        [anon_sym_switch] = ACTIONS(SHIFT(15)),
        [anon_sym_break] = ACTIONS(SHIFT(16)),
        [anon_sym_continue] = ACTIONS(SHIFT(17)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(170)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDelseif] = ACTIONS(SHIFT(173)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 2)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 2)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(142)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(143)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [anon_sym_typealias] = ACTIONS(SHIFT(25)),
        [anon_sym_func] = ACTIONS(SHIFT(26)),
        [sym_identifier] = ACTIONS(SHIFT(27)),
    },
    [184] = {
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(SHIFT(186)),
        [anon_sym_POUNDelseif] = ACTIONS(SHIFT(173)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 3)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 3)),
    },
    [185] = {
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 3)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 3)),
    },
    [186] = {
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 4)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 4)),
    },
    [187] = {
        [sym__statement] = ACTIONS(SHIFT(176)),
        [sym__loop_statement] = ACTIONS(SHIFT(177)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(177)),
        [sym_guard_statement] = ACTIONS(SHIFT(177)),
        [sym_switch_statement] = ACTIONS(SHIFT(177)),
        [sym_labeled_statement] = ACTIONS(SHIFT(177)),
        [sym_break_statement] = ACTIONS(SHIFT(177)),
        [sym_continue_statement] = ACTIONS(SHIFT(177)),
        [sym_return_statement] = ACTIONS(SHIFT(177)),
        [sym_throw_statement] = ACTIONS(SHIFT(177)),
        [sym_defer_statement] = ACTIONS(SHIFT(177)),
        [sym_do_statement] = ACTIONS(SHIFT(177)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(177)),
        [sym_line_control_statement] = ACTIONS(SHIFT(177)),
        [sym__declaration] = ACTIONS(SHIFT(177)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym_typealias_declaration] = ACTIONS(SHIFT(5)),
        [sym_function_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(177)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(188)),
        [anon_sym_for] = ACTIONS(SHIFT(8)),
        [anon_sym_while] = ACTIONS(SHIFT(9)),
        [anon_sym_let] = ACTIONS(SHIFT(10)),
        [anon_sym_var] = ACTIONS(SHIFT(11)),
        [anon_sym_repeat] = ACTIONS(SHIFT(12)),
        [anon_sym_if] = ACTIONS(SHIFT(13)),
        [anon_sym_guard] = ACTIONS(SHIFT(14)),
        [anon_sym_switch] = ACTIONS(SHIFT(15)),
        [anon_sym_break] = ACTIONS(SHIFT(16)),
        [anon_sym_continue] = ACTIONS(SHIFT(17)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(177)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(180)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [anon_sym_typealias] = ACTIONS(SHIFT(25)),
        [anon_sym_func] = ACTIONS(SHIFT(26)),
        [sym_identifier] = ACTIONS(SHIFT(27)),
    },
    [188] = {
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(189)),
    },
    [189] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_build_configuration_statement, 6)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_build_configuration_statement, 6)),
    },
    [190] = {
        [anon_sym_POUNDelse] = ACTIONS(SHIFT(191)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(180)),
    },
    [191] = {
        [sym__statement] = ACTIONS(SHIFT(176)),
        [sym__loop_statement] = ACTIONS(SHIFT(177)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(177)),
        [sym_guard_statement] = ACTIONS(SHIFT(177)),
        [sym_switch_statement] = ACTIONS(SHIFT(177)),
        [sym_labeled_statement] = ACTIONS(SHIFT(177)),
        [sym_break_statement] = ACTIONS(SHIFT(177)),
        [sym_continue_statement] = ACTIONS(SHIFT(177)),
        [sym_return_statement] = ACTIONS(SHIFT(177)),
        [sym_throw_statement] = ACTIONS(SHIFT(177)),
        [sym_defer_statement] = ACTIONS(SHIFT(177)),
        [sym_do_statement] = ACTIONS(SHIFT(177)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(177)),
        [sym_line_control_statement] = ACTIONS(SHIFT(177)),
        [sym__declaration] = ACTIONS(SHIFT(177)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym_typealias_declaration] = ACTIONS(SHIFT(5)),
        [sym_function_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(177)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(192)),
        [anon_sym_for] = ACTIONS(SHIFT(8)),
        [anon_sym_while] = ACTIONS(SHIFT(9)),
        [anon_sym_let] = ACTIONS(SHIFT(10)),
        [anon_sym_var] = ACTIONS(SHIFT(11)),
        [anon_sym_repeat] = ACTIONS(SHIFT(12)),
        [anon_sym_if] = ACTIONS(SHIFT(13)),
        [anon_sym_guard] = ACTIONS(SHIFT(14)),
        [anon_sym_switch] = ACTIONS(SHIFT(15)),
        [anon_sym_break] = ACTIONS(SHIFT(16)),
        [anon_sym_continue] = ACTIONS(SHIFT(17)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(177)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(189)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [anon_sym_typealias] = ACTIONS(SHIFT(25)),
        [anon_sym_func] = ACTIONS(SHIFT(26)),
        [sym_identifier] = ACTIONS(SHIFT(27)),
    },
    [192] = {
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(193)),
    },
    [193] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_build_configuration_statement, 7)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_build_configuration_statement, 7)),
    },
    [194] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_break_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_continue_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_return_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_throw_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_defer_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_do_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_build_configuration_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_line_control_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_import_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_constant_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_variable_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__variable_declaration_head] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_typealias_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_function_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_let] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_var] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_break] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_continue] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_fallthrough_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_return] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_throw] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_defer] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_do] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDif] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDelseif] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_import] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_typealias] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_func] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [195] = {
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_POUNDelseif] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [196] = {
        [sym_catch_clause] = ACTIONS(SHIFT(201)),
        [aux_sym_do_statement_repeat1] = ACTIONS(SHIFT(202)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_do_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_do_statement, 2)),
        [anon_sym_catch] = ACTIONS(SHIFT(203)),
    },
    [197] = {
        [sym__statement] = ACTIONS(SHIFT(109)),
        [sym__loop_statement] = ACTIONS(SHIFT(110)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(110)),
        [sym_guard_statement] = ACTIONS(SHIFT(110)),
        [sym_switch_statement] = ACTIONS(SHIFT(110)),
        [sym_labeled_statement] = ACTIONS(SHIFT(110)),
        [sym_break_statement] = ACTIONS(SHIFT(110)),
        [sym_continue_statement] = ACTIONS(SHIFT(110)),
        [sym_return_statement] = ACTIONS(SHIFT(110)),
        [sym_throw_statement] = ACTIONS(SHIFT(110)),
        [sym_defer_statement] = ACTIONS(SHIFT(110)),
        [sym_do_statement] = ACTIONS(SHIFT(110)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(110)),
        [sym_line_control_statement] = ACTIONS(SHIFT(110)),
        [sym__declaration] = ACTIONS(SHIFT(110)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym_typealias_declaration] = ACTIONS(SHIFT(5)),
        [sym_function_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(110)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(198)),
        [anon_sym_for] = ACTIONS(SHIFT(8)),
        [anon_sym_while] = ACTIONS(SHIFT(9)),
        [anon_sym_let] = ACTIONS(SHIFT(10)),
        [anon_sym_var] = ACTIONS(SHIFT(11)),
        [anon_sym_repeat] = ACTIONS(SHIFT(12)),
        [anon_sym_if] = ACTIONS(SHIFT(13)),
        [anon_sym_guard] = ACTIONS(SHIFT(14)),
        [anon_sym_switch] = ACTIONS(SHIFT(15)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(199)),
        [anon_sym_break] = ACTIONS(SHIFT(16)),
        [anon_sym_continue] = ACTIONS(SHIFT(17)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(110)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [anon_sym_typealias] = ACTIONS(SHIFT(25)),
        [anon_sym_func] = ACTIONS(SHIFT(26)),
        [sym_identifier] = ACTIONS(SHIFT(27)),
    },
    [198] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(200)),
    },
    [199] = {
        [sym_catch_clause] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_do_statement_repeat1] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_catch] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [200] = {
        [sym_catch_clause] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_do_statement_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_catch] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [201] = {
        [sym_catch_clause] = ACTIONS(SHIFT(201)),
        [aux_sym_do_statement_repeat1] = ACTIONS(SHIFT(268)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_do_statement_repeat1, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_do_statement_repeat1, 1)),
        [anon_sym_catch] = ACTIONS(SHIFT(203)),
    },
    [202] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_do_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_do_statement, 3)),
    },
    [203] = {
        [sym__code_block] = ACTIONS(SHIFT(204)),
        [sym__pattern] = ACTIONS(SHIFT(205)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(206)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(206)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(206)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(206)),
        [sym_optional_pattern] = ACTIONS(SHIFT(206)),
        [sym_is_pattern] = ACTIONS(SHIFT(206)),
        [sym_as_pattern] = ACTIONS(SHIFT(206)),
        [sym__expression] = ACTIONS(SHIFT(206)),
        [sym__type_identifier] = ACTIONS(SHIFT(207)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(209)),
        [anon_sym_let] = ACTIONS(SHIFT(210)),
        [anon_sym_var] = ACTIONS(SHIFT(210)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(197)),
        [anon_sym_DOT] = ACTIONS(SHIFT(211)),
        [anon_sym__] = ACTIONS(SHIFT(212)),
        [anon_sym_is] = ACTIONS(SHIFT(213)),
        [sym_identifier] = ACTIONS(SHIFT(214)),
    },
    [204] = {
        [sym_catch_clause] = ACTIONS(REDUCE(sym_catch_clause, 2)),
        [aux_sym_do_statement_repeat1] = ACTIONS(REDUCE(sym_catch_clause, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_catch_clause, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_catch_clause, 2)),
        [anon_sym_catch] = ACTIONS(REDUCE(sym_catch_clause, 2)),
    },
    [205] = {
        [sym__code_block] = ACTIONS(SHIFT(267)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(197)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(224)),
        [anon_sym_as] = ACTIONS(SHIFT(225)),
    },
    [206] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [207] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(264)),
    },
    [208] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(261)),
    },
    [209] = {
        [sym__pattern] = ACTIONS(SHIFT(227)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(228)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(228)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(228)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(229)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(228)),
        [sym_optional_pattern] = ACTIONS(SHIFT(228)),
        [sym_is_pattern] = ACTIONS(SHIFT(228)),
        [sym_as_pattern] = ACTIONS(SHIFT(228)),
        [sym__expression] = ACTIONS(SHIFT(228)),
        [sym__type_identifier] = ACTIONS(SHIFT(230)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(231)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(232)),
        [anon_sym_let] = ACTIONS(SHIFT(233)),
        [anon_sym_var] = ACTIONS(SHIFT(233)),
        [anon_sym_DOT] = ACTIONS(SHIFT(234)),
        [anon_sym__] = ACTIONS(SHIFT(235)),
        [anon_sym_is] = ACTIONS(SHIFT(236)),
        [sym_identifier] = ACTIONS(SHIFT(237)),
    },
    [210] = {
        [sym__pattern] = ACTIONS(SHIFT(223)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(206)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(206)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(206)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(206)),
        [sym_optional_pattern] = ACTIONS(SHIFT(206)),
        [sym_is_pattern] = ACTIONS(SHIFT(206)),
        [sym_as_pattern] = ACTIONS(SHIFT(206)),
        [sym__expression] = ACTIONS(SHIFT(206)),
        [sym__type_identifier] = ACTIONS(SHIFT(207)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(209)),
        [anon_sym_let] = ACTIONS(SHIFT(210)),
        [anon_sym_var] = ACTIONS(SHIFT(210)),
        [anon_sym_DOT] = ACTIONS(SHIFT(211)),
        [anon_sym__] = ACTIONS(SHIFT(212)),
        [anon_sym_is] = ACTIONS(SHIFT(213)),
        [sym_identifier] = ACTIONS(SHIFT(214)),
    },
    [211] = {
        [sym_identifier] = ACTIONS(SHIFT(221)),
    },
    [212] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
    },
    [213] = {
        [sym_type] = ACTIONS(SHIFT(215)),
        [sym__type_identifier] = ACTIONS(SHIFT(216)),
        [sym__type_name] = ACTIONS(SHIFT(217)),
        [sym_identifier] = ACTIONS(SHIFT(218)),
    },
    [214] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [215] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [216] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [217] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(219)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [218] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [219] = {
        [sym__type_identifier] = ACTIONS(SHIFT(220)),
        [sym__type_name] = ACTIONS(SHIFT(217)),
        [sym_identifier] = ACTIONS(SHIFT(218)),
    },
    [220] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [221] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(222)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(209)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [222] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [223] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(224)),
        [anon_sym_as] = ACTIONS(SHIFT(225)),
    },
    [224] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [225] = {
        [sym_type] = ACTIONS(SHIFT(226)),
        [sym__type_identifier] = ACTIONS(SHIFT(216)),
        [sym__type_name] = ACTIONS(SHIFT(217)),
        [sym_identifier] = ACTIONS(SHIFT(218)),
    },
    [226] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [227] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(257)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(258)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(247)),
        [anon_sym_as] = ACTIONS(SHIFT(248)),
    },
    [228] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [229] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(256)),
    },
    [230] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(253)),
    },
    [231] = {
        [sym__pattern] = ACTIONS(SHIFT(227)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(228)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(228)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(228)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(250)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(228)),
        [sym_optional_pattern] = ACTIONS(SHIFT(228)),
        [sym_is_pattern] = ACTIONS(SHIFT(228)),
        [sym_as_pattern] = ACTIONS(SHIFT(228)),
        [sym__expression] = ACTIONS(SHIFT(228)),
        [sym__type_identifier] = ACTIONS(SHIFT(230)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(231)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(251)),
        [anon_sym_let] = ACTIONS(SHIFT(233)),
        [anon_sym_var] = ACTIONS(SHIFT(233)),
        [anon_sym_DOT] = ACTIONS(SHIFT(234)),
        [anon_sym__] = ACTIONS(SHIFT(235)),
        [anon_sym_is] = ACTIONS(SHIFT(236)),
        [sym_identifier] = ACTIONS(SHIFT(237)),
    },
    [232] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [233] = {
        [sym__pattern] = ACTIONS(SHIFT(246)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(228)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(228)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(228)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(228)),
        [sym_optional_pattern] = ACTIONS(SHIFT(228)),
        [sym_is_pattern] = ACTIONS(SHIFT(228)),
        [sym_as_pattern] = ACTIONS(SHIFT(228)),
        [sym__expression] = ACTIONS(SHIFT(228)),
        [sym__type_identifier] = ACTIONS(SHIFT(230)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(231)),
        [anon_sym_let] = ACTIONS(SHIFT(233)),
        [anon_sym_var] = ACTIONS(SHIFT(233)),
        [anon_sym_DOT] = ACTIONS(SHIFT(234)),
        [anon_sym__] = ACTIONS(SHIFT(235)),
        [anon_sym_is] = ACTIONS(SHIFT(236)),
        [sym_identifier] = ACTIONS(SHIFT(237)),
    },
    [234] = {
        [sym_identifier] = ACTIONS(SHIFT(244)),
    },
    [235] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
    },
    [236] = {
        [sym_type] = ACTIONS(SHIFT(238)),
        [sym__type_identifier] = ACTIONS(SHIFT(239)),
        [sym__type_name] = ACTIONS(SHIFT(240)),
        [sym_identifier] = ACTIONS(SHIFT(241)),
    },
    [237] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [238] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [239] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [240] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(242)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [241] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [242] = {
        [sym__type_identifier] = ACTIONS(SHIFT(243)),
        [sym__type_name] = ACTIONS(SHIFT(240)),
        [sym_identifier] = ACTIONS(SHIFT(241)),
    },
    [243] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [244] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(245)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(231)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [245] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [246] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(247)),
        [anon_sym_as] = ACTIONS(SHIFT(248)),
    },
    [247] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [248] = {
        [sym_type] = ACTIONS(SHIFT(249)),
        [sym__type_identifier] = ACTIONS(SHIFT(239)),
        [sym__type_name] = ACTIONS(SHIFT(240)),
        [sym_identifier] = ACTIONS(SHIFT(241)),
    },
    [249] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [250] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(252)),
    },
    [251] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [252] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [253] = {
        [sym_identifier] = ACTIONS(SHIFT(254)),
    },
    [254] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(255)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(231)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [255] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [256] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [257] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 2)),
    },
    [258] = {
        [sym__pattern] = ACTIONS(SHIFT(259)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(228)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(228)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(228)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(228)),
        [sym_optional_pattern] = ACTIONS(SHIFT(228)),
        [sym_is_pattern] = ACTIONS(SHIFT(228)),
        [sym_as_pattern] = ACTIONS(SHIFT(228)),
        [sym__expression] = ACTIONS(SHIFT(228)),
        [sym__type_identifier] = ACTIONS(SHIFT(230)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(231)),
        [anon_sym_let] = ACTIONS(SHIFT(233)),
        [anon_sym_var] = ACTIONS(SHIFT(233)),
        [anon_sym_DOT] = ACTIONS(SHIFT(234)),
        [anon_sym__] = ACTIONS(SHIFT(235)),
        [anon_sym_is] = ACTIONS(SHIFT(236)),
        [sym_identifier] = ACTIONS(SHIFT(237)),
    },
    [259] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(260)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(258)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(247)),
        [anon_sym_as] = ACTIONS(SHIFT(248)),
    },
    [260] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [261] = {
        [sym__type_identifier] = ACTIONS(SHIFT(262)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [sym_identifier] = ACTIONS(SHIFT(263)),
    },
    [262] = {
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [263] = {
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [264] = {
        [sym_identifier] = ACTIONS(SHIFT(265)),
    },
    [265] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(266)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(209)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [266] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [267] = {
        [sym_catch_clause] = ACTIONS(REDUCE(sym_catch_clause, 3)),
        [aux_sym_do_statement_repeat1] = ACTIONS(REDUCE(sym_catch_clause, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_catch_clause, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_catch_clause, 3)),
        [anon_sym_catch] = ACTIONS(REDUCE(sym_catch_clause, 3)),
    },
    [268] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_do_statement_repeat1, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_do_statement_repeat1, 2)),
    },
    [269] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_defer_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_defer_statement, 2)),
    },
    [270] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_throw_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_throw_statement, 2)),
    },
    [271] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [272] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_return_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_return_statement, 2)),
    },
    [273] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_continue_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_continue_statement, 2)),
    },
    [274] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_break_statement, 2)),
    },
    [275] = {
        [anon_sym_LBRACE] = ACTIONS(SHIFT(277)),
    },
    [276] = {
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [277] = {
        [sym_case_statement] = ACTIONS(SHIFT(278)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(279)),
        [anon_sym_case] = ACTIONS(SHIFT(280)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(281)),
        [anon_sym_default] = ACTIONS(SHIFT(282)),
    },
    [278] = {
        [sym_case_statement] = ACTIONS(SHIFT(278)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(325)),
        [anon_sym_case] = ACTIONS(SHIFT(280)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 1)),
        [anon_sym_default] = ACTIONS(SHIFT(282)),
    },
    [279] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(324)),
    },
    [280] = {
        [sym__pattern] = ACTIONS(SHIFT(289)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(290)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(290)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(290)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(290)),
        [sym_optional_pattern] = ACTIONS(SHIFT(290)),
        [sym_is_pattern] = ACTIONS(SHIFT(290)),
        [sym_as_pattern] = ACTIONS(SHIFT(290)),
        [sym__expression] = ACTIONS(SHIFT(290)),
        [sym__type_identifier] = ACTIONS(SHIFT(291)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(292)),
        [anon_sym_let] = ACTIONS(SHIFT(293)),
        [anon_sym_var] = ACTIONS(SHIFT(293)),
        [anon_sym_DOT] = ACTIONS(SHIFT(294)),
        [anon_sym__] = ACTIONS(SHIFT(295)),
        [anon_sym_is] = ACTIONS(SHIFT(296)),
        [sym_identifier] = ACTIONS(SHIFT(297)),
    },
    [281] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_switch_statement, 4)),
    },
    [282] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(283)),
    },
    [283] = {
        [sym__statement] = ACTIONS(SHIFT(284)),
        [sym__loop_statement] = ACTIONS(SHIFT(285)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(285)),
        [sym_guard_statement] = ACTIONS(SHIFT(285)),
        [sym_switch_statement] = ACTIONS(SHIFT(285)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [sym_labeled_statement] = ACTIONS(SHIFT(285)),
        [sym_break_statement] = ACTIONS(SHIFT(285)),
        [sym_continue_statement] = ACTIONS(SHIFT(285)),
        [sym_return_statement] = ACTIONS(SHIFT(285)),
        [sym_throw_statement] = ACTIONS(SHIFT(285)),
        [sym_defer_statement] = ACTIONS(SHIFT(285)),
        [sym_do_statement] = ACTIONS(SHIFT(285)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(285)),
        [sym_line_control_statement] = ACTIONS(SHIFT(285)),
        [sym__declaration] = ACTIONS(SHIFT(285)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym_typealias_declaration] = ACTIONS(SHIFT(5)),
        [sym_function_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(285)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(286)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_for] = ACTIONS(SHIFT(8)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_while] = ACTIONS(SHIFT(9)),
        [anon_sym_let] = ACTIONS(SHIFT(10)),
        [anon_sym_var] = ACTIONS(SHIFT(11)),
        [anon_sym_repeat] = ACTIONS(SHIFT(12)),
        [anon_sym_if] = ACTIONS(SHIFT(13)),
        [anon_sym_guard] = ACTIONS(SHIFT(14)),
        [anon_sym_switch] = ACTIONS(SHIFT(15)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_break] = ACTIONS(SHIFT(16)),
        [anon_sym_continue] = ACTIONS(SHIFT(17)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(285)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [anon_sym_typealias] = ACTIONS(SHIFT(25)),
        [anon_sym_func] = ACTIONS(SHIFT(26)),
        [sym_identifier] = ACTIONS(SHIFT(27)),
    },
    [284] = {
        [sym__statement] = ACTIONS(SHIFT(284)),
        [sym__loop_statement] = ACTIONS(SHIFT(285)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(285)),
        [sym_guard_statement] = ACTIONS(SHIFT(285)),
        [sym_switch_statement] = ACTIONS(SHIFT(285)),
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [sym_labeled_statement] = ACTIONS(SHIFT(285)),
        [sym_break_statement] = ACTIONS(SHIFT(285)),
        [sym_continue_statement] = ACTIONS(SHIFT(285)),
        [sym_return_statement] = ACTIONS(SHIFT(285)),
        [sym_throw_statement] = ACTIONS(SHIFT(285)),
        [sym_defer_statement] = ACTIONS(SHIFT(285)),
        [sym_do_statement] = ACTIONS(SHIFT(285)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(285)),
        [sym_line_control_statement] = ACTIONS(SHIFT(285)),
        [sym__declaration] = ACTIONS(SHIFT(285)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym_typealias_declaration] = ACTIONS(SHIFT(5)),
        [sym_function_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(285)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(288)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_for] = ACTIONS(SHIFT(8)),
        [anon_sym_case] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_while] = ACTIONS(SHIFT(9)),
        [anon_sym_let] = ACTIONS(SHIFT(10)),
        [anon_sym_var] = ACTIONS(SHIFT(11)),
        [anon_sym_repeat] = ACTIONS(SHIFT(12)),
        [anon_sym_if] = ACTIONS(SHIFT(13)),
        [anon_sym_guard] = ACTIONS(SHIFT(14)),
        [anon_sym_switch] = ACTIONS(SHIFT(15)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_default] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_break] = ACTIONS(SHIFT(16)),
        [anon_sym_continue] = ACTIONS(SHIFT(17)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(285)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [anon_sym_typealias] = ACTIONS(SHIFT(25)),
        [anon_sym_func] = ACTIONS(SHIFT(26)),
        [sym_identifier] = ACTIONS(SHIFT(27)),
    },
    [285] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(287)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(SHIFT(287)),
    },
    [286] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 3)),
    },
    [287] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_case_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_break_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_continue_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_return_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_throw_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_defer_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_do_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_build_configuration_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_line_control_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_import_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_constant_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_variable_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__variable_declaration_head] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_typealias_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_function_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_case] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_let] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_var] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_break] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_continue] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_fallthrough_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_return] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_throw] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_defer] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_do] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDif] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_import] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_typealias] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_func] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [288] = {
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_case] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [289] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(316)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(317)),
        [anon_sym_COLON] = ACTIONS(SHIFT(318)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(307)),
        [anon_sym_as] = ACTIONS(SHIFT(308)),
    },
    [290] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [291] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(313)),
    },
    [292] = {
        [sym__pattern] = ACTIONS(SHIFT(227)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(228)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(228)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(228)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(310)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(228)),
        [sym_optional_pattern] = ACTIONS(SHIFT(228)),
        [sym_is_pattern] = ACTIONS(SHIFT(228)),
        [sym_as_pattern] = ACTIONS(SHIFT(228)),
        [sym__expression] = ACTIONS(SHIFT(228)),
        [sym__type_identifier] = ACTIONS(SHIFT(230)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(231)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(311)),
        [anon_sym_let] = ACTIONS(SHIFT(233)),
        [anon_sym_var] = ACTIONS(SHIFT(233)),
        [anon_sym_DOT] = ACTIONS(SHIFT(234)),
        [anon_sym__] = ACTIONS(SHIFT(235)),
        [anon_sym_is] = ACTIONS(SHIFT(236)),
        [sym_identifier] = ACTIONS(SHIFT(237)),
    },
    [293] = {
        [sym__pattern] = ACTIONS(SHIFT(306)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(290)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(290)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(290)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(290)),
        [sym_optional_pattern] = ACTIONS(SHIFT(290)),
        [sym_is_pattern] = ACTIONS(SHIFT(290)),
        [sym_as_pattern] = ACTIONS(SHIFT(290)),
        [sym__expression] = ACTIONS(SHIFT(290)),
        [sym__type_identifier] = ACTIONS(SHIFT(291)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(292)),
        [anon_sym_let] = ACTIONS(SHIFT(293)),
        [anon_sym_var] = ACTIONS(SHIFT(293)),
        [anon_sym_DOT] = ACTIONS(SHIFT(294)),
        [anon_sym__] = ACTIONS(SHIFT(295)),
        [anon_sym_is] = ACTIONS(SHIFT(296)),
        [sym_identifier] = ACTIONS(SHIFT(297)),
    },
    [294] = {
        [sym_identifier] = ACTIONS(SHIFT(304)),
    },
    [295] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
    },
    [296] = {
        [sym_type] = ACTIONS(SHIFT(298)),
        [sym__type_identifier] = ACTIONS(SHIFT(299)),
        [sym__type_name] = ACTIONS(SHIFT(300)),
        [sym_identifier] = ACTIONS(SHIFT(301)),
    },
    [297] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [298] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [299] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [300] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(302)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [301] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [302] = {
        [sym__type_identifier] = ACTIONS(SHIFT(303)),
        [sym__type_name] = ACTIONS(SHIFT(300)),
        [sym_identifier] = ACTIONS(SHIFT(301)),
    },
    [303] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [304] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(305)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(292)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [305] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [306] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(307)),
        [anon_sym_as] = ACTIONS(SHIFT(308)),
    },
    [307] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [308] = {
        [sym_type] = ACTIONS(SHIFT(309)),
        [sym__type_identifier] = ACTIONS(SHIFT(299)),
        [sym__type_name] = ACTIONS(SHIFT(300)),
        [sym_identifier] = ACTIONS(SHIFT(301)),
    },
    [309] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [310] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(312)),
    },
    [311] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [312] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [313] = {
        [sym_identifier] = ACTIONS(SHIFT(314)),
    },
    [314] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(315)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(292)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [315] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [316] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(322)),
    },
    [317] = {
        [sym__pattern] = ACTIONS(SHIFT(320)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(290)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(290)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(290)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(290)),
        [sym_optional_pattern] = ACTIONS(SHIFT(290)),
        [sym_is_pattern] = ACTIONS(SHIFT(290)),
        [sym_as_pattern] = ACTIONS(SHIFT(290)),
        [sym__expression] = ACTIONS(SHIFT(290)),
        [sym__type_identifier] = ACTIONS(SHIFT(291)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(292)),
        [anon_sym_let] = ACTIONS(SHIFT(293)),
        [anon_sym_var] = ACTIONS(SHIFT(293)),
        [anon_sym_DOT] = ACTIONS(SHIFT(294)),
        [anon_sym__] = ACTIONS(SHIFT(295)),
        [anon_sym_is] = ACTIONS(SHIFT(296)),
        [sym_identifier] = ACTIONS(SHIFT(297)),
    },
    [318] = {
        [sym__statement] = ACTIONS(SHIFT(284)),
        [sym__loop_statement] = ACTIONS(SHIFT(285)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(285)),
        [sym_guard_statement] = ACTIONS(SHIFT(285)),
        [sym_switch_statement] = ACTIONS(SHIFT(285)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [sym_labeled_statement] = ACTIONS(SHIFT(285)),
        [sym_break_statement] = ACTIONS(SHIFT(285)),
        [sym_continue_statement] = ACTIONS(SHIFT(285)),
        [sym_return_statement] = ACTIONS(SHIFT(285)),
        [sym_throw_statement] = ACTIONS(SHIFT(285)),
        [sym_defer_statement] = ACTIONS(SHIFT(285)),
        [sym_do_statement] = ACTIONS(SHIFT(285)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(285)),
        [sym_line_control_statement] = ACTIONS(SHIFT(285)),
        [sym__declaration] = ACTIONS(SHIFT(285)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym_typealias_declaration] = ACTIONS(SHIFT(5)),
        [sym_function_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(285)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(319)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_for] = ACTIONS(SHIFT(8)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_while] = ACTIONS(SHIFT(9)),
        [anon_sym_let] = ACTIONS(SHIFT(10)),
        [anon_sym_var] = ACTIONS(SHIFT(11)),
        [anon_sym_repeat] = ACTIONS(SHIFT(12)),
        [anon_sym_if] = ACTIONS(SHIFT(13)),
        [anon_sym_guard] = ACTIONS(SHIFT(14)),
        [anon_sym_switch] = ACTIONS(SHIFT(15)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_break] = ACTIONS(SHIFT(16)),
        [anon_sym_continue] = ACTIONS(SHIFT(17)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(285)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [anon_sym_typealias] = ACTIONS(SHIFT(25)),
        [anon_sym_func] = ACTIONS(SHIFT(26)),
        [sym_identifier] = ACTIONS(SHIFT(27)),
    },
    [319] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 4)),
    },
    [320] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(321)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(317)),
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(307)),
        [anon_sym_as] = ACTIONS(SHIFT(308)),
    },
    [321] = {
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [322] = {
        [sym__statement] = ACTIONS(SHIFT(284)),
        [sym__loop_statement] = ACTIONS(SHIFT(285)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(285)),
        [sym_guard_statement] = ACTIONS(SHIFT(285)),
        [sym_switch_statement] = ACTIONS(SHIFT(285)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [sym_labeled_statement] = ACTIONS(SHIFT(285)),
        [sym_break_statement] = ACTIONS(SHIFT(285)),
        [sym_continue_statement] = ACTIONS(SHIFT(285)),
        [sym_return_statement] = ACTIONS(SHIFT(285)),
        [sym_throw_statement] = ACTIONS(SHIFT(285)),
        [sym_defer_statement] = ACTIONS(SHIFT(285)),
        [sym_do_statement] = ACTIONS(SHIFT(285)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(285)),
        [sym_line_control_statement] = ACTIONS(SHIFT(285)),
        [sym__declaration] = ACTIONS(SHIFT(285)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym_typealias_declaration] = ACTIONS(SHIFT(5)),
        [sym_function_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(285)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(323)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_for] = ACTIONS(SHIFT(8)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_while] = ACTIONS(SHIFT(9)),
        [anon_sym_let] = ACTIONS(SHIFT(10)),
        [anon_sym_var] = ACTIONS(SHIFT(11)),
        [anon_sym_repeat] = ACTIONS(SHIFT(12)),
        [anon_sym_if] = ACTIONS(SHIFT(13)),
        [anon_sym_guard] = ACTIONS(SHIFT(14)),
        [anon_sym_switch] = ACTIONS(SHIFT(15)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_break] = ACTIONS(SHIFT(16)),
        [anon_sym_continue] = ACTIONS(SHIFT(17)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(285)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [anon_sym_typealias] = ACTIONS(SHIFT(25)),
        [anon_sym_func] = ACTIONS(SHIFT(26)),
        [sym_identifier] = ACTIONS(SHIFT(27)),
    },
    [323] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 5)),
    },
    [324] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_switch_statement, 5)),
    },
    [325] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 2)),
    },
    [326] = {
        [anon_sym_else] = ACTIONS(SHIFT(401)),
    },
    [327] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(400)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(394)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [328] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1), SHIFT(397)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [329] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [330] = {
        [anon_sym_COMMA] = ACTIONS(SHIFT(391)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [331] = {
        [sym__pattern] = ACTIONS(SHIFT(388)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(337)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(337)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(337)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(337)),
        [sym_optional_pattern] = ACTIONS(SHIFT(337)),
        [sym_is_pattern] = ACTIONS(SHIFT(337)),
        [sym_as_pattern] = ACTIONS(SHIFT(337)),
        [sym__expression] = ACTIONS(SHIFT(337)),
        [sym__type_identifier] = ACTIONS(SHIFT(338)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(339)),
        [anon_sym_let] = ACTIONS(SHIFT(340)),
        [anon_sym_var] = ACTIONS(SHIFT(340)),
        [anon_sym_DOT] = ACTIONS(SHIFT(341)),
        [anon_sym__] = ACTIONS(SHIFT(342)),
        [anon_sym_is] = ACTIONS(SHIFT(343)),
        [sym_identifier] = ACTIONS(SHIFT(344)),
    },
    [332] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(373)),
    },
    [333] = {
        [sym_optional_binding] = ACTIONS(SHIFT(335)),
        [sym__pattern] = ACTIONS(SHIFT(336)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(337)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(337)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(337)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(337)),
        [sym_optional_pattern] = ACTIONS(SHIFT(337)),
        [sym_is_pattern] = ACTIONS(SHIFT(337)),
        [sym_as_pattern] = ACTIONS(SHIFT(337)),
        [sym__expression] = ACTIONS(SHIFT(337)),
        [sym__type_identifier] = ACTIONS(SHIFT(338)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(339)),
        [anon_sym_let] = ACTIONS(SHIFT(340)),
        [anon_sym_var] = ACTIONS(SHIFT(340)),
        [anon_sym_DOT] = ACTIONS(SHIFT(341)),
        [anon_sym__] = ACTIONS(SHIFT(342)),
        [anon_sym_is] = ACTIONS(SHIFT(343)),
        [sym_identifier] = ACTIONS(SHIFT(344)),
    },
    [334] = {
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [335] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(366)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
    },
    [336] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(363)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(354)),
        [anon_sym_as] = ACTIONS(SHIFT(355)),
    },
    [337] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [338] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(360)),
    },
    [339] = {
        [sym__pattern] = ACTIONS(SHIFT(227)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(228)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(228)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(228)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(357)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(228)),
        [sym_optional_pattern] = ACTIONS(SHIFT(228)),
        [sym_is_pattern] = ACTIONS(SHIFT(228)),
        [sym_as_pattern] = ACTIONS(SHIFT(228)),
        [sym__expression] = ACTIONS(SHIFT(228)),
        [sym__type_identifier] = ACTIONS(SHIFT(230)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(231)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(358)),
        [anon_sym_let] = ACTIONS(SHIFT(233)),
        [anon_sym_var] = ACTIONS(SHIFT(233)),
        [anon_sym_DOT] = ACTIONS(SHIFT(234)),
        [anon_sym__] = ACTIONS(SHIFT(235)),
        [anon_sym_is] = ACTIONS(SHIFT(236)),
        [sym_identifier] = ACTIONS(SHIFT(237)),
    },
    [340] = {
        [sym__pattern] = ACTIONS(SHIFT(353)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(337)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(337)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(337)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(337)),
        [sym_optional_pattern] = ACTIONS(SHIFT(337)),
        [sym_is_pattern] = ACTIONS(SHIFT(337)),
        [sym_as_pattern] = ACTIONS(SHIFT(337)),
        [sym__expression] = ACTIONS(SHIFT(337)),
        [sym__type_identifier] = ACTIONS(SHIFT(338)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(339)),
        [anon_sym_let] = ACTIONS(SHIFT(340)),
        [anon_sym_var] = ACTIONS(SHIFT(340)),
        [anon_sym_DOT] = ACTIONS(SHIFT(341)),
        [anon_sym__] = ACTIONS(SHIFT(342)),
        [anon_sym_is] = ACTIONS(SHIFT(343)),
        [sym_identifier] = ACTIONS(SHIFT(344)),
    },
    [341] = {
        [sym_identifier] = ACTIONS(SHIFT(351)),
    },
    [342] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
    },
    [343] = {
        [sym_type] = ACTIONS(SHIFT(345)),
        [sym__type_identifier] = ACTIONS(SHIFT(346)),
        [sym__type_name] = ACTIONS(SHIFT(347)),
        [sym_identifier] = ACTIONS(SHIFT(348)),
    },
    [344] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [345] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [346] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [347] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(349)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [348] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [349] = {
        [sym__type_identifier] = ACTIONS(SHIFT(350)),
        [sym__type_name] = ACTIONS(SHIFT(347)),
        [sym_identifier] = ACTIONS(SHIFT(348)),
    },
    [350] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [351] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(352)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(339)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [352] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [353] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(354)),
        [anon_sym_as] = ACTIONS(SHIFT(355)),
    },
    [354] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [355] = {
        [sym_type] = ACTIONS(SHIFT(356)),
        [sym__type_identifier] = ACTIONS(SHIFT(346)),
        [sym__type_name] = ACTIONS(SHIFT(347)),
        [sym_identifier] = ACTIONS(SHIFT(348)),
    },
    [356] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [357] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(359)),
    },
    [358] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [359] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [360] = {
        [sym_identifier] = ACTIONS(SHIFT(361)),
    },
    [361] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(362)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(339)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [362] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [363] = {
        [sym__expression] = ACTIONS(SHIFT(364)),
        [sym_identifier] = ACTIONS(SHIFT(365)),
    },
    [364] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [365] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [366] = {
        [sym_optional_binding] = ACTIONS(SHIFT(367)),
        [sym__pattern] = ACTIONS(SHIFT(368)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(337)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(337)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(337)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(337)),
        [sym_optional_pattern] = ACTIONS(SHIFT(337)),
        [sym_is_pattern] = ACTIONS(SHIFT(337)),
        [sym_as_pattern] = ACTIONS(SHIFT(337)),
        [sym__expression] = ACTIONS(SHIFT(337)),
        [sym__type_identifier] = ACTIONS(SHIFT(338)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(339)),
        [anon_sym_let] = ACTIONS(SHIFT(340)),
        [anon_sym_var] = ACTIONS(SHIFT(340)),
        [anon_sym_DOT] = ACTIONS(SHIFT(341)),
        [anon_sym__] = ACTIONS(SHIFT(342)),
        [anon_sym_is] = ACTIONS(SHIFT(343)),
        [sym_identifier] = ACTIONS(SHIFT(344)),
    },
    [367] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(SHIFT(372)),
        [anon_sym_COMMA] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
    },
    [368] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(369)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(354)),
        [anon_sym_as] = ACTIONS(SHIFT(355)),
    },
    [369] = {
        [sym__expression] = ACTIONS(SHIFT(370)),
        [sym_identifier] = ACTIONS(SHIFT(371)),
    },
    [370] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [371] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [372] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
    },
    [373] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(374)),
        [anon_sym_iOS] = ACTIONS(SHIFT(375)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(375)),
        [anon_sym_OSX] = ACTIONS(SHIFT(375)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(375)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(375)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(375)),
    },
    [374] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(386)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(387)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(379)),
    },
    [375] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(376)),
    },
    [376] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(377)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(378)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(379)),
    },
    [377] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(385)),
    },
    [378] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 5)),
    },
    [379] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(380)),
        [anon_sym_iOS] = ACTIONS(SHIFT(381)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(381)),
        [anon_sym_OSX] = ACTIONS(SHIFT(381)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(381)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(381)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(381)),
    },
    [380] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(384)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(379)),
    },
    [381] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(382)),
    },
    [382] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(383)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 3)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(379)),
    },
    [383] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 4)),
    },
    [384] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 3)),
    },
    [385] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 6)),
    },
    [386] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(378)),
    },
    [387] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 4)),
    },
    [388] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(389)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(354)),
        [anon_sym_as] = ACTIONS(SHIFT(355)),
    },
    [389] = {
        [sym__expression] = ACTIONS(SHIFT(390)),
        [sym_identifier] = ACTIONS(SHIFT(365)),
    },
    [390] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_case_condition, 4)),
    },
    [391] = {
        [sym__condition] = ACTIONS(SHIFT(392)),
        [sym_availability_condition] = ACTIONS(SHIFT(329)),
        [sym_case_condition] = ACTIONS(SHIFT(329)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(329)),
        [anon_sym_case] = ACTIONS(SHIFT(331)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(332)),
        [anon_sym_let] = ACTIONS(SHIFT(333)),
        [anon_sym_var] = ACTIONS(SHIFT(333)),
    },
    [392] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(393)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(394)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [393] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 4)),
    },
    [394] = {
        [sym__condition] = ACTIONS(SHIFT(395)),
        [sym_availability_condition] = ACTIONS(SHIFT(329)),
        [sym_case_condition] = ACTIONS(SHIFT(329)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(329)),
        [anon_sym_case] = ACTIONS(SHIFT(331)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(332)),
        [anon_sym_let] = ACTIONS(SHIFT(333)),
        [anon_sym_var] = ACTIONS(SHIFT(333)),
    },
    [395] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(396)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(394)),
        [anon_sym_else] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
    },
    [396] = {
        [anon_sym_else] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
    },
    [397] = {
        [sym__expression] = ACTIONS(SHIFT(398)),
        [sym_identifier] = ACTIONS(SHIFT(399)),
    },
    [398] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [399] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [400] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 2)),
    },
    [401] = {
        [sym__code_block] = ACTIONS(SHIFT(402)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(95)),
    },
    [402] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_guard_statement, 4)),
    },
    [403] = {
        [sym__code_block] = ACTIONS(SHIFT(446)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(447)),
    },
    [404] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(445)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(439)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [405] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1), SHIFT(442)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [406] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [407] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(436)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [408] = {
        [sym__pattern] = ACTIONS(SHIFT(433)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(337)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(337)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(337)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(337)),
        [sym_optional_pattern] = ACTIONS(SHIFT(337)),
        [sym_is_pattern] = ACTIONS(SHIFT(337)),
        [sym_as_pattern] = ACTIONS(SHIFT(337)),
        [sym__expression] = ACTIONS(SHIFT(337)),
        [sym__type_identifier] = ACTIONS(SHIFT(338)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(339)),
        [anon_sym_let] = ACTIONS(SHIFT(340)),
        [anon_sym_var] = ACTIONS(SHIFT(340)),
        [anon_sym_DOT] = ACTIONS(SHIFT(341)),
        [anon_sym__] = ACTIONS(SHIFT(342)),
        [anon_sym_is] = ACTIONS(SHIFT(343)),
        [sym_identifier] = ACTIONS(SHIFT(344)),
    },
    [409] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(424)),
    },
    [410] = {
        [sym_optional_binding] = ACTIONS(SHIFT(412)),
        [sym__pattern] = ACTIONS(SHIFT(413)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(337)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(337)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(337)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(337)),
        [sym_optional_pattern] = ACTIONS(SHIFT(337)),
        [sym_is_pattern] = ACTIONS(SHIFT(337)),
        [sym_as_pattern] = ACTIONS(SHIFT(337)),
        [sym__expression] = ACTIONS(SHIFT(337)),
        [sym__type_identifier] = ACTIONS(SHIFT(338)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(339)),
        [anon_sym_let] = ACTIONS(SHIFT(340)),
        [anon_sym_var] = ACTIONS(SHIFT(340)),
        [anon_sym_DOT] = ACTIONS(SHIFT(341)),
        [anon_sym__] = ACTIONS(SHIFT(342)),
        [anon_sym_is] = ACTIONS(SHIFT(343)),
        [sym_identifier] = ACTIONS(SHIFT(344)),
    },
    [411] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [412] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(417)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
    },
    [413] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(414)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(354)),
        [anon_sym_as] = ACTIONS(SHIFT(355)),
    },
    [414] = {
        [sym__expression] = ACTIONS(SHIFT(415)),
        [sym_identifier] = ACTIONS(SHIFT(416)),
    },
    [415] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [416] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [417] = {
        [sym_optional_binding] = ACTIONS(SHIFT(418)),
        [sym__pattern] = ACTIONS(SHIFT(419)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(337)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(337)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(337)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(337)),
        [sym_optional_pattern] = ACTIONS(SHIFT(337)),
        [sym_is_pattern] = ACTIONS(SHIFT(337)),
        [sym_as_pattern] = ACTIONS(SHIFT(337)),
        [sym__expression] = ACTIONS(SHIFT(337)),
        [sym__type_identifier] = ACTIONS(SHIFT(338)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(339)),
        [anon_sym_let] = ACTIONS(SHIFT(340)),
        [anon_sym_var] = ACTIONS(SHIFT(340)),
        [anon_sym_DOT] = ACTIONS(SHIFT(341)),
        [anon_sym__] = ACTIONS(SHIFT(342)),
        [anon_sym_is] = ACTIONS(SHIFT(343)),
        [sym_identifier] = ACTIONS(SHIFT(344)),
    },
    [418] = {
        [sym__code_block] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(SHIFT(423)),
        [anon_sym_COMMA] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
    },
    [419] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(420)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(354)),
        [anon_sym_as] = ACTIONS(SHIFT(355)),
    },
    [420] = {
        [sym__expression] = ACTIONS(SHIFT(421)),
        [sym_identifier] = ACTIONS(SHIFT(422)),
    },
    [421] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [422] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [423] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
    },
    [424] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(425)),
        [anon_sym_iOS] = ACTIONS(SHIFT(426)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(426)),
        [anon_sym_OSX] = ACTIONS(SHIFT(426)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(426)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(426)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(426)),
    },
    [425] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(431)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(432)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(379)),
    },
    [426] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(427)),
    },
    [427] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(428)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(429)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(379)),
    },
    [428] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(430)),
    },
    [429] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 5)),
    },
    [430] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 6)),
    },
    [431] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(429)),
    },
    [432] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 4)),
    },
    [433] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(434)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(354)),
        [anon_sym_as] = ACTIONS(SHIFT(355)),
    },
    [434] = {
        [sym__expression] = ACTIONS(SHIFT(435)),
        [sym_identifier] = ACTIONS(SHIFT(416)),
    },
    [435] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_case_condition, 4)),
    },
    [436] = {
        [sym__condition] = ACTIONS(SHIFT(437)),
        [sym_availability_condition] = ACTIONS(SHIFT(406)),
        [sym_case_condition] = ACTIONS(SHIFT(406)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(406)),
        [anon_sym_case] = ACTIONS(SHIFT(408)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(409)),
        [anon_sym_let] = ACTIONS(SHIFT(410)),
        [anon_sym_var] = ACTIONS(SHIFT(410)),
    },
    [437] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(438)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(439)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [438] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 4)),
    },
    [439] = {
        [sym__condition] = ACTIONS(SHIFT(440)),
        [sym_availability_condition] = ACTIONS(SHIFT(406)),
        [sym_case_condition] = ACTIONS(SHIFT(406)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(406)),
        [anon_sym_case] = ACTIONS(SHIFT(408)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(409)),
        [anon_sym_let] = ACTIONS(SHIFT(410)),
        [anon_sym_var] = ACTIONS(SHIFT(410)),
    },
    [440] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(441)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(439)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
    },
    [441] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
    },
    [442] = {
        [sym__expression] = ACTIONS(SHIFT(443)),
        [sym_identifier] = ACTIONS(SHIFT(444)),
    },
    [443] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [444] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [445] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 2)),
    },
    [446] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_else] = ACTIONS(SHIFT(451)),
    },
    [447] = {
        [sym__statement] = ACTIONS(SHIFT(109)),
        [sym__loop_statement] = ACTIONS(SHIFT(110)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(110)),
        [sym_guard_statement] = ACTIONS(SHIFT(110)),
        [sym_switch_statement] = ACTIONS(SHIFT(110)),
        [sym_labeled_statement] = ACTIONS(SHIFT(110)),
        [sym_break_statement] = ACTIONS(SHIFT(110)),
        [sym_continue_statement] = ACTIONS(SHIFT(110)),
        [sym_return_statement] = ACTIONS(SHIFT(110)),
        [sym_throw_statement] = ACTIONS(SHIFT(110)),
        [sym_defer_statement] = ACTIONS(SHIFT(110)),
        [sym_do_statement] = ACTIONS(SHIFT(110)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(110)),
        [sym_line_control_statement] = ACTIONS(SHIFT(110)),
        [sym__declaration] = ACTIONS(SHIFT(110)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym_typealias_declaration] = ACTIONS(SHIFT(5)),
        [sym_function_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(110)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(448)),
        [anon_sym_for] = ACTIONS(SHIFT(8)),
        [anon_sym_while] = ACTIONS(SHIFT(9)),
        [anon_sym_let] = ACTIONS(SHIFT(10)),
        [anon_sym_var] = ACTIONS(SHIFT(11)),
        [anon_sym_repeat] = ACTIONS(SHIFT(12)),
        [anon_sym_if] = ACTIONS(SHIFT(13)),
        [anon_sym_guard] = ACTIONS(SHIFT(14)),
        [anon_sym_switch] = ACTIONS(SHIFT(15)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(449)),
        [anon_sym_break] = ACTIONS(SHIFT(16)),
        [anon_sym_continue] = ACTIONS(SHIFT(17)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(110)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [anon_sym_typealias] = ACTIONS(SHIFT(25)),
        [anon_sym_func] = ACTIONS(SHIFT(26)),
        [sym_identifier] = ACTIONS(SHIFT(27)),
    },
    [448] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(450)),
    },
    [449] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [450] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [451] = {
        [sym_if_statement] = ACTIONS(SHIFT(452)),
        [sym__code_block] = ACTIONS(SHIFT(452)),
        [anon_sym_if] = ACTIONS(SHIFT(13)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(95)),
    },
    [452] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_if_statement, 5)),
    },
    [453] = {
        [anon_sym_while] = ACTIONS(SHIFT(458)),
    },
    [454] = {
        [sym__statement] = ACTIONS(SHIFT(109)),
        [sym__loop_statement] = ACTIONS(SHIFT(110)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(110)),
        [sym_guard_statement] = ACTIONS(SHIFT(110)),
        [sym_switch_statement] = ACTIONS(SHIFT(110)),
        [sym_labeled_statement] = ACTIONS(SHIFT(110)),
        [sym_break_statement] = ACTIONS(SHIFT(110)),
        [sym_continue_statement] = ACTIONS(SHIFT(110)),
        [sym_return_statement] = ACTIONS(SHIFT(110)),
        [sym_throw_statement] = ACTIONS(SHIFT(110)),
        [sym_defer_statement] = ACTIONS(SHIFT(110)),
        [sym_do_statement] = ACTIONS(SHIFT(110)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(110)),
        [sym_line_control_statement] = ACTIONS(SHIFT(110)),
        [sym__declaration] = ACTIONS(SHIFT(110)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym_typealias_declaration] = ACTIONS(SHIFT(5)),
        [sym_function_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(110)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(455)),
        [anon_sym_for] = ACTIONS(SHIFT(8)),
        [anon_sym_while] = ACTIONS(SHIFT(9)),
        [anon_sym_let] = ACTIONS(SHIFT(10)),
        [anon_sym_var] = ACTIONS(SHIFT(11)),
        [anon_sym_repeat] = ACTIONS(SHIFT(12)),
        [anon_sym_if] = ACTIONS(SHIFT(13)),
        [anon_sym_guard] = ACTIONS(SHIFT(14)),
        [anon_sym_switch] = ACTIONS(SHIFT(15)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(456)),
        [anon_sym_break] = ACTIONS(SHIFT(16)),
        [anon_sym_continue] = ACTIONS(SHIFT(17)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(110)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [anon_sym_typealias] = ACTIONS(SHIFT(25)),
        [anon_sym_func] = ACTIONS(SHIFT(26)),
        [sym_identifier] = ACTIONS(SHIFT(27)),
    },
    [455] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(457)),
    },
    [456] = {
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [457] = {
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [458] = {
        [sym__expression] = ACTIONS(SHIFT(459)),
        [sym_identifier] = ACTIONS(SHIFT(271)),
    },
    [459] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
    },
    [460] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(SHIFT(501)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_constant_declaration, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_constant_declaration, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(502)),
    },
    [461] = {
        [sym__type_annotation] = ACTIONS(SHIFT(488)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__pattern_initializer, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__pattern_initializer, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__pattern_initializer, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern_initializer, 1)),
        [anon_sym_EQ] = ACTIONS(SHIFT(489)),
        [anon_sym_COLON] = ACTIONS(SHIFT(490)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(479)),
        [anon_sym_as] = ACTIONS(SHIFT(480)),
    },
    [462] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [463] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(485)),
    },
    [464] = {
        [sym__pattern] = ACTIONS(SHIFT(227)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(228)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(228)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(228)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(482)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(228)),
        [sym_optional_pattern] = ACTIONS(SHIFT(228)),
        [sym_is_pattern] = ACTIONS(SHIFT(228)),
        [sym_as_pattern] = ACTIONS(SHIFT(228)),
        [sym__expression] = ACTIONS(SHIFT(228)),
        [sym__type_identifier] = ACTIONS(SHIFT(230)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(231)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(483)),
        [anon_sym_let] = ACTIONS(SHIFT(233)),
        [anon_sym_var] = ACTIONS(SHIFT(233)),
        [anon_sym_DOT] = ACTIONS(SHIFT(234)),
        [anon_sym__] = ACTIONS(SHIFT(235)),
        [anon_sym_is] = ACTIONS(SHIFT(236)),
        [sym_identifier] = ACTIONS(SHIFT(237)),
    },
    [465] = {
        [sym__pattern] = ACTIONS(SHIFT(478)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(462)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(462)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(462)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(462)),
        [sym_optional_pattern] = ACTIONS(SHIFT(462)),
        [sym_is_pattern] = ACTIONS(SHIFT(462)),
        [sym_as_pattern] = ACTIONS(SHIFT(462)),
        [sym__expression] = ACTIONS(SHIFT(462)),
        [sym__type_identifier] = ACTIONS(SHIFT(463)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(464)),
        [anon_sym_let] = ACTIONS(SHIFT(465)),
        [anon_sym_var] = ACTIONS(SHIFT(465)),
        [anon_sym_DOT] = ACTIONS(SHIFT(466)),
        [anon_sym__] = ACTIONS(SHIFT(467)),
        [anon_sym_is] = ACTIONS(SHIFT(468)),
        [sym_identifier] = ACTIONS(SHIFT(469)),
    },
    [466] = {
        [sym_identifier] = ACTIONS(SHIFT(476)),
    },
    [467] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
    },
    [468] = {
        [sym_type] = ACTIONS(SHIFT(470)),
        [sym__type_identifier] = ACTIONS(SHIFT(471)),
        [sym__type_name] = ACTIONS(SHIFT(472)),
        [sym_identifier] = ACTIONS(SHIFT(473)),
    },
    [469] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [470] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [471] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_type, 1)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_type, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [472] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(474)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [473] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_name, 1)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__type_name, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [474] = {
        [sym__type_identifier] = ACTIONS(SHIFT(475)),
        [sym__type_name] = ACTIONS(SHIFT(472)),
        [sym_identifier] = ACTIONS(SHIFT(473)),
    },
    [475] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [476] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(477)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(464)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [477] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [478] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(479)),
        [anon_sym_as] = ACTIONS(SHIFT(480)),
    },
    [479] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [480] = {
        [sym_type] = ACTIONS(SHIFT(481)),
        [sym__type_identifier] = ACTIONS(SHIFT(471)),
        [sym__type_name] = ACTIONS(SHIFT(472)),
        [sym_identifier] = ACTIONS(SHIFT(473)),
    },
    [481] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [482] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(484)),
    },
    [483] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [484] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [485] = {
        [sym_identifier] = ACTIONS(SHIFT(486)),
    },
    [486] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(487)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(464)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [487] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [488] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__pattern_initializer, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__pattern_initializer, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__pattern_initializer, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern_initializer, 2)),
        [anon_sym_EQ] = ACTIONS(SHIFT(499)),
    },
    [489] = {
        [sym__expression] = ACTIONS(SHIFT(497)),
        [sym_identifier] = ACTIONS(SHIFT(498)),
    },
    [490] = {
        [sym_type] = ACTIONS(SHIFT(491)),
        [sym__type_identifier] = ACTIONS(SHIFT(492)),
        [sym__type_name] = ACTIONS(SHIFT(493)),
        [sym_identifier] = ACTIONS(SHIFT(494)),
    },
    [491] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [492] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_type, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [493] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(495)),
    },
    [494] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__type_name, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [495] = {
        [sym__type_identifier] = ACTIONS(SHIFT(496)),
        [sym__type_name] = ACTIONS(SHIFT(493)),
        [sym_identifier] = ACTIONS(SHIFT(494)),
    },
    [496] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [497] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__pattern_initializer, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__pattern_initializer, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__pattern_initializer, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern_initializer, 3)),
    },
    [498] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [499] = {
        [sym__expression] = ACTIONS(SHIFT(500)),
        [sym_identifier] = ACTIONS(SHIFT(498)),
    },
    [500] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__pattern_initializer, 4)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__pattern_initializer, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__pattern_initializer, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern_initializer, 4)),
    },
    [501] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_constant_declaration, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_constant_declaration, 3)),
    },
    [502] = {
        [sym__pattern_initializer] = ACTIONS(SHIFT(503)),
        [sym__pattern] = ACTIONS(SHIFT(461)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(462)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(462)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(462)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(462)),
        [sym_optional_pattern] = ACTIONS(SHIFT(462)),
        [sym_is_pattern] = ACTIONS(SHIFT(462)),
        [sym_as_pattern] = ACTIONS(SHIFT(462)),
        [sym__expression] = ACTIONS(SHIFT(462)),
        [sym__type_identifier] = ACTIONS(SHIFT(463)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(464)),
        [anon_sym_let] = ACTIONS(SHIFT(465)),
        [anon_sym_var] = ACTIONS(SHIFT(465)),
        [anon_sym_DOT] = ACTIONS(SHIFT(466)),
        [anon_sym__] = ACTIONS(SHIFT(467)),
        [anon_sym_is] = ACTIONS(SHIFT(468)),
        [sym_identifier] = ACTIONS(SHIFT(469)),
    },
    [503] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(SHIFT(504)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_constant_declaration_repeat1, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_constant_declaration_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(502)),
    },
    [504] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_constant_declaration_repeat1, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_constant_declaration_repeat1, 3)),
    },
    [505] = {
        [sym__code_block] = ACTIONS(SHIFT(506)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(95)),
    },
    [506] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_while_statement, 3)),
    },
    [507] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(653)),
    },
    [508] = {
        [sym__code_block] = ACTIONS(SHIFT(652)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(95)),
    },
    [509] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__for_init, 1)),
    },
    [510] = {
        [sym__pattern_initializer] = ACTIONS(SHIFT(592)),
        [sym__variable_name] = ACTIONS(SHIFT(593)),
        [sym__pattern] = ACTIONS(SHIFT(594)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(595)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(595)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(595)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(595)),
        [sym_optional_pattern] = ACTIONS(SHIFT(595)),
        [sym_is_pattern] = ACTIONS(SHIFT(595)),
        [sym_as_pattern] = ACTIONS(SHIFT(595)),
        [sym__expression] = ACTIONS(SHIFT(595)),
        [sym__type_identifier] = ACTIONS(SHIFT(596)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(597)),
        [anon_sym_let] = ACTIONS(SHIFT(598)),
        [anon_sym_var] = ACTIONS(SHIFT(598)),
        [anon_sym_DOT] = ACTIONS(SHIFT(599)),
        [anon_sym__] = ACTIONS(SHIFT(600)),
        [anon_sym_is] = ACTIONS(SHIFT(601)),
        [sym_identifier] = ACTIONS(SHIFT(602)),
    },
    [511] = {
        [sym__type_annotation] = ACTIONS(SHIFT(588)),
        [anon_sym_in] = ACTIONS(SHIFT(589)),
        [anon_sym_COLON] = ACTIONS(SHIFT(544)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(538)),
        [anon_sym_as] = ACTIONS(SHIFT(539)),
    },
    [512] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [513] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(569)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(570)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [514] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(585)),
    },
    [515] = {
        [sym__expression] = ACTIONS(SHIFT(580)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(581)),
        [sym_identifier] = ACTIONS(SHIFT(564)),
    },
    [516] = {
        [sym__for_init] = ACTIONS(SHIFT(556)),
        [sym__for_condition] = ACTIONS(SHIFT(557)),
        [sym_variable_declaration] = ACTIONS(SHIFT(509)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(510)),
        [sym__pattern] = ACTIONS(SHIFT(227)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(228)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(228)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(228)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(533)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(228)),
        [sym_optional_pattern] = ACTIONS(SHIFT(228)),
        [sym_is_pattern] = ACTIONS(SHIFT(228)),
        [sym_as_pattern] = ACTIONS(SHIFT(228)),
        [sym__expression] = ACTIONS(SHIFT(558)),
        [sym__expression_list] = ACTIONS(SHIFT(509)),
        [sym__type_identifier] = ACTIONS(SHIFT(230)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(559)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(231)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(534)),
        [anon_sym_let] = ACTIONS(SHIFT(233)),
        [anon_sym_var] = ACTIONS(SHIFT(560)),
        [anon_sym_DOT] = ACTIONS(SHIFT(234)),
        [anon_sym__] = ACTIONS(SHIFT(235)),
        [anon_sym_is] = ACTIONS(SHIFT(236)),
        [sym_identifier] = ACTIONS(SHIFT(561)),
    },
    [517] = {
        [sym__pattern] = ACTIONS(SHIFT(541)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(512)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(512)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(512)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(512)),
        [sym_optional_pattern] = ACTIONS(SHIFT(512)),
        [sym_is_pattern] = ACTIONS(SHIFT(512)),
        [sym_as_pattern] = ACTIONS(SHIFT(512)),
        [sym__expression] = ACTIONS(SHIFT(512)),
        [sym__type_identifier] = ACTIONS(SHIFT(514)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(532)),
        [anon_sym_let] = ACTIONS(SHIFT(518)),
        [anon_sym_var] = ACTIONS(SHIFT(518)),
        [anon_sym_DOT] = ACTIONS(SHIFT(520)),
        [anon_sym__] = ACTIONS(SHIFT(521)),
        [anon_sym_is] = ACTIONS(SHIFT(522)),
        [sym_identifier] = ACTIONS(SHIFT(537)),
    },
    [518] = {
        [sym__pattern] = ACTIONS(SHIFT(536)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(512)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(512)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(512)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(512)),
        [sym_optional_pattern] = ACTIONS(SHIFT(512)),
        [sym_is_pattern] = ACTIONS(SHIFT(512)),
        [sym_as_pattern] = ACTIONS(SHIFT(512)),
        [sym__expression] = ACTIONS(SHIFT(512)),
        [sym__type_identifier] = ACTIONS(SHIFT(514)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(532)),
        [anon_sym_let] = ACTIONS(SHIFT(518)),
        [anon_sym_var] = ACTIONS(SHIFT(518)),
        [anon_sym_DOT] = ACTIONS(SHIFT(520)),
        [anon_sym__] = ACTIONS(SHIFT(521)),
        [anon_sym_is] = ACTIONS(SHIFT(522)),
        [sym_identifier] = ACTIONS(SHIFT(537)),
    },
    [519] = {
        [sym__pattern_initializer] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(536)),
        [sym_wildcard_pattern] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(512)),
        [sym_value_binding_pattern] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(512)),
        [sym_tuple_pattern] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(512)),
        [sym_enum_case_pattern] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(512)),
        [sym_optional_pattern] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(512)),
        [sym_is_pattern] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(512)),
        [sym_as_pattern] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(512)),
        [sym__expression] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(512)),
        [sym__type_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(514)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(532)),
        [anon_sym_let] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(518)),
        [anon_sym_var] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(518)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(520)),
        [anon_sym__] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(521)),
        [anon_sym_is] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(522)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(537)),
    },
    [520] = {
        [sym_identifier] = ACTIONS(SHIFT(530)),
    },
    [521] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
    },
    [522] = {
        [sym_type] = ACTIONS(SHIFT(524)),
        [sym__type_identifier] = ACTIONS(SHIFT(525)),
        [sym__type_name] = ACTIONS(SHIFT(526)),
        [sym_identifier] = ACTIONS(SHIFT(527)),
    },
    [523] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [524] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [525] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [526] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(528)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [527] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [528] = {
        [sym__type_identifier] = ACTIONS(SHIFT(529)),
        [sym__type_name] = ACTIONS(SHIFT(526)),
        [sym_identifier] = ACTIONS(SHIFT(527)),
    },
    [529] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [530] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(531)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(532)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [531] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [532] = {
        [sym__pattern] = ACTIONS(SHIFT(227)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(228)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(228)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(228)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(533)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(228)),
        [sym_optional_pattern] = ACTIONS(SHIFT(228)),
        [sym_is_pattern] = ACTIONS(SHIFT(228)),
        [sym_as_pattern] = ACTIONS(SHIFT(228)),
        [sym__expression] = ACTIONS(SHIFT(228)),
        [sym__type_identifier] = ACTIONS(SHIFT(230)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(231)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(534)),
        [anon_sym_let] = ACTIONS(SHIFT(233)),
        [anon_sym_var] = ACTIONS(SHIFT(233)),
        [anon_sym_DOT] = ACTIONS(SHIFT(234)),
        [anon_sym__] = ACTIONS(SHIFT(235)),
        [anon_sym_is] = ACTIONS(SHIFT(236)),
        [sym_identifier] = ACTIONS(SHIFT(237)),
    },
    [533] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(535)),
    },
    [534] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [535] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [536] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(538)),
        [anon_sym_as] = ACTIONS(SHIFT(539)),
    },
    [537] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [538] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [539] = {
        [sym_type] = ACTIONS(SHIFT(540)),
        [sym__type_identifier] = ACTIONS(SHIFT(525)),
        [sym__type_name] = ACTIONS(SHIFT(526)),
        [sym_identifier] = ACTIONS(SHIFT(527)),
    },
    [540] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [541] = {
        [sym__type_annotation] = ACTIONS(SHIFT(542)),
        [anon_sym_in] = ACTIONS(SHIFT(543)),
        [anon_sym_COLON] = ACTIONS(SHIFT(544)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(538)),
        [anon_sym_as] = ACTIONS(SHIFT(539)),
    },
    [542] = {
        [anon_sym_in] = ACTIONS(SHIFT(553)),
    },
    [543] = {
        [sym__expression] = ACTIONS(SHIFT(551)),
        [sym_identifier] = ACTIONS(SHIFT(444)),
    },
    [544] = {
        [sym_type] = ACTIONS(SHIFT(545)),
        [sym__type_identifier] = ACTIONS(SHIFT(546)),
        [sym__type_name] = ACTIONS(SHIFT(547)),
        [sym_identifier] = ACTIONS(SHIFT(548)),
    },
    [545] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [546] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [547] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(549)),
    },
    [548] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [549] = {
        [sym__type_identifier] = ACTIONS(SHIFT(550)),
        [sym__type_name] = ACTIONS(SHIFT(547)),
        [sym_identifier] = ACTIONS(SHIFT(548)),
    },
    [550] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [551] = {
        [sym__code_block] = ACTIONS(SHIFT(552)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(95)),
    },
    [552] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
    },
    [553] = {
        [sym__expression] = ACTIONS(SHIFT(554)),
        [sym_identifier] = ACTIONS(SHIFT(444)),
    },
    [554] = {
        [sym__code_block] = ACTIONS(SHIFT(555)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(95)),
    },
    [555] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
    },
    [556] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(576)),
    },
    [557] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(574)),
    },
    [558] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(569)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1), SHIFT(570)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [559] = {
        [sym__expression] = ACTIONS(SHIFT(562)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(563)),
        [sym_identifier] = ACTIONS(SHIFT(564)),
    },
    [560] = {
        [sym__pattern_initializer] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(246)),
        [sym_wildcard_pattern] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(228)),
        [sym_value_binding_pattern] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(228)),
        [sym_tuple_pattern] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(228)),
        [sym_enum_case_pattern] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(228)),
        [sym_optional_pattern] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(228)),
        [sym_is_pattern] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(228)),
        [sym_as_pattern] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(228)),
        [sym__expression] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(228)),
        [sym__type_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(230)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(231)),
        [anon_sym_let] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(233)),
        [anon_sym_var] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(233)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(234)),
        [anon_sym__] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(235)),
        [anon_sym_is] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(236)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(237)),
    },
    [561] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [562] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(567)),
    },
    [563] = {
        [sym__expression] = ACTIONS(SHIFT(565)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(566)),
    },
    [564] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [565] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [566] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [567] = {
        [sym__expression] = ACTIONS(SHIFT(568)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(566)),
    },
    [568] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [569] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 2)),
    },
    [570] = {
        [sym__expression] = ACTIONS(SHIFT(571)),
        [sym_identifier] = ACTIONS(SHIFT(572)),
    },
    [571] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(573)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(570)),
    },
    [572] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [573] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 3)),
    },
    [574] = {
        [sym__code_block] = ACTIONS(SHIFT(575)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(95)),
    },
    [575] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_statement, 5)),
    },
    [576] = {
        [sym__expression] = ACTIONS(SHIFT(577)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(567)),
        [sym_identifier] = ACTIONS(SHIFT(564)),
    },
    [577] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(578)),
    },
    [578] = {
        [sym__expression] = ACTIONS(SHIFT(579)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(566)),
    },
    [579] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [580] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(583)),
    },
    [581] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym__expression] = ACTIONS(SHIFT(582)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(444)),
    },
    [582] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [583] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym__expression] = ACTIONS(SHIFT(584)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(444)),
    },
    [584] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [585] = {
        [sym_identifier] = ACTIONS(SHIFT(586)),
    },
    [586] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(587)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(532)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [587] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [588] = {
        [anon_sym_in] = ACTIONS(SHIFT(543)),
    },
    [589] = {
        [sym__expression] = ACTIONS(SHIFT(590)),
        [sym_identifier] = ACTIONS(SHIFT(444)),
    },
    [590] = {
        [sym__code_block] = ACTIONS(SHIFT(591)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(95)),
    },
    [591] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
    },
    [592] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(SHIFT(648)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_variable_declaration, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(649)),
    },
    [593] = {
        [sym__type_annotation] = ACTIONS(SHIFT(635)),
        [anon_sym_COLON] = ACTIONS(SHIFT(636)),
    },
    [594] = {
        [sym__type_annotation] = ACTIONS(SHIFT(622)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__pattern_initializer, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__pattern_initializer, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern_initializer, 1)),
        [anon_sym_EQ] = ACTIONS(SHIFT(623)),
        [anon_sym_COLON] = ACTIONS(SHIFT(624)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(613)),
        [anon_sym_as] = ACTIONS(SHIFT(614)),
    },
    [595] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [596] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(619)),
    },
    [597] = {
        [sym__pattern] = ACTIONS(SHIFT(227)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(228)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(228)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(228)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(616)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(228)),
        [sym_optional_pattern] = ACTIONS(SHIFT(228)),
        [sym_is_pattern] = ACTIONS(SHIFT(228)),
        [sym_as_pattern] = ACTIONS(SHIFT(228)),
        [sym__expression] = ACTIONS(SHIFT(228)),
        [sym__type_identifier] = ACTIONS(SHIFT(230)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(231)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(617)),
        [anon_sym_let] = ACTIONS(SHIFT(233)),
        [anon_sym_var] = ACTIONS(SHIFT(233)),
        [anon_sym_DOT] = ACTIONS(SHIFT(234)),
        [anon_sym__] = ACTIONS(SHIFT(235)),
        [anon_sym_is] = ACTIONS(SHIFT(236)),
        [sym_identifier] = ACTIONS(SHIFT(237)),
    },
    [598] = {
        [sym__pattern] = ACTIONS(SHIFT(611)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(595)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(595)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(595)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(595)),
        [sym_optional_pattern] = ACTIONS(SHIFT(595)),
        [sym_is_pattern] = ACTIONS(SHIFT(595)),
        [sym_as_pattern] = ACTIONS(SHIFT(595)),
        [sym__expression] = ACTIONS(SHIFT(595)),
        [sym__type_identifier] = ACTIONS(SHIFT(596)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(597)),
        [anon_sym_let] = ACTIONS(SHIFT(598)),
        [anon_sym_var] = ACTIONS(SHIFT(598)),
        [anon_sym_DOT] = ACTIONS(SHIFT(599)),
        [anon_sym__] = ACTIONS(SHIFT(600)),
        [anon_sym_is] = ACTIONS(SHIFT(601)),
        [sym_identifier] = ACTIONS(SHIFT(612)),
    },
    [599] = {
        [sym_identifier] = ACTIONS(SHIFT(609)),
    },
    [600] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_wildcard_pattern, 1)),
    },
    [601] = {
        [sym_type] = ACTIONS(SHIFT(603)),
        [sym__type_identifier] = ACTIONS(SHIFT(604)),
        [sym__type_name] = ACTIONS(SHIFT(605)),
        [sym_identifier] = ACTIONS(SHIFT(606)),
    },
    [602] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__variable_name, 1), REDUCE(sym__expression, 1)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__variable_name, 1), REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [603] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [604] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_type, 1)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [605] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(607)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [606] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_name, 1)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [607] = {
        [sym__type_identifier] = ACTIONS(SHIFT(608)),
        [sym__type_name] = ACTIONS(SHIFT(605)),
        [sym_identifier] = ACTIONS(SHIFT(606)),
    },
    [608] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [609] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(610)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(597)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [610] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [611] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(613)),
        [anon_sym_as] = ACTIONS(SHIFT(614)),
    },
    [612] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [613] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [614] = {
        [sym_type] = ACTIONS(SHIFT(615)),
        [sym__type_identifier] = ACTIONS(SHIFT(604)),
        [sym__type_name] = ACTIONS(SHIFT(605)),
        [sym_identifier] = ACTIONS(SHIFT(606)),
    },
    [615] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [616] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(618)),
    },
    [617] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [618] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [619] = {
        [sym_identifier] = ACTIONS(SHIFT(620)),
    },
    [620] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(621)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(597)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [621] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [622] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__pattern_initializer, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__pattern_initializer, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern_initializer, 2)),
        [anon_sym_EQ] = ACTIONS(SHIFT(633)),
    },
    [623] = {
        [sym__expression] = ACTIONS(SHIFT(631)),
        [sym_identifier] = ACTIONS(SHIFT(632)),
    },
    [624] = {
        [sym_type] = ACTIONS(SHIFT(625)),
        [sym__type_identifier] = ACTIONS(SHIFT(626)),
        [sym__type_name] = ACTIONS(SHIFT(627)),
        [sym_identifier] = ACTIONS(SHIFT(628)),
    },
    [625] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [626] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [627] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(629)),
    },
    [628] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [629] = {
        [sym__type_identifier] = ACTIONS(SHIFT(630)),
        [sym__type_name] = ACTIONS(SHIFT(627)),
        [sym_identifier] = ACTIONS(SHIFT(628)),
    },
    [630] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [631] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__pattern_initializer, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__pattern_initializer, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern_initializer, 3)),
    },
    [632] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [633] = {
        [sym__expression] = ACTIONS(SHIFT(634)),
        [sym_identifier] = ACTIONS(SHIFT(632)),
    },
    [634] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__pattern_initializer, 4)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__pattern_initializer, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern_initializer, 4)),
    },
    [635] = {
        [sym__code_block] = ACTIONS(SHIFT(643)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(644)),
    },
    [636] = {
        [sym_type] = ACTIONS(SHIFT(637)),
        [sym__type_identifier] = ACTIONS(SHIFT(638)),
        [sym__type_name] = ACTIONS(SHIFT(639)),
        [sym_identifier] = ACTIONS(SHIFT(640)),
    },
    [637] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [638] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [639] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(641)),
    },
    [640] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [641] = {
        [sym__type_identifier] = ACTIONS(SHIFT(642)),
        [sym__type_name] = ACTIONS(SHIFT(639)),
        [sym_identifier] = ACTIONS(SHIFT(640)),
    },
    [642] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [643] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_variable_declaration, 4)),
    },
    [644] = {
        [sym__statement] = ACTIONS(SHIFT(109)),
        [sym__loop_statement] = ACTIONS(SHIFT(110)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(110)),
        [sym_guard_statement] = ACTIONS(SHIFT(110)),
        [sym_switch_statement] = ACTIONS(SHIFT(110)),
        [sym_labeled_statement] = ACTIONS(SHIFT(110)),
        [sym_break_statement] = ACTIONS(SHIFT(110)),
        [sym_continue_statement] = ACTIONS(SHIFT(110)),
        [sym_return_statement] = ACTIONS(SHIFT(110)),
        [sym_throw_statement] = ACTIONS(SHIFT(110)),
        [sym_defer_statement] = ACTIONS(SHIFT(110)),
        [sym_do_statement] = ACTIONS(SHIFT(110)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(110)),
        [sym_line_control_statement] = ACTIONS(SHIFT(110)),
        [sym__declaration] = ACTIONS(SHIFT(110)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym_typealias_declaration] = ACTIONS(SHIFT(5)),
        [sym_function_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(110)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(645)),
        [anon_sym_for] = ACTIONS(SHIFT(8)),
        [anon_sym_while] = ACTIONS(SHIFT(9)),
        [anon_sym_let] = ACTIONS(SHIFT(10)),
        [anon_sym_var] = ACTIONS(SHIFT(11)),
        [anon_sym_repeat] = ACTIONS(SHIFT(12)),
        [anon_sym_if] = ACTIONS(SHIFT(13)),
        [anon_sym_guard] = ACTIONS(SHIFT(14)),
        [anon_sym_switch] = ACTIONS(SHIFT(15)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(646)),
        [anon_sym_break] = ACTIONS(SHIFT(16)),
        [anon_sym_continue] = ACTIONS(SHIFT(17)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(110)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [anon_sym_typealias] = ACTIONS(SHIFT(25)),
        [anon_sym_func] = ACTIONS(SHIFT(26)),
        [sym_identifier] = ACTIONS(SHIFT(27)),
    },
    [645] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(647)),
    },
    [646] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [647] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [648] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_variable_declaration, 3)),
    },
    [649] = {
        [sym__pattern_initializer] = ACTIONS(SHIFT(650)),
        [sym__pattern] = ACTIONS(SHIFT(594)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(595)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(595)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(595)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(595)),
        [sym_optional_pattern] = ACTIONS(SHIFT(595)),
        [sym_is_pattern] = ACTIONS(SHIFT(595)),
        [sym_as_pattern] = ACTIONS(SHIFT(595)),
        [sym__expression] = ACTIONS(SHIFT(595)),
        [sym__type_identifier] = ACTIONS(SHIFT(596)),
        [sym__type_name] = ACTIONS(SHIFT(208)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(597)),
        [anon_sym_let] = ACTIONS(SHIFT(598)),
        [anon_sym_var] = ACTIONS(SHIFT(598)),
        [anon_sym_DOT] = ACTIONS(SHIFT(599)),
        [anon_sym__] = ACTIONS(SHIFT(600)),
        [anon_sym_is] = ACTIONS(SHIFT(601)),
        [sym_identifier] = ACTIONS(SHIFT(612)),
    },
    [650] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(SHIFT(651)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_constant_declaration_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(649)),
    },
    [651] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_constant_declaration_repeat1, 3)),
    },
    [652] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_statement, 3)),
    },
    [653] = {
        [sym__expression] = ACTIONS(SHIFT(654)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(583)),
        [sym_identifier] = ACTIONS(SHIFT(564)),
    },
    [654] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(655)),
    },
    [655] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym__expression] = ACTIONS(SHIFT(656)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(444)),
    },
    [656] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [657] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(SHIFT(662)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_variable_declaration, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_variable_declaration, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(502)),
    },
    [658] = {
        [sym__type_annotation] = ACTIONS(SHIFT(660)),
        [anon_sym_COLON] = ACTIONS(SHIFT(636)),
    },
    [659] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__variable_name, 1), REDUCE(sym__expression, 1)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__variable_name, 1), REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [660] = {
        [sym__code_block] = ACTIONS(SHIFT(661)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(95)),
    },
    [661] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_variable_declaration, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_variable_declaration, 4)),
    },
    [662] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_variable_declaration, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_variable_declaration, 3)),
    },
    [663] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_break_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_continue_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_return_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_throw_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_defer_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_do_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_build_configuration_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_line_control_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_import_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_constant_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_variable_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__variable_declaration_head] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_typealias_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_function_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_let] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_var] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_break] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_continue] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_fallthrough_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_return] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_throw] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_defer] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_do] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDif] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_import] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_typealias] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_func] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [664] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_swift);
