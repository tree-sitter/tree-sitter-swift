#include "tree_sitter/parser.h"

#define STATE_COUNT 443
#define SYMBOL_COUNT 82

enum {
    sym_program = ts_builtin_sym_start,
    sym__statement,
    sym__statements,
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
    aux_sym__statements_repeat1,
    aux_sym__condition_clause_repeat1,
    aux_sym_availability_condition_repeat1,
    aux_sym_optional_binding_condition_repeat1,
    aux_sym_switch_statement_repeat1,
    aux_sym_case_statement_repeat1,
    aux_sym__expression_list_repeat1,
    anon_sym_SEMI,
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
    [sym__statements] = "_statements",
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
    [aux_sym__statements_repeat1] = "_statements_repeat1",
    [aux_sym__condition_clause_repeat1] = "_condition_clause_repeat1",
    [aux_sym_availability_condition_repeat1] = "availability_condition_repeat1",
    [aux_sym_optional_binding_condition_repeat1] = "optional_binding_condition_repeat1",
    [aux_sym_switch_statement_repeat1] = "switch_statement_repeat1",
    [aux_sym_case_statement_repeat1] = "case_statement_repeat1",
    [aux_sym__expression_list_repeat1] = "_expression_list_repeat1",
    [ts_builtin_sym_error] = "ERROR",
    [ts_builtin_sym_end] = "END",
    [anon_sym_SEMI] = ";",
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
    [sym__statements] = TSNodeTypeHidden,
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
    [aux_sym__statements_repeat1] = TSNodeTypeHidden,
    [aux_sym__condition_clause_repeat1] = TSNodeTypeHidden,
    [aux_sym_availability_condition_repeat1] = TSNodeTypeHidden,
    [aux_sym_optional_binding_condition_repeat1] = TSNodeTypeHidden,
    [aux_sym_switch_statement_repeat1] = TSNodeTypeHidden,
    [aux_sym_case_statement_repeat1] = TSNodeTypeHidden,
    [aux_sym__expression_list_repeat1] = TSNodeTypeHidden,
    [ts_builtin_sym_error] = TSNodeTypeNamed,
    [ts_builtin_sym_end] = TSNodeTypeHidden,
    [anon_sym_SEMI] = TSNodeTypeAnonymous,
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
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'g')
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'r')
                ADVANCE(22);
            if (lookahead == 's')
                ADVANCE(28);
            if (lookahead == 'w')
                ADVANCE(34);
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
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(8);
            ACCEPT_TOKEN(sym_identifier);
        case 8:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'r')
                ADVANCE(9);
            ACCEPT_TOKEN(sym_identifier);
        case 9:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_for);
        case 10:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'u')
                ADVANCE(11);
            ACCEPT_TOKEN(sym_identifier);
        case 11:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(12);
            ACCEPT_TOKEN(sym_identifier);
        case 12:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'r')
                ADVANCE(13);
            ACCEPT_TOKEN(sym_identifier);
        case 13:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'd')
                ADVANCE(14);
            ACCEPT_TOKEN(sym_identifier);
        case 14:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_guard);
        case 15:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'f')
                ADVANCE(16);
            if (lookahead == 'm')
                ADVANCE(17);
            ACCEPT_TOKEN(sym_identifier);
        case 16:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_if);
        case 17:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(18);
            ACCEPT_TOKEN(sym_identifier);
        case 18:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(19);
            ACCEPT_TOKEN(sym_identifier);
        case 19:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'r')
                ADVANCE(20);
            ACCEPT_TOKEN(sym_identifier);
        case 20:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(21);
            ACCEPT_TOKEN(sym_identifier);
        case 21:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(sym__declaration);
        case 22:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(23);
            ACCEPT_TOKEN(sym_identifier);
        case 23:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(24);
            ACCEPT_TOKEN(sym_identifier);
        case 24:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(25);
            ACCEPT_TOKEN(sym_identifier);
        case 25:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(26);
            ACCEPT_TOKEN(sym_identifier);
        case 26:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(27);
            ACCEPT_TOKEN(sym_identifier);
        case 27:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_repeat);
        case 28:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'w')
                ADVANCE(29);
            ACCEPT_TOKEN(sym_identifier);
        case 29:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(30);
            ACCEPT_TOKEN(sym_identifier);
        case 30:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(31);
            ACCEPT_TOKEN(sym_identifier);
        case 31:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(32);
            ACCEPT_TOKEN(sym_identifier);
        case 32:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(33);
            ACCEPT_TOKEN(sym_identifier);
        case 33:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_switch);
        case 34:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(35);
            ACCEPT_TOKEN(sym_identifier);
        case 35:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier);
        case 36:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(37);
            ACCEPT_TOKEN(sym_identifier);
        case 37:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(38);
            ACCEPT_TOKEN(sym_identifier);
        case 38:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_while);
        case 39:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(39);
            LEX_ERROR();
        case 40:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(40);
            if (lookahead == ';')
                ADVANCE(41);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'g')
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'r')
                ADVANCE(22);
            if (lookahead == 's')
                ADVANCE(28);
            if (lookahead == 'w')
                ADVANCE(34);
            LEX_ERROR();
        case 41:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 42:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(42);
            if (lookahead == '(')
                ADVANCE(43);
            if (lookahead == '.')
                ADVANCE(44);
            if (lookahead == ';')
                ADVANCE(41);
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
                ADVANCE(45);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'c')
                ADVANCE(46);
            if (lookahead == 'i')
                ADVANCE(50);
            if (lookahead == 'l')
                ADVANCE(52);
            if (lookahead == 'v')
                ADVANCE(55);
            LEX_ERROR();
        case 43:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 44:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 45:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(sym_wildcard_pattern);
        case 46:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(47);
            ACCEPT_TOKEN(sym_identifier);
        case 47:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(48);
            ACCEPT_TOKEN(sym_identifier);
        case 48:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(49);
            ACCEPT_TOKEN(sym_identifier);
        case 49:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_case);
        case 50:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(51);
            ACCEPT_TOKEN(sym_identifier);
        case 51:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_is);
        case 52:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(53);
            ACCEPT_TOKEN(sym_identifier);
        case 53:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(54);
            ACCEPT_TOKEN(sym_identifier);
        case 54:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_let);
        case 55:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(56);
            ACCEPT_TOKEN(sym_identifier);
        case 56:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'r')
                ADVANCE(57);
            ACCEPT_TOKEN(sym_identifier);
        case 57:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_var);
        case 58:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(58);
            if (lookahead == '#')
                ADVANCE(59);
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
                ADVANCE(46);
            if (lookahead == 'l')
                ADVANCE(52);
            if (lookahead == 'v')
                ADVANCE(55);
            LEX_ERROR();
        case 59:
            if (lookahead == 'a')
                ADVANCE(60);
            LEX_ERROR();
        case 60:
            if (lookahead == 'v')
                ADVANCE(61);
            LEX_ERROR();
        case 61:
            if (lookahead == 'a')
                ADVANCE(62);
            LEX_ERROR();
        case 62:
            if (lookahead == 'i')
                ADVANCE(63);
            LEX_ERROR();
        case 63:
            if (lookahead == 'l')
                ADVANCE(64);
            LEX_ERROR();
        case 64:
            if (lookahead == 'a')
                ADVANCE(65);
            LEX_ERROR();
        case 65:
            if (lookahead == 'b')
                ADVANCE(66);
            LEX_ERROR();
        case 66:
            if (lookahead == 'l')
                ADVANCE(67);
            LEX_ERROR();
        case 67:
            if (lookahead == 'e')
                ADVANCE(68);
            LEX_ERROR();
        case 68:
            ACCEPT_TOKEN(anon_sym_POUNDavailable);
        case 69:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(69);
            if (lookahead == '{')
                ADVANCE(70);
            LEX_ERROR();
        case 70:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 71:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(71);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 72:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(72);
            if (lookahead == 'c')
                ADVANCE(73);
            if (lookahead == 'd')
                ADVANCE(77);
            if (lookahead == '}')
                ADVANCE(84);
            LEX_ERROR();
        case 73:
            if (lookahead == 'a')
                ADVANCE(74);
            LEX_ERROR();
        case 74:
            if (lookahead == 's')
                ADVANCE(75);
            LEX_ERROR();
        case 75:
            if (lookahead == 'e')
                ADVANCE(76);
            LEX_ERROR();
        case 76:
            ACCEPT_TOKEN(anon_sym_case);
        case 77:
            if (lookahead == 'e')
                ADVANCE(78);
            LEX_ERROR();
        case 78:
            if (lookahead == 'f')
                ADVANCE(79);
            LEX_ERROR();
        case 79:
            if (lookahead == 'a')
                ADVANCE(80);
            LEX_ERROR();
        case 80:
            if (lookahead == 'u')
                ADVANCE(81);
            LEX_ERROR();
        case 81:
            if (lookahead == 'l')
                ADVANCE(82);
            LEX_ERROR();
        case 82:
            if (lookahead == 't')
                ADVANCE(83);
            LEX_ERROR();
        case 83:
            ACCEPT_TOKEN(anon_sym_default);
        case 84:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 85:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(85);
            if (lookahead == '}')
                ADVANCE(84);
            LEX_ERROR();
        case 86:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(86);
            if (lookahead == '(')
                ADVANCE(43);
            if (lookahead == '.')
                ADVANCE(44);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(45);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(50);
            if (lookahead == 'l')
                ADVANCE(52);
            if (lookahead == 'v')
                ADVANCE(55);
            LEX_ERROR();
        case 87:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(87);
            if (lookahead == ':')
                ADVANCE(88);
            LEX_ERROR();
        case 88:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 89:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(89);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'c')
                ADVANCE(46);
            if (lookahead == 'd')
                ADVANCE(90);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'g')
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'r')
                ADVANCE(22);
            if (lookahead == 's')
                ADVANCE(28);
            if (lookahead == 'w')
                ADVANCE(34);
            if (lookahead == '}')
                ADVANCE(84);
            LEX_ERROR();
        case 90:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(91);
            ACCEPT_TOKEN(sym_identifier);
        case 91:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'f')
                ADVANCE(92);
            ACCEPT_TOKEN(sym_identifier);
        case 92:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(93);
            ACCEPT_TOKEN(sym_identifier);
        case 93:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'u')
                ADVANCE(94);
            ACCEPT_TOKEN(sym_identifier);
        case 94:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(95);
            ACCEPT_TOKEN(sym_identifier);
        case 95:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(96);
            ACCEPT_TOKEN(sym_identifier);
        case 96:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_default);
        case 97:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(97);
            if (lookahead == ';')
                ADVANCE(41);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'c')
                ADVANCE(46);
            if (lookahead == 'd')
                ADVANCE(90);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'g')
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'r')
                ADVANCE(22);
            if (lookahead == 's')
                ADVANCE(28);
            if (lookahead == 'w')
                ADVANCE(34);
            if (lookahead == '}')
                ADVANCE(84);
            LEX_ERROR();
        case 98:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(98);
            if (lookahead == 'e')
                ADVANCE(99);
            LEX_ERROR();
        case 99:
            if (lookahead == 'l')
                ADVANCE(100);
            LEX_ERROR();
        case 100:
            if (lookahead == 's')
                ADVANCE(101);
            LEX_ERROR();
        case 101:
            if (lookahead == 'e')
                ADVANCE(102);
            LEX_ERROR();
        case 102:
            ACCEPT_TOKEN(anon_sym_else);
        case 103:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(103);
            if (lookahead == ',')
                ADVANCE(104);
            if (lookahead == 'e')
                ADVANCE(99);
            LEX_ERROR();
        case 104:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 105:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(105);
            if (lookahead == '(')
                ADVANCE(43);
            LEX_ERROR();
        case 106:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(106);
            if (lookahead == '=')
                ADVANCE(107);
            if (lookahead == '?')
                ADVANCE(108);
            if (lookahead == 'a')
                ADVANCE(109);
            LEX_ERROR();
        case 107:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 108:
            ACCEPT_TOKEN(anon_sym_QMARK);
        case 109:
            if (lookahead == 's')
                ADVANCE(110);
            LEX_ERROR();
        case 110:
            ACCEPT_TOKEN(anon_sym_as);
        case 111:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(111);
            if (lookahead == '.')
                ADVANCE(44);
            LEX_ERROR();
        case 112:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(112);
            if (lookahead == '(')
                ADVANCE(43);
            if (lookahead == ')')
                ADVANCE(113);
            if (lookahead == '.')
                ADVANCE(44);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(45);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(50);
            if (lookahead == 'l')
                ADVANCE(52);
            if (lookahead == 'v')
                ADVANCE(55);
            LEX_ERROR();
        case 113:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 114:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(114);
            if (lookahead == '.')
                ADVANCE(44);
            if (lookahead == '=')
                ADVANCE(107);
            if (lookahead == '?')
                ADVANCE(108);
            if (lookahead == 'a')
                ADVANCE(109);
            LEX_ERROR();
        case 115:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(115);
            if (lookahead == '(')
                ADVANCE(43);
            if (lookahead == '=')
                ADVANCE(107);
            if (lookahead == '?')
                ADVANCE(108);
            if (lookahead == 'a')
                ADVANCE(109);
            LEX_ERROR();
        case 116:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(116);
            if (lookahead == ')')
                ADVANCE(113);
            if (lookahead == ',')
                ADVANCE(104);
            if (lookahead == '?')
                ADVANCE(108);
            if (lookahead == 'a')
                ADVANCE(109);
            LEX_ERROR();
        case 117:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(117);
            if (lookahead == ')')
                ADVANCE(113);
            LEX_ERROR();
        case 118:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(118);
            if (lookahead == ')')
                ADVANCE(113);
            if (lookahead == ',')
                ADVANCE(104);
            if (lookahead == '.')
                ADVANCE(44);
            if (lookahead == '?')
                ADVANCE(108);
            if (lookahead == 'a')
                ADVANCE(109);
            LEX_ERROR();
        case 119:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(119);
            if (lookahead == '(')
                ADVANCE(43);
            if (lookahead == ')')
                ADVANCE(113);
            if (lookahead == ',')
                ADVANCE(104);
            if (lookahead == '?')
                ADVANCE(108);
            if (lookahead == 'a')
                ADVANCE(109);
            LEX_ERROR();
        case 120:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(120);
            if (lookahead == '*')
                ADVANCE(121);
            if (lookahead == 'O')
                ADVANCE(122);
            if (lookahead == 'i')
                ADVANCE(145);
            if (lookahead == 't')
                ADVANCE(168);
            if (lookahead == 'w')
                ADVANCE(172);
            LEX_ERROR();
        case 121:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 122:
            if (lookahead == 'S')
                ADVANCE(123);
            LEX_ERROR();
        case 123:
            if (lookahead == 'X')
                ADVANCE(124);
            LEX_ERROR();
        case 124:
            if (lookahead == 'A')
                ADVANCE(125);
            ACCEPT_TOKEN(anon_sym_OSX);
        case 125:
            if (lookahead == 'p')
                ADVANCE(126);
            LEX_ERROR();
        case 126:
            if (lookahead == 'p')
                ADVANCE(127);
            LEX_ERROR();
        case 127:
            if (lookahead == 'l')
                ADVANCE(128);
            LEX_ERROR();
        case 128:
            if (lookahead == 'i')
                ADVANCE(129);
            LEX_ERROR();
        case 129:
            if (lookahead == 'c')
                ADVANCE(130);
            LEX_ERROR();
        case 130:
            if (lookahead == 'a')
                ADVANCE(131);
            LEX_ERROR();
        case 131:
            if (lookahead == 't')
                ADVANCE(132);
            LEX_ERROR();
        case 132:
            if (lookahead == 'i')
                ADVANCE(133);
            LEX_ERROR();
        case 133:
            if (lookahead == 'o')
                ADVANCE(134);
            LEX_ERROR();
        case 134:
            if (lookahead == 'n')
                ADVANCE(135);
            LEX_ERROR();
        case 135:
            if (lookahead == 'E')
                ADVANCE(136);
            LEX_ERROR();
        case 136:
            if (lookahead == 'x')
                ADVANCE(137);
            LEX_ERROR();
        case 137:
            if (lookahead == 't')
                ADVANCE(138);
            LEX_ERROR();
        case 138:
            if (lookahead == 'e')
                ADVANCE(139);
            LEX_ERROR();
        case 139:
            if (lookahead == 'n')
                ADVANCE(140);
            LEX_ERROR();
        case 140:
            if (lookahead == 's')
                ADVANCE(141);
            LEX_ERROR();
        case 141:
            if (lookahead == 'i')
                ADVANCE(142);
            LEX_ERROR();
        case 142:
            if (lookahead == 'o')
                ADVANCE(143);
            LEX_ERROR();
        case 143:
            if (lookahead == 'n')
                ADVANCE(144);
            LEX_ERROR();
        case 144:
            ACCEPT_TOKEN(anon_sym_OSXApplicationExtension);
        case 145:
            if (lookahead == 'O')
                ADVANCE(146);
            LEX_ERROR();
        case 146:
            if (lookahead == 'S')
                ADVANCE(147);
            LEX_ERROR();
        case 147:
            if (lookahead == 'A')
                ADVANCE(148);
            ACCEPT_TOKEN(anon_sym_iOS);
        case 148:
            if (lookahead == 'p')
                ADVANCE(149);
            LEX_ERROR();
        case 149:
            if (lookahead == 'p')
                ADVANCE(150);
            LEX_ERROR();
        case 150:
            if (lookahead == 'l')
                ADVANCE(151);
            LEX_ERROR();
        case 151:
            if (lookahead == 'i')
                ADVANCE(152);
            LEX_ERROR();
        case 152:
            if (lookahead == 'c')
                ADVANCE(153);
            LEX_ERROR();
        case 153:
            if (lookahead == 'a')
                ADVANCE(154);
            LEX_ERROR();
        case 154:
            if (lookahead == 't')
                ADVANCE(155);
            LEX_ERROR();
        case 155:
            if (lookahead == 'i')
                ADVANCE(156);
            LEX_ERROR();
        case 156:
            if (lookahead == 'o')
                ADVANCE(157);
            LEX_ERROR();
        case 157:
            if (lookahead == 'n')
                ADVANCE(158);
            LEX_ERROR();
        case 158:
            if (lookahead == 'E')
                ADVANCE(159);
            LEX_ERROR();
        case 159:
            if (lookahead == 'x')
                ADVANCE(160);
            LEX_ERROR();
        case 160:
            if (lookahead == 't')
                ADVANCE(161);
            LEX_ERROR();
        case 161:
            if (lookahead == 'e')
                ADVANCE(162);
            LEX_ERROR();
        case 162:
            if (lookahead == 'n')
                ADVANCE(163);
            LEX_ERROR();
        case 163:
            if (lookahead == 's')
                ADVANCE(164);
            LEX_ERROR();
        case 164:
            if (lookahead == 'i')
                ADVANCE(165);
            LEX_ERROR();
        case 165:
            if (lookahead == 'o')
                ADVANCE(166);
            LEX_ERROR();
        case 166:
            if (lookahead == 'n')
                ADVANCE(167);
            LEX_ERROR();
        case 167:
            ACCEPT_TOKEN(anon_sym_iOSApplicationExtension);
        case 168:
            if (lookahead == 'v')
                ADVANCE(169);
            LEX_ERROR();
        case 169:
            if (lookahead == 'O')
                ADVANCE(170);
            LEX_ERROR();
        case 170:
            if (lookahead == 'S')
                ADVANCE(171);
            LEX_ERROR();
        case 171:
            ACCEPT_TOKEN(anon_sym_tvOS);
        case 172:
            if (lookahead == 'a')
                ADVANCE(173);
            LEX_ERROR();
        case 173:
            if (lookahead == 't')
                ADVANCE(174);
            LEX_ERROR();
        case 174:
            if (lookahead == 'c')
                ADVANCE(175);
            LEX_ERROR();
        case 175:
            if (lookahead == 'h')
                ADVANCE(176);
            LEX_ERROR();
        case 176:
            if (lookahead == 'O')
                ADVANCE(177);
            LEX_ERROR();
        case 177:
            if (lookahead == 'S')
                ADVANCE(178);
            LEX_ERROR();
        case 178:
            ACCEPT_TOKEN(anon_sym_watchOS);
        case 179:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(179);
            if (lookahead == ')')
                ADVANCE(113);
            if (lookahead == ',')
                ADVANCE(104);
            LEX_ERROR();
        case 180:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(180);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(181);
            LEX_ERROR();
        case 181:
            if (lookahead == '.')
                ADVANCE(182);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(181);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 182:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(183);
            LEX_ERROR();
        case 183:
            if (lookahead == '.')
                ADVANCE(184);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(183);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 184:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(185);
            LEX_ERROR();
        case 185:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(185);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 186:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(186);
            if (lookahead == '#')
                ADVANCE(59);
            if (lookahead == 'c')
                ADVANCE(73);
            if (lookahead == 'l')
                ADVANCE(187);
            if (lookahead == 'v')
                ADVANCE(190);
            LEX_ERROR();
        case 187:
            if (lookahead == 'e')
                ADVANCE(188);
            LEX_ERROR();
        case 188:
            if (lookahead == 't')
                ADVANCE(189);
            LEX_ERROR();
        case 189:
            ACCEPT_TOKEN(anon_sym_let);
        case 190:
            if (lookahead == 'a')
                ADVANCE(191);
            LEX_ERROR();
        case 191:
            if (lookahead == 'r')
                ADVANCE(192);
            LEX_ERROR();
        case 192:
            ACCEPT_TOKEN(anon_sym_var);
        case 193:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(193);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'g')
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'r')
                ADVANCE(22);
            if (lookahead == 's')
                ADVANCE(28);
            if (lookahead == 'w')
                ADVANCE(34);
            if (lookahead == '}')
                ADVANCE(84);
            LEX_ERROR();
        case 194:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(194);
            if (lookahead == ';')
                ADVANCE(41);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'g')
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'r')
                ADVANCE(22);
            if (lookahead == 's')
                ADVANCE(28);
            if (lookahead == 'w')
                ADVANCE(34);
            if (lookahead == '}')
                ADVANCE(84);
            LEX_ERROR();
        case 195:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(195);
            if (lookahead == ',')
                ADVANCE(104);
            if (lookahead == '{')
                ADVANCE(70);
            LEX_ERROR();
        case 196:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(196);
            if (lookahead == ';')
                ADVANCE(41);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'e')
                ADVANCE(197);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'g')
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'r')
                ADVANCE(22);
            if (lookahead == 's')
                ADVANCE(28);
            if (lookahead == 'w')
                ADVANCE(34);
            if (lookahead == '}')
                ADVANCE(84);
            LEX_ERROR();
        case 197:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(198);
            ACCEPT_TOKEN(sym_identifier);
        case 198:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(199);
            ACCEPT_TOKEN(sym_identifier);
        case 199:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(200);
            ACCEPT_TOKEN(sym_identifier);
        case 200:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_else);
        case 201:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(201);
            if (lookahead == 'i')
                ADVANCE(202);
            if (lookahead == '{')
                ADVANCE(70);
            LEX_ERROR();
        case 202:
            if (lookahead == 'f')
                ADVANCE(203);
            LEX_ERROR();
        case 203:
            ACCEPT_TOKEN(anon_sym_if);
        case 204:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(204);
            if (lookahead == 'w')
                ADVANCE(205);
            LEX_ERROR();
        case 205:
            if (lookahead == 'h')
                ADVANCE(206);
            LEX_ERROR();
        case 206:
            if (lookahead == 'i')
                ADVANCE(207);
            LEX_ERROR();
        case 207:
            if (lookahead == 'l')
                ADVANCE(208);
            LEX_ERROR();
        case 208:
            if (lookahead == 'e')
                ADVANCE(209);
            LEX_ERROR();
        case 209:
            ACCEPT_TOKEN(anon_sym_while);
        case 210:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(210);
            if (lookahead == ';')
                ADVANCE(41);
            LEX_ERROR();
        case 211:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(211);
            if (lookahead == ':')
                ADVANCE(88);
            if (lookahead == '?')
                ADVANCE(108);
            if (lookahead == 'a')
                ADVANCE(109);
            if (lookahead == 'i')
                ADVANCE(212);
            LEX_ERROR();
        case 212:
            if (lookahead == 'n')
                ADVANCE(213);
            LEX_ERROR();
        case 213:
            ACCEPT_TOKEN(anon_sym_in);
        case 214:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(214);
            if (lookahead == ',')
                ADVANCE(104);
            if (lookahead == ':')
                ADVANCE(88);
            if (lookahead == ';')
                ADVANCE(41);
            if (lookahead == '?')
                ADVANCE(108);
            if (lookahead == 'a')
                ADVANCE(109);
            if (lookahead == 'i')
                ADVANCE(212);
            LEX_ERROR();
        case 215:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(215);
            if (lookahead == ';')
                ADVANCE(41);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 216:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(216);
            if (lookahead == '(')
                ADVANCE(43);
            if (lookahead == ')')
                ADVANCE(113);
            if (lookahead == '.')
                ADVANCE(44);
            if (lookahead == ';')
                ADVANCE(41);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(45);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(50);
            if (lookahead == 'l')
                ADVANCE(52);
            if (lookahead == 'v')
                ADVANCE(55);
            LEX_ERROR();
        case 217:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(217);
            if (lookahead == ',')
                ADVANCE(104);
            if (lookahead == '.')
                ADVANCE(44);
            if (lookahead == ':')
                ADVANCE(88);
            if (lookahead == ';')
                ADVANCE(41);
            if (lookahead == '?')
                ADVANCE(108);
            if (lookahead == 'a')
                ADVANCE(109);
            if (lookahead == 'i')
                ADVANCE(212);
            LEX_ERROR();
        case 218:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(218);
            if (lookahead == '.')
                ADVANCE(44);
            if (lookahead == ':')
                ADVANCE(88);
            if (lookahead == '?')
                ADVANCE(108);
            if (lookahead == 'a')
                ADVANCE(109);
            if (lookahead == 'i')
                ADVANCE(212);
            LEX_ERROR();
        case 219:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(219);
            if (lookahead == '(')
                ADVANCE(43);
            if (lookahead == ':')
                ADVANCE(88);
            if (lookahead == '?')
                ADVANCE(108);
            if (lookahead == 'a')
                ADVANCE(109);
            if (lookahead == 'i')
                ADVANCE(212);
            LEX_ERROR();
        case 220:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(220);
            if (lookahead == 'i')
                ADVANCE(212);
            LEX_ERROR();
        case 221:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(221);
            if (lookahead == '.')
                ADVANCE(44);
            if (lookahead == 'i')
                ADVANCE(212);
            LEX_ERROR();
        case 222:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(222);
            if (lookahead == ')')
                ADVANCE(113);
            if (lookahead == ',')
                ADVANCE(104);
            if (lookahead == ';')
                ADVANCE(41);
            if (lookahead == '?')
                ADVANCE(108);
            if (lookahead == 'a')
                ADVANCE(109);
            LEX_ERROR();
        case 223:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(223);
            if (lookahead == ')')
                ADVANCE(113);
            if (lookahead == ',')
                ADVANCE(104);
            if (lookahead == '.')
                ADVANCE(44);
            if (lookahead == ';')
                ADVANCE(41);
            if (lookahead == '?')
                ADVANCE(108);
            if (lookahead == 'a')
                ADVANCE(109);
            LEX_ERROR();
        case 224:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(224);
            if (lookahead == ')')
                ADVANCE(113);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 225:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(225);
            if (lookahead == ',')
                ADVANCE(104);
            if (lookahead == ';')
                ADVANCE(41);
            LEX_ERROR();
        case 226:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(226);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == '{')
                ADVANCE(70);
            LEX_ERROR();
        case 227:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(227);
            if (lookahead == '.')
                ADVANCE(44);
            if (lookahead == '{')
                ADVANCE(70);
            LEX_ERROR();
        case 228:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(228);
            if (lookahead == ';')
                ADVANCE(41);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'c')
                ADVANCE(46);
            if (lookahead == 'd')
                ADVANCE(90);
            if (lookahead == 'e')
                ADVANCE(197);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'g')
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'r')
                ADVANCE(22);
            if (lookahead == 's')
                ADVANCE(28);
            if (lookahead == 'w')
                ADVANCE(34);
            if (lookahead == '}')
                ADVANCE(84);
            LEX_ERROR();
        case 229:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(229);
            if (lookahead == ',')
                ADVANCE(104);
            if (lookahead == ':')
                ADVANCE(88);
            if (lookahead == '?')
                ADVANCE(108);
            if (lookahead == 'a')
                ADVANCE(109);
            LEX_ERROR();
        case 230:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(230);
            if (lookahead == ',')
                ADVANCE(104);
            if (lookahead == '.')
                ADVANCE(44);
            if (lookahead == ':')
                ADVANCE(88);
            if (lookahead == '?')
                ADVANCE(108);
            if (lookahead == 'a')
                ADVANCE(109);
            LEX_ERROR();
        case 231:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(231);
            if (lookahead == '(')
                ADVANCE(43);
            if (lookahead == ',')
                ADVANCE(104);
            if (lookahead == ':')
                ADVANCE(88);
            if (lookahead == '?')
                ADVANCE(108);
            if (lookahead == 'a')
                ADVANCE(109);
            LEX_ERROR();
        case 232:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(232);
            if (lookahead == ';')
                ADVANCE(41);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'e')
                ADVANCE(197);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'g')
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'r')
                ADVANCE(22);
            if (lookahead == 's')
                ADVANCE(28);
            if (lookahead == 'w')
                ADVANCE(34);
            LEX_ERROR();
        case 233:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(233);
            if (lookahead == '#')
                ADVANCE(59);
            if (lookahead == '(')
                ADVANCE(43);
            if (lookahead == ')')
                ADVANCE(113);
            if (lookahead == '*')
                ADVANCE(121);
            if (lookahead == ',')
                ADVANCE(104);
            if (lookahead == '.')
                ADVANCE(44);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(181);
            if (lookahead == ':')
                ADVANCE(88);
            if (lookahead == ';')
                ADVANCE(41);
            if (lookahead == '=')
                ADVANCE(107);
            if (lookahead == '?')
                ADVANCE(108);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'b') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(234);
            if (lookahead == '_')
                ADVANCE(45);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(257);
            if (lookahead == 'c')
                ADVANCE(46);
            if (lookahead == 'd')
                ADVANCE(90);
            if (lookahead == 'e')
                ADVANCE(197);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'g')
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(259);
            if (lookahead == 'l')
                ADVANCE(52);
            if (lookahead == 'r')
                ADVANCE(22);
            if (lookahead == 's')
                ADVANCE(28);
            if (lookahead == 't')
                ADVANCE(283);
            if (lookahead == 'v')
                ADVANCE(55);
            if (lookahead == 'w')
                ADVANCE(287);
            if (lookahead == '{')
                ADVANCE(70);
            if (lookahead == '}')
                ADVANCE(84);
            LEX_ERROR();
        case 234:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(235);
            ACCEPT_TOKEN(sym_identifier);
        case 235:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'W') ||
                (lookahead == 'Y') ||
                (lookahead == 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'X')
                ADVANCE(236);
            ACCEPT_TOKEN(sym_identifier);
        case 236:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (lookahead == 'A')
                ADVANCE(237);
            if (('B' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_OSX);
        case 237:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(238);
            ACCEPT_TOKEN(sym_identifier);
        case 238:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(239);
            ACCEPT_TOKEN(sym_identifier);
        case 239:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(240);
            ACCEPT_TOKEN(sym_identifier);
        case 240:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(241);
            ACCEPT_TOKEN(sym_identifier);
        case 241:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(242);
            ACCEPT_TOKEN(sym_identifier);
        case 242:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(243);
            ACCEPT_TOKEN(sym_identifier);
        case 243:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(244);
            ACCEPT_TOKEN(sym_identifier);
        case 244:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(245);
            ACCEPT_TOKEN(sym_identifier);
        case 245:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(246);
            ACCEPT_TOKEN(sym_identifier);
        case 246:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(247);
            ACCEPT_TOKEN(sym_identifier);
        case 247:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'D') ||
                ('F' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'E')
                ADVANCE(248);
            ACCEPT_TOKEN(sym_identifier);
        case 248:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(3);
            if (lookahead == 'x')
                ADVANCE(249);
            ACCEPT_TOKEN(sym_identifier);
        case 249:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(250);
            ACCEPT_TOKEN(sym_identifier);
        case 250:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(251);
            ACCEPT_TOKEN(sym_identifier);
        case 251:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(252);
            ACCEPT_TOKEN(sym_identifier);
        case 252:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(253);
            ACCEPT_TOKEN(sym_identifier);
        case 253:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(254);
            ACCEPT_TOKEN(sym_identifier);
        case 254:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(255);
            ACCEPT_TOKEN(sym_identifier);
        case 255:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(256);
            ACCEPT_TOKEN(sym_identifier);
        case 256:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_OSXApplicationExtension);
        case 257:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(258);
            ACCEPT_TOKEN(sym_identifier);
        case 258:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_as);
        case 259:
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
                ADVANCE(260);
            if (lookahead == 'f')
                ADVANCE(16);
            if (lookahead == 'm')
                ADVANCE(17);
            if (lookahead == 'n')
                ADVANCE(282);
            if (lookahead == 's')
                ADVANCE(51);
            ACCEPT_TOKEN(sym_identifier);
        case 260:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(261);
            ACCEPT_TOKEN(sym_identifier);
        case 261:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (lookahead == 'A')
                ADVANCE(262);
            if (('B' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_iOS);
        case 262:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(263);
            ACCEPT_TOKEN(sym_identifier);
        case 263:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(264);
            ACCEPT_TOKEN(sym_identifier);
        case 264:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(265);
            ACCEPT_TOKEN(sym_identifier);
        case 265:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(266);
            ACCEPT_TOKEN(sym_identifier);
        case 266:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(267);
            ACCEPT_TOKEN(sym_identifier);
        case 267:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(268);
            ACCEPT_TOKEN(sym_identifier);
        case 268:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(269);
            ACCEPT_TOKEN(sym_identifier);
        case 269:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(270);
            ACCEPT_TOKEN(sym_identifier);
        case 270:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(271);
            ACCEPT_TOKEN(sym_identifier);
        case 271:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(272);
            ACCEPT_TOKEN(sym_identifier);
        case 272:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'D') ||
                ('F' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'E')
                ADVANCE(273);
            ACCEPT_TOKEN(sym_identifier);
        case 273:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(3);
            if (lookahead == 'x')
                ADVANCE(274);
            ACCEPT_TOKEN(sym_identifier);
        case 274:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(275);
            ACCEPT_TOKEN(sym_identifier);
        case 275:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(276);
            ACCEPT_TOKEN(sym_identifier);
        case 276:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(277);
            ACCEPT_TOKEN(sym_identifier);
        case 277:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
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
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(280);
            ACCEPT_TOKEN(sym_identifier);
        case 280:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(281);
            ACCEPT_TOKEN(sym_identifier);
        case 281:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_iOSApplicationExtension);
        case 282:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_in);
        case 283:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'v')
                ADVANCE(284);
            ACCEPT_TOKEN(sym_identifier);
        case 284:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(285);
            ACCEPT_TOKEN(sym_identifier);
        case 285:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(286);
            ACCEPT_TOKEN(sym_identifier);
        case 286:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_tvOS);
        case 287:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(288);
            if (lookahead == 'h')
                ADVANCE(35);
            ACCEPT_TOKEN(sym_identifier);
        case 288:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(289);
            ACCEPT_TOKEN(sym_identifier);
        case 289:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(290);
            ACCEPT_TOKEN(sym_identifier);
        case 290:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(291);
            ACCEPT_TOKEN(sym_identifier);
        case 291:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(292);
            ACCEPT_TOKEN(sym_identifier);
        case 292:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(293);
            ACCEPT_TOKEN(sym_identifier);
        case 293:
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
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(233);
            if (lookahead == '#')
                ADVANCE(59);
            if (lookahead == '(')
                ADVANCE(43);
            if (lookahead == ')')
                ADVANCE(113);
            if (lookahead == '*')
                ADVANCE(121);
            if (lookahead == ',')
                ADVANCE(104);
            if (lookahead == '.')
                ADVANCE(44);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(181);
            if (lookahead == ':')
                ADVANCE(88);
            if (lookahead == ';')
                ADVANCE(41);
            if (lookahead == '=')
                ADVANCE(107);
            if (lookahead == '?')
                ADVANCE(108);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'b') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(234);
            if (lookahead == '_')
                ADVANCE(45);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(257);
            if (lookahead == 'c')
                ADVANCE(46);
            if (lookahead == 'd')
                ADVANCE(90);
            if (lookahead == 'e')
                ADVANCE(197);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'g')
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(259);
            if (lookahead == 'l')
                ADVANCE(52);
            if (lookahead == 'r')
                ADVANCE(22);
            if (lookahead == 's')
                ADVANCE(28);
            if (lookahead == 't')
                ADVANCE(283);
            if (lookahead == 'v')
                ADVANCE(55);
            if (lookahead == 'w')
                ADVANCE(287);
            if (lookahead == '{')
                ADVANCE(70);
            if (lookahead == '}')
                ADVANCE(84);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 1,
    [1] = 39,
    [2] = 1,
    [3] = 39,
    [4] = 40,
    [5] = 39,
    [6] = 42,
    [7] = 58,
    [8] = 69,
    [9] = 58,
    [10] = 58,
    [11] = 71,
    [12] = 40,
    [13] = 69,
    [14] = 69,
    [15] = 72,
    [16] = 72,
    [17] = 85,
    [18] = 86,
    [19] = 40,
    [20] = 87,
    [21] = 89,
    [22] = 89,
    [23] = 97,
    [24] = 72,
    [25] = 42,
    [26] = 58,
    [27] = 69,
    [28] = 58,
    [29] = 58,
    [30] = 71,
    [31] = 97,
    [32] = 69,
    [33] = 72,
    [34] = 85,
    [35] = 97,
    [36] = 97,
    [37] = 98,
    [38] = 103,
    [39] = 103,
    [40] = 103,
    [41] = 103,
    [42] = 86,
    [43] = 105,
    [44] = 86,
    [45] = 103,
    [46] = 103,
    [47] = 106,
    [48] = 106,
    [49] = 111,
    [50] = 111,
    [51] = 112,
    [52] = 86,
    [53] = 71,
    [54] = 71,
    [55] = 114,
    [56] = 106,
    [57] = 106,
    [58] = 114,
    [59] = 114,
    [60] = 71,
    [61] = 106,
    [62] = 115,
    [63] = 106,
    [64] = 106,
    [65] = 106,
    [66] = 71,
    [67] = 106,
    [68] = 116,
    [69] = 116,
    [70] = 117,
    [71] = 111,
    [72] = 112,
    [73] = 106,
    [74] = 86,
    [75] = 71,
    [76] = 71,
    [77] = 118,
    [78] = 116,
    [79] = 116,
    [80] = 118,
    [81] = 118,
    [82] = 71,
    [83] = 116,
    [84] = 119,
    [85] = 116,
    [86] = 116,
    [87] = 116,
    [88] = 71,
    [89] = 116,
    [90] = 117,
    [91] = 116,
    [92] = 116,
    [93] = 71,
    [94] = 119,
    [95] = 116,
    [96] = 106,
    [97] = 117,
    [98] = 86,
    [99] = 116,
    [100] = 117,
    [101] = 71,
    [102] = 111,
    [103] = 111,
    [104] = 71,
    [105] = 115,
    [106] = 106,
    [107] = 71,
    [108] = 103,
    [109] = 103,
    [110] = 86,
    [111] = 103,
    [112] = 106,
    [113] = 71,
    [114] = 103,
    [115] = 103,
    [116] = 103,
    [117] = 120,
    [118] = 179,
    [119] = 180,
    [120] = 179,
    [121] = 117,
    [122] = 103,
    [123] = 120,
    [124] = 179,
    [125] = 180,
    [126] = 179,
    [127] = 117,
    [128] = 117,
    [129] = 103,
    [130] = 117,
    [131] = 103,
    [132] = 106,
    [133] = 71,
    [134] = 103,
    [135] = 186,
    [136] = 103,
    [137] = 98,
    [138] = 186,
    [139] = 103,
    [140] = 98,
    [141] = 71,
    [142] = 98,
    [143] = 98,
    [144] = 98,
    [145] = 69,
    [146] = 97,
    [147] = 193,
    [148] = 193,
    [149] = 85,
    [150] = 194,
    [151] = 85,
    [152] = 42,
    [153] = 58,
    [154] = 69,
    [155] = 58,
    [156] = 58,
    [157] = 71,
    [158] = 194,
    [159] = 69,
    [160] = 72,
    [161] = 85,
    [162] = 194,
    [163] = 194,
    [164] = 98,
    [165] = 69,
    [166] = 194,
    [167] = 193,
    [168] = 85,
    [169] = 194,
    [170] = 69,
    [171] = 195,
    [172] = 195,
    [173] = 195,
    [174] = 195,
    [175] = 86,
    [176] = 105,
    [177] = 86,
    [178] = 195,
    [179] = 195,
    [180] = 106,
    [181] = 71,
    [182] = 195,
    [183] = 195,
    [184] = 86,
    [185] = 195,
    [186] = 106,
    [187] = 71,
    [188] = 195,
    [189] = 195,
    [190] = 195,
    [191] = 120,
    [192] = 179,
    [193] = 180,
    [194] = 179,
    [195] = 117,
    [196] = 195,
    [197] = 195,
    [198] = 117,
    [199] = 195,
    [200] = 106,
    [201] = 71,
    [202] = 195,
    [203] = 186,
    [204] = 195,
    [205] = 69,
    [206] = 186,
    [207] = 195,
    [208] = 69,
    [209] = 71,
    [210] = 69,
    [211] = 69,
    [212] = 69,
    [213] = 196,
    [214] = 193,
    [215] = 85,
    [216] = 196,
    [217] = 201,
    [218] = 194,
    [219] = 204,
    [220] = 193,
    [221] = 85,
    [222] = 204,
    [223] = 71,
    [224] = 194,
    [225] = 69,
    [226] = 194,
    [227] = 210,
    [228] = 69,
    [229] = 210,
    [230] = 71,
    [231] = 211,
    [232] = 211,
    [233] = 214,
    [234] = 111,
    [235] = 215,
    [236] = 216,
    [237] = 86,
    [238] = 86,
    [239] = 86,
    [240] = 71,
    [241] = 71,
    [242] = 217,
    [243] = 211,
    [244] = 211,
    [245] = 218,
    [246] = 218,
    [247] = 71,
    [248] = 211,
    [249] = 219,
    [250] = 211,
    [251] = 112,
    [252] = 117,
    [253] = 211,
    [254] = 211,
    [255] = 211,
    [256] = 218,
    [257] = 211,
    [258] = 71,
    [259] = 211,
    [260] = 211,
    [261] = 220,
    [262] = 71,
    [263] = 71,
    [264] = 220,
    [265] = 220,
    [266] = 221,
    [267] = 221,
    [268] = 71,
    [269] = 220,
    [270] = 69,
    [271] = 194,
    [272] = 71,
    [273] = 69,
    [274] = 194,
    [275] = 210,
    [276] = 117,
    [277] = 222,
    [278] = 215,
    [279] = 86,
    [280] = 223,
    [281] = 210,
    [282] = 224,
    [283] = 210,
    [284] = 117,
    [285] = 117,
    [286] = 224,
    [287] = 117,
    [288] = 210,
    [289] = 71,
    [290] = 225,
    [291] = 225,
    [292] = 210,
    [293] = 69,
    [294] = 194,
    [295] = 215,
    [296] = 210,
    [297] = 224,
    [298] = 117,
    [299] = 210,
    [300] = 226,
    [301] = 69,
    [302] = 226,
    [303] = 69,
    [304] = 71,
    [305] = 219,
    [306] = 211,
    [307] = 220,
    [308] = 71,
    [309] = 69,
    [310] = 194,
    [311] = 87,
    [312] = 87,
    [313] = 69,
    [314] = 71,
    [315] = 69,
    [316] = 69,
    [317] = 227,
    [318] = 227,
    [319] = 71,
    [320] = 69,
    [321] = 210,
    [322] = 193,
    [323] = 85,
    [324] = 210,
    [325] = 194,
    [326] = 215,
    [327] = 210,
    [328] = 226,
    [329] = 69,
    [330] = 193,
    [331] = 97,
    [332] = 85,
    [333] = 69,
    [334] = 228,
    [335] = 193,
    [336] = 85,
    [337] = 228,
    [338] = 201,
    [339] = 97,
    [340] = 204,
    [341] = 71,
    [342] = 97,
    [343] = 69,
    [344] = 97,
    [345] = 69,
    [346] = 211,
    [347] = 216,
    [348] = 86,
    [349] = 211,
    [350] = 220,
    [351] = 71,
    [352] = 69,
    [353] = 97,
    [354] = 71,
    [355] = 69,
    [356] = 97,
    [357] = 117,
    [358] = 69,
    [359] = 97,
    [360] = 220,
    [361] = 71,
    [362] = 69,
    [363] = 97,
    [364] = 97,
    [365] = 89,
    [366] = 72,
    [367] = 229,
    [368] = 229,
    [369] = 111,
    [370] = 112,
    [371] = 86,
    [372] = 71,
    [373] = 71,
    [374] = 230,
    [375] = 229,
    [376] = 229,
    [377] = 230,
    [378] = 230,
    [379] = 71,
    [380] = 229,
    [381] = 231,
    [382] = 229,
    [383] = 229,
    [384] = 229,
    [385] = 71,
    [386] = 229,
    [387] = 117,
    [388] = 229,
    [389] = 229,
    [390] = 71,
    [391] = 231,
    [392] = 229,
    [393] = 87,
    [394] = 86,
    [395] = 89,
    [396] = 72,
    [397] = 229,
    [398] = 87,
    [399] = 89,
    [400] = 72,
    [401] = 40,
    [402] = 85,
    [403] = 98,
    [404] = 69,
    [405] = 40,
    [406] = 193,
    [407] = 85,
    [408] = 40,
    [409] = 69,
    [410] = 232,
    [411] = 193,
    [412] = 85,
    [413] = 232,
    [414] = 201,
    [415] = 40,
    [416] = 204,
    [417] = 71,
    [418] = 40,
    [419] = 69,
    [420] = 40,
    [421] = 69,
    [422] = 211,
    [423] = 216,
    [424] = 86,
    [425] = 211,
    [426] = 220,
    [427] = 71,
    [428] = 69,
    [429] = 40,
    [430] = 71,
    [431] = 69,
    [432] = 40,
    [433] = 117,
    [434] = 69,
    [435] = 40,
    [436] = 220,
    [437] = 71,
    [438] = 69,
    [439] = 40,
    [440] = 40,
    [441] = 1,
    [442] = 39,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static const TSParseAction *ts_parse_actions[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_program] = ACTIONS(SHIFT(1)),
        [sym__statement] = ACTIONS(SHIFT(2)),
        [sym__statements] = ACTIONS(SHIFT(3)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(4)),
        [sym_guard_statement] = ACTIONS(SHIFT(4)),
        [sym_switch_statement] = ACTIONS(SHIFT(4)),
        [sym__expression] = ACTIONS(SHIFT(4)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(5)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statements, 0)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [sym__declaration] = ACTIONS(SHIFT(4)),
        [sym_identifier] = ACTIONS(SHIFT(12)),
    },
    [1] = {
        [ts_builtin_sym_end] = ACTIONS(ACCEPT_INPUT()),
    },
    [2] = {
        [sym__statement] = ACTIONS(SHIFT(2)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(4)),
        [sym_guard_statement] = ACTIONS(SHIFT(4)),
        [sym_switch_statement] = ACTIONS(SHIFT(4)),
        [sym__expression] = ACTIONS(SHIFT(4)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(442)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [sym__declaration] = ACTIONS(SHIFT(4)),
        [sym_identifier] = ACTIONS(SHIFT(12)),
    },
    [3] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_program, 1)),
    },
    [4] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(441)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 1)),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statements, 1)),
    },
    [6] = {
        [sym__for_init] = ACTIONS(SHIFT(227)),
        [sym__for_condition] = ACTIONS(SHIFT(421)),
        [sym_variable_declaration] = ACTIONS(SHIFT(229)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(230)),
        [sym__pattern] = ACTIONS(SHIFT(422)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(232)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(232)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(232)),
        [sym_optional_pattern] = ACTIONS(SHIFT(232)),
        [sym_is_pattern] = ACTIONS(SHIFT(232)),
        [sym_as_pattern] = ACTIONS(SHIFT(232)),
        [sym__expression] = ACTIONS(SHIFT(233)),
        [sym__expression_list] = ACTIONS(SHIFT(229)),
        [sym__type_identifier] = ACTIONS(SHIFT(234)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(235)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(423)),
        [anon_sym_case] = ACTIONS(SHIFT(424)),
        [anon_sym_let] = ACTIONS(SHIFT(238)),
        [anon_sym_var] = ACTIONS(SHIFT(239)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(232)),
        [anon_sym_DOT] = ACTIONS(SHIFT(240)),
        [anon_sym_is] = ACTIONS(SHIFT(241)),
        [sym_identifier] = ACTIONS(SHIFT(242)),
    },
    [7] = {
        [sym__condition_clause] = ACTIONS(SHIFT(419)),
        [sym__condition] = ACTIONS(SHIFT(171)),
        [sym_availability_condition] = ACTIONS(SHIFT(172)),
        [sym_case_condition] = ACTIONS(SHIFT(173)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(173)),
        [sym__expression] = ACTIONS(SHIFT(174)),
        [anon_sym_case] = ACTIONS(SHIFT(175)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(176)),
        [anon_sym_let] = ACTIONS(SHIFT(177)),
        [anon_sym_var] = ACTIONS(SHIFT(177)),
        [sym_identifier] = ACTIONS(SHIFT(178)),
    },
    [8] = {
        [sym__code_block] = ACTIONS(SHIFT(416)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(220)),
    },
    [9] = {
        [sym__condition_clause] = ACTIONS(SHIFT(409)),
        [sym__condition] = ACTIONS(SHIFT(171)),
        [sym_availability_condition] = ACTIONS(SHIFT(172)),
        [sym_case_condition] = ACTIONS(SHIFT(173)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(173)),
        [sym__expression] = ACTIONS(SHIFT(174)),
        [anon_sym_case] = ACTIONS(SHIFT(175)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(176)),
        [anon_sym_let] = ACTIONS(SHIFT(177)),
        [anon_sym_var] = ACTIONS(SHIFT(177)),
        [sym_identifier] = ACTIONS(SHIFT(178)),
    },
    [10] = {
        [sym__condition_clause] = ACTIONS(SHIFT(403)),
        [sym__condition] = ACTIONS(SHIFT(38)),
        [sym_availability_condition] = ACTIONS(SHIFT(39)),
        [sym_case_condition] = ACTIONS(SHIFT(40)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(40)),
        [sym__expression] = ACTIONS(SHIFT(41)),
        [anon_sym_case] = ACTIONS(SHIFT(42)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(43)),
        [anon_sym_let] = ACTIONS(SHIFT(44)),
        [anon_sym_var] = ACTIONS(SHIFT(44)),
        [sym_identifier] = ACTIONS(SHIFT(45)),
    },
    [11] = {
        [sym__expression] = ACTIONS(SHIFT(13)),
        [sym_identifier] = ACTIONS(SHIFT(14)),
    },
    [12] = {
        [sym__statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [13] = {
        [anon_sym_LBRACE] = ACTIONS(SHIFT(15)),
    },
    [14] = {
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [15] = {
        [sym_case_statement] = ACTIONS(SHIFT(16)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(17)),
        [anon_sym_case] = ACTIONS(SHIFT(18)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(19)),
        [anon_sym_default] = ACTIONS(SHIFT(20)),
    },
    [16] = {
        [sym_case_statement] = ACTIONS(SHIFT(16)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(402)),
        [anon_sym_case] = ACTIONS(SHIFT(18)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 1)),
        [anon_sym_default] = ACTIONS(SHIFT(20)),
    },
    [17] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(401)),
    },
    [18] = {
        [sym__pattern] = ACTIONS(SHIFT(367)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(368)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(368)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(368)),
        [sym_optional_pattern] = ACTIONS(SHIFT(368)),
        [sym_is_pattern] = ACTIONS(SHIFT(368)),
        [sym_as_pattern] = ACTIONS(SHIFT(368)),
        [sym__expression] = ACTIONS(SHIFT(368)),
        [sym__type_identifier] = ACTIONS(SHIFT(369)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(370)),
        [anon_sym_let] = ACTIONS(SHIFT(371)),
        [anon_sym_var] = ACTIONS(SHIFT(371)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(368)),
        [anon_sym_DOT] = ACTIONS(SHIFT(372)),
        [anon_sym_is] = ACTIONS(SHIFT(373)),
        [sym_identifier] = ACTIONS(SHIFT(374)),
    },
    [19] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 4)),
    },
    [20] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(21)),
    },
    [21] = {
        [sym__statement] = ACTIONS(SHIFT(22)),
        [sym_for_statement] = ACTIONS(SHIFT(23)),
        [sym_for_in_statement] = ACTIONS(SHIFT(23)),
        [sym_while_statement] = ACTIONS(SHIFT(23)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(23)),
        [sym_if_statement] = ACTIONS(SHIFT(23)),
        [sym_guard_statement] = ACTIONS(SHIFT(23)),
        [sym_switch_statement] = ACTIONS(SHIFT(23)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [sym__expression] = ACTIONS(SHIFT(23)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(24)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_for] = ACTIONS(SHIFT(25)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_while] = ACTIONS(SHIFT(26)),
        [anon_sym_repeat] = ACTIONS(SHIFT(27)),
        [anon_sym_if] = ACTIONS(SHIFT(28)),
        [anon_sym_guard] = ACTIONS(SHIFT(29)),
        [anon_sym_switch] = ACTIONS(SHIFT(30)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [sym__declaration] = ACTIONS(SHIFT(23)),
        [sym_identifier] = ACTIONS(SHIFT(31)),
    },
    [22] = {
        [sym__statement] = ACTIONS(SHIFT(22)),
        [sym_for_statement] = ACTIONS(SHIFT(23)),
        [sym_for_in_statement] = ACTIONS(SHIFT(23)),
        [sym_while_statement] = ACTIONS(SHIFT(23)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(23)),
        [sym_if_statement] = ACTIONS(SHIFT(23)),
        [sym_guard_statement] = ACTIONS(SHIFT(23)),
        [sym_switch_statement] = ACTIONS(SHIFT(23)),
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [sym__expression] = ACTIONS(SHIFT(23)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(366)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [anon_sym_for] = ACTIONS(SHIFT(25)),
        [anon_sym_case] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [anon_sym_while] = ACTIONS(SHIFT(26)),
        [anon_sym_repeat] = ACTIONS(SHIFT(27)),
        [anon_sym_if] = ACTIONS(SHIFT(28)),
        [anon_sym_guard] = ACTIONS(SHIFT(29)),
        [anon_sym_switch] = ACTIONS(SHIFT(30)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [anon_sym_default] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [sym__declaration] = ACTIONS(SHIFT(23)),
        [sym_identifier] = ACTIONS(SHIFT(31)),
    },
    [23] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_case_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(365)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_case] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_default] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 1)),
    },
    [24] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 3)),
    },
    [25] = {
        [sym__for_init] = ACTIONS(SHIFT(227)),
        [sym__for_condition] = ACTIONS(SHIFT(345)),
        [sym_variable_declaration] = ACTIONS(SHIFT(229)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(230)),
        [sym__pattern] = ACTIONS(SHIFT(346)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(232)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(232)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(232)),
        [sym_optional_pattern] = ACTIONS(SHIFT(232)),
        [sym_is_pattern] = ACTIONS(SHIFT(232)),
        [sym_as_pattern] = ACTIONS(SHIFT(232)),
        [sym__expression] = ACTIONS(SHIFT(233)),
        [sym__expression_list] = ACTIONS(SHIFT(229)),
        [sym__type_identifier] = ACTIONS(SHIFT(234)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(235)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(347)),
        [anon_sym_case] = ACTIONS(SHIFT(348)),
        [anon_sym_let] = ACTIONS(SHIFT(238)),
        [anon_sym_var] = ACTIONS(SHIFT(239)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(232)),
        [anon_sym_DOT] = ACTIONS(SHIFT(240)),
        [anon_sym_is] = ACTIONS(SHIFT(241)),
        [sym_identifier] = ACTIONS(SHIFT(242)),
    },
    [26] = {
        [sym__condition_clause] = ACTIONS(SHIFT(343)),
        [sym__condition] = ACTIONS(SHIFT(171)),
        [sym_availability_condition] = ACTIONS(SHIFT(172)),
        [sym_case_condition] = ACTIONS(SHIFT(173)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(173)),
        [sym__expression] = ACTIONS(SHIFT(174)),
        [anon_sym_case] = ACTIONS(SHIFT(175)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(176)),
        [anon_sym_let] = ACTIONS(SHIFT(177)),
        [anon_sym_var] = ACTIONS(SHIFT(177)),
        [sym_identifier] = ACTIONS(SHIFT(178)),
    },
    [27] = {
        [sym__code_block] = ACTIONS(SHIFT(340)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(220)),
    },
    [28] = {
        [sym__condition_clause] = ACTIONS(SHIFT(333)),
        [sym__condition] = ACTIONS(SHIFT(171)),
        [sym_availability_condition] = ACTIONS(SHIFT(172)),
        [sym_case_condition] = ACTIONS(SHIFT(173)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(173)),
        [sym__expression] = ACTIONS(SHIFT(174)),
        [anon_sym_case] = ACTIONS(SHIFT(175)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(176)),
        [anon_sym_let] = ACTIONS(SHIFT(177)),
        [anon_sym_var] = ACTIONS(SHIFT(177)),
        [sym_identifier] = ACTIONS(SHIFT(178)),
    },
    [29] = {
        [sym__condition_clause] = ACTIONS(SHIFT(37)),
        [sym__condition] = ACTIONS(SHIFT(38)),
        [sym_availability_condition] = ACTIONS(SHIFT(39)),
        [sym_case_condition] = ACTIONS(SHIFT(40)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(40)),
        [sym__expression] = ACTIONS(SHIFT(41)),
        [anon_sym_case] = ACTIONS(SHIFT(42)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(43)),
        [anon_sym_let] = ACTIONS(SHIFT(44)),
        [anon_sym_var] = ACTIONS(SHIFT(44)),
        [sym_identifier] = ACTIONS(SHIFT(45)),
    },
    [30] = {
        [sym__expression] = ACTIONS(SHIFT(32)),
        [sym_identifier] = ACTIONS(SHIFT(14)),
    },
    [31] = {
        [sym__statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_case_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_case] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_default] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [32] = {
        [anon_sym_LBRACE] = ACTIONS(SHIFT(33)),
    },
    [33] = {
        [sym_case_statement] = ACTIONS(SHIFT(16)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(34)),
        [anon_sym_case] = ACTIONS(SHIFT(18)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(35)),
        [anon_sym_default] = ACTIONS(SHIFT(20)),
    },
    [34] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(36)),
    },
    [35] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 4)),
    },
    [36] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 5)),
    },
    [37] = {
        [anon_sym_else] = ACTIONS(SHIFT(145)),
    },
    [38] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(144)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(138)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [39] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1), SHIFT(141)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [40] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [41] = {
        [anon_sym_COMMA] = ACTIONS(SHIFT(135)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [42] = {
        [sym__pattern] = ACTIONS(SHIFT(132)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(48)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(48)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(48)),
        [sym_optional_pattern] = ACTIONS(SHIFT(48)),
        [sym_is_pattern] = ACTIONS(SHIFT(48)),
        [sym_as_pattern] = ACTIONS(SHIFT(48)),
        [sym__expression] = ACTIONS(SHIFT(48)),
        [sym__type_identifier] = ACTIONS(SHIFT(49)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(51)),
        [anon_sym_let] = ACTIONS(SHIFT(52)),
        [anon_sym_var] = ACTIONS(SHIFT(52)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(48)),
        [anon_sym_DOT] = ACTIONS(SHIFT(53)),
        [anon_sym_is] = ACTIONS(SHIFT(54)),
        [sym_identifier] = ACTIONS(SHIFT(55)),
    },
    [43] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(117)),
    },
    [44] = {
        [sym_optional_binding] = ACTIONS(SHIFT(46)),
        [sym__pattern] = ACTIONS(SHIFT(47)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(48)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(48)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(48)),
        [sym_optional_pattern] = ACTIONS(SHIFT(48)),
        [sym_is_pattern] = ACTIONS(SHIFT(48)),
        [sym_as_pattern] = ACTIONS(SHIFT(48)),
        [sym__expression] = ACTIONS(SHIFT(48)),
        [sym__type_identifier] = ACTIONS(SHIFT(49)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(51)),
        [anon_sym_let] = ACTIONS(SHIFT(52)),
        [anon_sym_var] = ACTIONS(SHIFT(52)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(48)),
        [anon_sym_DOT] = ACTIONS(SHIFT(53)),
        [anon_sym_is] = ACTIONS(SHIFT(54)),
        [sym_identifier] = ACTIONS(SHIFT(55)),
    },
    [45] = {
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [46] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(110)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
    },
    [47] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(107)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(65)),
        [anon_sym_as] = ACTIONS(SHIFT(66)),
    },
    [48] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [49] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(104)),
    },
    [50] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(101)),
    },
    [51] = {
        [sym__pattern] = ACTIONS(SHIFT(68)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(69)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(69)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(70)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(69)),
        [sym_optional_pattern] = ACTIONS(SHIFT(69)),
        [sym_is_pattern] = ACTIONS(SHIFT(69)),
        [sym_as_pattern] = ACTIONS(SHIFT(69)),
        [sym__expression] = ACTIONS(SHIFT(69)),
        [sym__type_identifier] = ACTIONS(SHIFT(71)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(72)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(73)),
        [anon_sym_let] = ACTIONS(SHIFT(74)),
        [anon_sym_var] = ACTIONS(SHIFT(74)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(69)),
        [anon_sym_DOT] = ACTIONS(SHIFT(75)),
        [anon_sym_is] = ACTIONS(SHIFT(76)),
        [sym_identifier] = ACTIONS(SHIFT(77)),
    },
    [52] = {
        [sym__pattern] = ACTIONS(SHIFT(64)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(48)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(48)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(48)),
        [sym_optional_pattern] = ACTIONS(SHIFT(48)),
        [sym_is_pattern] = ACTIONS(SHIFT(48)),
        [sym_as_pattern] = ACTIONS(SHIFT(48)),
        [sym__expression] = ACTIONS(SHIFT(48)),
        [sym__type_identifier] = ACTIONS(SHIFT(49)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(51)),
        [anon_sym_let] = ACTIONS(SHIFT(52)),
        [anon_sym_var] = ACTIONS(SHIFT(52)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(48)),
        [anon_sym_DOT] = ACTIONS(SHIFT(53)),
        [anon_sym_is] = ACTIONS(SHIFT(54)),
        [sym_identifier] = ACTIONS(SHIFT(55)),
    },
    [53] = {
        [sym_identifier] = ACTIONS(SHIFT(62)),
    },
    [54] = {
        [sym_type] = ACTIONS(SHIFT(56)),
        [sym__type_identifier] = ACTIONS(SHIFT(57)),
        [sym__type_name] = ACTIONS(SHIFT(58)),
        [sym_identifier] = ACTIONS(SHIFT(59)),
    },
    [55] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [56] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [57] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [58] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(60)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [59] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [60] = {
        [sym__type_identifier] = ACTIONS(SHIFT(61)),
        [sym__type_name] = ACTIONS(SHIFT(58)),
        [sym_identifier] = ACTIONS(SHIFT(59)),
    },
    [61] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [62] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(63)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(51)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [63] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [64] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(65)),
        [anon_sym_as] = ACTIONS(SHIFT(66)),
    },
    [65] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [66] = {
        [sym_type] = ACTIONS(SHIFT(67)),
        [sym__type_identifier] = ACTIONS(SHIFT(57)),
        [sym__type_name] = ACTIONS(SHIFT(58)),
        [sym_identifier] = ACTIONS(SHIFT(59)),
    },
    [67] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [68] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(97)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(98)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(87)),
        [anon_sym_as] = ACTIONS(SHIFT(88)),
    },
    [69] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [70] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(96)),
    },
    [71] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(93)),
    },
    [72] = {
        [sym__pattern] = ACTIONS(SHIFT(68)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(69)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(69)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(90)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(69)),
        [sym_optional_pattern] = ACTIONS(SHIFT(69)),
        [sym_is_pattern] = ACTIONS(SHIFT(69)),
        [sym_as_pattern] = ACTIONS(SHIFT(69)),
        [sym__expression] = ACTIONS(SHIFT(69)),
        [sym__type_identifier] = ACTIONS(SHIFT(71)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(72)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(91)),
        [anon_sym_let] = ACTIONS(SHIFT(74)),
        [anon_sym_var] = ACTIONS(SHIFT(74)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(69)),
        [anon_sym_DOT] = ACTIONS(SHIFT(75)),
        [anon_sym_is] = ACTIONS(SHIFT(76)),
        [sym_identifier] = ACTIONS(SHIFT(77)),
    },
    [73] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [74] = {
        [sym__pattern] = ACTIONS(SHIFT(86)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(69)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(69)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(69)),
        [sym_optional_pattern] = ACTIONS(SHIFT(69)),
        [sym_is_pattern] = ACTIONS(SHIFT(69)),
        [sym_as_pattern] = ACTIONS(SHIFT(69)),
        [sym__expression] = ACTIONS(SHIFT(69)),
        [sym__type_identifier] = ACTIONS(SHIFT(71)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(72)),
        [anon_sym_let] = ACTIONS(SHIFT(74)),
        [anon_sym_var] = ACTIONS(SHIFT(74)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(69)),
        [anon_sym_DOT] = ACTIONS(SHIFT(75)),
        [anon_sym_is] = ACTIONS(SHIFT(76)),
        [sym_identifier] = ACTIONS(SHIFT(77)),
    },
    [75] = {
        [sym_identifier] = ACTIONS(SHIFT(84)),
    },
    [76] = {
        [sym_type] = ACTIONS(SHIFT(78)),
        [sym__type_identifier] = ACTIONS(SHIFT(79)),
        [sym__type_name] = ACTIONS(SHIFT(80)),
        [sym_identifier] = ACTIONS(SHIFT(81)),
    },
    [77] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [78] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [79] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [80] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(82)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [81] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [82] = {
        [sym__type_identifier] = ACTIONS(SHIFT(83)),
        [sym__type_name] = ACTIONS(SHIFT(80)),
        [sym_identifier] = ACTIONS(SHIFT(81)),
    },
    [83] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [84] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(85)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(72)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [85] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [86] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(87)),
        [anon_sym_as] = ACTIONS(SHIFT(88)),
    },
    [87] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [88] = {
        [sym_type] = ACTIONS(SHIFT(89)),
        [sym__type_identifier] = ACTIONS(SHIFT(79)),
        [sym__type_name] = ACTIONS(SHIFT(80)),
        [sym_identifier] = ACTIONS(SHIFT(81)),
    },
    [89] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [90] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(92)),
    },
    [91] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [92] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [93] = {
        [sym_identifier] = ACTIONS(SHIFT(94)),
    },
    [94] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(95)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(72)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [95] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [96] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [97] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 2)),
    },
    [98] = {
        [sym__pattern] = ACTIONS(SHIFT(99)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(69)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(69)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(69)),
        [sym_optional_pattern] = ACTIONS(SHIFT(69)),
        [sym_is_pattern] = ACTIONS(SHIFT(69)),
        [sym_as_pattern] = ACTIONS(SHIFT(69)),
        [sym__expression] = ACTIONS(SHIFT(69)),
        [sym__type_identifier] = ACTIONS(SHIFT(71)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(72)),
        [anon_sym_let] = ACTIONS(SHIFT(74)),
        [anon_sym_var] = ACTIONS(SHIFT(74)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(69)),
        [anon_sym_DOT] = ACTIONS(SHIFT(75)),
        [anon_sym_is] = ACTIONS(SHIFT(76)),
        [sym_identifier] = ACTIONS(SHIFT(77)),
    },
    [99] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(100)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(98)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(87)),
        [anon_sym_as] = ACTIONS(SHIFT(88)),
    },
    [100] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [101] = {
        [sym__type_identifier] = ACTIONS(SHIFT(102)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [sym_identifier] = ACTIONS(SHIFT(103)),
    },
    [102] = {
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [103] = {
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [104] = {
        [sym_identifier] = ACTIONS(SHIFT(105)),
    },
    [105] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(106)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(51)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [106] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [107] = {
        [sym__expression] = ACTIONS(SHIFT(108)),
        [sym_identifier] = ACTIONS(SHIFT(109)),
    },
    [108] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [109] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [110] = {
        [sym_optional_binding] = ACTIONS(SHIFT(111)),
        [sym__pattern] = ACTIONS(SHIFT(112)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(48)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(48)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(48)),
        [sym_optional_pattern] = ACTIONS(SHIFT(48)),
        [sym_is_pattern] = ACTIONS(SHIFT(48)),
        [sym_as_pattern] = ACTIONS(SHIFT(48)),
        [sym__expression] = ACTIONS(SHIFT(48)),
        [sym__type_identifier] = ACTIONS(SHIFT(49)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(51)),
        [anon_sym_let] = ACTIONS(SHIFT(52)),
        [anon_sym_var] = ACTIONS(SHIFT(52)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(48)),
        [anon_sym_DOT] = ACTIONS(SHIFT(53)),
        [anon_sym_is] = ACTIONS(SHIFT(54)),
        [sym_identifier] = ACTIONS(SHIFT(55)),
    },
    [111] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(SHIFT(116)),
        [anon_sym_COMMA] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
    },
    [112] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(113)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(65)),
        [anon_sym_as] = ACTIONS(SHIFT(66)),
    },
    [113] = {
        [sym__expression] = ACTIONS(SHIFT(114)),
        [sym_identifier] = ACTIONS(SHIFT(115)),
    },
    [114] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [115] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [116] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
    },
    [117] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(118)),
        [anon_sym_iOS] = ACTIONS(SHIFT(119)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(119)),
        [anon_sym_OSX] = ACTIONS(SHIFT(119)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(119)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(119)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(119)),
    },
    [118] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(130)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(131)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(123)),
    },
    [119] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(120)),
    },
    [120] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(121)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(122)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(123)),
    },
    [121] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(129)),
    },
    [122] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 5)),
    },
    [123] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(124)),
        [anon_sym_iOS] = ACTIONS(SHIFT(125)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(125)),
        [anon_sym_OSX] = ACTIONS(SHIFT(125)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(125)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(125)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(125)),
    },
    [124] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(128)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(123)),
    },
    [125] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(126)),
    },
    [126] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(127)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 3)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(123)),
    },
    [127] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 4)),
    },
    [128] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 3)),
    },
    [129] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 6)),
    },
    [130] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(122)),
    },
    [131] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 4)),
    },
    [132] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(133)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(65)),
        [anon_sym_as] = ACTIONS(SHIFT(66)),
    },
    [133] = {
        [sym__expression] = ACTIONS(SHIFT(134)),
        [sym_identifier] = ACTIONS(SHIFT(109)),
    },
    [134] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_case_condition, 4)),
    },
    [135] = {
        [sym__condition] = ACTIONS(SHIFT(136)),
        [sym_availability_condition] = ACTIONS(SHIFT(40)),
        [sym_case_condition] = ACTIONS(SHIFT(40)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(40)),
        [anon_sym_case] = ACTIONS(SHIFT(42)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(43)),
        [anon_sym_let] = ACTIONS(SHIFT(44)),
        [anon_sym_var] = ACTIONS(SHIFT(44)),
    },
    [136] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(137)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(138)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [137] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 4)),
    },
    [138] = {
        [sym__condition] = ACTIONS(SHIFT(139)),
        [sym_availability_condition] = ACTIONS(SHIFT(40)),
        [sym_case_condition] = ACTIONS(SHIFT(40)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(40)),
        [anon_sym_case] = ACTIONS(SHIFT(42)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(43)),
        [anon_sym_let] = ACTIONS(SHIFT(44)),
        [anon_sym_var] = ACTIONS(SHIFT(44)),
    },
    [139] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(140)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(138)),
        [anon_sym_else] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
    },
    [140] = {
        [anon_sym_else] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
    },
    [141] = {
        [sym__expression] = ACTIONS(SHIFT(142)),
        [sym_identifier] = ACTIONS(SHIFT(143)),
    },
    [142] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [143] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [144] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 2)),
    },
    [145] = {
        [sym__code_block] = ACTIONS(SHIFT(146)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(147)),
    },
    [146] = {
        [sym__statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_guard_statement, 4)),
    },
    [147] = {
        [sym__statement] = ACTIONS(SHIFT(148)),
        [sym__statements] = ACTIONS(SHIFT(149)),
        [sym_for_statement] = ACTIONS(SHIFT(150)),
        [sym_for_in_statement] = ACTIONS(SHIFT(150)),
        [sym_while_statement] = ACTIONS(SHIFT(150)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(150)),
        [sym_if_statement] = ACTIONS(SHIFT(150)),
        [sym_guard_statement] = ACTIONS(SHIFT(150)),
        [sym_switch_statement] = ACTIONS(SHIFT(150)),
        [sym__expression] = ACTIONS(SHIFT(150)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(151)),
        [anon_sym_for] = ACTIONS(SHIFT(152)),
        [anon_sym_while] = ACTIONS(SHIFT(153)),
        [anon_sym_repeat] = ACTIONS(SHIFT(154)),
        [anon_sym_if] = ACTIONS(SHIFT(155)),
        [anon_sym_guard] = ACTIONS(SHIFT(156)),
        [anon_sym_switch] = ACTIONS(SHIFT(157)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(150)),
        [sym_identifier] = ACTIONS(SHIFT(158)),
    },
    [148] = {
        [sym__statement] = ACTIONS(SHIFT(148)),
        [sym_for_statement] = ACTIONS(SHIFT(150)),
        [sym_for_in_statement] = ACTIONS(SHIFT(150)),
        [sym_while_statement] = ACTIONS(SHIFT(150)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(150)),
        [sym_if_statement] = ACTIONS(SHIFT(150)),
        [sym_guard_statement] = ACTIONS(SHIFT(150)),
        [sym_switch_statement] = ACTIONS(SHIFT(150)),
        [sym__expression] = ACTIONS(SHIFT(150)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(332)),
        [anon_sym_for] = ACTIONS(SHIFT(152)),
        [anon_sym_while] = ACTIONS(SHIFT(153)),
        [anon_sym_repeat] = ACTIONS(SHIFT(154)),
        [anon_sym_if] = ACTIONS(SHIFT(155)),
        [anon_sym_guard] = ACTIONS(SHIFT(156)),
        [anon_sym_switch] = ACTIONS(SHIFT(157)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [sym__declaration] = ACTIONS(SHIFT(150)),
        [sym_identifier] = ACTIONS(SHIFT(158)),
    },
    [149] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(331)),
    },
    [150] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(330)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 1)),
    },
    [151] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 1)),
    },
    [152] = {
        [sym__for_init] = ACTIONS(SHIFT(227)),
        [sym__for_condition] = ACTIONS(SHIFT(228)),
        [sym_variable_declaration] = ACTIONS(SHIFT(229)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(230)),
        [sym__pattern] = ACTIONS(SHIFT(231)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(232)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(232)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(232)),
        [sym_optional_pattern] = ACTIONS(SHIFT(232)),
        [sym_is_pattern] = ACTIONS(SHIFT(232)),
        [sym_as_pattern] = ACTIONS(SHIFT(232)),
        [sym__expression] = ACTIONS(SHIFT(233)),
        [sym__expression_list] = ACTIONS(SHIFT(229)),
        [sym__type_identifier] = ACTIONS(SHIFT(234)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(235)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(236)),
        [anon_sym_case] = ACTIONS(SHIFT(237)),
        [anon_sym_let] = ACTIONS(SHIFT(238)),
        [anon_sym_var] = ACTIONS(SHIFT(239)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(232)),
        [anon_sym_DOT] = ACTIONS(SHIFT(240)),
        [anon_sym_is] = ACTIONS(SHIFT(241)),
        [sym_identifier] = ACTIONS(SHIFT(242)),
    },
    [153] = {
        [sym__condition_clause] = ACTIONS(SHIFT(225)),
        [sym__condition] = ACTIONS(SHIFT(171)),
        [sym_availability_condition] = ACTIONS(SHIFT(172)),
        [sym_case_condition] = ACTIONS(SHIFT(173)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(173)),
        [sym__expression] = ACTIONS(SHIFT(174)),
        [anon_sym_case] = ACTIONS(SHIFT(175)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(176)),
        [anon_sym_let] = ACTIONS(SHIFT(177)),
        [anon_sym_var] = ACTIONS(SHIFT(177)),
        [sym_identifier] = ACTIONS(SHIFT(178)),
    },
    [154] = {
        [sym__code_block] = ACTIONS(SHIFT(219)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(220)),
    },
    [155] = {
        [sym__condition_clause] = ACTIONS(SHIFT(170)),
        [sym__condition] = ACTIONS(SHIFT(171)),
        [sym_availability_condition] = ACTIONS(SHIFT(172)),
        [sym_case_condition] = ACTIONS(SHIFT(173)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(173)),
        [sym__expression] = ACTIONS(SHIFT(174)),
        [anon_sym_case] = ACTIONS(SHIFT(175)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(176)),
        [anon_sym_let] = ACTIONS(SHIFT(177)),
        [anon_sym_var] = ACTIONS(SHIFT(177)),
        [sym_identifier] = ACTIONS(SHIFT(178)),
    },
    [156] = {
        [sym__condition_clause] = ACTIONS(SHIFT(164)),
        [sym__condition] = ACTIONS(SHIFT(38)),
        [sym_availability_condition] = ACTIONS(SHIFT(39)),
        [sym_case_condition] = ACTIONS(SHIFT(40)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(40)),
        [sym__expression] = ACTIONS(SHIFT(41)),
        [anon_sym_case] = ACTIONS(SHIFT(42)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(43)),
        [anon_sym_let] = ACTIONS(SHIFT(44)),
        [anon_sym_var] = ACTIONS(SHIFT(44)),
        [sym_identifier] = ACTIONS(SHIFT(45)),
    },
    [157] = {
        [sym__expression] = ACTIONS(SHIFT(159)),
        [sym_identifier] = ACTIONS(SHIFT(14)),
    },
    [158] = {
        [sym__statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [159] = {
        [anon_sym_LBRACE] = ACTIONS(SHIFT(160)),
    },
    [160] = {
        [sym_case_statement] = ACTIONS(SHIFT(16)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(161)),
        [anon_sym_case] = ACTIONS(SHIFT(18)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(162)),
        [anon_sym_default] = ACTIONS(SHIFT(20)),
    },
    [161] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(163)),
    },
    [162] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 4)),
    },
    [163] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 5)),
    },
    [164] = {
        [anon_sym_else] = ACTIONS(SHIFT(165)),
    },
    [165] = {
        [sym__code_block] = ACTIONS(SHIFT(166)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(167)),
    },
    [166] = {
        [sym__statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_guard_statement, 4)),
    },
    [167] = {
        [sym__statement] = ACTIONS(SHIFT(148)),
        [sym__statements] = ACTIONS(SHIFT(168)),
        [sym_for_statement] = ACTIONS(SHIFT(150)),
        [sym_for_in_statement] = ACTIONS(SHIFT(150)),
        [sym_while_statement] = ACTIONS(SHIFT(150)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(150)),
        [sym_if_statement] = ACTIONS(SHIFT(150)),
        [sym_guard_statement] = ACTIONS(SHIFT(150)),
        [sym_switch_statement] = ACTIONS(SHIFT(150)),
        [sym__expression] = ACTIONS(SHIFT(150)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(151)),
        [anon_sym_for] = ACTIONS(SHIFT(152)),
        [anon_sym_while] = ACTIONS(SHIFT(153)),
        [anon_sym_repeat] = ACTIONS(SHIFT(154)),
        [anon_sym_if] = ACTIONS(SHIFT(155)),
        [anon_sym_guard] = ACTIONS(SHIFT(156)),
        [anon_sym_switch] = ACTIONS(SHIFT(157)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(150)),
        [sym_identifier] = ACTIONS(SHIFT(158)),
    },
    [168] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(169)),
    },
    [169] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [170] = {
        [sym__code_block] = ACTIONS(SHIFT(213)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(214)),
    },
    [171] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(212)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(206)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [172] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1), SHIFT(209)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [173] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [174] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(203)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [175] = {
        [sym__pattern] = ACTIONS(SHIFT(200)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(48)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(48)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(48)),
        [sym_optional_pattern] = ACTIONS(SHIFT(48)),
        [sym_is_pattern] = ACTIONS(SHIFT(48)),
        [sym_as_pattern] = ACTIONS(SHIFT(48)),
        [sym__expression] = ACTIONS(SHIFT(48)),
        [sym__type_identifier] = ACTIONS(SHIFT(49)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(51)),
        [anon_sym_let] = ACTIONS(SHIFT(52)),
        [anon_sym_var] = ACTIONS(SHIFT(52)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(48)),
        [anon_sym_DOT] = ACTIONS(SHIFT(53)),
        [anon_sym_is] = ACTIONS(SHIFT(54)),
        [sym_identifier] = ACTIONS(SHIFT(55)),
    },
    [176] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(191)),
    },
    [177] = {
        [sym_optional_binding] = ACTIONS(SHIFT(179)),
        [sym__pattern] = ACTIONS(SHIFT(180)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(48)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(48)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(48)),
        [sym_optional_pattern] = ACTIONS(SHIFT(48)),
        [sym_is_pattern] = ACTIONS(SHIFT(48)),
        [sym_as_pattern] = ACTIONS(SHIFT(48)),
        [sym__expression] = ACTIONS(SHIFT(48)),
        [sym__type_identifier] = ACTIONS(SHIFT(49)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(51)),
        [anon_sym_let] = ACTIONS(SHIFT(52)),
        [anon_sym_var] = ACTIONS(SHIFT(52)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(48)),
        [anon_sym_DOT] = ACTIONS(SHIFT(53)),
        [anon_sym_is] = ACTIONS(SHIFT(54)),
        [sym_identifier] = ACTIONS(SHIFT(55)),
    },
    [178] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [179] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(184)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
    },
    [180] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(181)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(65)),
        [anon_sym_as] = ACTIONS(SHIFT(66)),
    },
    [181] = {
        [sym__expression] = ACTIONS(SHIFT(182)),
        [sym_identifier] = ACTIONS(SHIFT(183)),
    },
    [182] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [183] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [184] = {
        [sym_optional_binding] = ACTIONS(SHIFT(185)),
        [sym__pattern] = ACTIONS(SHIFT(186)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(48)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(48)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(48)),
        [sym_optional_pattern] = ACTIONS(SHIFT(48)),
        [sym_is_pattern] = ACTIONS(SHIFT(48)),
        [sym_as_pattern] = ACTIONS(SHIFT(48)),
        [sym__expression] = ACTIONS(SHIFT(48)),
        [sym__type_identifier] = ACTIONS(SHIFT(49)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(51)),
        [anon_sym_let] = ACTIONS(SHIFT(52)),
        [anon_sym_var] = ACTIONS(SHIFT(52)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(48)),
        [anon_sym_DOT] = ACTIONS(SHIFT(53)),
        [anon_sym_is] = ACTIONS(SHIFT(54)),
        [sym_identifier] = ACTIONS(SHIFT(55)),
    },
    [185] = {
        [sym__code_block] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(SHIFT(190)),
        [anon_sym_COMMA] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
    },
    [186] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(187)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(65)),
        [anon_sym_as] = ACTIONS(SHIFT(66)),
    },
    [187] = {
        [sym__expression] = ACTIONS(SHIFT(188)),
        [sym_identifier] = ACTIONS(SHIFT(189)),
    },
    [188] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [189] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [190] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
    },
    [191] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(192)),
        [anon_sym_iOS] = ACTIONS(SHIFT(193)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(193)),
        [anon_sym_OSX] = ACTIONS(SHIFT(193)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(193)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(193)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(193)),
    },
    [192] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(198)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(199)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(123)),
    },
    [193] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(194)),
    },
    [194] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(195)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(196)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(123)),
    },
    [195] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(197)),
    },
    [196] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 5)),
    },
    [197] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 6)),
    },
    [198] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(196)),
    },
    [199] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 4)),
    },
    [200] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(201)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(65)),
        [anon_sym_as] = ACTIONS(SHIFT(66)),
    },
    [201] = {
        [sym__expression] = ACTIONS(SHIFT(202)),
        [sym_identifier] = ACTIONS(SHIFT(183)),
    },
    [202] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_case_condition, 4)),
    },
    [203] = {
        [sym__condition] = ACTIONS(SHIFT(204)),
        [sym_availability_condition] = ACTIONS(SHIFT(173)),
        [sym_case_condition] = ACTIONS(SHIFT(173)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(173)),
        [anon_sym_case] = ACTIONS(SHIFT(175)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(176)),
        [anon_sym_let] = ACTIONS(SHIFT(177)),
        [anon_sym_var] = ACTIONS(SHIFT(177)),
    },
    [204] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(205)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(206)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [205] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 4)),
    },
    [206] = {
        [sym__condition] = ACTIONS(SHIFT(207)),
        [sym_availability_condition] = ACTIONS(SHIFT(173)),
        [sym_case_condition] = ACTIONS(SHIFT(173)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(173)),
        [anon_sym_case] = ACTIONS(SHIFT(175)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(176)),
        [anon_sym_let] = ACTIONS(SHIFT(177)),
        [anon_sym_var] = ACTIONS(SHIFT(177)),
    },
    [207] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(208)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(206)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
    },
    [208] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
    },
    [209] = {
        [sym__expression] = ACTIONS(SHIFT(210)),
        [sym_identifier] = ACTIONS(SHIFT(211)),
    },
    [210] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [211] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [212] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 2)),
    },
    [213] = {
        [sym__statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_else] = ACTIONS(SHIFT(217)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_if_statement, 3)),
    },
    [214] = {
        [sym__statement] = ACTIONS(SHIFT(148)),
        [sym__statements] = ACTIONS(SHIFT(215)),
        [sym_for_statement] = ACTIONS(SHIFT(150)),
        [sym_for_in_statement] = ACTIONS(SHIFT(150)),
        [sym_while_statement] = ACTIONS(SHIFT(150)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(150)),
        [sym_if_statement] = ACTIONS(SHIFT(150)),
        [sym_guard_statement] = ACTIONS(SHIFT(150)),
        [sym_switch_statement] = ACTIONS(SHIFT(150)),
        [sym__expression] = ACTIONS(SHIFT(150)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(151)),
        [anon_sym_for] = ACTIONS(SHIFT(152)),
        [anon_sym_while] = ACTIONS(SHIFT(153)),
        [anon_sym_repeat] = ACTIONS(SHIFT(154)),
        [anon_sym_if] = ACTIONS(SHIFT(155)),
        [anon_sym_guard] = ACTIONS(SHIFT(156)),
        [anon_sym_switch] = ACTIONS(SHIFT(157)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(150)),
        [sym_identifier] = ACTIONS(SHIFT(158)),
    },
    [215] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(216)),
    },
    [216] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [217] = {
        [sym_if_statement] = ACTIONS(SHIFT(218)),
        [sym__code_block] = ACTIONS(SHIFT(218)),
        [anon_sym_if] = ACTIONS(SHIFT(155)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(167)),
    },
    [218] = {
        [sym__statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_if_statement, 5)),
    },
    [219] = {
        [anon_sym_while] = ACTIONS(SHIFT(223)),
    },
    [220] = {
        [sym__statement] = ACTIONS(SHIFT(148)),
        [sym__statements] = ACTIONS(SHIFT(221)),
        [sym_for_statement] = ACTIONS(SHIFT(150)),
        [sym_for_in_statement] = ACTIONS(SHIFT(150)),
        [sym_while_statement] = ACTIONS(SHIFT(150)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(150)),
        [sym_if_statement] = ACTIONS(SHIFT(150)),
        [sym_guard_statement] = ACTIONS(SHIFT(150)),
        [sym_switch_statement] = ACTIONS(SHIFT(150)),
        [sym__expression] = ACTIONS(SHIFT(150)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(151)),
        [anon_sym_for] = ACTIONS(SHIFT(152)),
        [anon_sym_while] = ACTIONS(SHIFT(153)),
        [anon_sym_repeat] = ACTIONS(SHIFT(154)),
        [anon_sym_if] = ACTIONS(SHIFT(155)),
        [anon_sym_guard] = ACTIONS(SHIFT(156)),
        [anon_sym_switch] = ACTIONS(SHIFT(157)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(150)),
        [sym_identifier] = ACTIONS(SHIFT(158)),
    },
    [221] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(222)),
    },
    [222] = {
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [223] = {
        [sym__expression] = ACTIONS(SHIFT(224)),
        [sym_identifier] = ACTIONS(SHIFT(158)),
    },
    [224] = {
        [sym__statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
    },
    [225] = {
        [sym__code_block] = ACTIONS(SHIFT(226)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(167)),
    },
    [226] = {
        [sym__statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_while_statement, 3)),
    },
    [227] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(326)),
    },
    [228] = {
        [sym__code_block] = ACTIONS(SHIFT(325)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(167)),
    },
    [229] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__for_init, 1)),
    },
    [230] = {
        [sym__variable_name] = ACTIONS(SHIFT(311)),
        [sym_identifier] = ACTIONS(SHIFT(312)),
    },
    [231] = {
        [sym__type_annotation] = ACTIONS(SHIFT(307)),
        [anon_sym_in] = ACTIONS(SHIFT(308)),
        [anon_sym_COLON] = ACTIONS(SHIFT(263)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(257)),
        [anon_sym_as] = ACTIONS(SHIFT(258)),
    },
    [232] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [233] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(288)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(289)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [234] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(304)),
    },
    [235] = {
        [sym__expression] = ACTIONS(SHIFT(299)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(300)),
        [sym_identifier] = ACTIONS(SHIFT(283)),
    },
    [236] = {
        [sym__for_init] = ACTIONS(SHIFT(275)),
        [sym__for_condition] = ACTIONS(SHIFT(276)),
        [sym_variable_declaration] = ACTIONS(SHIFT(229)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(230)),
        [sym__pattern] = ACTIONS(SHIFT(68)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(69)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(69)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(252)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(69)),
        [sym_optional_pattern] = ACTIONS(SHIFT(69)),
        [sym_is_pattern] = ACTIONS(SHIFT(69)),
        [sym_as_pattern] = ACTIONS(SHIFT(69)),
        [sym__expression] = ACTIONS(SHIFT(277)),
        [sym__expression_list] = ACTIONS(SHIFT(229)),
        [sym__type_identifier] = ACTIONS(SHIFT(71)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(278)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(72)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(253)),
        [anon_sym_let] = ACTIONS(SHIFT(74)),
        [anon_sym_var] = ACTIONS(SHIFT(279)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(69)),
        [anon_sym_DOT] = ACTIONS(SHIFT(75)),
        [anon_sym_is] = ACTIONS(SHIFT(76)),
        [sym_identifier] = ACTIONS(SHIFT(280)),
    },
    [237] = {
        [sym__pattern] = ACTIONS(SHIFT(260)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(232)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(232)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(232)),
        [sym_optional_pattern] = ACTIONS(SHIFT(232)),
        [sym_is_pattern] = ACTIONS(SHIFT(232)),
        [sym_as_pattern] = ACTIONS(SHIFT(232)),
        [sym__expression] = ACTIONS(SHIFT(232)),
        [sym__type_identifier] = ACTIONS(SHIFT(234)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(251)),
        [anon_sym_let] = ACTIONS(SHIFT(238)),
        [anon_sym_var] = ACTIONS(SHIFT(238)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(232)),
        [anon_sym_DOT] = ACTIONS(SHIFT(240)),
        [anon_sym_is] = ACTIONS(SHIFT(241)),
        [sym_identifier] = ACTIONS(SHIFT(256)),
    },
    [238] = {
        [sym__pattern] = ACTIONS(SHIFT(255)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(232)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(232)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(232)),
        [sym_optional_pattern] = ACTIONS(SHIFT(232)),
        [sym_is_pattern] = ACTIONS(SHIFT(232)),
        [sym_as_pattern] = ACTIONS(SHIFT(232)),
        [sym__expression] = ACTIONS(SHIFT(232)),
        [sym__type_identifier] = ACTIONS(SHIFT(234)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(251)),
        [anon_sym_let] = ACTIONS(SHIFT(238)),
        [anon_sym_var] = ACTIONS(SHIFT(238)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(232)),
        [anon_sym_DOT] = ACTIONS(SHIFT(240)),
        [anon_sym_is] = ACTIONS(SHIFT(241)),
        [sym_identifier] = ACTIONS(SHIFT(256)),
    },
    [239] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(255)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(232)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(232)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(232)),
        [sym_optional_pattern] = ACTIONS(SHIFT(232)),
        [sym_is_pattern] = ACTIONS(SHIFT(232)),
        [sym_as_pattern] = ACTIONS(SHIFT(232)),
        [sym__expression] = ACTIONS(SHIFT(232)),
        [sym__type_identifier] = ACTIONS(SHIFT(234)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(251)),
        [anon_sym_let] = ACTIONS(SHIFT(238)),
        [anon_sym_var] = ACTIONS(SHIFT(238)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(232)),
        [anon_sym_DOT] = ACTIONS(SHIFT(240)),
        [anon_sym_is] = ACTIONS(SHIFT(241)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(256)),
    },
    [240] = {
        [sym_identifier] = ACTIONS(SHIFT(249)),
    },
    [241] = {
        [sym_type] = ACTIONS(SHIFT(243)),
        [sym__type_identifier] = ACTIONS(SHIFT(244)),
        [sym__type_name] = ACTIONS(SHIFT(245)),
        [sym_identifier] = ACTIONS(SHIFT(246)),
    },
    [242] = {
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
    [243] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [244] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [245] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(247)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [246] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [247] = {
        [sym__type_identifier] = ACTIONS(SHIFT(248)),
        [sym__type_name] = ACTIONS(SHIFT(245)),
        [sym_identifier] = ACTIONS(SHIFT(246)),
    },
    [248] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [249] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(250)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(251)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [250] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [251] = {
        [sym__pattern] = ACTIONS(SHIFT(68)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(69)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(69)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(252)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(69)),
        [sym_optional_pattern] = ACTIONS(SHIFT(69)),
        [sym_is_pattern] = ACTIONS(SHIFT(69)),
        [sym_as_pattern] = ACTIONS(SHIFT(69)),
        [sym__expression] = ACTIONS(SHIFT(69)),
        [sym__type_identifier] = ACTIONS(SHIFT(71)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(72)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(253)),
        [anon_sym_let] = ACTIONS(SHIFT(74)),
        [anon_sym_var] = ACTIONS(SHIFT(74)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(69)),
        [anon_sym_DOT] = ACTIONS(SHIFT(75)),
        [anon_sym_is] = ACTIONS(SHIFT(76)),
        [sym_identifier] = ACTIONS(SHIFT(77)),
    },
    [252] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(254)),
    },
    [253] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [254] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [255] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(257)),
        [anon_sym_as] = ACTIONS(SHIFT(258)),
    },
    [256] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [257] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [258] = {
        [sym_type] = ACTIONS(SHIFT(259)),
        [sym__type_identifier] = ACTIONS(SHIFT(244)),
        [sym__type_name] = ACTIONS(SHIFT(245)),
        [sym_identifier] = ACTIONS(SHIFT(246)),
    },
    [259] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [260] = {
        [sym__type_annotation] = ACTIONS(SHIFT(261)),
        [anon_sym_in] = ACTIONS(SHIFT(262)),
        [anon_sym_COLON] = ACTIONS(SHIFT(263)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(257)),
        [anon_sym_as] = ACTIONS(SHIFT(258)),
    },
    [261] = {
        [anon_sym_in] = ACTIONS(SHIFT(272)),
    },
    [262] = {
        [sym__expression] = ACTIONS(SHIFT(270)),
        [sym_identifier] = ACTIONS(SHIFT(211)),
    },
    [263] = {
        [sym_type] = ACTIONS(SHIFT(264)),
        [sym__type_identifier] = ACTIONS(SHIFT(265)),
        [sym__type_name] = ACTIONS(SHIFT(266)),
        [sym_identifier] = ACTIONS(SHIFT(267)),
    },
    [264] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [265] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [266] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(268)),
    },
    [267] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [268] = {
        [sym__type_identifier] = ACTIONS(SHIFT(269)),
        [sym__type_name] = ACTIONS(SHIFT(266)),
        [sym_identifier] = ACTIONS(SHIFT(267)),
    },
    [269] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [270] = {
        [sym__code_block] = ACTIONS(SHIFT(271)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(167)),
    },
    [271] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
    },
    [272] = {
        [sym__expression] = ACTIONS(SHIFT(273)),
        [sym_identifier] = ACTIONS(SHIFT(211)),
    },
    [273] = {
        [sym__code_block] = ACTIONS(SHIFT(274)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(167)),
    },
    [274] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
    },
    [275] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(295)),
    },
    [276] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(293)),
    },
    [277] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(288)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1), SHIFT(289)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [278] = {
        [sym__expression] = ACTIONS(SHIFT(281)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(282)),
        [sym_identifier] = ACTIONS(SHIFT(283)),
    },
    [279] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(86)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(69)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(69)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(69)),
        [sym_optional_pattern] = ACTIONS(SHIFT(69)),
        [sym_is_pattern] = ACTIONS(SHIFT(69)),
        [sym_as_pattern] = ACTIONS(SHIFT(69)),
        [sym__expression] = ACTIONS(SHIFT(69)),
        [sym__type_identifier] = ACTIONS(SHIFT(71)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(72)),
        [anon_sym_let] = ACTIONS(SHIFT(74)),
        [anon_sym_var] = ACTIONS(SHIFT(74)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(69)),
        [anon_sym_DOT] = ACTIONS(SHIFT(75)),
        [anon_sym_is] = ACTIONS(SHIFT(76)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(77)),
    },
    [280] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [281] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(286)),
    },
    [282] = {
        [sym__expression] = ACTIONS(SHIFT(284)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(285)),
    },
    [283] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [284] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [285] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [286] = {
        [sym__expression] = ACTIONS(SHIFT(287)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(285)),
    },
    [287] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [288] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 2)),
    },
    [289] = {
        [sym__expression] = ACTIONS(SHIFT(290)),
        [sym_identifier] = ACTIONS(SHIFT(291)),
    },
    [290] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(292)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(289)),
    },
    [291] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [292] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 3)),
    },
    [293] = {
        [sym__code_block] = ACTIONS(SHIFT(294)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(167)),
    },
    [294] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 5)),
    },
    [295] = {
        [sym__expression] = ACTIONS(SHIFT(296)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(286)),
        [sym_identifier] = ACTIONS(SHIFT(283)),
    },
    [296] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(297)),
    },
    [297] = {
        [sym__expression] = ACTIONS(SHIFT(298)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(285)),
    },
    [298] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [299] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(302)),
    },
    [300] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym__expression] = ACTIONS(SHIFT(301)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(211)),
    },
    [301] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [302] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym__expression] = ACTIONS(SHIFT(303)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(211)),
    },
    [303] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [304] = {
        [sym_identifier] = ACTIONS(SHIFT(305)),
    },
    [305] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(306)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(251)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [306] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [307] = {
        [anon_sym_in] = ACTIONS(SHIFT(262)),
    },
    [308] = {
        [sym__expression] = ACTIONS(SHIFT(309)),
        [sym_identifier] = ACTIONS(SHIFT(211)),
    },
    [309] = {
        [sym__code_block] = ACTIONS(SHIFT(310)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(167)),
    },
    [310] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
    },
    [311] = {
        [sym__type_annotation] = ACTIONS(SHIFT(313)),
        [anon_sym_COLON] = ACTIONS(SHIFT(314)),
    },
    [312] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__variable_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__variable_name, 1)),
    },
    [313] = {
        [sym__code_block] = ACTIONS(SHIFT(321)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(322)),
    },
    [314] = {
        [sym_type] = ACTIONS(SHIFT(315)),
        [sym__type_identifier] = ACTIONS(SHIFT(316)),
        [sym__type_name] = ACTIONS(SHIFT(317)),
        [sym_identifier] = ACTIONS(SHIFT(318)),
    },
    [315] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [316] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [317] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(319)),
    },
    [318] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [319] = {
        [sym__type_identifier] = ACTIONS(SHIFT(320)),
        [sym__type_name] = ACTIONS(SHIFT(317)),
        [sym_identifier] = ACTIONS(SHIFT(318)),
    },
    [320] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [321] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_variable_declaration, 4)),
    },
    [322] = {
        [sym__statement] = ACTIONS(SHIFT(148)),
        [sym__statements] = ACTIONS(SHIFT(323)),
        [sym_for_statement] = ACTIONS(SHIFT(150)),
        [sym_for_in_statement] = ACTIONS(SHIFT(150)),
        [sym_while_statement] = ACTIONS(SHIFT(150)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(150)),
        [sym_if_statement] = ACTIONS(SHIFT(150)),
        [sym_guard_statement] = ACTIONS(SHIFT(150)),
        [sym_switch_statement] = ACTIONS(SHIFT(150)),
        [sym__expression] = ACTIONS(SHIFT(150)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(151)),
        [anon_sym_for] = ACTIONS(SHIFT(152)),
        [anon_sym_while] = ACTIONS(SHIFT(153)),
        [anon_sym_repeat] = ACTIONS(SHIFT(154)),
        [anon_sym_if] = ACTIONS(SHIFT(155)),
        [anon_sym_guard] = ACTIONS(SHIFT(156)),
        [anon_sym_switch] = ACTIONS(SHIFT(157)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(150)),
        [sym_identifier] = ACTIONS(SHIFT(158)),
    },
    [323] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(324)),
    },
    [324] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [325] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 3)),
    },
    [326] = {
        [sym__expression] = ACTIONS(SHIFT(327)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(302)),
        [sym_identifier] = ACTIONS(SHIFT(283)),
    },
    [327] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(328)),
    },
    [328] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym__expression] = ACTIONS(SHIFT(329)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(211)),
    },
    [329] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [330] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [331] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_case_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_case] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [332] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
    },
    [333] = {
        [sym__code_block] = ACTIONS(SHIFT(334)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(335)),
    },
    [334] = {
        [sym__statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_else] = ACTIONS(SHIFT(338)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_if_statement, 3)),
    },
    [335] = {
        [sym__statement] = ACTIONS(SHIFT(148)),
        [sym__statements] = ACTIONS(SHIFT(336)),
        [sym_for_statement] = ACTIONS(SHIFT(150)),
        [sym_for_in_statement] = ACTIONS(SHIFT(150)),
        [sym_while_statement] = ACTIONS(SHIFT(150)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(150)),
        [sym_if_statement] = ACTIONS(SHIFT(150)),
        [sym_guard_statement] = ACTIONS(SHIFT(150)),
        [sym_switch_statement] = ACTIONS(SHIFT(150)),
        [sym__expression] = ACTIONS(SHIFT(150)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(151)),
        [anon_sym_for] = ACTIONS(SHIFT(152)),
        [anon_sym_while] = ACTIONS(SHIFT(153)),
        [anon_sym_repeat] = ACTIONS(SHIFT(154)),
        [anon_sym_if] = ACTIONS(SHIFT(155)),
        [anon_sym_guard] = ACTIONS(SHIFT(156)),
        [anon_sym_switch] = ACTIONS(SHIFT(157)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(150)),
        [sym_identifier] = ACTIONS(SHIFT(158)),
    },
    [336] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(337)),
    },
    [337] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_case_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_case] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [338] = {
        [sym_if_statement] = ACTIONS(SHIFT(339)),
        [sym__code_block] = ACTIONS(SHIFT(339)),
        [anon_sym_if] = ACTIONS(SHIFT(28)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(147)),
    },
    [339] = {
        [sym__statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_if_statement, 5)),
    },
    [340] = {
        [anon_sym_while] = ACTIONS(SHIFT(341)),
    },
    [341] = {
        [sym__expression] = ACTIONS(SHIFT(342)),
        [sym_identifier] = ACTIONS(SHIFT(31)),
    },
    [342] = {
        [sym__statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
    },
    [343] = {
        [sym__code_block] = ACTIONS(SHIFT(344)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(147)),
    },
    [344] = {
        [sym__statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_while_statement, 3)),
    },
    [345] = {
        [sym__code_block] = ACTIONS(SHIFT(364)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(147)),
    },
    [346] = {
        [sym__type_annotation] = ACTIONS(SHIFT(360)),
        [anon_sym_in] = ACTIONS(SHIFT(361)),
        [anon_sym_COLON] = ACTIONS(SHIFT(263)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(257)),
        [anon_sym_as] = ACTIONS(SHIFT(258)),
    },
    [347] = {
        [sym__for_init] = ACTIONS(SHIFT(275)),
        [sym__for_condition] = ACTIONS(SHIFT(357)),
        [sym_variable_declaration] = ACTIONS(SHIFT(229)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(230)),
        [sym__pattern] = ACTIONS(SHIFT(68)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(69)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(69)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(252)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(69)),
        [sym_optional_pattern] = ACTIONS(SHIFT(69)),
        [sym_is_pattern] = ACTIONS(SHIFT(69)),
        [sym_as_pattern] = ACTIONS(SHIFT(69)),
        [sym__expression] = ACTIONS(SHIFT(277)),
        [sym__expression_list] = ACTIONS(SHIFT(229)),
        [sym__type_identifier] = ACTIONS(SHIFT(71)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(278)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(72)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(253)),
        [anon_sym_let] = ACTIONS(SHIFT(74)),
        [anon_sym_var] = ACTIONS(SHIFT(279)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(69)),
        [anon_sym_DOT] = ACTIONS(SHIFT(75)),
        [anon_sym_is] = ACTIONS(SHIFT(76)),
        [sym_identifier] = ACTIONS(SHIFT(280)),
    },
    [348] = {
        [sym__pattern] = ACTIONS(SHIFT(349)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(232)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(232)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(232)),
        [sym_optional_pattern] = ACTIONS(SHIFT(232)),
        [sym_is_pattern] = ACTIONS(SHIFT(232)),
        [sym_as_pattern] = ACTIONS(SHIFT(232)),
        [sym__expression] = ACTIONS(SHIFT(232)),
        [sym__type_identifier] = ACTIONS(SHIFT(234)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(251)),
        [anon_sym_let] = ACTIONS(SHIFT(238)),
        [anon_sym_var] = ACTIONS(SHIFT(238)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(232)),
        [anon_sym_DOT] = ACTIONS(SHIFT(240)),
        [anon_sym_is] = ACTIONS(SHIFT(241)),
        [sym_identifier] = ACTIONS(SHIFT(256)),
    },
    [349] = {
        [sym__type_annotation] = ACTIONS(SHIFT(350)),
        [anon_sym_in] = ACTIONS(SHIFT(351)),
        [anon_sym_COLON] = ACTIONS(SHIFT(263)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(257)),
        [anon_sym_as] = ACTIONS(SHIFT(258)),
    },
    [350] = {
        [anon_sym_in] = ACTIONS(SHIFT(354)),
    },
    [351] = {
        [sym__expression] = ACTIONS(SHIFT(352)),
        [sym_identifier] = ACTIONS(SHIFT(211)),
    },
    [352] = {
        [sym__code_block] = ACTIONS(SHIFT(353)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(147)),
    },
    [353] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
    },
    [354] = {
        [sym__expression] = ACTIONS(SHIFT(355)),
        [sym_identifier] = ACTIONS(SHIFT(211)),
    },
    [355] = {
        [sym__code_block] = ACTIONS(SHIFT(356)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(147)),
    },
    [356] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
    },
    [357] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(358)),
    },
    [358] = {
        [sym__code_block] = ACTIONS(SHIFT(359)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(147)),
    },
    [359] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 5)),
    },
    [360] = {
        [anon_sym_in] = ACTIONS(SHIFT(351)),
    },
    [361] = {
        [sym__expression] = ACTIONS(SHIFT(362)),
        [sym_identifier] = ACTIONS(SHIFT(211)),
    },
    [362] = {
        [sym__code_block] = ACTIONS(SHIFT(363)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(147)),
    },
    [363] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
    },
    [364] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 3)),
    },
    [365] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_case_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
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
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [366] = {
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
        [anon_sym_case] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
    },
    [367] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(393)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(394)),
        [anon_sym_COLON] = ACTIONS(SHIFT(395)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(384)),
        [anon_sym_as] = ACTIONS(SHIFT(385)),
    },
    [368] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [369] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(390)),
    },
    [370] = {
        [sym__pattern] = ACTIONS(SHIFT(68)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(69)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(69)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(387)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(69)),
        [sym_optional_pattern] = ACTIONS(SHIFT(69)),
        [sym_is_pattern] = ACTIONS(SHIFT(69)),
        [sym_as_pattern] = ACTIONS(SHIFT(69)),
        [sym__expression] = ACTIONS(SHIFT(69)),
        [sym__type_identifier] = ACTIONS(SHIFT(71)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(72)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(388)),
        [anon_sym_let] = ACTIONS(SHIFT(74)),
        [anon_sym_var] = ACTIONS(SHIFT(74)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(69)),
        [anon_sym_DOT] = ACTIONS(SHIFT(75)),
        [anon_sym_is] = ACTIONS(SHIFT(76)),
        [sym_identifier] = ACTIONS(SHIFT(77)),
    },
    [371] = {
        [sym__pattern] = ACTIONS(SHIFT(383)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(368)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(368)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(368)),
        [sym_optional_pattern] = ACTIONS(SHIFT(368)),
        [sym_is_pattern] = ACTIONS(SHIFT(368)),
        [sym_as_pattern] = ACTIONS(SHIFT(368)),
        [sym__expression] = ACTIONS(SHIFT(368)),
        [sym__type_identifier] = ACTIONS(SHIFT(369)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(370)),
        [anon_sym_let] = ACTIONS(SHIFT(371)),
        [anon_sym_var] = ACTIONS(SHIFT(371)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(368)),
        [anon_sym_DOT] = ACTIONS(SHIFT(372)),
        [anon_sym_is] = ACTIONS(SHIFT(373)),
        [sym_identifier] = ACTIONS(SHIFT(374)),
    },
    [372] = {
        [sym_identifier] = ACTIONS(SHIFT(381)),
    },
    [373] = {
        [sym_type] = ACTIONS(SHIFT(375)),
        [sym__type_identifier] = ACTIONS(SHIFT(376)),
        [sym__type_name] = ACTIONS(SHIFT(377)),
        [sym_identifier] = ACTIONS(SHIFT(378)),
    },
    [374] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [375] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [376] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [377] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(379)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [378] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [379] = {
        [sym__type_identifier] = ACTIONS(SHIFT(380)),
        [sym__type_name] = ACTIONS(SHIFT(377)),
        [sym_identifier] = ACTIONS(SHIFT(378)),
    },
    [380] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [381] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(382)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(370)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [382] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [383] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(384)),
        [anon_sym_as] = ACTIONS(SHIFT(385)),
    },
    [384] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [385] = {
        [sym_type] = ACTIONS(SHIFT(386)),
        [sym__type_identifier] = ACTIONS(SHIFT(376)),
        [sym__type_name] = ACTIONS(SHIFT(377)),
        [sym_identifier] = ACTIONS(SHIFT(378)),
    },
    [386] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [387] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(389)),
    },
    [388] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [389] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [390] = {
        [sym_identifier] = ACTIONS(SHIFT(391)),
    },
    [391] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(392)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(370)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [392] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [393] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(399)),
    },
    [394] = {
        [sym__pattern] = ACTIONS(SHIFT(397)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(368)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(368)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(368)),
        [sym_optional_pattern] = ACTIONS(SHIFT(368)),
        [sym_is_pattern] = ACTIONS(SHIFT(368)),
        [sym_as_pattern] = ACTIONS(SHIFT(368)),
        [sym__expression] = ACTIONS(SHIFT(368)),
        [sym__type_identifier] = ACTIONS(SHIFT(369)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(370)),
        [anon_sym_let] = ACTIONS(SHIFT(371)),
        [anon_sym_var] = ACTIONS(SHIFT(371)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(368)),
        [anon_sym_DOT] = ACTIONS(SHIFT(372)),
        [anon_sym_is] = ACTIONS(SHIFT(373)),
        [sym_identifier] = ACTIONS(SHIFT(374)),
    },
    [395] = {
        [sym__statement] = ACTIONS(SHIFT(22)),
        [sym_for_statement] = ACTIONS(SHIFT(23)),
        [sym_for_in_statement] = ACTIONS(SHIFT(23)),
        [sym_while_statement] = ACTIONS(SHIFT(23)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(23)),
        [sym_if_statement] = ACTIONS(SHIFT(23)),
        [sym_guard_statement] = ACTIONS(SHIFT(23)),
        [sym_switch_statement] = ACTIONS(SHIFT(23)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [sym__expression] = ACTIONS(SHIFT(23)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(396)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_for] = ACTIONS(SHIFT(25)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_while] = ACTIONS(SHIFT(26)),
        [anon_sym_repeat] = ACTIONS(SHIFT(27)),
        [anon_sym_if] = ACTIONS(SHIFT(28)),
        [anon_sym_guard] = ACTIONS(SHIFT(29)),
        [anon_sym_switch] = ACTIONS(SHIFT(30)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [sym__declaration] = ACTIONS(SHIFT(23)),
        [sym_identifier] = ACTIONS(SHIFT(31)),
    },
    [396] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 4)),
    },
    [397] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(398)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(394)),
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(384)),
        [anon_sym_as] = ACTIONS(SHIFT(385)),
    },
    [398] = {
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [399] = {
        [sym__statement] = ACTIONS(SHIFT(22)),
        [sym_for_statement] = ACTIONS(SHIFT(23)),
        [sym_for_in_statement] = ACTIONS(SHIFT(23)),
        [sym_while_statement] = ACTIONS(SHIFT(23)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(23)),
        [sym_if_statement] = ACTIONS(SHIFT(23)),
        [sym_guard_statement] = ACTIONS(SHIFT(23)),
        [sym_switch_statement] = ACTIONS(SHIFT(23)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [sym__expression] = ACTIONS(SHIFT(23)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(400)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_for] = ACTIONS(SHIFT(25)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_while] = ACTIONS(SHIFT(26)),
        [anon_sym_repeat] = ACTIONS(SHIFT(27)),
        [anon_sym_if] = ACTIONS(SHIFT(28)),
        [anon_sym_guard] = ACTIONS(SHIFT(29)),
        [anon_sym_switch] = ACTIONS(SHIFT(30)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [sym__declaration] = ACTIONS(SHIFT(23)),
        [sym_identifier] = ACTIONS(SHIFT(31)),
    },
    [400] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 5)),
    },
    [401] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 5)),
    },
    [402] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 2)),
    },
    [403] = {
        [anon_sym_else] = ACTIONS(SHIFT(404)),
    },
    [404] = {
        [sym__code_block] = ACTIONS(SHIFT(405)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(406)),
    },
    [405] = {
        [sym__statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_guard_statement, 4)),
    },
    [406] = {
        [sym__statement] = ACTIONS(SHIFT(148)),
        [sym__statements] = ACTIONS(SHIFT(407)),
        [sym_for_statement] = ACTIONS(SHIFT(150)),
        [sym_for_in_statement] = ACTIONS(SHIFT(150)),
        [sym_while_statement] = ACTIONS(SHIFT(150)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(150)),
        [sym_if_statement] = ACTIONS(SHIFT(150)),
        [sym_guard_statement] = ACTIONS(SHIFT(150)),
        [sym_switch_statement] = ACTIONS(SHIFT(150)),
        [sym__expression] = ACTIONS(SHIFT(150)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(151)),
        [anon_sym_for] = ACTIONS(SHIFT(152)),
        [anon_sym_while] = ACTIONS(SHIFT(153)),
        [anon_sym_repeat] = ACTIONS(SHIFT(154)),
        [anon_sym_if] = ACTIONS(SHIFT(155)),
        [anon_sym_guard] = ACTIONS(SHIFT(156)),
        [anon_sym_switch] = ACTIONS(SHIFT(157)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(150)),
        [sym_identifier] = ACTIONS(SHIFT(158)),
    },
    [407] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(408)),
    },
    [408] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [409] = {
        [sym__code_block] = ACTIONS(SHIFT(410)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(411)),
    },
    [410] = {
        [sym__statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_else] = ACTIONS(SHIFT(414)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_if_statement, 3)),
    },
    [411] = {
        [sym__statement] = ACTIONS(SHIFT(148)),
        [sym__statements] = ACTIONS(SHIFT(412)),
        [sym_for_statement] = ACTIONS(SHIFT(150)),
        [sym_for_in_statement] = ACTIONS(SHIFT(150)),
        [sym_while_statement] = ACTIONS(SHIFT(150)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(150)),
        [sym_if_statement] = ACTIONS(SHIFT(150)),
        [sym_guard_statement] = ACTIONS(SHIFT(150)),
        [sym_switch_statement] = ACTIONS(SHIFT(150)),
        [sym__expression] = ACTIONS(SHIFT(150)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(151)),
        [anon_sym_for] = ACTIONS(SHIFT(152)),
        [anon_sym_while] = ACTIONS(SHIFT(153)),
        [anon_sym_repeat] = ACTIONS(SHIFT(154)),
        [anon_sym_if] = ACTIONS(SHIFT(155)),
        [anon_sym_guard] = ACTIONS(SHIFT(156)),
        [anon_sym_switch] = ACTIONS(SHIFT(157)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(150)),
        [sym_identifier] = ACTIONS(SHIFT(158)),
    },
    [412] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(413)),
    },
    [413] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [414] = {
        [sym_if_statement] = ACTIONS(SHIFT(415)),
        [sym__code_block] = ACTIONS(SHIFT(415)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(406)),
    },
    [415] = {
        [sym__statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_if_statement, 5)),
    },
    [416] = {
        [anon_sym_while] = ACTIONS(SHIFT(417)),
    },
    [417] = {
        [sym__expression] = ACTIONS(SHIFT(418)),
        [sym_identifier] = ACTIONS(SHIFT(12)),
    },
    [418] = {
        [sym__statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
    },
    [419] = {
        [sym__code_block] = ACTIONS(SHIFT(420)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(406)),
    },
    [420] = {
        [sym__statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_while_statement, 3)),
    },
    [421] = {
        [sym__code_block] = ACTIONS(SHIFT(440)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(406)),
    },
    [422] = {
        [sym__type_annotation] = ACTIONS(SHIFT(436)),
        [anon_sym_in] = ACTIONS(SHIFT(437)),
        [anon_sym_COLON] = ACTIONS(SHIFT(263)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(257)),
        [anon_sym_as] = ACTIONS(SHIFT(258)),
    },
    [423] = {
        [sym__for_init] = ACTIONS(SHIFT(275)),
        [sym__for_condition] = ACTIONS(SHIFT(433)),
        [sym_variable_declaration] = ACTIONS(SHIFT(229)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(230)),
        [sym__pattern] = ACTIONS(SHIFT(68)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(69)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(69)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(252)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(69)),
        [sym_optional_pattern] = ACTIONS(SHIFT(69)),
        [sym_is_pattern] = ACTIONS(SHIFT(69)),
        [sym_as_pattern] = ACTIONS(SHIFT(69)),
        [sym__expression] = ACTIONS(SHIFT(277)),
        [sym__expression_list] = ACTIONS(SHIFT(229)),
        [sym__type_identifier] = ACTIONS(SHIFT(71)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(278)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(72)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(253)),
        [anon_sym_let] = ACTIONS(SHIFT(74)),
        [anon_sym_var] = ACTIONS(SHIFT(279)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(69)),
        [anon_sym_DOT] = ACTIONS(SHIFT(75)),
        [anon_sym_is] = ACTIONS(SHIFT(76)),
        [sym_identifier] = ACTIONS(SHIFT(280)),
    },
    [424] = {
        [sym__pattern] = ACTIONS(SHIFT(425)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(232)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(232)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(232)),
        [sym_optional_pattern] = ACTIONS(SHIFT(232)),
        [sym_is_pattern] = ACTIONS(SHIFT(232)),
        [sym_as_pattern] = ACTIONS(SHIFT(232)),
        [sym__expression] = ACTIONS(SHIFT(232)),
        [sym__type_identifier] = ACTIONS(SHIFT(234)),
        [sym__type_name] = ACTIONS(SHIFT(50)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(251)),
        [anon_sym_let] = ACTIONS(SHIFT(238)),
        [anon_sym_var] = ACTIONS(SHIFT(238)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(232)),
        [anon_sym_DOT] = ACTIONS(SHIFT(240)),
        [anon_sym_is] = ACTIONS(SHIFT(241)),
        [sym_identifier] = ACTIONS(SHIFT(256)),
    },
    [425] = {
        [sym__type_annotation] = ACTIONS(SHIFT(426)),
        [anon_sym_in] = ACTIONS(SHIFT(427)),
        [anon_sym_COLON] = ACTIONS(SHIFT(263)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(257)),
        [anon_sym_as] = ACTIONS(SHIFT(258)),
    },
    [426] = {
        [anon_sym_in] = ACTIONS(SHIFT(430)),
    },
    [427] = {
        [sym__expression] = ACTIONS(SHIFT(428)),
        [sym_identifier] = ACTIONS(SHIFT(211)),
    },
    [428] = {
        [sym__code_block] = ACTIONS(SHIFT(429)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(406)),
    },
    [429] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
    },
    [430] = {
        [sym__expression] = ACTIONS(SHIFT(431)),
        [sym_identifier] = ACTIONS(SHIFT(211)),
    },
    [431] = {
        [sym__code_block] = ACTIONS(SHIFT(432)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(406)),
    },
    [432] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
    },
    [433] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(434)),
    },
    [434] = {
        [sym__code_block] = ACTIONS(SHIFT(435)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(406)),
    },
    [435] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 5)),
    },
    [436] = {
        [anon_sym_in] = ACTIONS(SHIFT(427)),
    },
    [437] = {
        [sym__expression] = ACTIONS(SHIFT(438)),
        [sym_identifier] = ACTIONS(SHIFT(211)),
    },
    [438] = {
        [sym__code_block] = ACTIONS(SHIFT(439)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(406)),
    },
    [439] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
    },
    [440] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 3)),
    },
    [441] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [442] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
    },
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_swift);
