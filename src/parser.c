#include "tree_sitter/parser.h"

#define STATE_COUNT 247
#define SYMBOL_COUNT 54

enum {
    sym_program = ts_builtin_sym_start,
    sym__statement,
    sym__statements,
    sym_for_statement,
    sym__for_init,
    sym__for_condition,
    sym_for_in_statement,
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
    sym_optional_pattern,
    sym__type_casting_pattern,
    sym_is_pattern,
    sym_as_pattern,
    sym__expression,
    sym__expression_list,
    sym_type,
    sym__type_annotation,
    sym__type_identifier,
    sym__type_name,
    aux_sym__statements_repeat1,
    aux_sym_switch_statement_repeat1,
    aux_sym_case_statement_repeat1,
    aux_sym__expression_list_repeat1,
    anon_sym_SEMI,
    anon_sym_for,
    anon_sym_LPAREN,
    anon_sym_RPAREN,
    anon_sym_case,
    anon_sym_in,
    anon_sym_switch,
    anon_sym_LBRACE,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    anon_sym_COLON,
    anon_sym_default,
    sym__declaration,
    anon_sym_var,
    sym_wildcard_pattern,
    anon_sym_let,
    anon_sym_QMARK,
    anon_sym_is,
    anon_sym_as,
    sym_identifier,
    anon_sym_DOT,
};

static const char *ts_symbol_names[] = {
    [sym_program] = "program",
    [sym__statement] = "_statement",
    [sym__statements] = "_statements",
    [sym_for_statement] = "for_statement",
    [sym__for_init] = "_for_init",
    [sym__for_condition] = "_for_condition",
    [sym_for_in_statement] = "for_in_statement",
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
    [sym_optional_pattern] = "optional_pattern",
    [sym__type_casting_pattern] = "_type_casting_pattern",
    [sym_is_pattern] = "is_pattern",
    [sym_as_pattern] = "as_pattern",
    [sym__expression] = "_expression",
    [sym__expression_list] = "_expression_list",
    [sym_type] = "type",
    [sym__type_annotation] = "_type_annotation",
    [sym__type_identifier] = "_type_identifier",
    [sym__type_name] = "_type_name",
    [aux_sym__statements_repeat1] = "_statements_repeat1",
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
    [anon_sym_switch] = "switch",
    [anon_sym_LBRACE] = "{",
    [anon_sym_RBRACE] = "}",
    [anon_sym_COMMA] = ",",
    [anon_sym_COLON] = ":",
    [anon_sym_default] = "default",
    [sym__declaration] = "_declaration",
    [anon_sym_var] = "var",
    [sym_wildcard_pattern] = "wildcard_pattern",
    [anon_sym_let] = "let",
    [anon_sym_QMARK] = "?",
    [anon_sym_is] = "is",
    [anon_sym_as] = "as",
    [sym_identifier] = "identifier",
    [anon_sym_DOT] = ".",
};

