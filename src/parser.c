#include "tree_sitter/parser.h"

#define STATE_COUNT 269
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
            if (lookahead == '.')
                ADVANCE(27);
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
                ADVANCE(28);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'i')
                ADVANCE(33);
            if (lookahead == 'l')
                ADVANCE(35);
            if (lookahead == 'v')
                ADVANCE(38);
            LEX_ERROR();
        case 26:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 27:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 28:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(sym_wildcard_pattern);
        case 29:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(30);
            ACCEPT_TOKEN(sym_identifier);
        case 30:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(31);
            ACCEPT_TOKEN(sym_identifier);
        case 31:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(32);
            ACCEPT_TOKEN(sym_identifier);
        case 32:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_case);
        case 33:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(34);
            ACCEPT_TOKEN(sym_identifier);
        case 34:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_is);
        case 35:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier);
        case 36:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(37);
            ACCEPT_TOKEN(sym_identifier);
        case 37:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_let);
        case 38:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(39);
            ACCEPT_TOKEN(sym_identifier);
        case 39:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'r')
                ADVANCE(40);
            ACCEPT_TOKEN(sym_identifier);
        case 40:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_var);
        case 41:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(41);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 42:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(42);
            if (lookahead == '{')
                ADVANCE(43);
            LEX_ERROR();
        case 43:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 44:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(44);
            if (lookahead == 'c')
                ADVANCE(45);
            if (lookahead == 'd')
                ADVANCE(49);
            if (lookahead == '}')
                ADVANCE(56);
            LEX_ERROR();
        case 45:
            if (lookahead == 'a')
                ADVANCE(46);
            LEX_ERROR();
        case 46:
            if (lookahead == 's')
                ADVANCE(47);
            LEX_ERROR();
        case 47:
            if (lookahead == 'e')
                ADVANCE(48);
            LEX_ERROR();
        case 48:
            ACCEPT_TOKEN(anon_sym_case);
        case 49:
            if (lookahead == 'e')
                ADVANCE(50);
            LEX_ERROR();
        case 50:
            if (lookahead == 'f')
                ADVANCE(51);
            LEX_ERROR();
        case 51:
            if (lookahead == 'a')
                ADVANCE(52);
            LEX_ERROR();
        case 52:
            if (lookahead == 'u')
                ADVANCE(53);
            LEX_ERROR();
        case 53:
            if (lookahead == 'l')
                ADVANCE(54);
            LEX_ERROR();
        case 54:
            if (lookahead == 't')
                ADVANCE(55);
            LEX_ERROR();
        case 55:
            ACCEPT_TOKEN(anon_sym_default);
        case 56:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 57:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(57);
            if (lookahead == '}')
                ADVANCE(56);
            LEX_ERROR();
        case 58:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(58);
            if (lookahead == '(')
                ADVANCE(26);
            if (lookahead == '.')
                ADVANCE(27);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(28);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(33);
            if (lookahead == 'l')
                ADVANCE(35);
            if (lookahead == 'v')
                ADVANCE(38);
            LEX_ERROR();
        case 59:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(59);
            if (lookahead == ':')
                ADVANCE(60);
            LEX_ERROR();
        case 60:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 61:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(61);
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
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(62);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(16);
            if (lookahead == '}')
                ADVANCE(56);
            LEX_ERROR();
        case 62:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier);
        case 63:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'f')
                ADVANCE(64);
            ACCEPT_TOKEN(sym_identifier);
        case 64:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(65);
            ACCEPT_TOKEN(sym_identifier);
        case 65:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'u')
                ADVANCE(66);
            ACCEPT_TOKEN(sym_identifier);
        case 66:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier);
        case 67:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(68);
            ACCEPT_TOKEN(sym_identifier);
        case 68:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_default);
        case 69:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(69);
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
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(62);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(16);
            if (lookahead == '}')
                ADVANCE(56);
            LEX_ERROR();
        case 70:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(70);
            if (lookahead == ';')
                ADVANCE(24);
            LEX_ERROR();
        case 71:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(71);
            if (lookahead == ':')
                ADVANCE(60);
            if (lookahead == '?')
                ADVANCE(72);
            if (lookahead == 'a')
                ADVANCE(73);
            if (lookahead == 'i')
                ADVANCE(75);
            LEX_ERROR();
        case 72:
            ACCEPT_TOKEN(anon_sym_QMARK);
        case 73:
            if (lookahead == 's')
                ADVANCE(74);
            LEX_ERROR();
        case 74:
            ACCEPT_TOKEN(anon_sym_as);
        case 75:
            if (lookahead == 'n')
                ADVANCE(76);
            LEX_ERROR();
        case 76:
            ACCEPT_TOKEN(anon_sym_in);
        case 77:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(77);
            if (lookahead == ',')
                ADVANCE(78);
            if (lookahead == ':')
                ADVANCE(60);
            if (lookahead == ';')
                ADVANCE(24);
            if (lookahead == '?')
                ADVANCE(72);
            if (lookahead == 'a')
                ADVANCE(73);
            if (lookahead == 'i')
                ADVANCE(75);
            LEX_ERROR();
        case 78:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 79:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(79);
            if (lookahead == '.')
                ADVANCE(27);
            LEX_ERROR();
        case 80:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(80);
            if (lookahead == ';')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 81:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(81);
            if (lookahead == '(')
                ADVANCE(26);
            if (lookahead == ')')
                ADVANCE(82);
            if (lookahead == '.')
                ADVANCE(27);
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
                ADVANCE(28);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(33);
            if (lookahead == 'l')
                ADVANCE(35);
            if (lookahead == 'v')
                ADVANCE(38);
            LEX_ERROR();
        case 82:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 83:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(83);
            if (lookahead == ',')
                ADVANCE(78);
            if (lookahead == '.')
                ADVANCE(27);
            if (lookahead == ':')
                ADVANCE(60);
            if (lookahead == ';')
                ADVANCE(24);
            if (lookahead == '?')
                ADVANCE(72);
            if (lookahead == 'a')
                ADVANCE(73);
            if (lookahead == 'i')
                ADVANCE(75);
            LEX_ERROR();
        case 84:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(84);
            if (lookahead == '.')
                ADVANCE(27);
            if (lookahead == ':')
                ADVANCE(60);
            if (lookahead == '?')
                ADVANCE(72);
            if (lookahead == 'a')
                ADVANCE(73);
            if (lookahead == 'i')
                ADVANCE(75);
            LEX_ERROR();
        case 85:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(85);
            if (lookahead == '(')
                ADVANCE(26);
            if (lookahead == ':')
                ADVANCE(60);
            if (lookahead == '?')
                ADVANCE(72);
            if (lookahead == 'a')
                ADVANCE(73);
            if (lookahead == 'i')
                ADVANCE(75);
            LEX_ERROR();
        case 86:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(86);
            if (lookahead == '(')
                ADVANCE(26);
            if (lookahead == ')')
                ADVANCE(82);
            if (lookahead == '.')
                ADVANCE(27);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(28);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(33);
            if (lookahead == 'l')
                ADVANCE(35);
            if (lookahead == 'v')
                ADVANCE(38);
            LEX_ERROR();
        case 87:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(87);
            if (lookahead == ')')
                ADVANCE(82);
            if (lookahead == ',')
                ADVANCE(78);
            if (lookahead == '?')
                ADVANCE(72);
            if (lookahead == 'a')
                ADVANCE(73);
            LEX_ERROR();
        case 88:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(88);
            if (lookahead == ')')
                ADVANCE(82);
            LEX_ERROR();
        case 89:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(89);
            if (lookahead == ')')
                ADVANCE(82);
            if (lookahead == ',')
                ADVANCE(78);
            if (lookahead == '.')
                ADVANCE(27);
            if (lookahead == '?')
                ADVANCE(72);
            if (lookahead == 'a')
                ADVANCE(73);
            LEX_ERROR();
        case 90:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(90);
            if (lookahead == '(')
                ADVANCE(26);
            if (lookahead == ')')
                ADVANCE(82);
            if (lookahead == ',')
                ADVANCE(78);
            if (lookahead == '?')
                ADVANCE(72);
            if (lookahead == 'a')
                ADVANCE(73);
            LEX_ERROR();
        case 91:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(91);
            if (lookahead == 'i')
                ADVANCE(75);
            LEX_ERROR();
        case 92:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(92);
            if (lookahead == '.')
                ADVANCE(27);
            if (lookahead == 'i')
                ADVANCE(75);
            LEX_ERROR();
        case 93:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(93);
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
                ADVANCE(56);
            LEX_ERROR();
        case 94:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(94);
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
                ADVANCE(56);
            LEX_ERROR();
        case 95:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(95);
            if (lookahead == ')')
                ADVANCE(82);
            if (lookahead == ',')
                ADVANCE(78);
            if (lookahead == ';')
                ADVANCE(24);
            if (lookahead == '?')
                ADVANCE(72);
            if (lookahead == 'a')
                ADVANCE(73);
            LEX_ERROR();
        case 96:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(96);
            if (lookahead == ')')
                ADVANCE(82);
            if (lookahead == ',')
                ADVANCE(78);
            if (lookahead == '.')
                ADVANCE(27);
            if (lookahead == ';')
                ADVANCE(24);
            if (lookahead == '?')
                ADVANCE(72);
            if (lookahead == 'a')
                ADVANCE(73);
            LEX_ERROR();
        case 97:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(97);
            if (lookahead == ')')
                ADVANCE(82);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 98:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(98);
            if (lookahead == ',')
                ADVANCE(78);
            if (lookahead == ';')
                ADVANCE(24);
            LEX_ERROR();
        case 99:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(99);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == '{')
                ADVANCE(43);
            LEX_ERROR();
        case 100:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(100);
            if (lookahead == '.')
                ADVANCE(27);
            if (lookahead == '{')
                ADVANCE(43);
            LEX_ERROR();
        case 101:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(101);
            if (lookahead == ',')
                ADVANCE(78);
            if (lookahead == ':')
                ADVANCE(60);
            if (lookahead == '?')
                ADVANCE(72);
            if (lookahead == 'a')
                ADVANCE(73);
            LEX_ERROR();
        case 102:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(102);
            if (lookahead == ',')
                ADVANCE(78);
            if (lookahead == '.')
                ADVANCE(27);
            if (lookahead == ':')
                ADVANCE(60);
            if (lookahead == '?')
                ADVANCE(72);
            if (lookahead == 'a')
                ADVANCE(73);
            LEX_ERROR();
        case 103:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(103);
            if (lookahead == '(')
                ADVANCE(26);
            if (lookahead == ',')
                ADVANCE(78);
            if (lookahead == ':')
                ADVANCE(60);
            if (lookahead == '?')
                ADVANCE(72);
            if (lookahead == 'a')
                ADVANCE(73);
            LEX_ERROR();
        case 104:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(104);
            if (lookahead == '(')
                ADVANCE(26);
            if (lookahead == ')')
                ADVANCE(82);
            if (lookahead == ',')
                ADVANCE(78);
            if (lookahead == '.')
                ADVANCE(27);
            if (lookahead == ':')
                ADVANCE(60);
            if (lookahead == ';')
                ADVANCE(24);
            if (lookahead == '?')
                ADVANCE(72);
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
                ADVANCE(28);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(105);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(62);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(107);
            if (lookahead == 'l')
                ADVANCE(35);
            if (lookahead == 's')
                ADVANCE(16);
            if (lookahead == 'v')
                ADVANCE(38);
            if (lookahead == '{')
                ADVANCE(43);
            if (lookahead == '}')
                ADVANCE(56);
            LEX_ERROR();
        case 105:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(106);
            ACCEPT_TOKEN(sym_identifier);
        case 106:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_as);
        case 107:
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
                ADVANCE(108);
            if (lookahead == 's')
                ADVANCE(34);
            ACCEPT_TOKEN(sym_identifier);
        case 108:
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
                ADVANCE(104);
            if (lookahead == '(')
                ADVANCE(26);
            if (lookahead == ')')
                ADVANCE(82);
            if (lookahead == ',')
                ADVANCE(78);
            if (lookahead == '.')
                ADVANCE(27);
            if (lookahead == ':')
                ADVANCE(60);
            if (lookahead == ';')
                ADVANCE(24);
            if (lookahead == '?')
                ADVANCE(72);
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
                ADVANCE(28);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(105);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(62);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(107);
            if (lookahead == 'l')
                ADVANCE(35);
            if (lookahead == 's')
                ADVANCE(16);
            if (lookahead == 'v')
                ADVANCE(38);
            if (lookahead == '{')
                ADVANCE(43);
            if (lookahead == '}')
                ADVANCE(56);
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
    [7] = 41,
    [8] = 23,
    [9] = 42,
    [10] = 42,
    [11] = 44,
    [12] = 44,
    [13] = 57,
    [14] = 58,
    [15] = 23,
    [16] = 59,
    [17] = 61,
    [18] = 61,
    [19] = 69,
    [20] = 44,
    [21] = 25,
    [22] = 41,
    [23] = 69,
    [24] = 42,
    [25] = 44,
    [26] = 57,
    [27] = 69,
    [28] = 69,
    [29] = 70,
    [30] = 42,
    [31] = 70,
    [32] = 41,
    [33] = 71,
    [34] = 71,
    [35] = 77,
    [36] = 79,
    [37] = 79,
    [38] = 80,
    [39] = 81,
    [40] = 58,
    [41] = 58,
    [42] = 58,
    [43] = 41,
    [44] = 41,
    [45] = 83,
    [46] = 71,
    [47] = 71,
    [48] = 84,
    [49] = 84,
    [50] = 41,
    [51] = 71,
    [52] = 85,
    [53] = 71,
    [54] = 86,
    [55] = 87,
    [56] = 87,
    [57] = 88,
    [58] = 79,
    [59] = 86,
    [60] = 71,
    [61] = 58,
    [62] = 41,
    [63] = 41,
    [64] = 89,
    [65] = 87,
    [66] = 87,
    [67] = 89,
    [68] = 89,
    [69] = 41,
    [70] = 87,
    [71] = 90,
    [72] = 87,
    [73] = 87,
    [74] = 87,
    [75] = 41,
    [76] = 87,
    [77] = 88,
    [78] = 87,
    [79] = 87,
    [80] = 41,
    [81] = 90,
    [82] = 87,
    [83] = 71,
    [84] = 88,
    [85] = 58,
    [86] = 87,
    [87] = 88,
    [88] = 71,
    [89] = 84,
    [90] = 71,
    [91] = 41,
    [92] = 71,
    [93] = 71,
    [94] = 91,
    [95] = 41,
    [96] = 41,
    [97] = 91,
    [98] = 91,
    [99] = 92,
    [100] = 92,
    [101] = 41,
    [102] = 91,
    [103] = 42,
    [104] = 42,
    [105] = 69,
    [106] = 93,
    [107] = 93,
    [108] = 57,
    [109] = 94,
    [110] = 57,
    [111] = 25,
    [112] = 41,
    [113] = 94,
    [114] = 42,
    [115] = 44,
    [116] = 57,
    [117] = 94,
    [118] = 94,
    [119] = 42,
    [120] = 71,
    [121] = 81,
    [122] = 58,
    [123] = 71,
    [124] = 91,
    [125] = 41,
    [126] = 42,
    [127] = 94,
    [128] = 93,
    [129] = 57,
    [130] = 94,
    [131] = 41,
    [132] = 42,
    [133] = 94,
    [134] = 70,
    [135] = 88,
    [136] = 95,
    [137] = 80,
    [138] = 58,
    [139] = 96,
    [140] = 70,
    [141] = 97,
    [142] = 70,
    [143] = 88,
    [144] = 88,
    [145] = 97,
    [146] = 88,
    [147] = 70,
    [148] = 41,
    [149] = 98,
    [150] = 98,
    [151] = 70,
    [152] = 42,
    [153] = 94,
    [154] = 80,
    [155] = 70,
    [156] = 97,
    [157] = 88,
    [158] = 91,
    [159] = 41,
    [160] = 42,
    [161] = 94,
    [162] = 94,
    [163] = 93,
    [164] = 69,
    [165] = 57,
    [166] = 41,
    [167] = 42,
    [168] = 69,
    [169] = 88,
    [170] = 42,
    [171] = 69,
    [172] = 70,
    [173] = 99,
    [174] = 42,
    [175] = 99,
    [176] = 42,
    [177] = 41,
    [178] = 79,
    [179] = 79,
    [180] = 41,
    [181] = 85,
    [182] = 71,
    [183] = 91,
    [184] = 41,
    [185] = 42,
    [186] = 69,
    [187] = 59,
    [188] = 59,
    [189] = 42,
    [190] = 41,
    [191] = 42,
    [192] = 42,
    [193] = 100,
    [194] = 100,
    [195] = 41,
    [196] = 42,
    [197] = 70,
    [198] = 93,
    [199] = 57,
    [200] = 70,
    [201] = 69,
    [202] = 80,
    [203] = 70,
    [204] = 99,
    [205] = 42,
    [206] = 61,
    [207] = 44,
    [208] = 101,
    [209] = 101,
    [210] = 79,
    [211] = 86,
    [212] = 58,
    [213] = 41,
    [214] = 41,
    [215] = 102,
    [216] = 101,
    [217] = 101,
    [218] = 102,
    [219] = 102,
    [220] = 41,
    [221] = 101,
    [222] = 103,
    [223] = 101,
    [224] = 101,
    [225] = 101,
    [226] = 41,
    [227] = 101,
    [228] = 88,
    [229] = 101,
    [230] = 101,
    [231] = 41,
    [232] = 103,
    [233] = 101,
    [234] = 59,
    [235] = 58,
    [236] = 61,
    [237] = 44,
    [238] = 101,
    [239] = 59,
    [240] = 61,
    [241] = 44,
    [242] = 23,
    [243] = 57,
    [244] = 42,
    [245] = 71,
    [246] = 81,
    [247] = 58,
    [248] = 71,
    [249] = 91,
    [250] = 41,
    [251] = 42,
    [252] = 23,
    [253] = 93,
    [254] = 57,
    [255] = 23,
    [256] = 41,
    [257] = 42,
    [258] = 23,
    [259] = 88,
    [260] = 42,
    [261] = 23,
    [262] = 91,
    [263] = 41,
    [264] = 42,
    [265] = 23,
    [266] = 23,
    [267] = 1,
    [268] = 22,
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
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(268)),
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
        [anon_sym_SEMI] = ACTIONS(SHIFT(267)),
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
        [sym__for_condition] = ACTIONS(SHIFT(244)),
        [sym_variable_declaration] = ACTIONS(SHIFT(31)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(32)),
        [sym__pattern] = ACTIONS(SHIFT(245)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(34)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(34)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(34)),
        [sym_optional_pattern] = ACTIONS(SHIFT(34)),
        [sym_is_pattern] = ACTIONS(SHIFT(34)),
        [sym_as_pattern] = ACTIONS(SHIFT(34)),
        [sym__expression] = ACTIONS(SHIFT(35)),
        [sym__expression_list] = ACTIONS(SHIFT(31)),
        [sym__type_identifier] = ACTIONS(SHIFT(36)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(38)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(246)),
        [anon_sym_case] = ACTIONS(SHIFT(247)),
        [anon_sym_var] = ACTIONS(SHIFT(41)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(34)),
        [anon_sym_let] = ACTIONS(SHIFT(42)),
        [anon_sym_DOT] = ACTIONS(SHIFT(43)),
        [anon_sym_is] = ACTIONS(SHIFT(44)),
        [sym_identifier] = ACTIONS(SHIFT(45)),
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
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(243)),
        [anon_sym_case] = ACTIONS(SHIFT(14)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 1)),
        [anon_sym_default] = ACTIONS(SHIFT(16)),
    },
    [13] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(242)),
    },
    [14] = {
        [sym__pattern] = ACTIONS(SHIFT(208)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(209)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(209)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(209)),
        [sym_optional_pattern] = ACTIONS(SHIFT(209)),
        [sym_is_pattern] = ACTIONS(SHIFT(209)),
        [sym_as_pattern] = ACTIONS(SHIFT(209)),
        [sym__expression] = ACTIONS(SHIFT(209)),
        [sym__type_identifier] = ACTIONS(SHIFT(210)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(211)),
        [anon_sym_var] = ACTIONS(SHIFT(212)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(209)),
        [anon_sym_let] = ACTIONS(SHIFT(212)),
        [anon_sym_DOT] = ACTIONS(SHIFT(213)),
        [anon_sym_is] = ACTIONS(SHIFT(214)),
        [sym_identifier] = ACTIONS(SHIFT(215)),
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
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(207)),
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
        [anon_sym_SEMI] = ACTIONS(SHIFT(206)),
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
        [sym_enum_case_pattern] = ACTIONS(SHIFT(34)),
        [sym_optional_pattern] = ACTIONS(SHIFT(34)),
        [sym_is_pattern] = ACTIONS(SHIFT(34)),
        [sym_as_pattern] = ACTIONS(SHIFT(34)),
        [sym__expression] = ACTIONS(SHIFT(35)),
        [sym__expression_list] = ACTIONS(SHIFT(31)),
        [sym__type_identifier] = ACTIONS(SHIFT(36)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(38)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(39)),
        [anon_sym_case] = ACTIONS(SHIFT(40)),
        [anon_sym_var] = ACTIONS(SHIFT(41)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(34)),
        [anon_sym_let] = ACTIONS(SHIFT(42)),
        [anon_sym_DOT] = ACTIONS(SHIFT(43)),
        [anon_sym_is] = ACTIONS(SHIFT(44)),
        [sym_identifier] = ACTIONS(SHIFT(45)),
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
        [anon_sym_SEMI] = ACTIONS(SHIFT(202)),
    },
    [30] = {
        [sym__code_block] = ACTIONS(SHIFT(201)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(106)),
    },
    [31] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__for_init, 1)),
    },
    [32] = {
        [sym__variable_name] = ACTIONS(SHIFT(187)),
        [sym_identifier] = ACTIONS(SHIFT(188)),
    },
    [33] = {
        [sym__type_annotation] = ACTIONS(SHIFT(183)),
        [anon_sym_in] = ACTIONS(SHIFT(184)),
        [anon_sym_COLON] = ACTIONS(SHIFT(96)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(90)),
        [anon_sym_as] = ACTIONS(SHIFT(91)),
    },
    [34] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [35] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(147)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(148)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [36] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(180)),
    },
    [37] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(177)),
    },
    [38] = {
        [sym__expression] = ACTIONS(SHIFT(172)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(173)),
        [sym_identifier] = ACTIONS(SHIFT(142)),
    },
    [39] = {
        [sym__for_init] = ACTIONS(SHIFT(134)),
        [sym__for_condition] = ACTIONS(SHIFT(169)),
        [sym_variable_declaration] = ACTIONS(SHIFT(31)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(32)),
        [sym__pattern] = ACTIONS(SHIFT(55)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(56)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(56)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(57)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(56)),
        [sym_optional_pattern] = ACTIONS(SHIFT(56)),
        [sym_is_pattern] = ACTIONS(SHIFT(56)),
        [sym_as_pattern] = ACTIONS(SHIFT(56)),
        [sym__expression] = ACTIONS(SHIFT(136)),
        [sym__expression_list] = ACTIONS(SHIFT(31)),
        [sym__type_identifier] = ACTIONS(SHIFT(58)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(137)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(59)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(60)),
        [anon_sym_var] = ACTIONS(SHIFT(138)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(56)),
        [anon_sym_let] = ACTIONS(SHIFT(61)),
        [anon_sym_DOT] = ACTIONS(SHIFT(62)),
        [anon_sym_is] = ACTIONS(SHIFT(63)),
        [sym_identifier] = ACTIONS(SHIFT(139)),
    },
    [40] = {
        [sym__pattern] = ACTIONS(SHIFT(93)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(34)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(34)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(34)),
        [sym_optional_pattern] = ACTIONS(SHIFT(34)),
        [sym_is_pattern] = ACTIONS(SHIFT(34)),
        [sym_as_pattern] = ACTIONS(SHIFT(34)),
        [sym__expression] = ACTIONS(SHIFT(34)),
        [sym__type_identifier] = ACTIONS(SHIFT(36)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(54)),
        [anon_sym_var] = ACTIONS(SHIFT(42)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(34)),
        [anon_sym_let] = ACTIONS(SHIFT(42)),
        [anon_sym_DOT] = ACTIONS(SHIFT(43)),
        [anon_sym_is] = ACTIONS(SHIFT(44)),
        [sym_identifier] = ACTIONS(SHIFT(89)),
    },
    [41] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(88)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(34)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(34)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(34)),
        [sym_optional_pattern] = ACTIONS(SHIFT(34)),
        [sym_is_pattern] = ACTIONS(SHIFT(34)),
        [sym_as_pattern] = ACTIONS(SHIFT(34)),
        [sym__expression] = ACTIONS(SHIFT(34)),
        [sym__type_identifier] = ACTIONS(SHIFT(36)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(54)),
        [anon_sym_var] = ACTIONS(SHIFT(42)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(34)),
        [anon_sym_let] = ACTIONS(SHIFT(42)),
        [anon_sym_DOT] = ACTIONS(SHIFT(43)),
        [anon_sym_is] = ACTIONS(SHIFT(44)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(89)),
    },
    [42] = {
        [sym__pattern] = ACTIONS(SHIFT(88)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(34)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(34)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(34)),
        [sym_optional_pattern] = ACTIONS(SHIFT(34)),
        [sym_is_pattern] = ACTIONS(SHIFT(34)),
        [sym_as_pattern] = ACTIONS(SHIFT(34)),
        [sym__expression] = ACTIONS(SHIFT(34)),
        [sym__type_identifier] = ACTIONS(SHIFT(36)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(54)),
        [anon_sym_var] = ACTIONS(SHIFT(42)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(34)),
        [anon_sym_let] = ACTIONS(SHIFT(42)),
        [anon_sym_DOT] = ACTIONS(SHIFT(43)),
        [anon_sym_is] = ACTIONS(SHIFT(44)),
        [sym_identifier] = ACTIONS(SHIFT(89)),
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
    [46] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [47] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [48] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(50)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [49] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
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
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [52] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(53)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(54)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [53] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [54] = {
        [sym__pattern] = ACTIONS(SHIFT(55)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(56)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(56)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(57)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(56)),
        [sym_optional_pattern] = ACTIONS(SHIFT(56)),
        [sym_is_pattern] = ACTIONS(SHIFT(56)),
        [sym_as_pattern] = ACTIONS(SHIFT(56)),
        [sym__expression] = ACTIONS(SHIFT(56)),
        [sym__type_identifier] = ACTIONS(SHIFT(58)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(59)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(60)),
        [anon_sym_var] = ACTIONS(SHIFT(61)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(56)),
        [anon_sym_let] = ACTIONS(SHIFT(61)),
        [anon_sym_DOT] = ACTIONS(SHIFT(62)),
        [anon_sym_is] = ACTIONS(SHIFT(63)),
        [sym_identifier] = ACTIONS(SHIFT(64)),
    },
    [55] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(84)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(85)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(74)),
        [anon_sym_as] = ACTIONS(SHIFT(75)),
    },
    [56] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [57] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(83)),
    },
    [58] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(80)),
    },
    [59] = {
        [sym__pattern] = ACTIONS(SHIFT(55)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(56)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(56)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(77)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(56)),
        [sym_optional_pattern] = ACTIONS(SHIFT(56)),
        [sym_is_pattern] = ACTIONS(SHIFT(56)),
        [sym_as_pattern] = ACTIONS(SHIFT(56)),
        [sym__expression] = ACTIONS(SHIFT(56)),
        [sym__type_identifier] = ACTIONS(SHIFT(58)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(59)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(78)),
        [anon_sym_var] = ACTIONS(SHIFT(61)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(56)),
        [anon_sym_let] = ACTIONS(SHIFT(61)),
        [anon_sym_DOT] = ACTIONS(SHIFT(62)),
        [anon_sym_is] = ACTIONS(SHIFT(63)),
        [sym_identifier] = ACTIONS(SHIFT(64)),
    },
    [60] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [61] = {
        [sym__pattern] = ACTIONS(SHIFT(73)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(56)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(56)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(56)),
        [sym_optional_pattern] = ACTIONS(SHIFT(56)),
        [sym_is_pattern] = ACTIONS(SHIFT(56)),
        [sym_as_pattern] = ACTIONS(SHIFT(56)),
        [sym__expression] = ACTIONS(SHIFT(56)),
        [sym__type_identifier] = ACTIONS(SHIFT(58)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(59)),
        [anon_sym_var] = ACTIONS(SHIFT(61)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(56)),
        [anon_sym_let] = ACTIONS(SHIFT(61)),
        [anon_sym_DOT] = ACTIONS(SHIFT(62)),
        [anon_sym_is] = ACTIONS(SHIFT(63)),
        [sym_identifier] = ACTIONS(SHIFT(64)),
    },
    [62] = {
        [sym_identifier] = ACTIONS(SHIFT(71)),
    },
    [63] = {
        [sym_type] = ACTIONS(SHIFT(65)),
        [sym__type_identifier] = ACTIONS(SHIFT(66)),
        [sym__type_name] = ACTIONS(SHIFT(67)),
        [sym_identifier] = ACTIONS(SHIFT(68)),
    },
    [64] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [65] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [66] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [67] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(69)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [68] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [69] = {
        [sym__type_identifier] = ACTIONS(SHIFT(70)),
        [sym__type_name] = ACTIONS(SHIFT(67)),
        [sym_identifier] = ACTIONS(SHIFT(68)),
    },
    [70] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [71] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(72)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(59)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [72] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [73] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(74)),
        [anon_sym_as] = ACTIONS(SHIFT(75)),
    },
    [74] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [75] = {
        [sym_type] = ACTIONS(SHIFT(76)),
        [sym__type_identifier] = ACTIONS(SHIFT(66)),
        [sym__type_name] = ACTIONS(SHIFT(67)),
        [sym_identifier] = ACTIONS(SHIFT(68)),
    },
    [76] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [77] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(79)),
    },
    [78] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [79] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [80] = {
        [sym_identifier] = ACTIONS(SHIFT(81)),
    },
    [81] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(82)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(59)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [82] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [83] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [84] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 2)),
    },
    [85] = {
        [sym__pattern] = ACTIONS(SHIFT(86)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(56)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(56)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(56)),
        [sym_optional_pattern] = ACTIONS(SHIFT(56)),
        [sym_is_pattern] = ACTIONS(SHIFT(56)),
        [sym_as_pattern] = ACTIONS(SHIFT(56)),
        [sym__expression] = ACTIONS(SHIFT(56)),
        [sym__type_identifier] = ACTIONS(SHIFT(58)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(59)),
        [anon_sym_var] = ACTIONS(SHIFT(61)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(56)),
        [anon_sym_let] = ACTIONS(SHIFT(61)),
        [anon_sym_DOT] = ACTIONS(SHIFT(62)),
        [anon_sym_is] = ACTIONS(SHIFT(63)),
        [sym_identifier] = ACTIONS(SHIFT(64)),
    },
    [86] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(87)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(85)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(74)),
        [anon_sym_as] = ACTIONS(SHIFT(75)),
    },
    [87] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [88] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(90)),
        [anon_sym_as] = ACTIONS(SHIFT(91)),
    },
    [89] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [90] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [91] = {
        [sym_type] = ACTIONS(SHIFT(92)),
        [sym__type_identifier] = ACTIONS(SHIFT(47)),
        [sym__type_name] = ACTIONS(SHIFT(48)),
        [sym_identifier] = ACTIONS(SHIFT(49)),
    },
    [92] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [93] = {
        [sym__type_annotation] = ACTIONS(SHIFT(94)),
        [anon_sym_in] = ACTIONS(SHIFT(95)),
        [anon_sym_COLON] = ACTIONS(SHIFT(96)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(90)),
        [anon_sym_as] = ACTIONS(SHIFT(91)),
    },
    [94] = {
        [anon_sym_in] = ACTIONS(SHIFT(166)),
    },
    [95] = {
        [sym__expression] = ACTIONS(SHIFT(103)),
        [sym_identifier] = ACTIONS(SHIFT(104)),
    },
    [96] = {
        [sym_type] = ACTIONS(SHIFT(97)),
        [sym__type_identifier] = ACTIONS(SHIFT(98)),
        [sym__type_name] = ACTIONS(SHIFT(99)),
        [sym_identifier] = ACTIONS(SHIFT(100)),
    },
    [97] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [98] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [99] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(101)),
    },
    [100] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [101] = {
        [sym__type_identifier] = ACTIONS(SHIFT(102)),
        [sym__type_name] = ACTIONS(SHIFT(99)),
        [sym_identifier] = ACTIONS(SHIFT(100)),
    },
    [102] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [103] = {
        [sym__code_block] = ACTIONS(SHIFT(105)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(106)),
    },
    [104] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [105] = {
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
    [106] = {
        [sym__statement] = ACTIONS(SHIFT(107)),
        [sym__statements] = ACTIONS(SHIFT(108)),
        [sym_for_statement] = ACTIONS(SHIFT(109)),
        [sym_for_in_statement] = ACTIONS(SHIFT(109)),
        [sym_switch_statement] = ACTIONS(SHIFT(109)),
        [sym__expression] = ACTIONS(SHIFT(109)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(110)),
        [anon_sym_for] = ACTIONS(SHIFT(111)),
        [anon_sym_switch] = ACTIONS(SHIFT(112)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(109)),
        [sym_identifier] = ACTIONS(SHIFT(113)),
    },
    [107] = {
        [sym__statement] = ACTIONS(SHIFT(107)),
        [sym_for_statement] = ACTIONS(SHIFT(109)),
        [sym_for_in_statement] = ACTIONS(SHIFT(109)),
        [sym_switch_statement] = ACTIONS(SHIFT(109)),
        [sym__expression] = ACTIONS(SHIFT(109)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(165)),
        [anon_sym_for] = ACTIONS(SHIFT(111)),
        [anon_sym_switch] = ACTIONS(SHIFT(112)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [sym__declaration] = ACTIONS(SHIFT(109)),
        [sym_identifier] = ACTIONS(SHIFT(113)),
    },
    [108] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(164)),
    },
    [109] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(163)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 1)),
    },
    [110] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 1)),
    },
    [111] = {
        [sym__for_init] = ACTIONS(SHIFT(29)),
        [sym__for_condition] = ACTIONS(SHIFT(119)),
        [sym_variable_declaration] = ACTIONS(SHIFT(31)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(32)),
        [sym__pattern] = ACTIONS(SHIFT(120)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(34)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(34)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(34)),
        [sym_optional_pattern] = ACTIONS(SHIFT(34)),
        [sym_is_pattern] = ACTIONS(SHIFT(34)),
        [sym_as_pattern] = ACTIONS(SHIFT(34)),
        [sym__expression] = ACTIONS(SHIFT(35)),
        [sym__expression_list] = ACTIONS(SHIFT(31)),
        [sym__type_identifier] = ACTIONS(SHIFT(36)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(38)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(121)),
        [anon_sym_case] = ACTIONS(SHIFT(122)),
        [anon_sym_var] = ACTIONS(SHIFT(41)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(34)),
        [anon_sym_let] = ACTIONS(SHIFT(42)),
        [anon_sym_DOT] = ACTIONS(SHIFT(43)),
        [anon_sym_is] = ACTIONS(SHIFT(44)),
        [sym_identifier] = ACTIONS(SHIFT(45)),
    },
    [112] = {
        [sym__expression] = ACTIONS(SHIFT(114)),
        [sym_identifier] = ACTIONS(SHIFT(10)),
    },
    [113] = {
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
    [114] = {
        [anon_sym_LBRACE] = ACTIONS(SHIFT(115)),
    },
    [115] = {
        [sym_case_statement] = ACTIONS(SHIFT(12)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(116)),
        [anon_sym_case] = ACTIONS(SHIFT(14)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(117)),
        [anon_sym_default] = ACTIONS(SHIFT(16)),
    },
    [116] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(118)),
    },
    [117] = {
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
    [118] = {
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
    [119] = {
        [sym__code_block] = ACTIONS(SHIFT(162)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(128)),
    },
    [120] = {
        [sym__type_annotation] = ACTIONS(SHIFT(158)),
        [anon_sym_in] = ACTIONS(SHIFT(159)),
        [anon_sym_COLON] = ACTIONS(SHIFT(96)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(90)),
        [anon_sym_as] = ACTIONS(SHIFT(91)),
    },
    [121] = {
        [sym__for_init] = ACTIONS(SHIFT(134)),
        [sym__for_condition] = ACTIONS(SHIFT(135)),
        [sym_variable_declaration] = ACTIONS(SHIFT(31)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(32)),
        [sym__pattern] = ACTIONS(SHIFT(55)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(56)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(56)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(57)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(56)),
        [sym_optional_pattern] = ACTIONS(SHIFT(56)),
        [sym_is_pattern] = ACTIONS(SHIFT(56)),
        [sym_as_pattern] = ACTIONS(SHIFT(56)),
        [sym__expression] = ACTIONS(SHIFT(136)),
        [sym__expression_list] = ACTIONS(SHIFT(31)),
        [sym__type_identifier] = ACTIONS(SHIFT(58)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(137)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(59)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(60)),
        [anon_sym_var] = ACTIONS(SHIFT(138)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(56)),
        [anon_sym_let] = ACTIONS(SHIFT(61)),
        [anon_sym_DOT] = ACTIONS(SHIFT(62)),
        [anon_sym_is] = ACTIONS(SHIFT(63)),
        [sym_identifier] = ACTIONS(SHIFT(139)),
    },
    [122] = {
        [sym__pattern] = ACTIONS(SHIFT(123)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(34)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(34)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(34)),
        [sym_optional_pattern] = ACTIONS(SHIFT(34)),
        [sym_is_pattern] = ACTIONS(SHIFT(34)),
        [sym_as_pattern] = ACTIONS(SHIFT(34)),
        [sym__expression] = ACTIONS(SHIFT(34)),
        [sym__type_identifier] = ACTIONS(SHIFT(36)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(54)),
        [anon_sym_var] = ACTIONS(SHIFT(42)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(34)),
        [anon_sym_let] = ACTIONS(SHIFT(42)),
        [anon_sym_DOT] = ACTIONS(SHIFT(43)),
        [anon_sym_is] = ACTIONS(SHIFT(44)),
        [sym_identifier] = ACTIONS(SHIFT(89)),
    },
    [123] = {
        [sym__type_annotation] = ACTIONS(SHIFT(124)),
        [anon_sym_in] = ACTIONS(SHIFT(125)),
        [anon_sym_COLON] = ACTIONS(SHIFT(96)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(90)),
        [anon_sym_as] = ACTIONS(SHIFT(91)),
    },
    [124] = {
        [anon_sym_in] = ACTIONS(SHIFT(131)),
    },
    [125] = {
        [sym__expression] = ACTIONS(SHIFT(126)),
        [sym_identifier] = ACTIONS(SHIFT(104)),
    },
    [126] = {
        [sym__code_block] = ACTIONS(SHIFT(127)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(128)),
    },
    [127] = {
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
    [128] = {
        [sym__statement] = ACTIONS(SHIFT(107)),
        [sym__statements] = ACTIONS(SHIFT(129)),
        [sym_for_statement] = ACTIONS(SHIFT(109)),
        [sym_for_in_statement] = ACTIONS(SHIFT(109)),
        [sym_switch_statement] = ACTIONS(SHIFT(109)),
        [sym__expression] = ACTIONS(SHIFT(109)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(110)),
        [anon_sym_for] = ACTIONS(SHIFT(111)),
        [anon_sym_switch] = ACTIONS(SHIFT(112)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(109)),
        [sym_identifier] = ACTIONS(SHIFT(113)),
    },
    [129] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(130)),
    },
    [130] = {
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
    [131] = {
        [sym__expression] = ACTIONS(SHIFT(132)),
        [sym_identifier] = ACTIONS(SHIFT(104)),
    },
    [132] = {
        [sym__code_block] = ACTIONS(SHIFT(133)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(128)),
    },
    [133] = {
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
    [134] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(154)),
    },
    [135] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(152)),
    },
    [136] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(147)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1), SHIFT(148)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [137] = {
        [sym__expression] = ACTIONS(SHIFT(140)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(141)),
        [sym_identifier] = ACTIONS(SHIFT(142)),
    },
    [138] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(73)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(56)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(56)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(56)),
        [sym_optional_pattern] = ACTIONS(SHIFT(56)),
        [sym_is_pattern] = ACTIONS(SHIFT(56)),
        [sym_as_pattern] = ACTIONS(SHIFT(56)),
        [sym__expression] = ACTIONS(SHIFT(56)),
        [sym__type_identifier] = ACTIONS(SHIFT(58)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(59)),
        [anon_sym_var] = ACTIONS(SHIFT(61)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(56)),
        [anon_sym_let] = ACTIONS(SHIFT(61)),
        [anon_sym_DOT] = ACTIONS(SHIFT(62)),
        [anon_sym_is] = ACTIONS(SHIFT(63)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(64)),
    },
    [139] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [140] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(145)),
    },
    [141] = {
        [sym__expression] = ACTIONS(SHIFT(143)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(144)),
    },
    [142] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [143] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [144] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [145] = {
        [sym__expression] = ACTIONS(SHIFT(146)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(144)),
    },
    [146] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [147] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 2)),
    },
    [148] = {
        [sym__expression] = ACTIONS(SHIFT(149)),
        [sym_identifier] = ACTIONS(SHIFT(150)),
    },
    [149] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(151)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(148)),
    },
    [150] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [151] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 3)),
    },
    [152] = {
        [sym__code_block] = ACTIONS(SHIFT(153)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(128)),
    },
    [153] = {
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
    [154] = {
        [sym__expression] = ACTIONS(SHIFT(155)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(145)),
        [sym_identifier] = ACTIONS(SHIFT(142)),
    },
    [155] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(156)),
    },
    [156] = {
        [sym__expression] = ACTIONS(SHIFT(157)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(144)),
    },
    [157] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [158] = {
        [anon_sym_in] = ACTIONS(SHIFT(125)),
    },
    [159] = {
        [sym__expression] = ACTIONS(SHIFT(160)),
        [sym_identifier] = ACTIONS(SHIFT(104)),
    },
    [160] = {
        [sym__code_block] = ACTIONS(SHIFT(161)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(128)),
    },
    [161] = {
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
    [162] = {
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
    [163] = {
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
    [164] = {
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
    [165] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
    },
    [166] = {
        [sym__expression] = ACTIONS(SHIFT(167)),
        [sym_identifier] = ACTIONS(SHIFT(104)),
    },
    [167] = {
        [sym__code_block] = ACTIONS(SHIFT(168)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(106)),
    },
    [168] = {
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
    [169] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(170)),
    },
    [170] = {
        [sym__code_block] = ACTIONS(SHIFT(171)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(106)),
    },
    [171] = {
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
    [172] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(175)),
    },
    [173] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym__expression] = ACTIONS(SHIFT(174)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(104)),
    },
    [174] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [175] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym__expression] = ACTIONS(SHIFT(176)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(104)),
    },
    [176] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [177] = {
        [sym__type_identifier] = ACTIONS(SHIFT(178)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [sym_identifier] = ACTIONS(SHIFT(179)),
    },
    [178] = {
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [179] = {
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [180] = {
        [sym_identifier] = ACTIONS(SHIFT(181)),
    },
    [181] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(182)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(54)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [182] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [183] = {
        [anon_sym_in] = ACTIONS(SHIFT(95)),
    },
    [184] = {
        [sym__expression] = ACTIONS(SHIFT(185)),
        [sym_identifier] = ACTIONS(SHIFT(104)),
    },
    [185] = {
        [sym__code_block] = ACTIONS(SHIFT(186)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(106)),
    },
    [186] = {
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
    [187] = {
        [sym__type_annotation] = ACTIONS(SHIFT(189)),
        [anon_sym_COLON] = ACTIONS(SHIFT(190)),
    },
    [188] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__variable_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__variable_name, 1)),
    },
    [189] = {
        [sym__code_block] = ACTIONS(SHIFT(197)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(198)),
    },
    [190] = {
        [sym_type] = ACTIONS(SHIFT(191)),
        [sym__type_identifier] = ACTIONS(SHIFT(192)),
        [sym__type_name] = ACTIONS(SHIFT(193)),
        [sym_identifier] = ACTIONS(SHIFT(194)),
    },
    [191] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [192] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [193] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(195)),
    },
    [194] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [195] = {
        [sym__type_identifier] = ACTIONS(SHIFT(196)),
        [sym__type_name] = ACTIONS(SHIFT(193)),
        [sym_identifier] = ACTIONS(SHIFT(194)),
    },
    [196] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [197] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_variable_declaration, 4)),
    },
    [198] = {
        [sym__statement] = ACTIONS(SHIFT(107)),
        [sym__statements] = ACTIONS(SHIFT(199)),
        [sym_for_statement] = ACTIONS(SHIFT(109)),
        [sym_for_in_statement] = ACTIONS(SHIFT(109)),
        [sym_switch_statement] = ACTIONS(SHIFT(109)),
        [sym__expression] = ACTIONS(SHIFT(109)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(110)),
        [anon_sym_for] = ACTIONS(SHIFT(111)),
        [anon_sym_switch] = ACTIONS(SHIFT(112)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(109)),
        [sym_identifier] = ACTIONS(SHIFT(113)),
    },
    [199] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(200)),
    },
    [200] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [201] = {
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
    [202] = {
        [sym__expression] = ACTIONS(SHIFT(203)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(175)),
        [sym_identifier] = ACTIONS(SHIFT(142)),
    },
    [203] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(204)),
    },
    [204] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym__expression] = ACTIONS(SHIFT(205)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(104)),
    },
    [205] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [206] = {
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
    [207] = {
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
        [anon_sym_case] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
    },
    [208] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(234)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(235)),
        [anon_sym_COLON] = ACTIONS(SHIFT(236)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(225)),
        [anon_sym_as] = ACTIONS(SHIFT(226)),
    },
    [209] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [210] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(231)),
    },
    [211] = {
        [sym__pattern] = ACTIONS(SHIFT(55)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(56)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(56)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(228)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(56)),
        [sym_optional_pattern] = ACTIONS(SHIFT(56)),
        [sym_is_pattern] = ACTIONS(SHIFT(56)),
        [sym_as_pattern] = ACTIONS(SHIFT(56)),
        [sym__expression] = ACTIONS(SHIFT(56)),
        [sym__type_identifier] = ACTIONS(SHIFT(58)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(59)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(229)),
        [anon_sym_var] = ACTIONS(SHIFT(61)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(56)),
        [anon_sym_let] = ACTIONS(SHIFT(61)),
        [anon_sym_DOT] = ACTIONS(SHIFT(62)),
        [anon_sym_is] = ACTIONS(SHIFT(63)),
        [sym_identifier] = ACTIONS(SHIFT(64)),
    },
    [212] = {
        [sym__pattern] = ACTIONS(SHIFT(224)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(209)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(209)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(209)),
        [sym_optional_pattern] = ACTIONS(SHIFT(209)),
        [sym_is_pattern] = ACTIONS(SHIFT(209)),
        [sym_as_pattern] = ACTIONS(SHIFT(209)),
        [sym__expression] = ACTIONS(SHIFT(209)),
        [sym__type_identifier] = ACTIONS(SHIFT(210)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(211)),
        [anon_sym_var] = ACTIONS(SHIFT(212)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(209)),
        [anon_sym_let] = ACTIONS(SHIFT(212)),
        [anon_sym_DOT] = ACTIONS(SHIFT(213)),
        [anon_sym_is] = ACTIONS(SHIFT(214)),
        [sym_identifier] = ACTIONS(SHIFT(215)),
    },
    [213] = {
        [sym_identifier] = ACTIONS(SHIFT(222)),
    },
    [214] = {
        [sym_type] = ACTIONS(SHIFT(216)),
        [sym__type_identifier] = ACTIONS(SHIFT(217)),
        [sym__type_name] = ACTIONS(SHIFT(218)),
        [sym_identifier] = ACTIONS(SHIFT(219)),
    },
    [215] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [216] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [217] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [218] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(220)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [219] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [220] = {
        [sym__type_identifier] = ACTIONS(SHIFT(221)),
        [sym__type_name] = ACTIONS(SHIFT(218)),
        [sym_identifier] = ACTIONS(SHIFT(219)),
    },
    [221] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [222] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(223)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(211)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [223] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [224] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(225)),
        [anon_sym_as] = ACTIONS(SHIFT(226)),
    },
    [225] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [226] = {
        [sym_type] = ACTIONS(SHIFT(227)),
        [sym__type_identifier] = ACTIONS(SHIFT(217)),
        [sym__type_name] = ACTIONS(SHIFT(218)),
        [sym_identifier] = ACTIONS(SHIFT(219)),
    },
    [227] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [228] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(230)),
    },
    [229] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [230] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [231] = {
        [sym_identifier] = ACTIONS(SHIFT(232)),
    },
    [232] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(233)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(211)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [233] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [234] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(240)),
    },
    [235] = {
        [sym__pattern] = ACTIONS(SHIFT(238)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(209)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(209)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(209)),
        [sym_optional_pattern] = ACTIONS(SHIFT(209)),
        [sym_is_pattern] = ACTIONS(SHIFT(209)),
        [sym_as_pattern] = ACTIONS(SHIFT(209)),
        [sym__expression] = ACTIONS(SHIFT(209)),
        [sym__type_identifier] = ACTIONS(SHIFT(210)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(211)),
        [anon_sym_var] = ACTIONS(SHIFT(212)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(209)),
        [anon_sym_let] = ACTIONS(SHIFT(212)),
        [anon_sym_DOT] = ACTIONS(SHIFT(213)),
        [anon_sym_is] = ACTIONS(SHIFT(214)),
        [sym_identifier] = ACTIONS(SHIFT(215)),
    },
    [236] = {
        [sym__statement] = ACTIONS(SHIFT(18)),
        [sym_for_statement] = ACTIONS(SHIFT(19)),
        [sym_for_in_statement] = ACTIONS(SHIFT(19)),
        [sym_switch_statement] = ACTIONS(SHIFT(19)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [sym__expression] = ACTIONS(SHIFT(19)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(237)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_for] = ACTIONS(SHIFT(21)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_switch] = ACTIONS(SHIFT(22)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [sym__declaration] = ACTIONS(SHIFT(19)),
        [sym_identifier] = ACTIONS(SHIFT(23)),
    },
    [237] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 4)),
    },
    [238] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(239)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(235)),
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(225)),
        [anon_sym_as] = ACTIONS(SHIFT(226)),
    },
    [239] = {
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [240] = {
        [sym__statement] = ACTIONS(SHIFT(18)),
        [sym_for_statement] = ACTIONS(SHIFT(19)),
        [sym_for_in_statement] = ACTIONS(SHIFT(19)),
        [sym_switch_statement] = ACTIONS(SHIFT(19)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [sym__expression] = ACTIONS(SHIFT(19)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(241)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_for] = ACTIONS(SHIFT(21)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_switch] = ACTIONS(SHIFT(22)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [sym__declaration] = ACTIONS(SHIFT(19)),
        [sym_identifier] = ACTIONS(SHIFT(23)),
    },
    [241] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 5)),
    },
    [242] = {
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
    [243] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 2)),
    },
    [244] = {
        [sym__code_block] = ACTIONS(SHIFT(266)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(253)),
    },
    [245] = {
        [sym__type_annotation] = ACTIONS(SHIFT(262)),
        [anon_sym_in] = ACTIONS(SHIFT(263)),
        [anon_sym_COLON] = ACTIONS(SHIFT(96)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(90)),
        [anon_sym_as] = ACTIONS(SHIFT(91)),
    },
    [246] = {
        [sym__for_init] = ACTIONS(SHIFT(134)),
        [sym__for_condition] = ACTIONS(SHIFT(259)),
        [sym_variable_declaration] = ACTIONS(SHIFT(31)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(32)),
        [sym__pattern] = ACTIONS(SHIFT(55)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(56)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(56)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(57)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(56)),
        [sym_optional_pattern] = ACTIONS(SHIFT(56)),
        [sym_is_pattern] = ACTIONS(SHIFT(56)),
        [sym_as_pattern] = ACTIONS(SHIFT(56)),
        [sym__expression] = ACTIONS(SHIFT(136)),
        [sym__expression_list] = ACTIONS(SHIFT(31)),
        [sym__type_identifier] = ACTIONS(SHIFT(58)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(137)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(59)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(60)),
        [anon_sym_var] = ACTIONS(SHIFT(138)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(56)),
        [anon_sym_let] = ACTIONS(SHIFT(61)),
        [anon_sym_DOT] = ACTIONS(SHIFT(62)),
        [anon_sym_is] = ACTIONS(SHIFT(63)),
        [sym_identifier] = ACTIONS(SHIFT(139)),
    },
    [247] = {
        [sym__pattern] = ACTIONS(SHIFT(248)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(34)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(34)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(34)),
        [sym_optional_pattern] = ACTIONS(SHIFT(34)),
        [sym_is_pattern] = ACTIONS(SHIFT(34)),
        [sym_as_pattern] = ACTIONS(SHIFT(34)),
        [sym__expression] = ACTIONS(SHIFT(34)),
        [sym__type_identifier] = ACTIONS(SHIFT(36)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(54)),
        [anon_sym_var] = ACTIONS(SHIFT(42)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(34)),
        [anon_sym_let] = ACTIONS(SHIFT(42)),
        [anon_sym_DOT] = ACTIONS(SHIFT(43)),
        [anon_sym_is] = ACTIONS(SHIFT(44)),
        [sym_identifier] = ACTIONS(SHIFT(89)),
    },
    [248] = {
        [sym__type_annotation] = ACTIONS(SHIFT(249)),
        [anon_sym_in] = ACTIONS(SHIFT(250)),
        [anon_sym_COLON] = ACTIONS(SHIFT(96)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(90)),
        [anon_sym_as] = ACTIONS(SHIFT(91)),
    },
    [249] = {
        [anon_sym_in] = ACTIONS(SHIFT(256)),
    },
    [250] = {
        [sym__expression] = ACTIONS(SHIFT(251)),
        [sym_identifier] = ACTIONS(SHIFT(104)),
    },
    [251] = {
        [sym__code_block] = ACTIONS(SHIFT(252)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(253)),
    },
    [252] = {
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
    [253] = {
        [sym__statement] = ACTIONS(SHIFT(107)),
        [sym__statements] = ACTIONS(SHIFT(254)),
        [sym_for_statement] = ACTIONS(SHIFT(109)),
        [sym_for_in_statement] = ACTIONS(SHIFT(109)),
        [sym_switch_statement] = ACTIONS(SHIFT(109)),
        [sym__expression] = ACTIONS(SHIFT(109)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(110)),
        [anon_sym_for] = ACTIONS(SHIFT(111)),
        [anon_sym_switch] = ACTIONS(SHIFT(112)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(109)),
        [sym_identifier] = ACTIONS(SHIFT(113)),
    },
    [254] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(255)),
    },
    [255] = {
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
    [256] = {
        [sym__expression] = ACTIONS(SHIFT(257)),
        [sym_identifier] = ACTIONS(SHIFT(104)),
    },
    [257] = {
        [sym__code_block] = ACTIONS(SHIFT(258)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(253)),
    },
    [258] = {
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
    [259] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(260)),
    },
    [260] = {
        [sym__code_block] = ACTIONS(SHIFT(261)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(253)),
    },
    [261] = {
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
    [262] = {
        [anon_sym_in] = ACTIONS(SHIFT(250)),
    },
    [263] = {
        [sym__expression] = ACTIONS(SHIFT(264)),
        [sym_identifier] = ACTIONS(SHIFT(104)),
    },
    [264] = {
        [sym__code_block] = ACTIONS(SHIFT(265)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(253)),
    },
    [265] = {
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
    [266] = {
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
    [267] = {
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
    [268] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
    },
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_swift);
