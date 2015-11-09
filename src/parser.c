#include "tree_sitter/parser.h"

#define STATE_COUNT 463
#define SYMBOL_COUNT 123

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
    aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LPAREN_BSLASH_BSLASH_BSLASH_BSLASH_LPAREN_LBRACK_BSLASH_BSLASH0tnr_SQUOTE_BSLASH_DQUOTE_RBRACK_PIPEu_BSLASH_BSLASH_LBRACE_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA8_RBRACE_BSLASH_BSLASH_RBRACE_RPAREN_RPAREN_PIPE_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_BSLASH_BSLASH_BSLASH_BSLASH_BSLASHu000a_BSLASH_BSLASHu000d_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH,
    sym__declaration,
    sym_wildcard_pattern,
    anon_sym_DOT,
    anon_sym_QMARK,
    anon_sym_is,
    anon_sym_as,
    anon_sym_true,
    anon_sym_false,
    sym_identifier,
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
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LPAREN_BSLASH_BSLASH_BSLASH_BSLASH_LPAREN_LBRACK_BSLASH_BSLASH0tnr_SQUOTE_BSLASH_DQUOTE_RBRACK_PIPEu_BSLASH_BSLASH_LBRACE_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA8_RBRACE_BSLASH_BSLASH_RBRACE_RPAREN_RPAREN_PIPE_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_BSLASH_BSLASH_BSLASH_BSLASH_BSLASHu000a_BSLASH_BSLASHu000d_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = "/\"((\\\\([\\0tnr'\"]|u\\{[a-fA-F0-9]{1,8}\\}))|[^\"\\\\\\u000a\\u000d])*\"/",
    [sym__declaration] = "_declaration",
    [sym_wildcard_pattern] = "wildcard_pattern",
    [anon_sym_DOT] = ".",
    [anon_sym_QMARK] = "?",
    [anon_sym_is] = "is",
    [anon_sym_as] = "as",
    [anon_sym_true] = "true",
    [anon_sym_false] = "false",
    [sym_identifier] = "identifier",
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
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LPAREN_BSLASH_BSLASH_BSLASH_BSLASH_LPAREN_LBRACK_BSLASH_BSLASH0tnr_SQUOTE_BSLASH_DQUOTE_RBRACK_PIPEu_BSLASH_BSLASH_LBRACE_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA8_RBRACE_BSLASH_BSLASH_RBRACE_RPAREN_RPAREN_PIPE_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_BSLASH_BSLASH_BSLASH_BSLASH_BSLASHu000a_BSLASH_BSLASHu000d_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = TSNodeTypeHidden,
    [sym__declaration] = TSNodeTypeHidden,
    [sym_wildcard_pattern] = TSNodeTypeNamed,
    [anon_sym_DOT] = TSNodeTypeAnonymous,
    [anon_sym_QMARK] = TSNodeTypeAnonymous,
    [anon_sym_is] = TSNodeTypeAnonymous,
    [anon_sym_as] = TSNodeTypeAnonymous,
    [anon_sym_true] = TSNodeTypeAnonymous,
    [anon_sym_false] = TSNodeTypeAnonymous,
    [sym_identifier] = TSNodeTypeNamed,
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
                ('j' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
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
            if (lookahead == 'r')
                ADVANCE(58);
            if (lookahead == 's')
                ADVANCE(68);
            if (lookahead == 't')
                ADVANCE(74);
            if (lookahead == 'w')
                ADVANCE(79);
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
            ACCEPT_TOKEN(sym__declaration);
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
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(64);
            ACCEPT_TOKEN(sym_identifier);
        case 60:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(61);
            ACCEPT_TOKEN(sym_identifier);
        case 61:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
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
            ACCEPT_TOKEN(anon_sym_repeat);
        case 64:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(65);
            ACCEPT_TOKEN(sym_identifier);
        case 65:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(66);
            ACCEPT_TOKEN(sym_identifier);
        case 66:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier);
        case 67:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_return);
        case 68:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'w')
                ADVANCE(69);
            ACCEPT_TOKEN(sym_identifier);
        case 69:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(70);
            ACCEPT_TOKEN(sym_identifier);
        case 70:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(71);
            ACCEPT_TOKEN(sym_identifier);
        case 71:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(72);
            ACCEPT_TOKEN(sym_identifier);
        case 72:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(73);
            ACCEPT_TOKEN(sym_identifier);
        case 73:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_switch);
        case 74:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(75);
            ACCEPT_TOKEN(sym_identifier);
        case 75:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(76);
            ACCEPT_TOKEN(sym_identifier);
        case 76:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(77);
            ACCEPT_TOKEN(sym_identifier);
        case 77:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'w')
                ADVANCE(78);
            ACCEPT_TOKEN(sym_identifier);
        case 78:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_throw);
        case 79:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier);
        case 80:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(81);
            ACCEPT_TOKEN(sym_identifier);
        case 81:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(82);
            ACCEPT_TOKEN(sym_identifier);
        case 82:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(83);
            ACCEPT_TOKEN(sym_identifier);
        case 83:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_while);
        case 84:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(84);
            LEX_ERROR();
        case 85:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(85);
            if (lookahead == '\n')
                ADVANCE(86);
            if (lookahead == ';')
                ADVANCE(87);
            LEX_ERROR();
        case 86:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 87:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 88:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(88);
            if (lookahead == '(')
                ADVANCE(89);
            if (lookahead == '.')
                ADVANCE(90);
            if (lookahead == ';')
                ADVANCE(87);
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
                ADVANCE(91);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'i')
                ADVANCE(96);
            if (lookahead == 'l')
                ADVANCE(98);
            if (lookahead == 'v')
                ADVANCE(101);
            LEX_ERROR();
        case 89:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 90:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 91:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_wildcard_pattern);
        case 92:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(93);
            ACCEPT_TOKEN(sym_identifier);
        case 93:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(94);
            ACCEPT_TOKEN(sym_identifier);
        case 94:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(95);
            ACCEPT_TOKEN(sym_identifier);
        case 95:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_case);
        case 96:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(97);
            ACCEPT_TOKEN(sym_identifier);
        case 97:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_is);
        case 98:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(99);
            ACCEPT_TOKEN(sym_identifier);
        case 99:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(100);
            ACCEPT_TOKEN(sym_identifier);
        case 100:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_let);
        case 101:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(102);
            ACCEPT_TOKEN(sym_identifier);
        case 102:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(103);
            ACCEPT_TOKEN(sym_identifier);
        case 103:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_var);
        case 104:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(104);
            if (lookahead == '#')
                ADVANCE(105);
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
                ADVANCE(92);
            if (lookahead == 'l')
                ADVANCE(98);
            if (lookahead == 'v')
                ADVANCE(101);
            LEX_ERROR();
        case 105:
            if (lookahead == 'a')
                ADVANCE(106);
            LEX_ERROR();
        case 106:
            if (lookahead == 'v')
                ADVANCE(107);
            LEX_ERROR();
        case 107:
            if (lookahead == 'a')
                ADVANCE(108);
            LEX_ERROR();
        case 108:
            if (lookahead == 'i')
                ADVANCE(109);
            LEX_ERROR();
        case 109:
            if (lookahead == 'l')
                ADVANCE(110);
            LEX_ERROR();
        case 110:
            if (lookahead == 'a')
                ADVANCE(111);
            LEX_ERROR();
        case 111:
            if (lookahead == 'b')
                ADVANCE(112);
            LEX_ERROR();
        case 112:
            if (lookahead == 'l')
                ADVANCE(113);
            LEX_ERROR();
        case 113:
            if (lookahead == 'e')
                ADVANCE(114);
            LEX_ERROR();
        case 114:
            ACCEPT_TOKEN(anon_sym_POUNDavailable);
        case 115:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(115);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 116:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 117:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(117);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            LEX_ERROR();
        case 118:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(118);
            if (lookahead == '\n')
                ADVANCE(119);
            if (lookahead == ';')
                ADVANCE(87);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            LEX_ERROR();
        case 119:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 120:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(120);
            if (lookahead == '!')
                ADVANCE(121);
            if (lookahead == '(')
                ADVANCE(89);
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
                ADVANCE(122);
            if (lookahead == 'f')
                ADVANCE(126);
            if (lookahead == 'o')
                ADVANCE(131);
            if (lookahead == 't')
                ADVANCE(133);
            LEX_ERROR();
        case 121:
            ACCEPT_TOKEN(anon_sym_BANG);
        case 122:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(123);
            ACCEPT_TOKEN(sym_identifier);
        case 123:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(124);
            ACCEPT_TOKEN(sym_identifier);
        case 124:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(125);
            ACCEPT_TOKEN(sym_identifier);
        case 125:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_arch);
        case 126:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(127);
            ACCEPT_TOKEN(sym_identifier);
        case 127:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(128);
            ACCEPT_TOKEN(sym_identifier);
        case 128:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(129);
            ACCEPT_TOKEN(sym_identifier);
        case 129:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(130);
            ACCEPT_TOKEN(sym_identifier);
        case 130:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_false);
        case 131:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(132);
            ACCEPT_TOKEN(sym_identifier);
        case 132:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_os);
        case 133:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(134);
            ACCEPT_TOKEN(sym_identifier);
        case 134:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(135);
            ACCEPT_TOKEN(sym_identifier);
        case 135:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(136);
            ACCEPT_TOKEN(sym_identifier);
        case 136:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_true);
        case 137:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(137);
            if (lookahead == '\n')
                ADVANCE(138);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(139);
            if (lookahead == ';')
                ADVANCE(87);
            LEX_ERROR();
        case 138:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 139:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(139);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH);
        case 140:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(140);
            if (lookahead == '\n')
                ADVANCE(141);
            if (lookahead == ':')
                ADVANCE(142);
            if (lookahead == ';')
                ADVANCE(87);
            LEX_ERROR();
        case 141:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 142:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 143:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(143);
            if (lookahead == 'f')
                ADVANCE(144);
            if (lookahead == 'i')
                ADVANCE(147);
            if (lookahead == 'r')
                ADVANCE(149);
            if (lookahead == 'w')
                ADVANCE(155);
            LEX_ERROR();
        case 144:
            if (lookahead == 'o')
                ADVANCE(145);
            LEX_ERROR();
        case 145:
            if (lookahead == 'r')
                ADVANCE(146);
            LEX_ERROR();
        case 146:
            ACCEPT_TOKEN(anon_sym_for);
        case 147:
            if (lookahead == 'f')
                ADVANCE(148);
            LEX_ERROR();
        case 148:
            ACCEPT_TOKEN(anon_sym_if);
        case 149:
            if (lookahead == 'e')
                ADVANCE(150);
            LEX_ERROR();
        case 150:
            if (lookahead == 'p')
                ADVANCE(151);
            LEX_ERROR();
        case 151:
            if (lookahead == 'e')
                ADVANCE(152);
            LEX_ERROR();
        case 152:
            if (lookahead == 'a')
                ADVANCE(153);
            LEX_ERROR();
        case 153:
            if (lookahead == 't')
                ADVANCE(154);
            LEX_ERROR();
        case 154:
            ACCEPT_TOKEN(anon_sym_repeat);
        case 155:
            if (lookahead == 'h')
                ADVANCE(156);
            LEX_ERROR();
        case 156:
            if (lookahead == 'i')
                ADVANCE(157);
            LEX_ERROR();
        case 157:
            if (lookahead == 'l')
                ADVANCE(158);
            LEX_ERROR();
        case 158:
            if (lookahead == 'e')
                ADVANCE(159);
            LEX_ERROR();
        case 159:
            ACCEPT_TOKEN(anon_sym_while);
        case 160:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(160);
            if (lookahead == '\"')
                ADVANCE(161);
            LEX_ERROR();
        case 161:
            if (lookahead == '\"')
                ADVANCE(162);
            if (lookahead == '\\')
                ADVANCE(163);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '0') ||
                (lookahead == '\\') ||
                (lookahead == 'a') ||
                (lookahead == 'd') ||
                (lookahead == 'u')))
                ADVANCE(161);
            LEX_ERROR();
        case 162:
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LPAREN_BSLASH_BSLASH_BSLASH_BSLASH_LPAREN_LBRACK_BSLASH_BSLASH0tnr_SQUOTE_BSLASH_DQUOTE_RBRACK_PIPEu_BSLASH_BSLASH_LBRACE_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA8_RBRACE_BSLASH_BSLASH_RBRACE_RPAREN_RPAREN_PIPE_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_BSLASH_BSLASH_BSLASH_BSLASH_BSLASHu000a_BSLASH_BSLASHu000d_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH);
        case 163:
            if (lookahead == '\\')
                ADVANCE(164);
            LEX_ERROR();
        case 164:
            if ((lookahead == '\"') ||
                (lookahead == '\'') ||
                (lookahead == '0') ||
                (lookahead == '\\') ||
                (lookahead == 'n') ||
                (lookahead == 'r') ||
                (lookahead == 't'))
                ADVANCE(161);
            if (lookahead == 'u')
                ADVANCE(165);
            LEX_ERROR();
        case 165:
            if (lookahead == '\\')
                ADVANCE(166);
            LEX_ERROR();
        case 166:
            if (lookahead == '{')
                ADVANCE(167);
            LEX_ERROR();
        case 167:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(168);
            LEX_ERROR();
        case 168:
            if (lookahead == '{')
                ADVANCE(169);
            LEX_ERROR();
        case 169:
            if (lookahead == '1')
                ADVANCE(170);
            LEX_ERROR();
        case 170:
            if (lookahead == ',')
                ADVANCE(171);
            LEX_ERROR();
        case 171:
            if (lookahead == '8')
                ADVANCE(172);
            LEX_ERROR();
        case 172:
            if (lookahead == '}')
                ADVANCE(173);
            LEX_ERROR();
        case 173:
            if (lookahead == '\\')
                ADVANCE(174);
            LEX_ERROR();
        case 174:
            if (lookahead == '}')
                ADVANCE(161);
            LEX_ERROR();
        case 175:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(175);
            if (lookahead == '#')
                ADVANCE(176);
            if (lookahead == '&')
                ADVANCE(187);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
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
            if (lookahead == 'r')
                ADVANCE(58);
            if (lookahead == 's')
                ADVANCE(68);
            if (lookahead == 't')
                ADVANCE(74);
            if (lookahead == 'w')
                ADVANCE(79);
            if (lookahead == '|')
                ADVANCE(189);
            LEX_ERROR();
        case 176:
            if (lookahead == 'e')
                ADVANCE(177);
            if (lookahead == 'i')
                ADVANCE(4);
            if (lookahead == 'l')
                ADVANCE(6);
            LEX_ERROR();
        case 177:
            if (lookahead == 'l')
                ADVANCE(178);
            if (lookahead == 'n')
                ADVANCE(183);
            LEX_ERROR();
        case 178:
            if (lookahead == 's')
                ADVANCE(179);
            LEX_ERROR();
        case 179:
            if (lookahead == 'e')
                ADVANCE(180);
            LEX_ERROR();
        case 180:
            if (lookahead == 'i')
                ADVANCE(181);
            ACCEPT_TOKEN(anon_sym_POUNDelse);
        case 181:
            if (lookahead == 'f')
                ADVANCE(182);
            LEX_ERROR();
        case 182:
            ACCEPT_TOKEN(anon_sym_POUNDelseif);
        case 183:
            if (lookahead == 'd')
                ADVANCE(184);
            LEX_ERROR();
        case 184:
            if (lookahead == 'i')
                ADVANCE(185);
            LEX_ERROR();
        case 185:
            if (lookahead == 'f')
                ADVANCE(186);
            LEX_ERROR();
        case 186:
            ACCEPT_TOKEN(anon_sym_POUNDendif);
        case 187:
            if (lookahead == '&')
                ADVANCE(188);
            LEX_ERROR();
        case 188:
            ACCEPT_TOKEN(anon_sym_AMP_AMP);
        case 189:
            if (lookahead == '|')
                ADVANCE(190);
            LEX_ERROR();
        case 190:
            ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
        case 191:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(191);
            if (lookahead == '(')
                ADVANCE(89);
            LEX_ERROR();
        case 192:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(192);
            if (lookahead == 'a')
                ADVANCE(193);
            if (lookahead == 'i')
                ADVANCE(198);
            if (lookahead == 'x')
                ADVANCE(202);
            LEX_ERROR();
        case 193:
            if (lookahead == 'r')
                ADVANCE(194);
            LEX_ERROR();
        case 194:
            if (lookahead == 'm')
                ADVANCE(195);
            LEX_ERROR();
        case 195:
            if (lookahead == '6')
                ADVANCE(196);
            ACCEPT_TOKEN(anon_sym_arm);
        case 196:
            if (lookahead == '4')
                ADVANCE(197);
            LEX_ERROR();
        case 197:
            ACCEPT_TOKEN(anon_sym_arm64);
        case 198:
            if (lookahead == '3')
                ADVANCE(199);
            LEX_ERROR();
        case 199:
            if (lookahead == '8')
                ADVANCE(200);
            LEX_ERROR();
        case 200:
            if (lookahead == '6')
                ADVANCE(201);
            LEX_ERROR();
        case 201:
            ACCEPT_TOKEN(anon_sym_i386);
        case 202:
            if (lookahead == '8')
                ADVANCE(203);
            LEX_ERROR();
        case 203:
            if (lookahead == '6')
                ADVANCE(204);
            LEX_ERROR();
        case 204:
            if (lookahead == '_')
                ADVANCE(205);
            LEX_ERROR();
        case 205:
            if (lookahead == '6')
                ADVANCE(206);
            LEX_ERROR();
        case 206:
            if (lookahead == '4')
                ADVANCE(207);
            LEX_ERROR();
        case 207:
            ACCEPT_TOKEN(anon_sym_x86_64);
        case 208:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(208);
            if (lookahead == ')')
                ADVANCE(209);
            LEX_ERROR();
        case 209:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 210:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(210);
            if (lookahead == 'O')
                ADVANCE(211);
            if (lookahead == 'i')
                ADVANCE(214);
            if (lookahead == 't')
                ADVANCE(217);
            if (lookahead == 'w')
                ADVANCE(221);
            LEX_ERROR();
        case 211:
            if (lookahead == 'S')
                ADVANCE(212);
            LEX_ERROR();
        case 212:
            if (lookahead == 'X')
                ADVANCE(213);
            LEX_ERROR();
        case 213:
            ACCEPT_TOKEN(anon_sym_OSX);
        case 214:
            if (lookahead == 'O')
                ADVANCE(215);
            LEX_ERROR();
        case 215:
            if (lookahead == 'S')
                ADVANCE(216);
            LEX_ERROR();
        case 216:
            ACCEPT_TOKEN(anon_sym_iOS);
        case 217:
            if (lookahead == 'v')
                ADVANCE(218);
            LEX_ERROR();
        case 218:
            if (lookahead == 'O')
                ADVANCE(219);
            LEX_ERROR();
        case 219:
            if (lookahead == 'S')
                ADVANCE(220);
            LEX_ERROR();
        case 220:
            ACCEPT_TOKEN(anon_sym_tvOS);
        case 221:
            if (lookahead == 'a')
                ADVANCE(222);
            LEX_ERROR();
        case 222:
            if (lookahead == 't')
                ADVANCE(223);
            LEX_ERROR();
        case 223:
            if (lookahead == 'c')
                ADVANCE(224);
            LEX_ERROR();
        case 224:
            if (lookahead == 'h')
                ADVANCE(225);
            LEX_ERROR();
        case 225:
            if (lookahead == 'O')
                ADVANCE(226);
            LEX_ERROR();
        case 226:
            if (lookahead == 'S')
                ADVANCE(227);
            LEX_ERROR();
        case 227:
            ACCEPT_TOKEN(anon_sym_watchOS);
        case 228:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(228);
            if (lookahead == '&')
                ADVANCE(187);
            if (lookahead == ')')
                ADVANCE(209);
            if (lookahead == '|')
                ADVANCE(189);
            LEX_ERROR();
        case 229:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(229);
            if (lookahead == '#')
                ADVANCE(176);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
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
            if (lookahead == 'r')
                ADVANCE(58);
            if (lookahead == 's')
                ADVANCE(68);
            if (lookahead == 't')
                ADVANCE(74);
            if (lookahead == 'w')
                ADVANCE(79);
            LEX_ERROR();
        case 230:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(230);
            if (lookahead == '#')
                ADVANCE(231);
            LEX_ERROR();
        case 231:
            if (lookahead == 'e')
                ADVANCE(177);
            LEX_ERROR();
        case 232:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(232);
            if (lookahead == '#')
                ADVANCE(233);
            LEX_ERROR();
        case 233:
            if (lookahead == 'e')
                ADVANCE(234);
            LEX_ERROR();
        case 234:
            if (lookahead == 'l')
                ADVANCE(235);
            if (lookahead == 'n')
                ADVANCE(183);
            LEX_ERROR();
        case 235:
            if (lookahead == 's')
                ADVANCE(236);
            LEX_ERROR();
        case 236:
            if (lookahead == 'e')
                ADVANCE(237);
            LEX_ERROR();
        case 237:
            ACCEPT_TOKEN(anon_sym_POUNDelse);
        case 238:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(238);
            if (lookahead == '#')
                ADVANCE(239);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
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
            if (lookahead == 'r')
                ADVANCE(58);
            if (lookahead == 's')
                ADVANCE(68);
            if (lookahead == 't')
                ADVANCE(74);
            if (lookahead == 'w')
                ADVANCE(79);
            LEX_ERROR();
        case 239:
            if (lookahead == 'e')
                ADVANCE(240);
            if (lookahead == 'i')
                ADVANCE(4);
            if (lookahead == 'l')
                ADVANCE(6);
            LEX_ERROR();
        case 240:
            if (lookahead == 'n')
                ADVANCE(183);
            LEX_ERROR();
        case 241:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(241);
            if (lookahead == '#')
                ADVANCE(242);
            LEX_ERROR();
        case 242:
            if (lookahead == 'e')
                ADVANCE(240);
            LEX_ERROR();
        case 243:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(243);
            if (lookahead == '\n')
                ADVANCE(244);
            if (lookahead == ';')
                ADVANCE(87);
            if (lookahead == 'c')
                ADVANCE(245);
            LEX_ERROR();
        case 244:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 245:
            if (lookahead == 'a')
                ADVANCE(246);
            LEX_ERROR();
        case 246:
            if (lookahead == 't')
                ADVANCE(247);
            LEX_ERROR();
        case 247:
            if (lookahead == 'c')
                ADVANCE(248);
            LEX_ERROR();
        case 248:
            if (lookahead == 'h')
                ADVANCE(249);
            LEX_ERROR();
        case 249:
            ACCEPT_TOKEN(anon_sym_catch);
        case 250:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(250);
            if (lookahead == '#')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
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
            if (lookahead == 'r')
                ADVANCE(58);
            if (lookahead == 's')
                ADVANCE(68);
            if (lookahead == 't')
                ADVANCE(74);
            if (lookahead == 'w')
                ADVANCE(79);
            if (lookahead == '}')
                ADVANCE(251);
            LEX_ERROR();
        case 251:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 252:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(252);
            if (lookahead == '}')
                ADVANCE(251);
            LEX_ERROR();
        case 253:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(253);
            if (lookahead == '(')
                ADVANCE(89);
            if (lookahead == '.')
                ADVANCE(90);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(91);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(96);
            if (lookahead == 'l')
                ADVANCE(98);
            if (lookahead == 'v')
                ADVANCE(101);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 254:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(254);
            if (lookahead == '?')
                ADVANCE(255);
            if (lookahead == 'a')
                ADVANCE(256);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 255:
            ACCEPT_TOKEN(anon_sym_QMARK);
        case 256:
            if (lookahead == 's')
                ADVANCE(257);
            LEX_ERROR();
        case 257:
            ACCEPT_TOKEN(anon_sym_as);
        case 258:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(258);
            if (lookahead == '.')
                ADVANCE(90);
            LEX_ERROR();
        case 259:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(259);
            if (lookahead == '(')
                ADVANCE(89);
            if (lookahead == ')')
                ADVANCE(209);
            if (lookahead == '.')
                ADVANCE(90);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(91);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(96);
            if (lookahead == 'l')
                ADVANCE(98);
            if (lookahead == 'v')
                ADVANCE(101);
            LEX_ERROR();
        case 260:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(260);
            if (lookahead == '(')
                ADVANCE(89);
            if (lookahead == '.')
                ADVANCE(90);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(91);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(96);
            if (lookahead == 'l')
                ADVANCE(98);
            if (lookahead == 'v')
                ADVANCE(101);
            LEX_ERROR();
        case 261:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(261);
            if (lookahead == '.')
                ADVANCE(90);
            if (lookahead == '?')
                ADVANCE(255);
            if (lookahead == 'a')
                ADVANCE(256);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 262:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(262);
            if (lookahead == '(')
                ADVANCE(89);
            if (lookahead == '?')
                ADVANCE(255);
            if (lookahead == 'a')
                ADVANCE(256);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 263:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(263);
            if (lookahead == ')')
                ADVANCE(209);
            if (lookahead == ',')
                ADVANCE(264);
            if (lookahead == '?')
                ADVANCE(255);
            if (lookahead == 'a')
                ADVANCE(256);
            LEX_ERROR();
        case 264:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 265:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(265);
            if (lookahead == ')')
                ADVANCE(209);
            if (lookahead == ',')
                ADVANCE(264);
            if (lookahead == '.')
                ADVANCE(90);
            if (lookahead == '?')
                ADVANCE(255);
            if (lookahead == 'a')
                ADVANCE(256);
            LEX_ERROR();
        case 266:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(266);
            if (lookahead == '(')
                ADVANCE(89);
            if (lookahead == ')')
                ADVANCE(209);
            if (lookahead == ',')
                ADVANCE(264);
            if (lookahead == '?')
                ADVANCE(255);
            if (lookahead == 'a')
                ADVANCE(256);
            LEX_ERROR();
        case 267:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(267);
            if (lookahead == 'c')
                ADVANCE(268);
            if (lookahead == 'd')
                ADVANCE(272);
            if (lookahead == '}')
                ADVANCE(251);
            LEX_ERROR();
        case 268:
            if (lookahead == 'a')
                ADVANCE(269);
            LEX_ERROR();
        case 269:
            if (lookahead == 's')
                ADVANCE(270);
            LEX_ERROR();
        case 270:
            if (lookahead == 'e')
                ADVANCE(271);
            LEX_ERROR();
        case 271:
            ACCEPT_TOKEN(anon_sym_case);
        case 272:
            if (lookahead == 'e')
                ADVANCE(273);
            LEX_ERROR();
        case 273:
            if (lookahead == 'f')
                ADVANCE(274);
            LEX_ERROR();
        case 274:
            if (lookahead == 'a')
                ADVANCE(275);
            LEX_ERROR();
        case 275:
            if (lookahead == 'u')
                ADVANCE(276);
            LEX_ERROR();
        case 276:
            if (lookahead == 'l')
                ADVANCE(277);
            LEX_ERROR();
        case 277:
            if (lookahead == 't')
                ADVANCE(278);
            LEX_ERROR();
        case 278:
            ACCEPT_TOKEN(anon_sym_default);
        case 279:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(279);
            if (lookahead == ':')
                ADVANCE(142);
            LEX_ERROR();
        case 280:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(280);
            if (lookahead == '#')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'b')
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(281);
            if (lookahead == 'd')
                ADVANCE(282);
            if (lookahead == 'f')
                ADVANCE(33);
            if (lookahead == 'g')
                ADVANCE(46);
            if (lookahead == 'i')
                ADVANCE(51);
            if (lookahead == 'r')
                ADVANCE(58);
            if (lookahead == 's')
                ADVANCE(68);
            if (lookahead == 't')
                ADVANCE(74);
            if (lookahead == 'w')
                ADVANCE(79);
            if (lookahead == '}')
                ADVANCE(251);
            LEX_ERROR();
        case 281:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(93);
            if (lookahead == 'o')
                ADVANCE(20);
            ACCEPT_TOKEN(sym_identifier);
        case 282:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(283);
            if (lookahead == 'o')
                ADVANCE(32);
            ACCEPT_TOKEN(sym_identifier);
        case 283:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'f')
                ADVANCE(284);
            ACCEPT_TOKEN(sym_identifier);
        case 284:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(285);
            if (lookahead == 'e')
                ADVANCE(30);
            ACCEPT_TOKEN(sym_identifier);
        case 285:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(286);
            ACCEPT_TOKEN(sym_identifier);
        case 286:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(287);
            ACCEPT_TOKEN(sym_identifier);
        case 287:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(288);
            ACCEPT_TOKEN(sym_identifier);
        case 288:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_default);
        case 289:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(289);
            if (lookahead == ',')
                ADVANCE(264);
            if (lookahead == ':')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(255);
            if (lookahead == 'a')
                ADVANCE(256);
            LEX_ERROR();
        case 290:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(290);
            if (lookahead == ',')
                ADVANCE(264);
            if (lookahead == '.')
                ADVANCE(90);
            if (lookahead == ':')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(255);
            if (lookahead == 'a')
                ADVANCE(256);
            LEX_ERROR();
        case 291:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(291);
            if (lookahead == '(')
                ADVANCE(89);
            if (lookahead == ',')
                ADVANCE(264);
            if (lookahead == ':')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(255);
            if (lookahead == 'a')
                ADVANCE(256);
            LEX_ERROR();
        case 292:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(292);
            if (lookahead == 'e')
                ADVANCE(293);
            LEX_ERROR();
        case 293:
            if (lookahead == 'l')
                ADVANCE(294);
            LEX_ERROR();
        case 294:
            if (lookahead == 's')
                ADVANCE(295);
            LEX_ERROR();
        case 295:
            if (lookahead == 'e')
                ADVANCE(296);
            LEX_ERROR();
        case 296:
            ACCEPT_TOKEN(anon_sym_else);
        case 297:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(297);
            if (lookahead == ',')
                ADVANCE(264);
            if (lookahead == 'e')
                ADVANCE(293);
            LEX_ERROR();
        case 298:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(298);
            if (lookahead == '=')
                ADVANCE(299);
            if (lookahead == '?')
                ADVANCE(255);
            if (lookahead == 'a')
                ADVANCE(256);
            LEX_ERROR();
        case 299:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 300:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(300);
            if (lookahead == '.')
                ADVANCE(90);
            if (lookahead == '=')
                ADVANCE(299);
            if (lookahead == '?')
                ADVANCE(255);
            if (lookahead == 'a')
                ADVANCE(256);
            LEX_ERROR();
        case 301:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(301);
            if (lookahead == '(')
                ADVANCE(89);
            if (lookahead == '=')
                ADVANCE(299);
            if (lookahead == '?')
                ADVANCE(255);
            if (lookahead == 'a')
                ADVANCE(256);
            LEX_ERROR();
        case 302:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(302);
            if (lookahead == '*')
                ADVANCE(303);
            if (lookahead == 'O')
                ADVANCE(304);
            if (lookahead == 'i')
                ADVANCE(327);
            if (lookahead == 't')
                ADVANCE(217);
            if (lookahead == 'w')
                ADVANCE(221);
            LEX_ERROR();
        case 303:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 304:
            if (lookahead == 'S')
                ADVANCE(305);
            LEX_ERROR();
        case 305:
            if (lookahead == 'X')
                ADVANCE(306);
            LEX_ERROR();
        case 306:
            if (lookahead == 'A')
                ADVANCE(307);
            ACCEPT_TOKEN(anon_sym_OSX);
        case 307:
            if (lookahead == 'p')
                ADVANCE(308);
            LEX_ERROR();
        case 308:
            if (lookahead == 'p')
                ADVANCE(309);
            LEX_ERROR();
        case 309:
            if (lookahead == 'l')
                ADVANCE(310);
            LEX_ERROR();
        case 310:
            if (lookahead == 'i')
                ADVANCE(311);
            LEX_ERROR();
        case 311:
            if (lookahead == 'c')
                ADVANCE(312);
            LEX_ERROR();
        case 312:
            if (lookahead == 'a')
                ADVANCE(313);
            LEX_ERROR();
        case 313:
            if (lookahead == 't')
                ADVANCE(314);
            LEX_ERROR();
        case 314:
            if (lookahead == 'i')
                ADVANCE(315);
            LEX_ERROR();
        case 315:
            if (lookahead == 'o')
                ADVANCE(316);
            LEX_ERROR();
        case 316:
            if (lookahead == 'n')
                ADVANCE(317);
            LEX_ERROR();
        case 317:
            if (lookahead == 'E')
                ADVANCE(318);
            LEX_ERROR();
        case 318:
            if (lookahead == 'x')
                ADVANCE(319);
            LEX_ERROR();
        case 319:
            if (lookahead == 't')
                ADVANCE(320);
            LEX_ERROR();
        case 320:
            if (lookahead == 'e')
                ADVANCE(321);
            LEX_ERROR();
        case 321:
            if (lookahead == 'n')
                ADVANCE(322);
            LEX_ERROR();
        case 322:
            if (lookahead == 's')
                ADVANCE(323);
            LEX_ERROR();
        case 323:
            if (lookahead == 'i')
                ADVANCE(324);
            LEX_ERROR();
        case 324:
            if (lookahead == 'o')
                ADVANCE(325);
            LEX_ERROR();
        case 325:
            if (lookahead == 'n')
                ADVANCE(326);
            LEX_ERROR();
        case 326:
            ACCEPT_TOKEN(anon_sym_OSXApplicationExtension);
        case 327:
            if (lookahead == 'O')
                ADVANCE(328);
            LEX_ERROR();
        case 328:
            if (lookahead == 'S')
                ADVANCE(329);
            LEX_ERROR();
        case 329:
            if (lookahead == 'A')
                ADVANCE(330);
            ACCEPT_TOKEN(anon_sym_iOS);
        case 330:
            if (lookahead == 'p')
                ADVANCE(331);
            LEX_ERROR();
        case 331:
            if (lookahead == 'p')
                ADVANCE(332);
            LEX_ERROR();
        case 332:
            if (lookahead == 'l')
                ADVANCE(333);
            LEX_ERROR();
        case 333:
            if (lookahead == 'i')
                ADVANCE(334);
            LEX_ERROR();
        case 334:
            if (lookahead == 'c')
                ADVANCE(335);
            LEX_ERROR();
        case 335:
            if (lookahead == 'a')
                ADVANCE(336);
            LEX_ERROR();
        case 336:
            if (lookahead == 't')
                ADVANCE(337);
            LEX_ERROR();
        case 337:
            if (lookahead == 'i')
                ADVANCE(338);
            LEX_ERROR();
        case 338:
            if (lookahead == 'o')
                ADVANCE(339);
            LEX_ERROR();
        case 339:
            if (lookahead == 'n')
                ADVANCE(340);
            LEX_ERROR();
        case 340:
            if (lookahead == 'E')
                ADVANCE(341);
            LEX_ERROR();
        case 341:
            if (lookahead == 'x')
                ADVANCE(342);
            LEX_ERROR();
        case 342:
            if (lookahead == 't')
                ADVANCE(343);
            LEX_ERROR();
        case 343:
            if (lookahead == 'e')
                ADVANCE(344);
            LEX_ERROR();
        case 344:
            if (lookahead == 'n')
                ADVANCE(345);
            LEX_ERROR();
        case 345:
            if (lookahead == 's')
                ADVANCE(346);
            LEX_ERROR();
        case 346:
            if (lookahead == 'i')
                ADVANCE(347);
            LEX_ERROR();
        case 347:
            if (lookahead == 'o')
                ADVANCE(348);
            LEX_ERROR();
        case 348:
            if (lookahead == 'n')
                ADVANCE(349);
            LEX_ERROR();
        case 349:
            ACCEPT_TOKEN(anon_sym_iOSApplicationExtension);
        case 350:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(350);
            if (lookahead == ')')
                ADVANCE(209);
            if (lookahead == ',')
                ADVANCE(264);
            LEX_ERROR();
        case 351:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(351);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(352);
            LEX_ERROR();
        case 352:
            if (lookahead == '.')
                ADVANCE(353);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(352);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 353:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(354);
            LEX_ERROR();
        case 354:
            if (lookahead == '.')
                ADVANCE(355);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(354);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 355:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(356);
            LEX_ERROR();
        case 356:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(356);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 357:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(357);
            if (lookahead == '#')
                ADVANCE(105);
            if (lookahead == 'c')
                ADVANCE(268);
            if (lookahead == 'l')
                ADVANCE(358);
            if (lookahead == 'v')
                ADVANCE(361);
            LEX_ERROR();
        case 358:
            if (lookahead == 'e')
                ADVANCE(359);
            LEX_ERROR();
        case 359:
            if (lookahead == 't')
                ADVANCE(360);
            LEX_ERROR();
        case 360:
            ACCEPT_TOKEN(anon_sym_let);
        case 361:
            if (lookahead == 'a')
                ADVANCE(362);
            LEX_ERROR();
        case 362:
            if (lookahead == 'r')
                ADVANCE(363);
            LEX_ERROR();
        case 363:
            ACCEPT_TOKEN(anon_sym_var);
        case 364:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(364);
            if (lookahead == ',')
                ADVANCE(264);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 365:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(365);
            if (lookahead == '\n')
                ADVANCE(366);
            if (lookahead == ';')
                ADVANCE(87);
            if (lookahead == 'e')
                ADVANCE(293);
            LEX_ERROR();
        case 366:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 367:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(367);
            if (lookahead == 'i')
                ADVANCE(147);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 368:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(368);
            if (lookahead == 'w')
                ADVANCE(155);
            LEX_ERROR();
        case 369:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(369);
            if (lookahead == ';')
                ADVANCE(87);
            LEX_ERROR();
        case 370:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(370);
            if (lookahead == ':')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(255);
            if (lookahead == 'a')
                ADVANCE(256);
            if (lookahead == 'i')
                ADVANCE(371);
            LEX_ERROR();
        case 371:
            if (lookahead == 'n')
                ADVANCE(372);
            LEX_ERROR();
        case 372:
            ACCEPT_TOKEN(anon_sym_in);
        case 373:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(373);
            if (lookahead == ',')
                ADVANCE(264);
            if (lookahead == ':')
                ADVANCE(142);
            if (lookahead == ';')
                ADVANCE(87);
            if (lookahead == '?')
                ADVANCE(255);
            if (lookahead == 'a')
                ADVANCE(256);
            if (lookahead == 'i')
                ADVANCE(371);
            LEX_ERROR();
        case 374:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(374);
            if (lookahead == ';')
                ADVANCE(87);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            LEX_ERROR();
        case 375:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(375);
            if (lookahead == '(')
                ADVANCE(89);
            if (lookahead == ')')
                ADVANCE(209);
            if (lookahead == '.')
                ADVANCE(90);
            if (lookahead == ';')
                ADVANCE(87);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(91);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(96);
            if (lookahead == 'l')
                ADVANCE(98);
            if (lookahead == 'v')
                ADVANCE(101);
            LEX_ERROR();
        case 376:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(376);
            if (lookahead == ',')
                ADVANCE(264);
            if (lookahead == '.')
                ADVANCE(90);
            if (lookahead == ':')
                ADVANCE(142);
            if (lookahead == ';')
                ADVANCE(87);
            if (lookahead == '?')
                ADVANCE(255);
            if (lookahead == 'a')
                ADVANCE(256);
            if (lookahead == 'i')
                ADVANCE(371);
            LEX_ERROR();
        case 377:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(377);
            if (lookahead == '.')
                ADVANCE(90);
            if (lookahead == ':')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(255);
            if (lookahead == 'a')
                ADVANCE(256);
            if (lookahead == 'i')
                ADVANCE(371);
            LEX_ERROR();
        case 378:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(378);
            if (lookahead == '(')
                ADVANCE(89);
            if (lookahead == ':')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(255);
            if (lookahead == 'a')
                ADVANCE(256);
            if (lookahead == 'i')
                ADVANCE(371);
            LEX_ERROR();
        case 379:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(379);
            if (lookahead == 'i')
                ADVANCE(371);
            LEX_ERROR();
        case 380:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(380);
            if (lookahead == '.')
                ADVANCE(90);
            if (lookahead == 'i')
                ADVANCE(371);
            LEX_ERROR();
        case 381:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(381);
            if (lookahead == ')')
                ADVANCE(209);
            if (lookahead == ',')
                ADVANCE(264);
            if (lookahead == ';')
                ADVANCE(87);
            if (lookahead == '?')
                ADVANCE(255);
            if (lookahead == 'a')
                ADVANCE(256);
            LEX_ERROR();
        case 382:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(382);
            if (lookahead == ')')
                ADVANCE(209);
            if (lookahead == ',')
                ADVANCE(264);
            if (lookahead == '.')
                ADVANCE(90);
            if (lookahead == ';')
                ADVANCE(87);
            if (lookahead == '?')
                ADVANCE(255);
            if (lookahead == 'a')
                ADVANCE(256);
            LEX_ERROR();
        case 383:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(383);
            if (lookahead == ')')
                ADVANCE(209);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            LEX_ERROR();
        case 384:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(384);
            if (lookahead == ',')
                ADVANCE(264);
            if (lookahead == ';')
                ADVANCE(87);
            LEX_ERROR();
        case 385:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(385);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 386:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(386);
            if (lookahead == '.')
                ADVANCE(90);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 387:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(387);
            if (lookahead == '\n')
                ADVANCE(388);
            if (lookahead == '!')
                ADVANCE(121);
            if (lookahead == '\"')
                ADVANCE(161);
            if (lookahead == '#')
                ADVANCE(389);
            if (lookahead == '&')
                ADVANCE(187);
            if (lookahead == '(')
                ADVANCE(89);
            if (lookahead == ')')
                ADVANCE(209);
            if (lookahead == '*')
                ADVANCE(303);
            if (lookahead == ',')
                ADVANCE(264);
            if (lookahead == '.')
                ADVANCE(90);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(390);
            if (lookahead == ':')
                ADVANCE(142);
            if (lookahead == ';')
                ADVANCE(87);
            if (lookahead == '=')
                ADVANCE(299);
            if (lookahead == '?')
                ADVANCE(255);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'n') ||
                (lookahead == 'p') ||
                (lookahead == 'q') ||
                (lookahead == 'u') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(10);
            if (lookahead == 'O')
                ADVANCE(391);
            if (lookahead == '_')
                ADVANCE(91);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'a')
                ADVANCE(414);
            if (lookahead == 'b')
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(420);
            if (lookahead == 'd')
                ADVANCE(282);
            if (lookahead == 'e')
                ADVANCE(425);
            if (lookahead == 'f')
                ADVANCE(429);
            if (lookahead == 'g')
                ADVANCE(46);
            if (lookahead == 'i')
                ADVANCE(432);
            if (lookahead == 'l')
                ADVANCE(98);
            if (lookahead == 'o')
                ADVANCE(131);
            if (lookahead == 'r')
                ADVANCE(58);
            if (lookahead == 's')
                ADVANCE(68);
            if (lookahead == 't')
                ADVANCE(459);
            if (lookahead == 'v')
                ADVANCE(101);
            if (lookahead == 'w')
                ADVANCE(463);
            if (lookahead == 'x')
                ADVANCE(470);
            if (lookahead == '{')
                ADVANCE(116);
            if (lookahead == '|')
                ADVANCE(189);
            if (lookahead == '}')
                ADVANCE(251);
            LEX_ERROR();
        case 388:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 389:
            if (lookahead == 'a')
                ADVANCE(106);
            if (lookahead == 'e')
                ADVANCE(177);
            if (lookahead == 'i')
                ADVANCE(4);
            if (lookahead == 'l')
                ADVANCE(6);
            LEX_ERROR();
        case 390:
            if (lookahead == '.')
                ADVANCE(353);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(390);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 391:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'S')
                ADVANCE(392);
            ACCEPT_TOKEN(sym_identifier);
        case 392:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'W') ||
                (lookahead == 'Y') ||
                (lookahead == 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'X')
                ADVANCE(393);
            ACCEPT_TOKEN(sym_identifier);
        case 393:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == 'A')
                ADVANCE(394);
            if (('B' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_OSX);
        case 394:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(395);
            ACCEPT_TOKEN(sym_identifier);
        case 395:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(396);
            ACCEPT_TOKEN(sym_identifier);
        case 396:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(397);
            ACCEPT_TOKEN(sym_identifier);
        case 397:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(398);
            ACCEPT_TOKEN(sym_identifier);
        case 398:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(399);
            ACCEPT_TOKEN(sym_identifier);
        case 399:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(400);
            ACCEPT_TOKEN(sym_identifier);
        case 400:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(401);
            ACCEPT_TOKEN(sym_identifier);
        case 401:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(402);
            ACCEPT_TOKEN(sym_identifier);
        case 402:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(403);
            ACCEPT_TOKEN(sym_identifier);
        case 403:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(404);
            ACCEPT_TOKEN(sym_identifier);
        case 404:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'D') ||
                ('F' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'E')
                ADVANCE(405);
            ACCEPT_TOKEN(sym_identifier);
        case 405:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(10);
            if (lookahead == 'x')
                ADVANCE(406);
            ACCEPT_TOKEN(sym_identifier);
        case 406:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(407);
            ACCEPT_TOKEN(sym_identifier);
        case 407:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(408);
            ACCEPT_TOKEN(sym_identifier);
        case 408:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(409);
            ACCEPT_TOKEN(sym_identifier);
        case 409:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(410);
            ACCEPT_TOKEN(sym_identifier);
        case 410:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(411);
            ACCEPT_TOKEN(sym_identifier);
        case 411:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(412);
            ACCEPT_TOKEN(sym_identifier);
        case 412:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(413);
            ACCEPT_TOKEN(sym_identifier);
        case 413:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_OSXApplicationExtension);
        case 414:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(415);
            if (lookahead == 's')
                ADVANCE(419);
            ACCEPT_TOKEN(sym_identifier);
        case 415:
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
                ADVANCE(124);
            if (lookahead == 'm')
                ADVANCE(416);
            ACCEPT_TOKEN(sym_identifier);
        case 416:
            if (('0' <= lookahead && lookahead <= '5') ||
                ('7' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '6')
                ADVANCE(417);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_arm);
        case 417:
            if (('0' <= lookahead && lookahead <= '3') ||
                ('5' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '4')
                ADVANCE(418);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 418:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_arm64);
        case 419:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_as);
        case 420:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(421);
            if (lookahead == 'o')
                ADVANCE(20);
            ACCEPT_TOKEN(sym_identifier);
        case 421:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(94);
            if (lookahead == 't')
                ADVANCE(422);
            ACCEPT_TOKEN(sym_identifier);
        case 422:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(423);
            ACCEPT_TOKEN(sym_identifier);
        case 423:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(424);
            ACCEPT_TOKEN(sym_identifier);
        case 424:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_catch);
        case 425:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(426);
            ACCEPT_TOKEN(sym_identifier);
        case 426:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(427);
            ACCEPT_TOKEN(sym_identifier);
        case 427:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(428);
            ACCEPT_TOKEN(sym_identifier);
        case 428:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_else);
        case 429:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(430);
            if (lookahead == 'o')
                ADVANCE(44);
            ACCEPT_TOKEN(sym_identifier);
        case 430:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(431);
            ACCEPT_TOKEN(sym_identifier);
        case 431:
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
                ADVANCE(129);
            ACCEPT_TOKEN(sym_identifier);
        case 432:
            if (('0' <= lookahead && lookahead <= '2') ||
                ('4' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '3')
                ADVANCE(433);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'O')
                ADVANCE(436);
            if (lookahead == 'f')
                ADVANCE(52);
            if (lookahead == 'm')
                ADVANCE(53);
            if (lookahead == 'n')
                ADVANCE(458);
            if (lookahead == 's')
                ADVANCE(97);
            ACCEPT_TOKEN(sym_identifier);
        case 433:
            if (('0' <= lookahead && lookahead <= '7') ||
                (lookahead == '9'))
                ADVANCE(10);
            if (lookahead == '8')
                ADVANCE(434);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 434:
            if (('0' <= lookahead && lookahead <= '5') ||
                ('7' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '6')
                ADVANCE(435);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 435:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_i386);
        case 436:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'S')
                ADVANCE(437);
            ACCEPT_TOKEN(sym_identifier);
        case 437:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == 'A')
                ADVANCE(438);
            if (('B' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_iOS);
        case 438:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(439);
            ACCEPT_TOKEN(sym_identifier);
        case 439:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(440);
            ACCEPT_TOKEN(sym_identifier);
        case 440:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(441);
            ACCEPT_TOKEN(sym_identifier);
        case 441:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(442);
            ACCEPT_TOKEN(sym_identifier);
        case 442:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(443);
            ACCEPT_TOKEN(sym_identifier);
        case 443:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(444);
            ACCEPT_TOKEN(sym_identifier);
        case 444:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(445);
            ACCEPT_TOKEN(sym_identifier);
        case 445:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(446);
            ACCEPT_TOKEN(sym_identifier);
        case 446:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(447);
            ACCEPT_TOKEN(sym_identifier);
        case 447:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(448);
            ACCEPT_TOKEN(sym_identifier);
        case 448:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'D') ||
                ('F' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'E')
                ADVANCE(449);
            ACCEPT_TOKEN(sym_identifier);
        case 449:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(10);
            if (lookahead == 'x')
                ADVANCE(450);
            ACCEPT_TOKEN(sym_identifier);
        case 450:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(451);
            ACCEPT_TOKEN(sym_identifier);
        case 451:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(452);
            ACCEPT_TOKEN(sym_identifier);
        case 452:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(453);
            ACCEPT_TOKEN(sym_identifier);
        case 453:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(454);
            ACCEPT_TOKEN(sym_identifier);
        case 454:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(455);
            ACCEPT_TOKEN(sym_identifier);
        case 455:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(456);
            ACCEPT_TOKEN(sym_identifier);
        case 456:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(457);
            ACCEPT_TOKEN(sym_identifier);
        case 457:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_iOSApplicationExtension);
        case 458:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_in);
        case 459:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(75);
            if (lookahead == 'r')
                ADVANCE(134);
            if (lookahead == 'v')
                ADVANCE(460);
            ACCEPT_TOKEN(sym_identifier);
        case 460:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'O')
                ADVANCE(461);
            ACCEPT_TOKEN(sym_identifier);
        case 461:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'S')
                ADVANCE(462);
            ACCEPT_TOKEN(sym_identifier);
        case 462:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_tvOS);
        case 463:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(464);
            if (lookahead == 'h')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier);
        case 464:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(465);
            ACCEPT_TOKEN(sym_identifier);
        case 465:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(466);
            ACCEPT_TOKEN(sym_identifier);
        case 466:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(467);
            ACCEPT_TOKEN(sym_identifier);
        case 467:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'O')
                ADVANCE(468);
            ACCEPT_TOKEN(sym_identifier);
        case 468:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'S')
                ADVANCE(469);
            ACCEPT_TOKEN(sym_identifier);
        case 469:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_watchOS);
        case 470:
            if (('0' <= lookahead && lookahead <= '7') ||
                (lookahead == '9'))
                ADVANCE(10);
            if (lookahead == '8')
                ADVANCE(471);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
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
            ACCEPT_TOKEN(sym_identifier);
        case 472:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(473);
            ACCEPT_TOKEN(sym_identifier);
        case 473:
            if (('0' <= lookahead && lookahead <= '5') ||
                ('7' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '6')
                ADVANCE(474);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 474:
            if (('0' <= lookahead && lookahead <= '3') ||
                ('5' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '4')
                ADVANCE(475);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 475:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_x86_64);
        case ts_lex_state_error:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(387);
            if (lookahead == '\n')
                ADVANCE(388);
            if (lookahead == '!')
                ADVANCE(121);
            if (lookahead == '\"')
                ADVANCE(161);
            if (lookahead == '#')
                ADVANCE(389);
            if (lookahead == '&')
                ADVANCE(187);
            if (lookahead == '(')
                ADVANCE(89);
            if (lookahead == ')')
                ADVANCE(209);
            if (lookahead == '*')
                ADVANCE(303);
            if (lookahead == ',')
                ADVANCE(264);
            if (lookahead == '.')
                ADVANCE(90);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(390);
            if (lookahead == ':')
                ADVANCE(142);
            if (lookahead == ';')
                ADVANCE(87);
            if (lookahead == '=')
                ADVANCE(299);
            if (lookahead == '?')
                ADVANCE(255);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'n') ||
                (lookahead == 'p') ||
                (lookahead == 'q') ||
                (lookahead == 'u') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(10);
            if (lookahead == 'O')
                ADVANCE(391);
            if (lookahead == '_')
                ADVANCE(91);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'a')
                ADVANCE(414);
            if (lookahead == 'b')
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(420);
            if (lookahead == 'd')
                ADVANCE(282);
            if (lookahead == 'e')
                ADVANCE(425);
            if (lookahead == 'f')
                ADVANCE(429);
            if (lookahead == 'g')
                ADVANCE(46);
            if (lookahead == 'i')
                ADVANCE(432);
            if (lookahead == 'l')
                ADVANCE(98);
            if (lookahead == 'o')
                ADVANCE(131);
            if (lookahead == 'r')
                ADVANCE(58);
            if (lookahead == 's')
                ADVANCE(68);
            if (lookahead == 't')
                ADVANCE(459);
            if (lookahead == 'v')
                ADVANCE(101);
            if (lookahead == 'w')
                ADVANCE(463);
            if (lookahead == 'x')
                ADVANCE(470);
            if (lookahead == '{')
                ADVANCE(116);
            if (lookahead == '|')
                ADVANCE(189);
            if (lookahead == '}')
                ADVANCE(251);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 1,
    [1] = 84,
    [2] = 1,
    [3] = 85,
    [4] = 85,
    [5] = 84,
    [6] = 88,
    [7] = 104,
    [8] = 115,
    [9] = 104,
    [10] = 104,
    [11] = 117,
    [12] = 118,
    [13] = 118,
    [14] = 118,
    [15] = 118,
    [16] = 115,
    [17] = 115,
    [18] = 120,
    [19] = 137,
    [20] = 140,
    [21] = 143,
    [22] = 85,
    [23] = 160,
    [24] = 85,
    [25] = 175,
    [26] = 175,
    [27] = 120,
    [28] = 191,
    [29] = 191,
    [30] = 120,
    [31] = 175,
    [32] = 175,
    [33] = 120,
    [34] = 120,
    [35] = 175,
    [36] = 175,
    [37] = 192,
    [38] = 208,
    [39] = 175,
    [40] = 210,
    [41] = 228,
    [42] = 228,
    [43] = 120,
    [44] = 191,
    [45] = 191,
    [46] = 120,
    [47] = 228,
    [48] = 228,
    [49] = 120,
    [50] = 120,
    [51] = 228,
    [52] = 228,
    [53] = 192,
    [54] = 208,
    [55] = 228,
    [56] = 210,
    [57] = 228,
    [58] = 228,
    [59] = 175,
    [60] = 229,
    [61] = 85,
    [62] = 230,
    [63] = 232,
    [64] = 120,
    [65] = 238,
    [66] = 85,
    [67] = 238,
    [68] = 85,
    [69] = 241,
    [70] = 85,
    [71] = 85,
    [72] = 238,
    [73] = 241,
    [74] = 175,
    [75] = 230,
    [76] = 232,
    [77] = 232,
    [78] = 238,
    [79] = 241,
    [80] = 85,
    [81] = 232,
    [82] = 238,
    [83] = 241,
    [84] = 85,
    [85] = 229,
    [86] = 230,
    [87] = 243,
    [88] = 250,
    [89] = 250,
    [90] = 85,
    [91] = 252,
    [92] = 243,
    [93] = 243,
    [94] = 250,
    [95] = 252,
    [96] = 243,
    [97] = 85,
    [98] = 253,
    [99] = 243,
    [100] = 254,
    [101] = 254,
    [102] = 258,
    [103] = 258,
    [104] = 259,
    [105] = 260,
    [106] = 117,
    [107] = 117,
    [108] = 261,
    [109] = 254,
    [110] = 254,
    [111] = 261,
    [112] = 261,
    [113] = 117,
    [114] = 254,
    [115] = 262,
    [116] = 254,
    [117] = 254,
    [118] = 254,
    [119] = 117,
    [120] = 254,
    [121] = 263,
    [122] = 263,
    [123] = 208,
    [124] = 258,
    [125] = 259,
    [126] = 254,
    [127] = 260,
    [128] = 117,
    [129] = 117,
    [130] = 265,
    [131] = 263,
    [132] = 263,
    [133] = 265,
    [134] = 265,
    [135] = 117,
    [136] = 263,
    [137] = 266,
    [138] = 263,
    [139] = 263,
    [140] = 263,
    [141] = 117,
    [142] = 263,
    [143] = 208,
    [144] = 263,
    [145] = 263,
    [146] = 117,
    [147] = 266,
    [148] = 263,
    [149] = 254,
    [150] = 208,
    [151] = 260,
    [152] = 263,
    [153] = 208,
    [154] = 117,
    [155] = 258,
    [156] = 258,
    [157] = 117,
    [158] = 262,
    [159] = 254,
    [160] = 243,
    [161] = 85,
    [162] = 85,
    [163] = 250,
    [164] = 252,
    [165] = 85,
    [166] = 85,
    [167] = 85,
    [168] = 85,
    [169] = 85,
    [170] = 85,
    [171] = 85,
    [172] = 115,
    [173] = 115,
    [174] = 267,
    [175] = 267,
    [176] = 252,
    [177] = 260,
    [178] = 85,
    [179] = 279,
    [180] = 280,
    [181] = 280,
    [182] = 85,
    [183] = 267,
    [184] = 280,
    [185] = 267,
    [186] = 289,
    [187] = 289,
    [188] = 258,
    [189] = 259,
    [190] = 260,
    [191] = 117,
    [192] = 117,
    [193] = 290,
    [194] = 289,
    [195] = 289,
    [196] = 290,
    [197] = 290,
    [198] = 117,
    [199] = 289,
    [200] = 291,
    [201] = 289,
    [202] = 289,
    [203] = 289,
    [204] = 117,
    [205] = 289,
    [206] = 208,
    [207] = 289,
    [208] = 289,
    [209] = 117,
    [210] = 291,
    [211] = 289,
    [212] = 279,
    [213] = 260,
    [214] = 280,
    [215] = 267,
    [216] = 289,
    [217] = 279,
    [218] = 280,
    [219] = 267,
    [220] = 85,
    [221] = 252,
    [222] = 292,
    [223] = 297,
    [224] = 297,
    [225] = 297,
    [226] = 297,
    [227] = 260,
    [228] = 191,
    [229] = 260,
    [230] = 297,
    [231] = 297,
    [232] = 298,
    [233] = 298,
    [234] = 258,
    [235] = 259,
    [236] = 260,
    [237] = 117,
    [238] = 117,
    [239] = 300,
    [240] = 298,
    [241] = 298,
    [242] = 300,
    [243] = 300,
    [244] = 117,
    [245] = 298,
    [246] = 301,
    [247] = 298,
    [248] = 298,
    [249] = 298,
    [250] = 117,
    [251] = 298,
    [252] = 208,
    [253] = 298,
    [254] = 298,
    [255] = 117,
    [256] = 301,
    [257] = 298,
    [258] = 117,
    [259] = 297,
    [260] = 297,
    [261] = 260,
    [262] = 297,
    [263] = 298,
    [264] = 117,
    [265] = 297,
    [266] = 297,
    [267] = 297,
    [268] = 302,
    [269] = 350,
    [270] = 351,
    [271] = 350,
    [272] = 208,
    [273] = 297,
    [274] = 302,
    [275] = 350,
    [276] = 351,
    [277] = 350,
    [278] = 208,
    [279] = 208,
    [280] = 297,
    [281] = 208,
    [282] = 297,
    [283] = 298,
    [284] = 117,
    [285] = 297,
    [286] = 357,
    [287] = 297,
    [288] = 292,
    [289] = 357,
    [290] = 297,
    [291] = 292,
    [292] = 117,
    [293] = 292,
    [294] = 292,
    [295] = 292,
    [296] = 115,
    [297] = 85,
    [298] = 115,
    [299] = 364,
    [300] = 364,
    [301] = 364,
    [302] = 364,
    [303] = 260,
    [304] = 191,
    [305] = 260,
    [306] = 364,
    [307] = 364,
    [308] = 298,
    [309] = 117,
    [310] = 364,
    [311] = 364,
    [312] = 260,
    [313] = 364,
    [314] = 298,
    [315] = 117,
    [316] = 364,
    [317] = 364,
    [318] = 364,
    [319] = 302,
    [320] = 350,
    [321] = 351,
    [322] = 350,
    [323] = 208,
    [324] = 364,
    [325] = 364,
    [326] = 208,
    [327] = 364,
    [328] = 298,
    [329] = 117,
    [330] = 364,
    [331] = 357,
    [332] = 364,
    [333] = 115,
    [334] = 357,
    [335] = 364,
    [336] = 115,
    [337] = 117,
    [338] = 115,
    [339] = 115,
    [340] = 115,
    [341] = 365,
    [342] = 250,
    [343] = 252,
    [344] = 365,
    [345] = 365,
    [346] = 367,
    [347] = 85,
    [348] = 368,
    [349] = 250,
    [350] = 252,
    [351] = 368,
    [352] = 368,
    [353] = 117,
    [354] = 85,
    [355] = 115,
    [356] = 85,
    [357] = 369,
    [358] = 115,
    [359] = 369,
    [360] = 117,
    [361] = 370,
    [362] = 370,
    [363] = 373,
    [364] = 258,
    [365] = 374,
    [366] = 375,
    [367] = 260,
    [368] = 260,
    [369] = 260,
    [370] = 117,
    [371] = 117,
    [372] = 376,
    [373] = 370,
    [374] = 370,
    [375] = 377,
    [376] = 377,
    [377] = 117,
    [378] = 370,
    [379] = 378,
    [380] = 370,
    [381] = 259,
    [382] = 208,
    [383] = 370,
    [384] = 370,
    [385] = 370,
    [386] = 377,
    [387] = 370,
    [388] = 117,
    [389] = 370,
    [390] = 370,
    [391] = 379,
    [392] = 117,
    [393] = 117,
    [394] = 379,
    [395] = 379,
    [396] = 380,
    [397] = 380,
    [398] = 117,
    [399] = 379,
    [400] = 115,
    [401] = 85,
    [402] = 117,
    [403] = 115,
    [404] = 85,
    [405] = 369,
    [406] = 208,
    [407] = 381,
    [408] = 374,
    [409] = 260,
    [410] = 382,
    [411] = 369,
    [412] = 383,
    [413] = 369,
    [414] = 208,
    [415] = 208,
    [416] = 383,
    [417] = 208,
    [418] = 369,
    [419] = 117,
    [420] = 384,
    [421] = 384,
    [422] = 369,
    [423] = 115,
    [424] = 85,
    [425] = 374,
    [426] = 369,
    [427] = 383,
    [428] = 208,
    [429] = 369,
    [430] = 385,
    [431] = 115,
    [432] = 385,
    [433] = 115,
    [434] = 117,
    [435] = 378,
    [436] = 370,
    [437] = 379,
    [438] = 117,
    [439] = 115,
    [440] = 85,
    [441] = 279,
    [442] = 279,
    [443] = 115,
    [444] = 117,
    [445] = 115,
    [446] = 115,
    [447] = 386,
    [448] = 386,
    [449] = 117,
    [450] = 115,
    [451] = 369,
    [452] = 250,
    [453] = 252,
    [454] = 369,
    [455] = 369,
    [456] = 85,
    [457] = 374,
    [458] = 369,
    [459] = 385,
    [460] = 115,
    [461] = 1,
    [462] = 84,
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
        [sym__expression] = ACTIONS(SHIFT(3)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(5)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_program, 0)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(3)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(19)),
        [sym__declaration] = ACTIONS(SHIFT(3)),
        [sym_identifier] = ACTIONS(SHIFT(20)),
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
        [sym__expression] = ACTIONS(SHIFT(3)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(462)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(3)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(19)),
        [sym__declaration] = ACTIONS(SHIFT(3)),
        [sym_identifier] = ACTIONS(SHIFT(20)),
    },
    [3] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(461)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(SHIFT(461)),
    },
    [4] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__loop_statement, 1)),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_program, 1)),
    },
    [6] = {
        [sym__for_init] = ACTIONS(SHIFT(357)),
        [sym__for_condition] = ACTIONS(SHIFT(358)),
        [sym_variable_declaration] = ACTIONS(SHIFT(359)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(360)),
        [sym__pattern] = ACTIONS(SHIFT(361)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(362)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(362)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(362)),
        [sym_optional_pattern] = ACTIONS(SHIFT(362)),
        [sym_is_pattern] = ACTIONS(SHIFT(362)),
        [sym_as_pattern] = ACTIONS(SHIFT(362)),
        [sym__expression] = ACTIONS(SHIFT(363)),
        [sym__expression_list] = ACTIONS(SHIFT(359)),
        [sym__type_identifier] = ACTIONS(SHIFT(364)),
        [sym__type_name] = ACTIONS(SHIFT(103)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(365)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(366)),
        [anon_sym_case] = ACTIONS(SHIFT(367)),
        [anon_sym_let] = ACTIONS(SHIFT(368)),
        [anon_sym_var] = ACTIONS(SHIFT(369)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(362)),
        [anon_sym_DOT] = ACTIONS(SHIFT(370)),
        [anon_sym_is] = ACTIONS(SHIFT(371)),
        [sym_identifier] = ACTIONS(SHIFT(372)),
    },
    [7] = {
        [sym__condition_clause] = ACTIONS(SHIFT(355)),
        [sym__condition] = ACTIONS(SHIFT(299)),
        [sym_availability_condition] = ACTIONS(SHIFT(300)),
        [sym_case_condition] = ACTIONS(SHIFT(301)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(301)),
        [sym__expression] = ACTIONS(SHIFT(302)),
        [anon_sym_case] = ACTIONS(SHIFT(303)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(304)),
        [anon_sym_let] = ACTIONS(SHIFT(305)),
        [anon_sym_var] = ACTIONS(SHIFT(305)),
        [sym_identifier] = ACTIONS(SHIFT(306)),
    },
    [8] = {
        [sym__code_block] = ACTIONS(SHIFT(348)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(349)),
    },
    [9] = {
        [sym__condition_clause] = ACTIONS(SHIFT(298)),
        [sym__condition] = ACTIONS(SHIFT(299)),
        [sym_availability_condition] = ACTIONS(SHIFT(300)),
        [sym_case_condition] = ACTIONS(SHIFT(301)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(301)),
        [sym__expression] = ACTIONS(SHIFT(302)),
        [anon_sym_case] = ACTIONS(SHIFT(303)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(304)),
        [anon_sym_let] = ACTIONS(SHIFT(305)),
        [anon_sym_var] = ACTIONS(SHIFT(305)),
        [sym_identifier] = ACTIONS(SHIFT(306)),
    },
    [10] = {
        [sym__condition_clause] = ACTIONS(SHIFT(222)),
        [sym__condition] = ACTIONS(SHIFT(223)),
        [sym_availability_condition] = ACTIONS(SHIFT(224)),
        [sym_case_condition] = ACTIONS(SHIFT(225)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(225)),
        [sym__expression] = ACTIONS(SHIFT(226)),
        [anon_sym_case] = ACTIONS(SHIFT(227)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(228)),
        [anon_sym_let] = ACTIONS(SHIFT(229)),
        [anon_sym_var] = ACTIONS(SHIFT(229)),
        [sym_identifier] = ACTIONS(SHIFT(230)),
    },
    [11] = {
        [sym__expression] = ACTIONS(SHIFT(172)),
        [sym_identifier] = ACTIONS(SHIFT(173)),
    },
    [12] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(171)),
    },
    [13] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_continue_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_continue_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(170)),
    },
    [14] = {
        [sym__expression] = ACTIONS(SHIFT(169)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_return_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_return_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(168)),
    },
    [15] = {
        [sym__expression] = ACTIONS(SHIFT(167)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_throw_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_throw_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(168)),
    },
    [16] = {
        [sym__code_block] = ACTIONS(SHIFT(162)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(163)),
    },
    [17] = {
        [sym__code_block] = ACTIONS(SHIFT(87)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(88)),
    },
    [18] = {
        [sym__build_configuration] = ACTIONS(SHIFT(25)),
        [sym_boolean_literal] = ACTIONS(SHIFT(26)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(27)),
        [anon_sym_os] = ACTIONS(SHIFT(28)),
        [anon_sym_arch] = ACTIONS(SHIFT(29)),
        [anon_sym_BANG] = ACTIONS(SHIFT(30)),
        [anon_sym_true] = ACTIONS(SHIFT(31)),
        [anon_sym_false] = ACTIONS(SHIFT(31)),
        [sym_identifier] = ACTIONS(SHIFT(26)),
    },
    [19] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_line_control_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_line_control_statement, 1)),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(SHIFT(23)),
    },
    [20] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(SHIFT(21)),
    },
    [21] = {
        [sym__loop_statement] = ACTIONS(SHIFT(22)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(22)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
    },
    [22] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
    },
    [23] = {
        [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LPAREN_BSLASH_BSLASH_BSLASH_BSLASH_LPAREN_LBRACK_BSLASH_BSLASH0tnr_SQUOTE_BSLASH_DQUOTE_RBRACK_PIPEu_BSLASH_BSLASH_LBRACE_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA8_RBRACE_BSLASH_BSLASH_RBRACE_RPAREN_RPAREN_PIPE_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_BSLASH_BSLASH_BSLASH_BSLASH_BSLASHu000a_BSLASH_BSLASHu000d_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(SHIFT(24)),
    },
    [24] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_line_control_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_line_control_statement, 3)),
    },
    [25] = {
        [sym__statement] = ACTIONS(SHIFT(60)),
        [sym__loop_statement] = ACTIONS(SHIFT(61)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(61)),
        [sym_guard_statement] = ACTIONS(SHIFT(61)),
        [sym_switch_statement] = ACTIONS(SHIFT(61)),
        [sym_labeled_statement] = ACTIONS(SHIFT(61)),
        [sym_break_statement] = ACTIONS(SHIFT(61)),
        [sym_continue_statement] = ACTIONS(SHIFT(61)),
        [sym_return_statement] = ACTIONS(SHIFT(61)),
        [sym_throw_statement] = ACTIONS(SHIFT(61)),
        [sym_defer_statement] = ACTIONS(SHIFT(61)),
        [sym_do_statement] = ACTIONS(SHIFT(61)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(61)),
        [sym_line_control_statement] = ACTIONS(SHIFT(61)),
        [sym__expression] = ACTIONS(SHIFT(61)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(62)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(SHIFT(63)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(61)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDelseif] = ACTIONS(SHIFT(64)),
        [anon_sym_POUNDelse] = ACTIONS(SHIFT(65)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(66)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(33)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(34)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(19)),
        [sym__declaration] = ACTIONS(SHIFT(61)),
        [sym_identifier] = ACTIONS(SHIFT(20)),
    },
    [26] = {
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
        [sym__expression] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__build_configuration, 1)),
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
        [sym__declaration] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__build_configuration, 1)),
    },
    [27] = {
        [sym__build_configuration] = ACTIONS(SHIFT(41)),
        [sym_boolean_literal] = ACTIONS(SHIFT(42)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(43)),
        [anon_sym_os] = ACTIONS(SHIFT(44)),
        [anon_sym_arch] = ACTIONS(SHIFT(45)),
        [anon_sym_BANG] = ACTIONS(SHIFT(46)),
        [anon_sym_true] = ACTIONS(SHIFT(47)),
        [anon_sym_false] = ACTIONS(SHIFT(47)),
        [sym_identifier] = ACTIONS(SHIFT(42)),
    },
    [28] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(40)),
    },
    [29] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(37)),
    },
    [30] = {
        [sym__build_configuration] = ACTIONS(SHIFT(32)),
        [sym_boolean_literal] = ACTIONS(SHIFT(26)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(27)),
        [anon_sym_os] = ACTIONS(SHIFT(28)),
        [anon_sym_arch] = ACTIONS(SHIFT(29)),
        [anon_sym_BANG] = ACTIONS(SHIFT(30)),
        [anon_sym_true] = ACTIONS(SHIFT(31)),
        [anon_sym_false] = ACTIONS(SHIFT(31)),
        [sym_identifier] = ACTIONS(SHIFT(26)),
    },
    [31] = {
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
        [sym__expression] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
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
        [sym__declaration] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
    },
    [32] = {
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
        [sym__expression] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__build_configuration, 2)),
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
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(33)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(34)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__build_configuration, 2)),
    },
    [33] = {
        [sym__build_configuration] = ACTIONS(SHIFT(36)),
        [sym_boolean_literal] = ACTIONS(SHIFT(26)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(27)),
        [anon_sym_os] = ACTIONS(SHIFT(28)),
        [anon_sym_arch] = ACTIONS(SHIFT(29)),
        [anon_sym_BANG] = ACTIONS(SHIFT(30)),
        [anon_sym_true] = ACTIONS(SHIFT(31)),
        [anon_sym_false] = ACTIONS(SHIFT(31)),
        [sym_identifier] = ACTIONS(SHIFT(26)),
    },
    [34] = {
        [sym__build_configuration] = ACTIONS(SHIFT(35)),
        [sym_boolean_literal] = ACTIONS(SHIFT(26)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(27)),
        [anon_sym_os] = ACTIONS(SHIFT(28)),
        [anon_sym_arch] = ACTIONS(SHIFT(29)),
        [anon_sym_BANG] = ACTIONS(SHIFT(30)),
        [anon_sym_true] = ACTIONS(SHIFT(31)),
        [anon_sym_false] = ACTIONS(SHIFT(31)),
        [sym_identifier] = ACTIONS(SHIFT(26)),
    },
    [35] = {
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
        [sym__expression] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_for] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_while] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
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
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(33)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym__declaration] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_identifier] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
    },
    [36] = {
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
        [sym__expression] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_for] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_while] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
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
        [sym__declaration] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_identifier] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
    },
    [37] = {
        [anon_sym_i386] = ACTIONS(SHIFT(38)),
        [anon_sym_x86_64] = ACTIONS(SHIFT(38)),
        [anon_sym_arm] = ACTIONS(SHIFT(38)),
        [anon_sym_arm64] = ACTIONS(SHIFT(38)),
    },
    [38] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(39)),
    },
    [39] = {
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
        [sym__expression] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__build_configuration, 4)),
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
        [sym__declaration] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym__build_configuration, 4)),
    },
    [40] = {
        [anon_sym_iOS] = ACTIONS(SHIFT(38)),
        [anon_sym_OSX] = ACTIONS(SHIFT(38)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(38)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(38)),
    },
    [41] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(59)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(49)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(50)),
    },
    [42] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE(sym__build_configuration, 1)),
    },
    [43] = {
        [sym__build_configuration] = ACTIONS(SHIFT(57)),
        [sym_boolean_literal] = ACTIONS(SHIFT(42)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(43)),
        [anon_sym_os] = ACTIONS(SHIFT(44)),
        [anon_sym_arch] = ACTIONS(SHIFT(45)),
        [anon_sym_BANG] = ACTIONS(SHIFT(46)),
        [anon_sym_true] = ACTIONS(SHIFT(47)),
        [anon_sym_false] = ACTIONS(SHIFT(47)),
        [sym_identifier] = ACTIONS(SHIFT(42)),
    },
    [44] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(56)),
    },
    [45] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(53)),
    },
    [46] = {
        [sym__build_configuration] = ACTIONS(SHIFT(48)),
        [sym_boolean_literal] = ACTIONS(SHIFT(42)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(43)),
        [anon_sym_os] = ACTIONS(SHIFT(44)),
        [anon_sym_arch] = ACTIONS(SHIFT(45)),
        [anon_sym_BANG] = ACTIONS(SHIFT(46)),
        [anon_sym_true] = ACTIONS(SHIFT(47)),
        [anon_sym_false] = ACTIONS(SHIFT(47)),
        [sym_identifier] = ACTIONS(SHIFT(42)),
    },
    [47] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
    },
    [48] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(49)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(50)),
    },
    [49] = {
        [sym__build_configuration] = ACTIONS(SHIFT(52)),
        [sym_boolean_literal] = ACTIONS(SHIFT(42)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(43)),
        [anon_sym_os] = ACTIONS(SHIFT(44)),
        [anon_sym_arch] = ACTIONS(SHIFT(45)),
        [anon_sym_BANG] = ACTIONS(SHIFT(46)),
        [anon_sym_true] = ACTIONS(SHIFT(47)),
        [anon_sym_false] = ACTIONS(SHIFT(47)),
        [sym_identifier] = ACTIONS(SHIFT(42)),
    },
    [50] = {
        [sym__build_configuration] = ACTIONS(SHIFT(51)),
        [sym_boolean_literal] = ACTIONS(SHIFT(42)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(43)),
        [anon_sym_os] = ACTIONS(SHIFT(44)),
        [anon_sym_arch] = ACTIONS(SHIFT(45)),
        [anon_sym_BANG] = ACTIONS(SHIFT(46)),
        [anon_sym_true] = ACTIONS(SHIFT(47)),
        [anon_sym_false] = ACTIONS(SHIFT(47)),
        [sym_identifier] = ACTIONS(SHIFT(42)),
    },
    [51] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(49)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
    },
    [52] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
    },
    [53] = {
        [anon_sym_i386] = ACTIONS(SHIFT(54)),
        [anon_sym_x86_64] = ACTIONS(SHIFT(54)),
        [anon_sym_arm] = ACTIONS(SHIFT(54)),
        [anon_sym_arm64] = ACTIONS(SHIFT(54)),
    },
    [54] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(55)),
    },
    [55] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE(sym__build_configuration, 4)),
    },
    [56] = {
        [anon_sym_iOS] = ACTIONS(SHIFT(54)),
        [anon_sym_OSX] = ACTIONS(SHIFT(54)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(54)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(54)),
    },
    [57] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(58)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(49)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(50)),
    },
    [58] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE(sym__build_configuration, 3)),
    },
    [59] = {
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
        [sym__expression] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__build_configuration, 3)),
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
        [sym__declaration] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym__build_configuration, 3)),
    },
    [60] = {
        [sym__statement] = ACTIONS(SHIFT(60)),
        [sym__loop_statement] = ACTIONS(SHIFT(61)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(61)),
        [sym_guard_statement] = ACTIONS(SHIFT(61)),
        [sym_switch_statement] = ACTIONS(SHIFT(61)),
        [sym_labeled_statement] = ACTIONS(SHIFT(61)),
        [sym_break_statement] = ACTIONS(SHIFT(61)),
        [sym_continue_statement] = ACTIONS(SHIFT(61)),
        [sym_return_statement] = ACTIONS(SHIFT(61)),
        [sym_throw_statement] = ACTIONS(SHIFT(61)),
        [sym_defer_statement] = ACTIONS(SHIFT(61)),
        [sym_do_statement] = ACTIONS(SHIFT(61)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(61)),
        [sym_line_control_statement] = ACTIONS(SHIFT(61)),
        [sym__expression] = ACTIONS(SHIFT(61)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(86)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(61)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDelseif] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(19)),
        [sym__declaration] = ACTIONS(SHIFT(61)),
        [sym_identifier] = ACTIONS(SHIFT(20)),
    },
    [61] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(85)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(SHIFT(85)),
    },
    [62] = {
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(SHIFT(81)),
        [anon_sym_POUNDelseif] = ACTIONS(SHIFT(64)),
        [anon_sym_POUNDelse] = ACTIONS(SHIFT(78)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(70)),
    },
    [63] = {
        [anon_sym_POUNDelse] = ACTIONS(SHIFT(78)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(70)),
    },
    [64] = {
        [sym__build_configuration] = ACTIONS(SHIFT(74)),
        [sym_boolean_literal] = ACTIONS(SHIFT(26)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(27)),
        [anon_sym_os] = ACTIONS(SHIFT(28)),
        [anon_sym_arch] = ACTIONS(SHIFT(29)),
        [anon_sym_BANG] = ACTIONS(SHIFT(30)),
        [anon_sym_true] = ACTIONS(SHIFT(31)),
        [anon_sym_false] = ACTIONS(SHIFT(31)),
        [sym_identifier] = ACTIONS(SHIFT(26)),
    },
    [65] = {
        [sym__statement] = ACTIONS(SHIFT(67)),
        [sym__loop_statement] = ACTIONS(SHIFT(68)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(68)),
        [sym_guard_statement] = ACTIONS(SHIFT(68)),
        [sym_switch_statement] = ACTIONS(SHIFT(68)),
        [sym_labeled_statement] = ACTIONS(SHIFT(68)),
        [sym_break_statement] = ACTIONS(SHIFT(68)),
        [sym_continue_statement] = ACTIONS(SHIFT(68)),
        [sym_return_statement] = ACTIONS(SHIFT(68)),
        [sym_throw_statement] = ACTIONS(SHIFT(68)),
        [sym_defer_statement] = ACTIONS(SHIFT(68)),
        [sym_do_statement] = ACTIONS(SHIFT(68)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(68)),
        [sym_line_control_statement] = ACTIONS(SHIFT(68)),
        [sym__expression] = ACTIONS(SHIFT(68)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(69)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(68)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(70)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(19)),
        [sym__declaration] = ACTIONS(SHIFT(68)),
        [sym_identifier] = ACTIONS(SHIFT(20)),
    },
    [66] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_build_configuration_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_build_configuration_statement, 3)),
    },
    [67] = {
        [sym__statement] = ACTIONS(SHIFT(67)),
        [sym__loop_statement] = ACTIONS(SHIFT(68)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(68)),
        [sym_guard_statement] = ACTIONS(SHIFT(68)),
        [sym_switch_statement] = ACTIONS(SHIFT(68)),
        [sym_labeled_statement] = ACTIONS(SHIFT(68)),
        [sym_break_statement] = ACTIONS(SHIFT(68)),
        [sym_continue_statement] = ACTIONS(SHIFT(68)),
        [sym_return_statement] = ACTIONS(SHIFT(68)),
        [sym_throw_statement] = ACTIONS(SHIFT(68)),
        [sym_defer_statement] = ACTIONS(SHIFT(68)),
        [sym_do_statement] = ACTIONS(SHIFT(68)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(68)),
        [sym_line_control_statement] = ACTIONS(SHIFT(68)),
        [sym__expression] = ACTIONS(SHIFT(68)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(73)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(68)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(19)),
        [sym__declaration] = ACTIONS(SHIFT(68)),
        [sym_identifier] = ACTIONS(SHIFT(20)),
    },
    [68] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(72)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(SHIFT(72)),
    },
    [69] = {
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(71)),
    },
    [70] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_build_configuration_statement, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_build_configuration_statement, 4)),
    },
    [71] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_build_configuration_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_build_configuration_statement, 5)),
    },
    [72] = {
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
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 2)),
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
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [73] = {
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [74] = {
        [sym__statement] = ACTIONS(SHIFT(60)),
        [sym__loop_statement] = ACTIONS(SHIFT(61)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(61)),
        [sym_guard_statement] = ACTIONS(SHIFT(61)),
        [sym_switch_statement] = ACTIONS(SHIFT(61)),
        [sym_labeled_statement] = ACTIONS(SHIFT(61)),
        [sym_break_statement] = ACTIONS(SHIFT(61)),
        [sym_continue_statement] = ACTIONS(SHIFT(61)),
        [sym_return_statement] = ACTIONS(SHIFT(61)),
        [sym_throw_statement] = ACTIONS(SHIFT(61)),
        [sym_defer_statement] = ACTIONS(SHIFT(61)),
        [sym_do_statement] = ACTIONS(SHIFT(61)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(61)),
        [sym_line_control_statement] = ACTIONS(SHIFT(61)),
        [sym__expression] = ACTIONS(SHIFT(61)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(75)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(SHIFT(76)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(61)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDelseif] = ACTIONS(SHIFT(64)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 2)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 2)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(33)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(34)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(19)),
        [sym__declaration] = ACTIONS(SHIFT(61)),
        [sym_identifier] = ACTIONS(SHIFT(20)),
    },
    [75] = {
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(SHIFT(77)),
        [anon_sym_POUNDelseif] = ACTIONS(SHIFT(64)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 3)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 3)),
    },
    [76] = {
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 3)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 3)),
    },
    [77] = {
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 4)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 4)),
    },
    [78] = {
        [sym__statement] = ACTIONS(SHIFT(67)),
        [sym__loop_statement] = ACTIONS(SHIFT(68)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(68)),
        [sym_guard_statement] = ACTIONS(SHIFT(68)),
        [sym_switch_statement] = ACTIONS(SHIFT(68)),
        [sym_labeled_statement] = ACTIONS(SHIFT(68)),
        [sym_break_statement] = ACTIONS(SHIFT(68)),
        [sym_continue_statement] = ACTIONS(SHIFT(68)),
        [sym_return_statement] = ACTIONS(SHIFT(68)),
        [sym_throw_statement] = ACTIONS(SHIFT(68)),
        [sym_defer_statement] = ACTIONS(SHIFT(68)),
        [sym_do_statement] = ACTIONS(SHIFT(68)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(68)),
        [sym_line_control_statement] = ACTIONS(SHIFT(68)),
        [sym__expression] = ACTIONS(SHIFT(68)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(79)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(68)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(71)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(19)),
        [sym__declaration] = ACTIONS(SHIFT(68)),
        [sym_identifier] = ACTIONS(SHIFT(20)),
    },
    [79] = {
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(80)),
    },
    [80] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_build_configuration_statement, 6)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_build_configuration_statement, 6)),
    },
    [81] = {
        [anon_sym_POUNDelse] = ACTIONS(SHIFT(82)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(71)),
    },
    [82] = {
        [sym__statement] = ACTIONS(SHIFT(67)),
        [sym__loop_statement] = ACTIONS(SHIFT(68)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(68)),
        [sym_guard_statement] = ACTIONS(SHIFT(68)),
        [sym_switch_statement] = ACTIONS(SHIFT(68)),
        [sym_labeled_statement] = ACTIONS(SHIFT(68)),
        [sym_break_statement] = ACTIONS(SHIFT(68)),
        [sym_continue_statement] = ACTIONS(SHIFT(68)),
        [sym_return_statement] = ACTIONS(SHIFT(68)),
        [sym_throw_statement] = ACTIONS(SHIFT(68)),
        [sym_defer_statement] = ACTIONS(SHIFT(68)),
        [sym_do_statement] = ACTIONS(SHIFT(68)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(68)),
        [sym_line_control_statement] = ACTIONS(SHIFT(68)),
        [sym__expression] = ACTIONS(SHIFT(68)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(83)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(68)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(80)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(19)),
        [sym__declaration] = ACTIONS(SHIFT(68)),
        [sym_identifier] = ACTIONS(SHIFT(20)),
    },
    [83] = {
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(84)),
    },
    [84] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_build_configuration_statement, 7)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_build_configuration_statement, 7)),
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
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 2)),
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
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [86] = {
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_POUNDelseif] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [87] = {
        [sym_catch_clause] = ACTIONS(SHIFT(96)),
        [aux_sym_do_statement_repeat1] = ACTIONS(SHIFT(97)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_do_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_do_statement, 2)),
        [anon_sym_catch] = ACTIONS(SHIFT(98)),
    },
    [88] = {
        [sym__statement] = ACTIONS(SHIFT(89)),
        [sym__loop_statement] = ACTIONS(SHIFT(90)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(90)),
        [sym_guard_statement] = ACTIONS(SHIFT(90)),
        [sym_switch_statement] = ACTIONS(SHIFT(90)),
        [sym_labeled_statement] = ACTIONS(SHIFT(90)),
        [sym_break_statement] = ACTIONS(SHIFT(90)),
        [sym_continue_statement] = ACTIONS(SHIFT(90)),
        [sym_return_statement] = ACTIONS(SHIFT(90)),
        [sym_throw_statement] = ACTIONS(SHIFT(90)),
        [sym_defer_statement] = ACTIONS(SHIFT(90)),
        [sym_do_statement] = ACTIONS(SHIFT(90)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(90)),
        [sym_line_control_statement] = ACTIONS(SHIFT(90)),
        [sym__expression] = ACTIONS(SHIFT(90)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(91)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(92)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(90)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(19)),
        [sym__declaration] = ACTIONS(SHIFT(90)),
        [sym_identifier] = ACTIONS(SHIFT(20)),
    },
    [89] = {
        [sym__statement] = ACTIONS(SHIFT(89)),
        [sym__loop_statement] = ACTIONS(SHIFT(90)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(90)),
        [sym_guard_statement] = ACTIONS(SHIFT(90)),
        [sym_switch_statement] = ACTIONS(SHIFT(90)),
        [sym_labeled_statement] = ACTIONS(SHIFT(90)),
        [sym_break_statement] = ACTIONS(SHIFT(90)),
        [sym_continue_statement] = ACTIONS(SHIFT(90)),
        [sym_return_statement] = ACTIONS(SHIFT(90)),
        [sym_throw_statement] = ACTIONS(SHIFT(90)),
        [sym_defer_statement] = ACTIONS(SHIFT(90)),
        [sym_do_statement] = ACTIONS(SHIFT(90)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(90)),
        [sym_line_control_statement] = ACTIONS(SHIFT(90)),
        [sym__expression] = ACTIONS(SHIFT(90)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(95)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(90)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(19)),
        [sym__declaration] = ACTIONS(SHIFT(90)),
        [sym_identifier] = ACTIONS(SHIFT(20)),
    },
    [90] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(94)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(SHIFT(94)),
    },
    [91] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(93)),
    },
    [92] = {
        [sym_catch_clause] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_do_statement_repeat1] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_catch] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [93] = {
        [sym_catch_clause] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_do_statement_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_catch] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [94] = {
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
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 2)),
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
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [95] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [96] = {
        [sym_catch_clause] = ACTIONS(SHIFT(96)),
        [aux_sym_do_statement_repeat1] = ACTIONS(SHIFT(161)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_do_statement_repeat1, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_do_statement_repeat1, 1)),
        [anon_sym_catch] = ACTIONS(SHIFT(98)),
    },
    [97] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_do_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_do_statement, 3)),
    },
    [98] = {
        [sym__code_block] = ACTIONS(SHIFT(99)),
        [sym__pattern] = ACTIONS(SHIFT(100)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(101)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(101)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(101)),
        [sym_optional_pattern] = ACTIONS(SHIFT(101)),
        [sym_is_pattern] = ACTIONS(SHIFT(101)),
        [sym_as_pattern] = ACTIONS(SHIFT(101)),
        [sym__expression] = ACTIONS(SHIFT(101)),
        [sym__type_identifier] = ACTIONS(SHIFT(102)),
        [sym__type_name] = ACTIONS(SHIFT(103)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(104)),
        [anon_sym_let] = ACTIONS(SHIFT(105)),
        [anon_sym_var] = ACTIONS(SHIFT(105)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(88)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(101)),
        [anon_sym_DOT] = ACTIONS(SHIFT(106)),
        [anon_sym_is] = ACTIONS(SHIFT(107)),
        [sym_identifier] = ACTIONS(SHIFT(108)),
    },
    [99] = {
        [sym_catch_clause] = ACTIONS(REDUCE(sym_catch_clause, 2)),
        [aux_sym_do_statement_repeat1] = ACTIONS(REDUCE(sym_catch_clause, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_catch_clause, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_catch_clause, 2)),
        [anon_sym_catch] = ACTIONS(REDUCE(sym_catch_clause, 2)),
    },
    [100] = {
        [sym__code_block] = ACTIONS(SHIFT(160)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(88)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(118)),
        [anon_sym_as] = ACTIONS(SHIFT(119)),
    },
    [101] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [102] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(157)),
    },
    [103] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(154)),
    },
    [104] = {
        [sym__pattern] = ACTIONS(SHIFT(121)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(122)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(122)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(123)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(122)),
        [sym_optional_pattern] = ACTIONS(SHIFT(122)),
        [sym_is_pattern] = ACTIONS(SHIFT(122)),
        [sym_as_pattern] = ACTIONS(SHIFT(122)),
        [sym__expression] = ACTIONS(SHIFT(122)),
        [sym__type_identifier] = ACTIONS(SHIFT(124)),
        [sym__type_name] = ACTIONS(SHIFT(103)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(125)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(126)),
        [anon_sym_let] = ACTIONS(SHIFT(127)),
        [anon_sym_var] = ACTIONS(SHIFT(127)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(122)),
        [anon_sym_DOT] = ACTIONS(SHIFT(128)),
        [anon_sym_is] = ACTIONS(SHIFT(129)),
        [sym_identifier] = ACTIONS(SHIFT(130)),
    },
    [105] = {
        [sym__pattern] = ACTIONS(SHIFT(117)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(101)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(101)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(101)),
        [sym_optional_pattern] = ACTIONS(SHIFT(101)),
        [sym_is_pattern] = ACTIONS(SHIFT(101)),
        [sym_as_pattern] = ACTIONS(SHIFT(101)),
        [sym__expression] = ACTIONS(SHIFT(101)),
        [sym__type_identifier] = ACTIONS(SHIFT(102)),
        [sym__type_name] = ACTIONS(SHIFT(103)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(104)),
        [anon_sym_let] = ACTIONS(SHIFT(105)),
        [anon_sym_var] = ACTIONS(SHIFT(105)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(101)),
        [anon_sym_DOT] = ACTIONS(SHIFT(106)),
        [anon_sym_is] = ACTIONS(SHIFT(107)),
        [sym_identifier] = ACTIONS(SHIFT(108)),
    },
    [106] = {
        [sym_identifier] = ACTIONS(SHIFT(115)),
    },
    [107] = {
        [sym_type] = ACTIONS(SHIFT(109)),
        [sym__type_identifier] = ACTIONS(SHIFT(110)),
        [sym__type_name] = ACTIONS(SHIFT(111)),
        [sym_identifier] = ACTIONS(SHIFT(112)),
    },
    [108] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [109] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [110] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [111] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(113)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [112] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [113] = {
        [sym__type_identifier] = ACTIONS(SHIFT(114)),
        [sym__type_name] = ACTIONS(SHIFT(111)),
        [sym_identifier] = ACTIONS(SHIFT(112)),
    },
    [114] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [115] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(116)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(104)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [116] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [117] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(118)),
        [anon_sym_as] = ACTIONS(SHIFT(119)),
    },
    [118] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [119] = {
        [sym_type] = ACTIONS(SHIFT(120)),
        [sym__type_identifier] = ACTIONS(SHIFT(110)),
        [sym__type_name] = ACTIONS(SHIFT(111)),
        [sym_identifier] = ACTIONS(SHIFT(112)),
    },
    [120] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [121] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(150)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(151)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(140)),
        [anon_sym_as] = ACTIONS(SHIFT(141)),
    },
    [122] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [123] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(149)),
    },
    [124] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(146)),
    },
    [125] = {
        [sym__pattern] = ACTIONS(SHIFT(121)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(122)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(122)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(143)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(122)),
        [sym_optional_pattern] = ACTIONS(SHIFT(122)),
        [sym_is_pattern] = ACTIONS(SHIFT(122)),
        [sym_as_pattern] = ACTIONS(SHIFT(122)),
        [sym__expression] = ACTIONS(SHIFT(122)),
        [sym__type_identifier] = ACTIONS(SHIFT(124)),
        [sym__type_name] = ACTIONS(SHIFT(103)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(125)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(144)),
        [anon_sym_let] = ACTIONS(SHIFT(127)),
        [anon_sym_var] = ACTIONS(SHIFT(127)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(122)),
        [anon_sym_DOT] = ACTIONS(SHIFT(128)),
        [anon_sym_is] = ACTIONS(SHIFT(129)),
        [sym_identifier] = ACTIONS(SHIFT(130)),
    },
    [126] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [127] = {
        [sym__pattern] = ACTIONS(SHIFT(139)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(122)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(122)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(122)),
        [sym_optional_pattern] = ACTIONS(SHIFT(122)),
        [sym_is_pattern] = ACTIONS(SHIFT(122)),
        [sym_as_pattern] = ACTIONS(SHIFT(122)),
        [sym__expression] = ACTIONS(SHIFT(122)),
        [sym__type_identifier] = ACTIONS(SHIFT(124)),
        [sym__type_name] = ACTIONS(SHIFT(103)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(125)),
        [anon_sym_let] = ACTIONS(SHIFT(127)),
        [anon_sym_var] = ACTIONS(SHIFT(127)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(122)),
        [anon_sym_DOT] = ACTIONS(SHIFT(128)),
        [anon_sym_is] = ACTIONS(SHIFT(129)),
        [sym_identifier] = ACTIONS(SHIFT(130)),
    },
    [128] = {
        [sym_identifier] = ACTIONS(SHIFT(137)),
    },
    [129] = {
        [sym_type] = ACTIONS(SHIFT(131)),
        [sym__type_identifier] = ACTIONS(SHIFT(132)),
        [sym__type_name] = ACTIONS(SHIFT(133)),
        [sym_identifier] = ACTIONS(SHIFT(134)),
    },
    [130] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [131] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [132] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [133] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(135)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [134] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [135] = {
        [sym__type_identifier] = ACTIONS(SHIFT(136)),
        [sym__type_name] = ACTIONS(SHIFT(133)),
        [sym_identifier] = ACTIONS(SHIFT(134)),
    },
    [136] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [137] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(138)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(125)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [138] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [139] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(140)),
        [anon_sym_as] = ACTIONS(SHIFT(141)),
    },
    [140] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [141] = {
        [sym_type] = ACTIONS(SHIFT(142)),
        [sym__type_identifier] = ACTIONS(SHIFT(132)),
        [sym__type_name] = ACTIONS(SHIFT(133)),
        [sym_identifier] = ACTIONS(SHIFT(134)),
    },
    [142] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [143] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(145)),
    },
    [144] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [145] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [146] = {
        [sym_identifier] = ACTIONS(SHIFT(147)),
    },
    [147] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(148)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(125)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [148] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [149] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [150] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 2)),
    },
    [151] = {
        [sym__pattern] = ACTIONS(SHIFT(152)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(122)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(122)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(122)),
        [sym_optional_pattern] = ACTIONS(SHIFT(122)),
        [sym_is_pattern] = ACTIONS(SHIFT(122)),
        [sym_as_pattern] = ACTIONS(SHIFT(122)),
        [sym__expression] = ACTIONS(SHIFT(122)),
        [sym__type_identifier] = ACTIONS(SHIFT(124)),
        [sym__type_name] = ACTIONS(SHIFT(103)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(125)),
        [anon_sym_let] = ACTIONS(SHIFT(127)),
        [anon_sym_var] = ACTIONS(SHIFT(127)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(122)),
        [anon_sym_DOT] = ACTIONS(SHIFT(128)),
        [anon_sym_is] = ACTIONS(SHIFT(129)),
        [sym_identifier] = ACTIONS(SHIFT(130)),
    },
    [152] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(153)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(151)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(140)),
        [anon_sym_as] = ACTIONS(SHIFT(141)),
    },
    [153] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [154] = {
        [sym__type_identifier] = ACTIONS(SHIFT(155)),
        [sym__type_name] = ACTIONS(SHIFT(103)),
        [sym_identifier] = ACTIONS(SHIFT(156)),
    },
    [155] = {
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [156] = {
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [157] = {
        [sym_identifier] = ACTIONS(SHIFT(158)),
    },
    [158] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(159)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(104)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [159] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [160] = {
        [sym_catch_clause] = ACTIONS(REDUCE(sym_catch_clause, 3)),
        [aux_sym_do_statement_repeat1] = ACTIONS(REDUCE(sym_catch_clause, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_catch_clause, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_catch_clause, 3)),
        [anon_sym_catch] = ACTIONS(REDUCE(sym_catch_clause, 3)),
    },
    [161] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_do_statement_repeat1, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_do_statement_repeat1, 2)),
    },
    [162] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_defer_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_defer_statement, 2)),
    },
    [163] = {
        [sym__statement] = ACTIONS(SHIFT(89)),
        [sym__loop_statement] = ACTIONS(SHIFT(90)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(90)),
        [sym_guard_statement] = ACTIONS(SHIFT(90)),
        [sym_switch_statement] = ACTIONS(SHIFT(90)),
        [sym_labeled_statement] = ACTIONS(SHIFT(90)),
        [sym_break_statement] = ACTIONS(SHIFT(90)),
        [sym_continue_statement] = ACTIONS(SHIFT(90)),
        [sym_return_statement] = ACTIONS(SHIFT(90)),
        [sym_throw_statement] = ACTIONS(SHIFT(90)),
        [sym_defer_statement] = ACTIONS(SHIFT(90)),
        [sym_do_statement] = ACTIONS(SHIFT(90)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(90)),
        [sym_line_control_statement] = ACTIONS(SHIFT(90)),
        [sym__expression] = ACTIONS(SHIFT(90)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(164)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(165)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(90)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(19)),
        [sym__declaration] = ACTIONS(SHIFT(90)),
        [sym_identifier] = ACTIONS(SHIFT(20)),
    },
    [164] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(166)),
    },
    [165] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [166] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [167] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_throw_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_throw_statement, 2)),
    },
    [168] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [169] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_return_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_return_statement, 2)),
    },
    [170] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_continue_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_continue_statement, 2)),
    },
    [171] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_break_statement, 2)),
    },
    [172] = {
        [anon_sym_LBRACE] = ACTIONS(SHIFT(174)),
    },
    [173] = {
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [174] = {
        [sym_case_statement] = ACTIONS(SHIFT(175)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(176)),
        [anon_sym_case] = ACTIONS(SHIFT(177)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(178)),
        [anon_sym_default] = ACTIONS(SHIFT(179)),
    },
    [175] = {
        [sym_case_statement] = ACTIONS(SHIFT(175)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(221)),
        [anon_sym_case] = ACTIONS(SHIFT(177)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 1)),
        [anon_sym_default] = ACTIONS(SHIFT(179)),
    },
    [176] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(220)),
    },
    [177] = {
        [sym__pattern] = ACTIONS(SHIFT(186)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(187)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(187)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(187)),
        [sym_optional_pattern] = ACTIONS(SHIFT(187)),
        [sym_is_pattern] = ACTIONS(SHIFT(187)),
        [sym_as_pattern] = ACTIONS(SHIFT(187)),
        [sym__expression] = ACTIONS(SHIFT(187)),
        [sym__type_identifier] = ACTIONS(SHIFT(188)),
        [sym__type_name] = ACTIONS(SHIFT(103)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(189)),
        [anon_sym_let] = ACTIONS(SHIFT(190)),
        [anon_sym_var] = ACTIONS(SHIFT(190)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(187)),
        [anon_sym_DOT] = ACTIONS(SHIFT(191)),
        [anon_sym_is] = ACTIONS(SHIFT(192)),
        [sym_identifier] = ACTIONS(SHIFT(193)),
    },
    [178] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_switch_statement, 4)),
    },
    [179] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(180)),
    },
    [180] = {
        [sym__statement] = ACTIONS(SHIFT(181)),
        [sym__loop_statement] = ACTIONS(SHIFT(182)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(182)),
        [sym_guard_statement] = ACTIONS(SHIFT(182)),
        [sym_switch_statement] = ACTIONS(SHIFT(182)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [sym_labeled_statement] = ACTIONS(SHIFT(182)),
        [sym_break_statement] = ACTIONS(SHIFT(182)),
        [sym_continue_statement] = ACTIONS(SHIFT(182)),
        [sym_return_statement] = ACTIONS(SHIFT(182)),
        [sym_throw_statement] = ACTIONS(SHIFT(182)),
        [sym_defer_statement] = ACTIONS(SHIFT(182)),
        [sym_do_statement] = ACTIONS(SHIFT(182)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(182)),
        [sym_line_control_statement] = ACTIONS(SHIFT(182)),
        [sym__expression] = ACTIONS(SHIFT(182)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(183)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(182)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(19)),
        [sym__declaration] = ACTIONS(SHIFT(182)),
        [sym_identifier] = ACTIONS(SHIFT(20)),
    },
    [181] = {
        [sym__statement] = ACTIONS(SHIFT(181)),
        [sym__loop_statement] = ACTIONS(SHIFT(182)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(182)),
        [sym_guard_statement] = ACTIONS(SHIFT(182)),
        [sym_switch_statement] = ACTIONS(SHIFT(182)),
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [sym_labeled_statement] = ACTIONS(SHIFT(182)),
        [sym_break_statement] = ACTIONS(SHIFT(182)),
        [sym_continue_statement] = ACTIONS(SHIFT(182)),
        [sym_return_statement] = ACTIONS(SHIFT(182)),
        [sym_throw_statement] = ACTIONS(SHIFT(182)),
        [sym_defer_statement] = ACTIONS(SHIFT(182)),
        [sym_do_statement] = ACTIONS(SHIFT(182)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(182)),
        [sym_line_control_statement] = ACTIONS(SHIFT(182)),
        [sym__expression] = ACTIONS(SHIFT(182)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(185)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_case] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_default] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(182)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(19)),
        [sym__declaration] = ACTIONS(SHIFT(182)),
        [sym_identifier] = ACTIONS(SHIFT(20)),
    },
    [182] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(184)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(SHIFT(184)),
    },
    [183] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 3)),
    },
    [184] = {
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
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_case] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 2)),
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
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [185] = {
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_case] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [186] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(212)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(213)),
        [anon_sym_COLON] = ACTIONS(SHIFT(214)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(203)),
        [anon_sym_as] = ACTIONS(SHIFT(204)),
    },
    [187] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [188] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(209)),
    },
    [189] = {
        [sym__pattern] = ACTIONS(SHIFT(121)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(122)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(122)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(206)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(122)),
        [sym_optional_pattern] = ACTIONS(SHIFT(122)),
        [sym_is_pattern] = ACTIONS(SHIFT(122)),
        [sym_as_pattern] = ACTIONS(SHIFT(122)),
        [sym__expression] = ACTIONS(SHIFT(122)),
        [sym__type_identifier] = ACTIONS(SHIFT(124)),
        [sym__type_name] = ACTIONS(SHIFT(103)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(125)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(207)),
        [anon_sym_let] = ACTIONS(SHIFT(127)),
        [anon_sym_var] = ACTIONS(SHIFT(127)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(122)),
        [anon_sym_DOT] = ACTIONS(SHIFT(128)),
        [anon_sym_is] = ACTIONS(SHIFT(129)),
        [sym_identifier] = ACTIONS(SHIFT(130)),
    },
    [190] = {
        [sym__pattern] = ACTIONS(SHIFT(202)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(187)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(187)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(187)),
        [sym_optional_pattern] = ACTIONS(SHIFT(187)),
        [sym_is_pattern] = ACTIONS(SHIFT(187)),
        [sym_as_pattern] = ACTIONS(SHIFT(187)),
        [sym__expression] = ACTIONS(SHIFT(187)),
        [sym__type_identifier] = ACTIONS(SHIFT(188)),
        [sym__type_name] = ACTIONS(SHIFT(103)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(189)),
        [anon_sym_let] = ACTIONS(SHIFT(190)),
        [anon_sym_var] = ACTIONS(SHIFT(190)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(187)),
        [anon_sym_DOT] = ACTIONS(SHIFT(191)),
        [anon_sym_is] = ACTIONS(SHIFT(192)),
        [sym_identifier] = ACTIONS(SHIFT(193)),
    },
    [191] = {
        [sym_identifier] = ACTIONS(SHIFT(200)),
    },
    [192] = {
        [sym_type] = ACTIONS(SHIFT(194)),
        [sym__type_identifier] = ACTIONS(SHIFT(195)),
        [sym__type_name] = ACTIONS(SHIFT(196)),
        [sym_identifier] = ACTIONS(SHIFT(197)),
    },
    [193] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [194] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [195] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [196] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(198)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [197] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [198] = {
        [sym__type_identifier] = ACTIONS(SHIFT(199)),
        [sym__type_name] = ACTIONS(SHIFT(196)),
        [sym_identifier] = ACTIONS(SHIFT(197)),
    },
    [199] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [200] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(201)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(189)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [201] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [202] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(203)),
        [anon_sym_as] = ACTIONS(SHIFT(204)),
    },
    [203] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [204] = {
        [sym_type] = ACTIONS(SHIFT(205)),
        [sym__type_identifier] = ACTIONS(SHIFT(195)),
        [sym__type_name] = ACTIONS(SHIFT(196)),
        [sym_identifier] = ACTIONS(SHIFT(197)),
    },
    [205] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [206] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(208)),
    },
    [207] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [208] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [209] = {
        [sym_identifier] = ACTIONS(SHIFT(210)),
    },
    [210] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(211)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(189)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [211] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [212] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(218)),
    },
    [213] = {
        [sym__pattern] = ACTIONS(SHIFT(216)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(187)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(187)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(187)),
        [sym_optional_pattern] = ACTIONS(SHIFT(187)),
        [sym_is_pattern] = ACTIONS(SHIFT(187)),
        [sym_as_pattern] = ACTIONS(SHIFT(187)),
        [sym__expression] = ACTIONS(SHIFT(187)),
        [sym__type_identifier] = ACTIONS(SHIFT(188)),
        [sym__type_name] = ACTIONS(SHIFT(103)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(189)),
        [anon_sym_let] = ACTIONS(SHIFT(190)),
        [anon_sym_var] = ACTIONS(SHIFT(190)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(187)),
        [anon_sym_DOT] = ACTIONS(SHIFT(191)),
        [anon_sym_is] = ACTIONS(SHIFT(192)),
        [sym_identifier] = ACTIONS(SHIFT(193)),
    },
    [214] = {
        [sym__statement] = ACTIONS(SHIFT(181)),
        [sym__loop_statement] = ACTIONS(SHIFT(182)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(182)),
        [sym_guard_statement] = ACTIONS(SHIFT(182)),
        [sym_switch_statement] = ACTIONS(SHIFT(182)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [sym_labeled_statement] = ACTIONS(SHIFT(182)),
        [sym_break_statement] = ACTIONS(SHIFT(182)),
        [sym_continue_statement] = ACTIONS(SHIFT(182)),
        [sym_return_statement] = ACTIONS(SHIFT(182)),
        [sym_throw_statement] = ACTIONS(SHIFT(182)),
        [sym_defer_statement] = ACTIONS(SHIFT(182)),
        [sym_do_statement] = ACTIONS(SHIFT(182)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(182)),
        [sym_line_control_statement] = ACTIONS(SHIFT(182)),
        [sym__expression] = ACTIONS(SHIFT(182)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(215)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(182)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(19)),
        [sym__declaration] = ACTIONS(SHIFT(182)),
        [sym_identifier] = ACTIONS(SHIFT(20)),
    },
    [215] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 4)),
    },
    [216] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(217)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(213)),
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(203)),
        [anon_sym_as] = ACTIONS(SHIFT(204)),
    },
    [217] = {
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [218] = {
        [sym__statement] = ACTIONS(SHIFT(181)),
        [sym__loop_statement] = ACTIONS(SHIFT(182)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(182)),
        [sym_guard_statement] = ACTIONS(SHIFT(182)),
        [sym_switch_statement] = ACTIONS(SHIFT(182)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [sym_labeled_statement] = ACTIONS(SHIFT(182)),
        [sym_break_statement] = ACTIONS(SHIFT(182)),
        [sym_continue_statement] = ACTIONS(SHIFT(182)),
        [sym_return_statement] = ACTIONS(SHIFT(182)),
        [sym_throw_statement] = ACTIONS(SHIFT(182)),
        [sym_defer_statement] = ACTIONS(SHIFT(182)),
        [sym_do_statement] = ACTIONS(SHIFT(182)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(182)),
        [sym_line_control_statement] = ACTIONS(SHIFT(182)),
        [sym__expression] = ACTIONS(SHIFT(182)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(219)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(182)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(19)),
        [sym__declaration] = ACTIONS(SHIFT(182)),
        [sym_identifier] = ACTIONS(SHIFT(20)),
    },
    [219] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 5)),
    },
    [220] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_switch_statement, 5)),
    },
    [221] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 2)),
    },
    [222] = {
        [anon_sym_else] = ACTIONS(SHIFT(296)),
    },
    [223] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(295)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(289)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [224] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1), SHIFT(292)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [225] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [226] = {
        [anon_sym_COMMA] = ACTIONS(SHIFT(286)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [227] = {
        [sym__pattern] = ACTIONS(SHIFT(283)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(233)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(233)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(233)),
        [sym_optional_pattern] = ACTIONS(SHIFT(233)),
        [sym_is_pattern] = ACTIONS(SHIFT(233)),
        [sym_as_pattern] = ACTIONS(SHIFT(233)),
        [sym__expression] = ACTIONS(SHIFT(233)),
        [sym__type_identifier] = ACTIONS(SHIFT(234)),
        [sym__type_name] = ACTIONS(SHIFT(103)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(235)),
        [anon_sym_let] = ACTIONS(SHIFT(236)),
        [anon_sym_var] = ACTIONS(SHIFT(236)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(233)),
        [anon_sym_DOT] = ACTIONS(SHIFT(237)),
        [anon_sym_is] = ACTIONS(SHIFT(238)),
        [sym_identifier] = ACTIONS(SHIFT(239)),
    },
    [228] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(268)),
    },
    [229] = {
        [sym_optional_binding] = ACTIONS(SHIFT(231)),
        [sym__pattern] = ACTIONS(SHIFT(232)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(233)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(233)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(233)),
        [sym_optional_pattern] = ACTIONS(SHIFT(233)),
        [sym_is_pattern] = ACTIONS(SHIFT(233)),
        [sym_as_pattern] = ACTIONS(SHIFT(233)),
        [sym__expression] = ACTIONS(SHIFT(233)),
        [sym__type_identifier] = ACTIONS(SHIFT(234)),
        [sym__type_name] = ACTIONS(SHIFT(103)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(235)),
        [anon_sym_let] = ACTIONS(SHIFT(236)),
        [anon_sym_var] = ACTIONS(SHIFT(236)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(233)),
        [anon_sym_DOT] = ACTIONS(SHIFT(237)),
        [anon_sym_is] = ACTIONS(SHIFT(238)),
        [sym_identifier] = ACTIONS(SHIFT(239)),
    },
    [230] = {
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [231] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(261)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
    },
    [232] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(258)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(249)),
        [anon_sym_as] = ACTIONS(SHIFT(250)),
    },
    [233] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [234] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(255)),
    },
    [235] = {
        [sym__pattern] = ACTIONS(SHIFT(121)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(122)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(122)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(252)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(122)),
        [sym_optional_pattern] = ACTIONS(SHIFT(122)),
        [sym_is_pattern] = ACTIONS(SHIFT(122)),
        [sym_as_pattern] = ACTIONS(SHIFT(122)),
        [sym__expression] = ACTIONS(SHIFT(122)),
        [sym__type_identifier] = ACTIONS(SHIFT(124)),
        [sym__type_name] = ACTIONS(SHIFT(103)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(125)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(253)),
        [anon_sym_let] = ACTIONS(SHIFT(127)),
        [anon_sym_var] = ACTIONS(SHIFT(127)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(122)),
        [anon_sym_DOT] = ACTIONS(SHIFT(128)),
        [anon_sym_is] = ACTIONS(SHIFT(129)),
        [sym_identifier] = ACTIONS(SHIFT(130)),
    },
    [236] = {
        [sym__pattern] = ACTIONS(SHIFT(248)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(233)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(233)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(233)),
        [sym_optional_pattern] = ACTIONS(SHIFT(233)),
        [sym_is_pattern] = ACTIONS(SHIFT(233)),
        [sym_as_pattern] = ACTIONS(SHIFT(233)),
        [sym__expression] = ACTIONS(SHIFT(233)),
        [sym__type_identifier] = ACTIONS(SHIFT(234)),
        [sym__type_name] = ACTIONS(SHIFT(103)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(235)),
        [anon_sym_let] = ACTIONS(SHIFT(236)),
        [anon_sym_var] = ACTIONS(SHIFT(236)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(233)),
        [anon_sym_DOT] = ACTIONS(SHIFT(237)),
        [anon_sym_is] = ACTIONS(SHIFT(238)),
        [sym_identifier] = ACTIONS(SHIFT(239)),
    },
    [237] = {
        [sym_identifier] = ACTIONS(SHIFT(246)),
    },
    [238] = {
        [sym_type] = ACTIONS(SHIFT(240)),
        [sym__type_identifier] = ACTIONS(SHIFT(241)),
        [sym__type_name] = ACTIONS(SHIFT(242)),
        [sym_identifier] = ACTIONS(SHIFT(243)),
    },
    [239] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [240] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [241] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [242] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(244)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [243] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [244] = {
        [sym__type_identifier] = ACTIONS(SHIFT(245)),
        [sym__type_name] = ACTIONS(SHIFT(242)),
        [sym_identifier] = ACTIONS(SHIFT(243)),
    },
    [245] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [246] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(247)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(235)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [247] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [248] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(249)),
        [anon_sym_as] = ACTIONS(SHIFT(250)),
    },
    [249] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [250] = {
        [sym_type] = ACTIONS(SHIFT(251)),
        [sym__type_identifier] = ACTIONS(SHIFT(241)),
        [sym__type_name] = ACTIONS(SHIFT(242)),
        [sym_identifier] = ACTIONS(SHIFT(243)),
    },
    [251] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [252] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(254)),
    },
    [253] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [254] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [255] = {
        [sym_identifier] = ACTIONS(SHIFT(256)),
    },
    [256] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(257)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(235)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [257] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [258] = {
        [sym__expression] = ACTIONS(SHIFT(259)),
        [sym_identifier] = ACTIONS(SHIFT(260)),
    },
    [259] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [260] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [261] = {
        [sym_optional_binding] = ACTIONS(SHIFT(262)),
        [sym__pattern] = ACTIONS(SHIFT(263)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(233)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(233)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(233)),
        [sym_optional_pattern] = ACTIONS(SHIFT(233)),
        [sym_is_pattern] = ACTIONS(SHIFT(233)),
        [sym_as_pattern] = ACTIONS(SHIFT(233)),
        [sym__expression] = ACTIONS(SHIFT(233)),
        [sym__type_identifier] = ACTIONS(SHIFT(234)),
        [sym__type_name] = ACTIONS(SHIFT(103)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(235)),
        [anon_sym_let] = ACTIONS(SHIFT(236)),
        [anon_sym_var] = ACTIONS(SHIFT(236)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(233)),
        [anon_sym_DOT] = ACTIONS(SHIFT(237)),
        [anon_sym_is] = ACTIONS(SHIFT(238)),
        [sym_identifier] = ACTIONS(SHIFT(239)),
    },
    [262] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(SHIFT(267)),
        [anon_sym_COMMA] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
    },
    [263] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(264)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(249)),
        [anon_sym_as] = ACTIONS(SHIFT(250)),
    },
    [264] = {
        [sym__expression] = ACTIONS(SHIFT(265)),
        [sym_identifier] = ACTIONS(SHIFT(266)),
    },
    [265] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [266] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [267] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
    },
    [268] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(269)),
        [anon_sym_iOS] = ACTIONS(SHIFT(270)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(270)),
        [anon_sym_OSX] = ACTIONS(SHIFT(270)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(270)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(270)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(270)),
    },
    [269] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(281)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(282)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(274)),
    },
    [270] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(271)),
    },
    [271] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(272)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(273)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(274)),
    },
    [272] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(280)),
    },
    [273] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 5)),
    },
    [274] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(275)),
        [anon_sym_iOS] = ACTIONS(SHIFT(276)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(276)),
        [anon_sym_OSX] = ACTIONS(SHIFT(276)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(276)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(276)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(276)),
    },
    [275] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(279)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(274)),
    },
    [276] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(277)),
    },
    [277] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(278)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 3)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(274)),
    },
    [278] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 4)),
    },
    [279] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 3)),
    },
    [280] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 6)),
    },
    [281] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(273)),
    },
    [282] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 4)),
    },
    [283] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(284)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(249)),
        [anon_sym_as] = ACTIONS(SHIFT(250)),
    },
    [284] = {
        [sym__expression] = ACTIONS(SHIFT(285)),
        [sym_identifier] = ACTIONS(SHIFT(260)),
    },
    [285] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_case_condition, 4)),
    },
    [286] = {
        [sym__condition] = ACTIONS(SHIFT(287)),
        [sym_availability_condition] = ACTIONS(SHIFT(225)),
        [sym_case_condition] = ACTIONS(SHIFT(225)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(225)),
        [anon_sym_case] = ACTIONS(SHIFT(227)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(228)),
        [anon_sym_let] = ACTIONS(SHIFT(229)),
        [anon_sym_var] = ACTIONS(SHIFT(229)),
    },
    [287] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(288)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(289)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [288] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 4)),
    },
    [289] = {
        [sym__condition] = ACTIONS(SHIFT(290)),
        [sym_availability_condition] = ACTIONS(SHIFT(225)),
        [sym_case_condition] = ACTIONS(SHIFT(225)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(225)),
        [anon_sym_case] = ACTIONS(SHIFT(227)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(228)),
        [anon_sym_let] = ACTIONS(SHIFT(229)),
        [anon_sym_var] = ACTIONS(SHIFT(229)),
    },
    [290] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(291)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(289)),
        [anon_sym_else] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
    },
    [291] = {
        [anon_sym_else] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
    },
    [292] = {
        [sym__expression] = ACTIONS(SHIFT(293)),
        [sym_identifier] = ACTIONS(SHIFT(294)),
    },
    [293] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [294] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [295] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 2)),
    },
    [296] = {
        [sym__code_block] = ACTIONS(SHIFT(297)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(163)),
    },
    [297] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_guard_statement, 4)),
    },
    [298] = {
        [sym__code_block] = ACTIONS(SHIFT(341)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(342)),
    },
    [299] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(340)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(334)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [300] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1), SHIFT(337)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [301] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [302] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(331)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [303] = {
        [sym__pattern] = ACTIONS(SHIFT(328)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(233)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(233)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(233)),
        [sym_optional_pattern] = ACTIONS(SHIFT(233)),
        [sym_is_pattern] = ACTIONS(SHIFT(233)),
        [sym_as_pattern] = ACTIONS(SHIFT(233)),
        [sym__expression] = ACTIONS(SHIFT(233)),
        [sym__type_identifier] = ACTIONS(SHIFT(234)),
        [sym__type_name] = ACTIONS(SHIFT(103)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(235)),
        [anon_sym_let] = ACTIONS(SHIFT(236)),
        [anon_sym_var] = ACTIONS(SHIFT(236)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(233)),
        [anon_sym_DOT] = ACTIONS(SHIFT(237)),
        [anon_sym_is] = ACTIONS(SHIFT(238)),
        [sym_identifier] = ACTIONS(SHIFT(239)),
    },
    [304] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(319)),
    },
    [305] = {
        [sym_optional_binding] = ACTIONS(SHIFT(307)),
        [sym__pattern] = ACTIONS(SHIFT(308)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(233)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(233)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(233)),
        [sym_optional_pattern] = ACTIONS(SHIFT(233)),
        [sym_is_pattern] = ACTIONS(SHIFT(233)),
        [sym_as_pattern] = ACTIONS(SHIFT(233)),
        [sym__expression] = ACTIONS(SHIFT(233)),
        [sym__type_identifier] = ACTIONS(SHIFT(234)),
        [sym__type_name] = ACTIONS(SHIFT(103)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(235)),
        [anon_sym_let] = ACTIONS(SHIFT(236)),
        [anon_sym_var] = ACTIONS(SHIFT(236)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(233)),
        [anon_sym_DOT] = ACTIONS(SHIFT(237)),
        [anon_sym_is] = ACTIONS(SHIFT(238)),
        [sym_identifier] = ACTIONS(SHIFT(239)),
    },
    [306] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [307] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(312)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
    },
    [308] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(309)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(249)),
        [anon_sym_as] = ACTIONS(SHIFT(250)),
    },
    [309] = {
        [sym__expression] = ACTIONS(SHIFT(310)),
        [sym_identifier] = ACTIONS(SHIFT(311)),
    },
    [310] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [311] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [312] = {
        [sym_optional_binding] = ACTIONS(SHIFT(313)),
        [sym__pattern] = ACTIONS(SHIFT(314)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(233)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(233)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(233)),
        [sym_optional_pattern] = ACTIONS(SHIFT(233)),
        [sym_is_pattern] = ACTIONS(SHIFT(233)),
        [sym_as_pattern] = ACTIONS(SHIFT(233)),
        [sym__expression] = ACTIONS(SHIFT(233)),
        [sym__type_identifier] = ACTIONS(SHIFT(234)),
        [sym__type_name] = ACTIONS(SHIFT(103)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(235)),
        [anon_sym_let] = ACTIONS(SHIFT(236)),
        [anon_sym_var] = ACTIONS(SHIFT(236)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(233)),
        [anon_sym_DOT] = ACTIONS(SHIFT(237)),
        [anon_sym_is] = ACTIONS(SHIFT(238)),
        [sym_identifier] = ACTIONS(SHIFT(239)),
    },
    [313] = {
        [sym__code_block] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(SHIFT(318)),
        [anon_sym_COMMA] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
    },
    [314] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(315)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(249)),
        [anon_sym_as] = ACTIONS(SHIFT(250)),
    },
    [315] = {
        [sym__expression] = ACTIONS(SHIFT(316)),
        [sym_identifier] = ACTIONS(SHIFT(317)),
    },
    [316] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [317] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [318] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
    },
    [319] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(320)),
        [anon_sym_iOS] = ACTIONS(SHIFT(321)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(321)),
        [anon_sym_OSX] = ACTIONS(SHIFT(321)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(321)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(321)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(321)),
    },
    [320] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(326)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(327)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(274)),
    },
    [321] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(322)),
    },
    [322] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(323)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(324)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(274)),
    },
    [323] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(325)),
    },
    [324] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 5)),
    },
    [325] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 6)),
    },
    [326] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(324)),
    },
    [327] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 4)),
    },
    [328] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(329)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(249)),
        [anon_sym_as] = ACTIONS(SHIFT(250)),
    },
    [329] = {
        [sym__expression] = ACTIONS(SHIFT(330)),
        [sym_identifier] = ACTIONS(SHIFT(311)),
    },
    [330] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_case_condition, 4)),
    },
    [331] = {
        [sym__condition] = ACTIONS(SHIFT(332)),
        [sym_availability_condition] = ACTIONS(SHIFT(301)),
        [sym_case_condition] = ACTIONS(SHIFT(301)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(301)),
        [anon_sym_case] = ACTIONS(SHIFT(303)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(304)),
        [anon_sym_let] = ACTIONS(SHIFT(305)),
        [anon_sym_var] = ACTIONS(SHIFT(305)),
    },
    [332] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(333)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(334)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [333] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 4)),
    },
    [334] = {
        [sym__condition] = ACTIONS(SHIFT(335)),
        [sym_availability_condition] = ACTIONS(SHIFT(301)),
        [sym_case_condition] = ACTIONS(SHIFT(301)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(301)),
        [anon_sym_case] = ACTIONS(SHIFT(303)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(304)),
        [anon_sym_let] = ACTIONS(SHIFT(305)),
        [anon_sym_var] = ACTIONS(SHIFT(305)),
    },
    [335] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(336)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(334)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
    },
    [336] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
    },
    [337] = {
        [sym__expression] = ACTIONS(SHIFT(338)),
        [sym_identifier] = ACTIONS(SHIFT(339)),
    },
    [338] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [339] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [340] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 2)),
    },
    [341] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_else] = ACTIONS(SHIFT(346)),
    },
    [342] = {
        [sym__statement] = ACTIONS(SHIFT(89)),
        [sym__loop_statement] = ACTIONS(SHIFT(90)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(90)),
        [sym_guard_statement] = ACTIONS(SHIFT(90)),
        [sym_switch_statement] = ACTIONS(SHIFT(90)),
        [sym_labeled_statement] = ACTIONS(SHIFT(90)),
        [sym_break_statement] = ACTIONS(SHIFT(90)),
        [sym_continue_statement] = ACTIONS(SHIFT(90)),
        [sym_return_statement] = ACTIONS(SHIFT(90)),
        [sym_throw_statement] = ACTIONS(SHIFT(90)),
        [sym_defer_statement] = ACTIONS(SHIFT(90)),
        [sym_do_statement] = ACTIONS(SHIFT(90)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(90)),
        [sym_line_control_statement] = ACTIONS(SHIFT(90)),
        [sym__expression] = ACTIONS(SHIFT(90)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(343)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(344)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(90)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(19)),
        [sym__declaration] = ACTIONS(SHIFT(90)),
        [sym_identifier] = ACTIONS(SHIFT(20)),
    },
    [343] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(345)),
    },
    [344] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [345] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [346] = {
        [sym_if_statement] = ACTIONS(SHIFT(347)),
        [sym__code_block] = ACTIONS(SHIFT(347)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(163)),
    },
    [347] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_if_statement, 5)),
    },
    [348] = {
        [anon_sym_while] = ACTIONS(SHIFT(353)),
    },
    [349] = {
        [sym__statement] = ACTIONS(SHIFT(89)),
        [sym__loop_statement] = ACTIONS(SHIFT(90)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(90)),
        [sym_guard_statement] = ACTIONS(SHIFT(90)),
        [sym_switch_statement] = ACTIONS(SHIFT(90)),
        [sym_labeled_statement] = ACTIONS(SHIFT(90)),
        [sym_break_statement] = ACTIONS(SHIFT(90)),
        [sym_continue_statement] = ACTIONS(SHIFT(90)),
        [sym_return_statement] = ACTIONS(SHIFT(90)),
        [sym_throw_statement] = ACTIONS(SHIFT(90)),
        [sym_defer_statement] = ACTIONS(SHIFT(90)),
        [sym_do_statement] = ACTIONS(SHIFT(90)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(90)),
        [sym_line_control_statement] = ACTIONS(SHIFT(90)),
        [sym__expression] = ACTIONS(SHIFT(90)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(350)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(351)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(90)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(19)),
        [sym__declaration] = ACTIONS(SHIFT(90)),
        [sym_identifier] = ACTIONS(SHIFT(20)),
    },
    [350] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(352)),
    },
    [351] = {
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [352] = {
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [353] = {
        [sym__expression] = ACTIONS(SHIFT(354)),
        [sym_identifier] = ACTIONS(SHIFT(168)),
    },
    [354] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
    },
    [355] = {
        [sym__code_block] = ACTIONS(SHIFT(356)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(163)),
    },
    [356] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_while_statement, 3)),
    },
    [357] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(457)),
    },
    [358] = {
        [sym__code_block] = ACTIONS(SHIFT(456)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(163)),
    },
    [359] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__for_init, 1)),
    },
    [360] = {
        [sym__variable_name] = ACTIONS(SHIFT(441)),
        [sym_identifier] = ACTIONS(SHIFT(442)),
    },
    [361] = {
        [sym__type_annotation] = ACTIONS(SHIFT(437)),
        [anon_sym_in] = ACTIONS(SHIFT(438)),
        [anon_sym_COLON] = ACTIONS(SHIFT(393)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(387)),
        [anon_sym_as] = ACTIONS(SHIFT(388)),
    },
    [362] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [363] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(418)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(419)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [364] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(434)),
    },
    [365] = {
        [sym__expression] = ACTIONS(SHIFT(429)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(430)),
        [sym_identifier] = ACTIONS(SHIFT(413)),
    },
    [366] = {
        [sym__for_init] = ACTIONS(SHIFT(405)),
        [sym__for_condition] = ACTIONS(SHIFT(406)),
        [sym_variable_declaration] = ACTIONS(SHIFT(359)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(360)),
        [sym__pattern] = ACTIONS(SHIFT(121)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(122)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(122)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(382)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(122)),
        [sym_optional_pattern] = ACTIONS(SHIFT(122)),
        [sym_is_pattern] = ACTIONS(SHIFT(122)),
        [sym_as_pattern] = ACTIONS(SHIFT(122)),
        [sym__expression] = ACTIONS(SHIFT(407)),
        [sym__expression_list] = ACTIONS(SHIFT(359)),
        [sym__type_identifier] = ACTIONS(SHIFT(124)),
        [sym__type_name] = ACTIONS(SHIFT(103)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(408)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(125)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(383)),
        [anon_sym_let] = ACTIONS(SHIFT(127)),
        [anon_sym_var] = ACTIONS(SHIFT(409)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(122)),
        [anon_sym_DOT] = ACTIONS(SHIFT(128)),
        [anon_sym_is] = ACTIONS(SHIFT(129)),
        [sym_identifier] = ACTIONS(SHIFT(410)),
    },
    [367] = {
        [sym__pattern] = ACTIONS(SHIFT(390)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(362)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(362)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(362)),
        [sym_optional_pattern] = ACTIONS(SHIFT(362)),
        [sym_is_pattern] = ACTIONS(SHIFT(362)),
        [sym_as_pattern] = ACTIONS(SHIFT(362)),
        [sym__expression] = ACTIONS(SHIFT(362)),
        [sym__type_identifier] = ACTIONS(SHIFT(364)),
        [sym__type_name] = ACTIONS(SHIFT(103)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(381)),
        [anon_sym_let] = ACTIONS(SHIFT(368)),
        [anon_sym_var] = ACTIONS(SHIFT(368)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(362)),
        [anon_sym_DOT] = ACTIONS(SHIFT(370)),
        [anon_sym_is] = ACTIONS(SHIFT(371)),
        [sym_identifier] = ACTIONS(SHIFT(386)),
    },
    [368] = {
        [sym__pattern] = ACTIONS(SHIFT(385)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(362)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(362)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(362)),
        [sym_optional_pattern] = ACTIONS(SHIFT(362)),
        [sym_is_pattern] = ACTIONS(SHIFT(362)),
        [sym_as_pattern] = ACTIONS(SHIFT(362)),
        [sym__expression] = ACTIONS(SHIFT(362)),
        [sym__type_identifier] = ACTIONS(SHIFT(364)),
        [sym__type_name] = ACTIONS(SHIFT(103)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(381)),
        [anon_sym_let] = ACTIONS(SHIFT(368)),
        [anon_sym_var] = ACTIONS(SHIFT(368)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(362)),
        [anon_sym_DOT] = ACTIONS(SHIFT(370)),
        [anon_sym_is] = ACTIONS(SHIFT(371)),
        [sym_identifier] = ACTIONS(SHIFT(386)),
    },
    [369] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(385)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(362)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(362)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(362)),
        [sym_optional_pattern] = ACTIONS(SHIFT(362)),
        [sym_is_pattern] = ACTIONS(SHIFT(362)),
        [sym_as_pattern] = ACTIONS(SHIFT(362)),
        [sym__expression] = ACTIONS(SHIFT(362)),
        [sym__type_identifier] = ACTIONS(SHIFT(364)),
        [sym__type_name] = ACTIONS(SHIFT(103)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(381)),
        [anon_sym_let] = ACTIONS(SHIFT(368)),
        [anon_sym_var] = ACTIONS(SHIFT(368)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(362)),
        [anon_sym_DOT] = ACTIONS(SHIFT(370)),
        [anon_sym_is] = ACTIONS(SHIFT(371)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(386)),
    },
    [370] = {
        [sym_identifier] = ACTIONS(SHIFT(379)),
    },
    [371] = {
        [sym_type] = ACTIONS(SHIFT(373)),
        [sym__type_identifier] = ACTIONS(SHIFT(374)),
        [sym__type_name] = ACTIONS(SHIFT(375)),
        [sym_identifier] = ACTIONS(SHIFT(376)),
    },
    [372] = {
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
    [373] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [374] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [375] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(377)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [376] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [377] = {
        [sym__type_identifier] = ACTIONS(SHIFT(378)),
        [sym__type_name] = ACTIONS(SHIFT(375)),
        [sym_identifier] = ACTIONS(SHIFT(376)),
    },
    [378] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [379] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(380)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(381)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [380] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [381] = {
        [sym__pattern] = ACTIONS(SHIFT(121)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(122)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(122)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(382)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(122)),
        [sym_optional_pattern] = ACTIONS(SHIFT(122)),
        [sym_is_pattern] = ACTIONS(SHIFT(122)),
        [sym_as_pattern] = ACTIONS(SHIFT(122)),
        [sym__expression] = ACTIONS(SHIFT(122)),
        [sym__type_identifier] = ACTIONS(SHIFT(124)),
        [sym__type_name] = ACTIONS(SHIFT(103)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(125)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(383)),
        [anon_sym_let] = ACTIONS(SHIFT(127)),
        [anon_sym_var] = ACTIONS(SHIFT(127)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(122)),
        [anon_sym_DOT] = ACTIONS(SHIFT(128)),
        [anon_sym_is] = ACTIONS(SHIFT(129)),
        [sym_identifier] = ACTIONS(SHIFT(130)),
    },
    [382] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(384)),
    },
    [383] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [384] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [385] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(387)),
        [anon_sym_as] = ACTIONS(SHIFT(388)),
    },
    [386] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [387] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [388] = {
        [sym_type] = ACTIONS(SHIFT(389)),
        [sym__type_identifier] = ACTIONS(SHIFT(374)),
        [sym__type_name] = ACTIONS(SHIFT(375)),
        [sym_identifier] = ACTIONS(SHIFT(376)),
    },
    [389] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [390] = {
        [sym__type_annotation] = ACTIONS(SHIFT(391)),
        [anon_sym_in] = ACTIONS(SHIFT(392)),
        [anon_sym_COLON] = ACTIONS(SHIFT(393)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(387)),
        [anon_sym_as] = ACTIONS(SHIFT(388)),
    },
    [391] = {
        [anon_sym_in] = ACTIONS(SHIFT(402)),
    },
    [392] = {
        [sym__expression] = ACTIONS(SHIFT(400)),
        [sym_identifier] = ACTIONS(SHIFT(339)),
    },
    [393] = {
        [sym_type] = ACTIONS(SHIFT(394)),
        [sym__type_identifier] = ACTIONS(SHIFT(395)),
        [sym__type_name] = ACTIONS(SHIFT(396)),
        [sym_identifier] = ACTIONS(SHIFT(397)),
    },
    [394] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [395] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [396] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(398)),
    },
    [397] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [398] = {
        [sym__type_identifier] = ACTIONS(SHIFT(399)),
        [sym__type_name] = ACTIONS(SHIFT(396)),
        [sym_identifier] = ACTIONS(SHIFT(397)),
    },
    [399] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [400] = {
        [sym__code_block] = ACTIONS(SHIFT(401)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(163)),
    },
    [401] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
    },
    [402] = {
        [sym__expression] = ACTIONS(SHIFT(403)),
        [sym_identifier] = ACTIONS(SHIFT(339)),
    },
    [403] = {
        [sym__code_block] = ACTIONS(SHIFT(404)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(163)),
    },
    [404] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
    },
    [405] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(425)),
    },
    [406] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(423)),
    },
    [407] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(418)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1), SHIFT(419)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [408] = {
        [sym__expression] = ACTIONS(SHIFT(411)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(412)),
        [sym_identifier] = ACTIONS(SHIFT(413)),
    },
    [409] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(139)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(122)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(122)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(122)),
        [sym_optional_pattern] = ACTIONS(SHIFT(122)),
        [sym_is_pattern] = ACTIONS(SHIFT(122)),
        [sym_as_pattern] = ACTIONS(SHIFT(122)),
        [sym__expression] = ACTIONS(SHIFT(122)),
        [sym__type_identifier] = ACTIONS(SHIFT(124)),
        [sym__type_name] = ACTIONS(SHIFT(103)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(125)),
        [anon_sym_let] = ACTIONS(SHIFT(127)),
        [anon_sym_var] = ACTIONS(SHIFT(127)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(122)),
        [anon_sym_DOT] = ACTIONS(SHIFT(128)),
        [anon_sym_is] = ACTIONS(SHIFT(129)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(130)),
    },
    [410] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [411] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(416)),
    },
    [412] = {
        [sym__expression] = ACTIONS(SHIFT(414)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(415)),
    },
    [413] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [414] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [415] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [416] = {
        [sym__expression] = ACTIONS(SHIFT(417)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(415)),
    },
    [417] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [418] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 2)),
    },
    [419] = {
        [sym__expression] = ACTIONS(SHIFT(420)),
        [sym_identifier] = ACTIONS(SHIFT(421)),
    },
    [420] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(422)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(419)),
    },
    [421] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [422] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 3)),
    },
    [423] = {
        [sym__code_block] = ACTIONS(SHIFT(424)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(163)),
    },
    [424] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_statement, 5)),
    },
    [425] = {
        [sym__expression] = ACTIONS(SHIFT(426)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(416)),
        [sym_identifier] = ACTIONS(SHIFT(413)),
    },
    [426] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(427)),
    },
    [427] = {
        [sym__expression] = ACTIONS(SHIFT(428)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(415)),
    },
    [428] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [429] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(432)),
    },
    [430] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym__expression] = ACTIONS(SHIFT(431)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(339)),
    },
    [431] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [432] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym__expression] = ACTIONS(SHIFT(433)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(339)),
    },
    [433] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [434] = {
        [sym_identifier] = ACTIONS(SHIFT(435)),
    },
    [435] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(436)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(381)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [436] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [437] = {
        [anon_sym_in] = ACTIONS(SHIFT(392)),
    },
    [438] = {
        [sym__expression] = ACTIONS(SHIFT(439)),
        [sym_identifier] = ACTIONS(SHIFT(339)),
    },
    [439] = {
        [sym__code_block] = ACTIONS(SHIFT(440)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(163)),
    },
    [440] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
    },
    [441] = {
        [sym__type_annotation] = ACTIONS(SHIFT(443)),
        [anon_sym_COLON] = ACTIONS(SHIFT(444)),
    },
    [442] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__variable_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__variable_name, 1)),
    },
    [443] = {
        [sym__code_block] = ACTIONS(SHIFT(451)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(452)),
    },
    [444] = {
        [sym_type] = ACTIONS(SHIFT(445)),
        [sym__type_identifier] = ACTIONS(SHIFT(446)),
        [sym__type_name] = ACTIONS(SHIFT(447)),
        [sym_identifier] = ACTIONS(SHIFT(448)),
    },
    [445] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [446] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [447] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(449)),
    },
    [448] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [449] = {
        [sym__type_identifier] = ACTIONS(SHIFT(450)),
        [sym__type_name] = ACTIONS(SHIFT(447)),
        [sym_identifier] = ACTIONS(SHIFT(448)),
    },
    [450] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [451] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_variable_declaration, 4)),
    },
    [452] = {
        [sym__statement] = ACTIONS(SHIFT(89)),
        [sym__loop_statement] = ACTIONS(SHIFT(90)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(90)),
        [sym_guard_statement] = ACTIONS(SHIFT(90)),
        [sym_switch_statement] = ACTIONS(SHIFT(90)),
        [sym_labeled_statement] = ACTIONS(SHIFT(90)),
        [sym_break_statement] = ACTIONS(SHIFT(90)),
        [sym_continue_statement] = ACTIONS(SHIFT(90)),
        [sym_return_statement] = ACTIONS(SHIFT(90)),
        [sym_throw_statement] = ACTIONS(SHIFT(90)),
        [sym_defer_statement] = ACTIONS(SHIFT(90)),
        [sym_do_statement] = ACTIONS(SHIFT(90)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(90)),
        [sym_line_control_statement] = ACTIONS(SHIFT(90)),
        [sym__expression] = ACTIONS(SHIFT(90)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(453)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(454)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(90)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(19)),
        [sym__declaration] = ACTIONS(SHIFT(90)),
        [sym_identifier] = ACTIONS(SHIFT(20)),
    },
    [453] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(455)),
    },
    [454] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [455] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [456] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_statement, 3)),
    },
    [457] = {
        [sym__expression] = ACTIONS(SHIFT(458)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(432)),
        [sym_identifier] = ACTIONS(SHIFT(413)),
    },
    [458] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(459)),
    },
    [459] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym__expression] = ACTIONS(SHIFT(460)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(339)),
    },
    [460] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [461] = {
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
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 2)),
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
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [462] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_swift);
