#include "tree_sitter/parser.h"

#define STATE_COUNT 158
#define SYMBOL_COUNT 50

enum {
    sym_program = ts_builtin_sym_start,
    sym__statement,
    sym__statements,
    sym__loop_statement,
    sym_for_statement,
    sym__for_init,
    sym__for_condition,
    sym_for_in_statement,
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
    aux_sym__tuple_pattern_element_list_repeat1,
    aux_sym__expression_list_repeat1,
    anon_sym_SEMI,
    anon_sym_for,
    anon_sym_LPAREN,
    anon_sym_RPAREN,
    anon_sym_case,
    anon_sym_in,
    anon_sym_LBRACE,
    anon_sym_RBRACE,
    sym__declaration,
    anon_sym_var,
    sym_wildcard_pattern,
    anon_sym_let,
    anon_sym_COMMA,
    anon_sym_QMARK,
    anon_sym_is,
    anon_sym_as,
    sym_identifier,
    anon_sym_COLON,
    anon_sym_DOT,
};

static const char *ts_symbol_names[] = {
    [sym_program] = "program",
    [sym__statement] = "_statement",
    [sym__statements] = "_statements",
    [sym__loop_statement] = "_loop_statement",
    [sym_for_statement] = "for_statement",
    [sym__for_init] = "_for_init",
    [sym__for_condition] = "_for_condition",
    [sym_for_in_statement] = "for_in_statement",
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
    [aux_sym__tuple_pattern_element_list_repeat1] = "_tuple_pattern_element_list_repeat1",
    [aux_sym__expression_list_repeat1] = "_expression_list_repeat1",
    [ts_builtin_sym_error] = "ERROR",
    [ts_builtin_sym_end] = "END",
    [anon_sym_SEMI] = ";",
    [anon_sym_for] = "for",
    [anon_sym_LPAREN] = "(",
    [anon_sym_RPAREN] = ")",
    [anon_sym_case] = "case",
    [anon_sym_in] = "in",
    [anon_sym_LBRACE] = "{",
    [anon_sym_RBRACE] = "}",
    [sym__declaration] = "_declaration",
    [anon_sym_var] = "var",
    [sym_wildcard_pattern] = "wildcard_pattern",
    [anon_sym_let] = "let",
    [anon_sym_COMMA] = ",",
    [anon_sym_QMARK] = "?",
    [anon_sym_is] = "is",
    [anon_sym_as] = "as",
    [sym_identifier] = "identifier",
    [anon_sym_COLON] = ":",
    [anon_sym_DOT] = ".",
};

