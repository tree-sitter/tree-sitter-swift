#include "tree_sitter/parser.h"

#define STATE_COUNT 350
#define SYMBOL_COUNT 75

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
    sym_optional_binding_condition,
    sym_optional_binding,
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
    aux_sym_optional_binding_condition_repeat1,
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
    anon_sym_let,
    anon_sym_var,
    anon_sym_EQ,
    anon_sym_POUNDavailable,
    anon_sym_STAR,
    anon_sym_iOS,
    anon_sym_iOSApplicationExtension,
    anon_sym_OSX,
    anon_sym_OSXApplicationExtension,
    anon_sym_watchOS,
    anon_sym_tvOS,
    aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH,
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
    [sym_optional_binding_condition] = "optional_binding_condition",
    [sym_optional_binding] = "optional_binding",
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
    [aux_sym_optional_binding_condition_repeat1] = "optional_binding_condition_repeat1",
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
    [anon_sym_let] = "let",
    [anon_sym_var] = "var",
    [anon_sym_EQ] = "=",
    [anon_sym_POUNDavailable] = "#available",
    [anon_sym_STAR] = "*",
    [anon_sym_iOS] = "iOS",
    [anon_sym_iOSApplicationExtension] = "iOSApplicationExtension",
    [anon_sym_OSX] = "OSX",
    [anon_sym_OSXApplicationExtension] = "OSXApplicationExtension",
    [anon_sym_watchOS] = "watchOS",
    [anon_sym_tvOS] = "tvOS",
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = "/[0-9]+(.[0-9]+(.[0-9]+|)|)/",
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
    [sym_optional_binding_condition] = TSNodeTypeNamed,
    [sym_optional_binding] = TSNodeTypeNamed,
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
    [aux_sym_optional_binding_condition_repeat1] = TSNodeTypeHidden,
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
    [anon_sym_let] = TSNodeTypeAnonymous,
    [anon_sym_var] = TSNodeTypeAnonymous,
    [anon_sym_EQ] = TSNodeTypeAnonymous,
    [anon_sym_POUNDavailable] = TSNodeTypeAnonymous,
    [anon_sym_STAR] = TSNodeTypeAnonymous,
    [anon_sym_iOS] = TSNodeTypeAnonymous,
    [anon_sym_iOSApplicationExtension] = TSNodeTypeAnonymous,
    [anon_sym_OSX] = TSNodeTypeAnonymous,
    [anon_sym_OSXApplicationExtension] = TSNodeTypeAnonymous,
    [anon_sym_watchOS] = TSNodeTypeAnonymous,
    [anon_sym_tvOS] = TSNodeTypeAnonymous,
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = TSNodeTypeHidden,
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
                ('d' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'c')
                ADVANCE(34);
            if (lookahead == 'l')
                ADVANCE(40);
            if (lookahead == 'v')
                ADVANCE(43);
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
            if (lookahead == 'l')
                ADVANCE(170);
            if (lookahead == 'v')
                ADVANCE(173);
            LEX_ERROR();
        case 170:
            if (lookahead == 'e')
                ADVANCE(171);
            LEX_ERROR();
        case 171:
            if (lookahead == 't')
                ADVANCE(172);
            LEX_ERROR();
        case 172:
            ACCEPT_TOKEN(anon_sym_let);
        case 173:
            if (lookahead == 'a')
                ADVANCE(174);
            LEX_ERROR();
        case 174:
            if (lookahead == 'r')
                ADVANCE(175);
            LEX_ERROR();
        case 175:
            ACCEPT_TOKEN(anon_sym_var);
        case 176:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(176);
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
        case 178:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(178);
            if (lookahead == ';')
                ADVANCE(29);
            LEX_ERROR();
        case 179:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(179);
            if (lookahead == ':')
                ADVANCE(76);
            if (lookahead == '?')
                ADVANCE(159);
            if (lookahead == 'a')
                ADVANCE(160);
            if (lookahead == 'i')
                ADVANCE(180);
            LEX_ERROR();
        case 180:
            if (lookahead == 'n')
                ADVANCE(181);
            LEX_ERROR();
        case 181:
            ACCEPT_TOKEN(anon_sym_in);
        case 182:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(182);
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
                ADVANCE(180);
            LEX_ERROR();
        case 183:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(183);
            if (lookahead == ';')
                ADVANCE(29);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 184:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(184);
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
        case 185:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(185);
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
                ADVANCE(180);
            LEX_ERROR();
        case 186:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(186);
            if (lookahead == '.')
                ADVANCE(32);
            if (lookahead == ':')
                ADVANCE(76);
            if (lookahead == '?')
                ADVANCE(159);
            if (lookahead == 'a')
                ADVANCE(160);
            if (lookahead == 'i')
                ADVANCE(180);
            LEX_ERROR();
        case 187:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(187);
            if (lookahead == '(')
                ADVANCE(31);
            if (lookahead == ':')
                ADVANCE(76);
            if (lookahead == '?')
                ADVANCE(159);
            if (lookahead == 'a')
                ADVANCE(160);
            if (lookahead == 'i')
                ADVANCE(180);
            LEX_ERROR();
        case 188:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(188);
            if (lookahead == 'i')
                ADVANCE(180);
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
            if (lookahead == 'i')
                ADVANCE(180);
            LEX_ERROR();
        case 190:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(190);
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
        case 191:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(191);
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
        case 192:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(192);
            if (lookahead == ')')
                ADVANCE(149);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 193:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(193);
            if (lookahead == ',')
                ADVANCE(87);
            if (lookahead == ';')
                ADVANCE(29);
            LEX_ERROR();
        case 194:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(194);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == '{')
                ADVANCE(59);
            LEX_ERROR();
        case 195:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(195);
            if (lookahead == '.')
                ADVANCE(32);
            if (lookahead == '{')
                ADVANCE(59);
            LEX_ERROR();
        case 196:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(196);
            if (lookahead == ',')
                ADVANCE(87);
            if (lookahead == ':')
                ADVANCE(76);
            if (lookahead == '?')
                ADVANCE(159);
            if (lookahead == 'a')
                ADVANCE(160);
            LEX_ERROR();
        case 197:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(197);
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
        case 198:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(198);
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
        case 199:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(199);
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
                ADVANCE(200);
            if (lookahead == '_')
                ADVANCE(33);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(223);
            if (lookahead == 'c')
                ADVANCE(34);
            if (lookahead == 'd')
                ADVANCE(78);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(225);
            if (lookahead == 'l')
                ADVANCE(40);
            if (lookahead == 's')
                ADVANCE(16);
            if (lookahead == 't')
                ADVANCE(249);
            if (lookahead == 'v')
                ADVANCE(43);
            if (lookahead == 'w')
                ADVANCE(253);
            if (lookahead == '{')
                ADVANCE(59);
            if (lookahead == '}')
                ADVANCE(72);
            LEX_ERROR();
        case 200:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(201);
            ACCEPT_TOKEN(sym_identifier);
        case 201:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'W') ||
                (lookahead == 'Y') ||
                (lookahead == 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'X')
                ADVANCE(202);
            ACCEPT_TOKEN(sym_identifier);
        case 202:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (lookahead == 'A')
                ADVANCE(203);
            if (('B' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_OSX);
        case 203:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(204);
            ACCEPT_TOKEN(sym_identifier);
        case 204:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(205);
            ACCEPT_TOKEN(sym_identifier);
        case 205:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(206);
            ACCEPT_TOKEN(sym_identifier);
        case 206:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(207);
            ACCEPT_TOKEN(sym_identifier);
        case 207:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(208);
            ACCEPT_TOKEN(sym_identifier);
        case 208:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
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
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(211);
            ACCEPT_TOKEN(sym_identifier);
        case 211:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(212);
            ACCEPT_TOKEN(sym_identifier);
        case 212:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(213);
            ACCEPT_TOKEN(sym_identifier);
        case 213:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'D') ||
                ('F' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'E')
                ADVANCE(214);
            ACCEPT_TOKEN(sym_identifier);
        case 214:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(3);
            if (lookahead == 'x')
                ADVANCE(215);
            ACCEPT_TOKEN(sym_identifier);
        case 215:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(216);
            ACCEPT_TOKEN(sym_identifier);
        case 216:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(217);
            ACCEPT_TOKEN(sym_identifier);
        case 217:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(218);
            ACCEPT_TOKEN(sym_identifier);
        case 218:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(219);
            ACCEPT_TOKEN(sym_identifier);
        case 219:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(220);
            ACCEPT_TOKEN(sym_identifier);
        case 220:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(221);
            ACCEPT_TOKEN(sym_identifier);
        case 221:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(222);
            ACCEPT_TOKEN(sym_identifier);
        case 222:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_OSXApplicationExtension);
        case 223:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(224);
            ACCEPT_TOKEN(sym_identifier);
        case 224:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_as);
        case 225:
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
                ADVANCE(226);
            if (lookahead == 'm')
                ADVANCE(11);
            if (lookahead == 'n')
                ADVANCE(248);
            if (lookahead == 's')
                ADVANCE(39);
            ACCEPT_TOKEN(sym_identifier);
        case 226:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(227);
            ACCEPT_TOKEN(sym_identifier);
        case 227:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (lookahead == 'A')
                ADVANCE(228);
            if (('B' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_iOS);
        case 228:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(229);
            ACCEPT_TOKEN(sym_identifier);
        case 229:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(230);
            ACCEPT_TOKEN(sym_identifier);
        case 230:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(231);
            ACCEPT_TOKEN(sym_identifier);
        case 231:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(232);
            ACCEPT_TOKEN(sym_identifier);
        case 232:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(233);
            ACCEPT_TOKEN(sym_identifier);
        case 233:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
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
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(236);
            ACCEPT_TOKEN(sym_identifier);
        case 236:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(237);
            ACCEPT_TOKEN(sym_identifier);
        case 237:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(238);
            ACCEPT_TOKEN(sym_identifier);
        case 238:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'D') ||
                ('F' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'E')
                ADVANCE(239);
            ACCEPT_TOKEN(sym_identifier);
        case 239:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(3);
            if (lookahead == 'x')
                ADVANCE(240);
            ACCEPT_TOKEN(sym_identifier);
        case 240:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(241);
            ACCEPT_TOKEN(sym_identifier);
        case 241:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(242);
            ACCEPT_TOKEN(sym_identifier);
        case 242:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(243);
            ACCEPT_TOKEN(sym_identifier);
        case 243:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
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
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_iOSApplicationExtension);
        case 248:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_in);
        case 249:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'v')
                ADVANCE(250);
            ACCEPT_TOKEN(sym_identifier);
        case 250:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(251);
            ACCEPT_TOKEN(sym_identifier);
        case 251:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(252);
            ACCEPT_TOKEN(sym_identifier);
        case 252:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_tvOS);
        case 253:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(254);
            if (lookahead == 'h')
                ADVANCE(23);
            ACCEPT_TOKEN(sym_identifier);
        case 254:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(255);
            ACCEPT_TOKEN(sym_identifier);
        case 255:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(256);
            ACCEPT_TOKEN(sym_identifier);
        case 256:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(257);
            ACCEPT_TOKEN(sym_identifier);
        case 257:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(258);
            ACCEPT_TOKEN(sym_identifier);
        case 258:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(259);
            ACCEPT_TOKEN(sym_identifier);
        case 259:
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
                ADVANCE(199);
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
                ADVANCE(200);
            if (lookahead == '_')
                ADVANCE(33);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(223);
            if (lookahead == 'c')
                ADVANCE(34);
            if (lookahead == 'd')
                ADVANCE(78);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(225);
            if (lookahead == 'l')
                ADVANCE(40);
            if (lookahead == 's')
                ADVANCE(16);
            if (lookahead == 't')
                ADVANCE(249);
            if (lookahead == 'v')
                ADVANCE(43);
            if (lookahead == 'w')
                ADVANCE(253);
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
    [37] = 74,
    [38] = 88,
    [39] = 86,
    [40] = 89,
    [41] = 148,
    [42] = 150,
    [43] = 148,
    [44] = 156,
    [45] = 86,
    [46] = 89,
    [47] = 148,
    [48] = 150,
    [49] = 148,
    [50] = 156,
    [51] = 156,
    [52] = 86,
    [53] = 156,
    [54] = 86,
    [55] = 86,
    [56] = 157,
    [57] = 157,
    [58] = 162,
    [59] = 162,
    [60] = 163,
    [61] = 74,
    [62] = 57,
    [63] = 57,
    [64] = 164,
    [65] = 157,
    [66] = 157,
    [67] = 164,
    [68] = 164,
    [69] = 57,
    [70] = 157,
    [71] = 165,
    [72] = 157,
    [73] = 157,
    [74] = 157,
    [75] = 57,
    [76] = 157,
    [77] = 166,
    [78] = 166,
    [79] = 156,
    [80] = 162,
    [81] = 163,
    [82] = 157,
    [83] = 74,
    [84] = 57,
    [85] = 57,
    [86] = 167,
    [87] = 166,
    [88] = 166,
    [89] = 167,
    [90] = 167,
    [91] = 57,
    [92] = 166,
    [93] = 168,
    [94] = 166,
    [95] = 166,
    [96] = 166,
    [97] = 57,
    [98] = 166,
    [99] = 156,
    [100] = 166,
    [101] = 166,
    [102] = 57,
    [103] = 168,
    [104] = 166,
    [105] = 157,
    [106] = 156,
    [107] = 74,
    [108] = 166,
    [109] = 156,
    [110] = 57,
    [111] = 162,
    [112] = 162,
    [113] = 57,
    [114] = 165,
    [115] = 157,
    [116] = 57,
    [117] = 86,
    [118] = 86,
    [119] = 74,
    [120] = 86,
    [121] = 157,
    [122] = 57,
    [123] = 86,
    [124] = 86,
    [125] = 86,
    [126] = 157,
    [127] = 57,
    [128] = 86,
    [129] = 169,
    [130] = 86,
    [131] = 58,
    [132] = 169,
    [133] = 86,
    [134] = 58,
    [135] = 57,
    [136] = 58,
    [137] = 58,
    [138] = 58,
    [139] = 85,
    [140] = 176,
    [141] = 176,
    [142] = 73,
    [143] = 177,
    [144] = 73,
    [145] = 30,
    [146] = 46,
    [147] = 57,
    [148] = 177,
    [149] = 58,
    [150] = 60,
    [151] = 73,
    [152] = 177,
    [153] = 177,
    [154] = 58,
    [155] = 177,
    [156] = 176,
    [157] = 73,
    [158] = 177,
    [159] = 178,
    [160] = 58,
    [161] = 178,
    [162] = 57,
    [163] = 179,
    [164] = 179,
    [165] = 182,
    [166] = 162,
    [167] = 183,
    [168] = 184,
    [169] = 74,
    [170] = 74,
    [171] = 74,
    [172] = 57,
    [173] = 57,
    [174] = 185,
    [175] = 179,
    [176] = 179,
    [177] = 186,
    [178] = 186,
    [179] = 57,
    [180] = 179,
    [181] = 187,
    [182] = 179,
    [183] = 163,
    [184] = 156,
    [185] = 179,
    [186] = 179,
    [187] = 179,
    [188] = 186,
    [189] = 179,
    [190] = 57,
    [191] = 179,
    [192] = 179,
    [193] = 188,
    [194] = 57,
    [195] = 57,
    [196] = 188,
    [197] = 188,
    [198] = 189,
    [199] = 189,
    [200] = 57,
    [201] = 188,
    [202] = 58,
    [203] = 177,
    [204] = 57,
    [205] = 58,
    [206] = 177,
    [207] = 178,
    [208] = 156,
    [209] = 190,
    [210] = 183,
    [211] = 74,
    [212] = 191,
    [213] = 178,
    [214] = 192,
    [215] = 178,
    [216] = 156,
    [217] = 156,
    [218] = 192,
    [219] = 156,
    [220] = 178,
    [221] = 57,
    [222] = 193,
    [223] = 193,
    [224] = 178,
    [225] = 58,
    [226] = 177,
    [227] = 183,
    [228] = 178,
    [229] = 192,
    [230] = 156,
    [231] = 178,
    [232] = 194,
    [233] = 58,
    [234] = 194,
    [235] = 58,
    [236] = 57,
    [237] = 187,
    [238] = 179,
    [239] = 188,
    [240] = 57,
    [241] = 58,
    [242] = 177,
    [243] = 75,
    [244] = 75,
    [245] = 58,
    [246] = 57,
    [247] = 58,
    [248] = 58,
    [249] = 195,
    [250] = 195,
    [251] = 57,
    [252] = 58,
    [253] = 178,
    [254] = 176,
    [255] = 73,
    [256] = 178,
    [257] = 177,
    [258] = 183,
    [259] = 178,
    [260] = 194,
    [261] = 58,
    [262] = 176,
    [263] = 85,
    [264] = 73,
    [265] = 58,
    [266] = 179,
    [267] = 184,
    [268] = 74,
    [269] = 179,
    [270] = 188,
    [271] = 57,
    [272] = 58,
    [273] = 85,
    [274] = 57,
    [275] = 58,
    [276] = 85,
    [277] = 156,
    [278] = 58,
    [279] = 85,
    [280] = 188,
    [281] = 57,
    [282] = 58,
    [283] = 85,
    [284] = 85,
    [285] = 77,
    [286] = 60,
    [287] = 196,
    [288] = 196,
    [289] = 162,
    [290] = 163,
    [291] = 74,
    [292] = 57,
    [293] = 57,
    [294] = 197,
    [295] = 196,
    [296] = 196,
    [297] = 197,
    [298] = 197,
    [299] = 57,
    [300] = 196,
    [301] = 198,
    [302] = 196,
    [303] = 196,
    [304] = 196,
    [305] = 57,
    [306] = 196,
    [307] = 156,
    [308] = 196,
    [309] = 196,
    [310] = 57,
    [311] = 198,
    [312] = 196,
    [313] = 75,
    [314] = 74,
    [315] = 77,
    [316] = 60,
    [317] = 196,
    [318] = 75,
    [319] = 77,
    [320] = 60,
    [321] = 28,
    [322] = 73,
    [323] = 58,
    [324] = 28,
    [325] = 176,
    [326] = 73,
    [327] = 28,
    [328] = 58,
    [329] = 179,
    [330] = 184,
    [331] = 74,
    [332] = 179,
    [333] = 188,
    [334] = 57,
    [335] = 58,
    [336] = 28,
    [337] = 57,
    [338] = 58,
    [339] = 28,
    [340] = 156,
    [341] = 58,
    [342] = 28,
    [343] = 188,
    [344] = 57,
    [345] = 58,
    [346] = 28,
    [347] = 28,
    [348] = 1,
    [349] = 27,
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
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(349)),
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
        [anon_sym_SEMI] = ACTIONS(SHIFT(348)),
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
        [sym__for_init] = ACTIONS(SHIFT(159)),
        [sym__for_condition] = ACTIONS(SHIFT(328)),
        [sym_variable_declaration] = ACTIONS(SHIFT(161)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(162)),
        [sym__pattern] = ACTIONS(SHIFT(329)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(164)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(164)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(164)),
        [sym_optional_pattern] = ACTIONS(SHIFT(164)),
        [sym_is_pattern] = ACTIONS(SHIFT(164)),
        [sym_as_pattern] = ACTIONS(SHIFT(164)),
        [sym__expression] = ACTIONS(SHIFT(165)),
        [sym__expression_list] = ACTIONS(SHIFT(161)),
        [sym__type_identifier] = ACTIONS(SHIFT(166)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(167)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(330)),
        [anon_sym_case] = ACTIONS(SHIFT(331)),
        [anon_sym_let] = ACTIONS(SHIFT(170)),
        [anon_sym_var] = ACTIONS(SHIFT(171)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(164)),
        [anon_sym_DOT] = ACTIONS(SHIFT(172)),
        [anon_sym_is] = ACTIONS(SHIFT(173)),
        [sym_identifier] = ACTIONS(SHIFT(174)),
    },
    [7] = {
        [sym__condition_clause] = ACTIONS(SHIFT(323)),
        [sym__condition] = ACTIONS(SHIFT(32)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(33)),
        [sym_availability_condition] = ACTIONS(SHIFT(34)),
        [sym_case_condition] = ACTIONS(SHIFT(33)),
        [sym__expression] = ACTIONS(SHIFT(35)),
        [anon_sym_case] = ACTIONS(SHIFT(36)),
        [anon_sym_let] = ACTIONS(SHIFT(37)),
        [anon_sym_var] = ACTIONS(SHIFT(37)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(38)),
        [sym_identifier] = ACTIONS(SHIFT(39)),
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
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(322)),
        [anon_sym_case] = ACTIONS(SHIFT(15)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 1)),
        [anon_sym_default] = ACTIONS(SHIFT(17)),
    },
    [14] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(321)),
    },
    [15] = {
        [sym__pattern] = ACTIONS(SHIFT(287)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(288)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(288)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(288)),
        [sym_optional_pattern] = ACTIONS(SHIFT(288)),
        [sym_is_pattern] = ACTIONS(SHIFT(288)),
        [sym_as_pattern] = ACTIONS(SHIFT(288)),
        [sym__expression] = ACTIONS(SHIFT(288)),
        [sym__type_identifier] = ACTIONS(SHIFT(289)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(290)),
        [anon_sym_let] = ACTIONS(SHIFT(291)),
        [anon_sym_var] = ACTIONS(SHIFT(291)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(288)),
        [anon_sym_DOT] = ACTIONS(SHIFT(292)),
        [anon_sym_is] = ACTIONS(SHIFT(293)),
        [sym_identifier] = ACTIONS(SHIFT(294)),
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
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(286)),
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
        [anon_sym_SEMI] = ACTIONS(SHIFT(285)),
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
        [sym__for_init] = ACTIONS(SHIFT(159)),
        [sym__for_condition] = ACTIONS(SHIFT(265)),
        [sym_variable_declaration] = ACTIONS(SHIFT(161)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(162)),
        [sym__pattern] = ACTIONS(SHIFT(266)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(164)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(164)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(164)),
        [sym_optional_pattern] = ACTIONS(SHIFT(164)),
        [sym_is_pattern] = ACTIONS(SHIFT(164)),
        [sym_as_pattern] = ACTIONS(SHIFT(164)),
        [sym__expression] = ACTIONS(SHIFT(165)),
        [sym__expression_list] = ACTIONS(SHIFT(161)),
        [sym__type_identifier] = ACTIONS(SHIFT(166)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(167)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(267)),
        [anon_sym_case] = ACTIONS(SHIFT(268)),
        [anon_sym_let] = ACTIONS(SHIFT(170)),
        [anon_sym_var] = ACTIONS(SHIFT(171)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(164)),
        [anon_sym_DOT] = ACTIONS(SHIFT(172)),
        [anon_sym_is] = ACTIONS(SHIFT(173)),
        [sym_identifier] = ACTIONS(SHIFT(174)),
    },
    [23] = {
        [sym__condition_clause] = ACTIONS(SHIFT(31)),
        [sym__condition] = ACTIONS(SHIFT(32)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(33)),
        [sym_availability_condition] = ACTIONS(SHIFT(34)),
        [sym_case_condition] = ACTIONS(SHIFT(33)),
        [sym__expression] = ACTIONS(SHIFT(35)),
        [anon_sym_case] = ACTIONS(SHIFT(36)),
        [anon_sym_let] = ACTIONS(SHIFT(37)),
        [anon_sym_var] = ACTIONS(SHIFT(37)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(38)),
        [sym_identifier] = ACTIONS(SHIFT(39)),
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
        [sym__code_block] = ACTIONS(SHIFT(139)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(140)),
    },
    [32] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(138)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(132)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [33] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [34] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1), SHIFT(135)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [35] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(129)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [36] = {
        [sym__pattern] = ACTIONS(SHIFT(126)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(57)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(57)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(57)),
        [sym_optional_pattern] = ACTIONS(SHIFT(57)),
        [sym_is_pattern] = ACTIONS(SHIFT(57)),
        [sym_as_pattern] = ACTIONS(SHIFT(57)),
        [sym__expression] = ACTIONS(SHIFT(57)),
        [sym__type_identifier] = ACTIONS(SHIFT(58)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(60)),
        [anon_sym_let] = ACTIONS(SHIFT(61)),
        [anon_sym_var] = ACTIONS(SHIFT(61)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(57)),
        [anon_sym_DOT] = ACTIONS(SHIFT(62)),
        [anon_sym_is] = ACTIONS(SHIFT(63)),
        [sym_identifier] = ACTIONS(SHIFT(64)),
    },
    [37] = {
        [sym_optional_binding] = ACTIONS(SHIFT(55)),
        [sym__pattern] = ACTIONS(SHIFT(56)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(57)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(57)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(57)),
        [sym_optional_pattern] = ACTIONS(SHIFT(57)),
        [sym_is_pattern] = ACTIONS(SHIFT(57)),
        [sym_as_pattern] = ACTIONS(SHIFT(57)),
        [sym__expression] = ACTIONS(SHIFT(57)),
        [sym__type_identifier] = ACTIONS(SHIFT(58)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(60)),
        [anon_sym_let] = ACTIONS(SHIFT(61)),
        [anon_sym_var] = ACTIONS(SHIFT(61)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(57)),
        [anon_sym_DOT] = ACTIONS(SHIFT(62)),
        [anon_sym_is] = ACTIONS(SHIFT(63)),
        [sym_identifier] = ACTIONS(SHIFT(64)),
    },
    [38] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(40)),
    },
    [39] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [40] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(41)),
        [anon_sym_iOS] = ACTIONS(SHIFT(42)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(42)),
        [anon_sym_OSX] = ACTIONS(SHIFT(42)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(42)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(42)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(42)),
    },
    [41] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(53)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(54)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(46)),
    },
    [42] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(43)),
    },
    [43] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(44)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(45)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(46)),
    },
    [44] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(52)),
    },
    [45] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 5)),
    },
    [46] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(47)),
        [anon_sym_iOS] = ACTIONS(SHIFT(48)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(48)),
        [anon_sym_OSX] = ACTIONS(SHIFT(48)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(48)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(48)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(48)),
    },
    [47] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(51)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(46)),
    },
    [48] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(49)),
    },
    [49] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(50)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 3)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(46)),
    },
    [50] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 4)),
    },
    [51] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 3)),
    },
    [52] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 6)),
    },
    [53] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(45)),
    },
    [54] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 4)),
    },
    [55] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(119)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
    },
    [56] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(116)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(74)),
        [anon_sym_as] = ACTIONS(SHIFT(75)),
    },
    [57] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [58] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(113)),
    },
    [59] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(110)),
    },
    [60] = {
        [sym__pattern] = ACTIONS(SHIFT(77)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(78)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(78)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(79)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(78)),
        [sym_optional_pattern] = ACTIONS(SHIFT(78)),
        [sym_is_pattern] = ACTIONS(SHIFT(78)),
        [sym_as_pattern] = ACTIONS(SHIFT(78)),
        [sym__expression] = ACTIONS(SHIFT(78)),
        [sym__type_identifier] = ACTIONS(SHIFT(80)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(81)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(82)),
        [anon_sym_let] = ACTIONS(SHIFT(83)),
        [anon_sym_var] = ACTIONS(SHIFT(83)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(78)),
        [anon_sym_DOT] = ACTIONS(SHIFT(84)),
        [anon_sym_is] = ACTIONS(SHIFT(85)),
        [sym_identifier] = ACTIONS(SHIFT(86)),
    },
    [61] = {
        [sym__pattern] = ACTIONS(SHIFT(73)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(57)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(57)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(57)),
        [sym_optional_pattern] = ACTIONS(SHIFT(57)),
        [sym_is_pattern] = ACTIONS(SHIFT(57)),
        [sym_as_pattern] = ACTIONS(SHIFT(57)),
        [sym__expression] = ACTIONS(SHIFT(57)),
        [sym__type_identifier] = ACTIONS(SHIFT(58)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(60)),
        [anon_sym_let] = ACTIONS(SHIFT(61)),
        [anon_sym_var] = ACTIONS(SHIFT(61)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(57)),
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
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [65] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [66] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [67] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(69)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [68] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_name, 1)),
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
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [71] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(72)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(60)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [72] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [73] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(74)),
        [anon_sym_as] = ACTIONS(SHIFT(75)),
    },
    [74] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
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
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [77] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(106)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(107)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(96)),
        [anon_sym_as] = ACTIONS(SHIFT(97)),
    },
    [78] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [79] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(105)),
    },
    [80] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(102)),
    },
    [81] = {
        [sym__pattern] = ACTIONS(SHIFT(77)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(78)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(78)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(99)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(78)),
        [sym_optional_pattern] = ACTIONS(SHIFT(78)),
        [sym_is_pattern] = ACTIONS(SHIFT(78)),
        [sym_as_pattern] = ACTIONS(SHIFT(78)),
        [sym__expression] = ACTIONS(SHIFT(78)),
        [sym__type_identifier] = ACTIONS(SHIFT(80)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(81)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(100)),
        [anon_sym_let] = ACTIONS(SHIFT(83)),
        [anon_sym_var] = ACTIONS(SHIFT(83)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(78)),
        [anon_sym_DOT] = ACTIONS(SHIFT(84)),
        [anon_sym_is] = ACTIONS(SHIFT(85)),
        [sym_identifier] = ACTIONS(SHIFT(86)),
    },
    [82] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [83] = {
        [sym__pattern] = ACTIONS(SHIFT(95)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(78)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(78)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(78)),
        [sym_optional_pattern] = ACTIONS(SHIFT(78)),
        [sym_is_pattern] = ACTIONS(SHIFT(78)),
        [sym_as_pattern] = ACTIONS(SHIFT(78)),
        [sym__expression] = ACTIONS(SHIFT(78)),
        [sym__type_identifier] = ACTIONS(SHIFT(80)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(81)),
        [anon_sym_let] = ACTIONS(SHIFT(83)),
        [anon_sym_var] = ACTIONS(SHIFT(83)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(78)),
        [anon_sym_DOT] = ACTIONS(SHIFT(84)),
        [anon_sym_is] = ACTIONS(SHIFT(85)),
        [sym_identifier] = ACTIONS(SHIFT(86)),
    },
    [84] = {
        [sym_identifier] = ACTIONS(SHIFT(93)),
    },
    [85] = {
        [sym_type] = ACTIONS(SHIFT(87)),
        [sym__type_identifier] = ACTIONS(SHIFT(88)),
        [sym__type_name] = ACTIONS(SHIFT(89)),
        [sym_identifier] = ACTIONS(SHIFT(90)),
    },
    [86] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [87] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [88] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [89] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(91)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [90] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [91] = {
        [sym__type_identifier] = ACTIONS(SHIFT(92)),
        [sym__type_name] = ACTIONS(SHIFT(89)),
        [sym_identifier] = ACTIONS(SHIFT(90)),
    },
    [92] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [93] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(94)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(81)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [94] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [95] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(96)),
        [anon_sym_as] = ACTIONS(SHIFT(97)),
    },
    [96] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [97] = {
        [sym_type] = ACTIONS(SHIFT(98)),
        [sym__type_identifier] = ACTIONS(SHIFT(88)),
        [sym__type_name] = ACTIONS(SHIFT(89)),
        [sym_identifier] = ACTIONS(SHIFT(90)),
    },
    [98] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [99] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(101)),
    },
    [100] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [101] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [102] = {
        [sym_identifier] = ACTIONS(SHIFT(103)),
    },
    [103] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(104)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(81)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [104] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [105] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [106] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 2)),
    },
    [107] = {
        [sym__pattern] = ACTIONS(SHIFT(108)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(78)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(78)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(78)),
        [sym_optional_pattern] = ACTIONS(SHIFT(78)),
        [sym_is_pattern] = ACTIONS(SHIFT(78)),
        [sym_as_pattern] = ACTIONS(SHIFT(78)),
        [sym__expression] = ACTIONS(SHIFT(78)),
        [sym__type_identifier] = ACTIONS(SHIFT(80)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(81)),
        [anon_sym_let] = ACTIONS(SHIFT(83)),
        [anon_sym_var] = ACTIONS(SHIFT(83)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(78)),
        [anon_sym_DOT] = ACTIONS(SHIFT(84)),
        [anon_sym_is] = ACTIONS(SHIFT(85)),
        [sym_identifier] = ACTIONS(SHIFT(86)),
    },
    [108] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(109)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(107)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(96)),
        [anon_sym_as] = ACTIONS(SHIFT(97)),
    },
    [109] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [110] = {
        [sym__type_identifier] = ACTIONS(SHIFT(111)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [sym_identifier] = ACTIONS(SHIFT(112)),
    },
    [111] = {
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [112] = {
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [113] = {
        [sym_identifier] = ACTIONS(SHIFT(114)),
    },
    [114] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(115)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(60)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [115] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [116] = {
        [sym__expression] = ACTIONS(SHIFT(117)),
        [sym_identifier] = ACTIONS(SHIFT(118)),
    },
    [117] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [118] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [119] = {
        [sym_optional_binding] = ACTIONS(SHIFT(120)),
        [sym__pattern] = ACTIONS(SHIFT(121)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(57)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(57)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(57)),
        [sym_optional_pattern] = ACTIONS(SHIFT(57)),
        [sym_is_pattern] = ACTIONS(SHIFT(57)),
        [sym_as_pattern] = ACTIONS(SHIFT(57)),
        [sym__expression] = ACTIONS(SHIFT(57)),
        [sym__type_identifier] = ACTIONS(SHIFT(58)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(60)),
        [anon_sym_let] = ACTIONS(SHIFT(61)),
        [anon_sym_var] = ACTIONS(SHIFT(61)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(57)),
        [anon_sym_DOT] = ACTIONS(SHIFT(62)),
        [anon_sym_is] = ACTIONS(SHIFT(63)),
        [sym_identifier] = ACTIONS(SHIFT(64)),
    },
    [120] = {
        [sym__code_block] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(SHIFT(125)),
        [anon_sym_COMMA] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
    },
    [121] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(122)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(74)),
        [anon_sym_as] = ACTIONS(SHIFT(75)),
    },
    [122] = {
        [sym__expression] = ACTIONS(SHIFT(123)),
        [sym_identifier] = ACTIONS(SHIFT(124)),
    },
    [123] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [124] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [125] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
    },
    [126] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(127)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(74)),
        [anon_sym_as] = ACTIONS(SHIFT(75)),
    },
    [127] = {
        [sym__expression] = ACTIONS(SHIFT(128)),
        [sym_identifier] = ACTIONS(SHIFT(118)),
    },
    [128] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_case_condition, 4)),
    },
    [129] = {
        [sym__condition] = ACTIONS(SHIFT(130)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(33)),
        [sym_availability_condition] = ACTIONS(SHIFT(33)),
        [sym_case_condition] = ACTIONS(SHIFT(33)),
        [anon_sym_case] = ACTIONS(SHIFT(36)),
        [anon_sym_let] = ACTIONS(SHIFT(37)),
        [anon_sym_var] = ACTIONS(SHIFT(37)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(38)),
    },
    [130] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(131)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(132)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [131] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 4)),
    },
    [132] = {
        [sym__condition] = ACTIONS(SHIFT(133)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(33)),
        [sym_availability_condition] = ACTIONS(SHIFT(33)),
        [sym_case_condition] = ACTIONS(SHIFT(33)),
        [anon_sym_case] = ACTIONS(SHIFT(36)),
        [anon_sym_let] = ACTIONS(SHIFT(37)),
        [anon_sym_var] = ACTIONS(SHIFT(37)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(38)),
    },
    [133] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(134)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(132)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
    },
    [134] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
    },
    [135] = {
        [sym__expression] = ACTIONS(SHIFT(136)),
        [sym_identifier] = ACTIONS(SHIFT(137)),
    },
    [136] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [137] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [138] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 2)),
    },
    [139] = {
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
    [140] = {
        [sym__statement] = ACTIONS(SHIFT(141)),
        [sym__statements] = ACTIONS(SHIFT(142)),
        [sym_for_statement] = ACTIONS(SHIFT(143)),
        [sym_for_in_statement] = ACTIONS(SHIFT(143)),
        [sym_while_statement] = ACTIONS(SHIFT(143)),
        [sym_switch_statement] = ACTIONS(SHIFT(143)),
        [sym__expression] = ACTIONS(SHIFT(143)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(144)),
        [anon_sym_for] = ACTIONS(SHIFT(145)),
        [anon_sym_while] = ACTIONS(SHIFT(146)),
        [anon_sym_switch] = ACTIONS(SHIFT(147)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(143)),
        [sym_identifier] = ACTIONS(SHIFT(148)),
    },
    [141] = {
        [sym__statement] = ACTIONS(SHIFT(141)),
        [sym_for_statement] = ACTIONS(SHIFT(143)),
        [sym_for_in_statement] = ACTIONS(SHIFT(143)),
        [sym_while_statement] = ACTIONS(SHIFT(143)),
        [sym_switch_statement] = ACTIONS(SHIFT(143)),
        [sym__expression] = ACTIONS(SHIFT(143)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(264)),
        [anon_sym_for] = ACTIONS(SHIFT(145)),
        [anon_sym_while] = ACTIONS(SHIFT(146)),
        [anon_sym_switch] = ACTIONS(SHIFT(147)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [sym__declaration] = ACTIONS(SHIFT(143)),
        [sym_identifier] = ACTIONS(SHIFT(148)),
    },
    [142] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(263)),
    },
    [143] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(262)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 1)),
    },
    [144] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 1)),
    },
    [145] = {
        [sym__for_init] = ACTIONS(SHIFT(159)),
        [sym__for_condition] = ACTIONS(SHIFT(160)),
        [sym_variable_declaration] = ACTIONS(SHIFT(161)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(162)),
        [sym__pattern] = ACTIONS(SHIFT(163)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(164)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(164)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(164)),
        [sym_optional_pattern] = ACTIONS(SHIFT(164)),
        [sym_is_pattern] = ACTIONS(SHIFT(164)),
        [sym_as_pattern] = ACTIONS(SHIFT(164)),
        [sym__expression] = ACTIONS(SHIFT(165)),
        [sym__expression_list] = ACTIONS(SHIFT(161)),
        [sym__type_identifier] = ACTIONS(SHIFT(166)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(167)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(168)),
        [anon_sym_case] = ACTIONS(SHIFT(169)),
        [anon_sym_let] = ACTIONS(SHIFT(170)),
        [anon_sym_var] = ACTIONS(SHIFT(171)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(164)),
        [anon_sym_DOT] = ACTIONS(SHIFT(172)),
        [anon_sym_is] = ACTIONS(SHIFT(173)),
        [sym_identifier] = ACTIONS(SHIFT(174)),
    },
    [146] = {
        [sym__condition_clause] = ACTIONS(SHIFT(154)),
        [sym__condition] = ACTIONS(SHIFT(32)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(33)),
        [sym_availability_condition] = ACTIONS(SHIFT(34)),
        [sym_case_condition] = ACTIONS(SHIFT(33)),
        [sym__expression] = ACTIONS(SHIFT(35)),
        [anon_sym_case] = ACTIONS(SHIFT(36)),
        [anon_sym_let] = ACTIONS(SHIFT(37)),
        [anon_sym_var] = ACTIONS(SHIFT(37)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(38)),
        [sym_identifier] = ACTIONS(SHIFT(39)),
    },
    [147] = {
        [sym__expression] = ACTIONS(SHIFT(149)),
        [sym_identifier] = ACTIONS(SHIFT(11)),
    },
    [148] = {
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
    [149] = {
        [anon_sym_LBRACE] = ACTIONS(SHIFT(150)),
    },
    [150] = {
        [sym_case_statement] = ACTIONS(SHIFT(13)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(151)),
        [anon_sym_case] = ACTIONS(SHIFT(15)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(152)),
        [anon_sym_default] = ACTIONS(SHIFT(17)),
    },
    [151] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(153)),
    },
    [152] = {
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
    [153] = {
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
    [154] = {
        [sym__code_block] = ACTIONS(SHIFT(155)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(156)),
    },
    [155] = {
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
    [156] = {
        [sym__statement] = ACTIONS(SHIFT(141)),
        [sym__statements] = ACTIONS(SHIFT(157)),
        [sym_for_statement] = ACTIONS(SHIFT(143)),
        [sym_for_in_statement] = ACTIONS(SHIFT(143)),
        [sym_while_statement] = ACTIONS(SHIFT(143)),
        [sym_switch_statement] = ACTIONS(SHIFT(143)),
        [sym__expression] = ACTIONS(SHIFT(143)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(144)),
        [anon_sym_for] = ACTIONS(SHIFT(145)),
        [anon_sym_while] = ACTIONS(SHIFT(146)),
        [anon_sym_switch] = ACTIONS(SHIFT(147)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(143)),
        [sym_identifier] = ACTIONS(SHIFT(148)),
    },
    [157] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(158)),
    },
    [158] = {
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
    [159] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(258)),
    },
    [160] = {
        [sym__code_block] = ACTIONS(SHIFT(257)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(156)),
    },
    [161] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__for_init, 1)),
    },
    [162] = {
        [sym__variable_name] = ACTIONS(SHIFT(243)),
        [sym_identifier] = ACTIONS(SHIFT(244)),
    },
    [163] = {
        [sym__type_annotation] = ACTIONS(SHIFT(239)),
        [anon_sym_in] = ACTIONS(SHIFT(240)),
        [anon_sym_COLON] = ACTIONS(SHIFT(195)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(189)),
        [anon_sym_as] = ACTIONS(SHIFT(190)),
    },
    [164] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [165] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(220)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(221)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [166] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(236)),
    },
    [167] = {
        [sym__expression] = ACTIONS(SHIFT(231)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(232)),
        [sym_identifier] = ACTIONS(SHIFT(215)),
    },
    [168] = {
        [sym__for_init] = ACTIONS(SHIFT(207)),
        [sym__for_condition] = ACTIONS(SHIFT(208)),
        [sym_variable_declaration] = ACTIONS(SHIFT(161)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(162)),
        [sym__pattern] = ACTIONS(SHIFT(77)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(78)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(78)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(184)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(78)),
        [sym_optional_pattern] = ACTIONS(SHIFT(78)),
        [sym_is_pattern] = ACTIONS(SHIFT(78)),
        [sym_as_pattern] = ACTIONS(SHIFT(78)),
        [sym__expression] = ACTIONS(SHIFT(209)),
        [sym__expression_list] = ACTIONS(SHIFT(161)),
        [sym__type_identifier] = ACTIONS(SHIFT(80)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(210)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(81)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(185)),
        [anon_sym_let] = ACTIONS(SHIFT(83)),
        [anon_sym_var] = ACTIONS(SHIFT(211)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(78)),
        [anon_sym_DOT] = ACTIONS(SHIFT(84)),
        [anon_sym_is] = ACTIONS(SHIFT(85)),
        [sym_identifier] = ACTIONS(SHIFT(212)),
    },
    [169] = {
        [sym__pattern] = ACTIONS(SHIFT(192)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(164)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(164)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(164)),
        [sym_optional_pattern] = ACTIONS(SHIFT(164)),
        [sym_is_pattern] = ACTIONS(SHIFT(164)),
        [sym_as_pattern] = ACTIONS(SHIFT(164)),
        [sym__expression] = ACTIONS(SHIFT(164)),
        [sym__type_identifier] = ACTIONS(SHIFT(166)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(183)),
        [anon_sym_let] = ACTIONS(SHIFT(170)),
        [anon_sym_var] = ACTIONS(SHIFT(170)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(164)),
        [anon_sym_DOT] = ACTIONS(SHIFT(172)),
        [anon_sym_is] = ACTIONS(SHIFT(173)),
        [sym_identifier] = ACTIONS(SHIFT(188)),
    },
    [170] = {
        [sym__pattern] = ACTIONS(SHIFT(187)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(164)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(164)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(164)),
        [sym_optional_pattern] = ACTIONS(SHIFT(164)),
        [sym_is_pattern] = ACTIONS(SHIFT(164)),
        [sym_as_pattern] = ACTIONS(SHIFT(164)),
        [sym__expression] = ACTIONS(SHIFT(164)),
        [sym__type_identifier] = ACTIONS(SHIFT(166)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(183)),
        [anon_sym_let] = ACTIONS(SHIFT(170)),
        [anon_sym_var] = ACTIONS(SHIFT(170)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(164)),
        [anon_sym_DOT] = ACTIONS(SHIFT(172)),
        [anon_sym_is] = ACTIONS(SHIFT(173)),
        [sym_identifier] = ACTIONS(SHIFT(188)),
    },
    [171] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(187)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(164)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(164)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(164)),
        [sym_optional_pattern] = ACTIONS(SHIFT(164)),
        [sym_is_pattern] = ACTIONS(SHIFT(164)),
        [sym_as_pattern] = ACTIONS(SHIFT(164)),
        [sym__expression] = ACTIONS(SHIFT(164)),
        [sym__type_identifier] = ACTIONS(SHIFT(166)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(183)),
        [anon_sym_let] = ACTIONS(SHIFT(170)),
        [anon_sym_var] = ACTIONS(SHIFT(170)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(164)),
        [anon_sym_DOT] = ACTIONS(SHIFT(172)),
        [anon_sym_is] = ACTIONS(SHIFT(173)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(188)),
    },
    [172] = {
        [sym_identifier] = ACTIONS(SHIFT(181)),
    },
    [173] = {
        [sym_type] = ACTIONS(SHIFT(175)),
        [sym__type_identifier] = ACTIONS(SHIFT(176)),
        [sym__type_name] = ACTIONS(SHIFT(177)),
        [sym_identifier] = ACTIONS(SHIFT(178)),
    },
    [174] = {
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
    [175] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [176] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [177] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(179)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [178] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [179] = {
        [sym__type_identifier] = ACTIONS(SHIFT(180)),
        [sym__type_name] = ACTIONS(SHIFT(177)),
        [sym_identifier] = ACTIONS(SHIFT(178)),
    },
    [180] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [181] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(182)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(183)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [182] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [183] = {
        [sym__pattern] = ACTIONS(SHIFT(77)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(78)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(78)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(184)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(78)),
        [sym_optional_pattern] = ACTIONS(SHIFT(78)),
        [sym_is_pattern] = ACTIONS(SHIFT(78)),
        [sym_as_pattern] = ACTIONS(SHIFT(78)),
        [sym__expression] = ACTIONS(SHIFT(78)),
        [sym__type_identifier] = ACTIONS(SHIFT(80)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(81)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(185)),
        [anon_sym_let] = ACTIONS(SHIFT(83)),
        [anon_sym_var] = ACTIONS(SHIFT(83)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(78)),
        [anon_sym_DOT] = ACTIONS(SHIFT(84)),
        [anon_sym_is] = ACTIONS(SHIFT(85)),
        [sym_identifier] = ACTIONS(SHIFT(86)),
    },
    [184] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(186)),
    },
    [185] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [186] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [187] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(189)),
        [anon_sym_as] = ACTIONS(SHIFT(190)),
    },
    [188] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [189] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [190] = {
        [sym_type] = ACTIONS(SHIFT(191)),
        [sym__type_identifier] = ACTIONS(SHIFT(176)),
        [sym__type_name] = ACTIONS(SHIFT(177)),
        [sym_identifier] = ACTIONS(SHIFT(178)),
    },
    [191] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [192] = {
        [sym__type_annotation] = ACTIONS(SHIFT(193)),
        [anon_sym_in] = ACTIONS(SHIFT(194)),
        [anon_sym_COLON] = ACTIONS(SHIFT(195)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(189)),
        [anon_sym_as] = ACTIONS(SHIFT(190)),
    },
    [193] = {
        [anon_sym_in] = ACTIONS(SHIFT(204)),
    },
    [194] = {
        [sym__expression] = ACTIONS(SHIFT(202)),
        [sym_identifier] = ACTIONS(SHIFT(137)),
    },
    [195] = {
        [sym_type] = ACTIONS(SHIFT(196)),
        [sym__type_identifier] = ACTIONS(SHIFT(197)),
        [sym__type_name] = ACTIONS(SHIFT(198)),
        [sym_identifier] = ACTIONS(SHIFT(199)),
    },
    [196] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [197] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [198] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(200)),
    },
    [199] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [200] = {
        [sym__type_identifier] = ACTIONS(SHIFT(201)),
        [sym__type_name] = ACTIONS(SHIFT(198)),
        [sym_identifier] = ACTIONS(SHIFT(199)),
    },
    [201] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [202] = {
        [sym__code_block] = ACTIONS(SHIFT(203)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(156)),
    },
    [203] = {
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
    [204] = {
        [sym__expression] = ACTIONS(SHIFT(205)),
        [sym_identifier] = ACTIONS(SHIFT(137)),
    },
    [205] = {
        [sym__code_block] = ACTIONS(SHIFT(206)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(156)),
    },
    [206] = {
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
    [207] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(227)),
    },
    [208] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(225)),
    },
    [209] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(220)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1), SHIFT(221)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [210] = {
        [sym__expression] = ACTIONS(SHIFT(213)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(214)),
        [sym_identifier] = ACTIONS(SHIFT(215)),
    },
    [211] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(95)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(78)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(78)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(78)),
        [sym_optional_pattern] = ACTIONS(SHIFT(78)),
        [sym_is_pattern] = ACTIONS(SHIFT(78)),
        [sym_as_pattern] = ACTIONS(SHIFT(78)),
        [sym__expression] = ACTIONS(SHIFT(78)),
        [sym__type_identifier] = ACTIONS(SHIFT(80)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(81)),
        [anon_sym_let] = ACTIONS(SHIFT(83)),
        [anon_sym_var] = ACTIONS(SHIFT(83)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(78)),
        [anon_sym_DOT] = ACTIONS(SHIFT(84)),
        [anon_sym_is] = ACTIONS(SHIFT(85)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(86)),
    },
    [212] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [213] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(218)),
    },
    [214] = {
        [sym__expression] = ACTIONS(SHIFT(216)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(217)),
    },
    [215] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [216] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [217] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [218] = {
        [sym__expression] = ACTIONS(SHIFT(219)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(217)),
    },
    [219] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [220] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 2)),
    },
    [221] = {
        [sym__expression] = ACTIONS(SHIFT(222)),
        [sym_identifier] = ACTIONS(SHIFT(223)),
    },
    [222] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(224)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(221)),
    },
    [223] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [224] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 3)),
    },
    [225] = {
        [sym__code_block] = ACTIONS(SHIFT(226)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(156)),
    },
    [226] = {
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
    [227] = {
        [sym__expression] = ACTIONS(SHIFT(228)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(218)),
        [sym_identifier] = ACTIONS(SHIFT(215)),
    },
    [228] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(229)),
    },
    [229] = {
        [sym__expression] = ACTIONS(SHIFT(230)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(217)),
    },
    [230] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [231] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(234)),
    },
    [232] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym__expression] = ACTIONS(SHIFT(233)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(137)),
    },
    [233] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [234] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym__expression] = ACTIONS(SHIFT(235)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(137)),
    },
    [235] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [236] = {
        [sym_identifier] = ACTIONS(SHIFT(237)),
    },
    [237] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(238)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(183)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [238] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [239] = {
        [anon_sym_in] = ACTIONS(SHIFT(194)),
    },
    [240] = {
        [sym__expression] = ACTIONS(SHIFT(241)),
        [sym_identifier] = ACTIONS(SHIFT(137)),
    },
    [241] = {
        [sym__code_block] = ACTIONS(SHIFT(242)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(156)),
    },
    [242] = {
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
    [243] = {
        [sym__type_annotation] = ACTIONS(SHIFT(245)),
        [anon_sym_COLON] = ACTIONS(SHIFT(246)),
    },
    [244] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__variable_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__variable_name, 1)),
    },
    [245] = {
        [sym__code_block] = ACTIONS(SHIFT(253)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(254)),
    },
    [246] = {
        [sym_type] = ACTIONS(SHIFT(247)),
        [sym__type_identifier] = ACTIONS(SHIFT(248)),
        [sym__type_name] = ACTIONS(SHIFT(249)),
        [sym_identifier] = ACTIONS(SHIFT(250)),
    },
    [247] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [248] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [249] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(251)),
    },
    [250] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [251] = {
        [sym__type_identifier] = ACTIONS(SHIFT(252)),
        [sym__type_name] = ACTIONS(SHIFT(249)),
        [sym_identifier] = ACTIONS(SHIFT(250)),
    },
    [252] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [253] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_variable_declaration, 4)),
    },
    [254] = {
        [sym__statement] = ACTIONS(SHIFT(141)),
        [sym__statements] = ACTIONS(SHIFT(255)),
        [sym_for_statement] = ACTIONS(SHIFT(143)),
        [sym_for_in_statement] = ACTIONS(SHIFT(143)),
        [sym_while_statement] = ACTIONS(SHIFT(143)),
        [sym_switch_statement] = ACTIONS(SHIFT(143)),
        [sym__expression] = ACTIONS(SHIFT(143)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(144)),
        [anon_sym_for] = ACTIONS(SHIFT(145)),
        [anon_sym_while] = ACTIONS(SHIFT(146)),
        [anon_sym_switch] = ACTIONS(SHIFT(147)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(143)),
        [sym_identifier] = ACTIONS(SHIFT(148)),
    },
    [255] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(256)),
    },
    [256] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [257] = {
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
    [258] = {
        [sym__expression] = ACTIONS(SHIFT(259)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(234)),
        [sym_identifier] = ACTIONS(SHIFT(215)),
    },
    [259] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(260)),
    },
    [260] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym__expression] = ACTIONS(SHIFT(261)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(137)),
    },
    [261] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [262] = {
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
    [263] = {
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
    [264] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
    },
    [265] = {
        [sym__code_block] = ACTIONS(SHIFT(284)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(140)),
    },
    [266] = {
        [sym__type_annotation] = ACTIONS(SHIFT(280)),
        [anon_sym_in] = ACTIONS(SHIFT(281)),
        [anon_sym_COLON] = ACTIONS(SHIFT(195)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(189)),
        [anon_sym_as] = ACTIONS(SHIFT(190)),
    },
    [267] = {
        [sym__for_init] = ACTIONS(SHIFT(207)),
        [sym__for_condition] = ACTIONS(SHIFT(277)),
        [sym_variable_declaration] = ACTIONS(SHIFT(161)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(162)),
        [sym__pattern] = ACTIONS(SHIFT(77)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(78)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(78)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(184)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(78)),
        [sym_optional_pattern] = ACTIONS(SHIFT(78)),
        [sym_is_pattern] = ACTIONS(SHIFT(78)),
        [sym_as_pattern] = ACTIONS(SHIFT(78)),
        [sym__expression] = ACTIONS(SHIFT(209)),
        [sym__expression_list] = ACTIONS(SHIFT(161)),
        [sym__type_identifier] = ACTIONS(SHIFT(80)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(210)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(81)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(185)),
        [anon_sym_let] = ACTIONS(SHIFT(83)),
        [anon_sym_var] = ACTIONS(SHIFT(211)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(78)),
        [anon_sym_DOT] = ACTIONS(SHIFT(84)),
        [anon_sym_is] = ACTIONS(SHIFT(85)),
        [sym_identifier] = ACTIONS(SHIFT(212)),
    },
    [268] = {
        [sym__pattern] = ACTIONS(SHIFT(269)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(164)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(164)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(164)),
        [sym_optional_pattern] = ACTIONS(SHIFT(164)),
        [sym_is_pattern] = ACTIONS(SHIFT(164)),
        [sym_as_pattern] = ACTIONS(SHIFT(164)),
        [sym__expression] = ACTIONS(SHIFT(164)),
        [sym__type_identifier] = ACTIONS(SHIFT(166)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(183)),
        [anon_sym_let] = ACTIONS(SHIFT(170)),
        [anon_sym_var] = ACTIONS(SHIFT(170)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(164)),
        [anon_sym_DOT] = ACTIONS(SHIFT(172)),
        [anon_sym_is] = ACTIONS(SHIFT(173)),
        [sym_identifier] = ACTIONS(SHIFT(188)),
    },
    [269] = {
        [sym__type_annotation] = ACTIONS(SHIFT(270)),
        [anon_sym_in] = ACTIONS(SHIFT(271)),
        [anon_sym_COLON] = ACTIONS(SHIFT(195)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(189)),
        [anon_sym_as] = ACTIONS(SHIFT(190)),
    },
    [270] = {
        [anon_sym_in] = ACTIONS(SHIFT(274)),
    },
    [271] = {
        [sym__expression] = ACTIONS(SHIFT(272)),
        [sym_identifier] = ACTIONS(SHIFT(137)),
    },
    [272] = {
        [sym__code_block] = ACTIONS(SHIFT(273)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(140)),
    },
    [273] = {
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
    [274] = {
        [sym__expression] = ACTIONS(SHIFT(275)),
        [sym_identifier] = ACTIONS(SHIFT(137)),
    },
    [275] = {
        [sym__code_block] = ACTIONS(SHIFT(276)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(140)),
    },
    [276] = {
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
    [277] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(278)),
    },
    [278] = {
        [sym__code_block] = ACTIONS(SHIFT(279)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(140)),
    },
    [279] = {
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
    [280] = {
        [anon_sym_in] = ACTIONS(SHIFT(271)),
    },
    [281] = {
        [sym__expression] = ACTIONS(SHIFT(282)),
        [sym_identifier] = ACTIONS(SHIFT(137)),
    },
    [282] = {
        [sym__code_block] = ACTIONS(SHIFT(283)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(140)),
    },
    [283] = {
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
    [284] = {
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
    [285] = {
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
    [286] = {
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
        [anon_sym_case] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
    },
    [287] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(313)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(314)),
        [anon_sym_COLON] = ACTIONS(SHIFT(315)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(304)),
        [anon_sym_as] = ACTIONS(SHIFT(305)),
    },
    [288] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [289] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(310)),
    },
    [290] = {
        [sym__pattern] = ACTIONS(SHIFT(77)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(78)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(78)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(307)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(78)),
        [sym_optional_pattern] = ACTIONS(SHIFT(78)),
        [sym_is_pattern] = ACTIONS(SHIFT(78)),
        [sym_as_pattern] = ACTIONS(SHIFT(78)),
        [sym__expression] = ACTIONS(SHIFT(78)),
        [sym__type_identifier] = ACTIONS(SHIFT(80)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(81)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(308)),
        [anon_sym_let] = ACTIONS(SHIFT(83)),
        [anon_sym_var] = ACTIONS(SHIFT(83)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(78)),
        [anon_sym_DOT] = ACTIONS(SHIFT(84)),
        [anon_sym_is] = ACTIONS(SHIFT(85)),
        [sym_identifier] = ACTIONS(SHIFT(86)),
    },
    [291] = {
        [sym__pattern] = ACTIONS(SHIFT(303)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(288)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(288)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(288)),
        [sym_optional_pattern] = ACTIONS(SHIFT(288)),
        [sym_is_pattern] = ACTIONS(SHIFT(288)),
        [sym_as_pattern] = ACTIONS(SHIFT(288)),
        [sym__expression] = ACTIONS(SHIFT(288)),
        [sym__type_identifier] = ACTIONS(SHIFT(289)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(290)),
        [anon_sym_let] = ACTIONS(SHIFT(291)),
        [anon_sym_var] = ACTIONS(SHIFT(291)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(288)),
        [anon_sym_DOT] = ACTIONS(SHIFT(292)),
        [anon_sym_is] = ACTIONS(SHIFT(293)),
        [sym_identifier] = ACTIONS(SHIFT(294)),
    },
    [292] = {
        [sym_identifier] = ACTIONS(SHIFT(301)),
    },
    [293] = {
        [sym_type] = ACTIONS(SHIFT(295)),
        [sym__type_identifier] = ACTIONS(SHIFT(296)),
        [sym__type_name] = ACTIONS(SHIFT(297)),
        [sym_identifier] = ACTIONS(SHIFT(298)),
    },
    [294] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [295] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [296] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [297] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(299)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [298] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [299] = {
        [sym__type_identifier] = ACTIONS(SHIFT(300)),
        [sym__type_name] = ACTIONS(SHIFT(297)),
        [sym_identifier] = ACTIONS(SHIFT(298)),
    },
    [300] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [301] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(302)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(290)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [302] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [303] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(304)),
        [anon_sym_as] = ACTIONS(SHIFT(305)),
    },
    [304] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [305] = {
        [sym_type] = ACTIONS(SHIFT(306)),
        [sym__type_identifier] = ACTIONS(SHIFT(296)),
        [sym__type_name] = ACTIONS(SHIFT(297)),
        [sym_identifier] = ACTIONS(SHIFT(298)),
    },
    [306] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [307] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(309)),
    },
    [308] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [309] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [310] = {
        [sym_identifier] = ACTIONS(SHIFT(311)),
    },
    [311] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(312)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(290)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [312] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [313] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(319)),
    },
    [314] = {
        [sym__pattern] = ACTIONS(SHIFT(317)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(288)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(288)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(288)),
        [sym_optional_pattern] = ACTIONS(SHIFT(288)),
        [sym_is_pattern] = ACTIONS(SHIFT(288)),
        [sym_as_pattern] = ACTIONS(SHIFT(288)),
        [sym__expression] = ACTIONS(SHIFT(288)),
        [sym__type_identifier] = ACTIONS(SHIFT(289)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(290)),
        [anon_sym_let] = ACTIONS(SHIFT(291)),
        [anon_sym_var] = ACTIONS(SHIFT(291)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(288)),
        [anon_sym_DOT] = ACTIONS(SHIFT(292)),
        [anon_sym_is] = ACTIONS(SHIFT(293)),
        [sym_identifier] = ACTIONS(SHIFT(294)),
    },
    [315] = {
        [sym__statement] = ACTIONS(SHIFT(19)),
        [sym_for_statement] = ACTIONS(SHIFT(20)),
        [sym_for_in_statement] = ACTIONS(SHIFT(20)),
        [sym_while_statement] = ACTIONS(SHIFT(20)),
        [sym_switch_statement] = ACTIONS(SHIFT(20)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [sym__expression] = ACTIONS(SHIFT(20)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(316)),
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
    [316] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 4)),
    },
    [317] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(318)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(314)),
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(304)),
        [anon_sym_as] = ACTIONS(SHIFT(305)),
    },
    [318] = {
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [319] = {
        [sym__statement] = ACTIONS(SHIFT(19)),
        [sym_for_statement] = ACTIONS(SHIFT(20)),
        [sym_for_in_statement] = ACTIONS(SHIFT(20)),
        [sym_while_statement] = ACTIONS(SHIFT(20)),
        [sym_switch_statement] = ACTIONS(SHIFT(20)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [sym__expression] = ACTIONS(SHIFT(20)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(320)),
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
    [320] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 5)),
    },
    [321] = {
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
    [322] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 2)),
    },
    [323] = {
        [sym__code_block] = ACTIONS(SHIFT(324)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(325)),
    },
    [324] = {
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
    [325] = {
        [sym__statement] = ACTIONS(SHIFT(141)),
        [sym__statements] = ACTIONS(SHIFT(326)),
        [sym_for_statement] = ACTIONS(SHIFT(143)),
        [sym_for_in_statement] = ACTIONS(SHIFT(143)),
        [sym_while_statement] = ACTIONS(SHIFT(143)),
        [sym_switch_statement] = ACTIONS(SHIFT(143)),
        [sym__expression] = ACTIONS(SHIFT(143)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(144)),
        [anon_sym_for] = ACTIONS(SHIFT(145)),
        [anon_sym_while] = ACTIONS(SHIFT(146)),
        [anon_sym_switch] = ACTIONS(SHIFT(147)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(143)),
        [sym_identifier] = ACTIONS(SHIFT(148)),
    },
    [326] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(327)),
    },
    [327] = {
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
    [328] = {
        [sym__code_block] = ACTIONS(SHIFT(347)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(325)),
    },
    [329] = {
        [sym__type_annotation] = ACTIONS(SHIFT(343)),
        [anon_sym_in] = ACTIONS(SHIFT(344)),
        [anon_sym_COLON] = ACTIONS(SHIFT(195)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(189)),
        [anon_sym_as] = ACTIONS(SHIFT(190)),
    },
    [330] = {
        [sym__for_init] = ACTIONS(SHIFT(207)),
        [sym__for_condition] = ACTIONS(SHIFT(340)),
        [sym_variable_declaration] = ACTIONS(SHIFT(161)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(162)),
        [sym__pattern] = ACTIONS(SHIFT(77)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(78)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(78)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(184)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(78)),
        [sym_optional_pattern] = ACTIONS(SHIFT(78)),
        [sym_is_pattern] = ACTIONS(SHIFT(78)),
        [sym_as_pattern] = ACTIONS(SHIFT(78)),
        [sym__expression] = ACTIONS(SHIFT(209)),
        [sym__expression_list] = ACTIONS(SHIFT(161)),
        [sym__type_identifier] = ACTIONS(SHIFT(80)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(210)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(81)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(185)),
        [anon_sym_let] = ACTIONS(SHIFT(83)),
        [anon_sym_var] = ACTIONS(SHIFT(211)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(78)),
        [anon_sym_DOT] = ACTIONS(SHIFT(84)),
        [anon_sym_is] = ACTIONS(SHIFT(85)),
        [sym_identifier] = ACTIONS(SHIFT(212)),
    },
    [331] = {
        [sym__pattern] = ACTIONS(SHIFT(332)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(164)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(164)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(164)),
        [sym_optional_pattern] = ACTIONS(SHIFT(164)),
        [sym_is_pattern] = ACTIONS(SHIFT(164)),
        [sym_as_pattern] = ACTIONS(SHIFT(164)),
        [sym__expression] = ACTIONS(SHIFT(164)),
        [sym__type_identifier] = ACTIONS(SHIFT(166)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(183)),
        [anon_sym_let] = ACTIONS(SHIFT(170)),
        [anon_sym_var] = ACTIONS(SHIFT(170)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(164)),
        [anon_sym_DOT] = ACTIONS(SHIFT(172)),
        [anon_sym_is] = ACTIONS(SHIFT(173)),
        [sym_identifier] = ACTIONS(SHIFT(188)),
    },
    [332] = {
        [sym__type_annotation] = ACTIONS(SHIFT(333)),
        [anon_sym_in] = ACTIONS(SHIFT(334)),
        [anon_sym_COLON] = ACTIONS(SHIFT(195)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(189)),
        [anon_sym_as] = ACTIONS(SHIFT(190)),
    },
    [333] = {
        [anon_sym_in] = ACTIONS(SHIFT(337)),
    },
    [334] = {
        [sym__expression] = ACTIONS(SHIFT(335)),
        [sym_identifier] = ACTIONS(SHIFT(137)),
    },
    [335] = {
        [sym__code_block] = ACTIONS(SHIFT(336)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(325)),
    },
    [336] = {
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
    [337] = {
        [sym__expression] = ACTIONS(SHIFT(338)),
        [sym_identifier] = ACTIONS(SHIFT(137)),
    },
    [338] = {
        [sym__code_block] = ACTIONS(SHIFT(339)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(325)),
    },
    [339] = {
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
    [340] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(341)),
    },
    [341] = {
        [sym__code_block] = ACTIONS(SHIFT(342)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(325)),
    },
    [342] = {
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
    [343] = {
        [anon_sym_in] = ACTIONS(SHIFT(334)),
    },
    [344] = {
        [sym__expression] = ACTIONS(SHIFT(345)),
        [sym_identifier] = ACTIONS(SHIFT(137)),
    },
    [345] = {
        [sym__code_block] = ACTIONS(SHIFT(346)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(325)),
    },
    [346] = {
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
    [347] = {
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
    [348] = {
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
    [349] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
    },
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_swift);
