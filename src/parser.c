#include "tree_sitter/parser.h"

#define STATE_COUNT 516
#define SYMBOL_COUNT 135

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
    sym_variable_declaration,
    sym__variable_declaration_head,
    sym__variable_name,
    sym__pattern,
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
    aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LPAREN_BSLASH_BSLASH_BSLASH_BSLASH_LPAREN_LBRACK_BSLASH_BSLASH0tnr_SQUOTE_BSLASH_DQUOTE_RBRACK_PIPEu_BSLASH_BSLASH_LBRACE_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA8_RBRACE_BSLASH_BSLASH_RBRACE_RPAREN_RPAREN_PIPE_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_BSLASH_BSLASH_BSLASH_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH,
    anon_sym_import,
    anon_sym_typealias,
    anon_sym_struct,
    anon_sym_class,
    anon_sym_enum,
    anon_sym_protocol,
    anon_sym_func,
    anon_sym_DOT,
    sym_wildcard_pattern,
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
    [sym_variable_declaration] = "variable_declaration",
    [sym__variable_declaration_head] = "_variable_declaration_head",
    [sym__variable_name] = "_variable_name",
    [sym__pattern] = "_pattern",
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
    [aux_sym__expression_list_repeat1] = "_expression_list_repeat1",
    [ts_builtin_sym_error] = "ERROR",
    [ts_builtin_sym_end] = "END",
    [anon_sym_SEMI] = ";",
    [aux_sym_SLASH_BSLASHn_SLASH] = "/\n/",
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
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LPAREN_BSLASH_BSLASH_BSLASH_BSLASH_LPAREN_LBRACK_BSLASH_BSLASH0tnr_SQUOTE_BSLASH_DQUOTE_RBRACK_PIPEu_BSLASH_BSLASH_LBRACE_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA8_RBRACE_BSLASH_BSLASH_RBRACE_RPAREN_RPAREN_PIPE_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_BSLASH_BSLASH_BSLASH_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = "/\"((\\\\([\\0tnr'\"]|u\\{[a-fA-F0-9]{1,8}\\}))|[^\"\\\\])*\"/",
    [anon_sym_import] = "import",
    [anon_sym_typealias] = "typealias",
    [anon_sym_struct] = "struct",
    [anon_sym_class] = "class",
    [anon_sym_enum] = "enum",
    [anon_sym_protocol] = "protocol",
    [anon_sym_func] = "func",
    [anon_sym_DOT] = ".",
    [sym_wildcard_pattern] = "wildcard_pattern",
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
    [sym_variable_declaration] = TSNodeTypeNamed,
    [sym__variable_declaration_head] = TSNodeTypeHidden,
    [sym__variable_name] = TSNodeTypeHidden,
    [sym__pattern] = TSNodeTypeHidden,
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
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LPAREN_BSLASH_BSLASH_BSLASH_BSLASH_LPAREN_LBRACK_BSLASH_BSLASH0tnr_SQUOTE_BSLASH_DQUOTE_RBRACK_PIPEu_BSLASH_BSLASH_LBRACE_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA8_RBRACE_BSLASH_BSLASH_RBRACE_RPAREN_RPAREN_PIPE_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_BSLASH_BSLASH_BSLASH_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = TSNodeTypeHidden,
    [anon_sym_import] = TSNodeTypeAnonymous,
    [anon_sym_typealias] = TSNodeTypeAnonymous,
    [anon_sym_struct] = TSNodeTypeAnonymous,
    [anon_sym_class] = TSNodeTypeAnonymous,
    [anon_sym_enum] = TSNodeTypeAnonymous,
    [anon_sym_protocol] = TSNodeTypeAnonymous,
    [anon_sym_func] = TSNodeTypeAnonymous,
    [anon_sym_DOT] = TSNodeTypeAnonymous,
    [sym_wildcard_pattern] = TSNodeTypeNamed,
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
                ADVANCE(46);
            if (lookahead == 'i')
                ADVANCE(51);
            if (lookahead == 'l')
                ADVANCE(58);
            if (lookahead == 'r')
                ADVANCE(61);
            if (lookahead == 's')
                ADVANCE(71);
            if (lookahead == 't')
                ADVANCE(77);
            if (lookahead == 'v')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
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
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(34);
            if (lookahead == 'o')
                ADVANCE(44);
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
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(47);
            ACCEPT_TOKEN(sym_identifier);
        case 47:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(48);
            ACCEPT_TOKEN(sym_identifier);
        case 48:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(49);
            ACCEPT_TOKEN(sym_identifier);
        case 49:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'd')
                ADVANCE(50);
            ACCEPT_TOKEN(sym_identifier);
        case 50:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_guard);
        case 51:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'f')
                ADVANCE(52);
            if (lookahead == 'm')
                ADVANCE(53);
            ACCEPT_TOKEN(sym_identifier);
        case 52:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_if);
        case 53:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(54);
            ACCEPT_TOKEN(sym_identifier);
        case 54:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(55);
            ACCEPT_TOKEN(sym_identifier);
        case 55:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(56);
            ACCEPT_TOKEN(sym_identifier);
        case 56:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(57);
            ACCEPT_TOKEN(sym_identifier);
        case 57:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_import);
        case 58:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
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
            ACCEPT_TOKEN(anon_sym_let);
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
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(63);
            if (lookahead == 't')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier);
        case 63:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(64);
            ACCEPT_TOKEN(sym_identifier);
        case 64:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(65);
            ACCEPT_TOKEN(sym_identifier);
        case 65:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(66);
            ACCEPT_TOKEN(sym_identifier);
        case 66:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_repeat);
        case 67:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(68);
            ACCEPT_TOKEN(sym_identifier);
        case 68:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(69);
            ACCEPT_TOKEN(sym_identifier);
        case 69:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(70);
            ACCEPT_TOKEN(sym_identifier);
        case 70:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_return);
        case 71:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'w')
                ADVANCE(72);
            ACCEPT_TOKEN(sym_identifier);
        case 72:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(73);
            ACCEPT_TOKEN(sym_identifier);
        case 73:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(74);
            ACCEPT_TOKEN(sym_identifier);
        case 74:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(75);
            ACCEPT_TOKEN(sym_identifier);
        case 75:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(76);
            ACCEPT_TOKEN(sym_identifier);
        case 76:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_switch);
        case 77:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(78);
            ACCEPT_TOKEN(sym_identifier);
        case 78:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(79);
            ACCEPT_TOKEN(sym_identifier);
        case 79:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier);
        case 80:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'w')
                ADVANCE(81);
            ACCEPT_TOKEN(sym_identifier);
        case 81:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_throw);
        case 82:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(83);
            ACCEPT_TOKEN(sym_identifier);
        case 83:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(84);
            ACCEPT_TOKEN(sym_identifier);
        case 84:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_var);
        case 85:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(86);
            ACCEPT_TOKEN(sym_identifier);
        case 86:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(87);
            ACCEPT_TOKEN(sym_identifier);
        case 87:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(88);
            ACCEPT_TOKEN(sym_identifier);
        case 88:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(89);
            ACCEPT_TOKEN(sym_identifier);
        case 89:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_while);
        case 90:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(90);
            LEX_ERROR();
        case 91:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(91);
            if (lookahead == '\n')
                ADVANCE(92);
            if (lookahead == ';')
                ADVANCE(93);
            LEX_ERROR();
        case 92:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 93:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 94:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(94);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            LEX_ERROR();
        case 95:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(95);
            if (lookahead == '(')
                ADVANCE(96);
            if (lookahead == '.')
                ADVANCE(97);
            if (lookahead == ';')
                ADVANCE(93);
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
                ADVANCE(98);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'c')
                ADVANCE(99);
            if (lookahead == 'i')
                ADVANCE(103);
            if (lookahead == 'l')
                ADVANCE(58);
            if (lookahead == 'v')
                ADVANCE(82);
            LEX_ERROR();
        case 96:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 97:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 98:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_wildcard_pattern);
        case 99:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(100);
            ACCEPT_TOKEN(sym_identifier);
        case 100:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(101);
            ACCEPT_TOKEN(sym_identifier);
        case 101:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(102);
            ACCEPT_TOKEN(sym_identifier);
        case 102:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_case);
        case 103:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(104);
            ACCEPT_TOKEN(sym_identifier);
        case 104:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_is);
        case 105:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(105);
            if (lookahead == '#')
                ADVANCE(106);
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
                ADVANCE(99);
            if (lookahead == 'l')
                ADVANCE(58);
            if (lookahead == 'v')
                ADVANCE(82);
            LEX_ERROR();
        case 106:
            if (lookahead == 'a')
                ADVANCE(107);
            LEX_ERROR();
        case 107:
            if (lookahead == 'v')
                ADVANCE(108);
            LEX_ERROR();
        case 108:
            if (lookahead == 'a')
                ADVANCE(109);
            LEX_ERROR();
        case 109:
            if (lookahead == 'i')
                ADVANCE(110);
            LEX_ERROR();
        case 110:
            if (lookahead == 'l')
                ADVANCE(111);
            LEX_ERROR();
        case 111:
            if (lookahead == 'a')
                ADVANCE(112);
            LEX_ERROR();
        case 112:
            if (lookahead == 'b')
                ADVANCE(113);
            LEX_ERROR();
        case 113:
            if (lookahead == 'l')
                ADVANCE(114);
            LEX_ERROR();
        case 114:
            if (lookahead == 'e')
                ADVANCE(115);
            LEX_ERROR();
        case 115:
            ACCEPT_TOKEN(anon_sym_POUNDavailable);
        case 116:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(116);
            if (lookahead == '(')
                ADVANCE(96);
            if (lookahead == '.')
                ADVANCE(97);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(98);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(103);
            if (lookahead == 'l')
                ADVANCE(58);
            if (lookahead == 'v')
                ADVANCE(82);
            LEX_ERROR();
        case 117:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(117);
            if (lookahead == '{')
                ADVANCE(118);
            LEX_ERROR();
        case 118:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 119:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(119);
            if (lookahead == '\n')
                ADVANCE(120);
            if (lookahead == ';')
                ADVANCE(93);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            LEX_ERROR();
        case 120:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 121:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(121);
            if (lookahead == '!')
                ADVANCE(122);
            if (lookahead == '(')
                ADVANCE(96);
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
                ADVANCE(123);
            if (lookahead == 'f')
                ADVANCE(127);
            if (lookahead == 'o')
                ADVANCE(132);
            if (lookahead == 't')
                ADVANCE(134);
            LEX_ERROR();
        case 122:
            ACCEPT_TOKEN(anon_sym_BANG);
        case 123:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(124);
            ACCEPT_TOKEN(sym_identifier);
        case 124:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(125);
            ACCEPT_TOKEN(sym_identifier);
        case 125:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(126);
            ACCEPT_TOKEN(sym_identifier);
        case 126:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_arch);
        case 127:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(128);
            ACCEPT_TOKEN(sym_identifier);
        case 128:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(129);
            ACCEPT_TOKEN(sym_identifier);
        case 129:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(130);
            ACCEPT_TOKEN(sym_identifier);
        case 130:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(131);
            ACCEPT_TOKEN(sym_identifier);
        case 131:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_false);
        case 132:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(133);
            ACCEPT_TOKEN(sym_identifier);
        case 133:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_os);
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
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(136);
            ACCEPT_TOKEN(sym_identifier);
        case 136:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(137);
            ACCEPT_TOKEN(sym_identifier);
        case 137:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_true);
        case 138:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(138);
            if (lookahead == '\n')
                ADVANCE(139);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(140);
            if (lookahead == ';')
                ADVANCE(93);
            LEX_ERROR();
        case 139:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 140:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(140);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH);
        case 141:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(141);
            if (lookahead == '!')
                ADVANCE(142);
            if (lookahead == '%')
                ADVANCE(142);
            if (lookahead == '&')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(142);
            if (lookahead == '+')
                ADVANCE(142);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(142);
            if (lookahead == '<')
                ADVANCE(142);
            if (lookahead == '=')
                ADVANCE(142);
            if (lookahead == '>')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(142);
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
                ADVANCE(142);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'c')
                ADVANCE(143);
            if (lookahead == 'e')
                ADVANCE(148);
            if (lookahead == 'f')
                ADVANCE(152);
            if (lookahead == 'p')
                ADVANCE(156);
            if (lookahead == 's')
                ADVANCE(164);
            if (lookahead == 't')
                ADVANCE(170);
            if (lookahead == 'v')
                ADVANCE(82);
            if (lookahead == '|')
                ADVANCE(142);
            if (lookahead == '~')
                ADVANCE(142);
            LEX_ERROR();
        case 142:
            if (lookahead == '!')
                ADVANCE(142);
            if (lookahead == '%')
                ADVANCE(142);
            if (lookahead == '&')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(142);
            if (lookahead == '+')
                ADVANCE(142);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(142);
            if (lookahead == '<')
                ADVANCE(142);
            if (lookahead == '=')
                ADVANCE(142);
            if (lookahead == '>')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(142);
            if (lookahead == '^')
                ADVANCE(142);
            if (lookahead == '|')
                ADVANCE(142);
            if (lookahead == '~')
                ADVANCE(142);
            ACCEPT_TOKEN(sym_operator);
        case 143:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(144);
            ACCEPT_TOKEN(sym_identifier);
        case 144:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(145);
            ACCEPT_TOKEN(sym_identifier);
        case 145:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(146);
            ACCEPT_TOKEN(sym_identifier);
        case 146:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(147);
            ACCEPT_TOKEN(sym_identifier);
        case 147:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_class);
        case 148:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(149);
            ACCEPT_TOKEN(sym_identifier);
        case 149:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(150);
            ACCEPT_TOKEN(sym_identifier);
        case 150:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'm')
                ADVANCE(151);
            ACCEPT_TOKEN(sym_identifier);
        case 151:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_enum);
        case 152:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(153);
            ACCEPT_TOKEN(sym_identifier);
        case 153:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(154);
            ACCEPT_TOKEN(sym_identifier);
        case 154:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(155);
            ACCEPT_TOKEN(sym_identifier);
        case 155:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_func);
        case 156:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(157);
            ACCEPT_TOKEN(sym_identifier);
        case 157:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(158);
            ACCEPT_TOKEN(sym_identifier);
        case 158:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(159);
            ACCEPT_TOKEN(sym_identifier);
        case 159:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(160);
            ACCEPT_TOKEN(sym_identifier);
        case 160:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(161);
            ACCEPT_TOKEN(sym_identifier);
        case 161:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(162);
            ACCEPT_TOKEN(sym_identifier);
        case 162:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(163);
            ACCEPT_TOKEN(sym_identifier);
        case 163:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_protocol);
        case 164:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(165);
            ACCEPT_TOKEN(sym_identifier);
        case 165:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(166);
            ACCEPT_TOKEN(sym_identifier);
        case 166:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(167);
            ACCEPT_TOKEN(sym_identifier);
        case 167:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(168);
            ACCEPT_TOKEN(sym_identifier);
        case 168:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(169);
            ACCEPT_TOKEN(sym_identifier);
        case 169:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_struct);
        case 170:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(10);
            if (lookahead == 'y')
                ADVANCE(171);
            ACCEPT_TOKEN(sym_identifier);
        case 171:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(172);
            ACCEPT_TOKEN(sym_identifier);
        case 172:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(173);
            ACCEPT_TOKEN(sym_identifier);
        case 173:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(174);
            ACCEPT_TOKEN(sym_identifier);
        case 174:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(175);
            ACCEPT_TOKEN(sym_identifier);
        case 175:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(176);
            ACCEPT_TOKEN(sym_identifier);
        case 176:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(177);
            ACCEPT_TOKEN(sym_identifier);
        case 177:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(178);
            ACCEPT_TOKEN(sym_identifier);
        case 178:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_typealias);
        case 179:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(179);
            if (lookahead == '\n')
                ADVANCE(180);
            if (lookahead == ':')
                ADVANCE(181);
            if (lookahead == ';')
                ADVANCE(93);
            LEX_ERROR();
        case 180:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 181:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 182:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(182);
            if (lookahead == 'f')
                ADVANCE(183);
            if (lookahead == 'i')
                ADVANCE(186);
            if (lookahead == 'r')
                ADVANCE(188);
            if (lookahead == 'w')
                ADVANCE(194);
            LEX_ERROR();
        case 183:
            if (lookahead == 'o')
                ADVANCE(184);
            LEX_ERROR();
        case 184:
            if (lookahead == 'r')
                ADVANCE(185);
            LEX_ERROR();
        case 185:
            ACCEPT_TOKEN(anon_sym_for);
        case 186:
            if (lookahead == 'f')
                ADVANCE(187);
            LEX_ERROR();
        case 187:
            ACCEPT_TOKEN(anon_sym_if);
        case 188:
            if (lookahead == 'e')
                ADVANCE(189);
            LEX_ERROR();
        case 189:
            if (lookahead == 'p')
                ADVANCE(190);
            LEX_ERROR();
        case 190:
            if (lookahead == 'e')
                ADVANCE(191);
            LEX_ERROR();
        case 191:
            if (lookahead == 'a')
                ADVANCE(192);
            LEX_ERROR();
        case 192:
            if (lookahead == 't')
                ADVANCE(193);
            LEX_ERROR();
        case 193:
            ACCEPT_TOKEN(anon_sym_repeat);
        case 194:
            if (lookahead == 'h')
                ADVANCE(195);
            LEX_ERROR();
        case 195:
            if (lookahead == 'i')
                ADVANCE(196);
            LEX_ERROR();
        case 196:
            if (lookahead == 'l')
                ADVANCE(197);
            LEX_ERROR();
        case 197:
            if (lookahead == 'e')
                ADVANCE(198);
            LEX_ERROR();
        case 198:
            ACCEPT_TOKEN(anon_sym_while);
        case 199:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(199);
            if (lookahead == '!')
                ADVANCE(142);
            if (lookahead == '%')
                ADVANCE(142);
            if (lookahead == '&')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(142);
            if (lookahead == '+')
                ADVANCE(142);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(142);
            if (lookahead == '<')
                ADVANCE(142);
            if (lookahead == '=')
                ADVANCE(142);
            if (lookahead == '>')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(142);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '^')
                ADVANCE(142);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == '|')
                ADVANCE(142);
            if (lookahead == '~')
                ADVANCE(142);
            LEX_ERROR();
        case 200:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(200);
            if (lookahead == '\n')
                ADVANCE(201);
            if (lookahead == '.')
                ADVANCE(97);
            if (lookahead == ';')
                ADVANCE(93);
            LEX_ERROR();
        case 201:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 202:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(202);
            if (lookahead == '\"')
                ADVANCE(203);
            LEX_ERROR();
        case 203:
            if (lookahead == '\"')
                ADVANCE(204);
            if (lookahead == '\\')
                ADVANCE(205);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(203);
            LEX_ERROR();
        case 204:
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LPAREN_BSLASH_BSLASH_BSLASH_BSLASH_LPAREN_LBRACK_BSLASH_BSLASH0tnr_SQUOTE_BSLASH_DQUOTE_RBRACK_PIPEu_BSLASH_BSLASH_LBRACE_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA8_RBRACE_BSLASH_BSLASH_RBRACE_RPAREN_RPAREN_PIPE_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_BSLASH_BSLASH_BSLASH_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH);
        case 205:
            if (lookahead == '\\')
                ADVANCE(206);
            LEX_ERROR();
        case 206:
            if ((lookahead == '\"') ||
                (lookahead == '\'') ||
                (lookahead == '0') ||
                (lookahead == '\\') ||
                (lookahead == 'n') ||
                (lookahead == 'r') ||
                (lookahead == 't'))
                ADVANCE(203);
            if (lookahead == 'u')
                ADVANCE(207);
            LEX_ERROR();
        case 207:
            if (lookahead == '\\')
                ADVANCE(208);
            LEX_ERROR();
        case 208:
            if (lookahead == '{')
                ADVANCE(209);
            LEX_ERROR();
        case 209:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(210);
            LEX_ERROR();
        case 210:
            if (lookahead == '{')
                ADVANCE(211);
            LEX_ERROR();
        case 211:
            if (lookahead == '1')
                ADVANCE(212);
            LEX_ERROR();
        case 212:
            if (lookahead == ',')
                ADVANCE(213);
            LEX_ERROR();
        case 213:
            if (lookahead == '8')
                ADVANCE(214);
            LEX_ERROR();
        case 214:
            if (lookahead == '}')
                ADVANCE(215);
            LEX_ERROR();
        case 215:
            if (lookahead == '\\')
                ADVANCE(216);
            LEX_ERROR();
        case 216:
            if (lookahead == '}')
                ADVANCE(203);
            LEX_ERROR();
        case 217:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(217);
            if (lookahead == '#')
                ADVANCE(218);
            if (lookahead == '&')
                ADVANCE(229);
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
                ADVANCE(46);
            if (lookahead == 'i')
                ADVANCE(51);
            if (lookahead == 'l')
                ADVANCE(58);
            if (lookahead == 'r')
                ADVANCE(61);
            if (lookahead == 's')
                ADVANCE(71);
            if (lookahead == 't')
                ADVANCE(77);
            if (lookahead == 'v')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '|')
                ADVANCE(231);
            LEX_ERROR();
        case 218:
            if (lookahead == 'e')
                ADVANCE(219);
            if (lookahead == 'i')
                ADVANCE(4);
            if (lookahead == 'l')
                ADVANCE(6);
            LEX_ERROR();
        case 219:
            if (lookahead == 'l')
                ADVANCE(220);
            if (lookahead == 'n')
                ADVANCE(225);
            LEX_ERROR();
        case 220:
            if (lookahead == 's')
                ADVANCE(221);
            LEX_ERROR();
        case 221:
            if (lookahead == 'e')
                ADVANCE(222);
            LEX_ERROR();
        case 222:
            if (lookahead == 'i')
                ADVANCE(223);
            ACCEPT_TOKEN(anon_sym_POUNDelse);
        case 223:
            if (lookahead == 'f')
                ADVANCE(224);
            LEX_ERROR();
        case 224:
            ACCEPT_TOKEN(anon_sym_POUNDelseif);
        case 225:
            if (lookahead == 'd')
                ADVANCE(226);
            LEX_ERROR();
        case 226:
            if (lookahead == 'i')
                ADVANCE(227);
            LEX_ERROR();
        case 227:
            if (lookahead == 'f')
                ADVANCE(228);
            LEX_ERROR();
        case 228:
            ACCEPT_TOKEN(anon_sym_POUNDendif);
        case 229:
            if (lookahead == '&')
                ADVANCE(230);
            LEX_ERROR();
        case 230:
            ACCEPT_TOKEN(anon_sym_AMP_AMP);
        case 231:
            if (lookahead == '|')
                ADVANCE(232);
            LEX_ERROR();
        case 232:
            ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
        case 233:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(233);
            if (lookahead == '(')
                ADVANCE(96);
            LEX_ERROR();
        case 234:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(234);
            if (lookahead == 'a')
                ADVANCE(235);
            if (lookahead == 'i')
                ADVANCE(240);
            if (lookahead == 'x')
                ADVANCE(244);
            LEX_ERROR();
        case 235:
            if (lookahead == 'r')
                ADVANCE(236);
            LEX_ERROR();
        case 236:
            if (lookahead == 'm')
                ADVANCE(237);
            LEX_ERROR();
        case 237:
            if (lookahead == '6')
                ADVANCE(238);
            ACCEPT_TOKEN(anon_sym_arm);
        case 238:
            if (lookahead == '4')
                ADVANCE(239);
            LEX_ERROR();
        case 239:
            ACCEPT_TOKEN(anon_sym_arm64);
        case 240:
            if (lookahead == '3')
                ADVANCE(241);
            LEX_ERROR();
        case 241:
            if (lookahead == '8')
                ADVANCE(242);
            LEX_ERROR();
        case 242:
            if (lookahead == '6')
                ADVANCE(243);
            LEX_ERROR();
        case 243:
            ACCEPT_TOKEN(anon_sym_i386);
        case 244:
            if (lookahead == '8')
                ADVANCE(245);
            LEX_ERROR();
        case 245:
            if (lookahead == '6')
                ADVANCE(246);
            LEX_ERROR();
        case 246:
            if (lookahead == '_')
                ADVANCE(247);
            LEX_ERROR();
        case 247:
            if (lookahead == '6')
                ADVANCE(248);
            LEX_ERROR();
        case 248:
            if (lookahead == '4')
                ADVANCE(249);
            LEX_ERROR();
        case 249:
            ACCEPT_TOKEN(anon_sym_x86_64);
        case 250:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(250);
            if (lookahead == ')')
                ADVANCE(251);
            LEX_ERROR();
        case 251:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 252:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(252);
            if (lookahead == 'O')
                ADVANCE(253);
            if (lookahead == 'i')
                ADVANCE(256);
            if (lookahead == 't')
                ADVANCE(259);
            if (lookahead == 'w')
                ADVANCE(263);
            LEX_ERROR();
        case 253:
            if (lookahead == 'S')
                ADVANCE(254);
            LEX_ERROR();
        case 254:
            if (lookahead == 'X')
                ADVANCE(255);
            LEX_ERROR();
        case 255:
            ACCEPT_TOKEN(anon_sym_OSX);
        case 256:
            if (lookahead == 'O')
                ADVANCE(257);
            LEX_ERROR();
        case 257:
            if (lookahead == 'S')
                ADVANCE(258);
            LEX_ERROR();
        case 258:
            ACCEPT_TOKEN(anon_sym_iOS);
        case 259:
            if (lookahead == 'v')
                ADVANCE(260);
            LEX_ERROR();
        case 260:
            if (lookahead == 'O')
                ADVANCE(261);
            LEX_ERROR();
        case 261:
            if (lookahead == 'S')
                ADVANCE(262);
            LEX_ERROR();
        case 262:
            ACCEPT_TOKEN(anon_sym_tvOS);
        case 263:
            if (lookahead == 'a')
                ADVANCE(264);
            LEX_ERROR();
        case 264:
            if (lookahead == 't')
                ADVANCE(265);
            LEX_ERROR();
        case 265:
            if (lookahead == 'c')
                ADVANCE(266);
            LEX_ERROR();
        case 266:
            if (lookahead == 'h')
                ADVANCE(267);
            LEX_ERROR();
        case 267:
            if (lookahead == 'O')
                ADVANCE(268);
            LEX_ERROR();
        case 268:
            if (lookahead == 'S')
                ADVANCE(269);
            LEX_ERROR();
        case 269:
            ACCEPT_TOKEN(anon_sym_watchOS);
        case 270:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(270);
            if (lookahead == '&')
                ADVANCE(229);
            if (lookahead == ')')
                ADVANCE(251);
            if (lookahead == '|')
                ADVANCE(231);
            LEX_ERROR();
        case 271:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(271);
            if (lookahead == '#')
                ADVANCE(218);
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
                ADVANCE(46);
            if (lookahead == 'i')
                ADVANCE(51);
            if (lookahead == 'l')
                ADVANCE(58);
            if (lookahead == 'r')
                ADVANCE(61);
            if (lookahead == 's')
                ADVANCE(71);
            if (lookahead == 't')
                ADVANCE(77);
            if (lookahead == 'v')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 272:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(272);
            if (lookahead == '#')
                ADVANCE(273);
            LEX_ERROR();
        case 273:
            if (lookahead == 'e')
                ADVANCE(219);
            LEX_ERROR();
        case 274:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(274);
            if (lookahead == '#')
                ADVANCE(275);
            LEX_ERROR();
        case 275:
            if (lookahead == 'e')
                ADVANCE(276);
            LEX_ERROR();
        case 276:
            if (lookahead == 'l')
                ADVANCE(277);
            if (lookahead == 'n')
                ADVANCE(225);
            LEX_ERROR();
        case 277:
            if (lookahead == 's')
                ADVANCE(278);
            LEX_ERROR();
        case 278:
            if (lookahead == 'e')
                ADVANCE(279);
            LEX_ERROR();
        case 279:
            ACCEPT_TOKEN(anon_sym_POUNDelse);
        case 280:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(280);
            if (lookahead == '#')
                ADVANCE(281);
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
                ADVANCE(46);
            if (lookahead == 'i')
                ADVANCE(51);
            if (lookahead == 'l')
                ADVANCE(58);
            if (lookahead == 'r')
                ADVANCE(61);
            if (lookahead == 's')
                ADVANCE(71);
            if (lookahead == 't')
                ADVANCE(77);
            if (lookahead == 'v')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 281:
            if (lookahead == 'e')
                ADVANCE(282);
            if (lookahead == 'i')
                ADVANCE(4);
            if (lookahead == 'l')
                ADVANCE(6);
            LEX_ERROR();
        case 282:
            if (lookahead == 'n')
                ADVANCE(225);
            LEX_ERROR();
        case 283:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(283);
            if (lookahead == '#')
                ADVANCE(284);
            LEX_ERROR();
        case 284:
            if (lookahead == 'e')
                ADVANCE(282);
            LEX_ERROR();
        case 285:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(285);
            if (lookahead == '\n')
                ADVANCE(286);
            if (lookahead == ';')
                ADVANCE(93);
            if (lookahead == 'c')
                ADVANCE(287);
            LEX_ERROR();
        case 286:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 287:
            if (lookahead == 'a')
                ADVANCE(288);
            LEX_ERROR();
        case 288:
            if (lookahead == 't')
                ADVANCE(289);
            LEX_ERROR();
        case 289:
            if (lookahead == 'c')
                ADVANCE(290);
            LEX_ERROR();
        case 290:
            if (lookahead == 'h')
                ADVANCE(291);
            LEX_ERROR();
        case 291:
            ACCEPT_TOKEN(anon_sym_catch);
        case 292:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(292);
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
                ADVANCE(46);
            if (lookahead == 'i')
                ADVANCE(51);
            if (lookahead == 'l')
                ADVANCE(58);
            if (lookahead == 'r')
                ADVANCE(61);
            if (lookahead == 's')
                ADVANCE(71);
            if (lookahead == 't')
                ADVANCE(77);
            if (lookahead == 'v')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '}')
                ADVANCE(293);
            LEX_ERROR();
        case 293:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 294:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(294);
            if (lookahead == '}')
                ADVANCE(293);
            LEX_ERROR();
        case 295:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(295);
            if (lookahead == '(')
                ADVANCE(96);
            if (lookahead == '.')
                ADVANCE(97);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(98);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(103);
            if (lookahead == 'l')
                ADVANCE(58);
            if (lookahead == 'v')
                ADVANCE(82);
            if (lookahead == '{')
                ADVANCE(118);
            LEX_ERROR();
        case 296:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(296);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            if (lookahead == '{')
                ADVANCE(118);
            LEX_ERROR();
        case 297:
            ACCEPT_TOKEN(anon_sym_QMARK);
        case 298:
            if (lookahead == 's')
                ADVANCE(299);
            LEX_ERROR();
        case 299:
            ACCEPT_TOKEN(anon_sym_as);
        case 300:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(300);
            if (lookahead == '.')
                ADVANCE(97);
            LEX_ERROR();
        case 301:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(301);
            if (lookahead == '(')
                ADVANCE(96);
            if (lookahead == ')')
                ADVANCE(251);
            if (lookahead == '.')
                ADVANCE(97);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(98);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(103);
            if (lookahead == 'l')
                ADVANCE(58);
            if (lookahead == 'v')
                ADVANCE(82);
            LEX_ERROR();
        case 302:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(302);
            if (lookahead == '.')
                ADVANCE(97);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            if (lookahead == '{')
                ADVANCE(118);
            LEX_ERROR();
        case 303:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(303);
            if (lookahead == '(')
                ADVANCE(96);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            if (lookahead == '{')
                ADVANCE(118);
            LEX_ERROR();
        case 304:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(304);
            if (lookahead == ')')
                ADVANCE(251);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            LEX_ERROR();
        case 305:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 306:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(306);
            if (lookahead == ')')
                ADVANCE(251);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == '.')
                ADVANCE(97);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            LEX_ERROR();
        case 307:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(307);
            if (lookahead == '(')
                ADVANCE(96);
            if (lookahead == ')')
                ADVANCE(251);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            LEX_ERROR();
        case 308:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(308);
            if (lookahead == 'c')
                ADVANCE(309);
            if (lookahead == 'd')
                ADVANCE(313);
            if (lookahead == '}')
                ADVANCE(293);
            LEX_ERROR();
        case 309:
            if (lookahead == 'a')
                ADVANCE(310);
            LEX_ERROR();
        case 310:
            if (lookahead == 's')
                ADVANCE(311);
            LEX_ERROR();
        case 311:
            if (lookahead == 'e')
                ADVANCE(312);
            LEX_ERROR();
        case 312:
            ACCEPT_TOKEN(anon_sym_case);
        case 313:
            if (lookahead == 'e')
                ADVANCE(314);
            LEX_ERROR();
        case 314:
            if (lookahead == 'f')
                ADVANCE(315);
            LEX_ERROR();
        case 315:
            if (lookahead == 'a')
                ADVANCE(316);
            LEX_ERROR();
        case 316:
            if (lookahead == 'u')
                ADVANCE(317);
            LEX_ERROR();
        case 317:
            if (lookahead == 'l')
                ADVANCE(318);
            LEX_ERROR();
        case 318:
            if (lookahead == 't')
                ADVANCE(319);
            LEX_ERROR();
        case 319:
            ACCEPT_TOKEN(anon_sym_default);
        case 320:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(320);
            if (lookahead == ':')
                ADVANCE(181);
            LEX_ERROR();
        case 321:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(321);
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
                ADVANCE(322);
            if (lookahead == 'd')
                ADVANCE(323);
            if (lookahead == 'f')
                ADVANCE(33);
            if (lookahead == 'g')
                ADVANCE(46);
            if (lookahead == 'i')
                ADVANCE(51);
            if (lookahead == 'l')
                ADVANCE(58);
            if (lookahead == 'r')
                ADVANCE(61);
            if (lookahead == 's')
                ADVANCE(71);
            if (lookahead == 't')
                ADVANCE(77);
            if (lookahead == 'v')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '}')
                ADVANCE(293);
            LEX_ERROR();
        case 322:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(100);
            if (lookahead == 'o')
                ADVANCE(20);
            ACCEPT_TOKEN(sym_identifier);
        case 323:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(324);
            if (lookahead == 'o')
                ADVANCE(32);
            ACCEPT_TOKEN(sym_identifier);
        case 324:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'f')
                ADVANCE(325);
            ACCEPT_TOKEN(sym_identifier);
        case 325:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(326);
            if (lookahead == 'e')
                ADVANCE(30);
            ACCEPT_TOKEN(sym_identifier);
        case 326:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(327);
            ACCEPT_TOKEN(sym_identifier);
        case 327:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(328);
            ACCEPT_TOKEN(sym_identifier);
        case 328:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(329);
            ACCEPT_TOKEN(sym_identifier);
        case 329:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_default);
        case 330:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(330);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == ':')
                ADVANCE(181);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            LEX_ERROR();
        case 331:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(331);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == '.')
                ADVANCE(97);
            if (lookahead == ':')
                ADVANCE(181);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            LEX_ERROR();
        case 332:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(332);
            if (lookahead == '(')
                ADVANCE(96);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == ':')
                ADVANCE(181);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            LEX_ERROR();
        case 333:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(333);
            if (lookahead == 'e')
                ADVANCE(334);
            LEX_ERROR();
        case 334:
            if (lookahead == 'l')
                ADVANCE(335);
            LEX_ERROR();
        case 335:
            if (lookahead == 's')
                ADVANCE(336);
            LEX_ERROR();
        case 336:
            if (lookahead == 'e')
                ADVANCE(337);
            LEX_ERROR();
        case 337:
            ACCEPT_TOKEN(anon_sym_else);
        case 338:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(338);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == 'e')
                ADVANCE(334);
            LEX_ERROR();
        case 339:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(339);
            if (lookahead == '=')
                ADVANCE(340);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            LEX_ERROR();
        case 340:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 341:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(341);
            if (lookahead == '.')
                ADVANCE(97);
            if (lookahead == '=')
                ADVANCE(340);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            LEX_ERROR();
        case 342:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(342);
            if (lookahead == '(')
                ADVANCE(96);
            if (lookahead == '=')
                ADVANCE(340);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            LEX_ERROR();
        case 343:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(343);
            if (lookahead == '*')
                ADVANCE(344);
            if (lookahead == 'O')
                ADVANCE(345);
            if (lookahead == 'i')
                ADVANCE(368);
            if (lookahead == 't')
                ADVANCE(259);
            if (lookahead == 'w')
                ADVANCE(263);
            LEX_ERROR();
        case 344:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 345:
            if (lookahead == 'S')
                ADVANCE(346);
            LEX_ERROR();
        case 346:
            if (lookahead == 'X')
                ADVANCE(347);
            LEX_ERROR();
        case 347:
            if (lookahead == 'A')
                ADVANCE(348);
            ACCEPT_TOKEN(anon_sym_OSX);
        case 348:
            if (lookahead == 'p')
                ADVANCE(349);
            LEX_ERROR();
        case 349:
            if (lookahead == 'p')
                ADVANCE(350);
            LEX_ERROR();
        case 350:
            if (lookahead == 'l')
                ADVANCE(351);
            LEX_ERROR();
        case 351:
            if (lookahead == 'i')
                ADVANCE(352);
            LEX_ERROR();
        case 352:
            if (lookahead == 'c')
                ADVANCE(353);
            LEX_ERROR();
        case 353:
            if (lookahead == 'a')
                ADVANCE(354);
            LEX_ERROR();
        case 354:
            if (lookahead == 't')
                ADVANCE(355);
            LEX_ERROR();
        case 355:
            if (lookahead == 'i')
                ADVANCE(356);
            LEX_ERROR();
        case 356:
            if (lookahead == 'o')
                ADVANCE(357);
            LEX_ERROR();
        case 357:
            if (lookahead == 'n')
                ADVANCE(358);
            LEX_ERROR();
        case 358:
            if (lookahead == 'E')
                ADVANCE(359);
            LEX_ERROR();
        case 359:
            if (lookahead == 'x')
                ADVANCE(360);
            LEX_ERROR();
        case 360:
            if (lookahead == 't')
                ADVANCE(361);
            LEX_ERROR();
        case 361:
            if (lookahead == 'e')
                ADVANCE(362);
            LEX_ERROR();
        case 362:
            if (lookahead == 'n')
                ADVANCE(363);
            LEX_ERROR();
        case 363:
            if (lookahead == 's')
                ADVANCE(364);
            LEX_ERROR();
        case 364:
            if (lookahead == 'i')
                ADVANCE(365);
            LEX_ERROR();
        case 365:
            if (lookahead == 'o')
                ADVANCE(366);
            LEX_ERROR();
        case 366:
            if (lookahead == 'n')
                ADVANCE(367);
            LEX_ERROR();
        case 367:
            ACCEPT_TOKEN(anon_sym_OSXApplicationExtension);
        case 368:
            if (lookahead == 'O')
                ADVANCE(369);
            LEX_ERROR();
        case 369:
            if (lookahead == 'S')
                ADVANCE(370);
            LEX_ERROR();
        case 370:
            if (lookahead == 'A')
                ADVANCE(371);
            ACCEPT_TOKEN(anon_sym_iOS);
        case 371:
            if (lookahead == 'p')
                ADVANCE(372);
            LEX_ERROR();
        case 372:
            if (lookahead == 'p')
                ADVANCE(373);
            LEX_ERROR();
        case 373:
            if (lookahead == 'l')
                ADVANCE(374);
            LEX_ERROR();
        case 374:
            if (lookahead == 'i')
                ADVANCE(375);
            LEX_ERROR();
        case 375:
            if (lookahead == 'c')
                ADVANCE(376);
            LEX_ERROR();
        case 376:
            if (lookahead == 'a')
                ADVANCE(377);
            LEX_ERROR();
        case 377:
            if (lookahead == 't')
                ADVANCE(378);
            LEX_ERROR();
        case 378:
            if (lookahead == 'i')
                ADVANCE(379);
            LEX_ERROR();
        case 379:
            if (lookahead == 'o')
                ADVANCE(380);
            LEX_ERROR();
        case 380:
            if (lookahead == 'n')
                ADVANCE(381);
            LEX_ERROR();
        case 381:
            if (lookahead == 'E')
                ADVANCE(382);
            LEX_ERROR();
        case 382:
            if (lookahead == 'x')
                ADVANCE(383);
            LEX_ERROR();
        case 383:
            if (lookahead == 't')
                ADVANCE(384);
            LEX_ERROR();
        case 384:
            if (lookahead == 'e')
                ADVANCE(385);
            LEX_ERROR();
        case 385:
            if (lookahead == 'n')
                ADVANCE(386);
            LEX_ERROR();
        case 386:
            if (lookahead == 's')
                ADVANCE(387);
            LEX_ERROR();
        case 387:
            if (lookahead == 'i')
                ADVANCE(388);
            LEX_ERROR();
        case 388:
            if (lookahead == 'o')
                ADVANCE(389);
            LEX_ERROR();
        case 389:
            if (lookahead == 'n')
                ADVANCE(390);
            LEX_ERROR();
        case 390:
            ACCEPT_TOKEN(anon_sym_iOSApplicationExtension);
        case 391:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(391);
            if (lookahead == ')')
                ADVANCE(251);
            if (lookahead == ',')
                ADVANCE(305);
            LEX_ERROR();
        case 392:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(392);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(393);
            LEX_ERROR();
        case 393:
            if (lookahead == '.')
                ADVANCE(394);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(393);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 394:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(395);
            LEX_ERROR();
        case 395:
            if (lookahead == '.')
                ADVANCE(396);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(395);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 396:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(397);
            LEX_ERROR();
        case 397:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(397);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 398:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(398);
            if (lookahead == '#')
                ADVANCE(106);
            if (lookahead == 'c')
                ADVANCE(309);
            if (lookahead == 'l')
                ADVANCE(399);
            if (lookahead == 'v')
                ADVANCE(402);
            LEX_ERROR();
        case 399:
            if (lookahead == 'e')
                ADVANCE(400);
            LEX_ERROR();
        case 400:
            if (lookahead == 't')
                ADVANCE(401);
            LEX_ERROR();
        case 401:
            ACCEPT_TOKEN(anon_sym_let);
        case 402:
            if (lookahead == 'a')
                ADVANCE(403);
            LEX_ERROR();
        case 403:
            if (lookahead == 'r')
                ADVANCE(404);
            LEX_ERROR();
        case 404:
            ACCEPT_TOKEN(anon_sym_var);
        case 405:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(405);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == '{')
                ADVANCE(118);
            LEX_ERROR();
        case 406:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(406);
            if (lookahead == '\n')
                ADVANCE(407);
            if (lookahead == ';')
                ADVANCE(93);
            if (lookahead == 'e')
                ADVANCE(334);
            LEX_ERROR();
        case 407:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 408:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(408);
            if (lookahead == 'i')
                ADVANCE(186);
            if (lookahead == '{')
                ADVANCE(118);
            LEX_ERROR();
        case 409:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(409);
            if (lookahead == 'w')
                ADVANCE(194);
            LEX_ERROR();
        case 410:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(410);
            if (lookahead == '\n')
                ADVANCE(411);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == ';')
                ADVANCE(93);
            if (lookahead == '=')
                ADVANCE(340);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            LEX_ERROR();
        case 411:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 412:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(412);
            if (lookahead == '\n')
                ADVANCE(413);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == '.')
                ADVANCE(97);
            if (lookahead == ';')
                ADVANCE(93);
            if (lookahead == '=')
                ADVANCE(340);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            LEX_ERROR();
        case 413:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 414:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(414);
            if (lookahead == '\n')
                ADVANCE(415);
            if (lookahead == '(')
                ADVANCE(96);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == ';')
                ADVANCE(93);
            if (lookahead == '=')
                ADVANCE(340);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            LEX_ERROR();
        case 415:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 416:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(416);
            if (lookahead == '\n')
                ADVANCE(417);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == ';')
                ADVANCE(93);
            LEX_ERROR();
        case 417:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 418:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(418);
            if (lookahead == ';')
                ADVANCE(93);
            LEX_ERROR();
        case 419:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(419);
            if (lookahead == ':')
                ADVANCE(181);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            if (lookahead == 'i')
                ADVANCE(420);
            LEX_ERROR();
        case 420:
            if (lookahead == 'n')
                ADVANCE(421);
            LEX_ERROR();
        case 421:
            ACCEPT_TOKEN(anon_sym_in);
        case 422:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(422);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == ':')
                ADVANCE(181);
            if (lookahead == ';')
                ADVANCE(93);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            if (lookahead == 'i')
                ADVANCE(420);
            LEX_ERROR();
        case 423:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(423);
            if (lookahead == ';')
                ADVANCE(93);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            LEX_ERROR();
        case 424:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(424);
            if (lookahead == '(')
                ADVANCE(96);
            if (lookahead == ')')
                ADVANCE(251);
            if (lookahead == '.')
                ADVANCE(97);
            if (lookahead == ';')
                ADVANCE(93);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(98);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(103);
            if (lookahead == 'l')
                ADVANCE(58);
            if (lookahead == 'v')
                ADVANCE(82);
            LEX_ERROR();
        case 425:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(425);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == '.')
                ADVANCE(97);
            if (lookahead == ':')
                ADVANCE(181);
            if (lookahead == ';')
                ADVANCE(93);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            if (lookahead == 'i')
                ADVANCE(420);
            LEX_ERROR();
        case 426:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(426);
            if (lookahead == '.')
                ADVANCE(97);
            if (lookahead == ':')
                ADVANCE(181);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            if (lookahead == 'i')
                ADVANCE(420);
            LEX_ERROR();
        case 427:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(427);
            if (lookahead == '(')
                ADVANCE(96);
            if (lookahead == ':')
                ADVANCE(181);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            if (lookahead == 'i')
                ADVANCE(420);
            LEX_ERROR();
        case 428:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(428);
            if (lookahead == 'i')
                ADVANCE(420);
            LEX_ERROR();
        case 429:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(429);
            if (lookahead == '.')
                ADVANCE(97);
            if (lookahead == 'i')
                ADVANCE(420);
            LEX_ERROR();
        case 430:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(430);
            if (lookahead == ')')
                ADVANCE(251);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == ';')
                ADVANCE(93);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            LEX_ERROR();
        case 431:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(431);
            if (lookahead == ')')
                ADVANCE(251);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == '.')
                ADVANCE(97);
            if (lookahead == ';')
                ADVANCE(93);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            LEX_ERROR();
        case 432:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(432);
            if (lookahead == ')')
                ADVANCE(251);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            LEX_ERROR();
        case 433:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(433);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == ';')
                ADVANCE(93);
            LEX_ERROR();
        case 434:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(434);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == '{')
                ADVANCE(118);
            LEX_ERROR();
        case 435:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(435);
            if (lookahead == '.')
                ADVANCE(97);
            if (lookahead == '{')
                ADVANCE(118);
            LEX_ERROR();
        case 436:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(436);
            if (lookahead == '\n')
                ADVANCE(437);
            if (lookahead == '!')
                ADVANCE(438);
            if (lookahead == '\"')
                ADVANCE(203);
            if (lookahead == '#')
                ADVANCE(439);
            if (lookahead == '%')
                ADVANCE(142);
            if (lookahead == '&')
                ADVANCE(440);
            if (lookahead == '(')
                ADVANCE(96);
            if (lookahead == ')')
                ADVANCE(251);
            if (lookahead == '*')
                ADVANCE(442);
            if (lookahead == '+')
                ADVANCE(142);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '.')
                ADVANCE(97);
            if (lookahead == '/')
                ADVANCE(142);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(443);
            if (lookahead == ':')
                ADVANCE(181);
            if (lookahead == ';')
                ADVANCE(93);
            if (lookahead == '<')
                ADVANCE(142);
            if (lookahead == '=')
                ADVANCE(444);
            if (lookahead == '>')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(445);
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
                ADVANCE(446);
            if (lookahead == '^')
                ADVANCE(142);
            if (lookahead == '_')
                ADVANCE(98);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'a')
                ADVANCE(469);
            if (lookahead == 'b')
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(475);
            if (lookahead == 'd')
                ADVANCE(323);
            if (lookahead == 'e')
                ADVANCE(480);
            if (lookahead == 'f')
                ADVANCE(484);
            if (lookahead == 'g')
                ADVANCE(46);
            if (lookahead == 'i')
                ADVANCE(487);
            if (lookahead == 'l')
                ADVANCE(58);
            if (lookahead == 'o')
                ADVANCE(132);
            if (lookahead == 'p')
                ADVANCE(156);
            if (lookahead == 'r')
                ADVANCE(61);
            if (lookahead == 's')
                ADVANCE(514);
            if (lookahead == 't')
                ADVANCE(515);
            if (lookahead == 'v')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(519);
            if (lookahead == 'x')
                ADVANCE(526);
            if (lookahead == '{')
                ADVANCE(118);
            if (lookahead == '|')
                ADVANCE(532);
            if (lookahead == '}')
                ADVANCE(293);
            if (lookahead == '~')
                ADVANCE(142);
            LEX_ERROR();
        case 437:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 438:
            if (lookahead == '!')
                ADVANCE(142);
            if (lookahead == '%')
                ADVANCE(142);
            if (lookahead == '&')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(142);
            if (lookahead == '+')
                ADVANCE(142);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(142);
            if (lookahead == '<')
                ADVANCE(142);
            if (lookahead == '=')
                ADVANCE(142);
            if (lookahead == '>')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(142);
            if (lookahead == '^')
                ADVANCE(142);
            if (lookahead == '|')
                ADVANCE(142);
            if (lookahead == '~')
                ADVANCE(142);
            ACCEPT_TOKEN(anon_sym_BANG);
        case 439:
            if (lookahead == 'a')
                ADVANCE(107);
            if (lookahead == 'e')
                ADVANCE(219);
            if (lookahead == 'i')
                ADVANCE(4);
            if (lookahead == 'l')
                ADVANCE(6);
            LEX_ERROR();
        case 440:
            if (lookahead == '!')
                ADVANCE(142);
            if (lookahead == '%')
                ADVANCE(142);
            if (lookahead == '&')
                ADVANCE(441);
            if (lookahead == '*')
                ADVANCE(142);
            if (lookahead == '+')
                ADVANCE(142);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(142);
            if (lookahead == '<')
                ADVANCE(142);
            if (lookahead == '=')
                ADVANCE(142);
            if (lookahead == '>')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(142);
            if (lookahead == '^')
                ADVANCE(142);
            if (lookahead == '|')
                ADVANCE(142);
            if (lookahead == '~')
                ADVANCE(142);
            ACCEPT_TOKEN(sym_operator);
        case 441:
            if (lookahead == '!')
                ADVANCE(142);
            if (lookahead == '%')
                ADVANCE(142);
            if (lookahead == '&')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(142);
            if (lookahead == '+')
                ADVANCE(142);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(142);
            if (lookahead == '<')
                ADVANCE(142);
            if (lookahead == '=')
                ADVANCE(142);
            if (lookahead == '>')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(142);
            if (lookahead == '^')
                ADVANCE(142);
            if (lookahead == '|')
                ADVANCE(142);
            if (lookahead == '~')
                ADVANCE(142);
            ACCEPT_TOKEN(anon_sym_AMP_AMP);
        case 442:
            if (lookahead == '!')
                ADVANCE(142);
            if (lookahead == '%')
                ADVANCE(142);
            if (lookahead == '&')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(142);
            if (lookahead == '+')
                ADVANCE(142);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(142);
            if (lookahead == '<')
                ADVANCE(142);
            if (lookahead == '=')
                ADVANCE(142);
            if (lookahead == '>')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(142);
            if (lookahead == '^')
                ADVANCE(142);
            if (lookahead == '|')
                ADVANCE(142);
            if (lookahead == '~')
                ADVANCE(142);
            ACCEPT_TOKEN(anon_sym_STAR);
        case 443:
            if (lookahead == '.')
                ADVANCE(394);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(443);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 444:
            if (lookahead == '!')
                ADVANCE(142);
            if (lookahead == '%')
                ADVANCE(142);
            if (lookahead == '&')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(142);
            if (lookahead == '+')
                ADVANCE(142);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(142);
            if (lookahead == '<')
                ADVANCE(142);
            if (lookahead == '=')
                ADVANCE(142);
            if (lookahead == '>')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(142);
            if (lookahead == '^')
                ADVANCE(142);
            if (lookahead == '|')
                ADVANCE(142);
            if (lookahead == '~')
                ADVANCE(142);
            ACCEPT_TOKEN(anon_sym_EQ);
        case 445:
            if (lookahead == '!')
                ADVANCE(142);
            if (lookahead == '%')
                ADVANCE(142);
            if (lookahead == '&')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(142);
            if (lookahead == '+')
                ADVANCE(142);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(142);
            if (lookahead == '<')
                ADVANCE(142);
            if (lookahead == '=')
                ADVANCE(142);
            if (lookahead == '>')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(142);
            if (lookahead == '^')
                ADVANCE(142);
            if (lookahead == '|')
                ADVANCE(142);
            if (lookahead == '~')
                ADVANCE(142);
            ACCEPT_TOKEN(anon_sym_QMARK);
        case 446:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'S')
                ADVANCE(447);
            ACCEPT_TOKEN(sym_identifier);
        case 447:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'W') ||
                (lookahead == 'Y') ||
                (lookahead == 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'X')
                ADVANCE(448);
            ACCEPT_TOKEN(sym_identifier);
        case 448:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == 'A')
                ADVANCE(449);
            if (('B' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_OSX);
        case 449:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(450);
            ACCEPT_TOKEN(sym_identifier);
        case 450:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(451);
            ACCEPT_TOKEN(sym_identifier);
        case 451:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(452);
            ACCEPT_TOKEN(sym_identifier);
        case 452:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(453);
            ACCEPT_TOKEN(sym_identifier);
        case 453:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(454);
            ACCEPT_TOKEN(sym_identifier);
        case 454:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(455);
            ACCEPT_TOKEN(sym_identifier);
        case 455:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(456);
            ACCEPT_TOKEN(sym_identifier);
        case 456:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(457);
            ACCEPT_TOKEN(sym_identifier);
        case 457:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(458);
            ACCEPT_TOKEN(sym_identifier);
        case 458:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(459);
            ACCEPT_TOKEN(sym_identifier);
        case 459:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'D') ||
                ('F' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'E')
                ADVANCE(460);
            ACCEPT_TOKEN(sym_identifier);
        case 460:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(10);
            if (lookahead == 'x')
                ADVANCE(461);
            ACCEPT_TOKEN(sym_identifier);
        case 461:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(462);
            ACCEPT_TOKEN(sym_identifier);
        case 462:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(463);
            ACCEPT_TOKEN(sym_identifier);
        case 463:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(464);
            ACCEPT_TOKEN(sym_identifier);
        case 464:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(465);
            ACCEPT_TOKEN(sym_identifier);
        case 465:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(466);
            ACCEPT_TOKEN(sym_identifier);
        case 466:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(467);
            ACCEPT_TOKEN(sym_identifier);
        case 467:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(468);
            ACCEPT_TOKEN(sym_identifier);
        case 468:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_OSXApplicationExtension);
        case 469:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(470);
            if (lookahead == 's')
                ADVANCE(474);
            ACCEPT_TOKEN(sym_identifier);
        case 470:
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
                ADVANCE(125);
            if (lookahead == 'm')
                ADVANCE(471);
            ACCEPT_TOKEN(sym_identifier);
        case 471:
            if (('0' <= lookahead && lookahead <= '5') ||
                ('7' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '6')
                ADVANCE(472);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_arm);
        case 472:
            if (('0' <= lookahead && lookahead <= '3') ||
                ('5' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '4')
                ADVANCE(473);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 473:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_arm64);
        case 474:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_as);
        case 475:
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
                ADVANCE(476);
            if (lookahead == 'l')
                ADVANCE(144);
            if (lookahead == 'o')
                ADVANCE(20);
            ACCEPT_TOKEN(sym_identifier);
        case 476:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(101);
            if (lookahead == 't')
                ADVANCE(477);
            ACCEPT_TOKEN(sym_identifier);
        case 477:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(478);
            ACCEPT_TOKEN(sym_identifier);
        case 478:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(479);
            ACCEPT_TOKEN(sym_identifier);
        case 479:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_catch);
        case 480:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(481);
            if (lookahead == 'n')
                ADVANCE(149);
            ACCEPT_TOKEN(sym_identifier);
        case 481:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(482);
            ACCEPT_TOKEN(sym_identifier);
        case 482:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(483);
            ACCEPT_TOKEN(sym_identifier);
        case 483:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_else);
        case 484:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(485);
            if (lookahead == 'o')
                ADVANCE(44);
            if (lookahead == 'u')
                ADVANCE(153);
            ACCEPT_TOKEN(sym_identifier);
        case 485:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(486);
            ACCEPT_TOKEN(sym_identifier);
        case 486:
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
                ADVANCE(130);
            ACCEPT_TOKEN(sym_identifier);
        case 487:
            if (('0' <= lookahead && lookahead <= '2') ||
                ('4' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '3')
                ADVANCE(488);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'O')
                ADVANCE(491);
            if (lookahead == 'f')
                ADVANCE(52);
            if (lookahead == 'm')
                ADVANCE(53);
            if (lookahead == 'n')
                ADVANCE(513);
            if (lookahead == 's')
                ADVANCE(104);
            ACCEPT_TOKEN(sym_identifier);
        case 488:
            if (('0' <= lookahead && lookahead <= '7') ||
                (lookahead == '9'))
                ADVANCE(10);
            if (lookahead == '8')
                ADVANCE(489);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 489:
            if (('0' <= lookahead && lookahead <= '5') ||
                ('7' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '6')
                ADVANCE(490);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 490:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_i386);
        case 491:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'S')
                ADVANCE(492);
            ACCEPT_TOKEN(sym_identifier);
        case 492:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == 'A')
                ADVANCE(493);
            if (('B' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_iOS);
        case 493:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(494);
            ACCEPT_TOKEN(sym_identifier);
        case 494:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(495);
            ACCEPT_TOKEN(sym_identifier);
        case 495:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(496);
            ACCEPT_TOKEN(sym_identifier);
        case 496:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(497);
            ACCEPT_TOKEN(sym_identifier);
        case 497:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(498);
            ACCEPT_TOKEN(sym_identifier);
        case 498:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(499);
            ACCEPT_TOKEN(sym_identifier);
        case 499:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(500);
            ACCEPT_TOKEN(sym_identifier);
        case 500:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(501);
            ACCEPT_TOKEN(sym_identifier);
        case 501:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(502);
            ACCEPT_TOKEN(sym_identifier);
        case 502:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(503);
            ACCEPT_TOKEN(sym_identifier);
        case 503:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'D') ||
                ('F' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'E')
                ADVANCE(504);
            ACCEPT_TOKEN(sym_identifier);
        case 504:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(10);
            if (lookahead == 'x')
                ADVANCE(505);
            ACCEPT_TOKEN(sym_identifier);
        case 505:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(506);
            ACCEPT_TOKEN(sym_identifier);
        case 506:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(507);
            ACCEPT_TOKEN(sym_identifier);
        case 507:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(508);
            ACCEPT_TOKEN(sym_identifier);
        case 508:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(509);
            ACCEPT_TOKEN(sym_identifier);
        case 509:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(510);
            ACCEPT_TOKEN(sym_identifier);
        case 510:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(511);
            ACCEPT_TOKEN(sym_identifier);
        case 511:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(512);
            ACCEPT_TOKEN(sym_identifier);
        case 512:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_iOSApplicationExtension);
        case 513:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_in);
        case 514:
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
                ADVANCE(165);
            if (lookahead == 'w')
                ADVANCE(72);
            ACCEPT_TOKEN(sym_identifier);
        case 515:
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
                ADVANCE(78);
            if (lookahead == 'r')
                ADVANCE(135);
            if (lookahead == 'v')
                ADVANCE(516);
            if (lookahead == 'y')
                ADVANCE(171);
            ACCEPT_TOKEN(sym_identifier);
        case 516:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'O')
                ADVANCE(517);
            ACCEPT_TOKEN(sym_identifier);
        case 517:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'S')
                ADVANCE(518);
            ACCEPT_TOKEN(sym_identifier);
        case 518:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_tvOS);
        case 519:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(520);
            if (lookahead == 'h')
                ADVANCE(86);
            ACCEPT_TOKEN(sym_identifier);
        case 520:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(521);
            ACCEPT_TOKEN(sym_identifier);
        case 521:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(522);
            ACCEPT_TOKEN(sym_identifier);
        case 522:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(523);
            ACCEPT_TOKEN(sym_identifier);
        case 523:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'O')
                ADVANCE(524);
            ACCEPT_TOKEN(sym_identifier);
        case 524:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'S')
                ADVANCE(525);
            ACCEPT_TOKEN(sym_identifier);
        case 525:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_watchOS);
        case 526:
            if (('0' <= lookahead && lookahead <= '7') ||
                (lookahead == '9'))
                ADVANCE(10);
            if (lookahead == '8')
                ADVANCE(527);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 527:
            if (('0' <= lookahead && lookahead <= '5') ||
                ('7' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '6')
                ADVANCE(528);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 528:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(529);
            ACCEPT_TOKEN(sym_identifier);
        case 529:
            if (('0' <= lookahead && lookahead <= '5') ||
                ('7' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '6')
                ADVANCE(530);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 530:
            if (('0' <= lookahead && lookahead <= '3') ||
                ('5' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '4')
                ADVANCE(531);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 531:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_x86_64);
        case 532:
            if (lookahead == '!')
                ADVANCE(142);
            if (lookahead == '%')
                ADVANCE(142);
            if (lookahead == '&')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(142);
            if (lookahead == '+')
                ADVANCE(142);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(142);
            if (lookahead == '<')
                ADVANCE(142);
            if (lookahead == '=')
                ADVANCE(142);
            if (lookahead == '>')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(142);
            if (lookahead == '^')
                ADVANCE(142);
            if (lookahead == '|')
                ADVANCE(533);
            if (lookahead == '~')
                ADVANCE(142);
            ACCEPT_TOKEN(sym_operator);
        case 533:
            if (lookahead == '!')
                ADVANCE(142);
            if (lookahead == '%')
                ADVANCE(142);
            if (lookahead == '&')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(142);
            if (lookahead == '+')
                ADVANCE(142);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(142);
            if (lookahead == '<')
                ADVANCE(142);
            if (lookahead == '=')
                ADVANCE(142);
            if (lookahead == '>')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(142);
            if (lookahead == '^')
                ADVANCE(142);
            if (lookahead == '|')
                ADVANCE(142);
            if (lookahead == '~')
                ADVANCE(142);
            ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
        case ts_lex_state_error:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(436);
            if (lookahead == '\n')
                ADVANCE(437);
            if (lookahead == '!')
                ADVANCE(438);
            if (lookahead == '\"')
                ADVANCE(203);
            if (lookahead == '#')
                ADVANCE(439);
            if (lookahead == '%')
                ADVANCE(142);
            if (lookahead == '&')
                ADVANCE(440);
            if (lookahead == '(')
                ADVANCE(96);
            if (lookahead == ')')
                ADVANCE(251);
            if (lookahead == '*')
                ADVANCE(442);
            if (lookahead == '+')
                ADVANCE(142);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '.')
                ADVANCE(97);
            if (lookahead == '/')
                ADVANCE(142);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(443);
            if (lookahead == ':')
                ADVANCE(181);
            if (lookahead == ';')
                ADVANCE(93);
            if (lookahead == '<')
                ADVANCE(142);
            if (lookahead == '=')
                ADVANCE(444);
            if (lookahead == '>')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(445);
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
                ADVANCE(446);
            if (lookahead == '^')
                ADVANCE(142);
            if (lookahead == '_')
                ADVANCE(98);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'a')
                ADVANCE(469);
            if (lookahead == 'b')
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(475);
            if (lookahead == 'd')
                ADVANCE(323);
            if (lookahead == 'e')
                ADVANCE(480);
            if (lookahead == 'f')
                ADVANCE(484);
            if (lookahead == 'g')
                ADVANCE(46);
            if (lookahead == 'i')
                ADVANCE(487);
            if (lookahead == 'l')
                ADVANCE(58);
            if (lookahead == 'o')
                ADVANCE(132);
            if (lookahead == 'p')
                ADVANCE(156);
            if (lookahead == 'r')
                ADVANCE(61);
            if (lookahead == 's')
                ADVANCE(514);
            if (lookahead == 't')
                ADVANCE(515);
            if (lookahead == 'v')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(519);
            if (lookahead == 'x')
                ADVANCE(526);
            if (lookahead == '{')
                ADVANCE(118);
            if (lookahead == '|')
                ADVANCE(532);
            if (lookahead == '}')
                ADVANCE(293);
            if (lookahead == '~')
                ADVANCE(142);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 1,
    [1] = 90,
    [2] = 1,
    [3] = 91,
    [4] = 91,
    [5] = 91,
    [6] = 94,
    [7] = 90,
    [8] = 95,
    [9] = 105,
    [10] = 116,
    [11] = 94,
    [12] = 117,
    [13] = 105,
    [14] = 105,
    [15] = 94,
    [16] = 119,
    [17] = 119,
    [18] = 119,
    [19] = 119,
    [20] = 117,
    [21] = 117,
    [22] = 121,
    [23] = 138,
    [24] = 141,
    [25] = 179,
    [26] = 182,
    [27] = 91,
    [28] = 199,
    [29] = 200,
    [30] = 91,
    [31] = 199,
    [32] = 200,
    [33] = 91,
    [34] = 200,
    [35] = 91,
    [36] = 202,
    [37] = 91,
    [38] = 217,
    [39] = 217,
    [40] = 121,
    [41] = 233,
    [42] = 233,
    [43] = 121,
    [44] = 217,
    [45] = 217,
    [46] = 121,
    [47] = 121,
    [48] = 217,
    [49] = 217,
    [50] = 234,
    [51] = 250,
    [52] = 217,
    [53] = 252,
    [54] = 270,
    [55] = 270,
    [56] = 121,
    [57] = 233,
    [58] = 233,
    [59] = 121,
    [60] = 270,
    [61] = 270,
    [62] = 121,
    [63] = 121,
    [64] = 270,
    [65] = 270,
    [66] = 234,
    [67] = 250,
    [68] = 270,
    [69] = 252,
    [70] = 270,
    [71] = 270,
    [72] = 217,
    [73] = 271,
    [74] = 91,
    [75] = 272,
    [76] = 274,
    [77] = 121,
    [78] = 280,
    [79] = 91,
    [80] = 280,
    [81] = 91,
    [82] = 283,
    [83] = 91,
    [84] = 91,
    [85] = 280,
    [86] = 283,
    [87] = 217,
    [88] = 272,
    [89] = 274,
    [90] = 274,
    [91] = 280,
    [92] = 283,
    [93] = 91,
    [94] = 274,
    [95] = 280,
    [96] = 283,
    [97] = 91,
    [98] = 271,
    [99] = 272,
    [100] = 285,
    [101] = 292,
    [102] = 292,
    [103] = 91,
    [104] = 294,
    [105] = 285,
    [106] = 285,
    [107] = 292,
    [108] = 294,
    [109] = 285,
    [110] = 91,
    [111] = 295,
    [112] = 285,
    [113] = 296,
    [114] = 296,
    [115] = 300,
    [116] = 300,
    [117] = 301,
    [118] = 116,
    [119] = 94,
    [120] = 94,
    [121] = 302,
    [122] = 296,
    [123] = 296,
    [124] = 302,
    [125] = 302,
    [126] = 94,
    [127] = 296,
    [128] = 303,
    [129] = 296,
    [130] = 296,
    [131] = 296,
    [132] = 94,
    [133] = 296,
    [134] = 304,
    [135] = 304,
    [136] = 250,
    [137] = 300,
    [138] = 301,
    [139] = 296,
    [140] = 116,
    [141] = 94,
    [142] = 94,
    [143] = 306,
    [144] = 304,
    [145] = 304,
    [146] = 306,
    [147] = 306,
    [148] = 94,
    [149] = 304,
    [150] = 307,
    [151] = 304,
    [152] = 304,
    [153] = 304,
    [154] = 94,
    [155] = 304,
    [156] = 250,
    [157] = 304,
    [158] = 304,
    [159] = 94,
    [160] = 307,
    [161] = 304,
    [162] = 296,
    [163] = 250,
    [164] = 116,
    [165] = 304,
    [166] = 250,
    [167] = 94,
    [168] = 300,
    [169] = 300,
    [170] = 94,
    [171] = 303,
    [172] = 296,
    [173] = 285,
    [174] = 91,
    [175] = 91,
    [176] = 292,
    [177] = 294,
    [178] = 91,
    [179] = 91,
    [180] = 91,
    [181] = 91,
    [182] = 91,
    [183] = 91,
    [184] = 91,
    [185] = 117,
    [186] = 117,
    [187] = 308,
    [188] = 308,
    [189] = 294,
    [190] = 116,
    [191] = 91,
    [192] = 320,
    [193] = 321,
    [194] = 321,
    [195] = 91,
    [196] = 308,
    [197] = 321,
    [198] = 308,
    [199] = 330,
    [200] = 330,
    [201] = 300,
    [202] = 301,
    [203] = 116,
    [204] = 94,
    [205] = 94,
    [206] = 331,
    [207] = 330,
    [208] = 330,
    [209] = 331,
    [210] = 331,
    [211] = 94,
    [212] = 330,
    [213] = 332,
    [214] = 330,
    [215] = 330,
    [216] = 330,
    [217] = 94,
    [218] = 330,
    [219] = 250,
    [220] = 330,
    [221] = 330,
    [222] = 94,
    [223] = 332,
    [224] = 330,
    [225] = 320,
    [226] = 116,
    [227] = 321,
    [228] = 308,
    [229] = 330,
    [230] = 320,
    [231] = 321,
    [232] = 308,
    [233] = 91,
    [234] = 294,
    [235] = 333,
    [236] = 338,
    [237] = 338,
    [238] = 338,
    [239] = 338,
    [240] = 116,
    [241] = 233,
    [242] = 116,
    [243] = 338,
    [244] = 338,
    [245] = 339,
    [246] = 339,
    [247] = 300,
    [248] = 301,
    [249] = 116,
    [250] = 94,
    [251] = 94,
    [252] = 341,
    [253] = 339,
    [254] = 339,
    [255] = 341,
    [256] = 341,
    [257] = 94,
    [258] = 339,
    [259] = 342,
    [260] = 339,
    [261] = 339,
    [262] = 339,
    [263] = 94,
    [264] = 339,
    [265] = 250,
    [266] = 339,
    [267] = 339,
    [268] = 94,
    [269] = 342,
    [270] = 339,
    [271] = 94,
    [272] = 338,
    [273] = 338,
    [274] = 116,
    [275] = 338,
    [276] = 339,
    [277] = 94,
    [278] = 338,
    [279] = 338,
    [280] = 338,
    [281] = 343,
    [282] = 391,
    [283] = 392,
    [284] = 391,
    [285] = 250,
    [286] = 338,
    [287] = 343,
    [288] = 391,
    [289] = 392,
    [290] = 391,
    [291] = 250,
    [292] = 250,
    [293] = 338,
    [294] = 250,
    [295] = 338,
    [296] = 339,
    [297] = 94,
    [298] = 338,
    [299] = 398,
    [300] = 338,
    [301] = 333,
    [302] = 398,
    [303] = 338,
    [304] = 333,
    [305] = 94,
    [306] = 333,
    [307] = 333,
    [308] = 333,
    [309] = 117,
    [310] = 91,
    [311] = 117,
    [312] = 405,
    [313] = 405,
    [314] = 405,
    [315] = 405,
    [316] = 116,
    [317] = 233,
    [318] = 116,
    [319] = 405,
    [320] = 405,
    [321] = 339,
    [322] = 94,
    [323] = 405,
    [324] = 405,
    [325] = 116,
    [326] = 405,
    [327] = 339,
    [328] = 94,
    [329] = 405,
    [330] = 405,
    [331] = 405,
    [332] = 343,
    [333] = 391,
    [334] = 392,
    [335] = 391,
    [336] = 250,
    [337] = 405,
    [338] = 405,
    [339] = 250,
    [340] = 405,
    [341] = 339,
    [342] = 94,
    [343] = 405,
    [344] = 398,
    [345] = 405,
    [346] = 117,
    [347] = 398,
    [348] = 405,
    [349] = 117,
    [350] = 94,
    [351] = 117,
    [352] = 117,
    [353] = 117,
    [354] = 406,
    [355] = 292,
    [356] = 294,
    [357] = 406,
    [358] = 406,
    [359] = 408,
    [360] = 91,
    [361] = 409,
    [362] = 292,
    [363] = 294,
    [364] = 409,
    [365] = 409,
    [366] = 94,
    [367] = 91,
    [368] = 410,
    [369] = 410,
    [370] = 300,
    [371] = 301,
    [372] = 116,
    [373] = 94,
    [374] = 94,
    [375] = 412,
    [376] = 410,
    [377] = 410,
    [378] = 412,
    [379] = 412,
    [380] = 94,
    [381] = 410,
    [382] = 414,
    [383] = 410,
    [384] = 410,
    [385] = 410,
    [386] = 94,
    [387] = 410,
    [388] = 250,
    [389] = 410,
    [390] = 410,
    [391] = 94,
    [392] = 414,
    [393] = 410,
    [394] = 91,
    [395] = 116,
    [396] = 94,
    [397] = 416,
    [398] = 416,
    [399] = 91,
    [400] = 410,
    [401] = 91,
    [402] = 94,
    [403] = 416,
    [404] = 91,
    [405] = 117,
    [406] = 91,
    [407] = 418,
    [408] = 117,
    [409] = 418,
    [410] = 94,
    [411] = 419,
    [412] = 419,
    [413] = 422,
    [414] = 300,
    [415] = 423,
    [416] = 424,
    [417] = 116,
    [418] = 116,
    [419] = 116,
    [420] = 94,
    [421] = 94,
    [422] = 425,
    [423] = 419,
    [424] = 419,
    [425] = 426,
    [426] = 426,
    [427] = 94,
    [428] = 419,
    [429] = 427,
    [430] = 419,
    [431] = 301,
    [432] = 250,
    [433] = 419,
    [434] = 419,
    [435] = 419,
    [436] = 426,
    [437] = 419,
    [438] = 94,
    [439] = 419,
    [440] = 419,
    [441] = 428,
    [442] = 94,
    [443] = 94,
    [444] = 428,
    [445] = 428,
    [446] = 429,
    [447] = 429,
    [448] = 94,
    [449] = 428,
    [450] = 117,
    [451] = 91,
    [452] = 94,
    [453] = 117,
    [454] = 91,
    [455] = 418,
    [456] = 250,
    [457] = 430,
    [458] = 423,
    [459] = 116,
    [460] = 431,
    [461] = 418,
    [462] = 432,
    [463] = 418,
    [464] = 250,
    [465] = 250,
    [466] = 432,
    [467] = 250,
    [468] = 418,
    [469] = 94,
    [470] = 433,
    [471] = 433,
    [472] = 418,
    [473] = 117,
    [474] = 91,
    [475] = 423,
    [476] = 418,
    [477] = 432,
    [478] = 250,
    [479] = 418,
    [480] = 434,
    [481] = 117,
    [482] = 434,
    [483] = 117,
    [484] = 94,
    [485] = 427,
    [486] = 419,
    [487] = 428,
    [488] = 94,
    [489] = 117,
    [490] = 91,
    [491] = 320,
    [492] = 320,
    [493] = 117,
    [494] = 94,
    [495] = 117,
    [496] = 117,
    [497] = 435,
    [498] = 435,
    [499] = 94,
    [500] = 117,
    [501] = 418,
    [502] = 292,
    [503] = 294,
    [504] = 418,
    [505] = 418,
    [506] = 91,
    [507] = 423,
    [508] = 418,
    [509] = 434,
    [510] = 117,
    [511] = 320,
    [512] = 117,
    [513] = 91,
    [514] = 1,
    [515] = 90,
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
        [sym_identifier] = ACTIONS(SHIFT(25)),
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
        [sym__expression] = ACTIONS(SHIFT(3)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(515)),
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
        [sym_identifier] = ACTIONS(SHIFT(25)),
    },
    [3] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(514)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(SHIFT(514)),
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
        [sym__variable_name] = ACTIONS(SHIFT(511)),
        [sym_identifier] = ACTIONS(SHIFT(492)),
    },
    [7] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_program, 1)),
    },
    [8] = {
        [sym__for_init] = ACTIONS(SHIFT(407)),
        [sym__for_condition] = ACTIONS(SHIFT(408)),
        [sym_variable_declaration] = ACTIONS(SHIFT(409)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(410)),
        [sym__pattern] = ACTIONS(SHIFT(411)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(412)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(412)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(412)),
        [sym_optional_pattern] = ACTIONS(SHIFT(412)),
        [sym_is_pattern] = ACTIONS(SHIFT(412)),
        [sym_as_pattern] = ACTIONS(SHIFT(412)),
        [sym__expression] = ACTIONS(SHIFT(413)),
        [sym__expression_list] = ACTIONS(SHIFT(409)),
        [sym__type_identifier] = ACTIONS(SHIFT(414)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(415)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(416)),
        [anon_sym_case] = ACTIONS(SHIFT(417)),
        [anon_sym_let] = ACTIONS(SHIFT(418)),
        [anon_sym_var] = ACTIONS(SHIFT(419)),
        [anon_sym_DOT] = ACTIONS(SHIFT(420)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(412)),
        [anon_sym_is] = ACTIONS(SHIFT(421)),
        [sym_identifier] = ACTIONS(SHIFT(422)),
    },
    [9] = {
        [sym__condition_clause] = ACTIONS(SHIFT(405)),
        [sym__condition] = ACTIONS(SHIFT(312)),
        [sym_availability_condition] = ACTIONS(SHIFT(313)),
        [sym_case_condition] = ACTIONS(SHIFT(314)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(314)),
        [sym__expression] = ACTIONS(SHIFT(315)),
        [anon_sym_case] = ACTIONS(SHIFT(316)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(317)),
        [anon_sym_let] = ACTIONS(SHIFT(318)),
        [anon_sym_var] = ACTIONS(SHIFT(318)),
        [sym_identifier] = ACTIONS(SHIFT(319)),
    },
    [10] = {
        [sym__pattern] = ACTIONS(SHIFT(368)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(369)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(369)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(369)),
        [sym_optional_pattern] = ACTIONS(SHIFT(369)),
        [sym_is_pattern] = ACTIONS(SHIFT(369)),
        [sym_as_pattern] = ACTIONS(SHIFT(369)),
        [sym__expression] = ACTIONS(SHIFT(369)),
        [sym__type_identifier] = ACTIONS(SHIFT(370)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(371)),
        [anon_sym_let] = ACTIONS(SHIFT(372)),
        [anon_sym_var] = ACTIONS(SHIFT(372)),
        [anon_sym_DOT] = ACTIONS(SHIFT(373)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(369)),
        [anon_sym_is] = ACTIONS(SHIFT(374)),
        [sym_identifier] = ACTIONS(SHIFT(375)),
    },
    [11] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
    },
    [12] = {
        [sym__code_block] = ACTIONS(SHIFT(361)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(362)),
    },
    [13] = {
        [sym__condition_clause] = ACTIONS(SHIFT(311)),
        [sym__condition] = ACTIONS(SHIFT(312)),
        [sym_availability_condition] = ACTIONS(SHIFT(313)),
        [sym_case_condition] = ACTIONS(SHIFT(314)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(314)),
        [sym__expression] = ACTIONS(SHIFT(315)),
        [anon_sym_case] = ACTIONS(SHIFT(316)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(317)),
        [anon_sym_let] = ACTIONS(SHIFT(318)),
        [anon_sym_var] = ACTIONS(SHIFT(318)),
        [sym_identifier] = ACTIONS(SHIFT(319)),
    },
    [14] = {
        [sym__condition_clause] = ACTIONS(SHIFT(235)),
        [sym__condition] = ACTIONS(SHIFT(236)),
        [sym_availability_condition] = ACTIONS(SHIFT(237)),
        [sym_case_condition] = ACTIONS(SHIFT(238)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(238)),
        [sym__expression] = ACTIONS(SHIFT(239)),
        [anon_sym_case] = ACTIONS(SHIFT(240)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(241)),
        [anon_sym_let] = ACTIONS(SHIFT(242)),
        [anon_sym_var] = ACTIONS(SHIFT(242)),
        [sym_identifier] = ACTIONS(SHIFT(243)),
    },
    [15] = {
        [sym__expression] = ACTIONS(SHIFT(185)),
        [sym_identifier] = ACTIONS(SHIFT(186)),
    },
    [16] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(184)),
    },
    [17] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_continue_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_continue_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(183)),
    },
    [18] = {
        [sym__expression] = ACTIONS(SHIFT(182)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_return_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_return_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(181)),
    },
    [19] = {
        [sym__expression] = ACTIONS(SHIFT(180)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_throw_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_throw_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(181)),
    },
    [20] = {
        [sym__code_block] = ACTIONS(SHIFT(175)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(176)),
    },
    [21] = {
        [sym__code_block] = ACTIONS(SHIFT(100)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(101)),
    },
    [22] = {
        [sym__build_configuration] = ACTIONS(SHIFT(38)),
        [sym_boolean_literal] = ACTIONS(SHIFT(39)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(40)),
        [anon_sym_os] = ACTIONS(SHIFT(41)),
        [anon_sym_arch] = ACTIONS(SHIFT(42)),
        [anon_sym_BANG] = ACTIONS(SHIFT(43)),
        [anon_sym_true] = ACTIONS(SHIFT(44)),
        [anon_sym_false] = ACTIONS(SHIFT(44)),
        [sym_identifier] = ACTIONS(SHIFT(39)),
    },
    [23] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_line_control_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_line_control_statement, 1)),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(SHIFT(36)),
    },
    [24] = {
        [anon_sym_var] = ACTIONS(SHIFT(28)),
        [anon_sym_typealias] = ACTIONS(SHIFT(28)),
        [anon_sym_struct] = ACTIONS(SHIFT(28)),
        [anon_sym_class] = ACTIONS(SHIFT(28)),
        [anon_sym_enum] = ACTIONS(SHIFT(28)),
        [anon_sym_protocol] = ACTIONS(SHIFT(28)),
        [anon_sym_func] = ACTIONS(SHIFT(28)),
        [sym_identifier] = ACTIONS(SHIFT(29)),
        [sym_operator] = ACTIONS(SHIFT(29)),
    },
    [25] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(SHIFT(26)),
    },
    [26] = {
        [sym__loop_statement] = ACTIONS(SHIFT(27)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(27)),
        [anon_sym_for] = ACTIONS(SHIFT(8)),
        [anon_sym_while] = ACTIONS(SHIFT(9)),
        [anon_sym_repeat] = ACTIONS(SHIFT(12)),
        [anon_sym_if] = ACTIONS(SHIFT(13)),
    },
    [27] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
    },
    [28] = {
        [sym_identifier] = ACTIONS(SHIFT(34)),
        [sym_operator] = ACTIONS(SHIFT(34)),
    },
    [29] = {
        [aux_sym_import_declaration_repeat1] = ACTIONS(SHIFT(30)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_import_declaration, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_import_declaration, 2)),
        [anon_sym_DOT] = ACTIONS(SHIFT(31)),
    },
    [30] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_import_declaration, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_import_declaration, 3)),
    },
    [31] = {
        [sym_identifier] = ACTIONS(SHIFT(32)),
        [sym_operator] = ACTIONS(SHIFT(32)),
    },
    [32] = {
        [aux_sym_import_declaration_repeat1] = ACTIONS(SHIFT(33)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_import_declaration_repeat1, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_import_declaration_repeat1, 2)),
        [anon_sym_DOT] = ACTIONS(SHIFT(31)),
    },
    [33] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_import_declaration_repeat1, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_import_declaration_repeat1, 3)),
    },
    [34] = {
        [aux_sym_import_declaration_repeat1] = ACTIONS(SHIFT(35)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_import_declaration, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_import_declaration, 3)),
        [anon_sym_DOT] = ACTIONS(SHIFT(31)),
    },
    [35] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_import_declaration, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_import_declaration, 4)),
    },
    [36] = {
        [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LPAREN_BSLASH_BSLASH_BSLASH_BSLASH_LPAREN_LBRACK_BSLASH_BSLASH0tnr_SQUOTE_BSLASH_DQUOTE_RBRACK_PIPEu_BSLASH_BSLASH_LBRACE_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA8_RBRACE_BSLASH_BSLASH_RBRACE_RPAREN_RPAREN_PIPE_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_BSLASH_BSLASH_BSLASH_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(SHIFT(37)),
    },
    [37] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_line_control_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_line_control_statement, 3)),
    },
    [38] = {
        [sym__statement] = ACTIONS(SHIFT(73)),
        [sym__loop_statement] = ACTIONS(SHIFT(74)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(74)),
        [sym_guard_statement] = ACTIONS(SHIFT(74)),
        [sym_switch_statement] = ACTIONS(SHIFT(74)),
        [sym_labeled_statement] = ACTIONS(SHIFT(74)),
        [sym_break_statement] = ACTIONS(SHIFT(74)),
        [sym_continue_statement] = ACTIONS(SHIFT(74)),
        [sym_return_statement] = ACTIONS(SHIFT(74)),
        [sym_throw_statement] = ACTIONS(SHIFT(74)),
        [sym_defer_statement] = ACTIONS(SHIFT(74)),
        [sym_do_statement] = ACTIONS(SHIFT(74)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(74)),
        [sym_line_control_statement] = ACTIONS(SHIFT(74)),
        [sym__declaration] = ACTIONS(SHIFT(74)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym__expression] = ACTIONS(SHIFT(74)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(75)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(SHIFT(76)),
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
        [sym_fallthrough_statement] = ACTIONS(SHIFT(74)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDelseif] = ACTIONS(SHIFT(77)),
        [anon_sym_POUNDelse] = ACTIONS(SHIFT(78)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(79)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(46)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(47)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [sym_identifier] = ACTIONS(SHIFT(25)),
    },
    [39] = {
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
        [sym_identifier] = ACTIONS(REDUCE(sym__build_configuration, 1)),
    },
    [40] = {
        [sym__build_configuration] = ACTIONS(SHIFT(54)),
        [sym_boolean_literal] = ACTIONS(SHIFT(55)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(56)),
        [anon_sym_os] = ACTIONS(SHIFT(57)),
        [anon_sym_arch] = ACTIONS(SHIFT(58)),
        [anon_sym_BANG] = ACTIONS(SHIFT(59)),
        [anon_sym_true] = ACTIONS(SHIFT(60)),
        [anon_sym_false] = ACTIONS(SHIFT(60)),
        [sym_identifier] = ACTIONS(SHIFT(55)),
    },
    [41] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(53)),
    },
    [42] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(50)),
    },
    [43] = {
        [sym__build_configuration] = ACTIONS(SHIFT(45)),
        [sym_boolean_literal] = ACTIONS(SHIFT(39)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(40)),
        [anon_sym_os] = ACTIONS(SHIFT(41)),
        [anon_sym_arch] = ACTIONS(SHIFT(42)),
        [anon_sym_BANG] = ACTIONS(SHIFT(43)),
        [anon_sym_true] = ACTIONS(SHIFT(44)),
        [anon_sym_false] = ACTIONS(SHIFT(44)),
        [sym_identifier] = ACTIONS(SHIFT(39)),
    },
    [44] = {
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
        [sym_identifier] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
    },
    [45] = {
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
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(46)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(47)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_import] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__build_configuration, 2)),
    },
    [46] = {
        [sym__build_configuration] = ACTIONS(SHIFT(49)),
        [sym_boolean_literal] = ACTIONS(SHIFT(39)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(40)),
        [anon_sym_os] = ACTIONS(SHIFT(41)),
        [anon_sym_arch] = ACTIONS(SHIFT(42)),
        [anon_sym_BANG] = ACTIONS(SHIFT(43)),
        [anon_sym_true] = ACTIONS(SHIFT(44)),
        [anon_sym_false] = ACTIONS(SHIFT(44)),
        [sym_identifier] = ACTIONS(SHIFT(39)),
    },
    [47] = {
        [sym__build_configuration] = ACTIONS(SHIFT(48)),
        [sym_boolean_literal] = ACTIONS(SHIFT(39)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(40)),
        [anon_sym_os] = ACTIONS(SHIFT(41)),
        [anon_sym_arch] = ACTIONS(SHIFT(42)),
        [anon_sym_BANG] = ACTIONS(SHIFT(43)),
        [anon_sym_true] = ACTIONS(SHIFT(44)),
        [anon_sym_false] = ACTIONS(SHIFT(44)),
        [sym_identifier] = ACTIONS(SHIFT(39)),
    },
    [48] = {
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
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(46)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_import] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_identifier] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
    },
    [49] = {
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
        [sym_identifier] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
    },
    [50] = {
        [anon_sym_i386] = ACTIONS(SHIFT(51)),
        [anon_sym_x86_64] = ACTIONS(SHIFT(51)),
        [anon_sym_arm] = ACTIONS(SHIFT(51)),
        [anon_sym_arm64] = ACTIONS(SHIFT(51)),
    },
    [51] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(52)),
    },
    [52] = {
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
        [sym_identifier] = ACTIONS(REDUCE(sym__build_configuration, 4)),
    },
    [53] = {
        [anon_sym_iOS] = ACTIONS(SHIFT(51)),
        [anon_sym_OSX] = ACTIONS(SHIFT(51)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(51)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(51)),
    },
    [54] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(72)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(62)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(63)),
    },
    [55] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE(sym__build_configuration, 1)),
    },
    [56] = {
        [sym__build_configuration] = ACTIONS(SHIFT(70)),
        [sym_boolean_literal] = ACTIONS(SHIFT(55)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(56)),
        [anon_sym_os] = ACTIONS(SHIFT(57)),
        [anon_sym_arch] = ACTIONS(SHIFT(58)),
        [anon_sym_BANG] = ACTIONS(SHIFT(59)),
        [anon_sym_true] = ACTIONS(SHIFT(60)),
        [anon_sym_false] = ACTIONS(SHIFT(60)),
        [sym_identifier] = ACTIONS(SHIFT(55)),
    },
    [57] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(69)),
    },
    [58] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(66)),
    },
    [59] = {
        [sym__build_configuration] = ACTIONS(SHIFT(61)),
        [sym_boolean_literal] = ACTIONS(SHIFT(55)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(56)),
        [anon_sym_os] = ACTIONS(SHIFT(57)),
        [anon_sym_arch] = ACTIONS(SHIFT(58)),
        [anon_sym_BANG] = ACTIONS(SHIFT(59)),
        [anon_sym_true] = ACTIONS(SHIFT(60)),
        [anon_sym_false] = ACTIONS(SHIFT(60)),
        [sym_identifier] = ACTIONS(SHIFT(55)),
    },
    [60] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
    },
    [61] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(62)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(63)),
    },
    [62] = {
        [sym__build_configuration] = ACTIONS(SHIFT(65)),
        [sym_boolean_literal] = ACTIONS(SHIFT(55)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(56)),
        [anon_sym_os] = ACTIONS(SHIFT(57)),
        [anon_sym_arch] = ACTIONS(SHIFT(58)),
        [anon_sym_BANG] = ACTIONS(SHIFT(59)),
        [anon_sym_true] = ACTIONS(SHIFT(60)),
        [anon_sym_false] = ACTIONS(SHIFT(60)),
        [sym_identifier] = ACTIONS(SHIFT(55)),
    },
    [63] = {
        [sym__build_configuration] = ACTIONS(SHIFT(64)),
        [sym_boolean_literal] = ACTIONS(SHIFT(55)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(56)),
        [anon_sym_os] = ACTIONS(SHIFT(57)),
        [anon_sym_arch] = ACTIONS(SHIFT(58)),
        [anon_sym_BANG] = ACTIONS(SHIFT(59)),
        [anon_sym_true] = ACTIONS(SHIFT(60)),
        [anon_sym_false] = ACTIONS(SHIFT(60)),
        [sym_identifier] = ACTIONS(SHIFT(55)),
    },
    [64] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(62)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
    },
    [65] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
    },
    [66] = {
        [anon_sym_i386] = ACTIONS(SHIFT(67)),
        [anon_sym_x86_64] = ACTIONS(SHIFT(67)),
        [anon_sym_arm] = ACTIONS(SHIFT(67)),
        [anon_sym_arm64] = ACTIONS(SHIFT(67)),
    },
    [67] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(68)),
    },
    [68] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE(sym__build_configuration, 4)),
    },
    [69] = {
        [anon_sym_iOS] = ACTIONS(SHIFT(67)),
        [anon_sym_OSX] = ACTIONS(SHIFT(67)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(67)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(67)),
    },
    [70] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(71)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(62)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(63)),
    },
    [71] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE(sym__build_configuration, 3)),
    },
    [72] = {
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
        [sym_identifier] = ACTIONS(REDUCE(sym__build_configuration, 3)),
    },
    [73] = {
        [sym__statement] = ACTIONS(SHIFT(73)),
        [sym__loop_statement] = ACTIONS(SHIFT(74)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(74)),
        [sym_guard_statement] = ACTIONS(SHIFT(74)),
        [sym_switch_statement] = ACTIONS(SHIFT(74)),
        [sym_labeled_statement] = ACTIONS(SHIFT(74)),
        [sym_break_statement] = ACTIONS(SHIFT(74)),
        [sym_continue_statement] = ACTIONS(SHIFT(74)),
        [sym_return_statement] = ACTIONS(SHIFT(74)),
        [sym_throw_statement] = ACTIONS(SHIFT(74)),
        [sym_defer_statement] = ACTIONS(SHIFT(74)),
        [sym_do_statement] = ACTIONS(SHIFT(74)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(74)),
        [sym_line_control_statement] = ACTIONS(SHIFT(74)),
        [sym__declaration] = ACTIONS(SHIFT(74)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym__expression] = ACTIONS(SHIFT(74)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(99)),
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
        [sym_fallthrough_statement] = ACTIONS(SHIFT(74)),
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
        [sym_identifier] = ACTIONS(SHIFT(25)),
    },
    [74] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(98)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(SHIFT(98)),
    },
    [75] = {
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(SHIFT(94)),
        [anon_sym_POUNDelseif] = ACTIONS(SHIFT(77)),
        [anon_sym_POUNDelse] = ACTIONS(SHIFT(91)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(83)),
    },
    [76] = {
        [anon_sym_POUNDelse] = ACTIONS(SHIFT(91)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(83)),
    },
    [77] = {
        [sym__build_configuration] = ACTIONS(SHIFT(87)),
        [sym_boolean_literal] = ACTIONS(SHIFT(39)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(40)),
        [anon_sym_os] = ACTIONS(SHIFT(41)),
        [anon_sym_arch] = ACTIONS(SHIFT(42)),
        [anon_sym_BANG] = ACTIONS(SHIFT(43)),
        [anon_sym_true] = ACTIONS(SHIFT(44)),
        [anon_sym_false] = ACTIONS(SHIFT(44)),
        [sym_identifier] = ACTIONS(SHIFT(39)),
    },
    [78] = {
        [sym__statement] = ACTIONS(SHIFT(80)),
        [sym__loop_statement] = ACTIONS(SHIFT(81)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(81)),
        [sym_guard_statement] = ACTIONS(SHIFT(81)),
        [sym_switch_statement] = ACTIONS(SHIFT(81)),
        [sym_labeled_statement] = ACTIONS(SHIFT(81)),
        [sym_break_statement] = ACTIONS(SHIFT(81)),
        [sym_continue_statement] = ACTIONS(SHIFT(81)),
        [sym_return_statement] = ACTIONS(SHIFT(81)),
        [sym_throw_statement] = ACTIONS(SHIFT(81)),
        [sym_defer_statement] = ACTIONS(SHIFT(81)),
        [sym_do_statement] = ACTIONS(SHIFT(81)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(81)),
        [sym_line_control_statement] = ACTIONS(SHIFT(81)),
        [sym__declaration] = ACTIONS(SHIFT(81)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym__expression] = ACTIONS(SHIFT(81)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(82)),
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
        [sym_fallthrough_statement] = ACTIONS(SHIFT(81)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(83)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [sym_identifier] = ACTIONS(SHIFT(25)),
    },
    [79] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_build_configuration_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_build_configuration_statement, 3)),
    },
    [80] = {
        [sym__statement] = ACTIONS(SHIFT(80)),
        [sym__loop_statement] = ACTIONS(SHIFT(81)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(81)),
        [sym_guard_statement] = ACTIONS(SHIFT(81)),
        [sym_switch_statement] = ACTIONS(SHIFT(81)),
        [sym_labeled_statement] = ACTIONS(SHIFT(81)),
        [sym_break_statement] = ACTIONS(SHIFT(81)),
        [sym_continue_statement] = ACTIONS(SHIFT(81)),
        [sym_return_statement] = ACTIONS(SHIFT(81)),
        [sym_throw_statement] = ACTIONS(SHIFT(81)),
        [sym_defer_statement] = ACTIONS(SHIFT(81)),
        [sym_do_statement] = ACTIONS(SHIFT(81)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(81)),
        [sym_line_control_statement] = ACTIONS(SHIFT(81)),
        [sym__declaration] = ACTIONS(SHIFT(81)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym__expression] = ACTIONS(SHIFT(81)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(86)),
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
        [sym_fallthrough_statement] = ACTIONS(SHIFT(81)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [sym_identifier] = ACTIONS(SHIFT(25)),
    },
    [81] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(85)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(SHIFT(85)),
    },
    [82] = {
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(84)),
    },
    [83] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_build_configuration_statement, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_build_configuration_statement, 4)),
    },
    [84] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_build_configuration_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_build_configuration_statement, 5)),
    },
    [85] = {
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
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [86] = {
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [87] = {
        [sym__statement] = ACTIONS(SHIFT(73)),
        [sym__loop_statement] = ACTIONS(SHIFT(74)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(74)),
        [sym_guard_statement] = ACTIONS(SHIFT(74)),
        [sym_switch_statement] = ACTIONS(SHIFT(74)),
        [sym_labeled_statement] = ACTIONS(SHIFT(74)),
        [sym_break_statement] = ACTIONS(SHIFT(74)),
        [sym_continue_statement] = ACTIONS(SHIFT(74)),
        [sym_return_statement] = ACTIONS(SHIFT(74)),
        [sym_throw_statement] = ACTIONS(SHIFT(74)),
        [sym_defer_statement] = ACTIONS(SHIFT(74)),
        [sym_do_statement] = ACTIONS(SHIFT(74)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(74)),
        [sym_line_control_statement] = ACTIONS(SHIFT(74)),
        [sym__declaration] = ACTIONS(SHIFT(74)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym__expression] = ACTIONS(SHIFT(74)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(88)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(SHIFT(89)),
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
        [sym_fallthrough_statement] = ACTIONS(SHIFT(74)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDelseif] = ACTIONS(SHIFT(77)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 2)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 2)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(46)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(47)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [sym_identifier] = ACTIONS(SHIFT(25)),
    },
    [88] = {
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(SHIFT(90)),
        [anon_sym_POUNDelseif] = ACTIONS(SHIFT(77)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 3)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 3)),
    },
    [89] = {
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 3)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 3)),
    },
    [90] = {
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 4)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 4)),
    },
    [91] = {
        [sym__statement] = ACTIONS(SHIFT(80)),
        [sym__loop_statement] = ACTIONS(SHIFT(81)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(81)),
        [sym_guard_statement] = ACTIONS(SHIFT(81)),
        [sym_switch_statement] = ACTIONS(SHIFT(81)),
        [sym_labeled_statement] = ACTIONS(SHIFT(81)),
        [sym_break_statement] = ACTIONS(SHIFT(81)),
        [sym_continue_statement] = ACTIONS(SHIFT(81)),
        [sym_return_statement] = ACTIONS(SHIFT(81)),
        [sym_throw_statement] = ACTIONS(SHIFT(81)),
        [sym_defer_statement] = ACTIONS(SHIFT(81)),
        [sym_do_statement] = ACTIONS(SHIFT(81)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(81)),
        [sym_line_control_statement] = ACTIONS(SHIFT(81)),
        [sym__declaration] = ACTIONS(SHIFT(81)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym__expression] = ACTIONS(SHIFT(81)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(92)),
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
        [sym_fallthrough_statement] = ACTIONS(SHIFT(81)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(84)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [sym_identifier] = ACTIONS(SHIFT(25)),
    },
    [92] = {
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(93)),
    },
    [93] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_build_configuration_statement, 6)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_build_configuration_statement, 6)),
    },
    [94] = {
        [anon_sym_POUNDelse] = ACTIONS(SHIFT(95)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(84)),
    },
    [95] = {
        [sym__statement] = ACTIONS(SHIFT(80)),
        [sym__loop_statement] = ACTIONS(SHIFT(81)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(81)),
        [sym_guard_statement] = ACTIONS(SHIFT(81)),
        [sym_switch_statement] = ACTIONS(SHIFT(81)),
        [sym_labeled_statement] = ACTIONS(SHIFT(81)),
        [sym_break_statement] = ACTIONS(SHIFT(81)),
        [sym_continue_statement] = ACTIONS(SHIFT(81)),
        [sym_return_statement] = ACTIONS(SHIFT(81)),
        [sym_throw_statement] = ACTIONS(SHIFT(81)),
        [sym_defer_statement] = ACTIONS(SHIFT(81)),
        [sym_do_statement] = ACTIONS(SHIFT(81)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(81)),
        [sym_line_control_statement] = ACTIONS(SHIFT(81)),
        [sym__declaration] = ACTIONS(SHIFT(81)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym__expression] = ACTIONS(SHIFT(81)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(96)),
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
        [sym_fallthrough_statement] = ACTIONS(SHIFT(81)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(93)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [sym_identifier] = ACTIONS(SHIFT(25)),
    },
    [96] = {
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(97)),
    },
    [97] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_build_configuration_statement, 7)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_build_configuration_statement, 7)),
    },
    [98] = {
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
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [99] = {
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_POUNDelseif] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [100] = {
        [sym_catch_clause] = ACTIONS(SHIFT(109)),
        [aux_sym_do_statement_repeat1] = ACTIONS(SHIFT(110)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_do_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_do_statement, 2)),
        [anon_sym_catch] = ACTIONS(SHIFT(111)),
    },
    [101] = {
        [sym__statement] = ACTIONS(SHIFT(102)),
        [sym__loop_statement] = ACTIONS(SHIFT(103)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(103)),
        [sym_guard_statement] = ACTIONS(SHIFT(103)),
        [sym_switch_statement] = ACTIONS(SHIFT(103)),
        [sym_labeled_statement] = ACTIONS(SHIFT(103)),
        [sym_break_statement] = ACTIONS(SHIFT(103)),
        [sym_continue_statement] = ACTIONS(SHIFT(103)),
        [sym_return_statement] = ACTIONS(SHIFT(103)),
        [sym_throw_statement] = ACTIONS(SHIFT(103)),
        [sym_defer_statement] = ACTIONS(SHIFT(103)),
        [sym_do_statement] = ACTIONS(SHIFT(103)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(103)),
        [sym_line_control_statement] = ACTIONS(SHIFT(103)),
        [sym__declaration] = ACTIONS(SHIFT(103)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym__expression] = ACTIONS(SHIFT(103)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(104)),
        [anon_sym_for] = ACTIONS(SHIFT(8)),
        [anon_sym_while] = ACTIONS(SHIFT(9)),
        [anon_sym_let] = ACTIONS(SHIFT(10)),
        [anon_sym_var] = ACTIONS(SHIFT(11)),
        [anon_sym_repeat] = ACTIONS(SHIFT(12)),
        [anon_sym_if] = ACTIONS(SHIFT(13)),
        [anon_sym_guard] = ACTIONS(SHIFT(14)),
        [anon_sym_switch] = ACTIONS(SHIFT(15)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(105)),
        [anon_sym_break] = ACTIONS(SHIFT(16)),
        [anon_sym_continue] = ACTIONS(SHIFT(17)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(103)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [sym_identifier] = ACTIONS(SHIFT(25)),
    },
    [102] = {
        [sym__statement] = ACTIONS(SHIFT(102)),
        [sym__loop_statement] = ACTIONS(SHIFT(103)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(103)),
        [sym_guard_statement] = ACTIONS(SHIFT(103)),
        [sym_switch_statement] = ACTIONS(SHIFT(103)),
        [sym_labeled_statement] = ACTIONS(SHIFT(103)),
        [sym_break_statement] = ACTIONS(SHIFT(103)),
        [sym_continue_statement] = ACTIONS(SHIFT(103)),
        [sym_return_statement] = ACTIONS(SHIFT(103)),
        [sym_throw_statement] = ACTIONS(SHIFT(103)),
        [sym_defer_statement] = ACTIONS(SHIFT(103)),
        [sym_do_statement] = ACTIONS(SHIFT(103)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(103)),
        [sym_line_control_statement] = ACTIONS(SHIFT(103)),
        [sym__declaration] = ACTIONS(SHIFT(103)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym__expression] = ACTIONS(SHIFT(103)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(108)),
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
        [sym_fallthrough_statement] = ACTIONS(SHIFT(103)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [sym_identifier] = ACTIONS(SHIFT(25)),
    },
    [103] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(107)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(SHIFT(107)),
    },
    [104] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(106)),
    },
    [105] = {
        [sym_catch_clause] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_do_statement_repeat1] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_catch] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [106] = {
        [sym_catch_clause] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_do_statement_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_catch] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [107] = {
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
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [108] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [109] = {
        [sym_catch_clause] = ACTIONS(SHIFT(109)),
        [aux_sym_do_statement_repeat1] = ACTIONS(SHIFT(174)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_do_statement_repeat1, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_do_statement_repeat1, 1)),
        [anon_sym_catch] = ACTIONS(SHIFT(111)),
    },
    [110] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_do_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_do_statement, 3)),
    },
    [111] = {
        [sym__code_block] = ACTIONS(SHIFT(112)),
        [sym__pattern] = ACTIONS(SHIFT(113)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(114)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(114)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(114)),
        [sym_optional_pattern] = ACTIONS(SHIFT(114)),
        [sym_is_pattern] = ACTIONS(SHIFT(114)),
        [sym_as_pattern] = ACTIONS(SHIFT(114)),
        [sym__expression] = ACTIONS(SHIFT(114)),
        [sym__type_identifier] = ACTIONS(SHIFT(115)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(117)),
        [anon_sym_let] = ACTIONS(SHIFT(118)),
        [anon_sym_var] = ACTIONS(SHIFT(118)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(101)),
        [anon_sym_DOT] = ACTIONS(SHIFT(119)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(114)),
        [anon_sym_is] = ACTIONS(SHIFT(120)),
        [sym_identifier] = ACTIONS(SHIFT(121)),
    },
    [112] = {
        [sym_catch_clause] = ACTIONS(REDUCE(sym_catch_clause, 2)),
        [aux_sym_do_statement_repeat1] = ACTIONS(REDUCE(sym_catch_clause, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_catch_clause, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_catch_clause, 2)),
        [anon_sym_catch] = ACTIONS(REDUCE(sym_catch_clause, 2)),
    },
    [113] = {
        [sym__code_block] = ACTIONS(SHIFT(173)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(101)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(131)),
        [anon_sym_as] = ACTIONS(SHIFT(132)),
    },
    [114] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [115] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(170)),
    },
    [116] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(167)),
    },
    [117] = {
        [sym__pattern] = ACTIONS(SHIFT(134)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(135)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(135)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(136)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(135)),
        [sym_optional_pattern] = ACTIONS(SHIFT(135)),
        [sym_is_pattern] = ACTIONS(SHIFT(135)),
        [sym_as_pattern] = ACTIONS(SHIFT(135)),
        [sym__expression] = ACTIONS(SHIFT(135)),
        [sym__type_identifier] = ACTIONS(SHIFT(137)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(138)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(139)),
        [anon_sym_let] = ACTIONS(SHIFT(140)),
        [anon_sym_var] = ACTIONS(SHIFT(140)),
        [anon_sym_DOT] = ACTIONS(SHIFT(141)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(135)),
        [anon_sym_is] = ACTIONS(SHIFT(142)),
        [sym_identifier] = ACTIONS(SHIFT(143)),
    },
    [118] = {
        [sym__pattern] = ACTIONS(SHIFT(130)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(114)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(114)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(114)),
        [sym_optional_pattern] = ACTIONS(SHIFT(114)),
        [sym_is_pattern] = ACTIONS(SHIFT(114)),
        [sym_as_pattern] = ACTIONS(SHIFT(114)),
        [sym__expression] = ACTIONS(SHIFT(114)),
        [sym__type_identifier] = ACTIONS(SHIFT(115)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(117)),
        [anon_sym_let] = ACTIONS(SHIFT(118)),
        [anon_sym_var] = ACTIONS(SHIFT(118)),
        [anon_sym_DOT] = ACTIONS(SHIFT(119)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(114)),
        [anon_sym_is] = ACTIONS(SHIFT(120)),
        [sym_identifier] = ACTIONS(SHIFT(121)),
    },
    [119] = {
        [sym_identifier] = ACTIONS(SHIFT(128)),
    },
    [120] = {
        [sym_type] = ACTIONS(SHIFT(122)),
        [sym__type_identifier] = ACTIONS(SHIFT(123)),
        [sym__type_name] = ACTIONS(SHIFT(124)),
        [sym_identifier] = ACTIONS(SHIFT(125)),
    },
    [121] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [122] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [123] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [124] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(126)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [125] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [126] = {
        [sym__type_identifier] = ACTIONS(SHIFT(127)),
        [sym__type_name] = ACTIONS(SHIFT(124)),
        [sym_identifier] = ACTIONS(SHIFT(125)),
    },
    [127] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [128] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(129)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(117)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [129] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [130] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(131)),
        [anon_sym_as] = ACTIONS(SHIFT(132)),
    },
    [131] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [132] = {
        [sym_type] = ACTIONS(SHIFT(133)),
        [sym__type_identifier] = ACTIONS(SHIFT(123)),
        [sym__type_name] = ACTIONS(SHIFT(124)),
        [sym_identifier] = ACTIONS(SHIFT(125)),
    },
    [133] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [134] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(163)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(164)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(153)),
        [anon_sym_as] = ACTIONS(SHIFT(154)),
    },
    [135] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [136] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(162)),
    },
    [137] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(159)),
    },
    [138] = {
        [sym__pattern] = ACTIONS(SHIFT(134)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(135)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(135)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(156)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(135)),
        [sym_optional_pattern] = ACTIONS(SHIFT(135)),
        [sym_is_pattern] = ACTIONS(SHIFT(135)),
        [sym_as_pattern] = ACTIONS(SHIFT(135)),
        [sym__expression] = ACTIONS(SHIFT(135)),
        [sym__type_identifier] = ACTIONS(SHIFT(137)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(138)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(157)),
        [anon_sym_let] = ACTIONS(SHIFT(140)),
        [anon_sym_var] = ACTIONS(SHIFT(140)),
        [anon_sym_DOT] = ACTIONS(SHIFT(141)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(135)),
        [anon_sym_is] = ACTIONS(SHIFT(142)),
        [sym_identifier] = ACTIONS(SHIFT(143)),
    },
    [139] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [140] = {
        [sym__pattern] = ACTIONS(SHIFT(152)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(135)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(135)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(135)),
        [sym_optional_pattern] = ACTIONS(SHIFT(135)),
        [sym_is_pattern] = ACTIONS(SHIFT(135)),
        [sym_as_pattern] = ACTIONS(SHIFT(135)),
        [sym__expression] = ACTIONS(SHIFT(135)),
        [sym__type_identifier] = ACTIONS(SHIFT(137)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(138)),
        [anon_sym_let] = ACTIONS(SHIFT(140)),
        [anon_sym_var] = ACTIONS(SHIFT(140)),
        [anon_sym_DOT] = ACTIONS(SHIFT(141)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(135)),
        [anon_sym_is] = ACTIONS(SHIFT(142)),
        [sym_identifier] = ACTIONS(SHIFT(143)),
    },
    [141] = {
        [sym_identifier] = ACTIONS(SHIFT(150)),
    },
    [142] = {
        [sym_type] = ACTIONS(SHIFT(144)),
        [sym__type_identifier] = ACTIONS(SHIFT(145)),
        [sym__type_name] = ACTIONS(SHIFT(146)),
        [sym_identifier] = ACTIONS(SHIFT(147)),
    },
    [143] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [144] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [145] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [146] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(148)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [147] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [148] = {
        [sym__type_identifier] = ACTIONS(SHIFT(149)),
        [sym__type_name] = ACTIONS(SHIFT(146)),
        [sym_identifier] = ACTIONS(SHIFT(147)),
    },
    [149] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [150] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(151)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(138)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [151] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [152] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(153)),
        [anon_sym_as] = ACTIONS(SHIFT(154)),
    },
    [153] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [154] = {
        [sym_type] = ACTIONS(SHIFT(155)),
        [sym__type_identifier] = ACTIONS(SHIFT(145)),
        [sym__type_name] = ACTIONS(SHIFT(146)),
        [sym_identifier] = ACTIONS(SHIFT(147)),
    },
    [155] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [156] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(158)),
    },
    [157] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [158] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [159] = {
        [sym_identifier] = ACTIONS(SHIFT(160)),
    },
    [160] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(161)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(138)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [161] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [162] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [163] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 2)),
    },
    [164] = {
        [sym__pattern] = ACTIONS(SHIFT(165)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(135)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(135)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(135)),
        [sym_optional_pattern] = ACTIONS(SHIFT(135)),
        [sym_is_pattern] = ACTIONS(SHIFT(135)),
        [sym_as_pattern] = ACTIONS(SHIFT(135)),
        [sym__expression] = ACTIONS(SHIFT(135)),
        [sym__type_identifier] = ACTIONS(SHIFT(137)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(138)),
        [anon_sym_let] = ACTIONS(SHIFT(140)),
        [anon_sym_var] = ACTIONS(SHIFT(140)),
        [anon_sym_DOT] = ACTIONS(SHIFT(141)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(135)),
        [anon_sym_is] = ACTIONS(SHIFT(142)),
        [sym_identifier] = ACTIONS(SHIFT(143)),
    },
    [165] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(166)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(164)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(153)),
        [anon_sym_as] = ACTIONS(SHIFT(154)),
    },
    [166] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [167] = {
        [sym__type_identifier] = ACTIONS(SHIFT(168)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [sym_identifier] = ACTIONS(SHIFT(169)),
    },
    [168] = {
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [169] = {
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [170] = {
        [sym_identifier] = ACTIONS(SHIFT(171)),
    },
    [171] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(172)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(117)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [172] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [173] = {
        [sym_catch_clause] = ACTIONS(REDUCE(sym_catch_clause, 3)),
        [aux_sym_do_statement_repeat1] = ACTIONS(REDUCE(sym_catch_clause, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_catch_clause, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_catch_clause, 3)),
        [anon_sym_catch] = ACTIONS(REDUCE(sym_catch_clause, 3)),
    },
    [174] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_do_statement_repeat1, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_do_statement_repeat1, 2)),
    },
    [175] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_defer_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_defer_statement, 2)),
    },
    [176] = {
        [sym__statement] = ACTIONS(SHIFT(102)),
        [sym__loop_statement] = ACTIONS(SHIFT(103)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(103)),
        [sym_guard_statement] = ACTIONS(SHIFT(103)),
        [sym_switch_statement] = ACTIONS(SHIFT(103)),
        [sym_labeled_statement] = ACTIONS(SHIFT(103)),
        [sym_break_statement] = ACTIONS(SHIFT(103)),
        [sym_continue_statement] = ACTIONS(SHIFT(103)),
        [sym_return_statement] = ACTIONS(SHIFT(103)),
        [sym_throw_statement] = ACTIONS(SHIFT(103)),
        [sym_defer_statement] = ACTIONS(SHIFT(103)),
        [sym_do_statement] = ACTIONS(SHIFT(103)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(103)),
        [sym_line_control_statement] = ACTIONS(SHIFT(103)),
        [sym__declaration] = ACTIONS(SHIFT(103)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym__expression] = ACTIONS(SHIFT(103)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(177)),
        [anon_sym_for] = ACTIONS(SHIFT(8)),
        [anon_sym_while] = ACTIONS(SHIFT(9)),
        [anon_sym_let] = ACTIONS(SHIFT(10)),
        [anon_sym_var] = ACTIONS(SHIFT(11)),
        [anon_sym_repeat] = ACTIONS(SHIFT(12)),
        [anon_sym_if] = ACTIONS(SHIFT(13)),
        [anon_sym_guard] = ACTIONS(SHIFT(14)),
        [anon_sym_switch] = ACTIONS(SHIFT(15)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(178)),
        [anon_sym_break] = ACTIONS(SHIFT(16)),
        [anon_sym_continue] = ACTIONS(SHIFT(17)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(103)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [sym_identifier] = ACTIONS(SHIFT(25)),
    },
    [177] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(179)),
    },
    [178] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [179] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [180] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_throw_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_throw_statement, 2)),
    },
    [181] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [182] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_return_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_return_statement, 2)),
    },
    [183] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_continue_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_continue_statement, 2)),
    },
    [184] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_break_statement, 2)),
    },
    [185] = {
        [anon_sym_LBRACE] = ACTIONS(SHIFT(187)),
    },
    [186] = {
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [187] = {
        [sym_case_statement] = ACTIONS(SHIFT(188)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(189)),
        [anon_sym_case] = ACTIONS(SHIFT(190)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(191)),
        [anon_sym_default] = ACTIONS(SHIFT(192)),
    },
    [188] = {
        [sym_case_statement] = ACTIONS(SHIFT(188)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(234)),
        [anon_sym_case] = ACTIONS(SHIFT(190)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 1)),
        [anon_sym_default] = ACTIONS(SHIFT(192)),
    },
    [189] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(233)),
    },
    [190] = {
        [sym__pattern] = ACTIONS(SHIFT(199)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(200)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(200)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(200)),
        [sym_optional_pattern] = ACTIONS(SHIFT(200)),
        [sym_is_pattern] = ACTIONS(SHIFT(200)),
        [sym_as_pattern] = ACTIONS(SHIFT(200)),
        [sym__expression] = ACTIONS(SHIFT(200)),
        [sym__type_identifier] = ACTIONS(SHIFT(201)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(202)),
        [anon_sym_let] = ACTIONS(SHIFT(203)),
        [anon_sym_var] = ACTIONS(SHIFT(203)),
        [anon_sym_DOT] = ACTIONS(SHIFT(204)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(200)),
        [anon_sym_is] = ACTIONS(SHIFT(205)),
        [sym_identifier] = ACTIONS(SHIFT(206)),
    },
    [191] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_switch_statement, 4)),
    },
    [192] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(193)),
    },
    [193] = {
        [sym__statement] = ACTIONS(SHIFT(194)),
        [sym__loop_statement] = ACTIONS(SHIFT(195)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(195)),
        [sym_guard_statement] = ACTIONS(SHIFT(195)),
        [sym_switch_statement] = ACTIONS(SHIFT(195)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [sym_labeled_statement] = ACTIONS(SHIFT(195)),
        [sym_break_statement] = ACTIONS(SHIFT(195)),
        [sym_continue_statement] = ACTIONS(SHIFT(195)),
        [sym_return_statement] = ACTIONS(SHIFT(195)),
        [sym_throw_statement] = ACTIONS(SHIFT(195)),
        [sym_defer_statement] = ACTIONS(SHIFT(195)),
        [sym_do_statement] = ACTIONS(SHIFT(195)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(195)),
        [sym_line_control_statement] = ACTIONS(SHIFT(195)),
        [sym__declaration] = ACTIONS(SHIFT(195)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym__expression] = ACTIONS(SHIFT(195)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(196)),
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
        [sym_fallthrough_statement] = ACTIONS(SHIFT(195)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [sym_identifier] = ACTIONS(SHIFT(25)),
    },
    [194] = {
        [sym__statement] = ACTIONS(SHIFT(194)),
        [sym__loop_statement] = ACTIONS(SHIFT(195)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(195)),
        [sym_guard_statement] = ACTIONS(SHIFT(195)),
        [sym_switch_statement] = ACTIONS(SHIFT(195)),
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [sym_labeled_statement] = ACTIONS(SHIFT(195)),
        [sym_break_statement] = ACTIONS(SHIFT(195)),
        [sym_continue_statement] = ACTIONS(SHIFT(195)),
        [sym_return_statement] = ACTIONS(SHIFT(195)),
        [sym_throw_statement] = ACTIONS(SHIFT(195)),
        [sym_defer_statement] = ACTIONS(SHIFT(195)),
        [sym_do_statement] = ACTIONS(SHIFT(195)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(195)),
        [sym_line_control_statement] = ACTIONS(SHIFT(195)),
        [sym__declaration] = ACTIONS(SHIFT(195)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym__expression] = ACTIONS(SHIFT(195)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(198)),
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
        [sym_fallthrough_statement] = ACTIONS(SHIFT(195)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [sym_identifier] = ACTIONS(SHIFT(25)),
    },
    [195] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(197)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(SHIFT(197)),
    },
    [196] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 3)),
    },
    [197] = {
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
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [198] = {
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_case] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [199] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(225)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(226)),
        [anon_sym_COLON] = ACTIONS(SHIFT(227)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(216)),
        [anon_sym_as] = ACTIONS(SHIFT(217)),
    },
    [200] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [201] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(222)),
    },
    [202] = {
        [sym__pattern] = ACTIONS(SHIFT(134)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(135)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(135)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(219)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(135)),
        [sym_optional_pattern] = ACTIONS(SHIFT(135)),
        [sym_is_pattern] = ACTIONS(SHIFT(135)),
        [sym_as_pattern] = ACTIONS(SHIFT(135)),
        [sym__expression] = ACTIONS(SHIFT(135)),
        [sym__type_identifier] = ACTIONS(SHIFT(137)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(138)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(220)),
        [anon_sym_let] = ACTIONS(SHIFT(140)),
        [anon_sym_var] = ACTIONS(SHIFT(140)),
        [anon_sym_DOT] = ACTIONS(SHIFT(141)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(135)),
        [anon_sym_is] = ACTIONS(SHIFT(142)),
        [sym_identifier] = ACTIONS(SHIFT(143)),
    },
    [203] = {
        [sym__pattern] = ACTIONS(SHIFT(215)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(200)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(200)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(200)),
        [sym_optional_pattern] = ACTIONS(SHIFT(200)),
        [sym_is_pattern] = ACTIONS(SHIFT(200)),
        [sym_as_pattern] = ACTIONS(SHIFT(200)),
        [sym__expression] = ACTIONS(SHIFT(200)),
        [sym__type_identifier] = ACTIONS(SHIFT(201)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(202)),
        [anon_sym_let] = ACTIONS(SHIFT(203)),
        [anon_sym_var] = ACTIONS(SHIFT(203)),
        [anon_sym_DOT] = ACTIONS(SHIFT(204)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(200)),
        [anon_sym_is] = ACTIONS(SHIFT(205)),
        [sym_identifier] = ACTIONS(SHIFT(206)),
    },
    [204] = {
        [sym_identifier] = ACTIONS(SHIFT(213)),
    },
    [205] = {
        [sym_type] = ACTIONS(SHIFT(207)),
        [sym__type_identifier] = ACTIONS(SHIFT(208)),
        [sym__type_name] = ACTIONS(SHIFT(209)),
        [sym_identifier] = ACTIONS(SHIFT(210)),
    },
    [206] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [207] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [208] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [209] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(211)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [210] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [211] = {
        [sym__type_identifier] = ACTIONS(SHIFT(212)),
        [sym__type_name] = ACTIONS(SHIFT(209)),
        [sym_identifier] = ACTIONS(SHIFT(210)),
    },
    [212] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [213] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(214)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(202)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [214] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [215] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(216)),
        [anon_sym_as] = ACTIONS(SHIFT(217)),
    },
    [216] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [217] = {
        [sym_type] = ACTIONS(SHIFT(218)),
        [sym__type_identifier] = ACTIONS(SHIFT(208)),
        [sym__type_name] = ACTIONS(SHIFT(209)),
        [sym_identifier] = ACTIONS(SHIFT(210)),
    },
    [218] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [219] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(221)),
    },
    [220] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [221] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [222] = {
        [sym_identifier] = ACTIONS(SHIFT(223)),
    },
    [223] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(224)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(202)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [224] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [225] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(231)),
    },
    [226] = {
        [sym__pattern] = ACTIONS(SHIFT(229)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(200)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(200)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(200)),
        [sym_optional_pattern] = ACTIONS(SHIFT(200)),
        [sym_is_pattern] = ACTIONS(SHIFT(200)),
        [sym_as_pattern] = ACTIONS(SHIFT(200)),
        [sym__expression] = ACTIONS(SHIFT(200)),
        [sym__type_identifier] = ACTIONS(SHIFT(201)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(202)),
        [anon_sym_let] = ACTIONS(SHIFT(203)),
        [anon_sym_var] = ACTIONS(SHIFT(203)),
        [anon_sym_DOT] = ACTIONS(SHIFT(204)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(200)),
        [anon_sym_is] = ACTIONS(SHIFT(205)),
        [sym_identifier] = ACTIONS(SHIFT(206)),
    },
    [227] = {
        [sym__statement] = ACTIONS(SHIFT(194)),
        [sym__loop_statement] = ACTIONS(SHIFT(195)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(195)),
        [sym_guard_statement] = ACTIONS(SHIFT(195)),
        [sym_switch_statement] = ACTIONS(SHIFT(195)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [sym_labeled_statement] = ACTIONS(SHIFT(195)),
        [sym_break_statement] = ACTIONS(SHIFT(195)),
        [sym_continue_statement] = ACTIONS(SHIFT(195)),
        [sym_return_statement] = ACTIONS(SHIFT(195)),
        [sym_throw_statement] = ACTIONS(SHIFT(195)),
        [sym_defer_statement] = ACTIONS(SHIFT(195)),
        [sym_do_statement] = ACTIONS(SHIFT(195)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(195)),
        [sym_line_control_statement] = ACTIONS(SHIFT(195)),
        [sym__declaration] = ACTIONS(SHIFT(195)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym__expression] = ACTIONS(SHIFT(195)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(228)),
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
        [sym_fallthrough_statement] = ACTIONS(SHIFT(195)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [sym_identifier] = ACTIONS(SHIFT(25)),
    },
    [228] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 4)),
    },
    [229] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(230)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(226)),
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(216)),
        [anon_sym_as] = ACTIONS(SHIFT(217)),
    },
    [230] = {
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [231] = {
        [sym__statement] = ACTIONS(SHIFT(194)),
        [sym__loop_statement] = ACTIONS(SHIFT(195)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(195)),
        [sym_guard_statement] = ACTIONS(SHIFT(195)),
        [sym_switch_statement] = ACTIONS(SHIFT(195)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [sym_labeled_statement] = ACTIONS(SHIFT(195)),
        [sym_break_statement] = ACTIONS(SHIFT(195)),
        [sym_continue_statement] = ACTIONS(SHIFT(195)),
        [sym_return_statement] = ACTIONS(SHIFT(195)),
        [sym_throw_statement] = ACTIONS(SHIFT(195)),
        [sym_defer_statement] = ACTIONS(SHIFT(195)),
        [sym_do_statement] = ACTIONS(SHIFT(195)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(195)),
        [sym_line_control_statement] = ACTIONS(SHIFT(195)),
        [sym__declaration] = ACTIONS(SHIFT(195)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym__expression] = ACTIONS(SHIFT(195)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(232)),
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
        [sym_fallthrough_statement] = ACTIONS(SHIFT(195)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [sym_identifier] = ACTIONS(SHIFT(25)),
    },
    [232] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 5)),
    },
    [233] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_switch_statement, 5)),
    },
    [234] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 2)),
    },
    [235] = {
        [anon_sym_else] = ACTIONS(SHIFT(309)),
    },
    [236] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(308)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(302)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [237] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1), SHIFT(305)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [238] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [239] = {
        [anon_sym_COMMA] = ACTIONS(SHIFT(299)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [240] = {
        [sym__pattern] = ACTIONS(SHIFT(296)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(246)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(246)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(246)),
        [sym_optional_pattern] = ACTIONS(SHIFT(246)),
        [sym_is_pattern] = ACTIONS(SHIFT(246)),
        [sym_as_pattern] = ACTIONS(SHIFT(246)),
        [sym__expression] = ACTIONS(SHIFT(246)),
        [sym__type_identifier] = ACTIONS(SHIFT(247)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(248)),
        [anon_sym_let] = ACTIONS(SHIFT(249)),
        [anon_sym_var] = ACTIONS(SHIFT(249)),
        [anon_sym_DOT] = ACTIONS(SHIFT(250)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(246)),
        [anon_sym_is] = ACTIONS(SHIFT(251)),
        [sym_identifier] = ACTIONS(SHIFT(252)),
    },
    [241] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(281)),
    },
    [242] = {
        [sym_optional_binding] = ACTIONS(SHIFT(244)),
        [sym__pattern] = ACTIONS(SHIFT(245)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(246)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(246)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(246)),
        [sym_optional_pattern] = ACTIONS(SHIFT(246)),
        [sym_is_pattern] = ACTIONS(SHIFT(246)),
        [sym_as_pattern] = ACTIONS(SHIFT(246)),
        [sym__expression] = ACTIONS(SHIFT(246)),
        [sym__type_identifier] = ACTIONS(SHIFT(247)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(248)),
        [anon_sym_let] = ACTIONS(SHIFT(249)),
        [anon_sym_var] = ACTIONS(SHIFT(249)),
        [anon_sym_DOT] = ACTIONS(SHIFT(250)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(246)),
        [anon_sym_is] = ACTIONS(SHIFT(251)),
        [sym_identifier] = ACTIONS(SHIFT(252)),
    },
    [243] = {
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [244] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(274)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
    },
    [245] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(271)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(262)),
        [anon_sym_as] = ACTIONS(SHIFT(263)),
    },
    [246] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [247] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(268)),
    },
    [248] = {
        [sym__pattern] = ACTIONS(SHIFT(134)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(135)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(135)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(265)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(135)),
        [sym_optional_pattern] = ACTIONS(SHIFT(135)),
        [sym_is_pattern] = ACTIONS(SHIFT(135)),
        [sym_as_pattern] = ACTIONS(SHIFT(135)),
        [sym__expression] = ACTIONS(SHIFT(135)),
        [sym__type_identifier] = ACTIONS(SHIFT(137)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(138)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(266)),
        [anon_sym_let] = ACTIONS(SHIFT(140)),
        [anon_sym_var] = ACTIONS(SHIFT(140)),
        [anon_sym_DOT] = ACTIONS(SHIFT(141)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(135)),
        [anon_sym_is] = ACTIONS(SHIFT(142)),
        [sym_identifier] = ACTIONS(SHIFT(143)),
    },
    [249] = {
        [sym__pattern] = ACTIONS(SHIFT(261)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(246)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(246)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(246)),
        [sym_optional_pattern] = ACTIONS(SHIFT(246)),
        [sym_is_pattern] = ACTIONS(SHIFT(246)),
        [sym_as_pattern] = ACTIONS(SHIFT(246)),
        [sym__expression] = ACTIONS(SHIFT(246)),
        [sym__type_identifier] = ACTIONS(SHIFT(247)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(248)),
        [anon_sym_let] = ACTIONS(SHIFT(249)),
        [anon_sym_var] = ACTIONS(SHIFT(249)),
        [anon_sym_DOT] = ACTIONS(SHIFT(250)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(246)),
        [anon_sym_is] = ACTIONS(SHIFT(251)),
        [sym_identifier] = ACTIONS(SHIFT(252)),
    },
    [250] = {
        [sym_identifier] = ACTIONS(SHIFT(259)),
    },
    [251] = {
        [sym_type] = ACTIONS(SHIFT(253)),
        [sym__type_identifier] = ACTIONS(SHIFT(254)),
        [sym__type_name] = ACTIONS(SHIFT(255)),
        [sym_identifier] = ACTIONS(SHIFT(256)),
    },
    [252] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [253] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [254] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [255] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(257)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [256] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [257] = {
        [sym__type_identifier] = ACTIONS(SHIFT(258)),
        [sym__type_name] = ACTIONS(SHIFT(255)),
        [sym_identifier] = ACTIONS(SHIFT(256)),
    },
    [258] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [259] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(260)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(248)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [260] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [261] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(262)),
        [anon_sym_as] = ACTIONS(SHIFT(263)),
    },
    [262] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [263] = {
        [sym_type] = ACTIONS(SHIFT(264)),
        [sym__type_identifier] = ACTIONS(SHIFT(254)),
        [sym__type_name] = ACTIONS(SHIFT(255)),
        [sym_identifier] = ACTIONS(SHIFT(256)),
    },
    [264] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [265] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(267)),
    },
    [266] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [267] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [268] = {
        [sym_identifier] = ACTIONS(SHIFT(269)),
    },
    [269] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(270)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(248)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [270] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [271] = {
        [sym__expression] = ACTIONS(SHIFT(272)),
        [sym_identifier] = ACTIONS(SHIFT(273)),
    },
    [272] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [273] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [274] = {
        [sym_optional_binding] = ACTIONS(SHIFT(275)),
        [sym__pattern] = ACTIONS(SHIFT(276)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(246)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(246)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(246)),
        [sym_optional_pattern] = ACTIONS(SHIFT(246)),
        [sym_is_pattern] = ACTIONS(SHIFT(246)),
        [sym_as_pattern] = ACTIONS(SHIFT(246)),
        [sym__expression] = ACTIONS(SHIFT(246)),
        [sym__type_identifier] = ACTIONS(SHIFT(247)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(248)),
        [anon_sym_let] = ACTIONS(SHIFT(249)),
        [anon_sym_var] = ACTIONS(SHIFT(249)),
        [anon_sym_DOT] = ACTIONS(SHIFT(250)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(246)),
        [anon_sym_is] = ACTIONS(SHIFT(251)),
        [sym_identifier] = ACTIONS(SHIFT(252)),
    },
    [275] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(SHIFT(280)),
        [anon_sym_COMMA] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
    },
    [276] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(277)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(262)),
        [anon_sym_as] = ACTIONS(SHIFT(263)),
    },
    [277] = {
        [sym__expression] = ACTIONS(SHIFT(278)),
        [sym_identifier] = ACTIONS(SHIFT(279)),
    },
    [278] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [279] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [280] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
    },
    [281] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(282)),
        [anon_sym_iOS] = ACTIONS(SHIFT(283)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(283)),
        [anon_sym_OSX] = ACTIONS(SHIFT(283)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(283)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(283)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(283)),
    },
    [282] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(294)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(295)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(287)),
    },
    [283] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(284)),
    },
    [284] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(285)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(286)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(287)),
    },
    [285] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(293)),
    },
    [286] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 5)),
    },
    [287] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(288)),
        [anon_sym_iOS] = ACTIONS(SHIFT(289)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(289)),
        [anon_sym_OSX] = ACTIONS(SHIFT(289)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(289)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(289)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(289)),
    },
    [288] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(292)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(287)),
    },
    [289] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(290)),
    },
    [290] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(291)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 3)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(287)),
    },
    [291] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 4)),
    },
    [292] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 3)),
    },
    [293] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 6)),
    },
    [294] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(286)),
    },
    [295] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 4)),
    },
    [296] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(297)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(262)),
        [anon_sym_as] = ACTIONS(SHIFT(263)),
    },
    [297] = {
        [sym__expression] = ACTIONS(SHIFT(298)),
        [sym_identifier] = ACTIONS(SHIFT(273)),
    },
    [298] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_case_condition, 4)),
    },
    [299] = {
        [sym__condition] = ACTIONS(SHIFT(300)),
        [sym_availability_condition] = ACTIONS(SHIFT(238)),
        [sym_case_condition] = ACTIONS(SHIFT(238)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(238)),
        [anon_sym_case] = ACTIONS(SHIFT(240)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(241)),
        [anon_sym_let] = ACTIONS(SHIFT(242)),
        [anon_sym_var] = ACTIONS(SHIFT(242)),
    },
    [300] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(301)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(302)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [301] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 4)),
    },
    [302] = {
        [sym__condition] = ACTIONS(SHIFT(303)),
        [sym_availability_condition] = ACTIONS(SHIFT(238)),
        [sym_case_condition] = ACTIONS(SHIFT(238)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(238)),
        [anon_sym_case] = ACTIONS(SHIFT(240)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(241)),
        [anon_sym_let] = ACTIONS(SHIFT(242)),
        [anon_sym_var] = ACTIONS(SHIFT(242)),
    },
    [303] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(304)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(302)),
        [anon_sym_else] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
    },
    [304] = {
        [anon_sym_else] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
    },
    [305] = {
        [sym__expression] = ACTIONS(SHIFT(306)),
        [sym_identifier] = ACTIONS(SHIFT(307)),
    },
    [306] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [307] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [308] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 2)),
    },
    [309] = {
        [sym__code_block] = ACTIONS(SHIFT(310)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(176)),
    },
    [310] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_guard_statement, 4)),
    },
    [311] = {
        [sym__code_block] = ACTIONS(SHIFT(354)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(355)),
    },
    [312] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(353)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(347)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [313] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1), SHIFT(350)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [314] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [315] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(344)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [316] = {
        [sym__pattern] = ACTIONS(SHIFT(341)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(246)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(246)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(246)),
        [sym_optional_pattern] = ACTIONS(SHIFT(246)),
        [sym_is_pattern] = ACTIONS(SHIFT(246)),
        [sym_as_pattern] = ACTIONS(SHIFT(246)),
        [sym__expression] = ACTIONS(SHIFT(246)),
        [sym__type_identifier] = ACTIONS(SHIFT(247)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(248)),
        [anon_sym_let] = ACTIONS(SHIFT(249)),
        [anon_sym_var] = ACTIONS(SHIFT(249)),
        [anon_sym_DOT] = ACTIONS(SHIFT(250)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(246)),
        [anon_sym_is] = ACTIONS(SHIFT(251)),
        [sym_identifier] = ACTIONS(SHIFT(252)),
    },
    [317] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(332)),
    },
    [318] = {
        [sym_optional_binding] = ACTIONS(SHIFT(320)),
        [sym__pattern] = ACTIONS(SHIFT(321)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(246)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(246)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(246)),
        [sym_optional_pattern] = ACTIONS(SHIFT(246)),
        [sym_is_pattern] = ACTIONS(SHIFT(246)),
        [sym_as_pattern] = ACTIONS(SHIFT(246)),
        [sym__expression] = ACTIONS(SHIFT(246)),
        [sym__type_identifier] = ACTIONS(SHIFT(247)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(248)),
        [anon_sym_let] = ACTIONS(SHIFT(249)),
        [anon_sym_var] = ACTIONS(SHIFT(249)),
        [anon_sym_DOT] = ACTIONS(SHIFT(250)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(246)),
        [anon_sym_is] = ACTIONS(SHIFT(251)),
        [sym_identifier] = ACTIONS(SHIFT(252)),
    },
    [319] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [320] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(325)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
    },
    [321] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(322)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(262)),
        [anon_sym_as] = ACTIONS(SHIFT(263)),
    },
    [322] = {
        [sym__expression] = ACTIONS(SHIFT(323)),
        [sym_identifier] = ACTIONS(SHIFT(324)),
    },
    [323] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [324] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [325] = {
        [sym_optional_binding] = ACTIONS(SHIFT(326)),
        [sym__pattern] = ACTIONS(SHIFT(327)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(246)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(246)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(246)),
        [sym_optional_pattern] = ACTIONS(SHIFT(246)),
        [sym_is_pattern] = ACTIONS(SHIFT(246)),
        [sym_as_pattern] = ACTIONS(SHIFT(246)),
        [sym__expression] = ACTIONS(SHIFT(246)),
        [sym__type_identifier] = ACTIONS(SHIFT(247)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(248)),
        [anon_sym_let] = ACTIONS(SHIFT(249)),
        [anon_sym_var] = ACTIONS(SHIFT(249)),
        [anon_sym_DOT] = ACTIONS(SHIFT(250)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(246)),
        [anon_sym_is] = ACTIONS(SHIFT(251)),
        [sym_identifier] = ACTIONS(SHIFT(252)),
    },
    [326] = {
        [sym__code_block] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(SHIFT(331)),
        [anon_sym_COMMA] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
    },
    [327] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(328)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(262)),
        [anon_sym_as] = ACTIONS(SHIFT(263)),
    },
    [328] = {
        [sym__expression] = ACTIONS(SHIFT(329)),
        [sym_identifier] = ACTIONS(SHIFT(330)),
    },
    [329] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [330] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [331] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
    },
    [332] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(333)),
        [anon_sym_iOS] = ACTIONS(SHIFT(334)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(334)),
        [anon_sym_OSX] = ACTIONS(SHIFT(334)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(334)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(334)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(334)),
    },
    [333] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(339)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(340)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(287)),
    },
    [334] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(335)),
    },
    [335] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(336)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(337)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(287)),
    },
    [336] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(338)),
    },
    [337] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 5)),
    },
    [338] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 6)),
    },
    [339] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(337)),
    },
    [340] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 4)),
    },
    [341] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(342)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(262)),
        [anon_sym_as] = ACTIONS(SHIFT(263)),
    },
    [342] = {
        [sym__expression] = ACTIONS(SHIFT(343)),
        [sym_identifier] = ACTIONS(SHIFT(324)),
    },
    [343] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_case_condition, 4)),
    },
    [344] = {
        [sym__condition] = ACTIONS(SHIFT(345)),
        [sym_availability_condition] = ACTIONS(SHIFT(314)),
        [sym_case_condition] = ACTIONS(SHIFT(314)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(314)),
        [anon_sym_case] = ACTIONS(SHIFT(316)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(317)),
        [anon_sym_let] = ACTIONS(SHIFT(318)),
        [anon_sym_var] = ACTIONS(SHIFT(318)),
    },
    [345] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(346)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(347)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [346] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 4)),
    },
    [347] = {
        [sym__condition] = ACTIONS(SHIFT(348)),
        [sym_availability_condition] = ACTIONS(SHIFT(314)),
        [sym_case_condition] = ACTIONS(SHIFT(314)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(314)),
        [anon_sym_case] = ACTIONS(SHIFT(316)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(317)),
        [anon_sym_let] = ACTIONS(SHIFT(318)),
        [anon_sym_var] = ACTIONS(SHIFT(318)),
    },
    [348] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(349)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(347)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
    },
    [349] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
    },
    [350] = {
        [sym__expression] = ACTIONS(SHIFT(351)),
        [sym_identifier] = ACTIONS(SHIFT(352)),
    },
    [351] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [352] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [353] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 2)),
    },
    [354] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_else] = ACTIONS(SHIFT(359)),
    },
    [355] = {
        [sym__statement] = ACTIONS(SHIFT(102)),
        [sym__loop_statement] = ACTIONS(SHIFT(103)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(103)),
        [sym_guard_statement] = ACTIONS(SHIFT(103)),
        [sym_switch_statement] = ACTIONS(SHIFT(103)),
        [sym_labeled_statement] = ACTIONS(SHIFT(103)),
        [sym_break_statement] = ACTIONS(SHIFT(103)),
        [sym_continue_statement] = ACTIONS(SHIFT(103)),
        [sym_return_statement] = ACTIONS(SHIFT(103)),
        [sym_throw_statement] = ACTIONS(SHIFT(103)),
        [sym_defer_statement] = ACTIONS(SHIFT(103)),
        [sym_do_statement] = ACTIONS(SHIFT(103)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(103)),
        [sym_line_control_statement] = ACTIONS(SHIFT(103)),
        [sym__declaration] = ACTIONS(SHIFT(103)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym__expression] = ACTIONS(SHIFT(103)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(356)),
        [anon_sym_for] = ACTIONS(SHIFT(8)),
        [anon_sym_while] = ACTIONS(SHIFT(9)),
        [anon_sym_let] = ACTIONS(SHIFT(10)),
        [anon_sym_var] = ACTIONS(SHIFT(11)),
        [anon_sym_repeat] = ACTIONS(SHIFT(12)),
        [anon_sym_if] = ACTIONS(SHIFT(13)),
        [anon_sym_guard] = ACTIONS(SHIFT(14)),
        [anon_sym_switch] = ACTIONS(SHIFT(15)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(357)),
        [anon_sym_break] = ACTIONS(SHIFT(16)),
        [anon_sym_continue] = ACTIONS(SHIFT(17)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(103)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [sym_identifier] = ACTIONS(SHIFT(25)),
    },
    [356] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(358)),
    },
    [357] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [358] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [359] = {
        [sym_if_statement] = ACTIONS(SHIFT(360)),
        [sym__code_block] = ACTIONS(SHIFT(360)),
        [anon_sym_if] = ACTIONS(SHIFT(13)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(176)),
    },
    [360] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_if_statement, 5)),
    },
    [361] = {
        [anon_sym_while] = ACTIONS(SHIFT(366)),
    },
    [362] = {
        [sym__statement] = ACTIONS(SHIFT(102)),
        [sym__loop_statement] = ACTIONS(SHIFT(103)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(103)),
        [sym_guard_statement] = ACTIONS(SHIFT(103)),
        [sym_switch_statement] = ACTIONS(SHIFT(103)),
        [sym_labeled_statement] = ACTIONS(SHIFT(103)),
        [sym_break_statement] = ACTIONS(SHIFT(103)),
        [sym_continue_statement] = ACTIONS(SHIFT(103)),
        [sym_return_statement] = ACTIONS(SHIFT(103)),
        [sym_throw_statement] = ACTIONS(SHIFT(103)),
        [sym_defer_statement] = ACTIONS(SHIFT(103)),
        [sym_do_statement] = ACTIONS(SHIFT(103)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(103)),
        [sym_line_control_statement] = ACTIONS(SHIFT(103)),
        [sym__declaration] = ACTIONS(SHIFT(103)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym__expression] = ACTIONS(SHIFT(103)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(363)),
        [anon_sym_for] = ACTIONS(SHIFT(8)),
        [anon_sym_while] = ACTIONS(SHIFT(9)),
        [anon_sym_let] = ACTIONS(SHIFT(10)),
        [anon_sym_var] = ACTIONS(SHIFT(11)),
        [anon_sym_repeat] = ACTIONS(SHIFT(12)),
        [anon_sym_if] = ACTIONS(SHIFT(13)),
        [anon_sym_guard] = ACTIONS(SHIFT(14)),
        [anon_sym_switch] = ACTIONS(SHIFT(15)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(364)),
        [anon_sym_break] = ACTIONS(SHIFT(16)),
        [anon_sym_continue] = ACTIONS(SHIFT(17)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(103)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [sym_identifier] = ACTIONS(SHIFT(25)),
    },
    [363] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(365)),
    },
    [364] = {
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [365] = {
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [366] = {
        [sym__expression] = ACTIONS(SHIFT(367)),
        [sym_identifier] = ACTIONS(SHIFT(181)),
    },
    [367] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
    },
    [368] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(SHIFT(394)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_constant_declaration, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_constant_declaration, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(395)),
        [anon_sym_EQ] = ACTIONS(SHIFT(396)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(385)),
        [anon_sym_as] = ACTIONS(SHIFT(386)),
    },
    [369] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [370] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(391)),
    },
    [371] = {
        [sym__pattern] = ACTIONS(SHIFT(134)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(135)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(135)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(388)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(135)),
        [sym_optional_pattern] = ACTIONS(SHIFT(135)),
        [sym_is_pattern] = ACTIONS(SHIFT(135)),
        [sym_as_pattern] = ACTIONS(SHIFT(135)),
        [sym__expression] = ACTIONS(SHIFT(135)),
        [sym__type_identifier] = ACTIONS(SHIFT(137)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(138)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(389)),
        [anon_sym_let] = ACTIONS(SHIFT(140)),
        [anon_sym_var] = ACTIONS(SHIFT(140)),
        [anon_sym_DOT] = ACTIONS(SHIFT(141)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(135)),
        [anon_sym_is] = ACTIONS(SHIFT(142)),
        [sym_identifier] = ACTIONS(SHIFT(143)),
    },
    [372] = {
        [sym__pattern] = ACTIONS(SHIFT(384)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(369)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(369)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(369)),
        [sym_optional_pattern] = ACTIONS(SHIFT(369)),
        [sym_is_pattern] = ACTIONS(SHIFT(369)),
        [sym_as_pattern] = ACTIONS(SHIFT(369)),
        [sym__expression] = ACTIONS(SHIFT(369)),
        [sym__type_identifier] = ACTIONS(SHIFT(370)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(371)),
        [anon_sym_let] = ACTIONS(SHIFT(372)),
        [anon_sym_var] = ACTIONS(SHIFT(372)),
        [anon_sym_DOT] = ACTIONS(SHIFT(373)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(369)),
        [anon_sym_is] = ACTIONS(SHIFT(374)),
        [sym_identifier] = ACTIONS(SHIFT(375)),
    },
    [373] = {
        [sym_identifier] = ACTIONS(SHIFT(382)),
    },
    [374] = {
        [sym_type] = ACTIONS(SHIFT(376)),
        [sym__type_identifier] = ACTIONS(SHIFT(377)),
        [sym__type_name] = ACTIONS(SHIFT(378)),
        [sym_identifier] = ACTIONS(SHIFT(379)),
    },
    [375] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [376] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [377] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_type, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [378] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(380)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [379] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__type_name, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [380] = {
        [sym__type_identifier] = ACTIONS(SHIFT(381)),
        [sym__type_name] = ACTIONS(SHIFT(378)),
        [sym_identifier] = ACTIONS(SHIFT(379)),
    },
    [381] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [382] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(383)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(371)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [383] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [384] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(385)),
        [anon_sym_as] = ACTIONS(SHIFT(386)),
    },
    [385] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [386] = {
        [sym_type] = ACTIONS(SHIFT(387)),
        [sym__type_identifier] = ACTIONS(SHIFT(377)),
        [sym__type_name] = ACTIONS(SHIFT(378)),
        [sym_identifier] = ACTIONS(SHIFT(379)),
    },
    [387] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [388] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(390)),
    },
    [389] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [390] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [391] = {
        [sym_identifier] = ACTIONS(SHIFT(392)),
    },
    [392] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(393)),
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(371)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [393] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [394] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_constant_declaration, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_constant_declaration, 3)),
    },
    [395] = {
        [sym__pattern] = ACTIONS(SHIFT(400)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(369)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(369)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(369)),
        [sym_optional_pattern] = ACTIONS(SHIFT(369)),
        [sym_is_pattern] = ACTIONS(SHIFT(369)),
        [sym_as_pattern] = ACTIONS(SHIFT(369)),
        [sym__expression] = ACTIONS(SHIFT(369)),
        [sym__type_identifier] = ACTIONS(SHIFT(370)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(371)),
        [anon_sym_let] = ACTIONS(SHIFT(372)),
        [anon_sym_var] = ACTIONS(SHIFT(372)),
        [anon_sym_DOT] = ACTIONS(SHIFT(373)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(369)),
        [anon_sym_is] = ACTIONS(SHIFT(374)),
        [sym_identifier] = ACTIONS(SHIFT(375)),
    },
    [396] = {
        [sym__expression] = ACTIONS(SHIFT(397)),
        [sym_identifier] = ACTIONS(SHIFT(398)),
    },
    [397] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(SHIFT(399)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_constant_declaration, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_constant_declaration, 4)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(395)),
    },
    [398] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [399] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_constant_declaration, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_constant_declaration, 5)),
    },
    [400] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(SHIFT(401)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_constant_declaration_repeat1, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_constant_declaration_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(395)),
        [anon_sym_EQ] = ACTIONS(SHIFT(402)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(385)),
        [anon_sym_as] = ACTIONS(SHIFT(386)),
    },
    [401] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_constant_declaration_repeat1, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_constant_declaration_repeat1, 3)),
    },
    [402] = {
        [sym__expression] = ACTIONS(SHIFT(403)),
        [sym_identifier] = ACTIONS(SHIFT(398)),
    },
    [403] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(SHIFT(404)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_constant_declaration_repeat1, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_constant_declaration_repeat1, 4)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(395)),
    },
    [404] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_constant_declaration_repeat1, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_constant_declaration_repeat1, 5)),
    },
    [405] = {
        [sym__code_block] = ACTIONS(SHIFT(406)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(176)),
    },
    [406] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_while_statement, 3)),
    },
    [407] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(507)),
    },
    [408] = {
        [sym__code_block] = ACTIONS(SHIFT(506)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(176)),
    },
    [409] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__for_init, 1)),
    },
    [410] = {
        [sym__variable_name] = ACTIONS(SHIFT(491)),
        [sym_identifier] = ACTIONS(SHIFT(492)),
    },
    [411] = {
        [sym__type_annotation] = ACTIONS(SHIFT(487)),
        [anon_sym_in] = ACTIONS(SHIFT(488)),
        [anon_sym_COLON] = ACTIONS(SHIFT(443)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(437)),
        [anon_sym_as] = ACTIONS(SHIFT(438)),
    },
    [412] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [413] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(468)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(469)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [414] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(484)),
    },
    [415] = {
        [sym__expression] = ACTIONS(SHIFT(479)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(480)),
        [sym_identifier] = ACTIONS(SHIFT(463)),
    },
    [416] = {
        [sym__for_init] = ACTIONS(SHIFT(455)),
        [sym__for_condition] = ACTIONS(SHIFT(456)),
        [sym_variable_declaration] = ACTIONS(SHIFT(409)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(410)),
        [sym__pattern] = ACTIONS(SHIFT(134)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(135)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(135)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(432)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(135)),
        [sym_optional_pattern] = ACTIONS(SHIFT(135)),
        [sym_is_pattern] = ACTIONS(SHIFT(135)),
        [sym_as_pattern] = ACTIONS(SHIFT(135)),
        [sym__expression] = ACTIONS(SHIFT(457)),
        [sym__expression_list] = ACTIONS(SHIFT(409)),
        [sym__type_identifier] = ACTIONS(SHIFT(137)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(458)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(138)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(433)),
        [anon_sym_let] = ACTIONS(SHIFT(140)),
        [anon_sym_var] = ACTIONS(SHIFT(459)),
        [anon_sym_DOT] = ACTIONS(SHIFT(141)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(135)),
        [anon_sym_is] = ACTIONS(SHIFT(142)),
        [sym_identifier] = ACTIONS(SHIFT(460)),
    },
    [417] = {
        [sym__pattern] = ACTIONS(SHIFT(440)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(412)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(412)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(412)),
        [sym_optional_pattern] = ACTIONS(SHIFT(412)),
        [sym_is_pattern] = ACTIONS(SHIFT(412)),
        [sym_as_pattern] = ACTIONS(SHIFT(412)),
        [sym__expression] = ACTIONS(SHIFT(412)),
        [sym__type_identifier] = ACTIONS(SHIFT(414)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(431)),
        [anon_sym_let] = ACTIONS(SHIFT(418)),
        [anon_sym_var] = ACTIONS(SHIFT(418)),
        [anon_sym_DOT] = ACTIONS(SHIFT(420)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(412)),
        [anon_sym_is] = ACTIONS(SHIFT(421)),
        [sym_identifier] = ACTIONS(SHIFT(436)),
    },
    [418] = {
        [sym__pattern] = ACTIONS(SHIFT(435)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(412)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(412)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(412)),
        [sym_optional_pattern] = ACTIONS(SHIFT(412)),
        [sym_is_pattern] = ACTIONS(SHIFT(412)),
        [sym_as_pattern] = ACTIONS(SHIFT(412)),
        [sym__expression] = ACTIONS(SHIFT(412)),
        [sym__type_identifier] = ACTIONS(SHIFT(414)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(431)),
        [anon_sym_let] = ACTIONS(SHIFT(418)),
        [anon_sym_var] = ACTIONS(SHIFT(418)),
        [anon_sym_DOT] = ACTIONS(SHIFT(420)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(412)),
        [anon_sym_is] = ACTIONS(SHIFT(421)),
        [sym_identifier] = ACTIONS(SHIFT(436)),
    },
    [419] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(435)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(412)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(412)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(412)),
        [sym_optional_pattern] = ACTIONS(SHIFT(412)),
        [sym_is_pattern] = ACTIONS(SHIFT(412)),
        [sym_as_pattern] = ACTIONS(SHIFT(412)),
        [sym__expression] = ACTIONS(SHIFT(412)),
        [sym__type_identifier] = ACTIONS(SHIFT(414)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(431)),
        [anon_sym_let] = ACTIONS(SHIFT(418)),
        [anon_sym_var] = ACTIONS(SHIFT(418)),
        [anon_sym_DOT] = ACTIONS(SHIFT(420)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(412)),
        [anon_sym_is] = ACTIONS(SHIFT(421)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(436)),
    },
    [420] = {
        [sym_identifier] = ACTIONS(SHIFT(429)),
    },
    [421] = {
        [sym_type] = ACTIONS(SHIFT(423)),
        [sym__type_identifier] = ACTIONS(SHIFT(424)),
        [sym__type_name] = ACTIONS(SHIFT(425)),
        [sym_identifier] = ACTIONS(SHIFT(426)),
    },
    [422] = {
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
    [423] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [424] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [425] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(427)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [426] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [427] = {
        [sym__type_identifier] = ACTIONS(SHIFT(428)),
        [sym__type_name] = ACTIONS(SHIFT(425)),
        [sym_identifier] = ACTIONS(SHIFT(426)),
    },
    [428] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [429] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(430)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(431)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [430] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [431] = {
        [sym__pattern] = ACTIONS(SHIFT(134)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(135)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(135)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(432)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(135)),
        [sym_optional_pattern] = ACTIONS(SHIFT(135)),
        [sym_is_pattern] = ACTIONS(SHIFT(135)),
        [sym_as_pattern] = ACTIONS(SHIFT(135)),
        [sym__expression] = ACTIONS(SHIFT(135)),
        [sym__type_identifier] = ACTIONS(SHIFT(137)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(138)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(433)),
        [anon_sym_let] = ACTIONS(SHIFT(140)),
        [anon_sym_var] = ACTIONS(SHIFT(140)),
        [anon_sym_DOT] = ACTIONS(SHIFT(141)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(135)),
        [anon_sym_is] = ACTIONS(SHIFT(142)),
        [sym_identifier] = ACTIONS(SHIFT(143)),
    },
    [432] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(434)),
    },
    [433] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [434] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [435] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(437)),
        [anon_sym_as] = ACTIONS(SHIFT(438)),
    },
    [436] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [437] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [438] = {
        [sym_type] = ACTIONS(SHIFT(439)),
        [sym__type_identifier] = ACTIONS(SHIFT(424)),
        [sym__type_name] = ACTIONS(SHIFT(425)),
        [sym_identifier] = ACTIONS(SHIFT(426)),
    },
    [439] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [440] = {
        [sym__type_annotation] = ACTIONS(SHIFT(441)),
        [anon_sym_in] = ACTIONS(SHIFT(442)),
        [anon_sym_COLON] = ACTIONS(SHIFT(443)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(437)),
        [anon_sym_as] = ACTIONS(SHIFT(438)),
    },
    [441] = {
        [anon_sym_in] = ACTIONS(SHIFT(452)),
    },
    [442] = {
        [sym__expression] = ACTIONS(SHIFT(450)),
        [sym_identifier] = ACTIONS(SHIFT(352)),
    },
    [443] = {
        [sym_type] = ACTIONS(SHIFT(444)),
        [sym__type_identifier] = ACTIONS(SHIFT(445)),
        [sym__type_name] = ACTIONS(SHIFT(446)),
        [sym_identifier] = ACTIONS(SHIFT(447)),
    },
    [444] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [445] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [446] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(448)),
    },
    [447] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [448] = {
        [sym__type_identifier] = ACTIONS(SHIFT(449)),
        [sym__type_name] = ACTIONS(SHIFT(446)),
        [sym_identifier] = ACTIONS(SHIFT(447)),
    },
    [449] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [450] = {
        [sym__code_block] = ACTIONS(SHIFT(451)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(176)),
    },
    [451] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
    },
    [452] = {
        [sym__expression] = ACTIONS(SHIFT(453)),
        [sym_identifier] = ACTIONS(SHIFT(352)),
    },
    [453] = {
        [sym__code_block] = ACTIONS(SHIFT(454)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(176)),
    },
    [454] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
    },
    [455] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(475)),
    },
    [456] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(473)),
    },
    [457] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(468)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1), SHIFT(469)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [458] = {
        [sym__expression] = ACTIONS(SHIFT(461)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(462)),
        [sym_identifier] = ACTIONS(SHIFT(463)),
    },
    [459] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(152)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(135)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(135)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(135)),
        [sym_optional_pattern] = ACTIONS(SHIFT(135)),
        [sym_is_pattern] = ACTIONS(SHIFT(135)),
        [sym_as_pattern] = ACTIONS(SHIFT(135)),
        [sym__expression] = ACTIONS(SHIFT(135)),
        [sym__type_identifier] = ACTIONS(SHIFT(137)),
        [sym__type_name] = ACTIONS(SHIFT(116)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(138)),
        [anon_sym_let] = ACTIONS(SHIFT(140)),
        [anon_sym_var] = ACTIONS(SHIFT(140)),
        [anon_sym_DOT] = ACTIONS(SHIFT(141)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(135)),
        [anon_sym_is] = ACTIONS(SHIFT(142)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(143)),
    },
    [460] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [461] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(466)),
    },
    [462] = {
        [sym__expression] = ACTIONS(SHIFT(464)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(465)),
    },
    [463] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [464] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [465] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [466] = {
        [sym__expression] = ACTIONS(SHIFT(467)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(465)),
    },
    [467] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [468] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 2)),
    },
    [469] = {
        [sym__expression] = ACTIONS(SHIFT(470)),
        [sym_identifier] = ACTIONS(SHIFT(471)),
    },
    [470] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(472)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(469)),
    },
    [471] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [472] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 3)),
    },
    [473] = {
        [sym__code_block] = ACTIONS(SHIFT(474)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(176)),
    },
    [474] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_statement, 5)),
    },
    [475] = {
        [sym__expression] = ACTIONS(SHIFT(476)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(466)),
        [sym_identifier] = ACTIONS(SHIFT(463)),
    },
    [476] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(477)),
    },
    [477] = {
        [sym__expression] = ACTIONS(SHIFT(478)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(465)),
    },
    [478] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [479] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(482)),
    },
    [480] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym__expression] = ACTIONS(SHIFT(481)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(352)),
    },
    [481] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [482] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym__expression] = ACTIONS(SHIFT(483)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(352)),
    },
    [483] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [484] = {
        [sym_identifier] = ACTIONS(SHIFT(485)),
    },
    [485] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(486)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(431)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [486] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [487] = {
        [anon_sym_in] = ACTIONS(SHIFT(442)),
    },
    [488] = {
        [sym__expression] = ACTIONS(SHIFT(489)),
        [sym_identifier] = ACTIONS(SHIFT(352)),
    },
    [489] = {
        [sym__code_block] = ACTIONS(SHIFT(490)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(176)),
    },
    [490] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
    },
    [491] = {
        [sym__type_annotation] = ACTIONS(SHIFT(493)),
        [anon_sym_COLON] = ACTIONS(SHIFT(494)),
    },
    [492] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__variable_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__variable_name, 1)),
    },
    [493] = {
        [sym__code_block] = ACTIONS(SHIFT(501)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(502)),
    },
    [494] = {
        [sym_type] = ACTIONS(SHIFT(495)),
        [sym__type_identifier] = ACTIONS(SHIFT(496)),
        [sym__type_name] = ACTIONS(SHIFT(497)),
        [sym_identifier] = ACTIONS(SHIFT(498)),
    },
    [495] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [496] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [497] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(499)),
    },
    [498] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [499] = {
        [sym__type_identifier] = ACTIONS(SHIFT(500)),
        [sym__type_name] = ACTIONS(SHIFT(497)),
        [sym_identifier] = ACTIONS(SHIFT(498)),
    },
    [500] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [501] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_variable_declaration, 4)),
    },
    [502] = {
        [sym__statement] = ACTIONS(SHIFT(102)),
        [sym__loop_statement] = ACTIONS(SHIFT(103)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(103)),
        [sym_guard_statement] = ACTIONS(SHIFT(103)),
        [sym_switch_statement] = ACTIONS(SHIFT(103)),
        [sym_labeled_statement] = ACTIONS(SHIFT(103)),
        [sym_break_statement] = ACTIONS(SHIFT(103)),
        [sym_continue_statement] = ACTIONS(SHIFT(103)),
        [sym_return_statement] = ACTIONS(SHIFT(103)),
        [sym_throw_statement] = ACTIONS(SHIFT(103)),
        [sym_defer_statement] = ACTIONS(SHIFT(103)),
        [sym_do_statement] = ACTIONS(SHIFT(103)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(103)),
        [sym_line_control_statement] = ACTIONS(SHIFT(103)),
        [sym__declaration] = ACTIONS(SHIFT(103)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym_variable_declaration] = ACTIONS(SHIFT(5)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(6)),
        [sym__expression] = ACTIONS(SHIFT(103)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(503)),
        [anon_sym_for] = ACTIONS(SHIFT(8)),
        [anon_sym_while] = ACTIONS(SHIFT(9)),
        [anon_sym_let] = ACTIONS(SHIFT(10)),
        [anon_sym_var] = ACTIONS(SHIFT(11)),
        [anon_sym_repeat] = ACTIONS(SHIFT(12)),
        [anon_sym_if] = ACTIONS(SHIFT(13)),
        [anon_sym_guard] = ACTIONS(SHIFT(14)),
        [anon_sym_switch] = ACTIONS(SHIFT(15)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(504)),
        [anon_sym_break] = ACTIONS(SHIFT(16)),
        [anon_sym_continue] = ACTIONS(SHIFT(17)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(103)),
        [anon_sym_return] = ACTIONS(SHIFT(18)),
        [anon_sym_throw] = ACTIONS(SHIFT(19)),
        [anon_sym_defer] = ACTIONS(SHIFT(20)),
        [anon_sym_do] = ACTIONS(SHIFT(21)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(22)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(23)),
        [anon_sym_import] = ACTIONS(SHIFT(24)),
        [sym_identifier] = ACTIONS(SHIFT(25)),
    },
    [503] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(505)),
    },
    [504] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [505] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [506] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_statement, 3)),
    },
    [507] = {
        [sym__expression] = ACTIONS(SHIFT(508)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(482)),
        [sym_identifier] = ACTIONS(SHIFT(463)),
    },
    [508] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(509)),
    },
    [509] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym__expression] = ACTIONS(SHIFT(510)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(352)),
    },
    [510] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [511] = {
        [sym__type_annotation] = ACTIONS(SHIFT(512)),
        [anon_sym_COLON] = ACTIONS(SHIFT(494)),
    },
    [512] = {
        [sym__code_block] = ACTIONS(SHIFT(513)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(176)),
    },
    [513] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_variable_declaration, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_variable_declaration, 4)),
    },
    [514] = {
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
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [515] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_swift);
