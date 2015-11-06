#include "tree_sitter/parser.h"

#define STATE_COUNT 338
#define SYMBOL_COUNT 72

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
    anon_sym_switch,
    anon_sym_LBRACE,
    anon_sym_RBRACE,
    anon_sym_COLON,
    anon_sym_default,
    sym__declaration,
    anon_sym_var,
    sym_wildcard_pattern,
    anon_sym_let,
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
    [anon_sym_switch] = "switch",
    [anon_sym_LBRACE] = "{",
    [anon_sym_RBRACE] = "}",
    [anon_sym_COLON] = ":",
    [anon_sym_default] = "default",
    [sym__declaration] = "_declaration",
    [anon_sym_var] = "var",
    [sym_wildcard_pattern] = "wildcard_pattern",
    [anon_sym_let] = "let",
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
    [anon_sym_switch] = TSNodeTypeAnonymous,
    [anon_sym_LBRACE] = TSNodeTypeAnonymous,
    [anon_sym_RBRACE] = TSNodeTypeAnonymous,
    [anon_sym_COLON] = TSNodeTypeAnonymous,
    [anon_sym_default] = TSNodeTypeAnonymous,
    [sym__declaration] = TSNodeTypeHidden,
    [anon_sym_var] = TSNodeTypeAnonymous,
    [sym_wildcard_pattern] = TSNodeTypeNamed,
    [anon_sym_let] = TSNodeTypeAnonymous,
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
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(16);
            if (lookahead == 'w')
                ADVANCE(22);
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
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'm')
                ADVANCE(11);
            ACCEPT_TOKEN(sym_identifier);
        case 11:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(12);
            ACCEPT_TOKEN(sym_identifier);
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
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'r')
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(sym__declaration);
        case 16:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'w')
                ADVANCE(17);
            ACCEPT_TOKEN(sym_identifier);
        case 17:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(18);
            ACCEPT_TOKEN(sym_identifier);
        case 18:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(19);
            ACCEPT_TOKEN(sym_identifier);
        case 19:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(20);
            ACCEPT_TOKEN(sym_identifier);
        case 20:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(21);
            ACCEPT_TOKEN(sym_identifier);
        case 21:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_switch);
        case 22:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(23);
            ACCEPT_TOKEN(sym_identifier);
        case 23:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(24);
            ACCEPT_TOKEN(sym_identifier);
        case 24:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(25);
            ACCEPT_TOKEN(sym_identifier);
        case 25:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(26);
            ACCEPT_TOKEN(sym_identifier);
        case 26:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_while);
        case 27:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(27);
            LEX_ERROR();
        case 28:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(28);
            if (lookahead == ';')
                ADVANCE(29);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(16);
            if (lookahead == 'w')
                ADVANCE(22);
            LEX_ERROR();
        case 29:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 30:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(30);
            if (lookahead == '(')
                ADVANCE(31);
            if (lookahead == '.')
                ADVANCE(32);
            if (lookahead == ';')
                ADVANCE(29);
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
                ADVANCE(33);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'c')
                ADVANCE(34);
            if (lookahead == 'i')
                ADVANCE(38);
            if (lookahead == 'l')
                ADVANCE(40);
            if (lookahead == 'v')
                ADVANCE(43);
            LEX_ERROR();
        case 31:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 32:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 33:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(sym_wildcard_pattern);
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
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier);
        case 36:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(37);
            ACCEPT_TOKEN(sym_identifier);
        case 37:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_case);
        case 38:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(39);
            ACCEPT_TOKEN(sym_identifier);
        case 39:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_is);
        case 40:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(41);
            ACCEPT_TOKEN(sym_identifier);
        case 41:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(42);
            ACCEPT_TOKEN(sym_identifier);
        case 42:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_let);
        case 43:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(44);
            ACCEPT_TOKEN(sym_identifier);
        case 44:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'r')
                ADVANCE(45);
            ACCEPT_TOKEN(sym_identifier);
        case 45:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_var);
        case 46:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(46);
            if (lookahead == '#')
                ADVANCE(47);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'c')
                ADVANCE(34);
            LEX_ERROR();
        case 47:
            if (lookahead == 'a')
                ADVANCE(48);
            LEX_ERROR();
        case 48:
            if (lookahead == 'v')
                ADVANCE(49);
            LEX_ERROR();
        case 49:
            if (lookahead == 'a')
                ADVANCE(50);
            LEX_ERROR();
        case 50:
            if (lookahead == 'i')
                ADVANCE(51);
            LEX_ERROR();
        case 51:
            if (lookahead == 'l')
                ADVANCE(52);
            LEX_ERROR();
        case 52:
            if (lookahead == 'a')
                ADVANCE(53);
            LEX_ERROR();
        case 53:
            if (lookahead == 'b')
                ADVANCE(54);
            LEX_ERROR();
        case 54:
            if (lookahead == 'l')
                ADVANCE(55);
            LEX_ERROR();
        case 55:
            if (lookahead == 'e')
                ADVANCE(56);
            LEX_ERROR();
        case 56:
            ACCEPT_TOKEN(anon_sym_POUNDavailable);
        case 57:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(57);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 58:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(58);
            if (lookahead == '{')
                ADVANCE(59);
            LEX_ERROR();
        case 59:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 60:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(60);
            if (lookahead == 'c')
                ADVANCE(61);
            if (lookahead == 'd')
                ADVANCE(65);
            if (lookahead == '}')
                ADVANCE(72);
            LEX_ERROR();
        case 61:
            if (lookahead == 'a')
                ADVANCE(62);
            LEX_ERROR();
        case 62:
            if (lookahead == 's')
                ADVANCE(63);
            LEX_ERROR();
        case 63:
            if (lookahead == 'e')
                ADVANCE(64);
            LEX_ERROR();
        case 64:
            ACCEPT_TOKEN(anon_sym_case);
        case 65:
            if (lookahead == 'e')
                ADVANCE(66);
            LEX_ERROR();
        case 66:
            if (lookahead == 'f')
                ADVANCE(67);
            LEX_ERROR();
        case 67:
            if (lookahead == 'a')
                ADVANCE(68);
            LEX_ERROR();
        case 68:
            if (lookahead == 'u')
                ADVANCE(69);
            LEX_ERROR();
        case 69:
            if (lookahead == 'l')
                ADVANCE(70);
            LEX_ERROR();
        case 70:
            if (lookahead == 't')
                ADVANCE(71);
            LEX_ERROR();
        case 71:
            ACCEPT_TOKEN(anon_sym_default);
        case 72:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 73:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(73);
            if (lookahead == '}')
                ADVANCE(72);
            LEX_ERROR();
        case 74:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(74);
            if (lookahead == '(')
                ADVANCE(31);
            if (lookahead == '.')
                ADVANCE(32);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(33);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(38);
            if (lookahead == 'l')
                ADVANCE(40);
            if (lookahead == 'v')
                ADVANCE(43);
            LEX_ERROR();
        case 75:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(75);
            if (lookahead == ':')
                ADVANCE(76);
            LEX_ERROR();
        case 76:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 77:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(77);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'c')
                ADVANCE(34);
            if (lookahead == 'd')
                ADVANCE(78);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(16);
            if (lookahead == 'w')
                ADVANCE(22);
            if (lookahead == '}')
                ADVANCE(72);
            LEX_ERROR();
        case 78:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(79);
            ACCEPT_TOKEN(sym_identifier);
        case 79:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'f')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier);
        case 80:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(81);
            ACCEPT_TOKEN(sym_identifier);
        case 81:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'u')
                ADVANCE(82);
            ACCEPT_TOKEN(sym_identifier);
        case 82:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(83);
            ACCEPT_TOKEN(sym_identifier);
        case 83:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(84);
            ACCEPT_TOKEN(sym_identifier);
        case 84:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_default);
        case 85:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(85);
            if (lookahead == ';')
                ADVANCE(29);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'c')
                ADVANCE(34);
            if (lookahead == 'd')
                ADVANCE(78);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(16);
            if (lookahead == 'w')
                ADVANCE(22);
            if (lookahead == '}')
                ADVANCE(72);
            LEX_ERROR();
        case 86:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(86);
            if (lookahead == ',')
                ADVANCE(87);
            if (lookahead == '{')
                ADVANCE(59);
            LEX_ERROR();
        case 87:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 88:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(88);
            if (lookahead == '(')
                ADVANCE(31);
            LEX_ERROR();
        case 89:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(89);
            if (lookahead == '*')
                ADVANCE(90);
            if (lookahead == 'O')
                ADVANCE(91);
            if (lookahead == 'i')
                ADVANCE(114);
            if (lookahead == 't')
                ADVANCE(137);
            if (lookahead == 'w')
                ADVANCE(141);
            LEX_ERROR();
        case 90:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 91:
            if (lookahead == 'S')
                ADVANCE(92);
            LEX_ERROR();
        case 92:
            if (lookahead == 'X')
                ADVANCE(93);
            LEX_ERROR();
        case 93:
            if (lookahead == 'A')
                ADVANCE(94);
            ACCEPT_TOKEN(anon_sym_OSX);
        case 94:
            if (lookahead == 'p')
                ADVANCE(95);
            LEX_ERROR();
        case 95:
            if (lookahead == 'p')
                ADVANCE(96);
            LEX_ERROR();
        case 96:
            if (lookahead == 'l')
                ADVANCE(97);
            LEX_ERROR();
        case 97:
            if (lookahead == 'i')
                ADVANCE(98);
            LEX_ERROR();
        case 98:
            if (lookahead == 'c')
                ADVANCE(99);
            LEX_ERROR();
        case 99:
            if (lookahead == 'a')
                ADVANCE(100);
            LEX_ERROR();
        case 100:
            if (lookahead == 't')
                ADVANCE(101);
            LEX_ERROR();
        case 101:
            if (lookahead == 'i')
                ADVANCE(102);
            LEX_ERROR();
        case 102:
            if (lookahead == 'o')
                ADVANCE(103);
            LEX_ERROR();
        case 103:
            if (lookahead == 'n')
                ADVANCE(104);
            LEX_ERROR();
        case 104:
            if (lookahead == 'E')
                ADVANCE(105);
            LEX_ERROR();
        case 105:
            if (lookahead == 'x')
                ADVANCE(106);
            LEX_ERROR();
        case 106:
            if (lookahead == 't')
                ADVANCE(107);
            LEX_ERROR();
        case 107:
            if (lookahead == 'e')
                ADVANCE(108);
            LEX_ERROR();
        case 108:
            if (lookahead == 'n')
                ADVANCE(109);
            LEX_ERROR();
        case 109:
            if (lookahead == 's')
                ADVANCE(110);
            LEX_ERROR();
        case 110:
            if (lookahead == 'i')
                ADVANCE(111);
            LEX_ERROR();
        case 111:
            if (lookahead == 'o')
                ADVANCE(112);
            LEX_ERROR();
        case 112:
            if (lookahead == 'n')
                ADVANCE(113);
            LEX_ERROR();
        case 113:
            ACCEPT_TOKEN(anon_sym_OSXApplicationExtension);
        case 114:
            if (lookahead == 'O')
                ADVANCE(115);
            LEX_ERROR();
        case 115:
            if (lookahead == 'S')
                ADVANCE(116);
            LEX_ERROR();
        case 116:
            if (lookahead == 'A')
                ADVANCE(117);
            ACCEPT_TOKEN(anon_sym_iOS);
        case 117:
            if (lookahead == 'p')
                ADVANCE(118);
            LEX_ERROR();
        case 118:
            if (lookahead == 'p')
                ADVANCE(119);
            LEX_ERROR();
        case 119:
            if (lookahead == 'l')
                ADVANCE(120);
            LEX_ERROR();
        case 120:
            if (lookahead == 'i')
                ADVANCE(121);
            LEX_ERROR();
        case 121:
            if (lookahead == 'c')
                ADVANCE(122);
            LEX_ERROR();
        case 122:
            if (lookahead == 'a')
                ADVANCE(123);
            LEX_ERROR();
        case 123:
            if (lookahead == 't')
                ADVANCE(124);
            LEX_ERROR();
        case 124:
            if (lookahead == 'i')
                ADVANCE(125);
            LEX_ERROR();
        case 125:
            if (lookahead == 'o')
                ADVANCE(126);
            LEX_ERROR();
        case 126:
            if (lookahead == 'n')
                ADVANCE(127);
            LEX_ERROR();
        case 127:
            if (lookahead == 'E')
                ADVANCE(128);
            LEX_ERROR();
        case 128:
            if (lookahead == 'x')
                ADVANCE(129);
            LEX_ERROR();
        case 129:
            if (lookahead == 't')
                ADVANCE(130);
            LEX_ERROR();
        case 130:
            if (lookahead == 'e')
                ADVANCE(131);
            LEX_ERROR();
        case 131:
            if (lookahead == 'n')
                ADVANCE(132);
            LEX_ERROR();
        case 132:
            if (lookahead == 's')
                ADVANCE(133);
            LEX_ERROR();
        case 133:
            if (lookahead == 'i')
                ADVANCE(134);
            LEX_ERROR();
        case 134:
            if (lookahead == 'o')
                ADVANCE(135);
            LEX_ERROR();
        case 135:
            if (lookahead == 'n')
                ADVANCE(136);
            LEX_ERROR();
        case 136:
            ACCEPT_TOKEN(anon_sym_iOSApplicationExtension);
        case 137:
            if (lookahead == 'v')
                ADVANCE(138);
            LEX_ERROR();
        case 138:
            if (lookahead == 'O')
                ADVANCE(139);
            LEX_ERROR();
        case 139:
            if (lookahead == 'S')
                ADVANCE(140);
            LEX_ERROR();
        case 140:
            ACCEPT_TOKEN(anon_sym_tvOS);
        case 141:
            if (lookahead == 'a')
                ADVANCE(142);
            LEX_ERROR();
        case 142:
            if (lookahead == 't')
                ADVANCE(143);
            LEX_ERROR();
        case 143:
            if (lookahead == 'c')
                ADVANCE(144);
            LEX_ERROR();
        case 144:
            if (lookahead == 'h')
                ADVANCE(145);
            LEX_ERROR();
        case 145:
            if (lookahead == 'O')
                ADVANCE(146);
            LEX_ERROR();
        case 146:
            if (lookahead == 'S')
                ADVANCE(147);
            LEX_ERROR();
        case 147:
            ACCEPT_TOKEN(anon_sym_watchOS);
        case 148:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(148);
            if (lookahead == ')')
                ADVANCE(149);
            if (lookahead == ',')
                ADVANCE(87);
            LEX_ERROR();
        case 149:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 150:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(150);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(151);
            LEX_ERROR();
        case 151:
            if (lookahead == '.')
                ADVANCE(152);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(151);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 152:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(153);
            LEX_ERROR();
        case 153:
            if (lookahead == '.')
                ADVANCE(154);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(153);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 154:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(155);
            LEX_ERROR();
        case 155:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(155);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 156:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(156);
            if (lookahead == ')')
                ADVANCE(149);
            LEX_ERROR();
        case 157:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(157);
            if (lookahead == '=')
                ADVANCE(158);
            if (lookahead == '?')
                ADVANCE(159);
            if (lookahead == 'a')
                ADVANCE(160);
            LEX_ERROR();
        case 158:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 159:
            ACCEPT_TOKEN(anon_sym_QMARK);
        case 160:
            if (lookahead == 's')
                ADVANCE(161);
            LEX_ERROR();
        case 161:
            ACCEPT_TOKEN(anon_sym_as);
        case 162:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(162);
            if (lookahead == '.')
                ADVANCE(32);
            LEX_ERROR();
        case 163:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(163);
            if (lookahead == '(')
                ADVANCE(31);
            if (lookahead == ')')
                ADVANCE(149);
            if (lookahead == '.')
                ADVANCE(32);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(33);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(38);
            if (lookahead == 'l')
                ADVANCE(40);
            if (lookahead == 'v')
                ADVANCE(43);
            LEX_ERROR();
        case 164:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(164);
            if (lookahead == '.')
                ADVANCE(32);
            if (lookahead == '=')
                ADVANCE(158);
            if (lookahead == '?')
                ADVANCE(159);
            if (lookahead == 'a')
                ADVANCE(160);
            LEX_ERROR();
        case 165:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(165);
            if (lookahead == '(')
                ADVANCE(31);
            if (lookahead == '=')
                ADVANCE(158);
            if (lookahead == '?')
                ADVANCE(159);
            if (lookahead == 'a')
                ADVANCE(160);
            LEX_ERROR();
        case 166:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(166);
            if (lookahead == ')')
                ADVANCE(149);
            if (lookahead == ',')
                ADVANCE(87);
            if (lookahead == '?')
                ADVANCE(159);
            if (lookahead == 'a')
                ADVANCE(160);
            LEX_ERROR();
        case 167:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(167);
            if (lookahead == ')')
                ADVANCE(149);
            if (lookahead == ',')
                ADVANCE(87);
            if (lookahead == '.')
                ADVANCE(32);
            if (lookahead == '?')
                ADVANCE(159);
            if (lookahead == 'a')
                ADVANCE(160);
            LEX_ERROR();
        case 168:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(168);
            if (lookahead == '(')
                ADVANCE(31);
            if (lookahead == ')')
                ADVANCE(149);
            if (lookahead == ',')
                ADVANCE(87);
            if (lookahead == '?')
                ADVANCE(159);
            if (lookahead == 'a')
                ADVANCE(160);
            LEX_ERROR();
        case 169:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(169);
            if (lookahead == '#')
                ADVANCE(47);
            if (lookahead == 'c')
                ADVANCE(61);
            LEX_ERROR();
        case 170:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(170);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(16);
            if (lookahead == 'w')
                ADVANCE(22);
            if (lookahead == '}')
                ADVANCE(72);
            LEX_ERROR();
        case 171:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(171);
            if (lookahead == ';')
                ADVANCE(29);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(16);
            if (lookahead == 'w')
                ADVANCE(22);
            if (lookahead == '}')
                ADVANCE(72);
            LEX_ERROR();
        case 172:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(172);
            if (lookahead == ';')
                ADVANCE(29);
            LEX_ERROR();
        case 173:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(173);
            if (lookahead == ':')
                ADVANCE(76);
            if (lookahead == '?')
                ADVANCE(159);
            if (lookahead == 'a')
                ADVANCE(160);
            if (lookahead == 'i')
                ADVANCE(174);
            LEX_ERROR();
        case 174:
            if (lookahead == 'n')
                ADVANCE(175);
            LEX_ERROR();
        case 175:
            ACCEPT_TOKEN(anon_sym_in);
        case 176:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(176);
            if (lookahead == ',')
                ADVANCE(87);
            if (lookahead == ':')
                ADVANCE(76);
            if (lookahead == ';')
                ADVANCE(29);
            if (lookahead == '?')
                ADVANCE(159);
            if (lookahead == 'a')
                ADVANCE(160);
            if (lookahead == 'i')
                ADVANCE(174);
            LEX_ERROR();
        case 177:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(177);
            if (lookahead == ';')
                ADVANCE(29);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 178:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(178);
            if (lookahead == '(')
                ADVANCE(31);
            if (lookahead == ')')
                ADVANCE(149);
            if (lookahead == '.')
                ADVANCE(32);
            if (lookahead == ';')
                ADVANCE(29);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(33);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(38);
            if (lookahead == 'l')
                ADVANCE(40);
            if (lookahead == 'v')
                ADVANCE(43);
            LEX_ERROR();
        case 179:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(179);
            if (lookahead == ',')
                ADVANCE(87);
            if (lookahead == '.')
                ADVANCE(32);
            if (lookahead == ':')
                ADVANCE(76);
            if (lookahead == ';')
                ADVANCE(29);
            if (lookahead == '?')
                ADVANCE(159);
            if (lookahead == 'a')
                ADVANCE(160);
            if (lookahead == 'i')
                ADVANCE(174);
            LEX_ERROR();
        case 180:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(180);
            if (lookahead == '.')
                ADVANCE(32);
            if (lookahead == ':')
                ADVANCE(76);
            if (lookahead == '?')
                ADVANCE(159);
            if (lookahead == 'a')
                ADVANCE(160);
            if (lookahead == 'i')
                ADVANCE(174);
            LEX_ERROR();
        case 181:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(181);
            if (lookahead == '(')
                ADVANCE(31);
            if (lookahead == ':')
                ADVANCE(76);
            if (lookahead == '?')
                ADVANCE(159);
            if (lookahead == 'a')
                ADVANCE(160);
            if (lookahead == 'i')
                ADVANCE(174);
            LEX_ERROR();
        case 182:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(182);
            if (lookahead == 'i')
                ADVANCE(174);
            LEX_ERROR();
        case 183:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(183);
            if (lookahead == '.')
                ADVANCE(32);
            if (lookahead == 'i')
                ADVANCE(174);
            LEX_ERROR();
        case 184:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(184);
            if (lookahead == ')')
                ADVANCE(149);
            if (lookahead == ',')
                ADVANCE(87);
            if (lookahead == ';')
                ADVANCE(29);
            if (lookahead == '?')
                ADVANCE(159);
            if (lookahead == 'a')
                ADVANCE(160);
            LEX_ERROR();
        case 185:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(185);
            if (lookahead == ')')
                ADVANCE(149);
            if (lookahead == ',')
                ADVANCE(87);
            if (lookahead == '.')
                ADVANCE(32);
            if (lookahead == ';')
                ADVANCE(29);
            if (lookahead == '?')
                ADVANCE(159);
            if (lookahead == 'a')
                ADVANCE(160);
            LEX_ERROR();
        case 186:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(186);
            if (lookahead == ')')
                ADVANCE(149);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 187:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(187);
            if (lookahead == ',')
                ADVANCE(87);
            if (lookahead == ';')
                ADVANCE(29);
            LEX_ERROR();
        case 188:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(188);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == '{')
                ADVANCE(59);
            LEX_ERROR();
        case 189:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(189);
            if (lookahead == '.')
                ADVANCE(32);
            if (lookahead == '{')
                ADVANCE(59);
            LEX_ERROR();
        case 190:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(190);
            if (lookahead == ',')
                ADVANCE(87);
            if (lookahead == ':')
                ADVANCE(76);
            if (lookahead == '?')
                ADVANCE(159);
            if (lookahead == 'a')
                ADVANCE(160);
            LEX_ERROR();
        case 191:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(191);
            if (lookahead == ',')
                ADVANCE(87);
            if (lookahead == '.')
                ADVANCE(32);
            if (lookahead == ':')
                ADVANCE(76);
            if (lookahead == '?')
                ADVANCE(159);
            if (lookahead == 'a')
                ADVANCE(160);
            LEX_ERROR();
        case 192:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(192);
            if (lookahead == '(')
                ADVANCE(31);
            if (lookahead == ',')
                ADVANCE(87);
            if (lookahead == ':')
                ADVANCE(76);
            if (lookahead == '?')
                ADVANCE(159);
            if (lookahead == 'a')
                ADVANCE(160);
            LEX_ERROR();
        case 193:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(193);
            if (lookahead == '#')
                ADVANCE(47);
            if (lookahead == '(')
                ADVANCE(31);
            if (lookahead == ')')
                ADVANCE(149);
            if (lookahead == '*')
                ADVANCE(90);
            if (lookahead == ',')
                ADVANCE(87);
            if (lookahead == '.')
                ADVANCE(32);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(151);
            if (lookahead == ':')
                ADVANCE(76);
            if (lookahead == ';')
                ADVANCE(29);
            if (lookahead == '=')
                ADVANCE(158);
            if (lookahead == '?')
                ADVANCE(159);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'b') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                (lookahead == 'u') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(194);
            if (lookahead == '_')
                ADVANCE(33);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(217);
            if (lookahead == 'c')
                ADVANCE(34);
            if (lookahead == 'd')
                ADVANCE(78);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(219);
            if (lookahead == 'l')
                ADVANCE(40);
            if (lookahead == 's')
                ADVANCE(16);
            if (lookahead == 't')
                ADVANCE(243);
            if (lookahead == 'v')
                ADVANCE(43);
            if (lookahead == 'w')
                ADVANCE(247);
            if (lookahead == '{')
                ADVANCE(59);
            if (lookahead == '}')
                ADVANCE(72);
            LEX_ERROR();
        case 194:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(195);
            ACCEPT_TOKEN(sym_identifier);
        case 195:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'W') ||
                (lookahead == 'Y') ||
                (lookahead == 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'X')
                ADVANCE(196);
            ACCEPT_TOKEN(sym_identifier);
        case 196:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (lookahead == 'A')
                ADVANCE(197);
            if (('B' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_OSX);
        case 197:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(198);
            ACCEPT_TOKEN(sym_identifier);
        case 198:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(199);
            ACCEPT_TOKEN(sym_identifier);
        case 199:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(200);
            ACCEPT_TOKEN(sym_identifier);
        case 200:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(201);
            ACCEPT_TOKEN(sym_identifier);
        case 201:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(202);
            ACCEPT_TOKEN(sym_identifier);
        case 202:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(203);
            ACCEPT_TOKEN(sym_identifier);
        case 203:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(204);
            ACCEPT_TOKEN(sym_identifier);
        case 204:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(205);
            ACCEPT_TOKEN(sym_identifier);
        case 205:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(206);
            ACCEPT_TOKEN(sym_identifier);
        case 206:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(207);
            ACCEPT_TOKEN(sym_identifier);
        case 207:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'D') ||
                ('F' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'E')
                ADVANCE(208);
            ACCEPT_TOKEN(sym_identifier);
        case 208:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(3);
            if (lookahead == 'x')
                ADVANCE(209);
            ACCEPT_TOKEN(sym_identifier);
        case 209:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(210);
            ACCEPT_TOKEN(sym_identifier);
        case 210:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(211);
            ACCEPT_TOKEN(sym_identifier);
        case 211:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(212);
            ACCEPT_TOKEN(sym_identifier);
        case 212:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(213);
            ACCEPT_TOKEN(sym_identifier);
        case 213:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(214);
            ACCEPT_TOKEN(sym_identifier);
        case 214:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(215);
            ACCEPT_TOKEN(sym_identifier);
        case 215:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(216);
            ACCEPT_TOKEN(sym_identifier);
        case 216:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_OSXApplicationExtension);
        case 217:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(218);
            ACCEPT_TOKEN(sym_identifier);
        case 218:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_as);
        case 219:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(220);
            if (lookahead == 'm')
                ADVANCE(11);
            if (lookahead == 'n')
                ADVANCE(242);
            if (lookahead == 's')
                ADVANCE(39);
            ACCEPT_TOKEN(sym_identifier);
        case 220:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(221);
            ACCEPT_TOKEN(sym_identifier);
        case 221:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (lookahead == 'A')
                ADVANCE(222);
            if (('B' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_iOS);
        case 222:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(223);
            ACCEPT_TOKEN(sym_identifier);
        case 223:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(224);
            ACCEPT_TOKEN(sym_identifier);
        case 224:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(225);
            ACCEPT_TOKEN(sym_identifier);
        case 225:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(226);
            ACCEPT_TOKEN(sym_identifier);
        case 226:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(227);
            ACCEPT_TOKEN(sym_identifier);
        case 227:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(228);
            ACCEPT_TOKEN(sym_identifier);
        case 228:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(229);
            ACCEPT_TOKEN(sym_identifier);
        case 229:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(230);
            ACCEPT_TOKEN(sym_identifier);
        case 230:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(231);
            ACCEPT_TOKEN(sym_identifier);
        case 231:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(232);
            ACCEPT_TOKEN(sym_identifier);
        case 232:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'D') ||
                ('F' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'E')
                ADVANCE(233);
            ACCEPT_TOKEN(sym_identifier);
        case 233:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(3);
            if (lookahead == 'x')
                ADVANCE(234);
            ACCEPT_TOKEN(sym_identifier);
        case 234:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(235);
            ACCEPT_TOKEN(sym_identifier);
        case 235:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(236);
            ACCEPT_TOKEN(sym_identifier);
        case 236:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(237);
            ACCEPT_TOKEN(sym_identifier);
        case 237:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(238);
            ACCEPT_TOKEN(sym_identifier);
        case 238:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(239);
            ACCEPT_TOKEN(sym_identifier);
        case 239:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(240);
            ACCEPT_TOKEN(sym_identifier);
        case 240:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(241);
            ACCEPT_TOKEN(sym_identifier);
        case 241:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_iOSApplicationExtension);
        case 242:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_in);
        case 243:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'v')
                ADVANCE(244);
            ACCEPT_TOKEN(sym_identifier);
        case 244:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(245);
            ACCEPT_TOKEN(sym_identifier);
        case 245:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(246);
            ACCEPT_TOKEN(sym_identifier);
        case 246:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_tvOS);
        case 247:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(248);
            if (lookahead == 'h')
                ADVANCE(23);
            ACCEPT_TOKEN(sym_identifier);
        case 248:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(249);
            ACCEPT_TOKEN(sym_identifier);
        case 249:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(250);
            ACCEPT_TOKEN(sym_identifier);
        case 250:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(251);
            ACCEPT_TOKEN(sym_identifier);
        case 251:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(252);
            ACCEPT_TOKEN(sym_identifier);
        case 252:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(253);
            ACCEPT_TOKEN(sym_identifier);
        case 253:
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
                ADVANCE(193);
            if (lookahead == '#')
                ADVANCE(47);
            if (lookahead == '(')
                ADVANCE(31);
            if (lookahead == ')')
                ADVANCE(149);
            if (lookahead == '*')
                ADVANCE(90);
            if (lookahead == ',')
                ADVANCE(87);
            if (lookahead == '.')
                ADVANCE(32);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(151);
            if (lookahead == ':')
                ADVANCE(76);
            if (lookahead == ';')
                ADVANCE(29);
            if (lookahead == '=')
                ADVANCE(158);
            if (lookahead == '?')
                ADVANCE(159);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'b') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                (lookahead == 'u') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(194);
            if (lookahead == '_')
                ADVANCE(33);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(217);
            if (lookahead == 'c')
                ADVANCE(34);
            if (lookahead == 'd')
                ADVANCE(78);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(219);
            if (lookahead == 'l')
                ADVANCE(40);
            if (lookahead == 's')
                ADVANCE(16);
            if (lookahead == 't')
                ADVANCE(243);
            if (lookahead == 'v')
                ADVANCE(43);
            if (lookahead == 'w')
                ADVANCE(247);
            if (lookahead == '{')
                ADVANCE(59);
            if (lookahead == '}')
                ADVANCE(72);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 1,
    [1] = 27,
    [2] = 1,
    [3] = 27,
    [4] = 28,
    [5] = 27,
    [6] = 30,
    [7] = 46,
    [8] = 57,
    [9] = 28,
    [10] = 58,
    [11] = 58,
    [12] = 60,
    [13] = 60,
    [14] = 73,
    [15] = 74,
    [16] = 28,
    [17] = 75,
    [18] = 77,
    [19] = 77,
    [20] = 85,
    [21] = 60,
    [22] = 30,
    [23] = 46,
    [24] = 57,
    [25] = 85,
    [26] = 58,
    [27] = 60,
    [28] = 73,
    [29] = 85,
    [30] = 85,
    [31] = 58,
    [32] = 86,
    [33] = 86,
    [34] = 86,
    [35] = 86,
    [36] = 74,
    [37] = 88,
    [38] = 86,
    [39] = 89,
    [40] = 148,
    [41] = 150,
    [42] = 148,
    [43] = 156,
    [44] = 86,
    [45] = 89,
    [46] = 148,
    [47] = 150,
    [48] = 148,
    [49] = 156,
    [50] = 156,
    [51] = 86,
    [52] = 156,
    [53] = 86,
    [54] = 157,
    [55] = 157,
    [56] = 162,
    [57] = 162,
    [58] = 163,
    [59] = 74,
    [60] = 57,
    [61] = 57,
    [62] = 164,
    [63] = 157,
    [64] = 157,
    [65] = 164,
    [66] = 164,
    [67] = 57,
    [68] = 157,
    [69] = 165,
    [70] = 157,
    [71] = 157,
    [72] = 157,
    [73] = 57,
    [74] = 157,
    [75] = 166,
    [76] = 166,
    [77] = 156,
    [78] = 162,
    [79] = 163,
    [80] = 157,
    [81] = 74,
    [82] = 57,
    [83] = 57,
    [84] = 167,
    [85] = 166,
    [86] = 166,
    [87] = 167,
    [88] = 167,
    [89] = 57,
    [90] = 166,
    [91] = 168,
    [92] = 166,
    [93] = 166,
    [94] = 166,
    [95] = 57,
    [96] = 166,
    [97] = 156,
    [98] = 166,
    [99] = 166,
    [100] = 57,
    [101] = 168,
    [102] = 166,
    [103] = 157,
    [104] = 156,
    [105] = 74,
    [106] = 166,
    [107] = 156,
    [108] = 57,
    [109] = 162,
    [110] = 162,
    [111] = 57,
    [112] = 165,
    [113] = 157,
    [114] = 57,
    [115] = 86,
    [116] = 86,
    [117] = 169,
    [118] = 86,
    [119] = 58,
    [120] = 169,
    [121] = 86,
    [122] = 58,
    [123] = 57,
    [124] = 58,
    [125] = 58,
    [126] = 58,
    [127] = 85,
    [128] = 170,
    [129] = 170,
    [130] = 73,
    [131] = 171,
    [132] = 73,
    [133] = 30,
    [134] = 46,
    [135] = 57,
    [136] = 171,
    [137] = 58,
    [138] = 60,
    [139] = 73,
    [140] = 171,
    [141] = 171,
    [142] = 58,
    [143] = 171,
    [144] = 170,
    [145] = 73,
    [146] = 171,
    [147] = 172,
    [148] = 58,
    [149] = 172,
    [150] = 57,
    [151] = 173,
    [152] = 173,
    [153] = 176,
    [154] = 162,
    [155] = 177,
    [156] = 178,
    [157] = 74,
    [158] = 74,
    [159] = 74,
    [160] = 57,
    [161] = 57,
    [162] = 179,
    [163] = 173,
    [164] = 173,
    [165] = 180,
    [166] = 180,
    [167] = 57,
    [168] = 173,
    [169] = 181,
    [170] = 173,
    [171] = 163,
    [172] = 156,
    [173] = 173,
    [174] = 173,
    [175] = 173,
    [176] = 180,
    [177] = 173,
    [178] = 57,
    [179] = 173,
    [180] = 173,
    [181] = 182,
    [182] = 57,
    [183] = 57,
    [184] = 182,
    [185] = 182,
    [186] = 183,
    [187] = 183,
    [188] = 57,
    [189] = 182,
    [190] = 58,
    [191] = 171,
    [192] = 57,
    [193] = 58,
    [194] = 171,
    [195] = 172,
    [196] = 156,
    [197] = 184,
    [198] = 177,
    [199] = 74,
    [200] = 185,
    [201] = 172,
    [202] = 186,
    [203] = 172,
    [204] = 156,
    [205] = 156,
    [206] = 186,
    [207] = 156,
    [208] = 172,
    [209] = 57,
    [210] = 187,
    [211] = 187,
    [212] = 172,
    [213] = 58,
    [214] = 171,
    [215] = 177,
    [216] = 172,
    [217] = 186,
    [218] = 156,
    [219] = 172,
    [220] = 188,
    [221] = 58,
    [222] = 188,
    [223] = 58,
    [224] = 57,
    [225] = 181,
    [226] = 173,
    [227] = 182,
    [228] = 57,
    [229] = 58,
    [230] = 171,
    [231] = 75,
    [232] = 75,
    [233] = 58,
    [234] = 57,
    [235] = 58,
    [236] = 58,
    [237] = 189,
    [238] = 189,
    [239] = 57,
    [240] = 58,
    [241] = 172,
    [242] = 170,
    [243] = 73,
    [244] = 172,
    [245] = 171,
    [246] = 177,
    [247] = 172,
    [248] = 188,
    [249] = 58,
    [250] = 170,
    [251] = 85,
    [252] = 73,
    [253] = 58,
    [254] = 173,
    [255] = 178,
    [256] = 74,
    [257] = 173,
    [258] = 182,
    [259] = 57,
    [260] = 58,
    [261] = 85,
    [262] = 57,
    [263] = 58,
    [264] = 85,
    [265] = 156,
    [266] = 58,
    [267] = 85,
    [268] = 182,
    [269] = 57,
    [270] = 58,
    [271] = 85,
    [272] = 85,
    [273] = 77,
    [274] = 60,
    [275] = 190,
    [276] = 190,
    [277] = 162,
    [278] = 163,
    [279] = 74,
    [280] = 57,
    [281] = 57,
    [282] = 191,
    [283] = 190,
    [284] = 190,
    [285] = 191,
    [286] = 191,
    [287] = 57,
    [288] = 190,
    [289] = 192,
    [290] = 190,
    [291] = 190,
    [292] = 190,
    [293] = 57,
    [294] = 190,
    [295] = 156,
    [296] = 190,
    [297] = 190,
    [298] = 57,
    [299] = 192,
    [300] = 190,
    [301] = 75,
    [302] = 74,
    [303] = 77,
    [304] = 60,
    [305] = 190,
    [306] = 75,
    [307] = 77,
    [308] = 60,
    [309] = 28,
    [310] = 73,
    [311] = 58,
    [312] = 28,
    [313] = 170,
    [314] = 73,
    [315] = 28,
    [316] = 58,
    [317] = 173,
    [318] = 178,
    [319] = 74,
    [320] = 173,
    [321] = 182,
    [322] = 57,
    [323] = 58,
    [324] = 28,
    [325] = 57,
    [326] = 58,
    [327] = 28,
    [328] = 156,
    [329] = 58,
    [330] = 28,
    [331] = 182,
    [332] = 57,
    [333] = 58,
    [334] = 28,
    [335] = 28,
    [336] = 1,
    [337] = 27,
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
        [sym_switch_statement] = ACTIONS(SHIFT(4)),
        [sym__expression] = ACTIONS(SHIFT(4)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(5)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statements, 0)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_switch] = ACTIONS(SHIFT(8)),
        [sym__declaration] = ACTIONS(SHIFT(4)),
        [sym_identifier] = ACTIONS(SHIFT(9)),
    },
    [1] = {
        [ts_builtin_sym_end] = ACTIONS(ACCEPT_INPUT()),
    },
    [2] = {
        [sym__statement] = ACTIONS(SHIFT(2)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_switch_statement] = ACTIONS(SHIFT(4)),
        [sym__expression] = ACTIONS(SHIFT(4)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(337)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_switch] = ACTIONS(SHIFT(8)),
        [sym__declaration] = ACTIONS(SHIFT(4)),
        [sym_identifier] = ACTIONS(SHIFT(9)),
    },
    [3] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_program, 1)),
    },
    [4] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(336)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 1)),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statements, 1)),
    },
    [6] = {
        [sym__for_init] = ACTIONS(SHIFT(147)),
        [sym__for_condition] = ACTIONS(SHIFT(316)),
        [sym_variable_declaration] = ACTIONS(SHIFT(149)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(150)),
        [sym__pattern] = ACTIONS(SHIFT(317)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(152)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(152)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(152)),
        [sym_optional_pattern] = ACTIONS(SHIFT(152)),
        [sym_is_pattern] = ACTIONS(SHIFT(152)),
        [sym_as_pattern] = ACTIONS(SHIFT(152)),
        [sym__expression] = ACTIONS(SHIFT(153)),
        [sym__expression_list] = ACTIONS(SHIFT(149)),
        [sym__type_identifier] = ACTIONS(SHIFT(154)),
        [sym__type_name] = ACTIONS(SHIFT(57)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(155)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(318)),
        [anon_sym_case] = ACTIONS(SHIFT(319)),
        [anon_sym_var] = ACTIONS(SHIFT(158)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(152)),
        [anon_sym_let] = ACTIONS(SHIFT(159)),
        [anon_sym_DOT] = ACTIONS(SHIFT(160)),
        [anon_sym_is] = ACTIONS(SHIFT(161)),
        [sym_identifier] = ACTIONS(SHIFT(162)),
    },
    [7] = {
        [sym__condition_clause] = ACTIONS(SHIFT(311)),
        [sym__condition] = ACTIONS(SHIFT(32)),
        [sym_availability_condition] = ACTIONS(SHIFT(33)),
        [sym_case_condition] = ACTIONS(SHIFT(34)),
        [sym__expression] = ACTIONS(SHIFT(35)),
        [anon_sym_case] = ACTIONS(SHIFT(36)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(37)),
        [sym_identifier] = ACTIONS(SHIFT(38)),
    },
    [8] = {
        [sym__expression] = ACTIONS(SHIFT(10)),
        [sym_identifier] = ACTIONS(SHIFT(11)),
    },
    [9] = {
        [sym__statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [10] = {
        [anon_sym_LBRACE] = ACTIONS(SHIFT(12)),
    },
    [11] = {
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [12] = {
        [sym_case_statement] = ACTIONS(SHIFT(13)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(14)),
        [anon_sym_case] = ACTIONS(SHIFT(15)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(16)),
        [anon_sym_default] = ACTIONS(SHIFT(17)),
    },
    [13] = {
        [sym_case_statement] = ACTIONS(SHIFT(13)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(310)),
        [anon_sym_case] = ACTIONS(SHIFT(15)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 1)),
        [anon_sym_default] = ACTIONS(SHIFT(17)),
    },
    [14] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(309)),
    },
    [15] = {
        [sym__pattern] = ACTIONS(SHIFT(275)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(276)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(276)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(276)),
        [sym_optional_pattern] = ACTIONS(SHIFT(276)),
        [sym_is_pattern] = ACTIONS(SHIFT(276)),
        [sym_as_pattern] = ACTIONS(SHIFT(276)),
        [sym__expression] = ACTIONS(SHIFT(276)),
        [sym__type_identifier] = ACTIONS(SHIFT(277)),
        [sym__type_name] = ACTIONS(SHIFT(57)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(278)),
        [anon_sym_var] = ACTIONS(SHIFT(279)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(276)),
        [anon_sym_let] = ACTIONS(SHIFT(279)),
        [anon_sym_DOT] = ACTIONS(SHIFT(280)),
        [anon_sym_is] = ACTIONS(SHIFT(281)),
        [sym_identifier] = ACTIONS(SHIFT(282)),
    },
    [16] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 4)),
    },
    [17] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(18)),
    },
    [18] = {
        [sym__statement] = ACTIONS(SHIFT(19)),
        [sym_for_statement] = ACTIONS(SHIFT(20)),
        [sym_for_in_statement] = ACTIONS(SHIFT(20)),
        [sym_while_statement] = ACTIONS(SHIFT(20)),
        [sym_switch_statement] = ACTIONS(SHIFT(20)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [sym__expression] = ACTIONS(SHIFT(20)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(21)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_for] = ACTIONS(SHIFT(22)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_while] = ACTIONS(SHIFT(23)),
        [anon_sym_switch] = ACTIONS(SHIFT(24)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [sym__declaration] = ACTIONS(SHIFT(20)),
        [sym_identifier] = ACTIONS(SHIFT(25)),
    },
    [19] = {
        [sym__statement] = ACTIONS(SHIFT(19)),
        [sym_for_statement] = ACTIONS(SHIFT(20)),
        [sym_for_in_statement] = ACTIONS(SHIFT(20)),
        [sym_while_statement] = ACTIONS(SHIFT(20)),
        [sym_switch_statement] = ACTIONS(SHIFT(20)),
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [sym__expression] = ACTIONS(SHIFT(20)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(274)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [anon_sym_for] = ACTIONS(SHIFT(22)),
        [anon_sym_case] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [anon_sym_while] = ACTIONS(SHIFT(23)),
        [anon_sym_switch] = ACTIONS(SHIFT(24)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [anon_sym_default] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [sym__declaration] = ACTIONS(SHIFT(20)),
        [sym_identifier] = ACTIONS(SHIFT(25)),
    },
    [20] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_case_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(273)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_case] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_default] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 1)),
    },
    [21] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 3)),
    },
    [22] = {
        [sym__for_init] = ACTIONS(SHIFT(147)),
        [sym__for_condition] = ACTIONS(SHIFT(253)),
        [sym_variable_declaration] = ACTIONS(SHIFT(149)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(150)),
        [sym__pattern] = ACTIONS(SHIFT(254)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(152)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(152)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(152)),
        [sym_optional_pattern] = ACTIONS(SHIFT(152)),
        [sym_is_pattern] = ACTIONS(SHIFT(152)),
        [sym_as_pattern] = ACTIONS(SHIFT(152)),
        [sym__expression] = ACTIONS(SHIFT(153)),
        [sym__expression_list] = ACTIONS(SHIFT(149)),
        [sym__type_identifier] = ACTIONS(SHIFT(154)),
        [sym__type_name] = ACTIONS(SHIFT(57)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(155)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(255)),
        [anon_sym_case] = ACTIONS(SHIFT(256)),
        [anon_sym_var] = ACTIONS(SHIFT(158)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(152)),
        [anon_sym_let] = ACTIONS(SHIFT(159)),
        [anon_sym_DOT] = ACTIONS(SHIFT(160)),
        [anon_sym_is] = ACTIONS(SHIFT(161)),
        [sym_identifier] = ACTIONS(SHIFT(162)),
    },
    [23] = {
        [sym__condition_clause] = ACTIONS(SHIFT(31)),
        [sym__condition] = ACTIONS(SHIFT(32)),
        [sym_availability_condition] = ACTIONS(SHIFT(33)),
        [sym_case_condition] = ACTIONS(SHIFT(34)),
        [sym__expression] = ACTIONS(SHIFT(35)),
        [anon_sym_case] = ACTIONS(SHIFT(36)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(37)),
        [sym_identifier] = ACTIONS(SHIFT(38)),
    },
    [24] = {
        [sym__expression] = ACTIONS(SHIFT(26)),
        [sym_identifier] = ACTIONS(SHIFT(11)),
    },
    [25] = {
        [sym__statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_case_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_case] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_default] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [26] = {
        [anon_sym_LBRACE] = ACTIONS(SHIFT(27)),
    },
    [27] = {
        [sym_case_statement] = ACTIONS(SHIFT(13)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(28)),
        [anon_sym_case] = ACTIONS(SHIFT(15)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(29)),
        [anon_sym_default] = ACTIONS(SHIFT(17)),
    },
    [28] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(30)),
    },
    [29] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 4)),
    },
    [30] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 5)),
    },
    [31] = {
        [sym__code_block] = ACTIONS(SHIFT(127)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(128)),
    },
    [32] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(126)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(120)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [33] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1), SHIFT(123)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [34] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [35] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(117)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [36] = {
        [sym__pattern] = ACTIONS(SHIFT(54)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(55)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(55)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(55)),
        [sym_optional_pattern] = ACTIONS(SHIFT(55)),
        [sym_is_pattern] = ACTIONS(SHIFT(55)),
        [sym_as_pattern] = ACTIONS(SHIFT(55)),
        [sym__expression] = ACTIONS(SHIFT(55)),
        [sym__type_identifier] = ACTIONS(SHIFT(56)),
        [sym__type_name] = ACTIONS(SHIFT(57)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(58)),
        [anon_sym_var] = ACTIONS(SHIFT(59)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(55)),
        [anon_sym_let] = ACTIONS(SHIFT(59)),
        [anon_sym_DOT] = ACTIONS(SHIFT(60)),
        [anon_sym_is] = ACTIONS(SHIFT(61)),
        [sym_identifier] = ACTIONS(SHIFT(62)),
    },
    [37] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(39)),
    },
    [38] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [39] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(40)),
        [anon_sym_iOS] = ACTIONS(SHIFT(41)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(41)),
        [anon_sym_OSX] = ACTIONS(SHIFT(41)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(41)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(41)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(41)),
    },
    [40] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(52)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(53)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(45)),
    },
    [41] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(42)),
    },
    [42] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(43)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(44)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(45)),
    },
    [43] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(51)),
    },
    [44] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 5)),
    },
    [45] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(46)),
        [anon_sym_iOS] = ACTIONS(SHIFT(47)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(47)),
        [anon_sym_OSX] = ACTIONS(SHIFT(47)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(47)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(47)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(47)),
    },
    [46] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(50)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(45)),
    },
    [47] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(48)),
    },
    [48] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(49)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 3)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(45)),
    },
    [49] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 4)),
    },
    [50] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 3)),
    },
    [51] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 6)),
    },
    [52] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(44)),
    },
    [53] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 4)),
    },
    [54] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(114)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(72)),
        [anon_sym_as] = ACTIONS(SHIFT(73)),
    },
    [55] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [56] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(111)),
    },
    [57] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(108)),
    },
    [58] = {
        [sym__pattern] = ACTIONS(SHIFT(75)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(76)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(76)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(77)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(76)),
        [sym_optional_pattern] = ACTIONS(SHIFT(76)),
        [sym_is_pattern] = ACTIONS(SHIFT(76)),
        [sym_as_pattern] = ACTIONS(SHIFT(76)),
        [sym__expression] = ACTIONS(SHIFT(76)),
        [sym__type_identifier] = ACTIONS(SHIFT(78)),
        [sym__type_name] = ACTIONS(SHIFT(57)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(79)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(80)),
        [anon_sym_var] = ACTIONS(SHIFT(81)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(76)),
        [anon_sym_let] = ACTIONS(SHIFT(81)),
        [anon_sym_DOT] = ACTIONS(SHIFT(82)),
        [anon_sym_is] = ACTIONS(SHIFT(83)),
        [sym_identifier] = ACTIONS(SHIFT(84)),
    },
    [59] = {
        [sym__pattern] = ACTIONS(SHIFT(71)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(55)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(55)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(55)),
        [sym_optional_pattern] = ACTIONS(SHIFT(55)),
        [sym_is_pattern] = ACTIONS(SHIFT(55)),
        [sym_as_pattern] = ACTIONS(SHIFT(55)),
        [sym__expression] = ACTIONS(SHIFT(55)),
        [sym__type_identifier] = ACTIONS(SHIFT(56)),
        [sym__type_name] = ACTIONS(SHIFT(57)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(58)),
        [anon_sym_var] = ACTIONS(SHIFT(59)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(55)),
        [anon_sym_let] = ACTIONS(SHIFT(59)),
        [anon_sym_DOT] = ACTIONS(SHIFT(60)),
        [anon_sym_is] = ACTIONS(SHIFT(61)),
        [sym_identifier] = ACTIONS(SHIFT(62)),
    },
    [60] = {
        [sym_identifier] = ACTIONS(SHIFT(69)),
    },
    [61] = {
        [sym_type] = ACTIONS(SHIFT(63)),
        [sym__type_identifier] = ACTIONS(SHIFT(64)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [sym_identifier] = ACTIONS(SHIFT(66)),
    },
    [62] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [63] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [64] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [65] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(67)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [66] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [67] = {
        [sym__type_identifier] = ACTIONS(SHIFT(68)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [sym_identifier] = ACTIONS(SHIFT(66)),
    },
    [68] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [69] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(70)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(58)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [70] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [71] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(72)),
        [anon_sym_as] = ACTIONS(SHIFT(73)),
    },
    [72] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [73] = {
        [sym_type] = ACTIONS(SHIFT(74)),
        [sym__type_identifier] = ACTIONS(SHIFT(64)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [sym_identifier] = ACTIONS(SHIFT(66)),
    },
    [74] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [75] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(104)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(105)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(94)),
        [anon_sym_as] = ACTIONS(SHIFT(95)),
    },
    [76] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [77] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(103)),
    },
    [78] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(100)),
    },
    [79] = {
        [sym__pattern] = ACTIONS(SHIFT(75)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(76)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(76)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(97)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(76)),
        [sym_optional_pattern] = ACTIONS(SHIFT(76)),
        [sym_is_pattern] = ACTIONS(SHIFT(76)),
        [sym_as_pattern] = ACTIONS(SHIFT(76)),
        [sym__expression] = ACTIONS(SHIFT(76)),
        [sym__type_identifier] = ACTIONS(SHIFT(78)),
        [sym__type_name] = ACTIONS(SHIFT(57)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(79)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(98)),
        [anon_sym_var] = ACTIONS(SHIFT(81)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(76)),
        [anon_sym_let] = ACTIONS(SHIFT(81)),
        [anon_sym_DOT] = ACTIONS(SHIFT(82)),
        [anon_sym_is] = ACTIONS(SHIFT(83)),
        [sym_identifier] = ACTIONS(SHIFT(84)),
    },
    [80] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [81] = {
        [sym__pattern] = ACTIONS(SHIFT(93)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(76)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(76)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(76)),
        [sym_optional_pattern] = ACTIONS(SHIFT(76)),
        [sym_is_pattern] = ACTIONS(SHIFT(76)),
        [sym_as_pattern] = ACTIONS(SHIFT(76)),
        [sym__expression] = ACTIONS(SHIFT(76)),
        [sym__type_identifier] = ACTIONS(SHIFT(78)),
        [sym__type_name] = ACTIONS(SHIFT(57)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(79)),
        [anon_sym_var] = ACTIONS(SHIFT(81)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(76)),
        [anon_sym_let] = ACTIONS(SHIFT(81)),
        [anon_sym_DOT] = ACTIONS(SHIFT(82)),
        [anon_sym_is] = ACTIONS(SHIFT(83)),
        [sym_identifier] = ACTIONS(SHIFT(84)),
    },
    [82] = {
        [sym_identifier] = ACTIONS(SHIFT(91)),
    },
    [83] = {
        [sym_type] = ACTIONS(SHIFT(85)),
        [sym__type_identifier] = ACTIONS(SHIFT(86)),
        [sym__type_name] = ACTIONS(SHIFT(87)),
        [sym_identifier] = ACTIONS(SHIFT(88)),
    },
    [84] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [85] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [86] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [87] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(89)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [88] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [89] = {
        [sym__type_identifier] = ACTIONS(SHIFT(90)),
        [sym__type_name] = ACTIONS(SHIFT(87)),
        [sym_identifier] = ACTIONS(SHIFT(88)),
    },
    [90] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [91] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(92)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(79)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [92] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [93] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(94)),
        [anon_sym_as] = ACTIONS(SHIFT(95)),
    },
    [94] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [95] = {
        [sym_type] = ACTIONS(SHIFT(96)),
        [sym__type_identifier] = ACTIONS(SHIFT(86)),
        [sym__type_name] = ACTIONS(SHIFT(87)),
        [sym_identifier] = ACTIONS(SHIFT(88)),
    },
    [96] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [97] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(99)),
    },
    [98] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [99] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [100] = {
        [sym_identifier] = ACTIONS(SHIFT(101)),
    },
    [101] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(102)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(79)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [102] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [103] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [104] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 2)),
    },
    [105] = {
        [sym__pattern] = ACTIONS(SHIFT(106)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(76)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(76)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(76)),
        [sym_optional_pattern] = ACTIONS(SHIFT(76)),
        [sym_is_pattern] = ACTIONS(SHIFT(76)),
        [sym_as_pattern] = ACTIONS(SHIFT(76)),
        [sym__expression] = ACTIONS(SHIFT(76)),
        [sym__type_identifier] = ACTIONS(SHIFT(78)),
        [sym__type_name] = ACTIONS(SHIFT(57)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(79)),
        [anon_sym_var] = ACTIONS(SHIFT(81)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(76)),
        [anon_sym_let] = ACTIONS(SHIFT(81)),
        [anon_sym_DOT] = ACTIONS(SHIFT(82)),
        [anon_sym_is] = ACTIONS(SHIFT(83)),
        [sym_identifier] = ACTIONS(SHIFT(84)),
    },
    [106] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(107)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(105)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(94)),
        [anon_sym_as] = ACTIONS(SHIFT(95)),
    },
    [107] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [108] = {
        [sym__type_identifier] = ACTIONS(SHIFT(109)),
        [sym__type_name] = ACTIONS(SHIFT(57)),
        [sym_identifier] = ACTIONS(SHIFT(110)),
    },
    [109] = {
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [110] = {
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [111] = {
        [sym_identifier] = ACTIONS(SHIFT(112)),
    },
    [112] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(113)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(58)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [113] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [114] = {
        [sym__expression] = ACTIONS(SHIFT(115)),
        [sym_identifier] = ACTIONS(SHIFT(116)),
    },
    [115] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_case_condition, 4)),
    },
    [116] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [117] = {
        [sym__condition] = ACTIONS(SHIFT(118)),
        [sym_availability_condition] = ACTIONS(SHIFT(34)),
        [sym_case_condition] = ACTIONS(SHIFT(34)),
        [anon_sym_case] = ACTIONS(SHIFT(36)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(37)),
    },
    [118] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(119)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(120)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [119] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 4)),
    },
    [120] = {
        [sym__condition] = ACTIONS(SHIFT(121)),
        [sym_availability_condition] = ACTIONS(SHIFT(34)),
        [sym_case_condition] = ACTIONS(SHIFT(34)),
        [anon_sym_case] = ACTIONS(SHIFT(36)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(37)),
    },
    [121] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(122)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(120)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
    },
    [122] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
    },
    [123] = {
        [sym__expression] = ACTIONS(SHIFT(124)),
        [sym_identifier] = ACTIONS(SHIFT(125)),
    },
    [124] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [125] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [126] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 2)),
    },
    [127] = {
        [sym__statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_while_statement, 3)),
    },
    [128] = {
        [sym__statement] = ACTIONS(SHIFT(129)),
        [sym__statements] = ACTIONS(SHIFT(130)),
        [sym_for_statement] = ACTIONS(SHIFT(131)),
        [sym_for_in_statement] = ACTIONS(SHIFT(131)),
        [sym_while_statement] = ACTIONS(SHIFT(131)),
        [sym_switch_statement] = ACTIONS(SHIFT(131)),
        [sym__expression] = ACTIONS(SHIFT(131)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(132)),
        [anon_sym_for] = ACTIONS(SHIFT(133)),
        [anon_sym_while] = ACTIONS(SHIFT(134)),
        [anon_sym_switch] = ACTIONS(SHIFT(135)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(131)),
        [sym_identifier] = ACTIONS(SHIFT(136)),
    },
    [129] = {
        [sym__statement] = ACTIONS(SHIFT(129)),
        [sym_for_statement] = ACTIONS(SHIFT(131)),
        [sym_for_in_statement] = ACTIONS(SHIFT(131)),
        [sym_while_statement] = ACTIONS(SHIFT(131)),
        [sym_switch_statement] = ACTIONS(SHIFT(131)),
        [sym__expression] = ACTIONS(SHIFT(131)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(252)),
        [anon_sym_for] = ACTIONS(SHIFT(133)),
        [anon_sym_while] = ACTIONS(SHIFT(134)),
        [anon_sym_switch] = ACTIONS(SHIFT(135)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [sym__declaration] = ACTIONS(SHIFT(131)),
        [sym_identifier] = ACTIONS(SHIFT(136)),
    },
    [130] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(251)),
    },
    [131] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(250)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 1)),
    },
    [132] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 1)),
    },
    [133] = {
        [sym__for_init] = ACTIONS(SHIFT(147)),
        [sym__for_condition] = ACTIONS(SHIFT(148)),
        [sym_variable_declaration] = ACTIONS(SHIFT(149)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(150)),
        [sym__pattern] = ACTIONS(SHIFT(151)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(152)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(152)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(152)),
        [sym_optional_pattern] = ACTIONS(SHIFT(152)),
        [sym_is_pattern] = ACTIONS(SHIFT(152)),
        [sym_as_pattern] = ACTIONS(SHIFT(152)),
        [sym__expression] = ACTIONS(SHIFT(153)),
        [sym__expression_list] = ACTIONS(SHIFT(149)),
        [sym__type_identifier] = ACTIONS(SHIFT(154)),
        [sym__type_name] = ACTIONS(SHIFT(57)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(155)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(156)),
        [anon_sym_case] = ACTIONS(SHIFT(157)),
        [anon_sym_var] = ACTIONS(SHIFT(158)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(152)),
        [anon_sym_let] = ACTIONS(SHIFT(159)),
        [anon_sym_DOT] = ACTIONS(SHIFT(160)),
        [anon_sym_is] = ACTIONS(SHIFT(161)),
        [sym_identifier] = ACTIONS(SHIFT(162)),
    },
    [134] = {
        [sym__condition_clause] = ACTIONS(SHIFT(142)),
        [sym__condition] = ACTIONS(SHIFT(32)),
        [sym_availability_condition] = ACTIONS(SHIFT(33)),
        [sym_case_condition] = ACTIONS(SHIFT(34)),
        [sym__expression] = ACTIONS(SHIFT(35)),
        [anon_sym_case] = ACTIONS(SHIFT(36)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(37)),
        [sym_identifier] = ACTIONS(SHIFT(38)),
    },
    [135] = {
        [sym__expression] = ACTIONS(SHIFT(137)),
        [sym_identifier] = ACTIONS(SHIFT(11)),
    },
    [136] = {
        [sym__statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [137] = {
        [anon_sym_LBRACE] = ACTIONS(SHIFT(138)),
    },
    [138] = {
        [sym_case_statement] = ACTIONS(SHIFT(13)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(139)),
        [anon_sym_case] = ACTIONS(SHIFT(15)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(140)),
        [anon_sym_default] = ACTIONS(SHIFT(17)),
    },
    [139] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(141)),
    },
    [140] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 4)),
    },
    [141] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 5)),
    },
    [142] = {
        [sym__code_block] = ACTIONS(SHIFT(143)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(144)),
    },
    [143] = {
        [sym__statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_while_statement, 3)),
    },
    [144] = {
        [sym__statement] = ACTIONS(SHIFT(129)),
        [sym__statements] = ACTIONS(SHIFT(145)),
        [sym_for_statement] = ACTIONS(SHIFT(131)),
        [sym_for_in_statement] = ACTIONS(SHIFT(131)),
        [sym_while_statement] = ACTIONS(SHIFT(131)),
        [sym_switch_statement] = ACTIONS(SHIFT(131)),
        [sym__expression] = ACTIONS(SHIFT(131)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(132)),
        [anon_sym_for] = ACTIONS(SHIFT(133)),
        [anon_sym_while] = ACTIONS(SHIFT(134)),
        [anon_sym_switch] = ACTIONS(SHIFT(135)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(131)),
        [sym_identifier] = ACTIONS(SHIFT(136)),
    },
    [145] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(146)),
    },
    [146] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [147] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(246)),
    },
    [148] = {
        [sym__code_block] = ACTIONS(SHIFT(245)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(144)),
    },
    [149] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__for_init, 1)),
    },
    [150] = {
        [sym__variable_name] = ACTIONS(SHIFT(231)),
        [sym_identifier] = ACTIONS(SHIFT(232)),
    },
    [151] = {
        [sym__type_annotation] = ACTIONS(SHIFT(227)),
        [anon_sym_in] = ACTIONS(SHIFT(228)),
        [anon_sym_COLON] = ACTIONS(SHIFT(183)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(177)),
        [anon_sym_as] = ACTIONS(SHIFT(178)),
    },
    [152] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [153] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(208)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(209)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [154] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(224)),
    },
    [155] = {
        [sym__expression] = ACTIONS(SHIFT(219)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(220)),
        [sym_identifier] = ACTIONS(SHIFT(203)),
    },
    [156] = {
        [sym__for_init] = ACTIONS(SHIFT(195)),
        [sym__for_condition] = ACTIONS(SHIFT(196)),
        [sym_variable_declaration] = ACTIONS(SHIFT(149)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(150)),
        [sym__pattern] = ACTIONS(SHIFT(75)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(76)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(76)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(172)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(76)),
        [sym_optional_pattern] = ACTIONS(SHIFT(76)),
        [sym_is_pattern] = ACTIONS(SHIFT(76)),
        [sym_as_pattern] = ACTIONS(SHIFT(76)),
        [sym__expression] = ACTIONS(SHIFT(197)),
        [sym__expression_list] = ACTIONS(SHIFT(149)),
        [sym__type_identifier] = ACTIONS(SHIFT(78)),
        [sym__type_name] = ACTIONS(SHIFT(57)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(198)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(79)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(173)),
        [anon_sym_var] = ACTIONS(SHIFT(199)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(76)),
        [anon_sym_let] = ACTIONS(SHIFT(81)),
        [anon_sym_DOT] = ACTIONS(SHIFT(82)),
        [anon_sym_is] = ACTIONS(SHIFT(83)),
        [sym_identifier] = ACTIONS(SHIFT(200)),
    },
    [157] = {
        [sym__pattern] = ACTIONS(SHIFT(180)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(152)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(152)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(152)),
        [sym_optional_pattern] = ACTIONS(SHIFT(152)),
        [sym_is_pattern] = ACTIONS(SHIFT(152)),
        [sym_as_pattern] = ACTIONS(SHIFT(152)),
        [sym__expression] = ACTIONS(SHIFT(152)),
        [sym__type_identifier] = ACTIONS(SHIFT(154)),
        [sym__type_name] = ACTIONS(SHIFT(57)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(171)),
        [anon_sym_var] = ACTIONS(SHIFT(159)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(152)),
        [anon_sym_let] = ACTIONS(SHIFT(159)),
        [anon_sym_DOT] = ACTIONS(SHIFT(160)),
        [anon_sym_is] = ACTIONS(SHIFT(161)),
        [sym_identifier] = ACTIONS(SHIFT(176)),
    },
    [158] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(175)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(152)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(152)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(152)),
        [sym_optional_pattern] = ACTIONS(SHIFT(152)),
        [sym_is_pattern] = ACTIONS(SHIFT(152)),
        [sym_as_pattern] = ACTIONS(SHIFT(152)),
        [sym__expression] = ACTIONS(SHIFT(152)),
        [sym__type_identifier] = ACTIONS(SHIFT(154)),
        [sym__type_name] = ACTIONS(SHIFT(57)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(171)),
        [anon_sym_var] = ACTIONS(SHIFT(159)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(152)),
        [anon_sym_let] = ACTIONS(SHIFT(159)),
        [anon_sym_DOT] = ACTIONS(SHIFT(160)),
        [anon_sym_is] = ACTIONS(SHIFT(161)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(176)),
    },
    [159] = {
        [sym__pattern] = ACTIONS(SHIFT(175)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(152)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(152)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(152)),
        [sym_optional_pattern] = ACTIONS(SHIFT(152)),
        [sym_is_pattern] = ACTIONS(SHIFT(152)),
        [sym_as_pattern] = ACTIONS(SHIFT(152)),
        [sym__expression] = ACTIONS(SHIFT(152)),
        [sym__type_identifier] = ACTIONS(SHIFT(154)),
        [sym__type_name] = ACTIONS(SHIFT(57)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(171)),
        [anon_sym_var] = ACTIONS(SHIFT(159)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(152)),
        [anon_sym_let] = ACTIONS(SHIFT(159)),
        [anon_sym_DOT] = ACTIONS(SHIFT(160)),
        [anon_sym_is] = ACTIONS(SHIFT(161)),
        [sym_identifier] = ACTIONS(SHIFT(176)),
    },
    [160] = {
        [sym_identifier] = ACTIONS(SHIFT(169)),
    },
    [161] = {
        [sym_type] = ACTIONS(SHIFT(163)),
        [sym__type_identifier] = ACTIONS(SHIFT(164)),
        [sym__type_name] = ACTIONS(SHIFT(165)),
        [sym_identifier] = ACTIONS(SHIFT(166)),
    },
    [162] = {
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
    [163] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [164] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [165] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(167)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [166] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [167] = {
        [sym__type_identifier] = ACTIONS(SHIFT(168)),
        [sym__type_name] = ACTIONS(SHIFT(165)),
        [sym_identifier] = ACTIONS(SHIFT(166)),
    },
    [168] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [169] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(170)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(171)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [170] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [171] = {
        [sym__pattern] = ACTIONS(SHIFT(75)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(76)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(76)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(172)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(76)),
        [sym_optional_pattern] = ACTIONS(SHIFT(76)),
        [sym_is_pattern] = ACTIONS(SHIFT(76)),
        [sym_as_pattern] = ACTIONS(SHIFT(76)),
        [sym__expression] = ACTIONS(SHIFT(76)),
        [sym__type_identifier] = ACTIONS(SHIFT(78)),
        [sym__type_name] = ACTIONS(SHIFT(57)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(79)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(173)),
        [anon_sym_var] = ACTIONS(SHIFT(81)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(76)),
        [anon_sym_let] = ACTIONS(SHIFT(81)),
        [anon_sym_DOT] = ACTIONS(SHIFT(82)),
        [anon_sym_is] = ACTIONS(SHIFT(83)),
        [sym_identifier] = ACTIONS(SHIFT(84)),
    },
    [172] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(174)),
    },
    [173] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [174] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [175] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(177)),
        [anon_sym_as] = ACTIONS(SHIFT(178)),
    },
    [176] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [177] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [178] = {
        [sym_type] = ACTIONS(SHIFT(179)),
        [sym__type_identifier] = ACTIONS(SHIFT(164)),
        [sym__type_name] = ACTIONS(SHIFT(165)),
        [sym_identifier] = ACTIONS(SHIFT(166)),
    },
    [179] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [180] = {
        [sym__type_annotation] = ACTIONS(SHIFT(181)),
        [anon_sym_in] = ACTIONS(SHIFT(182)),
        [anon_sym_COLON] = ACTIONS(SHIFT(183)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(177)),
        [anon_sym_as] = ACTIONS(SHIFT(178)),
    },
    [181] = {
        [anon_sym_in] = ACTIONS(SHIFT(192)),
    },
    [182] = {
        [sym__expression] = ACTIONS(SHIFT(190)),
        [sym_identifier] = ACTIONS(SHIFT(125)),
    },
    [183] = {
        [sym_type] = ACTIONS(SHIFT(184)),
        [sym__type_identifier] = ACTIONS(SHIFT(185)),
        [sym__type_name] = ACTIONS(SHIFT(186)),
        [sym_identifier] = ACTIONS(SHIFT(187)),
    },
    [184] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [185] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [186] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(188)),
    },
    [187] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [188] = {
        [sym__type_identifier] = ACTIONS(SHIFT(189)),
        [sym__type_name] = ACTIONS(SHIFT(186)),
        [sym_identifier] = ACTIONS(SHIFT(187)),
    },
    [189] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [190] = {
        [sym__code_block] = ACTIONS(SHIFT(191)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(144)),
    },
    [191] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
    },
    [192] = {
        [sym__expression] = ACTIONS(SHIFT(193)),
        [sym_identifier] = ACTIONS(SHIFT(125)),
    },
    [193] = {
        [sym__code_block] = ACTIONS(SHIFT(194)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(144)),
    },
    [194] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
    },
    [195] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(215)),
    },
    [196] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(213)),
    },
    [197] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(208)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1), SHIFT(209)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [198] = {
        [sym__expression] = ACTIONS(SHIFT(201)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(202)),
        [sym_identifier] = ACTIONS(SHIFT(203)),
    },
    [199] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(93)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(76)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(76)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(76)),
        [sym_optional_pattern] = ACTIONS(SHIFT(76)),
        [sym_is_pattern] = ACTIONS(SHIFT(76)),
        [sym_as_pattern] = ACTIONS(SHIFT(76)),
        [sym__expression] = ACTIONS(SHIFT(76)),
        [sym__type_identifier] = ACTIONS(SHIFT(78)),
        [sym__type_name] = ACTIONS(SHIFT(57)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(79)),
        [anon_sym_var] = ACTIONS(SHIFT(81)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(76)),
        [anon_sym_let] = ACTIONS(SHIFT(81)),
        [anon_sym_DOT] = ACTIONS(SHIFT(82)),
        [anon_sym_is] = ACTIONS(SHIFT(83)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(84)),
    },
    [200] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [201] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(206)),
    },
    [202] = {
        [sym__expression] = ACTIONS(SHIFT(204)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(205)),
    },
    [203] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [204] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [205] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [206] = {
        [sym__expression] = ACTIONS(SHIFT(207)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(205)),
    },
    [207] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [208] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 2)),
    },
    [209] = {
        [sym__expression] = ACTIONS(SHIFT(210)),
        [sym_identifier] = ACTIONS(SHIFT(211)),
    },
    [210] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(212)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(209)),
    },
    [211] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [212] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 3)),
    },
    [213] = {
        [sym__code_block] = ACTIONS(SHIFT(214)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(144)),
    },
    [214] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 5)),
    },
    [215] = {
        [sym__expression] = ACTIONS(SHIFT(216)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(206)),
        [sym_identifier] = ACTIONS(SHIFT(203)),
    },
    [216] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(217)),
    },
    [217] = {
        [sym__expression] = ACTIONS(SHIFT(218)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(205)),
    },
    [218] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [219] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(222)),
    },
    [220] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym__expression] = ACTIONS(SHIFT(221)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(125)),
    },
    [221] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [222] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym__expression] = ACTIONS(SHIFT(223)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(125)),
    },
    [223] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [224] = {
        [sym_identifier] = ACTIONS(SHIFT(225)),
    },
    [225] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(226)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(171)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [226] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [227] = {
        [anon_sym_in] = ACTIONS(SHIFT(182)),
    },
    [228] = {
        [sym__expression] = ACTIONS(SHIFT(229)),
        [sym_identifier] = ACTIONS(SHIFT(125)),
    },
    [229] = {
        [sym__code_block] = ACTIONS(SHIFT(230)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(144)),
    },
    [230] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
    },
    [231] = {
        [sym__type_annotation] = ACTIONS(SHIFT(233)),
        [anon_sym_COLON] = ACTIONS(SHIFT(234)),
    },
    [232] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__variable_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__variable_name, 1)),
    },
    [233] = {
        [sym__code_block] = ACTIONS(SHIFT(241)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(242)),
    },
    [234] = {
        [sym_type] = ACTIONS(SHIFT(235)),
        [sym__type_identifier] = ACTIONS(SHIFT(236)),
        [sym__type_name] = ACTIONS(SHIFT(237)),
        [sym_identifier] = ACTIONS(SHIFT(238)),
    },
    [235] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [236] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [237] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(239)),
    },
    [238] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [239] = {
        [sym__type_identifier] = ACTIONS(SHIFT(240)),
        [sym__type_name] = ACTIONS(SHIFT(237)),
        [sym_identifier] = ACTIONS(SHIFT(238)),
    },
    [240] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [241] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_variable_declaration, 4)),
    },
    [242] = {
        [sym__statement] = ACTIONS(SHIFT(129)),
        [sym__statements] = ACTIONS(SHIFT(243)),
        [sym_for_statement] = ACTIONS(SHIFT(131)),
        [sym_for_in_statement] = ACTIONS(SHIFT(131)),
        [sym_while_statement] = ACTIONS(SHIFT(131)),
        [sym_switch_statement] = ACTIONS(SHIFT(131)),
        [sym__expression] = ACTIONS(SHIFT(131)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(132)),
        [anon_sym_for] = ACTIONS(SHIFT(133)),
        [anon_sym_while] = ACTIONS(SHIFT(134)),
        [anon_sym_switch] = ACTIONS(SHIFT(135)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(131)),
        [sym_identifier] = ACTIONS(SHIFT(136)),
    },
    [243] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(244)),
    },
    [244] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [245] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 3)),
    },
    [246] = {
        [sym__expression] = ACTIONS(SHIFT(247)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(222)),
        [sym_identifier] = ACTIONS(SHIFT(203)),
    },
    [247] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(248)),
    },
    [248] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym__expression] = ACTIONS(SHIFT(249)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(125)),
    },
    [249] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [250] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [251] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_case_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_case] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [252] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
    },
    [253] = {
        [sym__code_block] = ACTIONS(SHIFT(272)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(128)),
    },
    [254] = {
        [sym__type_annotation] = ACTIONS(SHIFT(268)),
        [anon_sym_in] = ACTIONS(SHIFT(269)),
        [anon_sym_COLON] = ACTIONS(SHIFT(183)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(177)),
        [anon_sym_as] = ACTIONS(SHIFT(178)),
    },
    [255] = {
        [sym__for_init] = ACTIONS(SHIFT(195)),
        [sym__for_condition] = ACTIONS(SHIFT(265)),
        [sym_variable_declaration] = ACTIONS(SHIFT(149)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(150)),
        [sym__pattern] = ACTIONS(SHIFT(75)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(76)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(76)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(172)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(76)),
        [sym_optional_pattern] = ACTIONS(SHIFT(76)),
        [sym_is_pattern] = ACTIONS(SHIFT(76)),
        [sym_as_pattern] = ACTIONS(SHIFT(76)),
        [sym__expression] = ACTIONS(SHIFT(197)),
        [sym__expression_list] = ACTIONS(SHIFT(149)),
        [sym__type_identifier] = ACTIONS(SHIFT(78)),
        [sym__type_name] = ACTIONS(SHIFT(57)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(198)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(79)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(173)),
        [anon_sym_var] = ACTIONS(SHIFT(199)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(76)),
        [anon_sym_let] = ACTIONS(SHIFT(81)),
        [anon_sym_DOT] = ACTIONS(SHIFT(82)),
        [anon_sym_is] = ACTIONS(SHIFT(83)),
        [sym_identifier] = ACTIONS(SHIFT(200)),
    },
    [256] = {
        [sym__pattern] = ACTIONS(SHIFT(257)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(152)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(152)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(152)),
        [sym_optional_pattern] = ACTIONS(SHIFT(152)),
        [sym_is_pattern] = ACTIONS(SHIFT(152)),
        [sym_as_pattern] = ACTIONS(SHIFT(152)),
        [sym__expression] = ACTIONS(SHIFT(152)),
        [sym__type_identifier] = ACTIONS(SHIFT(154)),
        [sym__type_name] = ACTIONS(SHIFT(57)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(171)),
        [anon_sym_var] = ACTIONS(SHIFT(159)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(152)),
        [anon_sym_let] = ACTIONS(SHIFT(159)),
        [anon_sym_DOT] = ACTIONS(SHIFT(160)),
        [anon_sym_is] = ACTIONS(SHIFT(161)),
        [sym_identifier] = ACTIONS(SHIFT(176)),
    },
    [257] = {
        [sym__type_annotation] = ACTIONS(SHIFT(258)),
        [anon_sym_in] = ACTIONS(SHIFT(259)),
        [anon_sym_COLON] = ACTIONS(SHIFT(183)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(177)),
        [anon_sym_as] = ACTIONS(SHIFT(178)),
    },
    [258] = {
        [anon_sym_in] = ACTIONS(SHIFT(262)),
    },
    [259] = {
        [sym__expression] = ACTIONS(SHIFT(260)),
        [sym_identifier] = ACTIONS(SHIFT(125)),
    },
    [260] = {
        [sym__code_block] = ACTIONS(SHIFT(261)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(128)),
    },
    [261] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
    },
    [262] = {
        [sym__expression] = ACTIONS(SHIFT(263)),
        [sym_identifier] = ACTIONS(SHIFT(125)),
    },
    [263] = {
        [sym__code_block] = ACTIONS(SHIFT(264)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(128)),
    },
    [264] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
    },
    [265] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(266)),
    },
    [266] = {
        [sym__code_block] = ACTIONS(SHIFT(267)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(128)),
    },
    [267] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 5)),
    },
    [268] = {
        [anon_sym_in] = ACTIONS(SHIFT(259)),
    },
    [269] = {
        [sym__expression] = ACTIONS(SHIFT(270)),
        [sym_identifier] = ACTIONS(SHIFT(125)),
    },
    [270] = {
        [sym__code_block] = ACTIONS(SHIFT(271)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(128)),
    },
    [271] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
    },
    [272] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 3)),
    },
    [273] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_case_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_case] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [274] = {
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
        [anon_sym_case] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
    },
    [275] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(301)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(302)),
        [anon_sym_COLON] = ACTIONS(SHIFT(303)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(292)),
        [anon_sym_as] = ACTIONS(SHIFT(293)),
    },
    [276] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [277] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(298)),
    },
    [278] = {
        [sym__pattern] = ACTIONS(SHIFT(75)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(76)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(76)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(295)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(76)),
        [sym_optional_pattern] = ACTIONS(SHIFT(76)),
        [sym_is_pattern] = ACTIONS(SHIFT(76)),
        [sym_as_pattern] = ACTIONS(SHIFT(76)),
        [sym__expression] = ACTIONS(SHIFT(76)),
        [sym__type_identifier] = ACTIONS(SHIFT(78)),
        [sym__type_name] = ACTIONS(SHIFT(57)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(79)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(296)),
        [anon_sym_var] = ACTIONS(SHIFT(81)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(76)),
        [anon_sym_let] = ACTIONS(SHIFT(81)),
        [anon_sym_DOT] = ACTIONS(SHIFT(82)),
        [anon_sym_is] = ACTIONS(SHIFT(83)),
        [sym_identifier] = ACTIONS(SHIFT(84)),
    },
    [279] = {
        [sym__pattern] = ACTIONS(SHIFT(291)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(276)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(276)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(276)),
        [sym_optional_pattern] = ACTIONS(SHIFT(276)),
        [sym_is_pattern] = ACTIONS(SHIFT(276)),
        [sym_as_pattern] = ACTIONS(SHIFT(276)),
        [sym__expression] = ACTIONS(SHIFT(276)),
        [sym__type_identifier] = ACTIONS(SHIFT(277)),
        [sym__type_name] = ACTIONS(SHIFT(57)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(278)),
        [anon_sym_var] = ACTIONS(SHIFT(279)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(276)),
        [anon_sym_let] = ACTIONS(SHIFT(279)),
        [anon_sym_DOT] = ACTIONS(SHIFT(280)),
        [anon_sym_is] = ACTIONS(SHIFT(281)),
        [sym_identifier] = ACTIONS(SHIFT(282)),
    },
    [280] = {
        [sym_identifier] = ACTIONS(SHIFT(289)),
    },
    [281] = {
        [sym_type] = ACTIONS(SHIFT(283)),
        [sym__type_identifier] = ACTIONS(SHIFT(284)),
        [sym__type_name] = ACTIONS(SHIFT(285)),
        [sym_identifier] = ACTIONS(SHIFT(286)),
    },
    [282] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [283] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [284] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [285] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(287)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [286] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [287] = {
        [sym__type_identifier] = ACTIONS(SHIFT(288)),
        [sym__type_name] = ACTIONS(SHIFT(285)),
        [sym_identifier] = ACTIONS(SHIFT(286)),
    },
    [288] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [289] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(290)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(278)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [290] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [291] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(292)),
        [anon_sym_as] = ACTIONS(SHIFT(293)),
    },
    [292] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [293] = {
        [sym_type] = ACTIONS(SHIFT(294)),
        [sym__type_identifier] = ACTIONS(SHIFT(284)),
        [sym__type_name] = ACTIONS(SHIFT(285)),
        [sym_identifier] = ACTIONS(SHIFT(286)),
    },
    [294] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [295] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(297)),
    },
    [296] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [297] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [298] = {
        [sym_identifier] = ACTIONS(SHIFT(299)),
    },
    [299] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(300)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(278)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [300] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [301] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(307)),
    },
    [302] = {
        [sym__pattern] = ACTIONS(SHIFT(305)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(276)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(276)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(276)),
        [sym_optional_pattern] = ACTIONS(SHIFT(276)),
        [sym_is_pattern] = ACTIONS(SHIFT(276)),
        [sym_as_pattern] = ACTIONS(SHIFT(276)),
        [sym__expression] = ACTIONS(SHIFT(276)),
        [sym__type_identifier] = ACTIONS(SHIFT(277)),
        [sym__type_name] = ACTIONS(SHIFT(57)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(278)),
        [anon_sym_var] = ACTIONS(SHIFT(279)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(276)),
        [anon_sym_let] = ACTIONS(SHIFT(279)),
        [anon_sym_DOT] = ACTIONS(SHIFT(280)),
        [anon_sym_is] = ACTIONS(SHIFT(281)),
        [sym_identifier] = ACTIONS(SHIFT(282)),
    },
    [303] = {
        [sym__statement] = ACTIONS(SHIFT(19)),
        [sym_for_statement] = ACTIONS(SHIFT(20)),
        [sym_for_in_statement] = ACTIONS(SHIFT(20)),
        [sym_while_statement] = ACTIONS(SHIFT(20)),
        [sym_switch_statement] = ACTIONS(SHIFT(20)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [sym__expression] = ACTIONS(SHIFT(20)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(304)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_for] = ACTIONS(SHIFT(22)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_while] = ACTIONS(SHIFT(23)),
        [anon_sym_switch] = ACTIONS(SHIFT(24)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [sym__declaration] = ACTIONS(SHIFT(20)),
        [sym_identifier] = ACTIONS(SHIFT(25)),
    },
    [304] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 4)),
    },
    [305] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(306)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(302)),
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(292)),
        [anon_sym_as] = ACTIONS(SHIFT(293)),
    },
    [306] = {
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [307] = {
        [sym__statement] = ACTIONS(SHIFT(19)),
        [sym_for_statement] = ACTIONS(SHIFT(20)),
        [sym_for_in_statement] = ACTIONS(SHIFT(20)),
        [sym_while_statement] = ACTIONS(SHIFT(20)),
        [sym_switch_statement] = ACTIONS(SHIFT(20)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [sym__expression] = ACTIONS(SHIFT(20)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(308)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_for] = ACTIONS(SHIFT(22)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_while] = ACTIONS(SHIFT(23)),
        [anon_sym_switch] = ACTIONS(SHIFT(24)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [sym__declaration] = ACTIONS(SHIFT(20)),
        [sym_identifier] = ACTIONS(SHIFT(25)),
    },
    [308] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 5)),
    },
    [309] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 5)),
    },
    [310] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 2)),
    },
    [311] = {
        [sym__code_block] = ACTIONS(SHIFT(312)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(313)),
    },
    [312] = {
        [sym__statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_while_statement, 3)),
    },
    [313] = {
        [sym__statement] = ACTIONS(SHIFT(129)),
        [sym__statements] = ACTIONS(SHIFT(314)),
        [sym_for_statement] = ACTIONS(SHIFT(131)),
        [sym_for_in_statement] = ACTIONS(SHIFT(131)),
        [sym_while_statement] = ACTIONS(SHIFT(131)),
        [sym_switch_statement] = ACTIONS(SHIFT(131)),
        [sym__expression] = ACTIONS(SHIFT(131)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(132)),
        [anon_sym_for] = ACTIONS(SHIFT(133)),
        [anon_sym_while] = ACTIONS(SHIFT(134)),
        [anon_sym_switch] = ACTIONS(SHIFT(135)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(131)),
        [sym_identifier] = ACTIONS(SHIFT(136)),
    },
    [314] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(315)),
    },
    [315] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [316] = {
        [sym__code_block] = ACTIONS(SHIFT(335)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(313)),
    },
    [317] = {
        [sym__type_annotation] = ACTIONS(SHIFT(331)),
        [anon_sym_in] = ACTIONS(SHIFT(332)),
        [anon_sym_COLON] = ACTIONS(SHIFT(183)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(177)),
        [anon_sym_as] = ACTIONS(SHIFT(178)),
    },
    [318] = {
        [sym__for_init] = ACTIONS(SHIFT(195)),
        [sym__for_condition] = ACTIONS(SHIFT(328)),
        [sym_variable_declaration] = ACTIONS(SHIFT(149)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(150)),
        [sym__pattern] = ACTIONS(SHIFT(75)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(76)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(76)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(172)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(76)),
        [sym_optional_pattern] = ACTIONS(SHIFT(76)),
        [sym_is_pattern] = ACTIONS(SHIFT(76)),
        [sym_as_pattern] = ACTIONS(SHIFT(76)),
        [sym__expression] = ACTIONS(SHIFT(197)),
        [sym__expression_list] = ACTIONS(SHIFT(149)),
        [sym__type_identifier] = ACTIONS(SHIFT(78)),
        [sym__type_name] = ACTIONS(SHIFT(57)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(198)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(79)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(173)),
        [anon_sym_var] = ACTIONS(SHIFT(199)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(76)),
        [anon_sym_let] = ACTIONS(SHIFT(81)),
        [anon_sym_DOT] = ACTIONS(SHIFT(82)),
        [anon_sym_is] = ACTIONS(SHIFT(83)),
        [sym_identifier] = ACTIONS(SHIFT(200)),
    },
    [319] = {
        [sym__pattern] = ACTIONS(SHIFT(320)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(152)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(152)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(152)),
        [sym_optional_pattern] = ACTIONS(SHIFT(152)),
        [sym_is_pattern] = ACTIONS(SHIFT(152)),
        [sym_as_pattern] = ACTIONS(SHIFT(152)),
        [sym__expression] = ACTIONS(SHIFT(152)),
        [sym__type_identifier] = ACTIONS(SHIFT(154)),
        [sym__type_name] = ACTIONS(SHIFT(57)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(171)),
        [anon_sym_var] = ACTIONS(SHIFT(159)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(152)),
        [anon_sym_let] = ACTIONS(SHIFT(159)),
        [anon_sym_DOT] = ACTIONS(SHIFT(160)),
        [anon_sym_is] = ACTIONS(SHIFT(161)),
        [sym_identifier] = ACTIONS(SHIFT(176)),
    },
    [320] = {
        [sym__type_annotation] = ACTIONS(SHIFT(321)),
        [anon_sym_in] = ACTIONS(SHIFT(322)),
        [anon_sym_COLON] = ACTIONS(SHIFT(183)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(177)),
        [anon_sym_as] = ACTIONS(SHIFT(178)),
    },
    [321] = {
        [anon_sym_in] = ACTIONS(SHIFT(325)),
    },
    [322] = {
        [sym__expression] = ACTIONS(SHIFT(323)),
        [sym_identifier] = ACTIONS(SHIFT(125)),
    },
    [323] = {
        [sym__code_block] = ACTIONS(SHIFT(324)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(313)),
    },
    [324] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
    },
    [325] = {
        [sym__expression] = ACTIONS(SHIFT(326)),
        [sym_identifier] = ACTIONS(SHIFT(125)),
    },
    [326] = {
        [sym__code_block] = ACTIONS(SHIFT(327)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(313)),
    },
    [327] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
    },
    [328] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(329)),
    },
    [329] = {
        [sym__code_block] = ACTIONS(SHIFT(330)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(313)),
    },
    [330] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 5)),
    },
    [331] = {
        [anon_sym_in] = ACTIONS(SHIFT(322)),
    },
    [332] = {
        [sym__expression] = ACTIONS(SHIFT(333)),
        [sym_identifier] = ACTIONS(SHIFT(125)),
    },
    [333] = {
        [sym__code_block] = ACTIONS(SHIFT(334)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(313)),
    },
    [334] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
    },
    [335] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 3)),
    },
    [336] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [337] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
    },
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_swift);