static const TSNodeType ts_node_types[SYMBOL_COUNT] = {
    [sym_program] = TSNodeTypeNamed,
    [sym__statement] = TSNodeTypeHidden,
    [sym__statements] = TSNodeTypeHidden,
    [sym_for_statement] = TSNodeTypeNamed,
    [sym__for_init] = TSNodeTypeHidden,
    [sym__for_condition] = TSNodeTypeHidden,
    [sym_for_in_statement] = TSNodeTypeNamed,
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
    [sym_optional_pattern] = TSNodeTypeNamed,
    [sym__type_casting_pattern] = TSNodeTypeHidden,
    [sym_is_pattern] = TSNodeTypeNamed,
    [sym_as_pattern] = TSNodeTypeNamed,
    [sym__expression] = TSNodeTypeHidden,
    [sym__expression_list] = TSNodeTypeHidden,
    [sym_type] = TSNodeTypeNamed,
    [sym__type_annotation] = TSNodeTypeHidden,
    [sym__type_identifier] = TSNodeTypeHidden,
    [sym__type_name] = TSNodeTypeHidden,
    [aux_sym__statements_repeat1] = TSNodeTypeHidden,
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
    [anon_sym_switch] = TSNodeTypeAnonymous,
    [anon_sym_LBRACE] = TSNodeTypeAnonymous,
    [anon_sym_RBRACE] = TSNodeTypeAnonymous,
    [anon_sym_COMMA] = TSNodeTypeAnonymous,
    [anon_sym_COLON] = TSNodeTypeAnonymous,
    [anon_sym_default] = TSNodeTypeAnonymous,
    [sym__declaration] = TSNodeTypeHidden,
    [anon_sym_var] = TSNodeTypeAnonymous,
    [sym_wildcard_pattern] = TSNodeTypeNamed,
    [anon_sym_let] = TSNodeTypeAnonymous,
    [anon_sym_QMARK] = TSNodeTypeAnonymous,
    [anon_sym_is] = TSNodeTypeAnonymous,
    [anon_sym_as] = TSNodeTypeAnonymous,
    [sym_identifier] = TSNodeTypeNamed,
    [anon_sym_DOT] = TSNodeTypeAnonymous,
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
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(16);
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
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(22);
            LEX_ERROR();
        case 23:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(23);
            if (lookahead == ';')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(16);
            LEX_ERROR();
        case 24:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 25:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(25);
            if (lookahead == '(')
                ADVANCE(26);
            if (lookahead == ';')
                ADVANCE(24);
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
                ADVANCE(27);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'i')
                ADVANCE(32);
            if (lookahead == 'l')
                ADVANCE(34);
            if (lookahead == 'v')
                ADVANCE(37);
            LEX_ERROR();
        case 26:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 27:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(sym_wildcard_pattern);
        case 28:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(29);
            ACCEPT_TOKEN(sym_identifier);
        case 29:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(30);
            ACCEPT_TOKEN(sym_identifier);
        case 30:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(31);
            ACCEPT_TOKEN(sym_identifier);
        case 31:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_case);
        case 32:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(33);
            ACCEPT_TOKEN(sym_identifier);
        case 33:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_is);
        case 34:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(35);
            ACCEPT_TOKEN(sym_identifier);
        case 35:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier);
        case 36:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_let);
        case 37:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(38);
            ACCEPT_TOKEN(sym_identifier);
        case 38:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'r')
                ADVANCE(39);
            ACCEPT_TOKEN(sym_identifier);
        case 39:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_var);
        case 40:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 41:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(41);
            if (lookahead == '{')
                ADVANCE(42);
            LEX_ERROR();
        case 42:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 43:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(43);
            if (lookahead == 'c')
                ADVANCE(44);
            if (lookahead == 'd')
                ADVANCE(48);
            if (lookahead == '}')
                ADVANCE(55);
            LEX_ERROR();
        case 44:
            if (lookahead == 'a')
                ADVANCE(45);
            LEX_ERROR();
        case 45:
            if (lookahead == 's')
                ADVANCE(46);
            LEX_ERROR();
        case 46:
            if (lookahead == 'e')
                ADVANCE(47);
            LEX_ERROR();
        case 47:
            ACCEPT_TOKEN(anon_sym_case);
        case 48:
            if (lookahead == 'e')
                ADVANCE(49);
            LEX_ERROR();
        case 49:
            if (lookahead == 'f')
                ADVANCE(50);
            LEX_ERROR();
        case 50:
            if (lookahead == 'a')
                ADVANCE(51);
            LEX_ERROR();
        case 51:
            if (lookahead == 'u')
                ADVANCE(52);
            LEX_ERROR();
        case 52:
            if (lookahead == 'l')
                ADVANCE(53);
            LEX_ERROR();
        case 53:
            if (lookahead == 't')
                ADVANCE(54);
            LEX_ERROR();
        case 54:
            ACCEPT_TOKEN(anon_sym_default);
        case 55:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 56:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(56);
            if (lookahead == '}')
                ADVANCE(55);
            LEX_ERROR();
        case 57:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(57);
            if (lookahead == '(')
                ADVANCE(26);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(27);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(32);
            if (lookahead == 'l')
                ADVANCE(34);
            if (lookahead == 'v')
                ADVANCE(37);
            LEX_ERROR();
        case 58:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(58);
            if (lookahead == ':')
                ADVANCE(59);
            LEX_ERROR();
        case 59:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 60:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(60);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(61);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(16);
            if (lookahead == '}')
                ADVANCE(55);
            LEX_ERROR();
        case 61:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(62);
            ACCEPT_TOKEN(sym_identifier);
        case 62:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'f')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier);
        case 63:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(64);
            ACCEPT_TOKEN(sym_identifier);
        case 64:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'u')
                ADVANCE(65);
            ACCEPT_TOKEN(sym_identifier);
        case 65:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(66);
            ACCEPT_TOKEN(sym_identifier);
        case 66:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier);
        case 67:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_default);
        case 68:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(68);
            if (lookahead == ';')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(61);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(16);
            if (lookahead == '}')
                ADVANCE(55);
            LEX_ERROR();
        case 69:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(69);
            if (lookahead == ';')
                ADVANCE(24);
            LEX_ERROR();
        case 70:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(70);
            if (lookahead == ':')
                ADVANCE(59);
            if (lookahead == '?')
                ADVANCE(71);
            if (lookahead == 'a')
                ADVANCE(72);
            if (lookahead == 'i')
                ADVANCE(74);
            LEX_ERROR();
        case 71:
            ACCEPT_TOKEN(anon_sym_QMARK);
        case 72:
            if (lookahead == 's')
                ADVANCE(73);
            LEX_ERROR();
        case 73:
            ACCEPT_TOKEN(anon_sym_as);
        case 74:
            if (lookahead == 'n')
                ADVANCE(75);
            LEX_ERROR();
        case 75:
            ACCEPT_TOKEN(anon_sym_in);
        case 76:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(76);
            if (lookahead == ',')
                ADVANCE(77);
            if (lookahead == ':')
                ADVANCE(59);
            if (lookahead == ';')
                ADVANCE(24);
            if (lookahead == '?')
                ADVANCE(71);
            if (lookahead == 'a')
                ADVANCE(72);
            if (lookahead == 'i')
                ADVANCE(74);
            LEX_ERROR();
        case 77:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 78:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(78);
            if (lookahead == ';')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 79:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(79);
            if (lookahead == '(')
                ADVANCE(26);
            if (lookahead == ')')
                ADVANCE(80);
            if (lookahead == ';')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(27);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(32);
            if (lookahead == 'l')
                ADVANCE(34);
            if (lookahead == 'v')
                ADVANCE(37);
            LEX_ERROR();
        case 80:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 81:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(81);
            if (lookahead == '.')
                ADVANCE(82);
            if (lookahead == ':')
                ADVANCE(59);
            if (lookahead == '?')
                ADVANCE(71);
            if (lookahead == 'a')
                ADVANCE(72);
            if (lookahead == 'i')
                ADVANCE(74);
            LEX_ERROR();
        case 82:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 83:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(83);
            if (lookahead == '(')
                ADVANCE(26);
            if (lookahead == ')')
                ADVANCE(80);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(27);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(32);
            if (lookahead == 'l')
                ADVANCE(34);
            if (lookahead == 'v')
                ADVANCE(37);
            LEX_ERROR();
        case 84:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(84);
            if (lookahead == ')')
                ADVANCE(80);
            if (lookahead == ',')
                ADVANCE(77);
            if (lookahead == '?')
                ADVANCE(71);
            if (lookahead == 'a')
                ADVANCE(72);
            LEX_ERROR();
        case 85:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(85);
            if (lookahead == ')')
                ADVANCE(80);
            LEX_ERROR();
        case 86:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(86);
            if (lookahead == ')')
                ADVANCE(80);
            if (lookahead == ',')
                ADVANCE(77);
            if (lookahead == '.')
                ADVANCE(82);
            if (lookahead == '?')
                ADVANCE(71);
            if (lookahead == 'a')
                ADVANCE(72);
            LEX_ERROR();
        case 87:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(87);
            if (lookahead == 'i')
                ADVANCE(74);
            LEX_ERROR();
        case 88:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(88);
            if (lookahead == '.')
                ADVANCE(82);
            if (lookahead == 'i')
                ADVANCE(74);
            LEX_ERROR();
        case 89:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(89);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(16);
            if (lookahead == '}')
                ADVANCE(55);
            LEX_ERROR();
        case 90:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(90);
            if (lookahead == ';')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(16);
            if (lookahead == '}')
                ADVANCE(55);
            LEX_ERROR();
        case 91:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(91);
            if (lookahead == ')')
                ADVANCE(80);
            if (lookahead == ',')
                ADVANCE(77);
            if (lookahead == ';')
                ADVANCE(24);
            if (lookahead == '?')
                ADVANCE(71);
            if (lookahead == 'a')
                ADVANCE(72);
            LEX_ERROR();
        case 92:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(92);
            if (lookahead == ')')
                ADVANCE(80);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 93:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(93);
            if (lookahead == ',')
                ADVANCE(77);
            if (lookahead == ';')
                ADVANCE(24);
            LEX_ERROR();
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
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == '{')
                ADVANCE(42);
            LEX_ERROR();
        case 95:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(95);
            if (lookahead == '.')
                ADVANCE(82);
            if (lookahead == '{')
                ADVANCE(42);
            LEX_ERROR();
        case 96:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(96);
            if (lookahead == ',')
                ADVANCE(77);
            if (lookahead == ':')
                ADVANCE(59);
            if (lookahead == '?')
                ADVANCE(71);
            if (lookahead == 'a')
                ADVANCE(72);
            LEX_ERROR();
        case 97:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(97);
            if (lookahead == ',')
                ADVANCE(77);
            if (lookahead == '.')
                ADVANCE(82);
            if (lookahead == ':')
                ADVANCE(59);
            if (lookahead == '?')
                ADVANCE(71);
            if (lookahead == 'a')
                ADVANCE(72);
            LEX_ERROR();
        case 98:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(98);
            if (lookahead == '(')
                ADVANCE(26);
            if (lookahead == ')')
                ADVANCE(80);
            if (lookahead == ',')
                ADVANCE(77);
            if (lookahead == '.')
                ADVANCE(82);
            if (lookahead == ':')
                ADVANCE(59);
            if (lookahead == ';')
                ADVANCE(24);
            if (lookahead == '?')
                ADVANCE(71);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'b') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(27);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(99);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(61);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(101);
            if (lookahead == 'l')
                ADVANCE(34);
            if (lookahead == 's')
                ADVANCE(16);
            if (lookahead == 'v')
                ADVANCE(37);
            if (lookahead == '{')
                ADVANCE(42);
            if (lookahead == '}')
                ADVANCE(55);
            LEX_ERROR();
        case 99:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(100);
            ACCEPT_TOKEN(sym_identifier);
        case 100:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_as);
        case 101:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'm')
                ADVANCE(11);
            if (lookahead == 'n')
                ADVANCE(102);
            if (lookahead == 's')
                ADVANCE(33);
            ACCEPT_TOKEN(sym_identifier);
        case 102:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_in);
        case ts_lex_state_error:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(98);
            if (lookahead == '(')
                ADVANCE(26);
            if (lookahead == ')')
                ADVANCE(80);
            if (lookahead == ',')
                ADVANCE(77);
            if (lookahead == '.')
                ADVANCE(82);
            if (lookahead == ':')
                ADVANCE(59);
            if (lookahead == ';')
                ADVANCE(24);
            if (lookahead == '?')
                ADVANCE(71);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'b') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                (lookahead == 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(27);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(99);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(61);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(101);
            if (lookahead == 'l')
                ADVANCE(34);
            if (lookahead == 's')
                ADVANCE(16);
            if (lookahead == 'v')
                ADVANCE(37);
            if (lookahead == '{')
                ADVANCE(42);
            if (lookahead == '}')
                ADVANCE(55);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 1,
    [1] = 22,
    [2] = 1,
    [3] = 22,
    [4] = 23,
    [5] = 22,
    [6] = 25,
    [7] = 40,
    [8] = 23,
    [9] = 41,
    [10] = 41,
    [11] = 43,
    [12] = 43,
    [13] = 56,
    [14] = 57,
    [15] = 23,
    [16] = 58,
    [17] = 60,
    [18] = 60,
    [19] = 68,
    [20] = 43,
    [21] = 25,
    [22] = 40,
    [23] = 68,
    [24] = 41,
    [25] = 43,
    [26] = 56,
    [27] = 68,
    [28] = 68,
    [29] = 69,
    [30] = 41,
    [31] = 69,
    [32] = 40,
    [33] = 70,
    [34] = 70,
    [35] = 70,
    [36] = 76,
    [37] = 78,
    [38] = 79,
    [39] = 57,
    [40] = 57,
    [41] = 57,
    [42] = 40,
    [43] = 76,
    [44] = 70,
    [45] = 70,
    [46] = 81,
    [47] = 81,
    [48] = 40,
    [49] = 70,
    [50] = 70,
    [51] = 83,
    [52] = 70,
    [53] = 84,
    [54] = 84,
    [55] = 85,
    [56] = 84,
    [57] = 83,
    [58] = 70,
    [59] = 57,
    [60] = 40,
    [61] = 84,
    [62] = 84,
    [63] = 84,
    [64] = 86,
    [65] = 86,
    [66] = 40,
    [67] = 84,
    [68] = 84,
    [69] = 84,
    [70] = 40,
    [71] = 84,
    [72] = 85,
    [73] = 84,
    [74] = 84,
    [75] = 70,
    [76] = 85,
    [77] = 57,
    [78] = 84,
    [79] = 85,
    [80] = 70,
    [81] = 40,
    [82] = 70,
    [83] = 70,
    [84] = 87,
    [85] = 40,
    [86] = 40,
    [87] = 87,
    [88] = 87,
    [89] = 88,
    [90] = 88,
    [91] = 40,
    [92] = 87,
    [93] = 41,
    [94] = 41,
    [95] = 68,
    [96] = 89,
    [97] = 89,
    [98] = 56,
    [99] = 90,
    [100] = 56,
    [101] = 25,
    [102] = 40,
    [103] = 90,
    [104] = 41,
    [105] = 43,
    [106] = 56,
    [107] = 90,
    [108] = 90,
    [109] = 41,
    [110] = 70,
    [111] = 79,
    [112] = 57,
    [113] = 70,
    [114] = 87,
    [115] = 40,
    [116] = 41,
    [117] = 90,
    [118] = 89,
    [119] = 56,
    [120] = 90,
    [121] = 40,
    [122] = 41,
    [123] = 90,
    [124] = 69,
    [125] = 85,
    [126] = 91,
    [127] = 78,
    [128] = 57,
    [129] = 91,
    [130] = 69,
    [131] = 92,
    [132] = 69,
    [133] = 85,
    [134] = 85,
    [135] = 92,
    [136] = 85,
    [137] = 69,
    [138] = 40,
    [139] = 93,
    [140] = 93,
    [141] = 69,
    [142] = 41,
    [143] = 90,
    [144] = 78,
    [145] = 69,
    [146] = 92,
    [147] = 85,
    [148] = 87,
    [149] = 40,
    [150] = 41,
    [151] = 90,
    [152] = 90,
    [153] = 89,
    [154] = 68,
    [155] = 56,
    [156] = 40,
    [157] = 41,
    [158] = 68,
    [159] = 85,
    [160] = 41,
    [161] = 68,
    [162] = 69,
    [163] = 94,
    [164] = 41,
    [165] = 94,
    [166] = 41,
    [167] = 87,
    [168] = 40,
    [169] = 41,
    [170] = 68,
    [171] = 58,
    [172] = 58,
    [173] = 41,
    [174] = 40,
    [175] = 41,
    [176] = 41,
    [177] = 95,
    [178] = 95,
    [179] = 40,
    [180] = 41,
    [181] = 69,
    [182] = 89,
    [183] = 56,
    [184] = 69,
    [185] = 68,
    [186] = 78,
    [187] = 69,
    [188] = 94,
    [189] = 41,
    [190] = 60,
    [191] = 43,
    [192] = 96,
    [193] = 96,
    [194] = 96,
    [195] = 83,
    [196] = 57,
    [197] = 40,
    [198] = 96,
    [199] = 96,
    [200] = 96,
    [201] = 97,
    [202] = 97,
    [203] = 40,
    [204] = 96,
    [205] = 96,
    [206] = 96,
    [207] = 40,
    [208] = 96,
    [209] = 85,
    [210] = 96,
    [211] = 96,
    [212] = 58,
    [213] = 57,
    [214] = 60,
    [215] = 43,
    [216] = 96,
    [217] = 58,
    [218] = 60,
    [219] = 43,
    [220] = 23,
    [221] = 56,
    [222] = 41,
    [223] = 70,
    [224] = 79,
    [225] = 57,
    [226] = 70,
    [227] = 87,
    [228] = 40,
    [229] = 41,
    [230] = 23,
    [231] = 89,
    [232] = 56,
    [233] = 23,
    [234] = 40,
    [235] = 41,
    [236] = 23,
    [237] = 85,
    [238] = 41,
    [239] = 23,
    [240] = 87,
    [241] = 40,
    [242] = 41,
    [243] = 23,
    [244] = 23,
    [245] = 1,
    [246] = 22,
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
        [sym_switch_statement] = ACTIONS(SHIFT(4)),
        [sym__expression] = ACTIONS(SHIFT(4)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(5)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statements, 0)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_switch] = ACTIONS(SHIFT(7)),
        [sym__declaration] = ACTIONS(SHIFT(4)),
        [sym_identifier] = ACTIONS(SHIFT(8)),
    },
    [1] = {
        [ts_builtin_sym_end] = ACTIONS(ACCEPT_INPUT()),
    },
    [2] = {
        [sym__statement] = ACTIONS(SHIFT(2)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_switch_statement] = ACTIONS(SHIFT(4)),
        [sym__expression] = ACTIONS(SHIFT(4)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(246)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_switch] = ACTIONS(SHIFT(7)),
        [sym__declaration] = ACTIONS(SHIFT(4)),
        [sym_identifier] = ACTIONS(SHIFT(8)),
    },
    [3] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_program, 1)),
    },
    [4] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(245)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 1)),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statements, 1)),
    },
    [6] = {
        [sym__for_init] = ACTIONS(SHIFT(29)),
        [sym__for_condition] = ACTIONS(SHIFT(222)),
        [sym_variable_declaration] = ACTIONS(SHIFT(31)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(32)),
        [sym__pattern] = ACTIONS(SHIFT(223)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(34)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(34)),
        [sym_optional_pattern] = ACTIONS(SHIFT(34)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(34)),
        [sym_is_pattern] = ACTIONS(SHIFT(35)),
        [sym_as_pattern] = ACTIONS(SHIFT(35)),
        [sym__expression] = ACTIONS(SHIFT(36)),
        [sym__expression_list] = ACTIONS(SHIFT(31)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(224)),
        [anon_sym_case] = ACTIONS(SHIFT(225)),
        [anon_sym_var] = ACTIONS(SHIFT(40)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(34)),
        [anon_sym_let] = ACTIONS(SHIFT(41)),
        [anon_sym_is] = ACTIONS(SHIFT(42)),
        [sym_identifier] = ACTIONS(SHIFT(43)),
    },
    [7] = {
        [sym__expression] = ACTIONS(SHIFT(9)),
        [sym_identifier] = ACTIONS(SHIFT(10)),
    },
    [8] = {
        [sym__statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [9] = {
        [anon_sym_LBRACE] = ACTIONS(SHIFT(11)),
    },
    [10] = {
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [11] = {
        [sym_case_statement] = ACTIONS(SHIFT(12)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(13)),
        [anon_sym_case] = ACTIONS(SHIFT(14)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(15)),
        [anon_sym_default] = ACTIONS(SHIFT(16)),
    },
    [12] = {
        [sym_case_statement] = ACTIONS(SHIFT(12)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(221)),
        [anon_sym_case] = ACTIONS(SHIFT(14)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 1)),
        [anon_sym_default] = ACTIONS(SHIFT(16)),
    },
    [13] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(220)),
    },
    [14] = {
        [sym__pattern] = ACTIONS(SHIFT(192)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(193)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(193)),
        [sym_optional_pattern] = ACTIONS(SHIFT(193)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(193)),
        [sym_is_pattern] = ACTIONS(SHIFT(194)),
        [sym_as_pattern] = ACTIONS(SHIFT(194)),
        [sym__expression] = ACTIONS(SHIFT(193)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(195)),
        [anon_sym_var] = ACTIONS(SHIFT(196)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(193)),
        [anon_sym_let] = ACTIONS(SHIFT(196)),
        [anon_sym_is] = ACTIONS(SHIFT(197)),
        [sym_identifier] = ACTIONS(SHIFT(198)),
    },
    [15] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 4)),
    },
    [16] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(17)),
    },
    [17] = {
        [sym__statement] = ACTIONS(SHIFT(18)),
        [sym_for_statement] = ACTIONS(SHIFT(19)),
        [sym_for_in_statement] = ACTIONS(SHIFT(19)),
        [sym_switch_statement] = ACTIONS(SHIFT(19)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [sym__expression] = ACTIONS(SHIFT(19)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(20)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_for] = ACTIONS(SHIFT(21)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_switch] = ACTIONS(SHIFT(22)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [sym__declaration] = ACTIONS(SHIFT(19)),
        [sym_identifier] = ACTIONS(SHIFT(23)),
    },
    [18] = {
        [sym__statement] = ACTIONS(SHIFT(18)),
        [sym_for_statement] = ACTIONS(SHIFT(19)),
        [sym_for_in_statement] = ACTIONS(SHIFT(19)),
        [sym_switch_statement] = ACTIONS(SHIFT(19)),
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [sym__expression] = ACTIONS(SHIFT(19)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(191)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [anon_sym_for] = ACTIONS(SHIFT(21)),
        [anon_sym_case] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [anon_sym_switch] = ACTIONS(SHIFT(22)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [anon_sym_default] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [sym__declaration] = ACTIONS(SHIFT(19)),
        [sym_identifier] = ACTIONS(SHIFT(23)),
    },
    [19] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_case_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(190)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_case] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_default] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 1)),
    },
    [20] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 3)),
    },
    [21] = {
        [sym__for_init] = ACTIONS(SHIFT(29)),
        [sym__for_condition] = ACTIONS(SHIFT(30)),
        [sym_variable_declaration] = ACTIONS(SHIFT(31)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(32)),
        [sym__pattern] = ACTIONS(SHIFT(33)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(34)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(34)),
        [sym_optional_pattern] = ACTIONS(SHIFT(34)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(34)),
        [sym_is_pattern] = ACTIONS(SHIFT(35)),
        [sym_as_pattern] = ACTIONS(SHIFT(35)),
        [sym__expression] = ACTIONS(SHIFT(36)),
        [sym__expression_list] = ACTIONS(SHIFT(31)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(38)),
        [anon_sym_case] = ACTIONS(SHIFT(39)),
        [anon_sym_var] = ACTIONS(SHIFT(40)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(34)),
        [anon_sym_let] = ACTIONS(SHIFT(41)),
        [anon_sym_is] = ACTIONS(SHIFT(42)),
        [sym_identifier] = ACTIONS(SHIFT(43)),
    },
    [22] = {
        [sym__expression] = ACTIONS(SHIFT(24)),
        [sym_identifier] = ACTIONS(SHIFT(10)),
    },
    [23] = {
        [sym__statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_case_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_case] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_default] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [24] = {
        [anon_sym_LBRACE] = ACTIONS(SHIFT(25)),
    },
    [25] = {
        [sym_case_statement] = ACTIONS(SHIFT(12)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(26)),
        [anon_sym_case] = ACTIONS(SHIFT(14)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(27)),
        [anon_sym_default] = ACTIONS(SHIFT(16)),
    },
    [26] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(28)),
    },
    [27] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 4)),
    },
    [28] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 5)),
    },
    [29] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(186)),
    },
    [30] = {
        [sym__code_block] = ACTIONS(SHIFT(185)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(96)),
    },
    [31] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__for_init, 1)),
    },
    [32] = {
        [sym__variable_name] = ACTIONS(SHIFT(171)),
        [sym_identifier] = ACTIONS(SHIFT(172)),
    },
    [33] = {
        [sym__type_annotation] = ACTIONS(SHIFT(167)),
        [anon_sym_in] = ACTIONS(SHIFT(168)),
        [anon_sym_COLON] = ACTIONS(SHIFT(86)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(80)),
        [anon_sym_as] = ACTIONS(SHIFT(81)),
    },
    [34] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [35] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_casting_pattern, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_casting_pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_casting_pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_casting_pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_casting_pattern, 1)),
    },
    [36] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(137)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(138)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [37] = {
        [sym__expression] = ACTIONS(SHIFT(162)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(163)),
        [sym_identifier] = ACTIONS(SHIFT(132)),
    },
    [38] = {
        [sym__for_init] = ACTIONS(SHIFT(124)),
        [sym__for_condition] = ACTIONS(SHIFT(159)),
        [sym_variable_declaration] = ACTIONS(SHIFT(31)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(32)),
        [sym__pattern] = ACTIONS(SHIFT(53)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(54)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(54)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(55)),
        [sym_optional_pattern] = ACTIONS(SHIFT(54)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(54)),
        [sym_is_pattern] = ACTIONS(SHIFT(56)),
        [sym_as_pattern] = ACTIONS(SHIFT(56)),
        [sym__expression] = ACTIONS(SHIFT(126)),
        [sym__expression_list] = ACTIONS(SHIFT(31)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(127)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(57)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(58)),
        [anon_sym_var] = ACTIONS(SHIFT(128)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(54)),
        [anon_sym_let] = ACTIONS(SHIFT(59)),
        [anon_sym_is] = ACTIONS(SHIFT(60)),
        [sym_identifier] = ACTIONS(SHIFT(129)),
    },
    [39] = {
        [sym__pattern] = ACTIONS(SHIFT(83)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(34)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(34)),
        [sym_optional_pattern] = ACTIONS(SHIFT(34)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(34)),
        [sym_is_pattern] = ACTIONS(SHIFT(35)),
        [sym_as_pattern] = ACTIONS(SHIFT(35)),
        [sym__expression] = ACTIONS(SHIFT(34)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(51)),
        [anon_sym_var] = ACTIONS(SHIFT(41)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(34)),
        [anon_sym_let] = ACTIONS(SHIFT(41)),
        [anon_sym_is] = ACTIONS(SHIFT(42)),
        [sym_identifier] = ACTIONS(SHIFT(52)),
    },
    [40] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(50)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(34)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(34)),
        [sym_optional_pattern] = ACTIONS(SHIFT(34)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(34)),
        [sym_is_pattern] = ACTIONS(SHIFT(35)),
        [sym_as_pattern] = ACTIONS(SHIFT(35)),
        [sym__expression] = ACTIONS(SHIFT(34)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(51)),
        [anon_sym_var] = ACTIONS(SHIFT(41)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(34)),
        [anon_sym_let] = ACTIONS(SHIFT(41)),
        [anon_sym_is] = ACTIONS(SHIFT(42)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(52)),
    },
    [41] = {
        [sym__pattern] = ACTIONS(SHIFT(50)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(34)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(34)),
        [sym_optional_pattern] = ACTIONS(SHIFT(34)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(34)),
        [sym_is_pattern] = ACTIONS(SHIFT(35)),
        [sym_as_pattern] = ACTIONS(SHIFT(35)),
        [sym__expression] = ACTIONS(SHIFT(34)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(51)),
        [anon_sym_var] = ACTIONS(SHIFT(41)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(34)),
        [anon_sym_let] = ACTIONS(SHIFT(41)),
        [anon_sym_is] = ACTIONS(SHIFT(42)),
        [sym_identifier] = ACTIONS(SHIFT(52)),
    },
    [42] = {
        [sym_type] = ACTIONS(SHIFT(44)),
        [sym__type_identifier] = ACTIONS(SHIFT(45)),
        [sym__type_name] = ACTIONS(SHIFT(46)),
        [sym_identifier] = ACTIONS(SHIFT(47)),
    },
    [43] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [44] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [45] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [46] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(48)),
    },
    [47] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [48] = {
        [sym__type_identifier] = ACTIONS(SHIFT(49)),
        [sym__type_name] = ACTIONS(SHIFT(46)),
        [sym_identifier] = ACTIONS(SHIFT(47)),
    },
    [49] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [50] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(80)),
        [anon_sym_as] = ACTIONS(SHIFT(81)),
    },
    [51] = {
        [sym__pattern] = ACTIONS(SHIFT(53)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(54)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(54)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(55)),
        [sym_optional_pattern] = ACTIONS(SHIFT(54)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(54)),
        [sym_is_pattern] = ACTIONS(SHIFT(56)),
        [sym_as_pattern] = ACTIONS(SHIFT(56)),
        [sym__expression] = ACTIONS(SHIFT(54)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(57)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(58)),
        [anon_sym_var] = ACTIONS(SHIFT(59)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(54)),
        [anon_sym_let] = ACTIONS(SHIFT(59)),
        [anon_sym_is] = ACTIONS(SHIFT(60)),
        [sym_identifier] = ACTIONS(SHIFT(61)),
    },
    [52] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [53] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(76)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(77)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(69)),
        [anon_sym_as] = ACTIONS(SHIFT(70)),
    },
    [54] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [55] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(75)),
    },
    [56] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_casting_pattern, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_casting_pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_casting_pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_casting_pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_casting_pattern, 1)),
    },
    [57] = {
        [sym__pattern] = ACTIONS(SHIFT(53)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(54)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(54)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(72)),
        [sym_optional_pattern] = ACTIONS(SHIFT(54)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(54)),
        [sym_is_pattern] = ACTIONS(SHIFT(56)),
        [sym_as_pattern] = ACTIONS(SHIFT(56)),
        [sym__expression] = ACTIONS(SHIFT(54)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(57)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(73)),
        [anon_sym_var] = ACTIONS(SHIFT(59)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(54)),
        [anon_sym_let] = ACTIONS(SHIFT(59)),
        [anon_sym_is] = ACTIONS(SHIFT(60)),
        [sym_identifier] = ACTIONS(SHIFT(61)),
    },
    [58] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [59] = {
        [sym__pattern] = ACTIONS(SHIFT(68)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(54)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(54)),
        [sym_optional_pattern] = ACTIONS(SHIFT(54)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(54)),
        [sym_is_pattern] = ACTIONS(SHIFT(56)),
        [sym_as_pattern] = ACTIONS(SHIFT(56)),
        [sym__expression] = ACTIONS(SHIFT(54)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(57)),
        [anon_sym_var] = ACTIONS(SHIFT(59)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(54)),
        [anon_sym_let] = ACTIONS(SHIFT(59)),
        [anon_sym_is] = ACTIONS(SHIFT(60)),
        [sym_identifier] = ACTIONS(SHIFT(61)),
    },
    [60] = {
        [sym_type] = ACTIONS(SHIFT(62)),
        [sym__type_identifier] = ACTIONS(SHIFT(63)),
        [sym__type_name] = ACTIONS(SHIFT(64)),
        [sym_identifier] = ACTIONS(SHIFT(65)),
    },
    [61] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [62] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [63] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [64] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(66)),
    },
    [65] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [66] = {
        [sym__type_identifier] = ACTIONS(SHIFT(67)),
        [sym__type_name] = ACTIONS(SHIFT(64)),
        [sym_identifier] = ACTIONS(SHIFT(65)),
    },
    [67] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [68] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(69)),
        [anon_sym_as] = ACTIONS(SHIFT(70)),
    },
    [69] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [70] = {
        [sym_type] = ACTIONS(SHIFT(71)),
        [sym__type_identifier] = ACTIONS(SHIFT(63)),
        [sym__type_name] = ACTIONS(SHIFT(64)),
        [sym_identifier] = ACTIONS(SHIFT(65)),
    },
    [71] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [72] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(74)),
    },
    [73] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [74] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [75] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [76] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 2)),
    },
    [77] = {
        [sym__pattern] = ACTIONS(SHIFT(78)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(54)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(54)),
        [sym_optional_pattern] = ACTIONS(SHIFT(54)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(54)),
        [sym_is_pattern] = ACTIONS(SHIFT(56)),
        [sym_as_pattern] = ACTIONS(SHIFT(56)),
        [sym__expression] = ACTIONS(SHIFT(54)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(57)),
        [anon_sym_var] = ACTIONS(SHIFT(59)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(54)),
        [anon_sym_let] = ACTIONS(SHIFT(59)),
        [anon_sym_is] = ACTIONS(SHIFT(60)),
        [sym_identifier] = ACTIONS(SHIFT(61)),
    },
    [78] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(79)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(77)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(69)),
        [anon_sym_as] = ACTIONS(SHIFT(70)),
    },
    [79] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [80] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [81] = {
        [sym_type] = ACTIONS(SHIFT(82)),
        [sym__type_identifier] = ACTIONS(SHIFT(45)),
        [sym__type_name] = ACTIONS(SHIFT(46)),
        [sym_identifier] = ACTIONS(SHIFT(47)),
    },
    [82] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [83] = {
        [sym__type_annotation] = ACTIONS(SHIFT(84)),
        [anon_sym_in] = ACTIONS(SHIFT(85)),
        [anon_sym_COLON] = ACTIONS(SHIFT(86)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(80)),
        [anon_sym_as] = ACTIONS(SHIFT(81)),
    },
    [84] = {
        [anon_sym_in] = ACTIONS(SHIFT(156)),
    },
    [85] = {
        [sym__expression] = ACTIONS(SHIFT(93)),
        [sym_identifier] = ACTIONS(SHIFT(94)),
    },
    [86] = {
        [sym_type] = ACTIONS(SHIFT(87)),
        [sym__type_identifier] = ACTIONS(SHIFT(88)),
        [sym__type_name] = ACTIONS(SHIFT(89)),
        [sym_identifier] = ACTIONS(SHIFT(90)),
    },
    [87] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [88] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [89] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(91)),
    },
    [90] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [91] = {
        [sym__type_identifier] = ACTIONS(SHIFT(92)),
        [sym__type_name] = ACTIONS(SHIFT(89)),
        [sym_identifier] = ACTIONS(SHIFT(90)),
    },
    [92] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [93] = {
        [sym__code_block] = ACTIONS(SHIFT(95)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(96)),
    },
    [94] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [95] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
    },
    [96] = {
        [sym__statement] = ACTIONS(SHIFT(97)),
        [sym__statements] = ACTIONS(SHIFT(98)),
        [sym_for_statement] = ACTIONS(SHIFT(99)),
        [sym_for_in_statement] = ACTIONS(SHIFT(99)),
        [sym_switch_statement] = ACTIONS(SHIFT(99)),
        [sym__expression] = ACTIONS(SHIFT(99)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(100)),
        [anon_sym_for] = ACTIONS(SHIFT(101)),
        [anon_sym_switch] = ACTIONS(SHIFT(102)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(99)),
        [sym_identifier] = ACTIONS(SHIFT(103)),
    },
    [97] = {
        [sym__statement] = ACTIONS(SHIFT(97)),
        [sym_for_statement] = ACTIONS(SHIFT(99)),
        [sym_for_in_statement] = ACTIONS(SHIFT(99)),
        [sym_switch_statement] = ACTIONS(SHIFT(99)),
        [sym__expression] = ACTIONS(SHIFT(99)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(155)),
        [anon_sym_for] = ACTIONS(SHIFT(101)),
        [anon_sym_switch] = ACTIONS(SHIFT(102)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [sym__declaration] = ACTIONS(SHIFT(99)),
        [sym_identifier] = ACTIONS(SHIFT(103)),
    },
    [98] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(154)),
    },
    [99] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(153)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 1)),
    },
    [100] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 1)),
    },
    [101] = {
        [sym__for_init] = ACTIONS(SHIFT(29)),
        [sym__for_condition] = ACTIONS(SHIFT(109)),
        [sym_variable_declaration] = ACTIONS(SHIFT(31)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(32)),
        [sym__pattern] = ACTIONS(SHIFT(110)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(34)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(34)),
        [sym_optional_pattern] = ACTIONS(SHIFT(34)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(34)),
        [sym_is_pattern] = ACTIONS(SHIFT(35)),
        [sym_as_pattern] = ACTIONS(SHIFT(35)),
        [sym__expression] = ACTIONS(SHIFT(36)),
        [sym__expression_list] = ACTIONS(SHIFT(31)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(111)),
        [anon_sym_case] = ACTIONS(SHIFT(112)),
        [anon_sym_var] = ACTIONS(SHIFT(40)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(34)),
        [anon_sym_let] = ACTIONS(SHIFT(41)),
        [anon_sym_is] = ACTIONS(SHIFT(42)),
        [sym_identifier] = ACTIONS(SHIFT(43)),
    },
    [102] = {
        [sym__expression] = ACTIONS(SHIFT(104)),
        [sym_identifier] = ACTIONS(SHIFT(10)),
    },
    [103] = {
        [sym__statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [104] = {
        [anon_sym_LBRACE] = ACTIONS(SHIFT(105)),
    },
    [105] = {
        [sym_case_statement] = ACTIONS(SHIFT(12)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(106)),
        [anon_sym_case] = ACTIONS(SHIFT(14)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(107)),
        [anon_sym_default] = ACTIONS(SHIFT(16)),
    },
    [106] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(108)),
    },
    [107] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 4)),
    },
    [108] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 5)),
    },
    [109] = {
        [sym__code_block] = ACTIONS(SHIFT(152)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(118)),
    },
    [110] = {
        [sym__type_annotation] = ACTIONS(SHIFT(148)),
        [anon_sym_in] = ACTIONS(SHIFT(149)),
        [anon_sym_COLON] = ACTIONS(SHIFT(86)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(80)),
        [anon_sym_as] = ACTIONS(SHIFT(81)),
    },
    [111] = {
        [sym__for_init] = ACTIONS(SHIFT(124)),
        [sym__for_condition] = ACTIONS(SHIFT(125)),
        [sym_variable_declaration] = ACTIONS(SHIFT(31)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(32)),
        [sym__pattern] = ACTIONS(SHIFT(53)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(54)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(54)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(55)),
        [sym_optional_pattern] = ACTIONS(SHIFT(54)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(54)),
        [sym_is_pattern] = ACTIONS(SHIFT(56)),
        [sym_as_pattern] = ACTIONS(SHIFT(56)),
        [sym__expression] = ACTIONS(SHIFT(126)),
        [sym__expression_list] = ACTIONS(SHIFT(31)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(127)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(57)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(58)),
        [anon_sym_var] = ACTIONS(SHIFT(128)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(54)),
        [anon_sym_let] = ACTIONS(SHIFT(59)),
        [anon_sym_is] = ACTIONS(SHIFT(60)),
        [sym_identifier] = ACTIONS(SHIFT(129)),
    },
    [112] = {
        [sym__pattern] = ACTIONS(SHIFT(113)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(34)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(34)),
        [sym_optional_pattern] = ACTIONS(SHIFT(34)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(34)),
        [sym_is_pattern] = ACTIONS(SHIFT(35)),
        [sym_as_pattern] = ACTIONS(SHIFT(35)),
        [sym__expression] = ACTIONS(SHIFT(34)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(51)),
        [anon_sym_var] = ACTIONS(SHIFT(41)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(34)),
        [anon_sym_let] = ACTIONS(SHIFT(41)),
        [anon_sym_is] = ACTIONS(SHIFT(42)),
        [sym_identifier] = ACTIONS(SHIFT(52)),
    },
    [113] = {
        [sym__type_annotation] = ACTIONS(SHIFT(114)),
        [anon_sym_in] = ACTIONS(SHIFT(115)),
        [anon_sym_COLON] = ACTIONS(SHIFT(86)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(80)),
        [anon_sym_as] = ACTIONS(SHIFT(81)),
    },
    [114] = {
        [anon_sym_in] = ACTIONS(SHIFT(121)),
    },
    [115] = {
        [sym__expression] = ACTIONS(SHIFT(116)),
        [sym_identifier] = ACTIONS(SHIFT(94)),
    },
    [116] = {
        [sym__code_block] = ACTIONS(SHIFT(117)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(118)),
    },
    [117] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
    },
    [118] = {
        [sym__statement] = ACTIONS(SHIFT(97)),
        [sym__statements] = ACTIONS(SHIFT(119)),
        [sym_for_statement] = ACTIONS(SHIFT(99)),
        [sym_for_in_statement] = ACTIONS(SHIFT(99)),
        [sym_switch_statement] = ACTIONS(SHIFT(99)),
        [sym__expression] = ACTIONS(SHIFT(99)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(100)),
        [anon_sym_for] = ACTIONS(SHIFT(101)),
        [anon_sym_switch] = ACTIONS(SHIFT(102)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(99)),
        [sym_identifier] = ACTIONS(SHIFT(103)),
    },
    [119] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(120)),
    },
    [120] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [121] = {
        [sym__expression] = ACTIONS(SHIFT(122)),
        [sym_identifier] = ACTIONS(SHIFT(94)),
    },
    [122] = {
        [sym__code_block] = ACTIONS(SHIFT(123)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(118)),
    },
    [123] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
    },
    [124] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(144)),
    },
    [125] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(142)),
    },
    [126] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(137)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1), SHIFT(138)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [127] = {
        [sym__expression] = ACTIONS(SHIFT(130)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(131)),
        [sym_identifier] = ACTIONS(SHIFT(132)),
    },
    [128] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(68)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(54)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(54)),
        [sym_optional_pattern] = ACTIONS(SHIFT(54)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(54)),
        [sym_is_pattern] = ACTIONS(SHIFT(56)),
        [sym_as_pattern] = ACTIONS(SHIFT(56)),
        [sym__expression] = ACTIONS(SHIFT(54)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(57)),
        [anon_sym_var] = ACTIONS(SHIFT(59)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(54)),
        [anon_sym_let] = ACTIONS(SHIFT(59)),
        [anon_sym_is] = ACTIONS(SHIFT(60)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(61)),
    },
    [129] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [130] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(135)),
    },
    [131] = {
        [sym__expression] = ACTIONS(SHIFT(133)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(134)),
    },
    [132] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [133] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [134] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [135] = {
        [sym__expression] = ACTIONS(SHIFT(136)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(134)),
    },
    [136] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [137] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 2)),
    },
    [138] = {
        [sym__expression] = ACTIONS(SHIFT(139)),
        [sym_identifier] = ACTIONS(SHIFT(140)),
    },
    [139] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(141)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(138)),
    },
    [140] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [141] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 3)),
    },
    [142] = {
        [sym__code_block] = ACTIONS(SHIFT(143)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(118)),
    },
    [143] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 5)),
    },
    [144] = {
        [sym__expression] = ACTIONS(SHIFT(145)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(135)),
        [sym_identifier] = ACTIONS(SHIFT(132)),
    },
    [145] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(146)),
    },
    [146] = {
        [sym__expression] = ACTIONS(SHIFT(147)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(134)),
    },
    [147] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [148] = {
        [anon_sym_in] = ACTIONS(SHIFT(115)),
    },
    [149] = {
        [sym__expression] = ACTIONS(SHIFT(150)),
        [sym_identifier] = ACTIONS(SHIFT(94)),
    },
    [150] = {
        [sym__code_block] = ACTIONS(SHIFT(151)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(118)),
    },
    [151] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
    },
    [152] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 3)),
    },
    [153] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [154] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_case_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_case] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [155] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
    },
    [156] = {
        [sym__expression] = ACTIONS(SHIFT(157)),
        [sym_identifier] = ACTIONS(SHIFT(94)),
    },
    [157] = {
        [sym__code_block] = ACTIONS(SHIFT(158)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(96)),
    },
    [158] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
    },
    [159] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(160)),
    },
    [160] = {
        [sym__code_block] = ACTIONS(SHIFT(161)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(96)),
    },
    [161] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 5)),
    },
    [162] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(165)),
    },
    [163] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym__expression] = ACTIONS(SHIFT(164)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(94)),
    },
    [164] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [165] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym__expression] = ACTIONS(SHIFT(166)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(94)),
    },
    [166] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [167] = {
        [anon_sym_in] = ACTIONS(SHIFT(85)),
    },
    [168] = {
        [sym__expression] = ACTIONS(SHIFT(169)),
        [sym_identifier] = ACTIONS(SHIFT(94)),
    },
    [169] = {
        [sym__code_block] = ACTIONS(SHIFT(170)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(96)),
    },
    [170] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
    },
    [171] = {
        [sym__type_annotation] = ACTIONS(SHIFT(173)),
        [anon_sym_COLON] = ACTIONS(SHIFT(174)),
    },
    [172] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__variable_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__variable_name, 1)),
    },
    [173] = {
        [sym__code_block] = ACTIONS(SHIFT(181)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(182)),
    },
    [174] = {
        [sym_type] = ACTIONS(SHIFT(175)),
        [sym__type_identifier] = ACTIONS(SHIFT(176)),
        [sym__type_name] = ACTIONS(SHIFT(177)),
        [sym_identifier] = ACTIONS(SHIFT(178)),
    },
    [175] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [176] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [177] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(179)),
    },
    [178] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [179] = {
        [sym__type_identifier] = ACTIONS(SHIFT(180)),
        [sym__type_name] = ACTIONS(SHIFT(177)),
        [sym_identifier] = ACTIONS(SHIFT(178)),
    },
    [180] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [181] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_variable_declaration, 4)),
    },
    [182] = {
        [sym__statement] = ACTIONS(SHIFT(97)),
        [sym__statements] = ACTIONS(SHIFT(183)),
        [sym_for_statement] = ACTIONS(SHIFT(99)),
        [sym_for_in_statement] = ACTIONS(SHIFT(99)),
        [sym_switch_statement] = ACTIONS(SHIFT(99)),
        [sym__expression] = ACTIONS(SHIFT(99)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(100)),
        [anon_sym_for] = ACTIONS(SHIFT(101)),
        [anon_sym_switch] = ACTIONS(SHIFT(102)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(99)),
        [sym_identifier] = ACTIONS(SHIFT(103)),
    },
    [183] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(184)),
    },
    [184] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [185] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 3)),
    },
    [186] = {
        [sym__expression] = ACTIONS(SHIFT(187)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(165)),
        [sym_identifier] = ACTIONS(SHIFT(132)),
    },
    [187] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(188)),
    },
    [188] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym__expression] = ACTIONS(SHIFT(189)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(94)),
    },
    [189] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [190] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_case_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_case] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [191] = {
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
        [anon_sym_case] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
    },
    [192] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(212)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(213)),
        [anon_sym_COLON] = ACTIONS(SHIFT(214)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(206)),
        [anon_sym_as] = ACTIONS(SHIFT(207)),
    },
    [193] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [194] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_casting_pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_casting_pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_casting_pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_casting_pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_casting_pattern, 1)),
    },
    [195] = {
        [sym__pattern] = ACTIONS(SHIFT(53)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(54)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(54)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(209)),
        [sym_optional_pattern] = ACTIONS(SHIFT(54)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(54)),
        [sym_is_pattern] = ACTIONS(SHIFT(56)),
        [sym_as_pattern] = ACTIONS(SHIFT(56)),
        [sym__expression] = ACTIONS(SHIFT(54)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(57)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(210)),
        [anon_sym_var] = ACTIONS(SHIFT(59)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(54)),
        [anon_sym_let] = ACTIONS(SHIFT(59)),
        [anon_sym_is] = ACTIONS(SHIFT(60)),
        [sym_identifier] = ACTIONS(SHIFT(61)),
    },
    [196] = {
        [sym__pattern] = ACTIONS(SHIFT(205)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(193)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(193)),
        [sym_optional_pattern] = ACTIONS(SHIFT(193)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(193)),
        [sym_is_pattern] = ACTIONS(SHIFT(194)),
        [sym_as_pattern] = ACTIONS(SHIFT(194)),
        [sym__expression] = ACTIONS(SHIFT(193)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(195)),
        [anon_sym_var] = ACTIONS(SHIFT(196)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(193)),
        [anon_sym_let] = ACTIONS(SHIFT(196)),
        [anon_sym_is] = ACTIONS(SHIFT(197)),
        [sym_identifier] = ACTIONS(SHIFT(198)),
    },
    [197] = {
        [sym_type] = ACTIONS(SHIFT(199)),
        [sym__type_identifier] = ACTIONS(SHIFT(200)),
        [sym__type_name] = ACTIONS(SHIFT(201)),
        [sym_identifier] = ACTIONS(SHIFT(202)),
    },
    [198] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [199] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [200] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [201] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(203)),
    },
    [202] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [203] = {
        [sym__type_identifier] = ACTIONS(SHIFT(204)),
        [sym__type_name] = ACTIONS(SHIFT(201)),
        [sym_identifier] = ACTIONS(SHIFT(202)),
    },
    [204] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [205] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(206)),
        [anon_sym_as] = ACTIONS(SHIFT(207)),
    },
    [206] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [207] = {
        [sym_type] = ACTIONS(SHIFT(208)),
        [sym__type_identifier] = ACTIONS(SHIFT(200)),
        [sym__type_name] = ACTIONS(SHIFT(201)),
        [sym_identifier] = ACTIONS(SHIFT(202)),
    },
    [208] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [209] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(211)),
    },
    [210] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [211] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [212] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(218)),
    },
    [213] = {
        [sym__pattern] = ACTIONS(SHIFT(216)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(193)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(193)),
        [sym_optional_pattern] = ACTIONS(SHIFT(193)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(193)),
        [sym_is_pattern] = ACTIONS(SHIFT(194)),
        [sym_as_pattern] = ACTIONS(SHIFT(194)),
        [sym__expression] = ACTIONS(SHIFT(193)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(195)),
        [anon_sym_var] = ACTIONS(SHIFT(196)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(193)),
        [anon_sym_let] = ACTIONS(SHIFT(196)),
        [anon_sym_is] = ACTIONS(SHIFT(197)),
        [sym_identifier] = ACTIONS(SHIFT(198)),
    },
    [214] = {
        [sym__statement] = ACTIONS(SHIFT(18)),
        [sym_for_statement] = ACTIONS(SHIFT(19)),
        [sym_for_in_statement] = ACTIONS(SHIFT(19)),
        [sym_switch_statement] = ACTIONS(SHIFT(19)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [sym__expression] = ACTIONS(SHIFT(19)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(215)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_for] = ACTIONS(SHIFT(21)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_switch] = ACTIONS(SHIFT(22)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [sym__declaration] = ACTIONS(SHIFT(19)),
        [sym_identifier] = ACTIONS(SHIFT(23)),
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
        [anon_sym_QMARK] = ACTIONS(SHIFT(206)),
        [anon_sym_as] = ACTIONS(SHIFT(207)),
    },
    [217] = {
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [218] = {
        [sym__statement] = ACTIONS(SHIFT(18)),
        [sym_for_statement] = ACTIONS(SHIFT(19)),
        [sym_for_in_statement] = ACTIONS(SHIFT(19)),
        [sym_switch_statement] = ACTIONS(SHIFT(19)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [sym__expression] = ACTIONS(SHIFT(19)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(219)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_for] = ACTIONS(SHIFT(21)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_switch] = ACTIONS(SHIFT(22)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [sym__declaration] = ACTIONS(SHIFT(19)),
        [sym_identifier] = ACTIONS(SHIFT(23)),
    },
    [219] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 5)),
    },
    [220] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 5)),
    },
    [221] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 2)),
    },
    [222] = {
        [sym__code_block] = ACTIONS(SHIFT(244)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(231)),
    },
    [223] = {
        [sym__type_annotation] = ACTIONS(SHIFT(240)),
        [anon_sym_in] = ACTIONS(SHIFT(241)),
        [anon_sym_COLON] = ACTIONS(SHIFT(86)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(80)),
        [anon_sym_as] = ACTIONS(SHIFT(81)),
    },
    [224] = {
        [sym__for_init] = ACTIONS(SHIFT(124)),
        [sym__for_condition] = ACTIONS(SHIFT(237)),
        [sym_variable_declaration] = ACTIONS(SHIFT(31)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(32)),
        [sym__pattern] = ACTIONS(SHIFT(53)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(54)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(54)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(55)),
        [sym_optional_pattern] = ACTIONS(SHIFT(54)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(54)),
        [sym_is_pattern] = ACTIONS(SHIFT(56)),
        [sym_as_pattern] = ACTIONS(SHIFT(56)),
        [sym__expression] = ACTIONS(SHIFT(126)),
        [sym__expression_list] = ACTIONS(SHIFT(31)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(127)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(57)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(58)),
        [anon_sym_var] = ACTIONS(SHIFT(128)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(54)),
        [anon_sym_let] = ACTIONS(SHIFT(59)),
        [anon_sym_is] = ACTIONS(SHIFT(60)),
        [sym_identifier] = ACTIONS(SHIFT(129)),
    },
    [225] = {
        [sym__pattern] = ACTIONS(SHIFT(226)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(34)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(34)),
        [sym_optional_pattern] = ACTIONS(SHIFT(34)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(34)),
        [sym_is_pattern] = ACTIONS(SHIFT(35)),
        [sym_as_pattern] = ACTIONS(SHIFT(35)),
        [sym__expression] = ACTIONS(SHIFT(34)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(51)),
        [anon_sym_var] = ACTIONS(SHIFT(41)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(34)),
        [anon_sym_let] = ACTIONS(SHIFT(41)),
        [anon_sym_is] = ACTIONS(SHIFT(42)),
        [sym_identifier] = ACTIONS(SHIFT(52)),
    },
    [226] = {
        [sym__type_annotation] = ACTIONS(SHIFT(227)),
        [anon_sym_in] = ACTIONS(SHIFT(228)),
        [anon_sym_COLON] = ACTIONS(SHIFT(86)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(80)),
        [anon_sym_as] = ACTIONS(SHIFT(81)),
    },
    [227] = {
        [anon_sym_in] = ACTIONS(SHIFT(234)),
    },
    [228] = {
        [sym__expression] = ACTIONS(SHIFT(229)),
        [sym_identifier] = ACTIONS(SHIFT(94)),
    },
    [229] = {
        [sym__code_block] = ACTIONS(SHIFT(230)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(231)),
    },
    [230] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
    },
    [231] = {
        [sym__statement] = ACTIONS(SHIFT(97)),
        [sym__statements] = ACTIONS(SHIFT(232)),
        [sym_for_statement] = ACTIONS(SHIFT(99)),
        [sym_for_in_statement] = ACTIONS(SHIFT(99)),
        [sym_switch_statement] = ACTIONS(SHIFT(99)),
        [sym__expression] = ACTIONS(SHIFT(99)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(100)),
        [anon_sym_for] = ACTIONS(SHIFT(101)),
        [anon_sym_switch] = ACTIONS(SHIFT(102)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(99)),
        [sym_identifier] = ACTIONS(SHIFT(103)),
    },
    [232] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(233)),
    },
    [233] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [234] = {
        [sym__expression] = ACTIONS(SHIFT(235)),
        [sym_identifier] = ACTIONS(SHIFT(94)),
    },
    [235] = {
        [sym__code_block] = ACTIONS(SHIFT(236)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(231)),
    },
    [236] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
    },
    [237] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(238)),
    },
    [238] = {
        [sym__code_block] = ACTIONS(SHIFT(239)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(231)),
    },
    [239] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 5)),
    },
    [240] = {
        [anon_sym_in] = ACTIONS(SHIFT(228)),
    },
    [241] = {
        [sym__expression] = ACTIONS(SHIFT(242)),
        [sym_identifier] = ACTIONS(SHIFT(94)),
    },
    [242] = {
        [sym__code_block] = ACTIONS(SHIFT(243)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(231)),
    },
    [243] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
    },
    [244] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 3)),
    },
    [245] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [246] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
    },
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_swift);
