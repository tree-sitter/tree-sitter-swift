#include "tree_sitter/parser.h"

#define STATE_COUNT 365
#define SYMBOL_COUNT 77

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
                ('j' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(16);
            if (lookahead == 's')
                ADVANCE(22);
            if (lookahead == 'w')
                ADVANCE(28);
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
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(17);
            ACCEPT_TOKEN(sym_identifier);
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
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
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
            ACCEPT_TOKEN(anon_sym_repeat);
        case 22:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'w')
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
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(25);
            ACCEPT_TOKEN(sym_identifier);
        case 25:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(26);
            ACCEPT_TOKEN(sym_identifier);
        case 26:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(27);
            ACCEPT_TOKEN(sym_identifier);
        case 27:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_switch);
        case 28:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
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
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
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
            ACCEPT_TOKEN(anon_sym_while);
        case 33:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(33);
            LEX_ERROR();
        case 34:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(34);
            if (lookahead == ';')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(16);
            if (lookahead == 's')
                ADVANCE(22);
            if (lookahead == 'w')
                ADVANCE(28);
            LEX_ERROR();
        case 35:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 36:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(36);
            if (lookahead == '(')
                ADVANCE(37);
            if (lookahead == '.')
                ADVANCE(38);
            if (lookahead == ';')
                ADVANCE(35);
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
                ADVANCE(39);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'c')
                ADVANCE(40);
            if (lookahead == 'i')
                ADVANCE(44);
            if (lookahead == 'l')
                ADVANCE(46);
            if (lookahead == 'v')
                ADVANCE(49);
            LEX_ERROR();
        case 37:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 38:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 39:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(sym_wildcard_pattern);
        case 40:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(41);
            ACCEPT_TOKEN(sym_identifier);
        case 41:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(42);
            ACCEPT_TOKEN(sym_identifier);
        case 42:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(43);
            ACCEPT_TOKEN(sym_identifier);
        case 43:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_case);
        case 44:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(45);
            ACCEPT_TOKEN(sym_identifier);
        case 45:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_is);
        case 46:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(47);
            ACCEPT_TOKEN(sym_identifier);
        case 47:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(48);
            ACCEPT_TOKEN(sym_identifier);
        case 48:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_let);
        case 49:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(50);
            ACCEPT_TOKEN(sym_identifier);
        case 50:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'r')
                ADVANCE(51);
            ACCEPT_TOKEN(sym_identifier);
        case 51:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_var);
        case 52:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(52);
            if (lookahead == '#')
                ADVANCE(53);
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
                ADVANCE(40);
            if (lookahead == 'l')
                ADVANCE(46);
            if (lookahead == 'v')
                ADVANCE(49);
            LEX_ERROR();
        case 53:
            if (lookahead == 'a')
                ADVANCE(54);
            LEX_ERROR();
        case 54:
            if (lookahead == 'v')
                ADVANCE(55);
            LEX_ERROR();
        case 55:
            if (lookahead == 'a')
                ADVANCE(56);
            LEX_ERROR();
        case 56:
            if (lookahead == 'i')
                ADVANCE(57);
            LEX_ERROR();
        case 57:
            if (lookahead == 'l')
                ADVANCE(58);
            LEX_ERROR();
        case 58:
            if (lookahead == 'a')
                ADVANCE(59);
            LEX_ERROR();
        case 59:
            if (lookahead == 'b')
                ADVANCE(60);
            LEX_ERROR();
        case 60:
            if (lookahead == 'l')
                ADVANCE(61);
            LEX_ERROR();
        case 61:
            if (lookahead == 'e')
                ADVANCE(62);
            LEX_ERROR();
        case 62:
            ACCEPT_TOKEN(anon_sym_POUNDavailable);
        case 63:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(63);
            if (lookahead == '{')
                ADVANCE(64);
            LEX_ERROR();
        case 64:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 65:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(65);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 66:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(66);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(71);
            if (lookahead == '}')
                ADVANCE(78);
            LEX_ERROR();
        case 67:
            if (lookahead == 'a')
                ADVANCE(68);
            LEX_ERROR();
        case 68:
            if (lookahead == 's')
                ADVANCE(69);
            LEX_ERROR();
        case 69:
            if (lookahead == 'e')
                ADVANCE(70);
            LEX_ERROR();
        case 70:
            ACCEPT_TOKEN(anon_sym_case);
        case 71:
            if (lookahead == 'e')
                ADVANCE(72);
            LEX_ERROR();
        case 72:
            if (lookahead == 'f')
                ADVANCE(73);
            LEX_ERROR();
        case 73:
            if (lookahead == 'a')
                ADVANCE(74);
            LEX_ERROR();
        case 74:
            if (lookahead == 'u')
                ADVANCE(75);
            LEX_ERROR();
        case 75:
            if (lookahead == 'l')
                ADVANCE(76);
            LEX_ERROR();
        case 76:
            if (lookahead == 't')
                ADVANCE(77);
            LEX_ERROR();
        case 77:
            ACCEPT_TOKEN(anon_sym_default);
        case 78:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 79:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(79);
            if (lookahead == '}')
                ADVANCE(78);
            LEX_ERROR();
        case 80:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(80);
            if (lookahead == '(')
                ADVANCE(37);
            if (lookahead == '.')
                ADVANCE(38);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(39);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(44);
            if (lookahead == 'l')
                ADVANCE(46);
            if (lookahead == 'v')
                ADVANCE(49);
            LEX_ERROR();
        case 81:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(81);
            if (lookahead == ':')
                ADVANCE(82);
            LEX_ERROR();
        case 82:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 83:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(83);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'c')
                ADVANCE(40);
            if (lookahead == 'd')
                ADVANCE(84);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(16);
            if (lookahead == 's')
                ADVANCE(22);
            if (lookahead == 'w')
                ADVANCE(28);
            if (lookahead == '}')
                ADVANCE(78);
            LEX_ERROR();
        case 84:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(85);
            ACCEPT_TOKEN(sym_identifier);
        case 85:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'f')
                ADVANCE(86);
            ACCEPT_TOKEN(sym_identifier);
        case 86:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(87);
            ACCEPT_TOKEN(sym_identifier);
        case 87:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'u')
                ADVANCE(88);
            ACCEPT_TOKEN(sym_identifier);
        case 88:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(89);
            ACCEPT_TOKEN(sym_identifier);
        case 89:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(90);
            ACCEPT_TOKEN(sym_identifier);
        case 90:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_default);
        case 91:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(91);
            if (lookahead == ';')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'c')
                ADVANCE(40);
            if (lookahead == 'd')
                ADVANCE(84);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(16);
            if (lookahead == 's')
                ADVANCE(22);
            if (lookahead == 'w')
                ADVANCE(28);
            if (lookahead == '}')
                ADVANCE(78);
            LEX_ERROR();
        case 92:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(92);
            if (lookahead == 'w')
                ADVANCE(93);
            LEX_ERROR();
        case 93:
            if (lookahead == 'h')
                ADVANCE(94);
            LEX_ERROR();
        case 94:
            if (lookahead == 'i')
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
            ACCEPT_TOKEN(anon_sym_while);
        case 98:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(98);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(16);
            if (lookahead == 's')
                ADVANCE(22);
            if (lookahead == 'w')
                ADVANCE(28);
            if (lookahead == '}')
                ADVANCE(78);
            LEX_ERROR();
        case 99:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(99);
            if (lookahead == ';')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(16);
            if (lookahead == 's')
                ADVANCE(22);
            if (lookahead == 'w')
                ADVANCE(28);
            if (lookahead == '}')
                ADVANCE(78);
            LEX_ERROR();
        case 100:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(100);
            if (lookahead == ',')
                ADVANCE(101);
            if (lookahead == '{')
                ADVANCE(64);
            LEX_ERROR();
        case 101:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 102:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(102);
            if (lookahead == '(')
                ADVANCE(37);
            LEX_ERROR();
        case 103:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(103);
            if (lookahead == '=')
                ADVANCE(104);
            if (lookahead == '?')
                ADVANCE(105);
            if (lookahead == 'a')
                ADVANCE(106);
            LEX_ERROR();
        case 104:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 105:
            ACCEPT_TOKEN(anon_sym_QMARK);
        case 106:
            if (lookahead == 's')
                ADVANCE(107);
            LEX_ERROR();
        case 107:
            ACCEPT_TOKEN(anon_sym_as);
        case 108:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(108);
            if (lookahead == '.')
                ADVANCE(38);
            LEX_ERROR();
        case 109:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(109);
            if (lookahead == '(')
                ADVANCE(37);
            if (lookahead == ')')
                ADVANCE(110);
            if (lookahead == '.')
                ADVANCE(38);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(39);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(44);
            if (lookahead == 'l')
                ADVANCE(46);
            if (lookahead == 'v')
                ADVANCE(49);
            LEX_ERROR();
        case 110:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 111:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(111);
            if (lookahead == '.')
                ADVANCE(38);
            if (lookahead == '=')
                ADVANCE(104);
            if (lookahead == '?')
                ADVANCE(105);
            if (lookahead == 'a')
                ADVANCE(106);
            LEX_ERROR();
        case 112:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(112);
            if (lookahead == '(')
                ADVANCE(37);
            if (lookahead == '=')
                ADVANCE(104);
            if (lookahead == '?')
                ADVANCE(105);
            if (lookahead == 'a')
                ADVANCE(106);
            LEX_ERROR();
        case 113:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(113);
            if (lookahead == ')')
                ADVANCE(110);
            if (lookahead == ',')
                ADVANCE(101);
            if (lookahead == '?')
                ADVANCE(105);
            if (lookahead == 'a')
                ADVANCE(106);
            LEX_ERROR();
        case 114:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(114);
            if (lookahead == ')')
                ADVANCE(110);
            LEX_ERROR();
        case 115:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(115);
            if (lookahead == ')')
                ADVANCE(110);
            if (lookahead == ',')
                ADVANCE(101);
            if (lookahead == '.')
                ADVANCE(38);
            if (lookahead == '?')
                ADVANCE(105);
            if (lookahead == 'a')
                ADVANCE(106);
            LEX_ERROR();
        case 116:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(116);
            if (lookahead == '(')
                ADVANCE(37);
            if (lookahead == ')')
                ADVANCE(110);
            if (lookahead == ',')
                ADVANCE(101);
            if (lookahead == '?')
                ADVANCE(105);
            if (lookahead == 'a')
                ADVANCE(106);
            LEX_ERROR();
        case 117:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(117);
            if (lookahead == '*')
                ADVANCE(118);
            if (lookahead == 'O')
                ADVANCE(119);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 't')
                ADVANCE(165);
            if (lookahead == 'w')
                ADVANCE(169);
            LEX_ERROR();
        case 118:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 119:
            if (lookahead == 'S')
                ADVANCE(120);
            LEX_ERROR();
        case 120:
            if (lookahead == 'X')
                ADVANCE(121);
            LEX_ERROR();
        case 121:
            if (lookahead == 'A')
                ADVANCE(122);
            ACCEPT_TOKEN(anon_sym_OSX);
        case 122:
            if (lookahead == 'p')
                ADVANCE(123);
            LEX_ERROR();
        case 123:
            if (lookahead == 'p')
                ADVANCE(124);
            LEX_ERROR();
        case 124:
            if (lookahead == 'l')
                ADVANCE(125);
            LEX_ERROR();
        case 125:
            if (lookahead == 'i')
                ADVANCE(126);
            LEX_ERROR();
        case 126:
            if (lookahead == 'c')
                ADVANCE(127);
            LEX_ERROR();
        case 127:
            if (lookahead == 'a')
                ADVANCE(128);
            LEX_ERROR();
        case 128:
            if (lookahead == 't')
                ADVANCE(129);
            LEX_ERROR();
        case 129:
            if (lookahead == 'i')
                ADVANCE(130);
            LEX_ERROR();
        case 130:
            if (lookahead == 'o')
                ADVANCE(131);
            LEX_ERROR();
        case 131:
            if (lookahead == 'n')
                ADVANCE(132);
            LEX_ERROR();
        case 132:
            if (lookahead == 'E')
                ADVANCE(133);
            LEX_ERROR();
        case 133:
            if (lookahead == 'x')
                ADVANCE(134);
            LEX_ERROR();
        case 134:
            if (lookahead == 't')
                ADVANCE(135);
            LEX_ERROR();
        case 135:
            if (lookahead == 'e')
                ADVANCE(136);
            LEX_ERROR();
        case 136:
            if (lookahead == 'n')
                ADVANCE(137);
            LEX_ERROR();
        case 137:
            if (lookahead == 's')
                ADVANCE(138);
            LEX_ERROR();
        case 138:
            if (lookahead == 'i')
                ADVANCE(139);
            LEX_ERROR();
        case 139:
            if (lookahead == 'o')
                ADVANCE(140);
            LEX_ERROR();
        case 140:
            if (lookahead == 'n')
                ADVANCE(141);
            LEX_ERROR();
        case 141:
            ACCEPT_TOKEN(anon_sym_OSXApplicationExtension);
        case 142:
            if (lookahead == 'O')
                ADVANCE(143);
            LEX_ERROR();
        case 143:
            if (lookahead == 'S')
                ADVANCE(144);
            LEX_ERROR();
        case 144:
            if (lookahead == 'A')
                ADVANCE(145);
            ACCEPT_TOKEN(anon_sym_iOS);
        case 145:
            if (lookahead == 'p')
                ADVANCE(146);
            LEX_ERROR();
        case 146:
            if (lookahead == 'p')
                ADVANCE(147);
            LEX_ERROR();
        case 147:
            if (lookahead == 'l')
                ADVANCE(148);
            LEX_ERROR();
        case 148:
            if (lookahead == 'i')
                ADVANCE(149);
            LEX_ERROR();
        case 149:
            if (lookahead == 'c')
                ADVANCE(150);
            LEX_ERROR();
        case 150:
            if (lookahead == 'a')
                ADVANCE(151);
            LEX_ERROR();
        case 151:
            if (lookahead == 't')
                ADVANCE(152);
            LEX_ERROR();
        case 152:
            if (lookahead == 'i')
                ADVANCE(153);
            LEX_ERROR();
        case 153:
            if (lookahead == 'o')
                ADVANCE(154);
            LEX_ERROR();
        case 154:
            if (lookahead == 'n')
                ADVANCE(155);
            LEX_ERROR();
        case 155:
            if (lookahead == 'E')
                ADVANCE(156);
            LEX_ERROR();
        case 156:
            if (lookahead == 'x')
                ADVANCE(157);
            LEX_ERROR();
        case 157:
            if (lookahead == 't')
                ADVANCE(158);
            LEX_ERROR();
        case 158:
            if (lookahead == 'e')
                ADVANCE(159);
            LEX_ERROR();
        case 159:
            if (lookahead == 'n')
                ADVANCE(160);
            LEX_ERROR();
        case 160:
            if (lookahead == 's')
                ADVANCE(161);
            LEX_ERROR();
        case 161:
            if (lookahead == 'i')
                ADVANCE(162);
            LEX_ERROR();
        case 162:
            if (lookahead == 'o')
                ADVANCE(163);
            LEX_ERROR();
        case 163:
            if (lookahead == 'n')
                ADVANCE(164);
            LEX_ERROR();
        case 164:
            ACCEPT_TOKEN(anon_sym_iOSApplicationExtension);
        case 165:
            if (lookahead == 'v')
                ADVANCE(166);
            LEX_ERROR();
        case 166:
            if (lookahead == 'O')
                ADVANCE(167);
            LEX_ERROR();
        case 167:
            if (lookahead == 'S')
                ADVANCE(168);
            LEX_ERROR();
        case 168:
            ACCEPT_TOKEN(anon_sym_tvOS);
        case 169:
            if (lookahead == 'a')
                ADVANCE(170);
            LEX_ERROR();
        case 170:
            if (lookahead == 't')
                ADVANCE(171);
            LEX_ERROR();
        case 171:
            if (lookahead == 'c')
                ADVANCE(172);
            LEX_ERROR();
        case 172:
            if (lookahead == 'h')
                ADVANCE(173);
            LEX_ERROR();
        case 173:
            if (lookahead == 'O')
                ADVANCE(174);
            LEX_ERROR();
        case 174:
            if (lookahead == 'S')
                ADVANCE(175);
            LEX_ERROR();
        case 175:
            ACCEPT_TOKEN(anon_sym_watchOS);
        case 176:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(176);
            if (lookahead == ')')
                ADVANCE(110);
            if (lookahead == ',')
                ADVANCE(101);
            LEX_ERROR();
        case 177:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(177);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(178);
            LEX_ERROR();
        case 178:
            if (lookahead == '.')
                ADVANCE(179);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(178);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 179:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(180);
            LEX_ERROR();
        case 180:
            if (lookahead == '.')
                ADVANCE(181);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(180);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 181:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(182);
            LEX_ERROR();
        case 182:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(182);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 183:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(183);
            if (lookahead == '#')
                ADVANCE(53);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'l')
                ADVANCE(184);
            if (lookahead == 'v')
                ADVANCE(187);
            LEX_ERROR();
        case 184:
            if (lookahead == 'e')
                ADVANCE(185);
            LEX_ERROR();
        case 185:
            if (lookahead == 't')
                ADVANCE(186);
            LEX_ERROR();
        case 186:
            ACCEPT_TOKEN(anon_sym_let);
        case 187:
            if (lookahead == 'a')
                ADVANCE(188);
            LEX_ERROR();
        case 188:
            if (lookahead == 'r')
                ADVANCE(189);
            LEX_ERROR();
        case 189:
            ACCEPT_TOKEN(anon_sym_var);
        case 190:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(190);
            if (lookahead == ';')
                ADVANCE(35);
            LEX_ERROR();
        case 191:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(191);
            if (lookahead == ':')
                ADVANCE(82);
            if (lookahead == '?')
                ADVANCE(105);
            if (lookahead == 'a')
                ADVANCE(106);
            if (lookahead == 'i')
                ADVANCE(192);
            LEX_ERROR();
        case 192:
            if (lookahead == 'n')
                ADVANCE(193);
            LEX_ERROR();
        case 193:
            ACCEPT_TOKEN(anon_sym_in);
        case 194:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(194);
            if (lookahead == ',')
                ADVANCE(101);
            if (lookahead == ':')
                ADVANCE(82);
            if (lookahead == ';')
                ADVANCE(35);
            if (lookahead == '?')
                ADVANCE(105);
            if (lookahead == 'a')
                ADVANCE(106);
            if (lookahead == 'i')
                ADVANCE(192);
            LEX_ERROR();
        case 195:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(195);
            if (lookahead == ';')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 196:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(196);
            if (lookahead == '(')
                ADVANCE(37);
            if (lookahead == ')')
                ADVANCE(110);
            if (lookahead == '.')
                ADVANCE(38);
            if (lookahead == ';')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(39);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(44);
            if (lookahead == 'l')
                ADVANCE(46);
            if (lookahead == 'v')
                ADVANCE(49);
            LEX_ERROR();
        case 197:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(197);
            if (lookahead == ',')
                ADVANCE(101);
            if (lookahead == '.')
                ADVANCE(38);
            if (lookahead == ':')
                ADVANCE(82);
            if (lookahead == ';')
                ADVANCE(35);
            if (lookahead == '?')
                ADVANCE(105);
            if (lookahead == 'a')
                ADVANCE(106);
            if (lookahead == 'i')
                ADVANCE(192);
            LEX_ERROR();
        case 198:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(198);
            if (lookahead == '.')
                ADVANCE(38);
            if (lookahead == ':')
                ADVANCE(82);
            if (lookahead == '?')
                ADVANCE(105);
            if (lookahead == 'a')
                ADVANCE(106);
            if (lookahead == 'i')
                ADVANCE(192);
            LEX_ERROR();
        case 199:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(199);
            if (lookahead == '(')
                ADVANCE(37);
            if (lookahead == ':')
                ADVANCE(82);
            if (lookahead == '?')
                ADVANCE(105);
            if (lookahead == 'a')
                ADVANCE(106);
            if (lookahead == 'i')
                ADVANCE(192);
            LEX_ERROR();
        case 200:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(200);
            if (lookahead == 'i')
                ADVANCE(192);
            LEX_ERROR();
        case 201:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(201);
            if (lookahead == '.')
                ADVANCE(38);
            if (lookahead == 'i')
                ADVANCE(192);
            LEX_ERROR();
        case 202:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(202);
            if (lookahead == ')')
                ADVANCE(110);
            if (lookahead == ',')
                ADVANCE(101);
            if (lookahead == ';')
                ADVANCE(35);
            if (lookahead == '?')
                ADVANCE(105);
            if (lookahead == 'a')
                ADVANCE(106);
            LEX_ERROR();
        case 203:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(203);
            if (lookahead == ')')
                ADVANCE(110);
            if (lookahead == ',')
                ADVANCE(101);
            if (lookahead == '.')
                ADVANCE(38);
            if (lookahead == ';')
                ADVANCE(35);
            if (lookahead == '?')
                ADVANCE(105);
            if (lookahead == 'a')
                ADVANCE(106);
            LEX_ERROR();
        case 204:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(204);
            if (lookahead == ')')
                ADVANCE(110);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 205:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(205);
            if (lookahead == ',')
                ADVANCE(101);
            if (lookahead == ';')
                ADVANCE(35);
            LEX_ERROR();
        case 206:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(206);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == '{')
                ADVANCE(64);
            LEX_ERROR();
        case 207:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(207);
            if (lookahead == '.')
                ADVANCE(38);
            if (lookahead == '{')
                ADVANCE(64);
            LEX_ERROR();
        case 208:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(208);
            if (lookahead == ',')
                ADVANCE(101);
            if (lookahead == ':')
                ADVANCE(82);
            if (lookahead == '?')
                ADVANCE(105);
            if (lookahead == 'a')
                ADVANCE(106);
            LEX_ERROR();
        case 209:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(209);
            if (lookahead == ',')
                ADVANCE(101);
            if (lookahead == '.')
                ADVANCE(38);
            if (lookahead == ':')
                ADVANCE(82);
            if (lookahead == '?')
                ADVANCE(105);
            if (lookahead == 'a')
                ADVANCE(106);
            LEX_ERROR();
        case 210:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(210);
            if (lookahead == '(')
                ADVANCE(37);
            if (lookahead == ',')
                ADVANCE(101);
            if (lookahead == ':')
                ADVANCE(82);
            if (lookahead == '?')
                ADVANCE(105);
            if (lookahead == 'a')
                ADVANCE(106);
            LEX_ERROR();
        case 211:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(211);
            if (lookahead == '#')
                ADVANCE(53);
            if (lookahead == '(')
                ADVANCE(37);
            if (lookahead == ')')
                ADVANCE(110);
            if (lookahead == '*')
                ADVANCE(118);
            if (lookahead == ',')
                ADVANCE(101);
            if (lookahead == '.')
                ADVANCE(38);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(178);
            if (lookahead == ':')
                ADVANCE(82);
            if (lookahead == ';')
                ADVANCE(35);
            if (lookahead == '=')
                ADVANCE(104);
            if (lookahead == '?')
                ADVANCE(105);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'b') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(212);
            if (lookahead == '_')
                ADVANCE(39);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(235);
            if (lookahead == 'c')
                ADVANCE(40);
            if (lookahead == 'd')
                ADVANCE(84);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(237);
            if (lookahead == 'l')
                ADVANCE(46);
            if (lookahead == 'r')
                ADVANCE(16);
            if (lookahead == 's')
                ADVANCE(22);
            if (lookahead == 't')
                ADVANCE(261);
            if (lookahead == 'v')
                ADVANCE(49);
            if (lookahead == 'w')
                ADVANCE(265);
            if (lookahead == '{')
                ADVANCE(64);
            if (lookahead == '}')
                ADVANCE(78);
            LEX_ERROR();
        case 212:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(213);
            ACCEPT_TOKEN(sym_identifier);
        case 213:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'W') ||
                (lookahead == 'Y') ||
                (lookahead == 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'X')
                ADVANCE(214);
            ACCEPT_TOKEN(sym_identifier);
        case 214:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (lookahead == 'A')
                ADVANCE(215);
            if (('B' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_OSX);
        case 215:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(216);
            ACCEPT_TOKEN(sym_identifier);
        case 216:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(217);
            ACCEPT_TOKEN(sym_identifier);
        case 217:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(218);
            ACCEPT_TOKEN(sym_identifier);
        case 218:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(219);
            ACCEPT_TOKEN(sym_identifier);
        case 219:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(220);
            ACCEPT_TOKEN(sym_identifier);
        case 220:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(221);
            ACCEPT_TOKEN(sym_identifier);
        case 221:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(222);
            ACCEPT_TOKEN(sym_identifier);
        case 222:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(223);
            ACCEPT_TOKEN(sym_identifier);
        case 223:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(224);
            ACCEPT_TOKEN(sym_identifier);
        case 224:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(225);
            ACCEPT_TOKEN(sym_identifier);
        case 225:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'D') ||
                ('F' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'E')
                ADVANCE(226);
            ACCEPT_TOKEN(sym_identifier);
        case 226:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(3);
            if (lookahead == 'x')
                ADVANCE(227);
            ACCEPT_TOKEN(sym_identifier);
        case 227:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(228);
            ACCEPT_TOKEN(sym_identifier);
        case 228:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(229);
            ACCEPT_TOKEN(sym_identifier);
        case 229:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(230);
            ACCEPT_TOKEN(sym_identifier);
        case 230:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
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
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(233);
            ACCEPT_TOKEN(sym_identifier);
        case 233:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(234);
            ACCEPT_TOKEN(sym_identifier);
        case 234:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_OSXApplicationExtension);
        case 235:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(236);
            ACCEPT_TOKEN(sym_identifier);
        case 236:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_as);
        case 237:
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
                ADVANCE(238);
            if (lookahead == 'm')
                ADVANCE(11);
            if (lookahead == 'n')
                ADVANCE(260);
            if (lookahead == 's')
                ADVANCE(45);
            ACCEPT_TOKEN(sym_identifier);
        case 238:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(239);
            ACCEPT_TOKEN(sym_identifier);
        case 239:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (lookahead == 'A')
                ADVANCE(240);
            if (('B' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_iOS);
        case 240:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(241);
            ACCEPT_TOKEN(sym_identifier);
        case 241:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(242);
            ACCEPT_TOKEN(sym_identifier);
        case 242:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(243);
            ACCEPT_TOKEN(sym_identifier);
        case 243:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(244);
            ACCEPT_TOKEN(sym_identifier);
        case 244:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(245);
            ACCEPT_TOKEN(sym_identifier);
        case 245:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(246);
            ACCEPT_TOKEN(sym_identifier);
        case 246:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(247);
            ACCEPT_TOKEN(sym_identifier);
        case 247:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(248);
            ACCEPT_TOKEN(sym_identifier);
        case 248:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(249);
            ACCEPT_TOKEN(sym_identifier);
        case 249:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(250);
            ACCEPT_TOKEN(sym_identifier);
        case 250:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'D') ||
                ('F' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'E')
                ADVANCE(251);
            ACCEPT_TOKEN(sym_identifier);
        case 251:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(3);
            if (lookahead == 'x')
                ADVANCE(252);
            ACCEPT_TOKEN(sym_identifier);
        case 252:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(253);
            ACCEPT_TOKEN(sym_identifier);
        case 253:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(254);
            ACCEPT_TOKEN(sym_identifier);
        case 254:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(255);
            ACCEPT_TOKEN(sym_identifier);
        case 255:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(256);
            ACCEPT_TOKEN(sym_identifier);
        case 256:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(257);
            ACCEPT_TOKEN(sym_identifier);
        case 257:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(258);
            ACCEPT_TOKEN(sym_identifier);
        case 258:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(259);
            ACCEPT_TOKEN(sym_identifier);
        case 259:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_iOSApplicationExtension);
        case 260:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_in);
        case 261:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'v')
                ADVANCE(262);
            ACCEPT_TOKEN(sym_identifier);
        case 262:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(263);
            ACCEPT_TOKEN(sym_identifier);
        case 263:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(264);
            ACCEPT_TOKEN(sym_identifier);
        case 264:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_tvOS);
        case 265:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(266);
            if (lookahead == 'h')
                ADVANCE(29);
            ACCEPT_TOKEN(sym_identifier);
        case 266:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(267);
            ACCEPT_TOKEN(sym_identifier);
        case 267:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(268);
            ACCEPT_TOKEN(sym_identifier);
        case 268:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(269);
            ACCEPT_TOKEN(sym_identifier);
        case 269:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(270);
            ACCEPT_TOKEN(sym_identifier);
        case 270:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(271);
            ACCEPT_TOKEN(sym_identifier);
        case 271:
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
                ADVANCE(211);
            if (lookahead == '#')
                ADVANCE(53);
            if (lookahead == '(')
                ADVANCE(37);
            if (lookahead == ')')
                ADVANCE(110);
            if (lookahead == '*')
                ADVANCE(118);
            if (lookahead == ',')
                ADVANCE(101);
            if (lookahead == '.')
                ADVANCE(38);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(178);
            if (lookahead == ':')
                ADVANCE(82);
            if (lookahead == ';')
                ADVANCE(35);
            if (lookahead == '=')
                ADVANCE(104);
            if (lookahead == '?')
                ADVANCE(105);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'b') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(212);
            if (lookahead == '_')
                ADVANCE(39);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(235);
            if (lookahead == 'c')
                ADVANCE(40);
            if (lookahead == 'd')
                ADVANCE(84);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'i')
                ADVANCE(237);
            if (lookahead == 'l')
                ADVANCE(46);
            if (lookahead == 'r')
                ADVANCE(16);
            if (lookahead == 's')
                ADVANCE(22);
            if (lookahead == 't')
                ADVANCE(261);
            if (lookahead == 'v')
                ADVANCE(49);
            if (lookahead == 'w')
                ADVANCE(265);
            if (lookahead == '{')
                ADVANCE(64);
            if (lookahead == '}')
                ADVANCE(78);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 1,
    [1] = 33,
    [2] = 1,
    [3] = 33,
    [4] = 34,
    [5] = 33,
    [6] = 36,
    [7] = 52,
    [8] = 63,
    [9] = 65,
    [10] = 34,
    [11] = 63,
    [12] = 63,
    [13] = 66,
    [14] = 66,
    [15] = 79,
    [16] = 80,
    [17] = 34,
    [18] = 81,
    [19] = 83,
    [20] = 83,
    [21] = 91,
    [22] = 66,
    [23] = 36,
    [24] = 52,
    [25] = 63,
    [26] = 65,
    [27] = 91,
    [28] = 63,
    [29] = 66,
    [30] = 79,
    [31] = 91,
    [32] = 91,
    [33] = 92,
    [34] = 98,
    [35] = 98,
    [36] = 79,
    [37] = 99,
    [38] = 79,
    [39] = 36,
    [40] = 52,
    [41] = 63,
    [42] = 65,
    [43] = 99,
    [44] = 63,
    [45] = 66,
    [46] = 79,
    [47] = 99,
    [48] = 99,
    [49] = 92,
    [50] = 65,
    [51] = 99,
    [52] = 63,
    [53] = 100,
    [54] = 100,
    [55] = 100,
    [56] = 100,
    [57] = 80,
    [58] = 102,
    [59] = 80,
    [60] = 100,
    [61] = 100,
    [62] = 103,
    [63] = 103,
    [64] = 108,
    [65] = 108,
    [66] = 109,
    [67] = 80,
    [68] = 65,
    [69] = 65,
    [70] = 111,
    [71] = 103,
    [72] = 103,
    [73] = 111,
    [74] = 111,
    [75] = 65,
    [76] = 103,
    [77] = 112,
    [78] = 103,
    [79] = 103,
    [80] = 103,
    [81] = 65,
    [82] = 103,
    [83] = 113,
    [84] = 113,
    [85] = 114,
    [86] = 108,
    [87] = 109,
    [88] = 103,
    [89] = 80,
    [90] = 65,
    [91] = 65,
    [92] = 115,
    [93] = 113,
    [94] = 113,
    [95] = 115,
    [96] = 115,
    [97] = 65,
    [98] = 113,
    [99] = 116,
    [100] = 113,
    [101] = 113,
    [102] = 113,
    [103] = 65,
    [104] = 113,
    [105] = 114,
    [106] = 113,
    [107] = 113,
    [108] = 65,
    [109] = 116,
    [110] = 113,
    [111] = 103,
    [112] = 114,
    [113] = 80,
    [114] = 113,
    [115] = 114,
    [116] = 65,
    [117] = 108,
    [118] = 108,
    [119] = 65,
    [120] = 112,
    [121] = 103,
    [122] = 65,
    [123] = 100,
    [124] = 100,
    [125] = 80,
    [126] = 100,
    [127] = 103,
    [128] = 65,
    [129] = 100,
    [130] = 100,
    [131] = 100,
    [132] = 117,
    [133] = 176,
    [134] = 177,
    [135] = 176,
    [136] = 114,
    [137] = 100,
    [138] = 117,
    [139] = 176,
    [140] = 177,
    [141] = 176,
    [142] = 114,
    [143] = 114,
    [144] = 100,
    [145] = 114,
    [146] = 100,
    [147] = 103,
    [148] = 65,
    [149] = 100,
    [150] = 183,
    [151] = 100,
    [152] = 63,
    [153] = 183,
    [154] = 100,
    [155] = 63,
    [156] = 65,
    [157] = 63,
    [158] = 63,
    [159] = 63,
    [160] = 99,
    [161] = 98,
    [162] = 79,
    [163] = 99,
    [164] = 190,
    [165] = 63,
    [166] = 190,
    [167] = 65,
    [168] = 191,
    [169] = 191,
    [170] = 194,
    [171] = 108,
    [172] = 195,
    [173] = 196,
    [174] = 80,
    [175] = 80,
    [176] = 80,
    [177] = 65,
    [178] = 65,
    [179] = 197,
    [180] = 191,
    [181] = 191,
    [182] = 198,
    [183] = 198,
    [184] = 65,
    [185] = 191,
    [186] = 199,
    [187] = 191,
    [188] = 109,
    [189] = 114,
    [190] = 191,
    [191] = 191,
    [192] = 191,
    [193] = 198,
    [194] = 191,
    [195] = 65,
    [196] = 191,
    [197] = 191,
    [198] = 200,
    [199] = 65,
    [200] = 65,
    [201] = 200,
    [202] = 200,
    [203] = 201,
    [204] = 201,
    [205] = 65,
    [206] = 200,
    [207] = 63,
    [208] = 99,
    [209] = 65,
    [210] = 63,
    [211] = 99,
    [212] = 190,
    [213] = 114,
    [214] = 202,
    [215] = 195,
    [216] = 80,
    [217] = 203,
    [218] = 190,
    [219] = 204,
    [220] = 190,
    [221] = 114,
    [222] = 114,
    [223] = 204,
    [224] = 114,
    [225] = 190,
    [226] = 65,
    [227] = 205,
    [228] = 205,
    [229] = 190,
    [230] = 63,
    [231] = 99,
    [232] = 195,
    [233] = 190,
    [234] = 204,
    [235] = 114,
    [236] = 190,
    [237] = 206,
    [238] = 63,
    [239] = 206,
    [240] = 63,
    [241] = 65,
    [242] = 199,
    [243] = 191,
    [244] = 200,
    [245] = 65,
    [246] = 63,
    [247] = 99,
    [248] = 81,
    [249] = 81,
    [250] = 63,
    [251] = 65,
    [252] = 63,
    [253] = 63,
    [254] = 207,
    [255] = 207,
    [256] = 65,
    [257] = 63,
    [258] = 190,
    [259] = 98,
    [260] = 79,
    [261] = 190,
    [262] = 99,
    [263] = 195,
    [264] = 190,
    [265] = 206,
    [266] = 63,
    [267] = 98,
    [268] = 92,
    [269] = 79,
    [270] = 65,
    [271] = 91,
    [272] = 63,
    [273] = 91,
    [274] = 98,
    [275] = 79,
    [276] = 91,
    [277] = 63,
    [278] = 191,
    [279] = 196,
    [280] = 80,
    [281] = 191,
    [282] = 200,
    [283] = 65,
    [284] = 63,
    [285] = 91,
    [286] = 65,
    [287] = 63,
    [288] = 91,
    [289] = 114,
    [290] = 63,
    [291] = 91,
    [292] = 200,
    [293] = 65,
    [294] = 63,
    [295] = 91,
    [296] = 91,
    [297] = 83,
    [298] = 66,
    [299] = 208,
    [300] = 208,
    [301] = 108,
    [302] = 109,
    [303] = 80,
    [304] = 65,
    [305] = 65,
    [306] = 209,
    [307] = 208,
    [308] = 208,
    [309] = 209,
    [310] = 209,
    [311] = 65,
    [312] = 208,
    [313] = 210,
    [314] = 208,
    [315] = 208,
    [316] = 208,
    [317] = 65,
    [318] = 208,
    [319] = 114,
    [320] = 208,
    [321] = 208,
    [322] = 65,
    [323] = 210,
    [324] = 208,
    [325] = 81,
    [326] = 80,
    [327] = 83,
    [328] = 66,
    [329] = 208,
    [330] = 81,
    [331] = 83,
    [332] = 66,
    [333] = 34,
    [334] = 79,
    [335] = 92,
    [336] = 65,
    [337] = 34,
    [338] = 63,
    [339] = 34,
    [340] = 98,
    [341] = 79,
    [342] = 34,
    [343] = 63,
    [344] = 191,
    [345] = 196,
    [346] = 80,
    [347] = 191,
    [348] = 200,
    [349] = 65,
    [350] = 63,
    [351] = 34,
    [352] = 65,
    [353] = 63,
    [354] = 34,
    [355] = 114,
    [356] = 63,
    [357] = 34,
    [358] = 200,
    [359] = 65,
    [360] = 63,
    [361] = 34,
    [362] = 34,
    [363] = 1,
    [364] = 33,
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
        [sym_switch_statement] = ACTIONS(SHIFT(4)),
        [sym__expression] = ACTIONS(SHIFT(4)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(5)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statements, 0)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_switch] = ACTIONS(SHIFT(9)),
        [sym__declaration] = ACTIONS(SHIFT(4)),
        [sym_identifier] = ACTIONS(SHIFT(10)),
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
        [sym_switch_statement] = ACTIONS(SHIFT(4)),
        [sym__expression] = ACTIONS(SHIFT(4)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(364)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_switch] = ACTIONS(SHIFT(9)),
        [sym__declaration] = ACTIONS(SHIFT(4)),
        [sym_identifier] = ACTIONS(SHIFT(10)),
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
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(363)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 1)),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statements, 1)),
    },
    [6] = {
        [sym__for_init] = ACTIONS(SHIFT(164)),
        [sym__for_condition] = ACTIONS(SHIFT(343)),
        [sym_variable_declaration] = ACTIONS(SHIFT(166)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(167)),
        [sym__pattern] = ACTIONS(SHIFT(344)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(169)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(169)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(169)),
        [sym_optional_pattern] = ACTIONS(SHIFT(169)),
        [sym_is_pattern] = ACTIONS(SHIFT(169)),
        [sym_as_pattern] = ACTIONS(SHIFT(169)),
        [sym__expression] = ACTIONS(SHIFT(170)),
        [sym__expression_list] = ACTIONS(SHIFT(166)),
        [sym__type_identifier] = ACTIONS(SHIFT(171)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(172)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(345)),
        [anon_sym_case] = ACTIONS(SHIFT(346)),
        [anon_sym_let] = ACTIONS(SHIFT(175)),
        [anon_sym_var] = ACTIONS(SHIFT(176)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(169)),
        [anon_sym_DOT] = ACTIONS(SHIFT(177)),
        [anon_sym_is] = ACTIONS(SHIFT(178)),
        [sym_identifier] = ACTIONS(SHIFT(179)),
    },
    [7] = {
        [sym__condition_clause] = ACTIONS(SHIFT(338)),
        [sym__condition] = ACTIONS(SHIFT(53)),
        [sym_availability_condition] = ACTIONS(SHIFT(54)),
        [sym_case_condition] = ACTIONS(SHIFT(55)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(55)),
        [sym__expression] = ACTIONS(SHIFT(56)),
        [anon_sym_case] = ACTIONS(SHIFT(57)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(58)),
        [anon_sym_let] = ACTIONS(SHIFT(59)),
        [anon_sym_var] = ACTIONS(SHIFT(59)),
        [sym_identifier] = ACTIONS(SHIFT(60)),
    },
    [8] = {
        [sym__code_block] = ACTIONS(SHIFT(335)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(34)),
    },
    [9] = {
        [sym__expression] = ACTIONS(SHIFT(11)),
        [sym_identifier] = ACTIONS(SHIFT(12)),
    },
    [10] = {
        [sym__statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [11] = {
        [anon_sym_LBRACE] = ACTIONS(SHIFT(13)),
    },
    [12] = {
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [13] = {
        [sym_case_statement] = ACTIONS(SHIFT(14)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(15)),
        [anon_sym_case] = ACTIONS(SHIFT(16)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(17)),
        [anon_sym_default] = ACTIONS(SHIFT(18)),
    },
    [14] = {
        [sym_case_statement] = ACTIONS(SHIFT(14)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(334)),
        [anon_sym_case] = ACTIONS(SHIFT(16)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 1)),
        [anon_sym_default] = ACTIONS(SHIFT(18)),
    },
    [15] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(333)),
    },
    [16] = {
        [sym__pattern] = ACTIONS(SHIFT(299)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(300)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(300)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(300)),
        [sym_optional_pattern] = ACTIONS(SHIFT(300)),
        [sym_is_pattern] = ACTIONS(SHIFT(300)),
        [sym_as_pattern] = ACTIONS(SHIFT(300)),
        [sym__expression] = ACTIONS(SHIFT(300)),
        [sym__type_identifier] = ACTIONS(SHIFT(301)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(302)),
        [anon_sym_let] = ACTIONS(SHIFT(303)),
        [anon_sym_var] = ACTIONS(SHIFT(303)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(300)),
        [anon_sym_DOT] = ACTIONS(SHIFT(304)),
        [anon_sym_is] = ACTIONS(SHIFT(305)),
        [sym_identifier] = ACTIONS(SHIFT(306)),
    },
    [17] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 4)),
    },
    [18] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(19)),
    },
    [19] = {
        [sym__statement] = ACTIONS(SHIFT(20)),
        [sym_for_statement] = ACTIONS(SHIFT(21)),
        [sym_for_in_statement] = ACTIONS(SHIFT(21)),
        [sym_while_statement] = ACTIONS(SHIFT(21)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(21)),
        [sym_switch_statement] = ACTIONS(SHIFT(21)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [sym__expression] = ACTIONS(SHIFT(21)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(22)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_for] = ACTIONS(SHIFT(23)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_while] = ACTIONS(SHIFT(24)),
        [anon_sym_repeat] = ACTIONS(SHIFT(25)),
        [anon_sym_switch] = ACTIONS(SHIFT(26)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [sym__declaration] = ACTIONS(SHIFT(21)),
        [sym_identifier] = ACTIONS(SHIFT(27)),
    },
    [20] = {
        [sym__statement] = ACTIONS(SHIFT(20)),
        [sym_for_statement] = ACTIONS(SHIFT(21)),
        [sym_for_in_statement] = ACTIONS(SHIFT(21)),
        [sym_while_statement] = ACTIONS(SHIFT(21)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(21)),
        [sym_switch_statement] = ACTIONS(SHIFT(21)),
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [sym__expression] = ACTIONS(SHIFT(21)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(298)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [anon_sym_for] = ACTIONS(SHIFT(23)),
        [anon_sym_case] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [anon_sym_while] = ACTIONS(SHIFT(24)),
        [anon_sym_repeat] = ACTIONS(SHIFT(25)),
        [anon_sym_switch] = ACTIONS(SHIFT(26)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [anon_sym_default] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [sym__declaration] = ACTIONS(SHIFT(21)),
        [sym_identifier] = ACTIONS(SHIFT(27)),
    },
    [21] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_case_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(297)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_case] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_default] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 1)),
    },
    [22] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 3)),
    },
    [23] = {
        [sym__for_init] = ACTIONS(SHIFT(164)),
        [sym__for_condition] = ACTIONS(SHIFT(277)),
        [sym_variable_declaration] = ACTIONS(SHIFT(166)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(167)),
        [sym__pattern] = ACTIONS(SHIFT(278)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(169)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(169)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(169)),
        [sym_optional_pattern] = ACTIONS(SHIFT(169)),
        [sym_is_pattern] = ACTIONS(SHIFT(169)),
        [sym_as_pattern] = ACTIONS(SHIFT(169)),
        [sym__expression] = ACTIONS(SHIFT(170)),
        [sym__expression_list] = ACTIONS(SHIFT(166)),
        [sym__type_identifier] = ACTIONS(SHIFT(171)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(172)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(279)),
        [anon_sym_case] = ACTIONS(SHIFT(280)),
        [anon_sym_let] = ACTIONS(SHIFT(175)),
        [anon_sym_var] = ACTIONS(SHIFT(176)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(169)),
        [anon_sym_DOT] = ACTIONS(SHIFT(177)),
        [anon_sym_is] = ACTIONS(SHIFT(178)),
        [sym_identifier] = ACTIONS(SHIFT(179)),
    },
    [24] = {
        [sym__condition_clause] = ACTIONS(SHIFT(272)),
        [sym__condition] = ACTIONS(SHIFT(53)),
        [sym_availability_condition] = ACTIONS(SHIFT(54)),
        [sym_case_condition] = ACTIONS(SHIFT(55)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(55)),
        [sym__expression] = ACTIONS(SHIFT(56)),
        [anon_sym_case] = ACTIONS(SHIFT(57)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(58)),
        [anon_sym_let] = ACTIONS(SHIFT(59)),
        [anon_sym_var] = ACTIONS(SHIFT(59)),
        [sym_identifier] = ACTIONS(SHIFT(60)),
    },
    [25] = {
        [sym__code_block] = ACTIONS(SHIFT(33)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(34)),
    },
    [26] = {
        [sym__expression] = ACTIONS(SHIFT(28)),
        [sym_identifier] = ACTIONS(SHIFT(12)),
    },
    [27] = {
        [sym__statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__expression, 1)),
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
        [anon_sym_switch] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_default] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [28] = {
        [anon_sym_LBRACE] = ACTIONS(SHIFT(29)),
    },
    [29] = {
        [sym_case_statement] = ACTIONS(SHIFT(14)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(30)),
        [anon_sym_case] = ACTIONS(SHIFT(16)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(31)),
        [anon_sym_default] = ACTIONS(SHIFT(18)),
    },
    [30] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(32)),
    },
    [31] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
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
        [anon_sym_switch] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 4)),
    },
    [32] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
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
        [anon_sym_switch] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 5)),
    },
    [33] = {
        [anon_sym_while] = ACTIONS(SHIFT(270)),
    },
    [34] = {
        [sym__statement] = ACTIONS(SHIFT(35)),
        [sym__statements] = ACTIONS(SHIFT(36)),
        [sym_for_statement] = ACTIONS(SHIFT(37)),
        [sym_for_in_statement] = ACTIONS(SHIFT(37)),
        [sym_while_statement] = ACTIONS(SHIFT(37)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(37)),
        [sym_switch_statement] = ACTIONS(SHIFT(37)),
        [sym__expression] = ACTIONS(SHIFT(37)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(38)),
        [anon_sym_for] = ACTIONS(SHIFT(39)),
        [anon_sym_while] = ACTIONS(SHIFT(40)),
        [anon_sym_repeat] = ACTIONS(SHIFT(41)),
        [anon_sym_switch] = ACTIONS(SHIFT(42)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(37)),
        [sym_identifier] = ACTIONS(SHIFT(43)),
    },
    [35] = {
        [sym__statement] = ACTIONS(SHIFT(35)),
        [sym_for_statement] = ACTIONS(SHIFT(37)),
        [sym_for_in_statement] = ACTIONS(SHIFT(37)),
        [sym_while_statement] = ACTIONS(SHIFT(37)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(37)),
        [sym_switch_statement] = ACTIONS(SHIFT(37)),
        [sym__expression] = ACTIONS(SHIFT(37)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(269)),
        [anon_sym_for] = ACTIONS(SHIFT(39)),
        [anon_sym_while] = ACTIONS(SHIFT(40)),
        [anon_sym_repeat] = ACTIONS(SHIFT(41)),
        [anon_sym_switch] = ACTIONS(SHIFT(42)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [sym__declaration] = ACTIONS(SHIFT(37)),
        [sym_identifier] = ACTIONS(SHIFT(43)),
    },
    [36] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(268)),
    },
    [37] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(267)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 1)),
    },
    [38] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 1)),
    },
    [39] = {
        [sym__for_init] = ACTIONS(SHIFT(164)),
        [sym__for_condition] = ACTIONS(SHIFT(165)),
        [sym_variable_declaration] = ACTIONS(SHIFT(166)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(167)),
        [sym__pattern] = ACTIONS(SHIFT(168)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(169)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(169)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(169)),
        [sym_optional_pattern] = ACTIONS(SHIFT(169)),
        [sym_is_pattern] = ACTIONS(SHIFT(169)),
        [sym_as_pattern] = ACTIONS(SHIFT(169)),
        [sym__expression] = ACTIONS(SHIFT(170)),
        [sym__expression_list] = ACTIONS(SHIFT(166)),
        [sym__type_identifier] = ACTIONS(SHIFT(171)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(172)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(173)),
        [anon_sym_case] = ACTIONS(SHIFT(174)),
        [anon_sym_let] = ACTIONS(SHIFT(175)),
        [anon_sym_var] = ACTIONS(SHIFT(176)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(169)),
        [anon_sym_DOT] = ACTIONS(SHIFT(177)),
        [anon_sym_is] = ACTIONS(SHIFT(178)),
        [sym_identifier] = ACTIONS(SHIFT(179)),
    },
    [40] = {
        [sym__condition_clause] = ACTIONS(SHIFT(52)),
        [sym__condition] = ACTIONS(SHIFT(53)),
        [sym_availability_condition] = ACTIONS(SHIFT(54)),
        [sym_case_condition] = ACTIONS(SHIFT(55)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(55)),
        [sym__expression] = ACTIONS(SHIFT(56)),
        [anon_sym_case] = ACTIONS(SHIFT(57)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(58)),
        [anon_sym_let] = ACTIONS(SHIFT(59)),
        [anon_sym_var] = ACTIONS(SHIFT(59)),
        [sym_identifier] = ACTIONS(SHIFT(60)),
    },
    [41] = {
        [sym__code_block] = ACTIONS(SHIFT(49)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(34)),
    },
    [42] = {
        [sym__expression] = ACTIONS(SHIFT(44)),
        [sym_identifier] = ACTIONS(SHIFT(12)),
    },
    [43] = {
        [sym__statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [44] = {
        [anon_sym_LBRACE] = ACTIONS(SHIFT(45)),
    },
    [45] = {
        [sym_case_statement] = ACTIONS(SHIFT(14)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(46)),
        [anon_sym_case] = ACTIONS(SHIFT(16)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(47)),
        [anon_sym_default] = ACTIONS(SHIFT(18)),
    },
    [46] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(48)),
    },
    [47] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 4)),
    },
    [48] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 5)),
    },
    [49] = {
        [anon_sym_while] = ACTIONS(SHIFT(50)),
    },
    [50] = {
        [sym__expression] = ACTIONS(SHIFT(51)),
        [sym_identifier] = ACTIONS(SHIFT(43)),
    },
    [51] = {
        [sym__statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
    },
    [52] = {
        [sym__code_block] = ACTIONS(SHIFT(160)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(161)),
    },
    [53] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(159)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(153)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [54] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1), SHIFT(156)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [55] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [56] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(150)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [57] = {
        [sym__pattern] = ACTIONS(SHIFT(147)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(63)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(63)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(63)),
        [sym_optional_pattern] = ACTIONS(SHIFT(63)),
        [sym_is_pattern] = ACTIONS(SHIFT(63)),
        [sym_as_pattern] = ACTIONS(SHIFT(63)),
        [sym__expression] = ACTIONS(SHIFT(63)),
        [sym__type_identifier] = ACTIONS(SHIFT(64)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(66)),
        [anon_sym_let] = ACTIONS(SHIFT(67)),
        [anon_sym_var] = ACTIONS(SHIFT(67)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(63)),
        [anon_sym_DOT] = ACTIONS(SHIFT(68)),
        [anon_sym_is] = ACTIONS(SHIFT(69)),
        [sym_identifier] = ACTIONS(SHIFT(70)),
    },
    [58] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(132)),
    },
    [59] = {
        [sym_optional_binding] = ACTIONS(SHIFT(61)),
        [sym__pattern] = ACTIONS(SHIFT(62)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(63)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(63)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(63)),
        [sym_optional_pattern] = ACTIONS(SHIFT(63)),
        [sym_is_pattern] = ACTIONS(SHIFT(63)),
        [sym_as_pattern] = ACTIONS(SHIFT(63)),
        [sym__expression] = ACTIONS(SHIFT(63)),
        [sym__type_identifier] = ACTIONS(SHIFT(64)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(66)),
        [anon_sym_let] = ACTIONS(SHIFT(67)),
        [anon_sym_var] = ACTIONS(SHIFT(67)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(63)),
        [anon_sym_DOT] = ACTIONS(SHIFT(68)),
        [anon_sym_is] = ACTIONS(SHIFT(69)),
        [sym_identifier] = ACTIONS(SHIFT(70)),
    },
    [60] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [61] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(125)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
    },
    [62] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(122)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(80)),
        [anon_sym_as] = ACTIONS(SHIFT(81)),
    },
    [63] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [64] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(119)),
    },
    [65] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(116)),
    },
    [66] = {
        [sym__pattern] = ACTIONS(SHIFT(83)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(84)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(84)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(85)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(84)),
        [sym_optional_pattern] = ACTIONS(SHIFT(84)),
        [sym_is_pattern] = ACTIONS(SHIFT(84)),
        [sym_as_pattern] = ACTIONS(SHIFT(84)),
        [sym__expression] = ACTIONS(SHIFT(84)),
        [sym__type_identifier] = ACTIONS(SHIFT(86)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(87)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(88)),
        [anon_sym_let] = ACTIONS(SHIFT(89)),
        [anon_sym_var] = ACTIONS(SHIFT(89)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(84)),
        [anon_sym_DOT] = ACTIONS(SHIFT(90)),
        [anon_sym_is] = ACTIONS(SHIFT(91)),
        [sym_identifier] = ACTIONS(SHIFT(92)),
    },
    [67] = {
        [sym__pattern] = ACTIONS(SHIFT(79)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(63)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(63)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(63)),
        [sym_optional_pattern] = ACTIONS(SHIFT(63)),
        [sym_is_pattern] = ACTIONS(SHIFT(63)),
        [sym_as_pattern] = ACTIONS(SHIFT(63)),
        [sym__expression] = ACTIONS(SHIFT(63)),
        [sym__type_identifier] = ACTIONS(SHIFT(64)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(66)),
        [anon_sym_let] = ACTIONS(SHIFT(67)),
        [anon_sym_var] = ACTIONS(SHIFT(67)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(63)),
        [anon_sym_DOT] = ACTIONS(SHIFT(68)),
        [anon_sym_is] = ACTIONS(SHIFT(69)),
        [sym_identifier] = ACTIONS(SHIFT(70)),
    },
    [68] = {
        [sym_identifier] = ACTIONS(SHIFT(77)),
    },
    [69] = {
        [sym_type] = ACTIONS(SHIFT(71)),
        [sym__type_identifier] = ACTIONS(SHIFT(72)),
        [sym__type_name] = ACTIONS(SHIFT(73)),
        [sym_identifier] = ACTIONS(SHIFT(74)),
    },
    [70] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [71] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [72] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [73] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(75)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [74] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [75] = {
        [sym__type_identifier] = ACTIONS(SHIFT(76)),
        [sym__type_name] = ACTIONS(SHIFT(73)),
        [sym_identifier] = ACTIONS(SHIFT(74)),
    },
    [76] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [77] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(78)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(66)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [78] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [79] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(80)),
        [anon_sym_as] = ACTIONS(SHIFT(81)),
    },
    [80] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [81] = {
        [sym_type] = ACTIONS(SHIFT(82)),
        [sym__type_identifier] = ACTIONS(SHIFT(72)),
        [sym__type_name] = ACTIONS(SHIFT(73)),
        [sym_identifier] = ACTIONS(SHIFT(74)),
    },
    [82] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [83] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(112)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(113)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(102)),
        [anon_sym_as] = ACTIONS(SHIFT(103)),
    },
    [84] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [85] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(111)),
    },
    [86] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(108)),
    },
    [87] = {
        [sym__pattern] = ACTIONS(SHIFT(83)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(84)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(84)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(105)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(84)),
        [sym_optional_pattern] = ACTIONS(SHIFT(84)),
        [sym_is_pattern] = ACTIONS(SHIFT(84)),
        [sym_as_pattern] = ACTIONS(SHIFT(84)),
        [sym__expression] = ACTIONS(SHIFT(84)),
        [sym__type_identifier] = ACTIONS(SHIFT(86)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(87)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(106)),
        [anon_sym_let] = ACTIONS(SHIFT(89)),
        [anon_sym_var] = ACTIONS(SHIFT(89)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(84)),
        [anon_sym_DOT] = ACTIONS(SHIFT(90)),
        [anon_sym_is] = ACTIONS(SHIFT(91)),
        [sym_identifier] = ACTIONS(SHIFT(92)),
    },
    [88] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [89] = {
        [sym__pattern] = ACTIONS(SHIFT(101)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(84)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(84)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(84)),
        [sym_optional_pattern] = ACTIONS(SHIFT(84)),
        [sym_is_pattern] = ACTIONS(SHIFT(84)),
        [sym_as_pattern] = ACTIONS(SHIFT(84)),
        [sym__expression] = ACTIONS(SHIFT(84)),
        [sym__type_identifier] = ACTIONS(SHIFT(86)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(87)),
        [anon_sym_let] = ACTIONS(SHIFT(89)),
        [anon_sym_var] = ACTIONS(SHIFT(89)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(84)),
        [anon_sym_DOT] = ACTIONS(SHIFT(90)),
        [anon_sym_is] = ACTIONS(SHIFT(91)),
        [sym_identifier] = ACTIONS(SHIFT(92)),
    },
    [90] = {
        [sym_identifier] = ACTIONS(SHIFT(99)),
    },
    [91] = {
        [sym_type] = ACTIONS(SHIFT(93)),
        [sym__type_identifier] = ACTIONS(SHIFT(94)),
        [sym__type_name] = ACTIONS(SHIFT(95)),
        [sym_identifier] = ACTIONS(SHIFT(96)),
    },
    [92] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [93] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [94] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [95] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(97)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [96] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [97] = {
        [sym__type_identifier] = ACTIONS(SHIFT(98)),
        [sym__type_name] = ACTIONS(SHIFT(95)),
        [sym_identifier] = ACTIONS(SHIFT(96)),
    },
    [98] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [99] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(100)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(87)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [100] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [101] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(102)),
        [anon_sym_as] = ACTIONS(SHIFT(103)),
    },
    [102] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [103] = {
        [sym_type] = ACTIONS(SHIFT(104)),
        [sym__type_identifier] = ACTIONS(SHIFT(94)),
        [sym__type_name] = ACTIONS(SHIFT(95)),
        [sym_identifier] = ACTIONS(SHIFT(96)),
    },
    [104] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [105] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(107)),
    },
    [106] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [107] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [108] = {
        [sym_identifier] = ACTIONS(SHIFT(109)),
    },
    [109] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(110)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(87)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [110] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [111] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [112] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 2)),
    },
    [113] = {
        [sym__pattern] = ACTIONS(SHIFT(114)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(84)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(84)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(84)),
        [sym_optional_pattern] = ACTIONS(SHIFT(84)),
        [sym_is_pattern] = ACTIONS(SHIFT(84)),
        [sym_as_pattern] = ACTIONS(SHIFT(84)),
        [sym__expression] = ACTIONS(SHIFT(84)),
        [sym__type_identifier] = ACTIONS(SHIFT(86)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(87)),
        [anon_sym_let] = ACTIONS(SHIFT(89)),
        [anon_sym_var] = ACTIONS(SHIFT(89)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(84)),
        [anon_sym_DOT] = ACTIONS(SHIFT(90)),
        [anon_sym_is] = ACTIONS(SHIFT(91)),
        [sym_identifier] = ACTIONS(SHIFT(92)),
    },
    [114] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(115)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(113)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(102)),
        [anon_sym_as] = ACTIONS(SHIFT(103)),
    },
    [115] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [116] = {
        [sym__type_identifier] = ACTIONS(SHIFT(117)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [sym_identifier] = ACTIONS(SHIFT(118)),
    },
    [117] = {
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [118] = {
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [119] = {
        [sym_identifier] = ACTIONS(SHIFT(120)),
    },
    [120] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(121)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(66)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [121] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [122] = {
        [sym__expression] = ACTIONS(SHIFT(123)),
        [sym_identifier] = ACTIONS(SHIFT(124)),
    },
    [123] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [124] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [125] = {
        [sym_optional_binding] = ACTIONS(SHIFT(126)),
        [sym__pattern] = ACTIONS(SHIFT(127)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(63)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(63)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(63)),
        [sym_optional_pattern] = ACTIONS(SHIFT(63)),
        [sym_is_pattern] = ACTIONS(SHIFT(63)),
        [sym_as_pattern] = ACTIONS(SHIFT(63)),
        [sym__expression] = ACTIONS(SHIFT(63)),
        [sym__type_identifier] = ACTIONS(SHIFT(64)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(66)),
        [anon_sym_let] = ACTIONS(SHIFT(67)),
        [anon_sym_var] = ACTIONS(SHIFT(67)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(63)),
        [anon_sym_DOT] = ACTIONS(SHIFT(68)),
        [anon_sym_is] = ACTIONS(SHIFT(69)),
        [sym_identifier] = ACTIONS(SHIFT(70)),
    },
    [126] = {
        [sym__code_block] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(SHIFT(131)),
        [anon_sym_COMMA] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
    },
    [127] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(128)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(80)),
        [anon_sym_as] = ACTIONS(SHIFT(81)),
    },
    [128] = {
        [sym__expression] = ACTIONS(SHIFT(129)),
        [sym_identifier] = ACTIONS(SHIFT(130)),
    },
    [129] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [130] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [131] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
    },
    [132] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(133)),
        [anon_sym_iOS] = ACTIONS(SHIFT(134)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(134)),
        [anon_sym_OSX] = ACTIONS(SHIFT(134)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(134)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(134)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(134)),
    },
    [133] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(145)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(146)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(138)),
    },
    [134] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(135)),
    },
    [135] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(136)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(137)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(138)),
    },
    [136] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(144)),
    },
    [137] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 5)),
    },
    [138] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(139)),
        [anon_sym_iOS] = ACTIONS(SHIFT(140)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(140)),
        [anon_sym_OSX] = ACTIONS(SHIFT(140)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(140)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(140)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(140)),
    },
    [139] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(143)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(138)),
    },
    [140] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(141)),
    },
    [141] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(142)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 3)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(138)),
    },
    [142] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 4)),
    },
    [143] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 3)),
    },
    [144] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 6)),
    },
    [145] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(137)),
    },
    [146] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 4)),
    },
    [147] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(148)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(80)),
        [anon_sym_as] = ACTIONS(SHIFT(81)),
    },
    [148] = {
        [sym__expression] = ACTIONS(SHIFT(149)),
        [sym_identifier] = ACTIONS(SHIFT(124)),
    },
    [149] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_case_condition, 4)),
    },
    [150] = {
        [sym__condition] = ACTIONS(SHIFT(151)),
        [sym_availability_condition] = ACTIONS(SHIFT(55)),
        [sym_case_condition] = ACTIONS(SHIFT(55)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(55)),
        [anon_sym_case] = ACTIONS(SHIFT(57)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(58)),
        [anon_sym_let] = ACTIONS(SHIFT(59)),
        [anon_sym_var] = ACTIONS(SHIFT(59)),
    },
    [151] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(152)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(153)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [152] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 4)),
    },
    [153] = {
        [sym__condition] = ACTIONS(SHIFT(154)),
        [sym_availability_condition] = ACTIONS(SHIFT(55)),
        [sym_case_condition] = ACTIONS(SHIFT(55)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(55)),
        [anon_sym_case] = ACTIONS(SHIFT(57)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(58)),
        [anon_sym_let] = ACTIONS(SHIFT(59)),
        [anon_sym_var] = ACTIONS(SHIFT(59)),
    },
    [154] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(155)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(153)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
    },
    [155] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
    },
    [156] = {
        [sym__expression] = ACTIONS(SHIFT(157)),
        [sym_identifier] = ACTIONS(SHIFT(158)),
    },
    [157] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [158] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [159] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 2)),
    },
    [160] = {
        [sym__statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_while_statement, 3)),
    },
    [161] = {
        [sym__statement] = ACTIONS(SHIFT(35)),
        [sym__statements] = ACTIONS(SHIFT(162)),
        [sym_for_statement] = ACTIONS(SHIFT(37)),
        [sym_for_in_statement] = ACTIONS(SHIFT(37)),
        [sym_while_statement] = ACTIONS(SHIFT(37)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(37)),
        [sym_switch_statement] = ACTIONS(SHIFT(37)),
        [sym__expression] = ACTIONS(SHIFT(37)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(38)),
        [anon_sym_for] = ACTIONS(SHIFT(39)),
        [anon_sym_while] = ACTIONS(SHIFT(40)),
        [anon_sym_repeat] = ACTIONS(SHIFT(41)),
        [anon_sym_switch] = ACTIONS(SHIFT(42)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(37)),
        [sym_identifier] = ACTIONS(SHIFT(43)),
    },
    [162] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(163)),
    },
    [163] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [164] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(263)),
    },
    [165] = {
        [sym__code_block] = ACTIONS(SHIFT(262)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(161)),
    },
    [166] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__for_init, 1)),
    },
    [167] = {
        [sym__variable_name] = ACTIONS(SHIFT(248)),
        [sym_identifier] = ACTIONS(SHIFT(249)),
    },
    [168] = {
        [sym__type_annotation] = ACTIONS(SHIFT(244)),
        [anon_sym_in] = ACTIONS(SHIFT(245)),
        [anon_sym_COLON] = ACTIONS(SHIFT(200)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(194)),
        [anon_sym_as] = ACTIONS(SHIFT(195)),
    },
    [169] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [170] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(225)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(226)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [171] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(241)),
    },
    [172] = {
        [sym__expression] = ACTIONS(SHIFT(236)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(237)),
        [sym_identifier] = ACTIONS(SHIFT(220)),
    },
    [173] = {
        [sym__for_init] = ACTIONS(SHIFT(212)),
        [sym__for_condition] = ACTIONS(SHIFT(213)),
        [sym_variable_declaration] = ACTIONS(SHIFT(166)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(167)),
        [sym__pattern] = ACTIONS(SHIFT(83)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(84)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(84)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(189)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(84)),
        [sym_optional_pattern] = ACTIONS(SHIFT(84)),
        [sym_is_pattern] = ACTIONS(SHIFT(84)),
        [sym_as_pattern] = ACTIONS(SHIFT(84)),
        [sym__expression] = ACTIONS(SHIFT(214)),
        [sym__expression_list] = ACTIONS(SHIFT(166)),
        [sym__type_identifier] = ACTIONS(SHIFT(86)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(215)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(87)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(190)),
        [anon_sym_let] = ACTIONS(SHIFT(89)),
        [anon_sym_var] = ACTIONS(SHIFT(216)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(84)),
        [anon_sym_DOT] = ACTIONS(SHIFT(90)),
        [anon_sym_is] = ACTIONS(SHIFT(91)),
        [sym_identifier] = ACTIONS(SHIFT(217)),
    },
    [174] = {
        [sym__pattern] = ACTIONS(SHIFT(197)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(169)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(169)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(169)),
        [sym_optional_pattern] = ACTIONS(SHIFT(169)),
        [sym_is_pattern] = ACTIONS(SHIFT(169)),
        [sym_as_pattern] = ACTIONS(SHIFT(169)),
        [sym__expression] = ACTIONS(SHIFT(169)),
        [sym__type_identifier] = ACTIONS(SHIFT(171)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(188)),
        [anon_sym_let] = ACTIONS(SHIFT(175)),
        [anon_sym_var] = ACTIONS(SHIFT(175)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(169)),
        [anon_sym_DOT] = ACTIONS(SHIFT(177)),
        [anon_sym_is] = ACTIONS(SHIFT(178)),
        [sym_identifier] = ACTIONS(SHIFT(193)),
    },
    [175] = {
        [sym__pattern] = ACTIONS(SHIFT(192)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(169)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(169)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(169)),
        [sym_optional_pattern] = ACTIONS(SHIFT(169)),
        [sym_is_pattern] = ACTIONS(SHIFT(169)),
        [sym_as_pattern] = ACTIONS(SHIFT(169)),
        [sym__expression] = ACTIONS(SHIFT(169)),
        [sym__type_identifier] = ACTIONS(SHIFT(171)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(188)),
        [anon_sym_let] = ACTIONS(SHIFT(175)),
        [anon_sym_var] = ACTIONS(SHIFT(175)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(169)),
        [anon_sym_DOT] = ACTIONS(SHIFT(177)),
        [anon_sym_is] = ACTIONS(SHIFT(178)),
        [sym_identifier] = ACTIONS(SHIFT(193)),
    },
    [176] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(192)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(169)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(169)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(169)),
        [sym_optional_pattern] = ACTIONS(SHIFT(169)),
        [sym_is_pattern] = ACTIONS(SHIFT(169)),
        [sym_as_pattern] = ACTIONS(SHIFT(169)),
        [sym__expression] = ACTIONS(SHIFT(169)),
        [sym__type_identifier] = ACTIONS(SHIFT(171)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(188)),
        [anon_sym_let] = ACTIONS(SHIFT(175)),
        [anon_sym_var] = ACTIONS(SHIFT(175)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(169)),
        [anon_sym_DOT] = ACTIONS(SHIFT(177)),
        [anon_sym_is] = ACTIONS(SHIFT(178)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(193)),
    },
    [177] = {
        [sym_identifier] = ACTIONS(SHIFT(186)),
    },
    [178] = {
        [sym_type] = ACTIONS(SHIFT(180)),
        [sym__type_identifier] = ACTIONS(SHIFT(181)),
        [sym__type_name] = ACTIONS(SHIFT(182)),
        [sym_identifier] = ACTIONS(SHIFT(183)),
    },
    [179] = {
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
    [180] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [181] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [182] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(184)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [183] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [184] = {
        [sym__type_identifier] = ACTIONS(SHIFT(185)),
        [sym__type_name] = ACTIONS(SHIFT(182)),
        [sym_identifier] = ACTIONS(SHIFT(183)),
    },
    [185] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [186] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(187)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(188)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [187] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [188] = {
        [sym__pattern] = ACTIONS(SHIFT(83)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(84)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(84)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(189)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(84)),
        [sym_optional_pattern] = ACTIONS(SHIFT(84)),
        [sym_is_pattern] = ACTIONS(SHIFT(84)),
        [sym_as_pattern] = ACTIONS(SHIFT(84)),
        [sym__expression] = ACTIONS(SHIFT(84)),
        [sym__type_identifier] = ACTIONS(SHIFT(86)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(87)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(190)),
        [anon_sym_let] = ACTIONS(SHIFT(89)),
        [anon_sym_var] = ACTIONS(SHIFT(89)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(84)),
        [anon_sym_DOT] = ACTIONS(SHIFT(90)),
        [anon_sym_is] = ACTIONS(SHIFT(91)),
        [sym_identifier] = ACTIONS(SHIFT(92)),
    },
    [189] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(191)),
    },
    [190] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [191] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [192] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(194)),
        [anon_sym_as] = ACTIONS(SHIFT(195)),
    },
    [193] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [194] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [195] = {
        [sym_type] = ACTIONS(SHIFT(196)),
        [sym__type_identifier] = ACTIONS(SHIFT(181)),
        [sym__type_name] = ACTIONS(SHIFT(182)),
        [sym_identifier] = ACTIONS(SHIFT(183)),
    },
    [196] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [197] = {
        [sym__type_annotation] = ACTIONS(SHIFT(198)),
        [anon_sym_in] = ACTIONS(SHIFT(199)),
        [anon_sym_COLON] = ACTIONS(SHIFT(200)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(194)),
        [anon_sym_as] = ACTIONS(SHIFT(195)),
    },
    [198] = {
        [anon_sym_in] = ACTIONS(SHIFT(209)),
    },
    [199] = {
        [sym__expression] = ACTIONS(SHIFT(207)),
        [sym_identifier] = ACTIONS(SHIFT(158)),
    },
    [200] = {
        [sym_type] = ACTIONS(SHIFT(201)),
        [sym__type_identifier] = ACTIONS(SHIFT(202)),
        [sym__type_name] = ACTIONS(SHIFT(203)),
        [sym_identifier] = ACTIONS(SHIFT(204)),
    },
    [201] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [202] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [203] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(205)),
    },
    [204] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [205] = {
        [sym__type_identifier] = ACTIONS(SHIFT(206)),
        [sym__type_name] = ACTIONS(SHIFT(203)),
        [sym_identifier] = ACTIONS(SHIFT(204)),
    },
    [206] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [207] = {
        [sym__code_block] = ACTIONS(SHIFT(208)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(161)),
    },
    [208] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
    },
    [209] = {
        [sym__expression] = ACTIONS(SHIFT(210)),
        [sym_identifier] = ACTIONS(SHIFT(158)),
    },
    [210] = {
        [sym__code_block] = ACTIONS(SHIFT(211)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(161)),
    },
    [211] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
    },
    [212] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(232)),
    },
    [213] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(230)),
    },
    [214] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(225)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1), SHIFT(226)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [215] = {
        [sym__expression] = ACTIONS(SHIFT(218)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(219)),
        [sym_identifier] = ACTIONS(SHIFT(220)),
    },
    [216] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(101)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(84)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(84)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(84)),
        [sym_optional_pattern] = ACTIONS(SHIFT(84)),
        [sym_is_pattern] = ACTIONS(SHIFT(84)),
        [sym_as_pattern] = ACTIONS(SHIFT(84)),
        [sym__expression] = ACTIONS(SHIFT(84)),
        [sym__type_identifier] = ACTIONS(SHIFT(86)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(87)),
        [anon_sym_let] = ACTIONS(SHIFT(89)),
        [anon_sym_var] = ACTIONS(SHIFT(89)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(84)),
        [anon_sym_DOT] = ACTIONS(SHIFT(90)),
        [anon_sym_is] = ACTIONS(SHIFT(91)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(92)),
    },
    [217] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [218] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(223)),
    },
    [219] = {
        [sym__expression] = ACTIONS(SHIFT(221)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(222)),
    },
    [220] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [221] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [222] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [223] = {
        [sym__expression] = ACTIONS(SHIFT(224)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(222)),
    },
    [224] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [225] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 2)),
    },
    [226] = {
        [sym__expression] = ACTIONS(SHIFT(227)),
        [sym_identifier] = ACTIONS(SHIFT(228)),
    },
    [227] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(229)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(226)),
    },
    [228] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [229] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 3)),
    },
    [230] = {
        [sym__code_block] = ACTIONS(SHIFT(231)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(161)),
    },
    [231] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 5)),
    },
    [232] = {
        [sym__expression] = ACTIONS(SHIFT(233)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(223)),
        [sym_identifier] = ACTIONS(SHIFT(220)),
    },
    [233] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(234)),
    },
    [234] = {
        [sym__expression] = ACTIONS(SHIFT(235)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(222)),
    },
    [235] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [236] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(239)),
    },
    [237] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym__expression] = ACTIONS(SHIFT(238)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(158)),
    },
    [238] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [239] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym__expression] = ACTIONS(SHIFT(240)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(158)),
    },
    [240] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [241] = {
        [sym_identifier] = ACTIONS(SHIFT(242)),
    },
    [242] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(243)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(188)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [243] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [244] = {
        [anon_sym_in] = ACTIONS(SHIFT(199)),
    },
    [245] = {
        [sym__expression] = ACTIONS(SHIFT(246)),
        [sym_identifier] = ACTIONS(SHIFT(158)),
    },
    [246] = {
        [sym__code_block] = ACTIONS(SHIFT(247)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(161)),
    },
    [247] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
    },
    [248] = {
        [sym__type_annotation] = ACTIONS(SHIFT(250)),
        [anon_sym_COLON] = ACTIONS(SHIFT(251)),
    },
    [249] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__variable_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__variable_name, 1)),
    },
    [250] = {
        [sym__code_block] = ACTIONS(SHIFT(258)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(259)),
    },
    [251] = {
        [sym_type] = ACTIONS(SHIFT(252)),
        [sym__type_identifier] = ACTIONS(SHIFT(253)),
        [sym__type_name] = ACTIONS(SHIFT(254)),
        [sym_identifier] = ACTIONS(SHIFT(255)),
    },
    [252] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [253] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [254] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(256)),
    },
    [255] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [256] = {
        [sym__type_identifier] = ACTIONS(SHIFT(257)),
        [sym__type_name] = ACTIONS(SHIFT(254)),
        [sym_identifier] = ACTIONS(SHIFT(255)),
    },
    [257] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [258] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_variable_declaration, 4)),
    },
    [259] = {
        [sym__statement] = ACTIONS(SHIFT(35)),
        [sym__statements] = ACTIONS(SHIFT(260)),
        [sym_for_statement] = ACTIONS(SHIFT(37)),
        [sym_for_in_statement] = ACTIONS(SHIFT(37)),
        [sym_while_statement] = ACTIONS(SHIFT(37)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(37)),
        [sym_switch_statement] = ACTIONS(SHIFT(37)),
        [sym__expression] = ACTIONS(SHIFT(37)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(38)),
        [anon_sym_for] = ACTIONS(SHIFT(39)),
        [anon_sym_while] = ACTIONS(SHIFT(40)),
        [anon_sym_repeat] = ACTIONS(SHIFT(41)),
        [anon_sym_switch] = ACTIONS(SHIFT(42)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(37)),
        [sym_identifier] = ACTIONS(SHIFT(43)),
    },
    [260] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(261)),
    },
    [261] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [262] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 3)),
    },
    [263] = {
        [sym__expression] = ACTIONS(SHIFT(264)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(239)),
        [sym_identifier] = ACTIONS(SHIFT(220)),
    },
    [264] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(265)),
    },
    [265] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym__expression] = ACTIONS(SHIFT(266)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(158)),
    },
    [266] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [267] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [268] = {
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [269] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
    },
    [270] = {
        [sym__expression] = ACTIONS(SHIFT(271)),
        [sym_identifier] = ACTIONS(SHIFT(27)),
    },
    [271] = {
        [sym__statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
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
        [anon_sym_switch] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
    },
    [272] = {
        [sym__code_block] = ACTIONS(SHIFT(273)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(274)),
    },
    [273] = {
        [sym__statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
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
        [anon_sym_switch] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_while_statement, 3)),
    },
    [274] = {
        [sym__statement] = ACTIONS(SHIFT(35)),
        [sym__statements] = ACTIONS(SHIFT(275)),
        [sym_for_statement] = ACTIONS(SHIFT(37)),
        [sym_for_in_statement] = ACTIONS(SHIFT(37)),
        [sym_while_statement] = ACTIONS(SHIFT(37)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(37)),
        [sym_switch_statement] = ACTIONS(SHIFT(37)),
        [sym__expression] = ACTIONS(SHIFT(37)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(38)),
        [anon_sym_for] = ACTIONS(SHIFT(39)),
        [anon_sym_while] = ACTIONS(SHIFT(40)),
        [anon_sym_repeat] = ACTIONS(SHIFT(41)),
        [anon_sym_switch] = ACTIONS(SHIFT(42)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(37)),
        [sym_identifier] = ACTIONS(SHIFT(43)),
    },
    [275] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(276)),
    },
    [276] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
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
        [anon_sym_switch] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [277] = {
        [sym__code_block] = ACTIONS(SHIFT(296)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(274)),
    },
    [278] = {
        [sym__type_annotation] = ACTIONS(SHIFT(292)),
        [anon_sym_in] = ACTIONS(SHIFT(293)),
        [anon_sym_COLON] = ACTIONS(SHIFT(200)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(194)),
        [anon_sym_as] = ACTIONS(SHIFT(195)),
    },
    [279] = {
        [sym__for_init] = ACTIONS(SHIFT(212)),
        [sym__for_condition] = ACTIONS(SHIFT(289)),
        [sym_variable_declaration] = ACTIONS(SHIFT(166)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(167)),
        [sym__pattern] = ACTIONS(SHIFT(83)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(84)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(84)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(189)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(84)),
        [sym_optional_pattern] = ACTIONS(SHIFT(84)),
        [sym_is_pattern] = ACTIONS(SHIFT(84)),
        [sym_as_pattern] = ACTIONS(SHIFT(84)),
        [sym__expression] = ACTIONS(SHIFT(214)),
        [sym__expression_list] = ACTIONS(SHIFT(166)),
        [sym__type_identifier] = ACTIONS(SHIFT(86)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(215)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(87)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(190)),
        [anon_sym_let] = ACTIONS(SHIFT(89)),
        [anon_sym_var] = ACTIONS(SHIFT(216)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(84)),
        [anon_sym_DOT] = ACTIONS(SHIFT(90)),
        [anon_sym_is] = ACTIONS(SHIFT(91)),
        [sym_identifier] = ACTIONS(SHIFT(217)),
    },
    [280] = {
        [sym__pattern] = ACTIONS(SHIFT(281)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(169)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(169)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(169)),
        [sym_optional_pattern] = ACTIONS(SHIFT(169)),
        [sym_is_pattern] = ACTIONS(SHIFT(169)),
        [sym_as_pattern] = ACTIONS(SHIFT(169)),
        [sym__expression] = ACTIONS(SHIFT(169)),
        [sym__type_identifier] = ACTIONS(SHIFT(171)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(188)),
        [anon_sym_let] = ACTIONS(SHIFT(175)),
        [anon_sym_var] = ACTIONS(SHIFT(175)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(169)),
        [anon_sym_DOT] = ACTIONS(SHIFT(177)),
        [anon_sym_is] = ACTIONS(SHIFT(178)),
        [sym_identifier] = ACTIONS(SHIFT(193)),
    },
    [281] = {
        [sym__type_annotation] = ACTIONS(SHIFT(282)),
        [anon_sym_in] = ACTIONS(SHIFT(283)),
        [anon_sym_COLON] = ACTIONS(SHIFT(200)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(194)),
        [anon_sym_as] = ACTIONS(SHIFT(195)),
    },
    [282] = {
        [anon_sym_in] = ACTIONS(SHIFT(286)),
    },
    [283] = {
        [sym__expression] = ACTIONS(SHIFT(284)),
        [sym_identifier] = ACTIONS(SHIFT(158)),
    },
    [284] = {
        [sym__code_block] = ACTIONS(SHIFT(285)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(274)),
    },
    [285] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
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
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
    },
    [286] = {
        [sym__expression] = ACTIONS(SHIFT(287)),
        [sym_identifier] = ACTIONS(SHIFT(158)),
    },
    [287] = {
        [sym__code_block] = ACTIONS(SHIFT(288)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(274)),
    },
    [288] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
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
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
    },
    [289] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(290)),
    },
    [290] = {
        [sym__code_block] = ACTIONS(SHIFT(291)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(274)),
    },
    [291] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
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
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 5)),
    },
    [292] = {
        [anon_sym_in] = ACTIONS(SHIFT(283)),
    },
    [293] = {
        [sym__expression] = ACTIONS(SHIFT(294)),
        [sym_identifier] = ACTIONS(SHIFT(158)),
    },
    [294] = {
        [sym__code_block] = ACTIONS(SHIFT(295)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(274)),
    },
    [295] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
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
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
    },
    [296] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
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
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 3)),
    },
    [297] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_case_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_case] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [298] = {
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
        [anon_sym_case] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
    },
    [299] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(325)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(326)),
        [anon_sym_COLON] = ACTIONS(SHIFT(327)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(316)),
        [anon_sym_as] = ACTIONS(SHIFT(317)),
    },
    [300] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [301] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(322)),
    },
    [302] = {
        [sym__pattern] = ACTIONS(SHIFT(83)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(84)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(84)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(319)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(84)),
        [sym_optional_pattern] = ACTIONS(SHIFT(84)),
        [sym_is_pattern] = ACTIONS(SHIFT(84)),
        [sym_as_pattern] = ACTIONS(SHIFT(84)),
        [sym__expression] = ACTIONS(SHIFT(84)),
        [sym__type_identifier] = ACTIONS(SHIFT(86)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(87)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(320)),
        [anon_sym_let] = ACTIONS(SHIFT(89)),
        [anon_sym_var] = ACTIONS(SHIFT(89)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(84)),
        [anon_sym_DOT] = ACTIONS(SHIFT(90)),
        [anon_sym_is] = ACTIONS(SHIFT(91)),
        [sym_identifier] = ACTIONS(SHIFT(92)),
    },
    [303] = {
        [sym__pattern] = ACTIONS(SHIFT(315)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(300)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(300)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(300)),
        [sym_optional_pattern] = ACTIONS(SHIFT(300)),
        [sym_is_pattern] = ACTIONS(SHIFT(300)),
        [sym_as_pattern] = ACTIONS(SHIFT(300)),
        [sym__expression] = ACTIONS(SHIFT(300)),
        [sym__type_identifier] = ACTIONS(SHIFT(301)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(302)),
        [anon_sym_let] = ACTIONS(SHIFT(303)),
        [anon_sym_var] = ACTIONS(SHIFT(303)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(300)),
        [anon_sym_DOT] = ACTIONS(SHIFT(304)),
        [anon_sym_is] = ACTIONS(SHIFT(305)),
        [sym_identifier] = ACTIONS(SHIFT(306)),
    },
    [304] = {
        [sym_identifier] = ACTIONS(SHIFT(313)),
    },
    [305] = {
        [sym_type] = ACTIONS(SHIFT(307)),
        [sym__type_identifier] = ACTIONS(SHIFT(308)),
        [sym__type_name] = ACTIONS(SHIFT(309)),
        [sym_identifier] = ACTIONS(SHIFT(310)),
    },
    [306] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [307] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [308] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [309] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(311)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [310] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [311] = {
        [sym__type_identifier] = ACTIONS(SHIFT(312)),
        [sym__type_name] = ACTIONS(SHIFT(309)),
        [sym_identifier] = ACTIONS(SHIFT(310)),
    },
    [312] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [313] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(314)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(302)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [314] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [315] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(316)),
        [anon_sym_as] = ACTIONS(SHIFT(317)),
    },
    [316] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [317] = {
        [sym_type] = ACTIONS(SHIFT(318)),
        [sym__type_identifier] = ACTIONS(SHIFT(308)),
        [sym__type_name] = ACTIONS(SHIFT(309)),
        [sym_identifier] = ACTIONS(SHIFT(310)),
    },
    [318] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [319] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(321)),
    },
    [320] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [321] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [322] = {
        [sym_identifier] = ACTIONS(SHIFT(323)),
    },
    [323] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(324)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(302)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [324] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [325] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(331)),
    },
    [326] = {
        [sym__pattern] = ACTIONS(SHIFT(329)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(300)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(300)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(300)),
        [sym_optional_pattern] = ACTIONS(SHIFT(300)),
        [sym_is_pattern] = ACTIONS(SHIFT(300)),
        [sym_as_pattern] = ACTIONS(SHIFT(300)),
        [sym__expression] = ACTIONS(SHIFT(300)),
        [sym__type_identifier] = ACTIONS(SHIFT(301)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(302)),
        [anon_sym_let] = ACTIONS(SHIFT(303)),
        [anon_sym_var] = ACTIONS(SHIFT(303)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(300)),
        [anon_sym_DOT] = ACTIONS(SHIFT(304)),
        [anon_sym_is] = ACTIONS(SHIFT(305)),
        [sym_identifier] = ACTIONS(SHIFT(306)),
    },
    [327] = {
        [sym__statement] = ACTIONS(SHIFT(20)),
        [sym_for_statement] = ACTIONS(SHIFT(21)),
        [sym_for_in_statement] = ACTIONS(SHIFT(21)),
        [sym_while_statement] = ACTIONS(SHIFT(21)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(21)),
        [sym_switch_statement] = ACTIONS(SHIFT(21)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [sym__expression] = ACTIONS(SHIFT(21)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(328)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_for] = ACTIONS(SHIFT(23)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_while] = ACTIONS(SHIFT(24)),
        [anon_sym_repeat] = ACTIONS(SHIFT(25)),
        [anon_sym_switch] = ACTIONS(SHIFT(26)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [sym__declaration] = ACTIONS(SHIFT(21)),
        [sym_identifier] = ACTIONS(SHIFT(27)),
    },
    [328] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 4)),
    },
    [329] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(330)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(326)),
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(316)),
        [anon_sym_as] = ACTIONS(SHIFT(317)),
    },
    [330] = {
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [331] = {
        [sym__statement] = ACTIONS(SHIFT(20)),
        [sym_for_statement] = ACTIONS(SHIFT(21)),
        [sym_for_in_statement] = ACTIONS(SHIFT(21)),
        [sym_while_statement] = ACTIONS(SHIFT(21)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(21)),
        [sym_switch_statement] = ACTIONS(SHIFT(21)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [sym__expression] = ACTIONS(SHIFT(21)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(332)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_for] = ACTIONS(SHIFT(23)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_while] = ACTIONS(SHIFT(24)),
        [anon_sym_repeat] = ACTIONS(SHIFT(25)),
        [anon_sym_switch] = ACTIONS(SHIFT(26)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [sym__declaration] = ACTIONS(SHIFT(21)),
        [sym_identifier] = ACTIONS(SHIFT(27)),
    },
    [332] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 5)),
    },
    [333] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 5)),
    },
    [334] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 2)),
    },
    [335] = {
        [anon_sym_while] = ACTIONS(SHIFT(336)),
    },
    [336] = {
        [sym__expression] = ACTIONS(SHIFT(337)),
        [sym_identifier] = ACTIONS(SHIFT(10)),
    },
    [337] = {
        [sym__statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
    },
    [338] = {
        [sym__code_block] = ACTIONS(SHIFT(339)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(340)),
    },
    [339] = {
        [sym__statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_while_statement, 3)),
    },
    [340] = {
        [sym__statement] = ACTIONS(SHIFT(35)),
        [sym__statements] = ACTIONS(SHIFT(341)),
        [sym_for_statement] = ACTIONS(SHIFT(37)),
        [sym_for_in_statement] = ACTIONS(SHIFT(37)),
        [sym_while_statement] = ACTIONS(SHIFT(37)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(37)),
        [sym_switch_statement] = ACTIONS(SHIFT(37)),
        [sym__expression] = ACTIONS(SHIFT(37)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(38)),
        [anon_sym_for] = ACTIONS(SHIFT(39)),
        [anon_sym_while] = ACTIONS(SHIFT(40)),
        [anon_sym_repeat] = ACTIONS(SHIFT(41)),
        [anon_sym_switch] = ACTIONS(SHIFT(42)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(37)),
        [sym_identifier] = ACTIONS(SHIFT(43)),
    },
    [341] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(342)),
    },
    [342] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [343] = {
        [sym__code_block] = ACTIONS(SHIFT(362)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(340)),
    },
    [344] = {
        [sym__type_annotation] = ACTIONS(SHIFT(358)),
        [anon_sym_in] = ACTIONS(SHIFT(359)),
        [anon_sym_COLON] = ACTIONS(SHIFT(200)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(194)),
        [anon_sym_as] = ACTIONS(SHIFT(195)),
    },
    [345] = {
        [sym__for_init] = ACTIONS(SHIFT(212)),
        [sym__for_condition] = ACTIONS(SHIFT(355)),
        [sym_variable_declaration] = ACTIONS(SHIFT(166)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(167)),
        [sym__pattern] = ACTIONS(SHIFT(83)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(84)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(84)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(189)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(84)),
        [sym_optional_pattern] = ACTIONS(SHIFT(84)),
        [sym_is_pattern] = ACTIONS(SHIFT(84)),
        [sym_as_pattern] = ACTIONS(SHIFT(84)),
        [sym__expression] = ACTIONS(SHIFT(214)),
        [sym__expression_list] = ACTIONS(SHIFT(166)),
        [sym__type_identifier] = ACTIONS(SHIFT(86)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(215)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(87)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(190)),
        [anon_sym_let] = ACTIONS(SHIFT(89)),
        [anon_sym_var] = ACTIONS(SHIFT(216)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(84)),
        [anon_sym_DOT] = ACTIONS(SHIFT(90)),
        [anon_sym_is] = ACTIONS(SHIFT(91)),
        [sym_identifier] = ACTIONS(SHIFT(217)),
    },
    [346] = {
        [sym__pattern] = ACTIONS(SHIFT(347)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(169)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(169)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(169)),
        [sym_optional_pattern] = ACTIONS(SHIFT(169)),
        [sym_is_pattern] = ACTIONS(SHIFT(169)),
        [sym_as_pattern] = ACTIONS(SHIFT(169)),
        [sym__expression] = ACTIONS(SHIFT(169)),
        [sym__type_identifier] = ACTIONS(SHIFT(171)),
        [sym__type_name] = ACTIONS(SHIFT(65)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(188)),
        [anon_sym_let] = ACTIONS(SHIFT(175)),
        [anon_sym_var] = ACTIONS(SHIFT(175)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(169)),
        [anon_sym_DOT] = ACTIONS(SHIFT(177)),
        [anon_sym_is] = ACTIONS(SHIFT(178)),
        [sym_identifier] = ACTIONS(SHIFT(193)),
    },
    [347] = {
        [sym__type_annotation] = ACTIONS(SHIFT(348)),
        [anon_sym_in] = ACTIONS(SHIFT(349)),
        [anon_sym_COLON] = ACTIONS(SHIFT(200)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(194)),
        [anon_sym_as] = ACTIONS(SHIFT(195)),
    },
    [348] = {
        [anon_sym_in] = ACTIONS(SHIFT(352)),
    },
    [349] = {
        [sym__expression] = ACTIONS(SHIFT(350)),
        [sym_identifier] = ACTIONS(SHIFT(158)),
    },
    [350] = {
        [sym__code_block] = ACTIONS(SHIFT(351)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(340)),
    },
    [351] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
    },
    [352] = {
        [sym__expression] = ACTIONS(SHIFT(353)),
        [sym_identifier] = ACTIONS(SHIFT(158)),
    },
    [353] = {
        [sym__code_block] = ACTIONS(SHIFT(354)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(340)),
    },
    [354] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
    },
    [355] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(356)),
    },
    [356] = {
        [sym__code_block] = ACTIONS(SHIFT(357)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(340)),
    },
    [357] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 5)),
    },
    [358] = {
        [anon_sym_in] = ACTIONS(SHIFT(349)),
    },
    [359] = {
        [sym__expression] = ACTIONS(SHIFT(360)),
        [sym_identifier] = ACTIONS(SHIFT(158)),
    },
    [360] = {
        [sym__code_block] = ACTIONS(SHIFT(361)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(340)),
    },
    [361] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
    },
    [362] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 3)),
    },
    [363] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [364] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
    },
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_swift);
