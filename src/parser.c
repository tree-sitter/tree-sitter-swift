#include "tree_sitter/parser.h"

#define STATE_COUNT 356
#define SYMBOL_COUNT 92

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
    aux_sym__expression_list_repeat1,
    anon_sym_SEMI,
    aux_sym_SLASH_BSLASHn_PLUS_SLASH,
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
    aux_sym_SLASHreturn_BSLASHn_PLUS_SLASH,
    sym__declaration,
    sym_wildcard_pattern,
    anon_sym_DOT,
    anon_sym_QMARK,
    anon_sym_is,
    anon_sym_as,
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
    [aux_sym__expression_list_repeat1] = "_expression_list_repeat1",
    [ts_builtin_sym_error] = "ERROR",
    [ts_builtin_sym_end] = "END",
    [anon_sym_SEMI] = ";",
    [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = "/\n+/",
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
    [aux_sym_SLASHreturn_BSLASHn_PLUS_SLASH] = "/return\n+/",
    [sym__declaration] = "_declaration",
    [sym_wildcard_pattern] = "wildcard_pattern",
    [anon_sym_DOT] = ".",
    [anon_sym_QMARK] = "?",
    [anon_sym_is] = "is",
    [anon_sym_as] = "as",
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
    [aux_sym__expression_list_repeat1] = TSNodeTypeHidden,
    [ts_builtin_sym_error] = TSNodeTypeNamed,
    [ts_builtin_sym_end] = TSNodeTypeHidden,
    [anon_sym_SEMI] = TSNodeTypeAnonymous,
    [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = TSNodeTypeHidden,
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
    [aux_sym_SLASHreturn_BSLASHn_PLUS_SLASH] = TSNodeTypeHidden,
    [sym__declaration] = TSNodeTypeHidden,
    [sym_wildcard_pattern] = TSNodeTypeNamed,
    [anon_sym_DOT] = TSNodeTypeAnonymous,
    [anon_sym_QMARK] = TSNodeTypeAnonymous,
    [anon_sym_is] = TSNodeTypeAnonymous,
    [anon_sym_as] = TSNodeTypeAnonymous,
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
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'b')
                ADVANCE(7);
            if (lookahead == 'c')
                ADVANCE(12);
            if (lookahead == 'f')
                ADVANCE(20);
            if (lookahead == 'g')
                ADVANCE(33);
            if (lookahead == 'i')
                ADVANCE(38);
            if (lookahead == 'r')
                ADVANCE(45);
            if (lookahead == 's')
                ADVANCE(56);
            if (lookahead == 'w')
                ADVANCE(62);
            LEX_ERROR();
        case 2:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 3:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(sym_identifier);
        case 4:
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            LEX_ERROR();
        case 5:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(5);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == '`')
                ADVANCE(6);
            LEX_ERROR();
        case 6:
            ACCEPT_TOKEN(sym_identifier);
        case 7:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'r')
                ADVANCE(8);
            ACCEPT_TOKEN(sym_identifier);
        case 8:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(9);
            ACCEPT_TOKEN(sym_identifier);
        case 9:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 10:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'j') ||
                ('l' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'k')
                ADVANCE(11);
            ACCEPT_TOKEN(sym_identifier);
        case 11:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_break);
        case 12:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(13);
            ACCEPT_TOKEN(sym_identifier);
        case 13:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(14);
            ACCEPT_TOKEN(sym_identifier);
        case 14:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(15);
            ACCEPT_TOKEN(sym_identifier);
        case 15:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(16);
            ACCEPT_TOKEN(sym_identifier);
        case 16:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(17);
            ACCEPT_TOKEN(sym_identifier);
        case 17:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'u')
                ADVANCE(18);
            ACCEPT_TOKEN(sym_identifier);
        case 18:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(19);
            ACCEPT_TOKEN(sym_identifier);
        case 19:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_continue);
        case 20:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(21);
            if (lookahead == 'o')
                ADVANCE(31);
            ACCEPT_TOKEN(sym_identifier);
        case 21:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(22);
            ACCEPT_TOKEN(sym_identifier);
        case 22:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(23);
            ACCEPT_TOKEN(sym_identifier);
        case 23:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(24);
            ACCEPT_TOKEN(sym_identifier);
        case 24:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(25);
            ACCEPT_TOKEN(sym_identifier);
        case 25:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'r')
                ADVANCE(26);
            ACCEPT_TOKEN(sym_identifier);
        case 26:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(27);
            ACCEPT_TOKEN(sym_identifier);
        case 27:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'u')
                ADVANCE(28);
            ACCEPT_TOKEN(sym_identifier);
        case 28:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'g')
                ADVANCE(29);
            ACCEPT_TOKEN(sym_identifier);
        case 29:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(30);
            ACCEPT_TOKEN(sym_identifier);
        case 30:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(sym_fallthrough_statement);
        case 31:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'r')
                ADVANCE(32);
            ACCEPT_TOKEN(sym_identifier);
        case 32:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_for);
        case 33:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'u')
                ADVANCE(34);
            ACCEPT_TOKEN(sym_identifier);
        case 34:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(35);
            ACCEPT_TOKEN(sym_identifier);
        case 35:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'r')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier);
        case 36:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'd')
                ADVANCE(37);
            ACCEPT_TOKEN(sym_identifier);
        case 37:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_guard);
        case 38:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'f')
                ADVANCE(39);
            if (lookahead == 'm')
                ADVANCE(40);
            ACCEPT_TOKEN(sym_identifier);
        case 39:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_if);
        case 40:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(41);
            ACCEPT_TOKEN(sym_identifier);
        case 41:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(42);
            ACCEPT_TOKEN(sym_identifier);
        case 42:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'r')
                ADVANCE(43);
            ACCEPT_TOKEN(sym_identifier);
        case 43:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(44);
            ACCEPT_TOKEN(sym_identifier);
        case 44:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(sym__declaration);
        case 45:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(46);
            ACCEPT_TOKEN(sym_identifier);
        case 46:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(47);
            if (lookahead == 't')
                ADVANCE(51);
            ACCEPT_TOKEN(sym_identifier);
        case 47:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(48);
            ACCEPT_TOKEN(sym_identifier);
        case 48:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(49);
            ACCEPT_TOKEN(sym_identifier);
        case 49:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(50);
            ACCEPT_TOKEN(sym_identifier);
        case 50:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_repeat);
        case 51:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'u')
                ADVANCE(52);
            ACCEPT_TOKEN(sym_identifier);
        case 52:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'r')
                ADVANCE(53);
            ACCEPT_TOKEN(sym_identifier);
        case 53:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(54);
            ACCEPT_TOKEN(sym_identifier);
        case 54:
            if (lookahead == '\n')
                ADVANCE(55);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_return);
        case 55:
            if (lookahead == '\n')
                ADVANCE(55);
            ACCEPT_TOKEN(aux_sym_SLASHreturn_BSLASHn_PLUS_SLASH);
        case 56:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'w')
                ADVANCE(57);
            ACCEPT_TOKEN(sym_identifier);
        case 57:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(58);
            ACCEPT_TOKEN(sym_identifier);
        case 58:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(59);
            ACCEPT_TOKEN(sym_identifier);
        case 59:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(60);
            ACCEPT_TOKEN(sym_identifier);
        case 60:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(61);
            ACCEPT_TOKEN(sym_identifier);
        case 61:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_switch);
        case 62:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier);
        case 63:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(64);
            ACCEPT_TOKEN(sym_identifier);
        case 64:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(65);
            ACCEPT_TOKEN(sym_identifier);
        case 65:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(66);
            ACCEPT_TOKEN(sym_identifier);
        case 66:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_while);
        case 67:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(67);
            LEX_ERROR();
        case 68:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(68);
            if (lookahead == '\n')
                ADVANCE(69);
            if (lookahead == ';')
                ADVANCE(70);
            LEX_ERROR();
        case 69:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(68);
            if (lookahead == '\n')
                ADVANCE(69);
            if (lookahead == ';')
                ADVANCE(70);
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_PLUS_SLASH);
        case 70:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 71:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(71);
            if (lookahead == '(')
                ADVANCE(72);
            if (lookahead == '.')
                ADVANCE(73);
            if (lookahead == ';')
                ADVANCE(70);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(74);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'c')
                ADVANCE(75);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'l')
                ADVANCE(81);
            if (lookahead == 'v')
                ADVANCE(84);
            LEX_ERROR();
        case 72:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 73:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 74:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(sym_wildcard_pattern);
        case 75:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(76);
            ACCEPT_TOKEN(sym_identifier);
        case 76:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(77);
            ACCEPT_TOKEN(sym_identifier);
        case 77:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(78);
            ACCEPT_TOKEN(sym_identifier);
        case 78:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_case);
        case 79:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier);
        case 80:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_is);
        case 81:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(82);
            ACCEPT_TOKEN(sym_identifier);
        case 82:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(83);
            ACCEPT_TOKEN(sym_identifier);
        case 83:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_let);
        case 84:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(85);
            ACCEPT_TOKEN(sym_identifier);
        case 85:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'r')
                ADVANCE(86);
            ACCEPT_TOKEN(sym_identifier);
        case 86:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_var);
        case 87:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(87);
            if (lookahead == '#')
                ADVANCE(88);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'c')
                ADVANCE(75);
            if (lookahead == 'l')
                ADVANCE(81);
            if (lookahead == 'v')
                ADVANCE(84);
            LEX_ERROR();
        case 88:
            if (lookahead == 'a')
                ADVANCE(89);
            LEX_ERROR();
        case 89:
            if (lookahead == 'v')
                ADVANCE(90);
            LEX_ERROR();
        case 90:
            if (lookahead == 'a')
                ADVANCE(91);
            LEX_ERROR();
        case 91:
            if (lookahead == 'i')
                ADVANCE(92);
            LEX_ERROR();
        case 92:
            if (lookahead == 'l')
                ADVANCE(93);
            LEX_ERROR();
        case 93:
            if (lookahead == 'a')
                ADVANCE(94);
            LEX_ERROR();
        case 94:
            if (lookahead == 'b')
                ADVANCE(95);
            LEX_ERROR();
        case 95:
            if (lookahead == 'l')
                ADVANCE(96);
            LEX_ERROR();
        case 96:
            if (lookahead == 'e')
                ADVANCE(97);
            LEX_ERROR();
        case 97:
            ACCEPT_TOKEN(anon_sym_POUNDavailable);
        case 98:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(98);
            if (lookahead == '{')
                ADVANCE(99);
            LEX_ERROR();
        case 99:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 100:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(100);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 101:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(101);
            if (lookahead == '\n')
                ADVANCE(102);
            if (lookahead == ';')
                ADVANCE(70);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 102:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(101);
            if (lookahead == '\n')
                ADVANCE(102);
            if (lookahead == ';')
                ADVANCE(70);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_PLUS_SLASH);
        case 103:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(103);
            if (lookahead == '\n')
                ADVANCE(104);
            if (lookahead == ':')
                ADVANCE(105);
            if (lookahead == ';')
                ADVANCE(70);
            LEX_ERROR();
        case 104:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(103);
            if (lookahead == '\n')
                ADVANCE(104);
            if (lookahead == ':')
                ADVANCE(105);
            if (lookahead == ';')
                ADVANCE(70);
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_PLUS_SLASH);
        case 105:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 106:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(106);
            if (lookahead == 'f')
                ADVANCE(107);
            if (lookahead == 'i')
                ADVANCE(110);
            if (lookahead == 'r')
                ADVANCE(112);
            if (lookahead == 'w')
                ADVANCE(118);
            LEX_ERROR();
        case 107:
            if (lookahead == 'o')
                ADVANCE(108);
            LEX_ERROR();
        case 108:
            if (lookahead == 'r')
                ADVANCE(109);
            LEX_ERROR();
        case 109:
            ACCEPT_TOKEN(anon_sym_for);
        case 110:
            if (lookahead == 'f')
                ADVANCE(111);
            LEX_ERROR();
        case 111:
            ACCEPT_TOKEN(anon_sym_if);
        case 112:
            if (lookahead == 'e')
                ADVANCE(113);
            LEX_ERROR();
        case 113:
            if (lookahead == 'p')
                ADVANCE(114);
            LEX_ERROR();
        case 114:
            if (lookahead == 'e')
                ADVANCE(115);
            LEX_ERROR();
        case 115:
            if (lookahead == 'a')
                ADVANCE(116);
            LEX_ERROR();
        case 116:
            if (lookahead == 't')
                ADVANCE(117);
            LEX_ERROR();
        case 117:
            ACCEPT_TOKEN(anon_sym_repeat);
        case 118:
            if (lookahead == 'h')
                ADVANCE(119);
            LEX_ERROR();
        case 119:
            if (lookahead == 'i')
                ADVANCE(120);
            LEX_ERROR();
        case 120:
            if (lookahead == 'l')
                ADVANCE(121);
            LEX_ERROR();
        case 121:
            if (lookahead == 'e')
                ADVANCE(122);
            LEX_ERROR();
        case 122:
            ACCEPT_TOKEN(anon_sym_while);
        case 123:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(123);
            if (lookahead == 'c')
                ADVANCE(124);
            if (lookahead == 'd')
                ADVANCE(128);
            if (lookahead == '}')
                ADVANCE(135);
            LEX_ERROR();
        case 124:
            if (lookahead == 'a')
                ADVANCE(125);
            LEX_ERROR();
        case 125:
            if (lookahead == 's')
                ADVANCE(126);
            LEX_ERROR();
        case 126:
            if (lookahead == 'e')
                ADVANCE(127);
            LEX_ERROR();
        case 127:
            ACCEPT_TOKEN(anon_sym_case);
        case 128:
            if (lookahead == 'e')
                ADVANCE(129);
            LEX_ERROR();
        case 129:
            if (lookahead == 'f')
                ADVANCE(130);
            LEX_ERROR();
        case 130:
            if (lookahead == 'a')
                ADVANCE(131);
            LEX_ERROR();
        case 131:
            if (lookahead == 'u')
                ADVANCE(132);
            LEX_ERROR();
        case 132:
            if (lookahead == 'l')
                ADVANCE(133);
            LEX_ERROR();
        case 133:
            if (lookahead == 't')
                ADVANCE(134);
            LEX_ERROR();
        case 134:
            ACCEPT_TOKEN(anon_sym_default);
        case 135:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 136:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(136);
            if (lookahead == '}')
                ADVANCE(135);
            LEX_ERROR();
        case 137:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(137);
            if (lookahead == '(')
                ADVANCE(72);
            if (lookahead == '.')
                ADVANCE(73);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(74);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'l')
                ADVANCE(81);
            if (lookahead == 'v')
                ADVANCE(84);
            LEX_ERROR();
        case 138:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(138);
            if (lookahead == ':')
                ADVANCE(105);
            LEX_ERROR();
        case 139:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(139);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'b')
                ADVANCE(7);
            if (lookahead == 'c')
                ADVANCE(140);
            if (lookahead == 'd')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(20);
            if (lookahead == 'g')
                ADVANCE(33);
            if (lookahead == 'i')
                ADVANCE(38);
            if (lookahead == 'r')
                ADVANCE(45);
            if (lookahead == 's')
                ADVANCE(56);
            if (lookahead == 'w')
                ADVANCE(62);
            if (lookahead == '}')
                ADVANCE(135);
            LEX_ERROR();
        case 140:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(76);
            if (lookahead == 'o')
                ADVANCE(13);
            ACCEPT_TOKEN(sym_identifier);
        case 141:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(142);
            ACCEPT_TOKEN(sym_identifier);
        case 142:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'f')
                ADVANCE(143);
            ACCEPT_TOKEN(sym_identifier);
        case 143:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(144);
            ACCEPT_TOKEN(sym_identifier);
        case 144:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'u')
                ADVANCE(145);
            ACCEPT_TOKEN(sym_identifier);
        case 145:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(146);
            ACCEPT_TOKEN(sym_identifier);
        case 146:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(147);
            ACCEPT_TOKEN(sym_identifier);
        case 147:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_default);
        case 148:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(148);
            if (lookahead == ',')
                ADVANCE(149);
            if (lookahead == ':')
                ADVANCE(105);
            if (lookahead == '?')
                ADVANCE(150);
            if (lookahead == 'a')
                ADVANCE(151);
            LEX_ERROR();
        case 149:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 150:
            ACCEPT_TOKEN(anon_sym_QMARK);
        case 151:
            if (lookahead == 's')
                ADVANCE(152);
            LEX_ERROR();
        case 152:
            ACCEPT_TOKEN(anon_sym_as);
        case 153:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(153);
            if (lookahead == '.')
                ADVANCE(73);
            LEX_ERROR();
        case 154:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(154);
            if (lookahead == '(')
                ADVANCE(72);
            if (lookahead == ')')
                ADVANCE(155);
            if (lookahead == '.')
                ADVANCE(73);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(74);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'l')
                ADVANCE(81);
            if (lookahead == 'v')
                ADVANCE(84);
            LEX_ERROR();
        case 155:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 156:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(156);
            if (lookahead == ',')
                ADVANCE(149);
            if (lookahead == '.')
                ADVANCE(73);
            if (lookahead == ':')
                ADVANCE(105);
            if (lookahead == '?')
                ADVANCE(150);
            if (lookahead == 'a')
                ADVANCE(151);
            LEX_ERROR();
        case 157:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(157);
            if (lookahead == '(')
                ADVANCE(72);
            if (lookahead == ',')
                ADVANCE(149);
            if (lookahead == ':')
                ADVANCE(105);
            if (lookahead == '?')
                ADVANCE(150);
            if (lookahead == 'a')
                ADVANCE(151);
            LEX_ERROR();
        case 158:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(158);
            if (lookahead == ')')
                ADVANCE(155);
            if (lookahead == ',')
                ADVANCE(149);
            if (lookahead == '?')
                ADVANCE(150);
            if (lookahead == 'a')
                ADVANCE(151);
            LEX_ERROR();
        case 159:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(159);
            if (lookahead == ')')
                ADVANCE(155);
            LEX_ERROR();
        case 160:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(160);
            if (lookahead == ')')
                ADVANCE(155);
            if (lookahead == ',')
                ADVANCE(149);
            if (lookahead == '.')
                ADVANCE(73);
            if (lookahead == '?')
                ADVANCE(150);
            if (lookahead == 'a')
                ADVANCE(151);
            LEX_ERROR();
        case 161:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(161);
            if (lookahead == '(')
                ADVANCE(72);
            if (lookahead == ')')
                ADVANCE(155);
            if (lookahead == ',')
                ADVANCE(149);
            if (lookahead == '?')
                ADVANCE(150);
            if (lookahead == 'a')
                ADVANCE(151);
            LEX_ERROR();
        case 162:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(162);
            if (lookahead == 'e')
                ADVANCE(163);
            LEX_ERROR();
        case 163:
            if (lookahead == 'l')
                ADVANCE(164);
            LEX_ERROR();
        case 164:
            if (lookahead == 's')
                ADVANCE(165);
            LEX_ERROR();
        case 165:
            if (lookahead == 'e')
                ADVANCE(166);
            LEX_ERROR();
        case 166:
            ACCEPT_TOKEN(anon_sym_else);
        case 167:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(167);
            if (lookahead == ',')
                ADVANCE(149);
            if (lookahead == 'e')
                ADVANCE(163);
            LEX_ERROR();
        case 168:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(168);
            if (lookahead == '(')
                ADVANCE(72);
            LEX_ERROR();
        case 169:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(169);
            if (lookahead == '=')
                ADVANCE(170);
            if (lookahead == '?')
                ADVANCE(150);
            if (lookahead == 'a')
                ADVANCE(151);
            LEX_ERROR();
        case 170:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 171:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(171);
            if (lookahead == '.')
                ADVANCE(73);
            if (lookahead == '=')
                ADVANCE(170);
            if (lookahead == '?')
                ADVANCE(150);
            if (lookahead == 'a')
                ADVANCE(151);
            LEX_ERROR();
        case 172:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(172);
            if (lookahead == '(')
                ADVANCE(72);
            if (lookahead == '=')
                ADVANCE(170);
            if (lookahead == '?')
                ADVANCE(150);
            if (lookahead == 'a')
                ADVANCE(151);
            LEX_ERROR();
        case 173:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(173);
            if (lookahead == '*')
                ADVANCE(174);
            if (lookahead == 'O')
                ADVANCE(175);
            if (lookahead == 'i')
                ADVANCE(198);
            if (lookahead == 't')
                ADVANCE(221);
            if (lookahead == 'w')
                ADVANCE(225);
            LEX_ERROR();
        case 174:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 175:
            if (lookahead == 'S')
                ADVANCE(176);
            LEX_ERROR();
        case 176:
            if (lookahead == 'X')
                ADVANCE(177);
            LEX_ERROR();
        case 177:
            if (lookahead == 'A')
                ADVANCE(178);
            ACCEPT_TOKEN(anon_sym_OSX);
        case 178:
            if (lookahead == 'p')
                ADVANCE(179);
            LEX_ERROR();
        case 179:
            if (lookahead == 'p')
                ADVANCE(180);
            LEX_ERROR();
        case 180:
            if (lookahead == 'l')
                ADVANCE(181);
            LEX_ERROR();
        case 181:
            if (lookahead == 'i')
                ADVANCE(182);
            LEX_ERROR();
        case 182:
            if (lookahead == 'c')
                ADVANCE(183);
            LEX_ERROR();
        case 183:
            if (lookahead == 'a')
                ADVANCE(184);
            LEX_ERROR();
        case 184:
            if (lookahead == 't')
                ADVANCE(185);
            LEX_ERROR();
        case 185:
            if (lookahead == 'i')
                ADVANCE(186);
            LEX_ERROR();
        case 186:
            if (lookahead == 'o')
                ADVANCE(187);
            LEX_ERROR();
        case 187:
            if (lookahead == 'n')
                ADVANCE(188);
            LEX_ERROR();
        case 188:
            if (lookahead == 'E')
                ADVANCE(189);
            LEX_ERROR();
        case 189:
            if (lookahead == 'x')
                ADVANCE(190);
            LEX_ERROR();
        case 190:
            if (lookahead == 't')
                ADVANCE(191);
            LEX_ERROR();
        case 191:
            if (lookahead == 'e')
                ADVANCE(192);
            LEX_ERROR();
        case 192:
            if (lookahead == 'n')
                ADVANCE(193);
            LEX_ERROR();
        case 193:
            if (lookahead == 's')
                ADVANCE(194);
            LEX_ERROR();
        case 194:
            if (lookahead == 'i')
                ADVANCE(195);
            LEX_ERROR();
        case 195:
            if (lookahead == 'o')
                ADVANCE(196);
            LEX_ERROR();
        case 196:
            if (lookahead == 'n')
                ADVANCE(197);
            LEX_ERROR();
        case 197:
            ACCEPT_TOKEN(anon_sym_OSXApplicationExtension);
        case 198:
            if (lookahead == 'O')
                ADVANCE(199);
            LEX_ERROR();
        case 199:
            if (lookahead == 'S')
                ADVANCE(200);
            LEX_ERROR();
        case 200:
            if (lookahead == 'A')
                ADVANCE(201);
            ACCEPT_TOKEN(anon_sym_iOS);
        case 201:
            if (lookahead == 'p')
                ADVANCE(202);
            LEX_ERROR();
        case 202:
            if (lookahead == 'p')
                ADVANCE(203);
            LEX_ERROR();
        case 203:
            if (lookahead == 'l')
                ADVANCE(204);
            LEX_ERROR();
        case 204:
            if (lookahead == 'i')
                ADVANCE(205);
            LEX_ERROR();
        case 205:
            if (lookahead == 'c')
                ADVANCE(206);
            LEX_ERROR();
        case 206:
            if (lookahead == 'a')
                ADVANCE(207);
            LEX_ERROR();
        case 207:
            if (lookahead == 't')
                ADVANCE(208);
            LEX_ERROR();
        case 208:
            if (lookahead == 'i')
                ADVANCE(209);
            LEX_ERROR();
        case 209:
            if (lookahead == 'o')
                ADVANCE(210);
            LEX_ERROR();
        case 210:
            if (lookahead == 'n')
                ADVANCE(211);
            LEX_ERROR();
        case 211:
            if (lookahead == 'E')
                ADVANCE(212);
            LEX_ERROR();
        case 212:
            if (lookahead == 'x')
                ADVANCE(213);
            LEX_ERROR();
        case 213:
            if (lookahead == 't')
                ADVANCE(214);
            LEX_ERROR();
        case 214:
            if (lookahead == 'e')
                ADVANCE(215);
            LEX_ERROR();
        case 215:
            if (lookahead == 'n')
                ADVANCE(216);
            LEX_ERROR();
        case 216:
            if (lookahead == 's')
                ADVANCE(217);
            LEX_ERROR();
        case 217:
            if (lookahead == 'i')
                ADVANCE(218);
            LEX_ERROR();
        case 218:
            if (lookahead == 'o')
                ADVANCE(219);
            LEX_ERROR();
        case 219:
            if (lookahead == 'n')
                ADVANCE(220);
            LEX_ERROR();
        case 220:
            ACCEPT_TOKEN(anon_sym_iOSApplicationExtension);
        case 221:
            if (lookahead == 'v')
                ADVANCE(222);
            LEX_ERROR();
        case 222:
            if (lookahead == 'O')
                ADVANCE(223);
            LEX_ERROR();
        case 223:
            if (lookahead == 'S')
                ADVANCE(224);
            LEX_ERROR();
        case 224:
            ACCEPT_TOKEN(anon_sym_tvOS);
        case 225:
            if (lookahead == 'a')
                ADVANCE(226);
            LEX_ERROR();
        case 226:
            if (lookahead == 't')
                ADVANCE(227);
            LEX_ERROR();
        case 227:
            if (lookahead == 'c')
                ADVANCE(228);
            LEX_ERROR();
        case 228:
            if (lookahead == 'h')
                ADVANCE(229);
            LEX_ERROR();
        case 229:
            if (lookahead == 'O')
                ADVANCE(230);
            LEX_ERROR();
        case 230:
            if (lookahead == 'S')
                ADVANCE(231);
            LEX_ERROR();
        case 231:
            ACCEPT_TOKEN(anon_sym_watchOS);
        case 232:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(232);
            if (lookahead == ')')
                ADVANCE(155);
            if (lookahead == ',')
                ADVANCE(149);
            LEX_ERROR();
        case 233:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(233);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(234);
            LEX_ERROR();
        case 234:
            if (lookahead == '.')
                ADVANCE(235);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(234);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 235:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(236);
            LEX_ERROR();
        case 236:
            if (lookahead == '.')
                ADVANCE(237);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(236);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 237:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(238);
            LEX_ERROR();
        case 238:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(238);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 239:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(239);
            if (lookahead == '#')
                ADVANCE(88);
            if (lookahead == 'c')
                ADVANCE(124);
            if (lookahead == 'l')
                ADVANCE(240);
            if (lookahead == 'v')
                ADVANCE(243);
            LEX_ERROR();
        case 240:
            if (lookahead == 'e')
                ADVANCE(241);
            LEX_ERROR();
        case 241:
            if (lookahead == 't')
                ADVANCE(242);
            LEX_ERROR();
        case 242:
            ACCEPT_TOKEN(anon_sym_let);
        case 243:
            if (lookahead == 'a')
                ADVANCE(244);
            LEX_ERROR();
        case 244:
            if (lookahead == 'r')
                ADVANCE(245);
            LEX_ERROR();
        case 245:
            ACCEPT_TOKEN(anon_sym_var);
        case 246:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(246);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'b')
                ADVANCE(7);
            if (lookahead == 'c')
                ADVANCE(12);
            if (lookahead == 'f')
                ADVANCE(20);
            if (lookahead == 'g')
                ADVANCE(33);
            if (lookahead == 'i')
                ADVANCE(38);
            if (lookahead == 'r')
                ADVANCE(45);
            if (lookahead == 's')
                ADVANCE(56);
            if (lookahead == 'w')
                ADVANCE(62);
            if (lookahead == '}')
                ADVANCE(135);
            LEX_ERROR();
        case 247:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(247);
            if (lookahead == ',')
                ADVANCE(149);
            if (lookahead == '{')
                ADVANCE(99);
            LEX_ERROR();
        case 248:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(248);
            if (lookahead == '\n')
                ADVANCE(249);
            if (lookahead == ';')
                ADVANCE(70);
            if (lookahead == 'e')
                ADVANCE(163);
            LEX_ERROR();
        case 249:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(248);
            if (lookahead == '\n')
                ADVANCE(249);
            if (lookahead == ';')
                ADVANCE(70);
            if (lookahead == 'e')
                ADVANCE(163);
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_PLUS_SLASH);
        case 250:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(250);
            if (lookahead == 'i')
                ADVANCE(110);
            if (lookahead == '{')
                ADVANCE(99);
            LEX_ERROR();
        case 251:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(251);
            if (lookahead == 'w')
                ADVANCE(118);
            LEX_ERROR();
        case 252:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(252);
            if (lookahead == ';')
                ADVANCE(70);
            LEX_ERROR();
        case 253:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(253);
            if (lookahead == ':')
                ADVANCE(105);
            if (lookahead == '?')
                ADVANCE(150);
            if (lookahead == 'a')
                ADVANCE(151);
            if (lookahead == 'i')
                ADVANCE(254);
            LEX_ERROR();
        case 254:
            if (lookahead == 'n')
                ADVANCE(255);
            LEX_ERROR();
        case 255:
            ACCEPT_TOKEN(anon_sym_in);
        case 256:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(256);
            if (lookahead == ',')
                ADVANCE(149);
            if (lookahead == ':')
                ADVANCE(105);
            if (lookahead == ';')
                ADVANCE(70);
            if (lookahead == '?')
                ADVANCE(150);
            if (lookahead == 'a')
                ADVANCE(151);
            if (lookahead == 'i')
                ADVANCE(254);
            LEX_ERROR();
        case 257:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(257);
            if (lookahead == ';')
                ADVANCE(70);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 258:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(258);
            if (lookahead == '(')
                ADVANCE(72);
            if (lookahead == ')')
                ADVANCE(155);
            if (lookahead == '.')
                ADVANCE(73);
            if (lookahead == ';')
                ADVANCE(70);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(74);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(79);
            if (lookahead == 'l')
                ADVANCE(81);
            if (lookahead == 'v')
                ADVANCE(84);
            LEX_ERROR();
        case 259:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(259);
            if (lookahead == ',')
                ADVANCE(149);
            if (lookahead == '.')
                ADVANCE(73);
            if (lookahead == ':')
                ADVANCE(105);
            if (lookahead == ';')
                ADVANCE(70);
            if (lookahead == '?')
                ADVANCE(150);
            if (lookahead == 'a')
                ADVANCE(151);
            if (lookahead == 'i')
                ADVANCE(254);
            LEX_ERROR();
        case 260:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(260);
            if (lookahead == '.')
                ADVANCE(73);
            if (lookahead == ':')
                ADVANCE(105);
            if (lookahead == '?')
                ADVANCE(150);
            if (lookahead == 'a')
                ADVANCE(151);
            if (lookahead == 'i')
                ADVANCE(254);
            LEX_ERROR();
        case 261:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(261);
            if (lookahead == '(')
                ADVANCE(72);
            if (lookahead == ':')
                ADVANCE(105);
            if (lookahead == '?')
                ADVANCE(150);
            if (lookahead == 'a')
                ADVANCE(151);
            if (lookahead == 'i')
                ADVANCE(254);
            LEX_ERROR();
        case 262:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(262);
            if (lookahead == 'i')
                ADVANCE(254);
            LEX_ERROR();
        case 263:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(263);
            if (lookahead == '.')
                ADVANCE(73);
            if (lookahead == 'i')
                ADVANCE(254);
            LEX_ERROR();
        case 264:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(264);
            if (lookahead == ')')
                ADVANCE(155);
            if (lookahead == ',')
                ADVANCE(149);
            if (lookahead == ';')
                ADVANCE(70);
            if (lookahead == '?')
                ADVANCE(150);
            if (lookahead == 'a')
                ADVANCE(151);
            LEX_ERROR();
        case 265:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(265);
            if (lookahead == ')')
                ADVANCE(155);
            if (lookahead == ',')
                ADVANCE(149);
            if (lookahead == '.')
                ADVANCE(73);
            if (lookahead == ';')
                ADVANCE(70);
            if (lookahead == '?')
                ADVANCE(150);
            if (lookahead == 'a')
                ADVANCE(151);
            LEX_ERROR();
        case 266:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(266);
            if (lookahead == ')')
                ADVANCE(155);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 267:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(267);
            if (lookahead == ',')
                ADVANCE(149);
            if (lookahead == ';')
                ADVANCE(70);
            LEX_ERROR();
        case 268:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(268);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == '{')
                ADVANCE(99);
            LEX_ERROR();
        case 269:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(269);
            if (lookahead == '.')
                ADVANCE(73);
            if (lookahead == '{')
                ADVANCE(99);
            LEX_ERROR();
        case 270:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(270);
            if (lookahead == '\n')
                ADVANCE(271);
            if (lookahead == '#')
                ADVANCE(88);
            if (lookahead == '(')
                ADVANCE(72);
            if (lookahead == ')')
                ADVANCE(155);
            if (lookahead == '*')
                ADVANCE(174);
            if (lookahead == ',')
                ADVANCE(149);
            if (lookahead == '.')
                ADVANCE(73);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(234);
            if (lookahead == ':')
                ADVANCE(105);
            if (lookahead == ';')
                ADVANCE(70);
            if (lookahead == '=')
                ADVANCE(170);
            if (lookahead == '?')
                ADVANCE(150);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(272);
            if (lookahead == '_')
                ADVANCE(74);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(295);
            if (lookahead == 'b')
                ADVANCE(7);
            if (lookahead == 'c')
                ADVANCE(140);
            if (lookahead == 'd')
                ADVANCE(141);
            if (lookahead == 'e')
                ADVANCE(297);
            if (lookahead == 'f')
                ADVANCE(20);
            if (lookahead == 'g')
                ADVANCE(33);
            if (lookahead == 'i')
                ADVANCE(301);
            if (lookahead == 'l')
                ADVANCE(81);
            if (lookahead == 'r')
                ADVANCE(45);
            if (lookahead == 's')
                ADVANCE(56);
            if (lookahead == 't')
                ADVANCE(325);
            if (lookahead == 'v')
                ADVANCE(84);
            if (lookahead == 'w')
                ADVANCE(329);
            if (lookahead == '{')
                ADVANCE(99);
            if (lookahead == '}')
                ADVANCE(135);
            LEX_ERROR();
        case 271:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(270);
            if (lookahead == '\n')
                ADVANCE(271);
            if (lookahead == '#')
                ADVANCE(88);
            if (lookahead == '(')
                ADVANCE(72);
            if (lookahead == ')')
                ADVANCE(155);
            if (lookahead == '*')
                ADVANCE(174);
            if (lookahead == ',')
                ADVANCE(149);
            if (lookahead == '.')
                ADVANCE(73);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(234);
            if (lookahead == ':')
                ADVANCE(105);
            if (lookahead == ';')
                ADVANCE(70);
            if (lookahead == '=')
                ADVANCE(170);
            if (lookahead == '?')
                ADVANCE(150);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(272);
            if (lookahead == '_')
                ADVANCE(74);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(295);
            if (lookahead == 'b')
                ADVANCE(7);
            if (lookahead == 'c')
                ADVANCE(140);
            if (lookahead == 'd')
                ADVANCE(141);
            if (lookahead == 'e')
                ADVANCE(297);
            if (lookahead == 'f')
                ADVANCE(20);
            if (lookahead == 'g')
                ADVANCE(33);
            if (lookahead == 'i')
                ADVANCE(301);
            if (lookahead == 'l')
                ADVANCE(81);
            if (lookahead == 'r')
                ADVANCE(45);
            if (lookahead == 's')
                ADVANCE(56);
            if (lookahead == 't')
                ADVANCE(325);
            if (lookahead == 'v')
                ADVANCE(84);
            if (lookahead == 'w')
                ADVANCE(329);
            if (lookahead == '{')
                ADVANCE(99);
            if (lookahead == '}')
                ADVANCE(135);
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_PLUS_SLASH);
        case 272:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(273);
            ACCEPT_TOKEN(sym_identifier);
        case 273:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'W') ||
                (lookahead == 'Y') ||
                (lookahead == 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'X')
                ADVANCE(274);
            ACCEPT_TOKEN(sym_identifier);
        case 274:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (lookahead == 'A')
                ADVANCE(275);
            if (('B' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_OSX);
        case 275:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(276);
            ACCEPT_TOKEN(sym_identifier);
        case 276:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(277);
            ACCEPT_TOKEN(sym_identifier);
        case 277:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(278);
            ACCEPT_TOKEN(sym_identifier);
        case 278:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(279);
            ACCEPT_TOKEN(sym_identifier);
        case 279:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(280);
            ACCEPT_TOKEN(sym_identifier);
        case 280:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(281);
            ACCEPT_TOKEN(sym_identifier);
        case 281:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(282);
            ACCEPT_TOKEN(sym_identifier);
        case 282:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(283);
            ACCEPT_TOKEN(sym_identifier);
        case 283:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(284);
            ACCEPT_TOKEN(sym_identifier);
        case 284:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(285);
            ACCEPT_TOKEN(sym_identifier);
        case 285:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'D') ||
                ('F' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'E')
                ADVANCE(286);
            ACCEPT_TOKEN(sym_identifier);
        case 286:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(3);
            if (lookahead == 'x')
                ADVANCE(287);
            ACCEPT_TOKEN(sym_identifier);
        case 287:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(288);
            ACCEPT_TOKEN(sym_identifier);
        case 288:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(289);
            ACCEPT_TOKEN(sym_identifier);
        case 289:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(290);
            ACCEPT_TOKEN(sym_identifier);
        case 290:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(291);
            ACCEPT_TOKEN(sym_identifier);
        case 291:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(292);
            ACCEPT_TOKEN(sym_identifier);
        case 292:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(293);
            ACCEPT_TOKEN(sym_identifier);
        case 293:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(294);
            ACCEPT_TOKEN(sym_identifier);
        case 294:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_OSXApplicationExtension);
        case 295:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(296);
            ACCEPT_TOKEN(sym_identifier);
        case 296:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_as);
        case 297:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(298);
            ACCEPT_TOKEN(sym_identifier);
        case 298:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(299);
            ACCEPT_TOKEN(sym_identifier);
        case 299:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(300);
            ACCEPT_TOKEN(sym_identifier);
        case 300:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_else);
        case 301:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(302);
            if (lookahead == 'f')
                ADVANCE(39);
            if (lookahead == 'm')
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(324);
            if (lookahead == 's')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier);
        case 302:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(303);
            ACCEPT_TOKEN(sym_identifier);
        case 303:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (lookahead == 'A')
                ADVANCE(304);
            if (('B' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_iOS);
        case 304:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(305);
            ACCEPT_TOKEN(sym_identifier);
        case 305:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(306);
            ACCEPT_TOKEN(sym_identifier);
        case 306:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(307);
            ACCEPT_TOKEN(sym_identifier);
        case 307:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(308);
            ACCEPT_TOKEN(sym_identifier);
        case 308:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(309);
            ACCEPT_TOKEN(sym_identifier);
        case 309:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(310);
            ACCEPT_TOKEN(sym_identifier);
        case 310:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(311);
            ACCEPT_TOKEN(sym_identifier);
        case 311:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(312);
            ACCEPT_TOKEN(sym_identifier);
        case 312:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(313);
            ACCEPT_TOKEN(sym_identifier);
        case 313:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(314);
            ACCEPT_TOKEN(sym_identifier);
        case 314:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'D') ||
                ('F' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'E')
                ADVANCE(315);
            ACCEPT_TOKEN(sym_identifier);
        case 315:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(3);
            if (lookahead == 'x')
                ADVANCE(316);
            ACCEPT_TOKEN(sym_identifier);
        case 316:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(317);
            ACCEPT_TOKEN(sym_identifier);
        case 317:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(318);
            ACCEPT_TOKEN(sym_identifier);
        case 318:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(319);
            ACCEPT_TOKEN(sym_identifier);
        case 319:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(320);
            ACCEPT_TOKEN(sym_identifier);
        case 320:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(321);
            ACCEPT_TOKEN(sym_identifier);
        case 321:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(322);
            ACCEPT_TOKEN(sym_identifier);
        case 322:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(323);
            ACCEPT_TOKEN(sym_identifier);
        case 323:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_iOSApplicationExtension);
        case 324:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_in);
        case 325:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'v')
                ADVANCE(326);
            ACCEPT_TOKEN(sym_identifier);
        case 326:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(327);
            ACCEPT_TOKEN(sym_identifier);
        case 327:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(328);
            ACCEPT_TOKEN(sym_identifier);
        case 328:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_tvOS);
        case 329:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(330);
            if (lookahead == 'h')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier);
        case 330:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(331);
            ACCEPT_TOKEN(sym_identifier);
        case 331:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(332);
            ACCEPT_TOKEN(sym_identifier);
        case 332:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(333);
            ACCEPT_TOKEN(sym_identifier);
        case 333:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(334);
            ACCEPT_TOKEN(sym_identifier);
        case 334:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(335);
            ACCEPT_TOKEN(sym_identifier);
        case 335:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_watchOS);
        case ts_lex_state_error:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(270);
            if (lookahead == '\n')
                ADVANCE(271);
            if (lookahead == '#')
                ADVANCE(88);
            if (lookahead == '(')
                ADVANCE(72);
            if (lookahead == ')')
                ADVANCE(155);
            if (lookahead == '*')
                ADVANCE(174);
            if (lookahead == ',')
                ADVANCE(149);
            if (lookahead == '.')
                ADVANCE(73);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(234);
            if (lookahead == ':')
                ADVANCE(105);
            if (lookahead == ';')
                ADVANCE(70);
            if (lookahead == '=')
                ADVANCE(170);
            if (lookahead == '?')
                ADVANCE(150);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(272);
            if (lookahead == '_')
                ADVANCE(74);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(295);
            if (lookahead == 'b')
                ADVANCE(7);
            if (lookahead == 'c')
                ADVANCE(140);
            if (lookahead == 'd')
                ADVANCE(141);
            if (lookahead == 'e')
                ADVANCE(297);
            if (lookahead == 'f')
                ADVANCE(20);
            if (lookahead == 'g')
                ADVANCE(33);
            if (lookahead == 'i')
                ADVANCE(301);
            if (lookahead == 'l')
                ADVANCE(81);
            if (lookahead == 'r')
                ADVANCE(45);
            if (lookahead == 's')
                ADVANCE(56);
            if (lookahead == 't')
                ADVANCE(325);
            if (lookahead == 'v')
                ADVANCE(84);
            if (lookahead == 'w')
                ADVANCE(329);
            if (lookahead == '{')
                ADVANCE(99);
            if (lookahead == '}')
                ADVANCE(135);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 1,
    [1] = 67,
    [2] = 1,
    [3] = 68,
    [4] = 68,
    [5] = 67,
    [6] = 71,
    [7] = 87,
    [8] = 98,
    [9] = 87,
    [10] = 87,
    [11] = 100,
    [12] = 101,
    [13] = 101,
    [14] = 100,
    [15] = 68,
    [16] = 103,
    [17] = 106,
    [18] = 68,
    [19] = 68,
    [20] = 68,
    [21] = 68,
    [22] = 68,
    [23] = 98,
    [24] = 98,
    [25] = 123,
    [26] = 123,
    [27] = 136,
    [28] = 137,
    [29] = 68,
    [30] = 138,
    [31] = 139,
    [32] = 139,
    [33] = 68,
    [34] = 123,
    [35] = 139,
    [36] = 123,
    [37] = 148,
    [38] = 148,
    [39] = 153,
    [40] = 153,
    [41] = 154,
    [42] = 137,
    [43] = 100,
    [44] = 100,
    [45] = 156,
    [46] = 148,
    [47] = 148,
    [48] = 156,
    [49] = 156,
    [50] = 100,
    [51] = 148,
    [52] = 157,
    [53] = 148,
    [54] = 148,
    [55] = 148,
    [56] = 100,
    [57] = 148,
    [58] = 158,
    [59] = 158,
    [60] = 159,
    [61] = 153,
    [62] = 154,
    [63] = 148,
    [64] = 137,
    [65] = 100,
    [66] = 100,
    [67] = 160,
    [68] = 158,
    [69] = 158,
    [70] = 160,
    [71] = 160,
    [72] = 100,
    [73] = 158,
    [74] = 161,
    [75] = 158,
    [76] = 158,
    [77] = 158,
    [78] = 100,
    [79] = 158,
    [80] = 159,
    [81] = 158,
    [82] = 158,
    [83] = 100,
    [84] = 161,
    [85] = 158,
    [86] = 148,
    [87] = 159,
    [88] = 137,
    [89] = 158,
    [90] = 159,
    [91] = 100,
    [92] = 153,
    [93] = 153,
    [94] = 100,
    [95] = 157,
    [96] = 148,
    [97] = 138,
    [98] = 137,
    [99] = 139,
    [100] = 123,
    [101] = 148,
    [102] = 138,
    [103] = 139,
    [104] = 123,
    [105] = 68,
    [106] = 136,
    [107] = 162,
    [108] = 167,
    [109] = 167,
    [110] = 167,
    [111] = 167,
    [112] = 137,
    [113] = 168,
    [114] = 137,
    [115] = 167,
    [116] = 167,
    [117] = 169,
    [118] = 169,
    [119] = 153,
    [120] = 154,
    [121] = 137,
    [122] = 100,
    [123] = 100,
    [124] = 171,
    [125] = 169,
    [126] = 169,
    [127] = 171,
    [128] = 171,
    [129] = 100,
    [130] = 169,
    [131] = 172,
    [132] = 169,
    [133] = 169,
    [134] = 169,
    [135] = 100,
    [136] = 169,
    [137] = 159,
    [138] = 169,
    [139] = 169,
    [140] = 100,
    [141] = 172,
    [142] = 169,
    [143] = 100,
    [144] = 167,
    [145] = 167,
    [146] = 137,
    [147] = 167,
    [148] = 169,
    [149] = 100,
    [150] = 167,
    [151] = 167,
    [152] = 167,
    [153] = 173,
    [154] = 232,
    [155] = 233,
    [156] = 232,
    [157] = 159,
    [158] = 167,
    [159] = 173,
    [160] = 232,
    [161] = 233,
    [162] = 232,
    [163] = 159,
    [164] = 159,
    [165] = 167,
    [166] = 159,
    [167] = 167,
    [168] = 169,
    [169] = 100,
    [170] = 167,
    [171] = 239,
    [172] = 167,
    [173] = 162,
    [174] = 239,
    [175] = 167,
    [176] = 162,
    [177] = 100,
    [178] = 162,
    [179] = 162,
    [180] = 162,
    [181] = 98,
    [182] = 68,
    [183] = 246,
    [184] = 246,
    [185] = 68,
    [186] = 136,
    [187] = 68,
    [188] = 68,
    [189] = 246,
    [190] = 136,
    [191] = 98,
    [192] = 247,
    [193] = 247,
    [194] = 247,
    [195] = 247,
    [196] = 137,
    [197] = 168,
    [198] = 137,
    [199] = 247,
    [200] = 247,
    [201] = 169,
    [202] = 100,
    [203] = 247,
    [204] = 247,
    [205] = 137,
    [206] = 247,
    [207] = 169,
    [208] = 100,
    [209] = 247,
    [210] = 247,
    [211] = 247,
    [212] = 173,
    [213] = 232,
    [214] = 233,
    [215] = 232,
    [216] = 159,
    [217] = 247,
    [218] = 247,
    [219] = 159,
    [220] = 247,
    [221] = 169,
    [222] = 100,
    [223] = 247,
    [224] = 239,
    [225] = 247,
    [226] = 98,
    [227] = 239,
    [228] = 247,
    [229] = 98,
    [230] = 100,
    [231] = 98,
    [232] = 98,
    [233] = 98,
    [234] = 248,
    [235] = 246,
    [236] = 136,
    [237] = 248,
    [238] = 248,
    [239] = 250,
    [240] = 68,
    [241] = 251,
    [242] = 246,
    [243] = 136,
    [244] = 251,
    [245] = 251,
    [246] = 100,
    [247] = 68,
    [248] = 98,
    [249] = 68,
    [250] = 252,
    [251] = 98,
    [252] = 252,
    [253] = 100,
    [254] = 253,
    [255] = 253,
    [256] = 256,
    [257] = 153,
    [258] = 257,
    [259] = 258,
    [260] = 137,
    [261] = 137,
    [262] = 137,
    [263] = 100,
    [264] = 100,
    [265] = 259,
    [266] = 253,
    [267] = 253,
    [268] = 260,
    [269] = 260,
    [270] = 100,
    [271] = 253,
    [272] = 261,
    [273] = 253,
    [274] = 154,
    [275] = 159,
    [276] = 253,
    [277] = 253,
    [278] = 253,
    [279] = 260,
    [280] = 253,
    [281] = 100,
    [282] = 253,
    [283] = 253,
    [284] = 262,
    [285] = 100,
    [286] = 100,
    [287] = 262,
    [288] = 262,
    [289] = 263,
    [290] = 263,
    [291] = 100,
    [292] = 262,
    [293] = 98,
    [294] = 68,
    [295] = 100,
    [296] = 98,
    [297] = 68,
    [298] = 252,
    [299] = 159,
    [300] = 264,
    [301] = 257,
    [302] = 137,
    [303] = 265,
    [304] = 252,
    [305] = 266,
    [306] = 252,
    [307] = 159,
    [308] = 159,
    [309] = 266,
    [310] = 159,
    [311] = 252,
    [312] = 100,
    [313] = 267,
    [314] = 267,
    [315] = 252,
    [316] = 98,
    [317] = 68,
    [318] = 257,
    [319] = 252,
    [320] = 266,
    [321] = 159,
    [322] = 252,
    [323] = 268,
    [324] = 98,
    [325] = 268,
    [326] = 98,
    [327] = 100,
    [328] = 261,
    [329] = 253,
    [330] = 262,
    [331] = 100,
    [332] = 98,
    [333] = 68,
    [334] = 138,
    [335] = 138,
    [336] = 98,
    [337] = 100,
    [338] = 98,
    [339] = 98,
    [340] = 269,
    [341] = 269,
    [342] = 100,
    [343] = 98,
    [344] = 252,
    [345] = 246,
    [346] = 136,
    [347] = 252,
    [348] = 252,
    [349] = 68,
    [350] = 257,
    [351] = 252,
    [352] = 268,
    [353] = 98,
    [354] = 1,
    [355] = 67,
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
        [aux_sym_SLASHreturn_BSLASHn_PLUS_SLASH] = ACTIONS(SHIFT(15)),
        [sym__declaration] = ACTIONS(SHIFT(3)),
        [sym_identifier] = ACTIONS(SHIFT(16)),
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
        [sym__expression] = ACTIONS(SHIFT(3)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(355)),
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
        [aux_sym_SLASHreturn_BSLASHn_PLUS_SLASH] = ACTIONS(SHIFT(15)),
        [sym__declaration] = ACTIONS(SHIFT(3)),
        [sym_identifier] = ACTIONS(SHIFT(16)),
    },
    [3] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(354)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(SHIFT(354)),
    },
    [4] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym__loop_statement, 1)),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_program, 1)),
    },
    [6] = {
        [sym__for_init] = ACTIONS(SHIFT(250)),
        [sym__for_condition] = ACTIONS(SHIFT(251)),
        [sym_variable_declaration] = ACTIONS(SHIFT(252)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(253)),
        [sym__pattern] = ACTIONS(SHIFT(254)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(255)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(255)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(255)),
        [sym_optional_pattern] = ACTIONS(SHIFT(255)),
        [sym_is_pattern] = ACTIONS(SHIFT(255)),
        [sym_as_pattern] = ACTIONS(SHIFT(255)),
        [sym__expression] = ACTIONS(SHIFT(256)),
        [sym__expression_list] = ACTIONS(SHIFT(252)),
        [sym__type_identifier] = ACTIONS(SHIFT(257)),
        [sym__type_name] = ACTIONS(SHIFT(40)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(258)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(259)),
        [anon_sym_case] = ACTIONS(SHIFT(260)),
        [anon_sym_let] = ACTIONS(SHIFT(261)),
        [anon_sym_var] = ACTIONS(SHIFT(262)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(255)),
        [anon_sym_DOT] = ACTIONS(SHIFT(263)),
        [anon_sym_is] = ACTIONS(SHIFT(264)),
        [sym_identifier] = ACTIONS(SHIFT(265)),
    },
    [7] = {
        [sym__condition_clause] = ACTIONS(SHIFT(248)),
        [sym__condition] = ACTIONS(SHIFT(192)),
        [sym_availability_condition] = ACTIONS(SHIFT(193)),
        [sym_case_condition] = ACTIONS(SHIFT(194)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(194)),
        [sym__expression] = ACTIONS(SHIFT(195)),
        [anon_sym_case] = ACTIONS(SHIFT(196)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(197)),
        [anon_sym_let] = ACTIONS(SHIFT(198)),
        [anon_sym_var] = ACTIONS(SHIFT(198)),
        [sym_identifier] = ACTIONS(SHIFT(199)),
    },
    [8] = {
        [sym__code_block] = ACTIONS(SHIFT(241)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(242)),
    },
    [9] = {
        [sym__condition_clause] = ACTIONS(SHIFT(191)),
        [sym__condition] = ACTIONS(SHIFT(192)),
        [sym_availability_condition] = ACTIONS(SHIFT(193)),
        [sym_case_condition] = ACTIONS(SHIFT(194)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(194)),
        [sym__expression] = ACTIONS(SHIFT(195)),
        [anon_sym_case] = ACTIONS(SHIFT(196)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(197)),
        [anon_sym_let] = ACTIONS(SHIFT(198)),
        [anon_sym_var] = ACTIONS(SHIFT(198)),
        [sym_identifier] = ACTIONS(SHIFT(199)),
    },
    [10] = {
        [sym__condition_clause] = ACTIONS(SHIFT(107)),
        [sym__condition] = ACTIONS(SHIFT(108)),
        [sym_availability_condition] = ACTIONS(SHIFT(109)),
        [sym_case_condition] = ACTIONS(SHIFT(110)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(110)),
        [sym__expression] = ACTIONS(SHIFT(111)),
        [anon_sym_case] = ACTIONS(SHIFT(112)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(113)),
        [anon_sym_let] = ACTIONS(SHIFT(114)),
        [anon_sym_var] = ACTIONS(SHIFT(114)),
        [sym_identifier] = ACTIONS(SHIFT(115)),
    },
    [11] = {
        [sym__expression] = ACTIONS(SHIFT(23)),
        [sym_identifier] = ACTIONS(SHIFT(24)),
    },
    [12] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(22)),
    },
    [13] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_continue_statement, 1)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_continue_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(21)),
    },
    [14] = {
        [sym__expression] = ACTIONS(SHIFT(19)),
        [sym_identifier] = ACTIONS(SHIFT(20)),
    },
    [15] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_return_statement, 1)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_return_statement, 1)),
    },
    [16] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(SHIFT(17)),
    },
    [17] = {
        [sym__loop_statement] = ACTIONS(SHIFT(18)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(18)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
    },
    [18] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
    },
    [19] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_return_statement, 2)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_return_statement, 2)),
    },
    [20] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [21] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_continue_statement, 2)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_continue_statement, 2)),
    },
    [22] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_break_statement, 2)),
    },
    [23] = {
        [anon_sym_LBRACE] = ACTIONS(SHIFT(25)),
    },
    [24] = {
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [25] = {
        [sym_case_statement] = ACTIONS(SHIFT(26)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(27)),
        [anon_sym_case] = ACTIONS(SHIFT(28)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(29)),
        [anon_sym_default] = ACTIONS(SHIFT(30)),
    },
    [26] = {
        [sym_case_statement] = ACTIONS(SHIFT(26)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(106)),
        [anon_sym_case] = ACTIONS(SHIFT(28)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 1)),
        [anon_sym_default] = ACTIONS(SHIFT(30)),
    },
    [27] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(105)),
    },
    [28] = {
        [sym__pattern] = ACTIONS(SHIFT(37)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(38)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(38)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(38)),
        [sym_optional_pattern] = ACTIONS(SHIFT(38)),
        [sym_is_pattern] = ACTIONS(SHIFT(38)),
        [sym_as_pattern] = ACTIONS(SHIFT(38)),
        [sym__expression] = ACTIONS(SHIFT(38)),
        [sym__type_identifier] = ACTIONS(SHIFT(39)),
        [sym__type_name] = ACTIONS(SHIFT(40)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(41)),
        [anon_sym_let] = ACTIONS(SHIFT(42)),
        [anon_sym_var] = ACTIONS(SHIFT(42)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(38)),
        [anon_sym_DOT] = ACTIONS(SHIFT(43)),
        [anon_sym_is] = ACTIONS(SHIFT(44)),
        [sym_identifier] = ACTIONS(SHIFT(45)),
    },
    [29] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_switch_statement, 4)),
    },
    [30] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(31)),
    },
    [31] = {
        [sym__statement] = ACTIONS(SHIFT(32)),
        [sym__loop_statement] = ACTIONS(SHIFT(33)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(33)),
        [sym_guard_statement] = ACTIONS(SHIFT(33)),
        [sym_switch_statement] = ACTIONS(SHIFT(33)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [sym_labeled_statement] = ACTIONS(SHIFT(33)),
        [sym_break_statement] = ACTIONS(SHIFT(33)),
        [sym_continue_statement] = ACTIONS(SHIFT(33)),
        [sym_return_statement] = ACTIONS(SHIFT(33)),
        [sym__expression] = ACTIONS(SHIFT(33)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(34)),
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
        [sym_fallthrough_statement] = ACTIONS(SHIFT(33)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [aux_sym_SLASHreturn_BSLASHn_PLUS_SLASH] = ACTIONS(SHIFT(15)),
        [sym__declaration] = ACTIONS(SHIFT(33)),
        [sym_identifier] = ACTIONS(SHIFT(16)),
    },
    [32] = {
        [sym__statement] = ACTIONS(SHIFT(32)),
        [sym__loop_statement] = ACTIONS(SHIFT(33)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(33)),
        [sym_guard_statement] = ACTIONS(SHIFT(33)),
        [sym_switch_statement] = ACTIONS(SHIFT(33)),
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [sym_labeled_statement] = ACTIONS(SHIFT(33)),
        [sym_break_statement] = ACTIONS(SHIFT(33)),
        [sym_continue_statement] = ACTIONS(SHIFT(33)),
        [sym_return_statement] = ACTIONS(SHIFT(33)),
        [sym__expression] = ACTIONS(SHIFT(33)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(36)),
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
        [sym_fallthrough_statement] = ACTIONS(SHIFT(33)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [aux_sym_SLASHreturn_BSLASHn_PLUS_SLASH] = ACTIONS(SHIFT(15)),
        [sym__declaration] = ACTIONS(SHIFT(33)),
        [sym_identifier] = ACTIONS(SHIFT(16)),
    },
    [33] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(35)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(SHIFT(35)),
    },
    [34] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 3)),
    },
    [35] = {
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
        [aux_sym_SLASHreturn_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [36] = {
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_case] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [37] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(97)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(98)),
        [anon_sym_COLON] = ACTIONS(SHIFT(99)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(55)),
        [anon_sym_as] = ACTIONS(SHIFT(56)),
    },
    [38] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [39] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(94)),
    },
    [40] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(91)),
    },
    [41] = {
        [sym__pattern] = ACTIONS(SHIFT(58)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(59)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(59)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(60)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(59)),
        [sym_optional_pattern] = ACTIONS(SHIFT(59)),
        [sym_is_pattern] = ACTIONS(SHIFT(59)),
        [sym_as_pattern] = ACTIONS(SHIFT(59)),
        [sym__expression] = ACTIONS(SHIFT(59)),
        [sym__type_identifier] = ACTIONS(SHIFT(61)),
        [sym__type_name] = ACTIONS(SHIFT(40)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(62)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(63)),
        [anon_sym_let] = ACTIONS(SHIFT(64)),
        [anon_sym_var] = ACTIONS(SHIFT(64)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(59)),
        [anon_sym_DOT] = ACTIONS(SHIFT(65)),
        [anon_sym_is] = ACTIONS(SHIFT(66)),
        [sym_identifier] = ACTIONS(SHIFT(67)),
    },
    [42] = {
        [sym__pattern] = ACTIONS(SHIFT(54)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(38)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(38)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(38)),
        [sym_optional_pattern] = ACTIONS(SHIFT(38)),
        [sym_is_pattern] = ACTIONS(SHIFT(38)),
        [sym_as_pattern] = ACTIONS(SHIFT(38)),
        [sym__expression] = ACTIONS(SHIFT(38)),
        [sym__type_identifier] = ACTIONS(SHIFT(39)),
        [sym__type_name] = ACTIONS(SHIFT(40)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(41)),
        [anon_sym_let] = ACTIONS(SHIFT(42)),
        [anon_sym_var] = ACTIONS(SHIFT(42)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(38)),
        [anon_sym_DOT] = ACTIONS(SHIFT(43)),
        [anon_sym_is] = ACTIONS(SHIFT(44)),
        [sym_identifier] = ACTIONS(SHIFT(45)),
    },
    [43] = {
        [sym_identifier] = ACTIONS(SHIFT(52)),
    },
    [44] = {
        [sym_type] = ACTIONS(SHIFT(46)),
        [sym__type_identifier] = ACTIONS(SHIFT(47)),
        [sym__type_name] = ACTIONS(SHIFT(48)),
        [sym_identifier] = ACTIONS(SHIFT(49)),
    },
    [45] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [46] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [47] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [48] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(50)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [49] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [50] = {
        [sym__type_identifier] = ACTIONS(SHIFT(51)),
        [sym__type_name] = ACTIONS(SHIFT(48)),
        [sym_identifier] = ACTIONS(SHIFT(49)),
    },
    [51] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [52] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(53)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(41)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [53] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [54] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(55)),
        [anon_sym_as] = ACTIONS(SHIFT(56)),
    },
    [55] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [56] = {
        [sym_type] = ACTIONS(SHIFT(57)),
        [sym__type_identifier] = ACTIONS(SHIFT(47)),
        [sym__type_name] = ACTIONS(SHIFT(48)),
        [sym_identifier] = ACTIONS(SHIFT(49)),
    },
    [57] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [58] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(87)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(88)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(77)),
        [anon_sym_as] = ACTIONS(SHIFT(78)),
    },
    [59] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [60] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(86)),
    },
    [61] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(83)),
    },
    [62] = {
        [sym__pattern] = ACTIONS(SHIFT(58)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(59)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(59)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(80)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(59)),
        [sym_optional_pattern] = ACTIONS(SHIFT(59)),
        [sym_is_pattern] = ACTIONS(SHIFT(59)),
        [sym_as_pattern] = ACTIONS(SHIFT(59)),
        [sym__expression] = ACTIONS(SHIFT(59)),
        [sym__type_identifier] = ACTIONS(SHIFT(61)),
        [sym__type_name] = ACTIONS(SHIFT(40)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(62)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(81)),
        [anon_sym_let] = ACTIONS(SHIFT(64)),
        [anon_sym_var] = ACTIONS(SHIFT(64)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(59)),
        [anon_sym_DOT] = ACTIONS(SHIFT(65)),
        [anon_sym_is] = ACTIONS(SHIFT(66)),
        [sym_identifier] = ACTIONS(SHIFT(67)),
    },
    [63] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [64] = {
        [sym__pattern] = ACTIONS(SHIFT(76)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(59)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(59)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(59)),
        [sym_optional_pattern] = ACTIONS(SHIFT(59)),
        [sym_is_pattern] = ACTIONS(SHIFT(59)),
        [sym_as_pattern] = ACTIONS(SHIFT(59)),
        [sym__expression] = ACTIONS(SHIFT(59)),
        [sym__type_identifier] = ACTIONS(SHIFT(61)),
        [sym__type_name] = ACTIONS(SHIFT(40)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(62)),
        [anon_sym_let] = ACTIONS(SHIFT(64)),
        [anon_sym_var] = ACTIONS(SHIFT(64)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(59)),
        [anon_sym_DOT] = ACTIONS(SHIFT(65)),
        [anon_sym_is] = ACTIONS(SHIFT(66)),
        [sym_identifier] = ACTIONS(SHIFT(67)),
    },
    [65] = {
        [sym_identifier] = ACTIONS(SHIFT(74)),
    },
    [66] = {
        [sym_type] = ACTIONS(SHIFT(68)),
        [sym__type_identifier] = ACTIONS(SHIFT(69)),
        [sym__type_name] = ACTIONS(SHIFT(70)),
        [sym_identifier] = ACTIONS(SHIFT(71)),
    },
    [67] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [68] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [69] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [70] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(72)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [71] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [72] = {
        [sym__type_identifier] = ACTIONS(SHIFT(73)),
        [sym__type_name] = ACTIONS(SHIFT(70)),
        [sym_identifier] = ACTIONS(SHIFT(71)),
    },
    [73] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [74] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(75)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(62)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [75] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [76] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(77)),
        [anon_sym_as] = ACTIONS(SHIFT(78)),
    },
    [77] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [78] = {
        [sym_type] = ACTIONS(SHIFT(79)),
        [sym__type_identifier] = ACTIONS(SHIFT(69)),
        [sym__type_name] = ACTIONS(SHIFT(70)),
        [sym_identifier] = ACTIONS(SHIFT(71)),
    },
    [79] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [80] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(82)),
    },
    [81] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [82] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [83] = {
        [sym_identifier] = ACTIONS(SHIFT(84)),
    },
    [84] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(85)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(62)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [85] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [86] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [87] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 2)),
    },
    [88] = {
        [sym__pattern] = ACTIONS(SHIFT(89)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(59)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(59)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(59)),
        [sym_optional_pattern] = ACTIONS(SHIFT(59)),
        [sym_is_pattern] = ACTIONS(SHIFT(59)),
        [sym_as_pattern] = ACTIONS(SHIFT(59)),
        [sym__expression] = ACTIONS(SHIFT(59)),
        [sym__type_identifier] = ACTIONS(SHIFT(61)),
        [sym__type_name] = ACTIONS(SHIFT(40)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(62)),
        [anon_sym_let] = ACTIONS(SHIFT(64)),
        [anon_sym_var] = ACTIONS(SHIFT(64)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(59)),
        [anon_sym_DOT] = ACTIONS(SHIFT(65)),
        [anon_sym_is] = ACTIONS(SHIFT(66)),
        [sym_identifier] = ACTIONS(SHIFT(67)),
    },
    [89] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(90)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(88)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(77)),
        [anon_sym_as] = ACTIONS(SHIFT(78)),
    },
    [90] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [91] = {
        [sym__type_identifier] = ACTIONS(SHIFT(92)),
        [sym__type_name] = ACTIONS(SHIFT(40)),
        [sym_identifier] = ACTIONS(SHIFT(93)),
    },
    [92] = {
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [93] = {
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [94] = {
        [sym_identifier] = ACTIONS(SHIFT(95)),
    },
    [95] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(96)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(41)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [96] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [97] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(103)),
    },
    [98] = {
        [sym__pattern] = ACTIONS(SHIFT(101)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(38)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(38)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(38)),
        [sym_optional_pattern] = ACTIONS(SHIFT(38)),
        [sym_is_pattern] = ACTIONS(SHIFT(38)),
        [sym_as_pattern] = ACTIONS(SHIFT(38)),
        [sym__expression] = ACTIONS(SHIFT(38)),
        [sym__type_identifier] = ACTIONS(SHIFT(39)),
        [sym__type_name] = ACTIONS(SHIFT(40)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(41)),
        [anon_sym_let] = ACTIONS(SHIFT(42)),
        [anon_sym_var] = ACTIONS(SHIFT(42)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(38)),
        [anon_sym_DOT] = ACTIONS(SHIFT(43)),
        [anon_sym_is] = ACTIONS(SHIFT(44)),
        [sym_identifier] = ACTIONS(SHIFT(45)),
    },
    [99] = {
        [sym__statement] = ACTIONS(SHIFT(32)),
        [sym__loop_statement] = ACTIONS(SHIFT(33)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(33)),
        [sym_guard_statement] = ACTIONS(SHIFT(33)),
        [sym_switch_statement] = ACTIONS(SHIFT(33)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [sym_labeled_statement] = ACTIONS(SHIFT(33)),
        [sym_break_statement] = ACTIONS(SHIFT(33)),
        [sym_continue_statement] = ACTIONS(SHIFT(33)),
        [sym_return_statement] = ACTIONS(SHIFT(33)),
        [sym__expression] = ACTIONS(SHIFT(33)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(100)),
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
        [sym_fallthrough_statement] = ACTIONS(SHIFT(33)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [aux_sym_SLASHreturn_BSLASHn_PLUS_SLASH] = ACTIONS(SHIFT(15)),
        [sym__declaration] = ACTIONS(SHIFT(33)),
        [sym_identifier] = ACTIONS(SHIFT(16)),
    },
    [100] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 4)),
    },
    [101] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(102)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(98)),
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(55)),
        [anon_sym_as] = ACTIONS(SHIFT(56)),
    },
    [102] = {
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [103] = {
        [sym__statement] = ACTIONS(SHIFT(32)),
        [sym__loop_statement] = ACTIONS(SHIFT(33)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(33)),
        [sym_guard_statement] = ACTIONS(SHIFT(33)),
        [sym_switch_statement] = ACTIONS(SHIFT(33)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [sym_labeled_statement] = ACTIONS(SHIFT(33)),
        [sym_break_statement] = ACTIONS(SHIFT(33)),
        [sym_continue_statement] = ACTIONS(SHIFT(33)),
        [sym_return_statement] = ACTIONS(SHIFT(33)),
        [sym__expression] = ACTIONS(SHIFT(33)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(104)),
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
        [sym_fallthrough_statement] = ACTIONS(SHIFT(33)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [aux_sym_SLASHreturn_BSLASHn_PLUS_SLASH] = ACTIONS(SHIFT(15)),
        [sym__declaration] = ACTIONS(SHIFT(33)),
        [sym_identifier] = ACTIONS(SHIFT(16)),
    },
    [104] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 5)),
    },
    [105] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_switch_statement, 5)),
    },
    [106] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 2)),
    },
    [107] = {
        [anon_sym_else] = ACTIONS(SHIFT(181)),
    },
    [108] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(180)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(174)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [109] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1), SHIFT(177)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [110] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [111] = {
        [anon_sym_COMMA] = ACTIONS(SHIFT(171)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [112] = {
        [sym__pattern] = ACTIONS(SHIFT(168)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(118)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(118)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(118)),
        [sym_optional_pattern] = ACTIONS(SHIFT(118)),
        [sym_is_pattern] = ACTIONS(SHIFT(118)),
        [sym_as_pattern] = ACTIONS(SHIFT(118)),
        [sym__expression] = ACTIONS(SHIFT(118)),
        [sym__type_identifier] = ACTIONS(SHIFT(119)),
        [sym__type_name] = ACTIONS(SHIFT(40)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(120)),
        [anon_sym_let] = ACTIONS(SHIFT(121)),
        [anon_sym_var] = ACTIONS(SHIFT(121)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(118)),
        [anon_sym_DOT] = ACTIONS(SHIFT(122)),
        [anon_sym_is] = ACTIONS(SHIFT(123)),
        [sym_identifier] = ACTIONS(SHIFT(124)),
    },
    [113] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(153)),
    },
    [114] = {
        [sym_optional_binding] = ACTIONS(SHIFT(116)),
        [sym__pattern] = ACTIONS(SHIFT(117)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(118)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(118)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(118)),
        [sym_optional_pattern] = ACTIONS(SHIFT(118)),
        [sym_is_pattern] = ACTIONS(SHIFT(118)),
        [sym_as_pattern] = ACTIONS(SHIFT(118)),
        [sym__expression] = ACTIONS(SHIFT(118)),
        [sym__type_identifier] = ACTIONS(SHIFT(119)),
        [sym__type_name] = ACTIONS(SHIFT(40)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(120)),
        [anon_sym_let] = ACTIONS(SHIFT(121)),
        [anon_sym_var] = ACTIONS(SHIFT(121)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(118)),
        [anon_sym_DOT] = ACTIONS(SHIFT(122)),
        [anon_sym_is] = ACTIONS(SHIFT(123)),
        [sym_identifier] = ACTIONS(SHIFT(124)),
    },
    [115] = {
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [116] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(146)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
    },
    [117] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(143)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(134)),
        [anon_sym_as] = ACTIONS(SHIFT(135)),
    },
    [118] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [119] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(140)),
    },
    [120] = {
        [sym__pattern] = ACTIONS(SHIFT(58)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(59)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(59)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(137)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(59)),
        [sym_optional_pattern] = ACTIONS(SHIFT(59)),
        [sym_is_pattern] = ACTIONS(SHIFT(59)),
        [sym_as_pattern] = ACTIONS(SHIFT(59)),
        [sym__expression] = ACTIONS(SHIFT(59)),
        [sym__type_identifier] = ACTIONS(SHIFT(61)),
        [sym__type_name] = ACTIONS(SHIFT(40)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(62)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(138)),
        [anon_sym_let] = ACTIONS(SHIFT(64)),
        [anon_sym_var] = ACTIONS(SHIFT(64)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(59)),
        [anon_sym_DOT] = ACTIONS(SHIFT(65)),
        [anon_sym_is] = ACTIONS(SHIFT(66)),
        [sym_identifier] = ACTIONS(SHIFT(67)),
    },
    [121] = {
        [sym__pattern] = ACTIONS(SHIFT(133)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(118)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(118)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(118)),
        [sym_optional_pattern] = ACTIONS(SHIFT(118)),
        [sym_is_pattern] = ACTIONS(SHIFT(118)),
        [sym_as_pattern] = ACTIONS(SHIFT(118)),
        [sym__expression] = ACTIONS(SHIFT(118)),
        [sym__type_identifier] = ACTIONS(SHIFT(119)),
        [sym__type_name] = ACTIONS(SHIFT(40)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(120)),
        [anon_sym_let] = ACTIONS(SHIFT(121)),
        [anon_sym_var] = ACTIONS(SHIFT(121)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(118)),
        [anon_sym_DOT] = ACTIONS(SHIFT(122)),
        [anon_sym_is] = ACTIONS(SHIFT(123)),
        [sym_identifier] = ACTIONS(SHIFT(124)),
    },
    [122] = {
        [sym_identifier] = ACTIONS(SHIFT(131)),
    },
    [123] = {
        [sym_type] = ACTIONS(SHIFT(125)),
        [sym__type_identifier] = ACTIONS(SHIFT(126)),
        [sym__type_name] = ACTIONS(SHIFT(127)),
        [sym_identifier] = ACTIONS(SHIFT(128)),
    },
    [124] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [125] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [126] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [127] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(129)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [128] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [129] = {
        [sym__type_identifier] = ACTIONS(SHIFT(130)),
        [sym__type_name] = ACTIONS(SHIFT(127)),
        [sym_identifier] = ACTIONS(SHIFT(128)),
    },
    [130] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [131] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(132)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(120)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [132] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [133] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(134)),
        [anon_sym_as] = ACTIONS(SHIFT(135)),
    },
    [134] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [135] = {
        [sym_type] = ACTIONS(SHIFT(136)),
        [sym__type_identifier] = ACTIONS(SHIFT(126)),
        [sym__type_name] = ACTIONS(SHIFT(127)),
        [sym_identifier] = ACTIONS(SHIFT(128)),
    },
    [136] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [137] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(139)),
    },
    [138] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [139] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [140] = {
        [sym_identifier] = ACTIONS(SHIFT(141)),
    },
    [141] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(142)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(120)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [142] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [143] = {
        [sym__expression] = ACTIONS(SHIFT(144)),
        [sym_identifier] = ACTIONS(SHIFT(145)),
    },
    [144] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [145] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [146] = {
        [sym_optional_binding] = ACTIONS(SHIFT(147)),
        [sym__pattern] = ACTIONS(SHIFT(148)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(118)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(118)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(118)),
        [sym_optional_pattern] = ACTIONS(SHIFT(118)),
        [sym_is_pattern] = ACTIONS(SHIFT(118)),
        [sym_as_pattern] = ACTIONS(SHIFT(118)),
        [sym__expression] = ACTIONS(SHIFT(118)),
        [sym__type_identifier] = ACTIONS(SHIFT(119)),
        [sym__type_name] = ACTIONS(SHIFT(40)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(120)),
        [anon_sym_let] = ACTIONS(SHIFT(121)),
        [anon_sym_var] = ACTIONS(SHIFT(121)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(118)),
        [anon_sym_DOT] = ACTIONS(SHIFT(122)),
        [anon_sym_is] = ACTIONS(SHIFT(123)),
        [sym_identifier] = ACTIONS(SHIFT(124)),
    },
    [147] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(SHIFT(152)),
        [anon_sym_COMMA] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
    },
    [148] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(149)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(134)),
        [anon_sym_as] = ACTIONS(SHIFT(135)),
    },
    [149] = {
        [sym__expression] = ACTIONS(SHIFT(150)),
        [sym_identifier] = ACTIONS(SHIFT(151)),
    },
    [150] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [151] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [152] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
    },
    [153] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(154)),
        [anon_sym_iOS] = ACTIONS(SHIFT(155)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(155)),
        [anon_sym_OSX] = ACTIONS(SHIFT(155)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(155)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(155)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(155)),
    },
    [154] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(166)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(167)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(159)),
    },
    [155] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(156)),
    },
    [156] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(157)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(158)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(159)),
    },
    [157] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(165)),
    },
    [158] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 5)),
    },
    [159] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(160)),
        [anon_sym_iOS] = ACTIONS(SHIFT(161)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(161)),
        [anon_sym_OSX] = ACTIONS(SHIFT(161)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(161)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(161)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(161)),
    },
    [160] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(164)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(159)),
    },
    [161] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(162)),
    },
    [162] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(163)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 3)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(159)),
    },
    [163] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 4)),
    },
    [164] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 3)),
    },
    [165] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 6)),
    },
    [166] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(158)),
    },
    [167] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 4)),
    },
    [168] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(169)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(134)),
        [anon_sym_as] = ACTIONS(SHIFT(135)),
    },
    [169] = {
        [sym__expression] = ACTIONS(SHIFT(170)),
        [sym_identifier] = ACTIONS(SHIFT(145)),
    },
    [170] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_case_condition, 4)),
    },
    [171] = {
        [sym__condition] = ACTIONS(SHIFT(172)),
        [sym_availability_condition] = ACTIONS(SHIFT(110)),
        [sym_case_condition] = ACTIONS(SHIFT(110)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(110)),
        [anon_sym_case] = ACTIONS(SHIFT(112)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(113)),
        [anon_sym_let] = ACTIONS(SHIFT(114)),
        [anon_sym_var] = ACTIONS(SHIFT(114)),
    },
    [172] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(173)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(174)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [173] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 4)),
    },
    [174] = {
        [sym__condition] = ACTIONS(SHIFT(175)),
        [sym_availability_condition] = ACTIONS(SHIFT(110)),
        [sym_case_condition] = ACTIONS(SHIFT(110)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(110)),
        [anon_sym_case] = ACTIONS(SHIFT(112)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(113)),
        [anon_sym_let] = ACTIONS(SHIFT(114)),
        [anon_sym_var] = ACTIONS(SHIFT(114)),
    },
    [175] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(176)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(174)),
        [anon_sym_else] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
    },
    [176] = {
        [anon_sym_else] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
    },
    [177] = {
        [sym__expression] = ACTIONS(SHIFT(178)),
        [sym_identifier] = ACTIONS(SHIFT(179)),
    },
    [178] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [179] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [180] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 2)),
    },
    [181] = {
        [sym__code_block] = ACTIONS(SHIFT(182)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(183)),
    },
    [182] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_guard_statement, 4)),
    },
    [183] = {
        [sym__statement] = ACTIONS(SHIFT(184)),
        [sym__loop_statement] = ACTIONS(SHIFT(185)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(185)),
        [sym_guard_statement] = ACTIONS(SHIFT(185)),
        [sym_switch_statement] = ACTIONS(SHIFT(185)),
        [sym_labeled_statement] = ACTIONS(SHIFT(185)),
        [sym_break_statement] = ACTIONS(SHIFT(185)),
        [sym_continue_statement] = ACTIONS(SHIFT(185)),
        [sym_return_statement] = ACTIONS(SHIFT(185)),
        [sym__expression] = ACTIONS(SHIFT(185)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(186)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(187)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(185)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [aux_sym_SLASHreturn_BSLASHn_PLUS_SLASH] = ACTIONS(SHIFT(15)),
        [sym__declaration] = ACTIONS(SHIFT(185)),
        [sym_identifier] = ACTIONS(SHIFT(16)),
    },
    [184] = {
        [sym__statement] = ACTIONS(SHIFT(184)),
        [sym__loop_statement] = ACTIONS(SHIFT(185)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(185)),
        [sym_guard_statement] = ACTIONS(SHIFT(185)),
        [sym_switch_statement] = ACTIONS(SHIFT(185)),
        [sym_labeled_statement] = ACTIONS(SHIFT(185)),
        [sym_break_statement] = ACTIONS(SHIFT(185)),
        [sym_continue_statement] = ACTIONS(SHIFT(185)),
        [sym_return_statement] = ACTIONS(SHIFT(185)),
        [sym__expression] = ACTIONS(SHIFT(185)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(190)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(185)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [aux_sym_SLASHreturn_BSLASHn_PLUS_SLASH] = ACTIONS(SHIFT(15)),
        [sym__declaration] = ACTIONS(SHIFT(185)),
        [sym_identifier] = ACTIONS(SHIFT(16)),
    },
    [185] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(189)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(SHIFT(189)),
    },
    [186] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(188)),
    },
    [187] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [188] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [189] = {
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
        [aux_sym_SLASHreturn_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [190] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [191] = {
        [sym__code_block] = ACTIONS(SHIFT(234)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(235)),
    },
    [192] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(233)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(227)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [193] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1), SHIFT(230)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [194] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [195] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(224)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [196] = {
        [sym__pattern] = ACTIONS(SHIFT(221)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(118)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(118)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(118)),
        [sym_optional_pattern] = ACTIONS(SHIFT(118)),
        [sym_is_pattern] = ACTIONS(SHIFT(118)),
        [sym_as_pattern] = ACTIONS(SHIFT(118)),
        [sym__expression] = ACTIONS(SHIFT(118)),
        [sym__type_identifier] = ACTIONS(SHIFT(119)),
        [sym__type_name] = ACTIONS(SHIFT(40)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(120)),
        [anon_sym_let] = ACTIONS(SHIFT(121)),
        [anon_sym_var] = ACTIONS(SHIFT(121)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(118)),
        [anon_sym_DOT] = ACTIONS(SHIFT(122)),
        [anon_sym_is] = ACTIONS(SHIFT(123)),
        [sym_identifier] = ACTIONS(SHIFT(124)),
    },
    [197] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(212)),
    },
    [198] = {
        [sym_optional_binding] = ACTIONS(SHIFT(200)),
        [sym__pattern] = ACTIONS(SHIFT(201)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(118)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(118)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(118)),
        [sym_optional_pattern] = ACTIONS(SHIFT(118)),
        [sym_is_pattern] = ACTIONS(SHIFT(118)),
        [sym_as_pattern] = ACTIONS(SHIFT(118)),
        [sym__expression] = ACTIONS(SHIFT(118)),
        [sym__type_identifier] = ACTIONS(SHIFT(119)),
        [sym__type_name] = ACTIONS(SHIFT(40)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(120)),
        [anon_sym_let] = ACTIONS(SHIFT(121)),
        [anon_sym_var] = ACTIONS(SHIFT(121)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(118)),
        [anon_sym_DOT] = ACTIONS(SHIFT(122)),
        [anon_sym_is] = ACTIONS(SHIFT(123)),
        [sym_identifier] = ACTIONS(SHIFT(124)),
    },
    [199] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [200] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(205)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
    },
    [201] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(202)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(134)),
        [anon_sym_as] = ACTIONS(SHIFT(135)),
    },
    [202] = {
        [sym__expression] = ACTIONS(SHIFT(203)),
        [sym_identifier] = ACTIONS(SHIFT(204)),
    },
    [203] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [204] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [205] = {
        [sym_optional_binding] = ACTIONS(SHIFT(206)),
        [sym__pattern] = ACTIONS(SHIFT(207)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(118)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(118)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(118)),
        [sym_optional_pattern] = ACTIONS(SHIFT(118)),
        [sym_is_pattern] = ACTIONS(SHIFT(118)),
        [sym_as_pattern] = ACTIONS(SHIFT(118)),
        [sym__expression] = ACTIONS(SHIFT(118)),
        [sym__type_identifier] = ACTIONS(SHIFT(119)),
        [sym__type_name] = ACTIONS(SHIFT(40)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(120)),
        [anon_sym_let] = ACTIONS(SHIFT(121)),
        [anon_sym_var] = ACTIONS(SHIFT(121)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(118)),
        [anon_sym_DOT] = ACTIONS(SHIFT(122)),
        [anon_sym_is] = ACTIONS(SHIFT(123)),
        [sym_identifier] = ACTIONS(SHIFT(124)),
    },
    [206] = {
        [sym__code_block] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(SHIFT(211)),
        [anon_sym_COMMA] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
    },
    [207] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(208)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(134)),
        [anon_sym_as] = ACTIONS(SHIFT(135)),
    },
    [208] = {
        [sym__expression] = ACTIONS(SHIFT(209)),
        [sym_identifier] = ACTIONS(SHIFT(210)),
    },
    [209] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [210] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [211] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
    },
    [212] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(213)),
        [anon_sym_iOS] = ACTIONS(SHIFT(214)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(214)),
        [anon_sym_OSX] = ACTIONS(SHIFT(214)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(214)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(214)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(214)),
    },
    [213] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(219)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(220)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(159)),
    },
    [214] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(215)),
    },
    [215] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(216)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(217)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(159)),
    },
    [216] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(218)),
    },
    [217] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 5)),
    },
    [218] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 6)),
    },
    [219] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(217)),
    },
    [220] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 4)),
    },
    [221] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(222)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(134)),
        [anon_sym_as] = ACTIONS(SHIFT(135)),
    },
    [222] = {
        [sym__expression] = ACTIONS(SHIFT(223)),
        [sym_identifier] = ACTIONS(SHIFT(204)),
    },
    [223] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_case_condition, 4)),
    },
    [224] = {
        [sym__condition] = ACTIONS(SHIFT(225)),
        [sym_availability_condition] = ACTIONS(SHIFT(194)),
        [sym_case_condition] = ACTIONS(SHIFT(194)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(194)),
        [anon_sym_case] = ACTIONS(SHIFT(196)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(197)),
        [anon_sym_let] = ACTIONS(SHIFT(198)),
        [anon_sym_var] = ACTIONS(SHIFT(198)),
    },
    [225] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(226)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(227)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [226] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 4)),
    },
    [227] = {
        [sym__condition] = ACTIONS(SHIFT(228)),
        [sym_availability_condition] = ACTIONS(SHIFT(194)),
        [sym_case_condition] = ACTIONS(SHIFT(194)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(194)),
        [anon_sym_case] = ACTIONS(SHIFT(196)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(197)),
        [anon_sym_let] = ACTIONS(SHIFT(198)),
        [anon_sym_var] = ACTIONS(SHIFT(198)),
    },
    [228] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(229)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(227)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
    },
    [229] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
    },
    [230] = {
        [sym__expression] = ACTIONS(SHIFT(231)),
        [sym_identifier] = ACTIONS(SHIFT(232)),
    },
    [231] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [232] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [233] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 2)),
    },
    [234] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_else] = ACTIONS(SHIFT(239)),
    },
    [235] = {
        [sym__statement] = ACTIONS(SHIFT(184)),
        [sym__loop_statement] = ACTIONS(SHIFT(185)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(185)),
        [sym_guard_statement] = ACTIONS(SHIFT(185)),
        [sym_switch_statement] = ACTIONS(SHIFT(185)),
        [sym_labeled_statement] = ACTIONS(SHIFT(185)),
        [sym_break_statement] = ACTIONS(SHIFT(185)),
        [sym_continue_statement] = ACTIONS(SHIFT(185)),
        [sym_return_statement] = ACTIONS(SHIFT(185)),
        [sym__expression] = ACTIONS(SHIFT(185)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(236)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(237)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(185)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [aux_sym_SLASHreturn_BSLASHn_PLUS_SLASH] = ACTIONS(SHIFT(15)),
        [sym__declaration] = ACTIONS(SHIFT(185)),
        [sym_identifier] = ACTIONS(SHIFT(16)),
    },
    [236] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(238)),
    },
    [237] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [238] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [239] = {
        [sym_if_statement] = ACTIONS(SHIFT(240)),
        [sym__code_block] = ACTIONS(SHIFT(240)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(183)),
    },
    [240] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_if_statement, 5)),
    },
    [241] = {
        [anon_sym_while] = ACTIONS(SHIFT(246)),
    },
    [242] = {
        [sym__statement] = ACTIONS(SHIFT(184)),
        [sym__loop_statement] = ACTIONS(SHIFT(185)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(185)),
        [sym_guard_statement] = ACTIONS(SHIFT(185)),
        [sym_switch_statement] = ACTIONS(SHIFT(185)),
        [sym_labeled_statement] = ACTIONS(SHIFT(185)),
        [sym_break_statement] = ACTIONS(SHIFT(185)),
        [sym_continue_statement] = ACTIONS(SHIFT(185)),
        [sym_return_statement] = ACTIONS(SHIFT(185)),
        [sym__expression] = ACTIONS(SHIFT(185)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(243)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(244)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(185)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [aux_sym_SLASHreturn_BSLASHn_PLUS_SLASH] = ACTIONS(SHIFT(15)),
        [sym__declaration] = ACTIONS(SHIFT(185)),
        [sym_identifier] = ACTIONS(SHIFT(16)),
    },
    [243] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(245)),
    },
    [244] = {
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [245] = {
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [246] = {
        [sym__expression] = ACTIONS(SHIFT(247)),
        [sym_identifier] = ACTIONS(SHIFT(20)),
    },
    [247] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
    },
    [248] = {
        [sym__code_block] = ACTIONS(SHIFT(249)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(183)),
    },
    [249] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_while_statement, 3)),
    },
    [250] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(350)),
    },
    [251] = {
        [sym__code_block] = ACTIONS(SHIFT(349)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(183)),
    },
    [252] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__for_init, 1)),
    },
    [253] = {
        [sym__variable_name] = ACTIONS(SHIFT(334)),
        [sym_identifier] = ACTIONS(SHIFT(335)),
    },
    [254] = {
        [sym__type_annotation] = ACTIONS(SHIFT(330)),
        [anon_sym_in] = ACTIONS(SHIFT(331)),
        [anon_sym_COLON] = ACTIONS(SHIFT(286)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(280)),
        [anon_sym_as] = ACTIONS(SHIFT(281)),
    },
    [255] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [256] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(311)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(312)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [257] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(327)),
    },
    [258] = {
        [sym__expression] = ACTIONS(SHIFT(322)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(323)),
        [sym_identifier] = ACTIONS(SHIFT(306)),
    },
    [259] = {
        [sym__for_init] = ACTIONS(SHIFT(298)),
        [sym__for_condition] = ACTIONS(SHIFT(299)),
        [sym_variable_declaration] = ACTIONS(SHIFT(252)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(253)),
        [sym__pattern] = ACTIONS(SHIFT(58)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(59)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(59)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(275)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(59)),
        [sym_optional_pattern] = ACTIONS(SHIFT(59)),
        [sym_is_pattern] = ACTIONS(SHIFT(59)),
        [sym_as_pattern] = ACTIONS(SHIFT(59)),
        [sym__expression] = ACTIONS(SHIFT(300)),
        [sym__expression_list] = ACTIONS(SHIFT(252)),
        [sym__type_identifier] = ACTIONS(SHIFT(61)),
        [sym__type_name] = ACTIONS(SHIFT(40)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(301)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(62)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(276)),
        [anon_sym_let] = ACTIONS(SHIFT(64)),
        [anon_sym_var] = ACTIONS(SHIFT(302)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(59)),
        [anon_sym_DOT] = ACTIONS(SHIFT(65)),
        [anon_sym_is] = ACTIONS(SHIFT(66)),
        [sym_identifier] = ACTIONS(SHIFT(303)),
    },
    [260] = {
        [sym__pattern] = ACTIONS(SHIFT(283)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(255)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(255)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(255)),
        [sym_optional_pattern] = ACTIONS(SHIFT(255)),
        [sym_is_pattern] = ACTIONS(SHIFT(255)),
        [sym_as_pattern] = ACTIONS(SHIFT(255)),
        [sym__expression] = ACTIONS(SHIFT(255)),
        [sym__type_identifier] = ACTIONS(SHIFT(257)),
        [sym__type_name] = ACTIONS(SHIFT(40)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(274)),
        [anon_sym_let] = ACTIONS(SHIFT(261)),
        [anon_sym_var] = ACTIONS(SHIFT(261)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(255)),
        [anon_sym_DOT] = ACTIONS(SHIFT(263)),
        [anon_sym_is] = ACTIONS(SHIFT(264)),
        [sym_identifier] = ACTIONS(SHIFT(279)),
    },
    [261] = {
        [sym__pattern] = ACTIONS(SHIFT(278)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(255)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(255)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(255)),
        [sym_optional_pattern] = ACTIONS(SHIFT(255)),
        [sym_is_pattern] = ACTIONS(SHIFT(255)),
        [sym_as_pattern] = ACTIONS(SHIFT(255)),
        [sym__expression] = ACTIONS(SHIFT(255)),
        [sym__type_identifier] = ACTIONS(SHIFT(257)),
        [sym__type_name] = ACTIONS(SHIFT(40)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(274)),
        [anon_sym_let] = ACTIONS(SHIFT(261)),
        [anon_sym_var] = ACTIONS(SHIFT(261)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(255)),
        [anon_sym_DOT] = ACTIONS(SHIFT(263)),
        [anon_sym_is] = ACTIONS(SHIFT(264)),
        [sym_identifier] = ACTIONS(SHIFT(279)),
    },
    [262] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(278)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(255)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(255)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(255)),
        [sym_optional_pattern] = ACTIONS(SHIFT(255)),
        [sym_is_pattern] = ACTIONS(SHIFT(255)),
        [sym_as_pattern] = ACTIONS(SHIFT(255)),
        [sym__expression] = ACTIONS(SHIFT(255)),
        [sym__type_identifier] = ACTIONS(SHIFT(257)),
        [sym__type_name] = ACTIONS(SHIFT(40)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(274)),
        [anon_sym_let] = ACTIONS(SHIFT(261)),
        [anon_sym_var] = ACTIONS(SHIFT(261)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(255)),
        [anon_sym_DOT] = ACTIONS(SHIFT(263)),
        [anon_sym_is] = ACTIONS(SHIFT(264)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(279)),
    },
    [263] = {
        [sym_identifier] = ACTIONS(SHIFT(272)),
    },
    [264] = {
        [sym_type] = ACTIONS(SHIFT(266)),
        [sym__type_identifier] = ACTIONS(SHIFT(267)),
        [sym__type_name] = ACTIONS(SHIFT(268)),
        [sym_identifier] = ACTIONS(SHIFT(269)),
    },
    [265] = {
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
    [266] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [267] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [268] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(270)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [269] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [270] = {
        [sym__type_identifier] = ACTIONS(SHIFT(271)),
        [sym__type_name] = ACTIONS(SHIFT(268)),
        [sym_identifier] = ACTIONS(SHIFT(269)),
    },
    [271] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [272] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(273)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(274)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [273] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [274] = {
        [sym__pattern] = ACTIONS(SHIFT(58)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(59)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(59)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(275)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(59)),
        [sym_optional_pattern] = ACTIONS(SHIFT(59)),
        [sym_is_pattern] = ACTIONS(SHIFT(59)),
        [sym_as_pattern] = ACTIONS(SHIFT(59)),
        [sym__expression] = ACTIONS(SHIFT(59)),
        [sym__type_identifier] = ACTIONS(SHIFT(61)),
        [sym__type_name] = ACTIONS(SHIFT(40)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(62)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(276)),
        [anon_sym_let] = ACTIONS(SHIFT(64)),
        [anon_sym_var] = ACTIONS(SHIFT(64)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(59)),
        [anon_sym_DOT] = ACTIONS(SHIFT(65)),
        [anon_sym_is] = ACTIONS(SHIFT(66)),
        [sym_identifier] = ACTIONS(SHIFT(67)),
    },
    [275] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(277)),
    },
    [276] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [277] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [278] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(280)),
        [anon_sym_as] = ACTIONS(SHIFT(281)),
    },
    [279] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [280] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [281] = {
        [sym_type] = ACTIONS(SHIFT(282)),
        [sym__type_identifier] = ACTIONS(SHIFT(267)),
        [sym__type_name] = ACTIONS(SHIFT(268)),
        [sym_identifier] = ACTIONS(SHIFT(269)),
    },
    [282] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [283] = {
        [sym__type_annotation] = ACTIONS(SHIFT(284)),
        [anon_sym_in] = ACTIONS(SHIFT(285)),
        [anon_sym_COLON] = ACTIONS(SHIFT(286)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(280)),
        [anon_sym_as] = ACTIONS(SHIFT(281)),
    },
    [284] = {
        [anon_sym_in] = ACTIONS(SHIFT(295)),
    },
    [285] = {
        [sym__expression] = ACTIONS(SHIFT(293)),
        [sym_identifier] = ACTIONS(SHIFT(232)),
    },
    [286] = {
        [sym_type] = ACTIONS(SHIFT(287)),
        [sym__type_identifier] = ACTIONS(SHIFT(288)),
        [sym__type_name] = ACTIONS(SHIFT(289)),
        [sym_identifier] = ACTIONS(SHIFT(290)),
    },
    [287] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [288] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [289] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(291)),
    },
    [290] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [291] = {
        [sym__type_identifier] = ACTIONS(SHIFT(292)),
        [sym__type_name] = ACTIONS(SHIFT(289)),
        [sym_identifier] = ACTIONS(SHIFT(290)),
    },
    [292] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [293] = {
        [sym__code_block] = ACTIONS(SHIFT(294)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(183)),
    },
    [294] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
    },
    [295] = {
        [sym__expression] = ACTIONS(SHIFT(296)),
        [sym_identifier] = ACTIONS(SHIFT(232)),
    },
    [296] = {
        [sym__code_block] = ACTIONS(SHIFT(297)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(183)),
    },
    [297] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
    },
    [298] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(318)),
    },
    [299] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(316)),
    },
    [300] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(311)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1), SHIFT(312)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [301] = {
        [sym__expression] = ACTIONS(SHIFT(304)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(305)),
        [sym_identifier] = ACTIONS(SHIFT(306)),
    },
    [302] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(76)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(59)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(59)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(59)),
        [sym_optional_pattern] = ACTIONS(SHIFT(59)),
        [sym_is_pattern] = ACTIONS(SHIFT(59)),
        [sym_as_pattern] = ACTIONS(SHIFT(59)),
        [sym__expression] = ACTIONS(SHIFT(59)),
        [sym__type_identifier] = ACTIONS(SHIFT(61)),
        [sym__type_name] = ACTIONS(SHIFT(40)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(62)),
        [anon_sym_let] = ACTIONS(SHIFT(64)),
        [anon_sym_var] = ACTIONS(SHIFT(64)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(59)),
        [anon_sym_DOT] = ACTIONS(SHIFT(65)),
        [anon_sym_is] = ACTIONS(SHIFT(66)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(67)),
    },
    [303] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [304] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(309)),
    },
    [305] = {
        [sym__expression] = ACTIONS(SHIFT(307)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(308)),
    },
    [306] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [307] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [308] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [309] = {
        [sym__expression] = ACTIONS(SHIFT(310)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(308)),
    },
    [310] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [311] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 2)),
    },
    [312] = {
        [sym__expression] = ACTIONS(SHIFT(313)),
        [sym_identifier] = ACTIONS(SHIFT(314)),
    },
    [313] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(315)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(312)),
    },
    [314] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [315] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 3)),
    },
    [316] = {
        [sym__code_block] = ACTIONS(SHIFT(317)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(183)),
    },
    [317] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_for_statement, 5)),
    },
    [318] = {
        [sym__expression] = ACTIONS(SHIFT(319)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(309)),
        [sym_identifier] = ACTIONS(SHIFT(306)),
    },
    [319] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(320)),
    },
    [320] = {
        [sym__expression] = ACTIONS(SHIFT(321)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(308)),
    },
    [321] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [322] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(325)),
    },
    [323] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym__expression] = ACTIONS(SHIFT(324)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(232)),
    },
    [324] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [325] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym__expression] = ACTIONS(SHIFT(326)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(232)),
    },
    [326] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [327] = {
        [sym_identifier] = ACTIONS(SHIFT(328)),
    },
    [328] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(329)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(274)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [329] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [330] = {
        [anon_sym_in] = ACTIONS(SHIFT(285)),
    },
    [331] = {
        [sym__expression] = ACTIONS(SHIFT(332)),
        [sym_identifier] = ACTIONS(SHIFT(232)),
    },
    [332] = {
        [sym__code_block] = ACTIONS(SHIFT(333)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(183)),
    },
    [333] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
    },
    [334] = {
        [sym__type_annotation] = ACTIONS(SHIFT(336)),
        [anon_sym_COLON] = ACTIONS(SHIFT(337)),
    },
    [335] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__variable_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__variable_name, 1)),
    },
    [336] = {
        [sym__code_block] = ACTIONS(SHIFT(344)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(345)),
    },
    [337] = {
        [sym_type] = ACTIONS(SHIFT(338)),
        [sym__type_identifier] = ACTIONS(SHIFT(339)),
        [sym__type_name] = ACTIONS(SHIFT(340)),
        [sym_identifier] = ACTIONS(SHIFT(341)),
    },
    [338] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [339] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [340] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(342)),
    },
    [341] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [342] = {
        [sym__type_identifier] = ACTIONS(SHIFT(343)),
        [sym__type_name] = ACTIONS(SHIFT(340)),
        [sym_identifier] = ACTIONS(SHIFT(341)),
    },
    [343] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [344] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_variable_declaration, 4)),
    },
    [345] = {
        [sym__statement] = ACTIONS(SHIFT(184)),
        [sym__loop_statement] = ACTIONS(SHIFT(185)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(185)),
        [sym_guard_statement] = ACTIONS(SHIFT(185)),
        [sym_switch_statement] = ACTIONS(SHIFT(185)),
        [sym_labeled_statement] = ACTIONS(SHIFT(185)),
        [sym_break_statement] = ACTIONS(SHIFT(185)),
        [sym_continue_statement] = ACTIONS(SHIFT(185)),
        [sym_return_statement] = ACTIONS(SHIFT(185)),
        [sym__expression] = ACTIONS(SHIFT(185)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(346)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(347)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(185)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [aux_sym_SLASHreturn_BSLASHn_PLUS_SLASH] = ACTIONS(SHIFT(15)),
        [sym__declaration] = ACTIONS(SHIFT(185)),
        [sym_identifier] = ACTIONS(SHIFT(16)),
    },
    [346] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(348)),
    },
    [347] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [348] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [349] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_for_statement, 3)),
    },
    [350] = {
        [sym__expression] = ACTIONS(SHIFT(351)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(325)),
        [sym_identifier] = ACTIONS(SHIFT(306)),
    },
    [351] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(352)),
    },
    [352] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym__expression] = ACTIONS(SHIFT(353)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(232)),
    },
    [353] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [354] = {
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
        [aux_sym_SLASHreturn_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [355] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_swift);