static const TSNodeType ts_node_types[SYMBOL_COUNT] = {
    [sym_program] = TSNodeTypeNamed,
    [sym__statement] = TSNodeTypeHidden,
    [sym__statements] = TSNodeTypeHidden,
    [sym__loop_statement] = TSNodeTypeHidden,
    [sym_for_statement] = TSNodeTypeNamed,
    [sym__for_init] = TSNodeTypeHidden,
    [sym__for_condition] = TSNodeTypeHidden,
    [sym_for_in_statement] = TSNodeTypeNamed,
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
    [aux_sym__tuple_pattern_element_list_repeat1] = TSNodeTypeHidden,
    [aux_sym__expression_list_repeat1] = TSNodeTypeHidden,
    [ts_builtin_sym_error] = TSNodeTypeNamed,
    [ts_builtin_sym_end] = TSNodeTypeHidden,
    [anon_sym_SEMI] = TSNodeTypeAnonymous,
    [anon_sym_for] = TSNodeTypeAnonymous,
    [anon_sym_LPAREN] = TSNodeTypeAnonymous,
    [anon_sym_RPAREN] = TSNodeTypeAnonymous,
    [anon_sym_case] = TSNodeTypeAnonymous,
    [anon_sym_in] = TSNodeTypeAnonymous,
    [anon_sym_LBRACE] = TSNodeTypeAnonymous,
    [anon_sym_RBRACE] = TSNodeTypeAnonymous,
    [sym__declaration] = TSNodeTypeHidden,
    [anon_sym_var] = TSNodeTypeAnonymous,
    [sym_wildcard_pattern] = TSNodeTypeNamed,
    [anon_sym_let] = TSNodeTypeAnonymous,
    [anon_sym_COMMA] = TSNodeTypeAnonymous,
    [anon_sym_QMARK] = TSNodeTypeAnonymous,
    [anon_sym_is] = TSNodeTypeAnonymous,
    [anon_sym_as] = TSNodeTypeAnonymous,
    [sym_identifier] = TSNodeTypeNamed,
    [anon_sym_COLON] = TSNodeTypeAnonymous,
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
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(10);
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
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(16);
            LEX_ERROR();
        case 17:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(17);
            if (lookahead == ';')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(10);
            LEX_ERROR();
        case 18:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 19:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(19);
            if (lookahead == '(')
                ADVANCE(20);
            if (lookahead == ';')
                ADVANCE(18);
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
                ADVANCE(21);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'c')
                ADVANCE(22);
            if (lookahead == 'i')
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(28);
            if (lookahead == 'v')
                ADVANCE(31);
            LEX_ERROR();
        case 20:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 21:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(sym_wildcard_pattern);
        case 22:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(23);
            ACCEPT_TOKEN(sym_identifier);
        case 23:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_case);
        case 26:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(27);
            ACCEPT_TOKEN(sym_identifier);
        case 27:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_is);
        case 28:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(29);
            ACCEPT_TOKEN(sym_identifier);
        case 29:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(30);
            ACCEPT_TOKEN(sym_identifier);
        case 30:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_let);
        case 31:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(32);
            ACCEPT_TOKEN(sym_identifier);
        case 32:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'r')
                ADVANCE(33);
            ACCEPT_TOKEN(sym_identifier);
        case 33:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_var);
        case 34:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(34);
            if (lookahead == ';')
                ADVANCE(18);
            LEX_ERROR();
        case 35:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(35);
            if (lookahead == '{')
                ADVANCE(36);
            LEX_ERROR();
        case 36:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 37:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 38:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(38);
            if (lookahead == '?')
                ADVANCE(39);
            if (lookahead == 'a')
                ADVANCE(40);
            if (lookahead == 'i')
                ADVANCE(42);
            LEX_ERROR();
        case 39:
            ACCEPT_TOKEN(anon_sym_QMARK);
        case 40:
            if (lookahead == 's')
                ADVANCE(41);
            LEX_ERROR();
        case 41:
            ACCEPT_TOKEN(anon_sym_as);
        case 42:
            if (lookahead == 'n')
                ADVANCE(43);
            LEX_ERROR();
        case 43:
            ACCEPT_TOKEN(anon_sym_in);
        case 44:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(44);
            if (lookahead == ':')
                ADVANCE(45);
            if (lookahead == '?')
                ADVANCE(39);
            if (lookahead == 'a')
                ADVANCE(40);
            if (lookahead == 'i')
                ADVANCE(42);
            LEX_ERROR();
        case 45:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 46:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(46);
            if (lookahead == ',')
                ADVANCE(47);
            if (lookahead == ':')
                ADVANCE(45);
            if (lookahead == ';')
                ADVANCE(18);
            if (lookahead == '?')
                ADVANCE(39);
            if (lookahead == 'a')
                ADVANCE(40);
            if (lookahead == 'i')
                ADVANCE(42);
            LEX_ERROR();
        case 47:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 48:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(48);
            if (lookahead == ';')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 49:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(49);
            if (lookahead == '(')
                ADVANCE(20);
            if (lookahead == ')')
                ADVANCE(50);
            if (lookahead == ';')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(28);
            if (lookahead == 'v')
                ADVANCE(31);
            LEX_ERROR();
        case 50:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 51:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(51);
            if (lookahead == '(')
                ADVANCE(20);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(28);
            if (lookahead == 'v')
                ADVANCE(31);
            LEX_ERROR();
        case 52:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(52);
            if (lookahead == '.')
                ADVANCE(53);
            if (lookahead == '?')
                ADVANCE(39);
            if (lookahead == 'a')
                ADVANCE(40);
            if (lookahead == 'i')
                ADVANCE(42);
            LEX_ERROR();
        case 53:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 54:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(54);
            if (lookahead == '(')
                ADVANCE(20);
            if (lookahead == ')')
                ADVANCE(50);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(28);
            if (lookahead == 'v')
                ADVANCE(31);
            LEX_ERROR();
        case 55:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(55);
            if (lookahead == ')')
                ADVANCE(50);
            if (lookahead == ',')
                ADVANCE(47);
            if (lookahead == '?')
                ADVANCE(39);
            if (lookahead == 'a')
                ADVANCE(40);
            LEX_ERROR();
        case 56:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(56);
            if (lookahead == ')')
                ADVANCE(50);
            if (lookahead == ',')
                ADVANCE(47);
            if (lookahead == ':')
                ADVANCE(45);
            if (lookahead == '?')
                ADVANCE(39);
            if (lookahead == 'a')
                ADVANCE(40);
            LEX_ERROR();
        case 57:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(57);
            if (lookahead == ')')
                ADVANCE(50);
            LEX_ERROR();
        case 58:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(58);
            if (lookahead == ')')
                ADVANCE(50);
            if (lookahead == ',')
                ADVANCE(47);
            if (lookahead == '.')
                ADVANCE(53);
            if (lookahead == '?')
                ADVANCE(39);
            if (lookahead == 'a')
                ADVANCE(40);
            LEX_ERROR();
        case 59:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(59);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(10);
            if (lookahead == '}')
                ADVANCE(60);
            LEX_ERROR();
        case 60:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 61:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(61);
            if (lookahead == '}')
                ADVANCE(60);
            LEX_ERROR();
        case 62:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(62);
            if (lookahead == ';')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(10);
            if (lookahead == '}')
                ADVANCE(60);
            LEX_ERROR();
        case 63:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(63);
            if (lookahead == ')')
                ADVANCE(50);
            if (lookahead == ',')
                ADVANCE(47);
            if (lookahead == ':')
                ADVANCE(45);
            if (lookahead == ';')
                ADVANCE(18);
            if (lookahead == '?')
                ADVANCE(39);
            if (lookahead == 'a')
                ADVANCE(40);
            LEX_ERROR();
        case 64:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(64);
            if (lookahead == ')')
                ADVANCE(50);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 65:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(65);
            if (lookahead == ',')
                ADVANCE(47);
            if (lookahead == ';')
                ADVANCE(18);
            LEX_ERROR();
        case 66:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(66);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == '{')
                ADVANCE(36);
            LEX_ERROR();
        case 67:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(67);
            if (lookahead == ':')
                ADVANCE(45);
            LEX_ERROR();
        case 68:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(68);
            if (lookahead == '.')
                ADVANCE(53);
            if (lookahead == '{')
                ADVANCE(36);
            LEX_ERROR();
        case 69:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(69);
            if (lookahead == '(')
                ADVANCE(20);
            if (lookahead == ')')
                ADVANCE(50);
            if (lookahead == ',')
                ADVANCE(47);
            if (lookahead == '.')
                ADVANCE(53);
            if (lookahead == ':')
                ADVANCE(45);
            if (lookahead == ';')
                ADVANCE(18);
            if (lookahead == '?')
                ADVANCE(39);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(70);
            if (lookahead == 'c')
                ADVANCE(22);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'l')
                ADVANCE(28);
            if (lookahead == 'v')
                ADVANCE(31);
            if (lookahead == '{')
                ADVANCE(36);
            if (lookahead == '}')
                ADVANCE(60);
            LEX_ERROR();
        case 70:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(71);
            ACCEPT_TOKEN(sym_identifier);
        case 71:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_as);
        case 72:
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
                ADVANCE(73);
            if (lookahead == 's')
                ADVANCE(27);
            ACCEPT_TOKEN(sym_identifier);
        case 73:
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
                ADVANCE(69);
            if (lookahead == '(')
                ADVANCE(20);
            if (lookahead == ')')
                ADVANCE(50);
            if (lookahead == ',')
                ADVANCE(47);
            if (lookahead == '.')
                ADVANCE(53);
            if (lookahead == ':')
                ADVANCE(45);
            if (lookahead == ';')
                ADVANCE(18);
            if (lookahead == '?')
                ADVANCE(39);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(70);
            if (lookahead == 'c')
                ADVANCE(22);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'l')
                ADVANCE(28);
            if (lookahead == 'v')
                ADVANCE(31);
            if (lookahead == '{')
                ADVANCE(36);
            if (lookahead == '}')
                ADVANCE(60);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 1,
    [1] = 16,
    [2] = 1,
    [3] = 16,
    [4] = 17,
    [5] = 17,
    [6] = 16,
    [7] = 19,
    [8] = 17,
    [9] = 34,
    [10] = 35,
    [11] = 34,
    [12] = 37,
    [13] = 38,
    [14] = 38,
    [15] = 44,
    [16] = 38,
    [17] = 46,
    [18] = 48,
    [19] = 49,
    [20] = 51,
    [21] = 51,
    [22] = 51,
    [23] = 37,
    [24] = 46,
    [25] = 38,
    [26] = 38,
    [27] = 52,
    [28] = 52,
    [29] = 37,
    [30] = 38,
    [31] = 38,
    [32] = 54,
    [33] = 44,
    [34] = 55,
    [35] = 55,
    [36] = 56,
    [37] = 57,
    [38] = 55,
    [39] = 54,
    [40] = 44,
    [41] = 51,
    [42] = 37,
    [43] = 56,
    [44] = 55,
    [45] = 55,
    [46] = 58,
    [47] = 58,
    [48] = 37,
    [49] = 55,
    [50] = 55,
    [51] = 55,
    [52] = 37,
    [53] = 55,
    [54] = 57,
    [55] = 56,
    [56] = 56,
    [57] = 44,
    [58] = 55,
    [59] = 37,
    [60] = 55,
    [61] = 57,
    [62] = 51,
    [63] = 55,
    [64] = 57,
    [65] = 38,
    [66] = 37,
    [67] = 38,
    [68] = 38,
    [69] = 37,
    [70] = 35,
    [71] = 35,
    [72] = 17,
    [73] = 59,
    [74] = 59,
    [75] = 61,
    [76] = 62,
    [77] = 62,
    [78] = 61,
    [79] = 19,
    [80] = 62,
    [81] = 35,
    [82] = 38,
    [83] = 49,
    [84] = 51,
    [85] = 38,
    [86] = 37,
    [87] = 35,
    [88] = 62,
    [89] = 59,
    [90] = 61,
    [91] = 62,
    [92] = 34,
    [93] = 57,
    [94] = 63,
    [95] = 48,
    [96] = 51,
    [97] = 63,
    [98] = 34,
    [99] = 64,
    [100] = 34,
    [101] = 57,
    [102] = 57,
    [103] = 64,
    [104] = 57,
    [105] = 34,
    [106] = 37,
    [107] = 65,
    [108] = 65,
    [109] = 34,
    [110] = 35,
    [111] = 62,
    [112] = 48,
    [113] = 34,
    [114] = 64,
    [115] = 57,
    [116] = 37,
    [117] = 35,
    [118] = 62,
    [119] = 62,
    [120] = 59,
    [121] = 17,
    [122] = 61,
    [123] = 57,
    [124] = 35,
    [125] = 17,
    [126] = 34,
    [127] = 66,
    [128] = 35,
    [129] = 66,
    [130] = 35,
    [131] = 38,
    [132] = 37,
    [133] = 38,
    [134] = 37,
    [135] = 35,
    [136] = 17,
    [137] = 67,
    [138] = 67,
    [139] = 35,
    [140] = 37,
    [141] = 35,
    [142] = 35,
    [143] = 68,
    [144] = 68,
    [145] = 37,
    [146] = 35,
    [147] = 34,
    [148] = 59,
    [149] = 61,
    [150] = 34,
    [151] = 17,
    [152] = 48,
    [153] = 34,
    [154] = 66,
    [155] = 35,
    [156] = 1,
    [157] = 16,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static const TSParseAction *ts_parse_actions[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_program] = ACTIONS(SHIFT(1)),
        [sym__statement] = ACTIONS(SHIFT(2)),
        [sym__statements] = ACTIONS(SHIFT(3)),
        [sym__loop_statement] = ACTIONS(SHIFT(4)),
        [sym_for_statement] = ACTIONS(SHIFT(5)),
        [sym_for_in_statement] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(4)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(6)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statements, 0)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [sym__declaration] = ACTIONS(SHIFT(4)),
        [sym_identifier] = ACTIONS(SHIFT(8)),
    },
    [1] = {
        [ts_builtin_sym_end] = ACTIONS(ACCEPT_INPUT()),
    },
    [2] = {
        [sym__statement] = ACTIONS(SHIFT(2)),
        [sym__loop_statement] = ACTIONS(SHIFT(4)),
        [sym_for_statement] = ACTIONS(SHIFT(5)),
        [sym_for_in_statement] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(4)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(157)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [sym__declaration] = ACTIONS(SHIFT(4)),
        [sym_identifier] = ACTIONS(SHIFT(8)),
    },
    [3] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_program, 1)),
    },
    [4] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(156)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 1)),
    },
    [5] = {
        [sym__statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__loop_statement, 1)),
    },
    [6] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statements, 1)),
    },
    [7] = {
        [sym__for_init] = ACTIONS(SHIFT(9)),
        [sym__for_condition] = ACTIONS(SHIFT(10)),
        [sym_variable_declaration] = ACTIONS(SHIFT(11)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(12)),
        [sym__pattern] = ACTIONS(SHIFT(13)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(14)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(15)),
        [sym_optional_pattern] = ACTIONS(SHIFT(14)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(14)),
        [sym_is_pattern] = ACTIONS(SHIFT(16)),
        [sym_as_pattern] = ACTIONS(SHIFT(16)),
        [sym__expression] = ACTIONS(SHIFT(17)),
        [sym__expression_list] = ACTIONS(SHIFT(11)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(18)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(19)),
        [anon_sym_case] = ACTIONS(SHIFT(20)),
        [anon_sym_var] = ACTIONS(SHIFT(21)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(15)),
        [anon_sym_let] = ACTIONS(SHIFT(22)),
        [anon_sym_is] = ACTIONS(SHIFT(23)),
        [sym_identifier] = ACTIONS(SHIFT(24)),
    },
    [8] = {
        [sym__statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [9] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(152)),
    },
    [10] = {
        [sym__code_block] = ACTIONS(SHIFT(151)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(73)),
    },
    [11] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__for_init, 1)),
    },
    [12] = {
        [sym__variable_name] = ACTIONS(SHIFT(137)),
        [sym_identifier] = ACTIONS(SHIFT(138)),
    },
    [13] = {
        [anon_sym_in] = ACTIONS(SHIFT(134)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(65)),
        [anon_sym_as] = ACTIONS(SHIFT(66)),
    },
    [14] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [15] = {
        [sym__type_annotation] = ACTIONS(SHIFT(131)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(SHIFT(132)),
    },
    [16] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_casting_pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_casting_pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_casting_pattern, 1)),
    },
    [17] = {
        [sym__type_annotation] = ACTIONS(SHIFT(131)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(105)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(106)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(SHIFT(132)),
    },
    [18] = {
        [sym__expression] = ACTIONS(SHIFT(126)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(127)),
        [sym_identifier] = ACTIONS(SHIFT(100)),
    },
    [19] = {
        [sym__for_init] = ACTIONS(SHIFT(92)),
        [sym__for_condition] = ACTIONS(SHIFT(123)),
        [sym_variable_declaration] = ACTIONS(SHIFT(11)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(12)),
        [sym__pattern] = ACTIONS(SHIFT(34)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(35)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(36)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(37)),
        [sym_optional_pattern] = ACTIONS(SHIFT(35)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(35)),
        [sym_is_pattern] = ACTIONS(SHIFT(38)),
        [sym_as_pattern] = ACTIONS(SHIFT(38)),
        [sym__expression] = ACTIONS(SHIFT(94)),
        [sym__expression_list] = ACTIONS(SHIFT(11)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(95)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(39)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(40)),
        [anon_sym_var] = ACTIONS(SHIFT(96)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(36)),
        [anon_sym_let] = ACTIONS(SHIFT(41)),
        [anon_sym_is] = ACTIONS(SHIFT(42)),
        [sym_identifier] = ACTIONS(SHIFT(97)),
    },
    [20] = {
        [sym__pattern] = ACTIONS(SHIFT(68)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(14)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(15)),
        [sym_optional_pattern] = ACTIONS(SHIFT(14)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(14)),
        [sym_is_pattern] = ACTIONS(SHIFT(16)),
        [sym_as_pattern] = ACTIONS(SHIFT(16)),
        [sym__expression] = ACTIONS(SHIFT(15)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(32)),
        [anon_sym_var] = ACTIONS(SHIFT(22)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(15)),
        [anon_sym_let] = ACTIONS(SHIFT(22)),
        [anon_sym_is] = ACTIONS(SHIFT(23)),
        [sym_identifier] = ACTIONS(SHIFT(33)),
    },
    [21] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(31)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(14)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(15)),
        [sym_optional_pattern] = ACTIONS(SHIFT(14)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(14)),
        [sym_is_pattern] = ACTIONS(SHIFT(16)),
        [sym_as_pattern] = ACTIONS(SHIFT(16)),
        [sym__expression] = ACTIONS(SHIFT(15)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(32)),
        [anon_sym_var] = ACTIONS(SHIFT(22)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(15)),
        [anon_sym_let] = ACTIONS(SHIFT(22)),
        [anon_sym_is] = ACTIONS(SHIFT(23)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(33)),
    },
    [22] = {
        [sym__pattern] = ACTIONS(SHIFT(31)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(14)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(15)),
        [sym_optional_pattern] = ACTIONS(SHIFT(14)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(14)),
        [sym_is_pattern] = ACTIONS(SHIFT(16)),
        [sym_as_pattern] = ACTIONS(SHIFT(16)),
        [sym__expression] = ACTIONS(SHIFT(15)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(32)),
        [anon_sym_var] = ACTIONS(SHIFT(22)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(15)),
        [anon_sym_let] = ACTIONS(SHIFT(22)),
        [anon_sym_is] = ACTIONS(SHIFT(23)),
        [sym_identifier] = ACTIONS(SHIFT(33)),
    },
    [23] = {
        [sym_type] = ACTIONS(SHIFT(25)),
        [sym__type_identifier] = ACTIONS(SHIFT(26)),
        [sym__type_name] = ACTIONS(SHIFT(27)),
        [sym_identifier] = ACTIONS(SHIFT(28)),
    },
    [24] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [25] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [26] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [27] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(29)),
    },
    [28] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [29] = {
        [sym__type_identifier] = ACTIONS(SHIFT(30)),
        [sym__type_name] = ACTIONS(SHIFT(27)),
        [sym_identifier] = ACTIONS(SHIFT(28)),
    },
    [30] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [31] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(65)),
        [anon_sym_as] = ACTIONS(SHIFT(66)),
    },
    [32] = {
        [sym__pattern] = ACTIONS(SHIFT(34)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(35)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(36)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(37)),
        [sym_optional_pattern] = ACTIONS(SHIFT(35)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(35)),
        [sym_is_pattern] = ACTIONS(SHIFT(38)),
        [sym_as_pattern] = ACTIONS(SHIFT(38)),
        [sym__expression] = ACTIONS(SHIFT(36)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(39)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(40)),
        [anon_sym_var] = ACTIONS(SHIFT(41)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(36)),
        [anon_sym_let] = ACTIONS(SHIFT(41)),
        [anon_sym_is] = ACTIONS(SHIFT(42)),
        [sym_identifier] = ACTIONS(SHIFT(43)),
    },
    [33] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [34] = {
        [aux_sym__tuple_pattern_element_list_repeat1] = ACTIONS(SHIFT(61)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(62)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(51)),
        [anon_sym_as] = ACTIONS(SHIFT(52)),
    },
    [35] = {
        [aux_sym__tuple_pattern_element_list_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [36] = {
        [sym__type_annotation] = ACTIONS(SHIFT(58)),
        [aux_sym__tuple_pattern_element_list_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(SHIFT(59)),
    },
    [37] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(57)),
    },
    [38] = {
        [aux_sym__tuple_pattern_element_list_repeat1] = ACTIONS(REDUCE(sym__type_casting_pattern, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_casting_pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_casting_pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_casting_pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_casting_pattern, 1)),
    },
    [39] = {
        [sym__pattern] = ACTIONS(SHIFT(34)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(35)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(36)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(54)),
        [sym_optional_pattern] = ACTIONS(SHIFT(35)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(35)),
        [sym_is_pattern] = ACTIONS(SHIFT(38)),
        [sym_as_pattern] = ACTIONS(SHIFT(38)),
        [sym__expression] = ACTIONS(SHIFT(36)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(39)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(55)),
        [anon_sym_var] = ACTIONS(SHIFT(41)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(36)),
        [anon_sym_let] = ACTIONS(SHIFT(41)),
        [anon_sym_is] = ACTIONS(SHIFT(42)),
        [sym_identifier] = ACTIONS(SHIFT(43)),
    },
    [40] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [41] = {
        [sym__pattern] = ACTIONS(SHIFT(50)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(35)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(36)),
        [sym_optional_pattern] = ACTIONS(SHIFT(35)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(35)),
        [sym_is_pattern] = ACTIONS(SHIFT(38)),
        [sym_as_pattern] = ACTIONS(SHIFT(38)),
        [sym__expression] = ACTIONS(SHIFT(36)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(39)),
        [anon_sym_var] = ACTIONS(SHIFT(41)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(36)),
        [anon_sym_let] = ACTIONS(SHIFT(41)),
        [anon_sym_is] = ACTIONS(SHIFT(42)),
        [sym_identifier] = ACTIONS(SHIFT(43)),
    },
    [42] = {
        [sym_type] = ACTIONS(SHIFT(44)),
        [sym__type_identifier] = ACTIONS(SHIFT(45)),
        [sym__type_name] = ACTIONS(SHIFT(46)),
        [sym_identifier] = ACTIONS(SHIFT(47)),
    },
    [43] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__tuple_pattern_element_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [44] = {
        [aux_sym__tuple_pattern_element_list_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [45] = {
        [aux_sym__tuple_pattern_element_list_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [46] = {
        [aux_sym__tuple_pattern_element_list_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(48)),
    },
    [47] = {
        [aux_sym__tuple_pattern_element_list_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
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
        [aux_sym__tuple_pattern_element_list_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [50] = {
        [aux_sym__tuple_pattern_element_list_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(51)),
        [anon_sym_as] = ACTIONS(SHIFT(52)),
    },
    [51] = {
        [aux_sym__tuple_pattern_element_list_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [52] = {
        [sym_type] = ACTIONS(SHIFT(53)),
        [sym__type_identifier] = ACTIONS(SHIFT(45)),
        [sym__type_name] = ACTIONS(SHIFT(46)),
        [sym_identifier] = ACTIONS(SHIFT(47)),
    },
    [53] = {
        [aux_sym__tuple_pattern_element_list_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [54] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(56)),
    },
    [55] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [aux_sym__tuple_pattern_element_list_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [56] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [aux_sym__tuple_pattern_element_list_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [57] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [58] = {
        [aux_sym__tuple_pattern_element_list_repeat1] = ACTIONS(REDUCE(sym__pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 2)),
    },
    [59] = {
        [sym_type] = ACTIONS(SHIFT(60)),
        [sym__type_identifier] = ACTIONS(SHIFT(45)),
        [sym__type_name] = ACTIONS(SHIFT(46)),
        [sym_identifier] = ACTIONS(SHIFT(47)),
    },
    [60] = {
        [aux_sym__tuple_pattern_element_list_repeat1] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [61] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 2)),
    },
    [62] = {
        [sym__pattern] = ACTIONS(SHIFT(63)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(35)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(36)),
        [sym_optional_pattern] = ACTIONS(SHIFT(35)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(35)),
        [sym_is_pattern] = ACTIONS(SHIFT(38)),
        [sym_as_pattern] = ACTIONS(SHIFT(38)),
        [sym__expression] = ACTIONS(SHIFT(36)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(39)),
        [anon_sym_var] = ACTIONS(SHIFT(41)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(36)),
        [anon_sym_let] = ACTIONS(SHIFT(41)),
        [anon_sym_is] = ACTIONS(SHIFT(42)),
        [sym_identifier] = ACTIONS(SHIFT(43)),
    },
    [63] = {
        [aux_sym__tuple_pattern_element_list_repeat1] = ACTIONS(SHIFT(64)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym__tuple_pattern_element_list_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(62)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(51)),
        [anon_sym_as] = ACTIONS(SHIFT(52)),
    },
    [64] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym__tuple_pattern_element_list_repeat1, 3)),
    },
    [65] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [66] = {
        [sym_type] = ACTIONS(SHIFT(67)),
        [sym__type_identifier] = ACTIONS(SHIFT(26)),
        [sym__type_name] = ACTIONS(SHIFT(27)),
        [sym_identifier] = ACTIONS(SHIFT(28)),
    },
    [67] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [68] = {
        [anon_sym_in] = ACTIONS(SHIFT(69)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(65)),
        [anon_sym_as] = ACTIONS(SHIFT(66)),
    },
    [69] = {
        [sym__expression] = ACTIONS(SHIFT(70)),
        [sym_identifier] = ACTIONS(SHIFT(71)),
    },
    [70] = {
        [sym__code_block] = ACTIONS(SHIFT(72)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(73)),
    },
    [71] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [72] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
    },
    [73] = {
        [sym__statement] = ACTIONS(SHIFT(74)),
        [sym__statements] = ACTIONS(SHIFT(75)),
        [sym__loop_statement] = ACTIONS(SHIFT(76)),
        [sym_for_statement] = ACTIONS(SHIFT(77)),
        [sym_for_in_statement] = ACTIONS(SHIFT(77)),
        [sym__expression] = ACTIONS(SHIFT(76)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(78)),
        [anon_sym_for] = ACTIONS(SHIFT(79)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(76)),
        [sym_identifier] = ACTIONS(SHIFT(80)),
    },
    [74] = {
        [sym__statement] = ACTIONS(SHIFT(74)),
        [sym__loop_statement] = ACTIONS(SHIFT(76)),
        [sym_for_statement] = ACTIONS(SHIFT(77)),
        [sym_for_in_statement] = ACTIONS(SHIFT(77)),
        [sym__expression] = ACTIONS(SHIFT(76)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(122)),
        [anon_sym_for] = ACTIONS(SHIFT(79)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [sym__declaration] = ACTIONS(SHIFT(76)),
        [sym_identifier] = ACTIONS(SHIFT(80)),
    },
    [75] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(121)),
    },
    [76] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(120)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 1)),
    },
    [77] = {
        [sym__statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__loop_statement, 1)),
    },
    [78] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 1)),
    },
    [79] = {
        [sym__for_init] = ACTIONS(SHIFT(9)),
        [sym__for_condition] = ACTIONS(SHIFT(81)),
        [sym_variable_declaration] = ACTIONS(SHIFT(11)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(12)),
        [sym__pattern] = ACTIONS(SHIFT(82)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(14)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(15)),
        [sym_optional_pattern] = ACTIONS(SHIFT(14)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(14)),
        [sym_is_pattern] = ACTIONS(SHIFT(16)),
        [sym_as_pattern] = ACTIONS(SHIFT(16)),
        [sym__expression] = ACTIONS(SHIFT(17)),
        [sym__expression_list] = ACTIONS(SHIFT(11)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(18)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(83)),
        [anon_sym_case] = ACTIONS(SHIFT(84)),
        [anon_sym_var] = ACTIONS(SHIFT(21)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(15)),
        [anon_sym_let] = ACTIONS(SHIFT(22)),
        [anon_sym_is] = ACTIONS(SHIFT(23)),
        [sym_identifier] = ACTIONS(SHIFT(24)),
    },
    [80] = {
        [sym__statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [81] = {
        [sym__code_block] = ACTIONS(SHIFT(119)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(89)),
    },
    [82] = {
        [anon_sym_in] = ACTIONS(SHIFT(116)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(65)),
        [anon_sym_as] = ACTIONS(SHIFT(66)),
    },
    [83] = {
        [sym__for_init] = ACTIONS(SHIFT(92)),
        [sym__for_condition] = ACTIONS(SHIFT(93)),
        [sym_variable_declaration] = ACTIONS(SHIFT(11)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(12)),
        [sym__pattern] = ACTIONS(SHIFT(34)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(35)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(36)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(37)),
        [sym_optional_pattern] = ACTIONS(SHIFT(35)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(35)),
        [sym_is_pattern] = ACTIONS(SHIFT(38)),
        [sym_as_pattern] = ACTIONS(SHIFT(38)),
        [sym__expression] = ACTIONS(SHIFT(94)),
        [sym__expression_list] = ACTIONS(SHIFT(11)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(95)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(39)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(40)),
        [anon_sym_var] = ACTIONS(SHIFT(96)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(36)),
        [anon_sym_let] = ACTIONS(SHIFT(41)),
        [anon_sym_is] = ACTIONS(SHIFT(42)),
        [sym_identifier] = ACTIONS(SHIFT(97)),
    },
    [84] = {
        [sym__pattern] = ACTIONS(SHIFT(85)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(14)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(15)),
        [sym_optional_pattern] = ACTIONS(SHIFT(14)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(14)),
        [sym_is_pattern] = ACTIONS(SHIFT(16)),
        [sym_as_pattern] = ACTIONS(SHIFT(16)),
        [sym__expression] = ACTIONS(SHIFT(15)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(32)),
        [anon_sym_var] = ACTIONS(SHIFT(22)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(15)),
        [anon_sym_let] = ACTIONS(SHIFT(22)),
        [anon_sym_is] = ACTIONS(SHIFT(23)),
        [sym_identifier] = ACTIONS(SHIFT(33)),
    },
    [85] = {
        [anon_sym_in] = ACTIONS(SHIFT(86)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(65)),
        [anon_sym_as] = ACTIONS(SHIFT(66)),
    },
    [86] = {
        [sym__expression] = ACTIONS(SHIFT(87)),
        [sym_identifier] = ACTIONS(SHIFT(71)),
    },
    [87] = {
        [sym__code_block] = ACTIONS(SHIFT(88)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(89)),
    },
    [88] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
    },
    [89] = {
        [sym__statement] = ACTIONS(SHIFT(74)),
        [sym__statements] = ACTIONS(SHIFT(90)),
        [sym__loop_statement] = ACTIONS(SHIFT(76)),
        [sym_for_statement] = ACTIONS(SHIFT(77)),
        [sym_for_in_statement] = ACTIONS(SHIFT(77)),
        [sym__expression] = ACTIONS(SHIFT(76)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(78)),
        [anon_sym_for] = ACTIONS(SHIFT(79)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(76)),
        [sym_identifier] = ACTIONS(SHIFT(80)),
    },
    [90] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(91)),
    },
    [91] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [92] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(112)),
    },
    [93] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(110)),
    },
    [94] = {
        [sym__type_annotation] = ACTIONS(SHIFT(58)),
        [aux_sym__tuple_pattern_element_list_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(105)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1), SHIFT(106)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(SHIFT(59)),
    },
    [95] = {
        [sym__expression] = ACTIONS(SHIFT(98)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(99)),
        [sym_identifier] = ACTIONS(SHIFT(100)),
    },
    [96] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(50)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(35)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(36)),
        [sym_optional_pattern] = ACTIONS(SHIFT(35)),
        [sym__type_casting_pattern] = ACTIONS(SHIFT(35)),
        [sym_is_pattern] = ACTIONS(SHIFT(38)),
        [sym_as_pattern] = ACTIONS(SHIFT(38)),
        [sym__expression] = ACTIONS(SHIFT(36)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(39)),
        [anon_sym_var] = ACTIONS(SHIFT(41)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(36)),
        [anon_sym_let] = ACTIONS(SHIFT(41)),
        [anon_sym_is] = ACTIONS(SHIFT(42)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(43)),
    },
    [97] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__tuple_pattern_element_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [98] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(103)),
    },
    [99] = {
        [sym__expression] = ACTIONS(SHIFT(101)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(102)),
    },
    [100] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [101] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [102] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [103] = {
        [sym__expression] = ACTIONS(SHIFT(104)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(102)),
    },
    [104] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [105] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 2)),
    },
    [106] = {
        [sym__expression] = ACTIONS(SHIFT(107)),
        [sym_identifier] = ACTIONS(SHIFT(108)),
    },
    [107] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(109)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(106)),
    },
    [108] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [109] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 3)),
    },
    [110] = {
        [sym__code_block] = ACTIONS(SHIFT(111)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(89)),
    },
    [111] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 5)),
    },
    [112] = {
        [sym__expression] = ACTIONS(SHIFT(113)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(103)),
        [sym_identifier] = ACTIONS(SHIFT(100)),
    },
    [113] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(114)),
    },
    [114] = {
        [sym__expression] = ACTIONS(SHIFT(115)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(102)),
    },
    [115] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [116] = {
        [sym__expression] = ACTIONS(SHIFT(117)),
        [sym_identifier] = ACTIONS(SHIFT(71)),
    },
    [117] = {
        [sym__code_block] = ACTIONS(SHIFT(118)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(89)),
    },
    [118] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
    },
    [119] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 3)),
    },
    [120] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [121] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [122] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
    },
    [123] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(124)),
    },
    [124] = {
        [sym__code_block] = ACTIONS(SHIFT(125)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(73)),
    },
    [125] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 5)),
    },
    [126] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(129)),
    },
    [127] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym__expression] = ACTIONS(SHIFT(128)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(71)),
    },
    [128] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [129] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym__expression] = ACTIONS(SHIFT(130)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(71)),
    },
    [130] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [131] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 2)),
    },
    [132] = {
        [sym_type] = ACTIONS(SHIFT(133)),
        [sym__type_identifier] = ACTIONS(SHIFT(26)),
        [sym__type_name] = ACTIONS(SHIFT(27)),
        [sym_identifier] = ACTIONS(SHIFT(28)),
    },
    [133] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [134] = {
        [sym__expression] = ACTIONS(SHIFT(135)),
        [sym_identifier] = ACTIONS(SHIFT(71)),
    },
    [135] = {
        [sym__code_block] = ACTIONS(SHIFT(136)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(73)),
    },
    [136] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
    },
    [137] = {
        [sym__type_annotation] = ACTIONS(SHIFT(139)),
        [anon_sym_COLON] = ACTIONS(SHIFT(140)),
    },
    [138] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__variable_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__variable_name, 1)),
    },
    [139] = {
        [sym__code_block] = ACTIONS(SHIFT(147)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(148)),
    },
    [140] = {
        [sym_type] = ACTIONS(SHIFT(141)),
        [sym__type_identifier] = ACTIONS(SHIFT(142)),
        [sym__type_name] = ACTIONS(SHIFT(143)),
        [sym_identifier] = ACTIONS(SHIFT(144)),
    },
    [141] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [142] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [143] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(145)),
    },
    [144] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [145] = {
        [sym__type_identifier] = ACTIONS(SHIFT(146)),
        [sym__type_name] = ACTIONS(SHIFT(143)),
        [sym_identifier] = ACTIONS(SHIFT(144)),
    },
    [146] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [147] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_variable_declaration, 4)),
    },
    [148] = {
        [sym__statement] = ACTIONS(SHIFT(74)),
        [sym__statements] = ACTIONS(SHIFT(149)),
        [sym__loop_statement] = ACTIONS(SHIFT(76)),
        [sym_for_statement] = ACTIONS(SHIFT(77)),
        [sym_for_in_statement] = ACTIONS(SHIFT(77)),
        [sym__expression] = ACTIONS(SHIFT(76)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(78)),
        [anon_sym_for] = ACTIONS(SHIFT(79)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(76)),
        [sym_identifier] = ACTIONS(SHIFT(80)),
    },
    [149] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(150)),
    },
    [150] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [151] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 3)),
    },
    [152] = {
        [sym__expression] = ACTIONS(SHIFT(153)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(129)),
        [sym_identifier] = ACTIONS(SHIFT(100)),
    },
    [153] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(154)),
    },
    [154] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym__expression] = ACTIONS(SHIFT(155)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(71)),
    },
    [155] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [156] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [157] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
    },
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_swift);
