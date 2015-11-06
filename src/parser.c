#include "tree_sitter/parser.h"

#define STATE_COUNT 461
#define SYMBOL_COUNT 83

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
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(72);
            if (lookahead == ':')
                ADVANCE(73);
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
        case 73:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 74:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(74);
            if (lookahead == 'f')
                ADVANCE(75);
            if (lookahead == 'i')
                ADVANCE(78);
            if (lookahead == 'r')
                ADVANCE(80);
            if (lookahead == 'w')
                ADVANCE(86);
            LEX_ERROR();
        case 75:
            if (lookahead == 'o')
                ADVANCE(76);
            LEX_ERROR();
        case 76:
            if (lookahead == 'r')
                ADVANCE(77);
            LEX_ERROR();
        case 77:
            ACCEPT_TOKEN(anon_sym_for);
        case 78:
            if (lookahead == 'f')
                ADVANCE(79);
            LEX_ERROR();
        case 79:
            ACCEPT_TOKEN(anon_sym_if);
        case 80:
            if (lookahead == 'e')
                ADVANCE(81);
            LEX_ERROR();
        case 81:
            if (lookahead == 'p')
                ADVANCE(82);
            LEX_ERROR();
        case 82:
            if (lookahead == 'e')
                ADVANCE(83);
            LEX_ERROR();
        case 83:
            if (lookahead == 'a')
                ADVANCE(84);
            LEX_ERROR();
        case 84:
            if (lookahead == 't')
                ADVANCE(85);
            LEX_ERROR();
        case 85:
            ACCEPT_TOKEN(anon_sym_repeat);
        case 86:
            if (lookahead == 'h')
                ADVANCE(87);
            LEX_ERROR();
        case 87:
            if (lookahead == 'i')
                ADVANCE(88);
            LEX_ERROR();
        case 88:
            if (lookahead == 'l')
                ADVANCE(89);
            LEX_ERROR();
        case 89:
            if (lookahead == 'e')
                ADVANCE(90);
            LEX_ERROR();
        case 90:
            ACCEPT_TOKEN(anon_sym_while);
        case 91:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(91);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(96);
            if (lookahead == '}')
                ADVANCE(103);
            LEX_ERROR();
        case 92:
            if (lookahead == 'a')
                ADVANCE(93);
            LEX_ERROR();
        case 93:
            if (lookahead == 's')
                ADVANCE(94);
            LEX_ERROR();
        case 94:
            if (lookahead == 'e')
                ADVANCE(95);
            LEX_ERROR();
        case 95:
            ACCEPT_TOKEN(anon_sym_case);
        case 96:
            if (lookahead == 'e')
                ADVANCE(97);
            LEX_ERROR();
        case 97:
            if (lookahead == 'f')
                ADVANCE(98);
            LEX_ERROR();
        case 98:
            if (lookahead == 'a')
                ADVANCE(99);
            LEX_ERROR();
        case 99:
            if (lookahead == 'u')
                ADVANCE(100);
            LEX_ERROR();
        case 100:
            if (lookahead == 'l')
                ADVANCE(101);
            LEX_ERROR();
        case 101:
            if (lookahead == 't')
                ADVANCE(102);
            LEX_ERROR();
        case 102:
            ACCEPT_TOKEN(anon_sym_default);
        case 103:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 104:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(104);
            if (lookahead == '}')
                ADVANCE(103);
            LEX_ERROR();
        case 105:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(105);
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
        case 106:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(106);
            if (lookahead == ':')
                ADVANCE(73);
            LEX_ERROR();
        case 107:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(107);
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
                ADVANCE(108);
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
                ADVANCE(103);
            LEX_ERROR();
        case 108:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(109);
            ACCEPT_TOKEN(sym_identifier);
        case 109:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'f')
                ADVANCE(110);
            ACCEPT_TOKEN(sym_identifier);
        case 110:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(111);
            ACCEPT_TOKEN(sym_identifier);
        case 111:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'u')
                ADVANCE(112);
            ACCEPT_TOKEN(sym_identifier);
        case 112:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(113);
            ACCEPT_TOKEN(sym_identifier);
        case 113:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(114);
            ACCEPT_TOKEN(sym_identifier);
        case 114:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_default);
        case 115:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(115);
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
                ADVANCE(108);
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
                ADVANCE(103);
            LEX_ERROR();
        case 116:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(116);
            if (lookahead == ':')
                ADVANCE(73);
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
                ADVANCE(108);
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
                ADVANCE(103);
            LEX_ERROR();
        case 117:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(117);
            if (lookahead == 'e')
                ADVANCE(118);
            LEX_ERROR();
        case 118:
            if (lookahead == 'l')
                ADVANCE(119);
            LEX_ERROR();
        case 119:
            if (lookahead == 's')
                ADVANCE(120);
            LEX_ERROR();
        case 120:
            if (lookahead == 'e')
                ADVANCE(121);
            LEX_ERROR();
        case 121:
            ACCEPT_TOKEN(anon_sym_else);
        case 122:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(122);
            if (lookahead == ',')
                ADVANCE(123);
            if (lookahead == 'e')
                ADVANCE(118);
            LEX_ERROR();
        case 123:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 124:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(124);
            if (lookahead == '(')
                ADVANCE(43);
            LEX_ERROR();
        case 125:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(125);
            if (lookahead == '=')
                ADVANCE(126);
            if (lookahead == '?')
                ADVANCE(127);
            if (lookahead == 'a')
                ADVANCE(128);
            LEX_ERROR();
        case 126:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 127:
            ACCEPT_TOKEN(anon_sym_QMARK);
        case 128:
            if (lookahead == 's')
                ADVANCE(129);
            LEX_ERROR();
        case 129:
            ACCEPT_TOKEN(anon_sym_as);
        case 130:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(130);
            if (lookahead == '.')
                ADVANCE(44);
            LEX_ERROR();
        case 131:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(131);
            if (lookahead == '(')
                ADVANCE(43);
            if (lookahead == ')')
                ADVANCE(132);
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
        case 132:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 133:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(133);
            if (lookahead == '.')
                ADVANCE(44);
            if (lookahead == '=')
                ADVANCE(126);
            if (lookahead == '?')
                ADVANCE(127);
            if (lookahead == 'a')
                ADVANCE(128);
            LEX_ERROR();
        case 134:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(134);
            if (lookahead == '(')
                ADVANCE(43);
            if (lookahead == '=')
                ADVANCE(126);
            if (lookahead == '?')
                ADVANCE(127);
            if (lookahead == 'a')
                ADVANCE(128);
            LEX_ERROR();
        case 135:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(135);
            if (lookahead == ')')
                ADVANCE(132);
            if (lookahead == ',')
                ADVANCE(123);
            if (lookahead == '?')
                ADVANCE(127);
            if (lookahead == 'a')
                ADVANCE(128);
            LEX_ERROR();
        case 136:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(136);
            if (lookahead == ')')
                ADVANCE(132);
            LEX_ERROR();
        case 137:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(137);
            if (lookahead == ')')
                ADVANCE(132);
            if (lookahead == ',')
                ADVANCE(123);
            if (lookahead == '.')
                ADVANCE(44);
            if (lookahead == '?')
                ADVANCE(127);
            if (lookahead == 'a')
                ADVANCE(128);
            LEX_ERROR();
        case 138:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(138);
            if (lookahead == '(')
                ADVANCE(43);
            if (lookahead == ')')
                ADVANCE(132);
            if (lookahead == ',')
                ADVANCE(123);
            if (lookahead == '?')
                ADVANCE(127);
            if (lookahead == 'a')
                ADVANCE(128);
            LEX_ERROR();
        case 139:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(139);
            if (lookahead == '*')
                ADVANCE(140);
            if (lookahead == 'O')
                ADVANCE(141);
            if (lookahead == 'i')
                ADVANCE(164);
            if (lookahead == 't')
                ADVANCE(187);
            if (lookahead == 'w')
                ADVANCE(191);
            LEX_ERROR();
        case 140:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 141:
            if (lookahead == 'S')
                ADVANCE(142);
            LEX_ERROR();
        case 142:
            if (lookahead == 'X')
                ADVANCE(143);
            LEX_ERROR();
        case 143:
            if (lookahead == 'A')
                ADVANCE(144);
            ACCEPT_TOKEN(anon_sym_OSX);
        case 144:
            if (lookahead == 'p')
                ADVANCE(145);
            LEX_ERROR();
        case 145:
            if (lookahead == 'p')
                ADVANCE(146);
            LEX_ERROR();
        case 146:
            if (lookahead == 'l')
                ADVANCE(147);
            LEX_ERROR();
        case 147:
            if (lookahead == 'i')
                ADVANCE(148);
            LEX_ERROR();
        case 148:
            if (lookahead == 'c')
                ADVANCE(149);
            LEX_ERROR();
        case 149:
            if (lookahead == 'a')
                ADVANCE(150);
            LEX_ERROR();
        case 150:
            if (lookahead == 't')
                ADVANCE(151);
            LEX_ERROR();
        case 151:
            if (lookahead == 'i')
                ADVANCE(152);
            LEX_ERROR();
        case 152:
            if (lookahead == 'o')
                ADVANCE(153);
            LEX_ERROR();
        case 153:
            if (lookahead == 'n')
                ADVANCE(154);
            LEX_ERROR();
        case 154:
            if (lookahead == 'E')
                ADVANCE(155);
            LEX_ERROR();
        case 155:
            if (lookahead == 'x')
                ADVANCE(156);
            LEX_ERROR();
        case 156:
            if (lookahead == 't')
                ADVANCE(157);
            LEX_ERROR();
        case 157:
            if (lookahead == 'e')
                ADVANCE(158);
            LEX_ERROR();
        case 158:
            if (lookahead == 'n')
                ADVANCE(159);
            LEX_ERROR();
        case 159:
            if (lookahead == 's')
                ADVANCE(160);
            LEX_ERROR();
        case 160:
            if (lookahead == 'i')
                ADVANCE(161);
            LEX_ERROR();
        case 161:
            if (lookahead == 'o')
                ADVANCE(162);
            LEX_ERROR();
        case 162:
            if (lookahead == 'n')
                ADVANCE(163);
            LEX_ERROR();
        case 163:
            ACCEPT_TOKEN(anon_sym_OSXApplicationExtension);
        case 164:
            if (lookahead == 'O')
                ADVANCE(165);
            LEX_ERROR();
        case 165:
            if (lookahead == 'S')
                ADVANCE(166);
            LEX_ERROR();
        case 166:
            if (lookahead == 'A')
                ADVANCE(167);
            ACCEPT_TOKEN(anon_sym_iOS);
        case 167:
            if (lookahead == 'p')
                ADVANCE(168);
            LEX_ERROR();
        case 168:
            if (lookahead == 'p')
                ADVANCE(169);
            LEX_ERROR();
        case 169:
            if (lookahead == 'l')
                ADVANCE(170);
            LEX_ERROR();
        case 170:
            if (lookahead == 'i')
                ADVANCE(171);
            LEX_ERROR();
        case 171:
            if (lookahead == 'c')
                ADVANCE(172);
            LEX_ERROR();
        case 172:
            if (lookahead == 'a')
                ADVANCE(173);
            LEX_ERROR();
        case 173:
            if (lookahead == 't')
                ADVANCE(174);
            LEX_ERROR();
        case 174:
            if (lookahead == 'i')
                ADVANCE(175);
            LEX_ERROR();
        case 175:
            if (lookahead == 'o')
                ADVANCE(176);
            LEX_ERROR();
        case 176:
            if (lookahead == 'n')
                ADVANCE(177);
            LEX_ERROR();
        case 177:
            if (lookahead == 'E')
                ADVANCE(178);
            LEX_ERROR();
        case 178:
            if (lookahead == 'x')
                ADVANCE(179);
            LEX_ERROR();
        case 179:
            if (lookahead == 't')
                ADVANCE(180);
            LEX_ERROR();
        case 180:
            if (lookahead == 'e')
                ADVANCE(181);
            LEX_ERROR();
        case 181:
            if (lookahead == 'n')
                ADVANCE(182);
            LEX_ERROR();
        case 182:
            if (lookahead == 's')
                ADVANCE(183);
            LEX_ERROR();
        case 183:
            if (lookahead == 'i')
                ADVANCE(184);
            LEX_ERROR();
        case 184:
            if (lookahead == 'o')
                ADVANCE(185);
            LEX_ERROR();
        case 185:
            if (lookahead == 'n')
                ADVANCE(186);
            LEX_ERROR();
        case 186:
            ACCEPT_TOKEN(anon_sym_iOSApplicationExtension);
        case 187:
            if (lookahead == 'v')
                ADVANCE(188);
            LEX_ERROR();
        case 188:
            if (lookahead == 'O')
                ADVANCE(189);
            LEX_ERROR();
        case 189:
            if (lookahead == 'S')
                ADVANCE(190);
            LEX_ERROR();
        case 190:
            ACCEPT_TOKEN(anon_sym_tvOS);
        case 191:
            if (lookahead == 'a')
                ADVANCE(192);
            LEX_ERROR();
        case 192:
            if (lookahead == 't')
                ADVANCE(193);
            LEX_ERROR();
        case 193:
            if (lookahead == 'c')
                ADVANCE(194);
            LEX_ERROR();
        case 194:
            if (lookahead == 'h')
                ADVANCE(195);
            LEX_ERROR();
        case 195:
            if (lookahead == 'O')
                ADVANCE(196);
            LEX_ERROR();
        case 196:
            if (lookahead == 'S')
                ADVANCE(197);
            LEX_ERROR();
        case 197:
            ACCEPT_TOKEN(anon_sym_watchOS);
        case 198:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(198);
            if (lookahead == ')')
                ADVANCE(132);
            if (lookahead == ',')
                ADVANCE(123);
            LEX_ERROR();
        case 199:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(199);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(200);
            LEX_ERROR();
        case 200:
            if (lookahead == '.')
                ADVANCE(201);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(200);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 201:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(202);
            LEX_ERROR();
        case 202:
            if (lookahead == '.')
                ADVANCE(203);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(202);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 203:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(204);
            LEX_ERROR();
        case 204:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(204);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 205:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(205);
            if (lookahead == '#')
                ADVANCE(59);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'l')
                ADVANCE(206);
            if (lookahead == 'v')
                ADVANCE(209);
            LEX_ERROR();
        case 206:
            if (lookahead == 'e')
                ADVANCE(207);
            LEX_ERROR();
        case 207:
            if (lookahead == 't')
                ADVANCE(208);
            LEX_ERROR();
        case 208:
            ACCEPT_TOKEN(anon_sym_let);
        case 209:
            if (lookahead == 'a')
                ADVANCE(210);
            LEX_ERROR();
        case 210:
            if (lookahead == 'r')
                ADVANCE(211);
            LEX_ERROR();
        case 211:
            ACCEPT_TOKEN(anon_sym_var);
        case 212:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(212);
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
                ADVANCE(103);
            LEX_ERROR();
        case 213:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(213);
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
                ADVANCE(103);
            LEX_ERROR();
        case 214:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(214);
            if (lookahead == ':')
                ADVANCE(73);
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
                ADVANCE(103);
            LEX_ERROR();
        case 215:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(215);
            if (lookahead == ',')
                ADVANCE(123);
            if (lookahead == '{')
                ADVANCE(70);
            LEX_ERROR();
        case 216:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(216);
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
                ADVANCE(217);
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
                ADVANCE(103);
            LEX_ERROR();
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
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(220);
            ACCEPT_TOKEN(sym_identifier);
        case 220:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_else);
        case 221:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(221);
            if (lookahead == 'i')
                ADVANCE(78);
            if (lookahead == '{')
                ADVANCE(70);
            LEX_ERROR();
        case 222:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(222);
            if (lookahead == 'w')
                ADVANCE(86);
            LEX_ERROR();
        case 223:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(223);
            if (lookahead == ';')
                ADVANCE(41);
            LEX_ERROR();
        case 224:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(224);
            if (lookahead == ':')
                ADVANCE(73);
            if (lookahead == '?')
                ADVANCE(127);
            if (lookahead == 'a')
                ADVANCE(128);
            if (lookahead == 'i')
                ADVANCE(225);
            LEX_ERROR();
        case 225:
            if (lookahead == 'n')
                ADVANCE(226);
            LEX_ERROR();
        case 226:
            ACCEPT_TOKEN(anon_sym_in);
        case 227:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(227);
            if (lookahead == ',')
                ADVANCE(123);
            if (lookahead == ':')
                ADVANCE(73);
            if (lookahead == ';')
                ADVANCE(41);
            if (lookahead == '?')
                ADVANCE(127);
            if (lookahead == 'a')
                ADVANCE(128);
            if (lookahead == 'i')
                ADVANCE(225);
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 229:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(229);
            if (lookahead == '(')
                ADVANCE(43);
            if (lookahead == ')')
                ADVANCE(132);
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
        case 230:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(230);
            if (lookahead == ',')
                ADVANCE(123);
            if (lookahead == '.')
                ADVANCE(44);
            if (lookahead == ':')
                ADVANCE(73);
            if (lookahead == ';')
                ADVANCE(41);
            if (lookahead == '?')
                ADVANCE(127);
            if (lookahead == 'a')
                ADVANCE(128);
            if (lookahead == 'i')
                ADVANCE(225);
            LEX_ERROR();
        case 231:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(231);
            if (lookahead == '.')
                ADVANCE(44);
            if (lookahead == ':')
                ADVANCE(73);
            if (lookahead == '?')
                ADVANCE(127);
            if (lookahead == 'a')
                ADVANCE(128);
            if (lookahead == 'i')
                ADVANCE(225);
            LEX_ERROR();
        case 232:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(232);
            if (lookahead == '(')
                ADVANCE(43);
            if (lookahead == ':')
                ADVANCE(73);
            if (lookahead == '?')
                ADVANCE(127);
            if (lookahead == 'a')
                ADVANCE(128);
            if (lookahead == 'i')
                ADVANCE(225);
            LEX_ERROR();
        case 233:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(233);
            if (lookahead == 'i')
                ADVANCE(225);
            LEX_ERROR();
        case 234:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(234);
            if (lookahead == '.')
                ADVANCE(44);
            if (lookahead == 'i')
                ADVANCE(225);
            LEX_ERROR();
        case 235:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(235);
            if (lookahead == ')')
                ADVANCE(132);
            if (lookahead == ',')
                ADVANCE(123);
            if (lookahead == ';')
                ADVANCE(41);
            if (lookahead == '?')
                ADVANCE(127);
            if (lookahead == 'a')
                ADVANCE(128);
            LEX_ERROR();
        case 236:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(236);
            if (lookahead == ')')
                ADVANCE(132);
            if (lookahead == ',')
                ADVANCE(123);
            if (lookahead == '.')
                ADVANCE(44);
            if (lookahead == ';')
                ADVANCE(41);
            if (lookahead == '?')
                ADVANCE(127);
            if (lookahead == 'a')
                ADVANCE(128);
            LEX_ERROR();
        case 237:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(237);
            if (lookahead == ')')
                ADVANCE(132);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 238:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(238);
            if (lookahead == ',')
                ADVANCE(123);
            if (lookahead == ';')
                ADVANCE(41);
            LEX_ERROR();
        case 239:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(239);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == '{')
                ADVANCE(70);
            LEX_ERROR();
        case 240:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(240);
            if (lookahead == '.')
                ADVANCE(44);
            if (lookahead == '{')
                ADVANCE(70);
            LEX_ERROR();
        case 241:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(241);
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
                ADVANCE(108);
            if (lookahead == 'e')
                ADVANCE(217);
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
                ADVANCE(103);
            LEX_ERROR();
        case 242:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(242);
            if (lookahead == ',')
                ADVANCE(123);
            if (lookahead == ':')
                ADVANCE(73);
            if (lookahead == '?')
                ADVANCE(127);
            if (lookahead == 'a')
                ADVANCE(128);
            LEX_ERROR();
        case 243:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(243);
            if (lookahead == ',')
                ADVANCE(123);
            if (lookahead == '.')
                ADVANCE(44);
            if (lookahead == ':')
                ADVANCE(73);
            if (lookahead == '?')
                ADVANCE(127);
            if (lookahead == 'a')
                ADVANCE(128);
            LEX_ERROR();
        case 244:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(244);
            if (lookahead == '(')
                ADVANCE(43);
            if (lookahead == ',')
                ADVANCE(123);
            if (lookahead == ':')
                ADVANCE(73);
            if (lookahead == '?')
                ADVANCE(127);
            if (lookahead == 'a')
                ADVANCE(128);
            LEX_ERROR();
        case 245:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(245);
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
                ADVANCE(217);
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
        case 246:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(246);
            if (lookahead == '#')
                ADVANCE(59);
            if (lookahead == '(')
                ADVANCE(43);
            if (lookahead == ')')
                ADVANCE(132);
            if (lookahead == '*')
                ADVANCE(140);
            if (lookahead == ',')
                ADVANCE(123);
            if (lookahead == '.')
                ADVANCE(44);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(200);
            if (lookahead == ':')
                ADVANCE(73);
            if (lookahead == ';')
                ADVANCE(41);
            if (lookahead == '=')
                ADVANCE(126);
            if (lookahead == '?')
                ADVANCE(127);
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
                ADVANCE(247);
            if (lookahead == '_')
                ADVANCE(45);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(270);
            if (lookahead == 'c')
                ADVANCE(46);
            if (lookahead == 'd')
                ADVANCE(108);
            if (lookahead == 'e')
                ADVANCE(217);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'g')
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(272);
            if (lookahead == 'l')
                ADVANCE(52);
            if (lookahead == 'r')
                ADVANCE(22);
            if (lookahead == 's')
                ADVANCE(28);
            if (lookahead == 't')
                ADVANCE(296);
            if (lookahead == 'v')
                ADVANCE(55);
            if (lookahead == 'w')
                ADVANCE(300);
            if (lookahead == '{')
                ADVANCE(70);
            if (lookahead == '}')
                ADVANCE(103);
            LEX_ERROR();
        case 247:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(248);
            ACCEPT_TOKEN(sym_identifier);
        case 248:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'W') ||
                (lookahead == 'Y') ||
                (lookahead == 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'X')
                ADVANCE(249);
            ACCEPT_TOKEN(sym_identifier);
        case 249:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (lookahead == 'A')
                ADVANCE(250);
            if (('B' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_OSX);
        case 250:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(251);
            ACCEPT_TOKEN(sym_identifier);
        case 251:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(252);
            ACCEPT_TOKEN(sym_identifier);
        case 252:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
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
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(255);
            ACCEPT_TOKEN(sym_identifier);
        case 255:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(256);
            ACCEPT_TOKEN(sym_identifier);
        case 256:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(257);
            ACCEPT_TOKEN(sym_identifier);
        case 257:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(258);
            ACCEPT_TOKEN(sym_identifier);
        case 258:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(259);
            ACCEPT_TOKEN(sym_identifier);
        case 259:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(260);
            ACCEPT_TOKEN(sym_identifier);
        case 260:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'D') ||
                ('F' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'E')
                ADVANCE(261);
            ACCEPT_TOKEN(sym_identifier);
        case 261:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(3);
            if (lookahead == 'x')
                ADVANCE(262);
            ACCEPT_TOKEN(sym_identifier);
        case 262:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(263);
            ACCEPT_TOKEN(sym_identifier);
        case 263:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(264);
            ACCEPT_TOKEN(sym_identifier);
        case 264:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(265);
            ACCEPT_TOKEN(sym_identifier);
        case 265:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(266);
            ACCEPT_TOKEN(sym_identifier);
        case 266:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(267);
            ACCEPT_TOKEN(sym_identifier);
        case 267:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(268);
            ACCEPT_TOKEN(sym_identifier);
        case 268:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(269);
            ACCEPT_TOKEN(sym_identifier);
        case 269:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_OSXApplicationExtension);
        case 270:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(271);
            ACCEPT_TOKEN(sym_identifier);
        case 271:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_as);
        case 272:
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
                ADVANCE(273);
            if (lookahead == 'f')
                ADVANCE(16);
            if (lookahead == 'm')
                ADVANCE(17);
            if (lookahead == 'n')
                ADVANCE(295);
            if (lookahead == 's')
                ADVANCE(51);
            ACCEPT_TOKEN(sym_identifier);
        case 273:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
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
            ACCEPT_TOKEN(anon_sym_iOS);
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
            ACCEPT_TOKEN(anon_sym_iOSApplicationExtension);
        case 295:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_in);
        case 296:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'v')
                ADVANCE(297);
            ACCEPT_TOKEN(sym_identifier);
        case 297:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(298);
            ACCEPT_TOKEN(sym_identifier);
        case 298:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(299);
            ACCEPT_TOKEN(sym_identifier);
        case 299:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_tvOS);
        case 300:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(301);
            if (lookahead == 'h')
                ADVANCE(35);
            ACCEPT_TOKEN(sym_identifier);
        case 301:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(302);
            ACCEPT_TOKEN(sym_identifier);
        case 302:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(303);
            ACCEPT_TOKEN(sym_identifier);
        case 303:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(304);
            ACCEPT_TOKEN(sym_identifier);
        case 304:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(305);
            ACCEPT_TOKEN(sym_identifier);
        case 305:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(306);
            ACCEPT_TOKEN(sym_identifier);
        case 306:
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
                ADVANCE(246);
            if (lookahead == '#')
                ADVANCE(59);
            if (lookahead == '(')
                ADVANCE(43);
            if (lookahead == ')')
                ADVANCE(132);
            if (lookahead == '*')
                ADVANCE(140);
            if (lookahead == ',')
                ADVANCE(123);
            if (lookahead == '.')
                ADVANCE(44);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(200);
            if (lookahead == ':')
                ADVANCE(73);
            if (lookahead == ';')
                ADVANCE(41);
            if (lookahead == '=')
                ADVANCE(126);
            if (lookahead == '?')
                ADVANCE(127);
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
                ADVANCE(247);
            if (lookahead == '_')
                ADVANCE(45);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(270);
            if (lookahead == 'c')
                ADVANCE(46);
            if (lookahead == 'd')
                ADVANCE(108);
            if (lookahead == 'e')
                ADVANCE(217);
            if (lookahead == 'f')
                ADVANCE(7);
            if (lookahead == 'g')
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(272);
            if (lookahead == 'l')
                ADVANCE(52);
            if (lookahead == 'r')
                ADVANCE(22);
            if (lookahead == 's')
                ADVANCE(28);
            if (lookahead == 't')
                ADVANCE(296);
            if (lookahead == 'v')
                ADVANCE(55);
            if (lookahead == 'w')
                ADVANCE(300);
            if (lookahead == '{')
                ADVANCE(70);
            if (lookahead == '}')
                ADVANCE(103);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 1,
    [1] = 39,
    [2] = 1,
    [3] = 40,
    [4] = 40,
    [5] = 39,
    [6] = 42,
    [7] = 58,
    [8] = 69,
    [9] = 58,
    [10] = 58,
    [11] = 71,
    [12] = 72,
    [13] = 74,
    [14] = 40,
    [15] = 69,
    [16] = 69,
    [17] = 91,
    [18] = 91,
    [19] = 104,
    [20] = 105,
    [21] = 40,
    [22] = 106,
    [23] = 107,
    [24] = 107,
    [25] = 115,
    [26] = 115,
    [27] = 91,
    [28] = 42,
    [29] = 58,
    [30] = 69,
    [31] = 58,
    [32] = 58,
    [33] = 71,
    [34] = 116,
    [35] = 74,
    [36] = 115,
    [37] = 69,
    [38] = 91,
    [39] = 104,
    [40] = 115,
    [41] = 115,
    [42] = 117,
    [43] = 122,
    [44] = 122,
    [45] = 122,
    [46] = 122,
    [47] = 105,
    [48] = 124,
    [49] = 105,
    [50] = 122,
    [51] = 122,
    [52] = 125,
    [53] = 125,
    [54] = 130,
    [55] = 130,
    [56] = 131,
    [57] = 105,
    [58] = 71,
    [59] = 71,
    [60] = 133,
    [61] = 125,
    [62] = 125,
    [63] = 133,
    [64] = 133,
    [65] = 71,
    [66] = 125,
    [67] = 134,
    [68] = 125,
    [69] = 125,
    [70] = 125,
    [71] = 71,
    [72] = 125,
    [73] = 135,
    [74] = 135,
    [75] = 136,
    [76] = 130,
    [77] = 131,
    [78] = 125,
    [79] = 105,
    [80] = 71,
    [81] = 71,
    [82] = 137,
    [83] = 135,
    [84] = 135,
    [85] = 137,
    [86] = 137,
    [87] = 71,
    [88] = 135,
    [89] = 138,
    [90] = 135,
    [91] = 135,
    [92] = 135,
    [93] = 71,
    [94] = 135,
    [95] = 136,
    [96] = 135,
    [97] = 135,
    [98] = 71,
    [99] = 138,
    [100] = 135,
    [101] = 125,
    [102] = 136,
    [103] = 105,
    [104] = 135,
    [105] = 136,
    [106] = 71,
    [107] = 130,
    [108] = 130,
    [109] = 71,
    [110] = 134,
    [111] = 125,
    [112] = 71,
    [113] = 122,
    [114] = 122,
    [115] = 105,
    [116] = 122,
    [117] = 125,
    [118] = 71,
    [119] = 122,
    [120] = 122,
    [121] = 122,
    [122] = 139,
    [123] = 198,
    [124] = 199,
    [125] = 198,
    [126] = 136,
    [127] = 122,
    [128] = 139,
    [129] = 198,
    [130] = 199,
    [131] = 198,
    [132] = 136,
    [133] = 136,
    [134] = 122,
    [135] = 136,
    [136] = 122,
    [137] = 125,
    [138] = 71,
    [139] = 122,
    [140] = 205,
    [141] = 122,
    [142] = 117,
    [143] = 205,
    [144] = 122,
    [145] = 117,
    [146] = 71,
    [147] = 117,
    [148] = 117,
    [149] = 117,
    [150] = 69,
    [151] = 115,
    [152] = 212,
    [153] = 212,
    [154] = 213,
    [155] = 213,
    [156] = 104,
    [157] = 42,
    [158] = 58,
    [159] = 69,
    [160] = 58,
    [161] = 58,
    [162] = 71,
    [163] = 115,
    [164] = 214,
    [165] = 74,
    [166] = 213,
    [167] = 69,
    [168] = 91,
    [169] = 104,
    [170] = 213,
    [171] = 213,
    [172] = 117,
    [173] = 69,
    [174] = 213,
    [175] = 212,
    [176] = 104,
    [177] = 213,
    [178] = 213,
    [179] = 69,
    [180] = 215,
    [181] = 215,
    [182] = 215,
    [183] = 215,
    [184] = 105,
    [185] = 124,
    [186] = 105,
    [187] = 215,
    [188] = 215,
    [189] = 125,
    [190] = 71,
    [191] = 215,
    [192] = 215,
    [193] = 105,
    [194] = 215,
    [195] = 125,
    [196] = 71,
    [197] = 215,
    [198] = 215,
    [199] = 215,
    [200] = 139,
    [201] = 198,
    [202] = 199,
    [203] = 198,
    [204] = 136,
    [205] = 215,
    [206] = 215,
    [207] = 136,
    [208] = 215,
    [209] = 125,
    [210] = 71,
    [211] = 215,
    [212] = 205,
    [213] = 215,
    [214] = 69,
    [215] = 205,
    [216] = 215,
    [217] = 69,
    [218] = 71,
    [219] = 69,
    [220] = 69,
    [221] = 69,
    [222] = 216,
    [223] = 212,
    [224] = 104,
    [225] = 216,
    [226] = 216,
    [227] = 221,
    [228] = 213,
    [229] = 222,
    [230] = 212,
    [231] = 104,
    [232] = 222,
    [233] = 222,
    [234] = 71,
    [235] = 213,
    [236] = 213,
    [237] = 69,
    [238] = 213,
    [239] = 223,
    [240] = 69,
    [241] = 223,
    [242] = 71,
    [243] = 224,
    [244] = 224,
    [245] = 227,
    [246] = 130,
    [247] = 228,
    [248] = 229,
    [249] = 105,
    [250] = 105,
    [251] = 105,
    [252] = 71,
    [253] = 71,
    [254] = 230,
    [255] = 224,
    [256] = 224,
    [257] = 231,
    [258] = 231,
    [259] = 71,
    [260] = 224,
    [261] = 232,
    [262] = 224,
    [263] = 131,
    [264] = 136,
    [265] = 224,
    [266] = 224,
    [267] = 224,
    [268] = 231,
    [269] = 224,
    [270] = 71,
    [271] = 224,
    [272] = 224,
    [273] = 233,
    [274] = 71,
    [275] = 71,
    [276] = 233,
    [277] = 233,
    [278] = 234,
    [279] = 234,
    [280] = 71,
    [281] = 233,
    [282] = 69,
    [283] = 213,
    [284] = 71,
    [285] = 69,
    [286] = 213,
    [287] = 223,
    [288] = 136,
    [289] = 235,
    [290] = 228,
    [291] = 105,
    [292] = 236,
    [293] = 223,
    [294] = 237,
    [295] = 223,
    [296] = 136,
    [297] = 136,
    [298] = 237,
    [299] = 136,
    [300] = 223,
    [301] = 71,
    [302] = 238,
    [303] = 238,
    [304] = 223,
    [305] = 69,
    [306] = 213,
    [307] = 228,
    [308] = 223,
    [309] = 237,
    [310] = 136,
    [311] = 223,
    [312] = 239,
    [313] = 69,
    [314] = 239,
    [315] = 69,
    [316] = 71,
    [317] = 232,
    [318] = 224,
    [319] = 233,
    [320] = 71,
    [321] = 69,
    [322] = 213,
    [323] = 106,
    [324] = 106,
    [325] = 69,
    [326] = 71,
    [327] = 69,
    [328] = 69,
    [329] = 240,
    [330] = 240,
    [331] = 71,
    [332] = 69,
    [333] = 223,
    [334] = 212,
    [335] = 104,
    [336] = 223,
    [337] = 223,
    [338] = 213,
    [339] = 228,
    [340] = 223,
    [341] = 239,
    [342] = 69,
    [343] = 115,
    [344] = 212,
    [345] = 104,
    [346] = 69,
    [347] = 241,
    [348] = 212,
    [349] = 104,
    [350] = 241,
    [351] = 241,
    [352] = 221,
    [353] = 115,
    [354] = 222,
    [355] = 71,
    [356] = 115,
    [357] = 115,
    [358] = 69,
    [359] = 115,
    [360] = 69,
    [361] = 224,
    [362] = 229,
    [363] = 105,
    [364] = 224,
    [365] = 233,
    [366] = 71,
    [367] = 69,
    [368] = 115,
    [369] = 71,
    [370] = 69,
    [371] = 115,
    [372] = 136,
    [373] = 69,
    [374] = 115,
    [375] = 233,
    [376] = 71,
    [377] = 69,
    [378] = 115,
    [379] = 115,
    [380] = 107,
    [381] = 91,
    [382] = 242,
    [383] = 242,
    [384] = 130,
    [385] = 131,
    [386] = 105,
    [387] = 71,
    [388] = 71,
    [389] = 243,
    [390] = 242,
    [391] = 242,
    [392] = 243,
    [393] = 243,
    [394] = 71,
    [395] = 242,
    [396] = 244,
    [397] = 242,
    [398] = 242,
    [399] = 242,
    [400] = 71,
    [401] = 242,
    [402] = 136,
    [403] = 242,
    [404] = 242,
    [405] = 71,
    [406] = 244,
    [407] = 242,
    [408] = 106,
    [409] = 105,
    [410] = 107,
    [411] = 91,
    [412] = 242,
    [413] = 106,
    [414] = 107,
    [415] = 91,
    [416] = 40,
    [417] = 104,
    [418] = 117,
    [419] = 69,
    [420] = 40,
    [421] = 212,
    [422] = 104,
    [423] = 40,
    [424] = 40,
    [425] = 69,
    [426] = 245,
    [427] = 212,
    [428] = 104,
    [429] = 245,
    [430] = 245,
    [431] = 221,
    [432] = 40,
    [433] = 222,
    [434] = 71,
    [435] = 40,
    [436] = 40,
    [437] = 69,
    [438] = 40,
    [439] = 69,
    [440] = 224,
    [441] = 229,
    [442] = 105,
    [443] = 224,
    [444] = 233,
    [445] = 71,
    [446] = 69,
    [447] = 40,
    [448] = 71,
    [449] = 69,
    [450] = 40,
    [451] = 136,
    [452] = 69,
    [453] = 40,
    [454] = 233,
    [455] = 71,
    [456] = 69,
    [457] = 40,
    [458] = 40,
    [459] = 1,
    [460] = 39,
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
        [sym__expression] = ACTIONS(SHIFT(3)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(5)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_program, 0)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [sym__declaration] = ACTIONS(SHIFT(3)),
        [sym_identifier] = ACTIONS(SHIFT(12)),
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
        [sym__expression] = ACTIONS(SHIFT(3)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(460)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [sym__declaration] = ACTIONS(SHIFT(3)),
        [sym_identifier] = ACTIONS(SHIFT(12)),
    },
    [3] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(459)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 1)),
    },
    [4] = {
        [sym__statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__loop_statement, 1)),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_program, 1)),
    },
    [6] = {
        [sym__for_init] = ACTIONS(SHIFT(239)),
        [sym__for_condition] = ACTIONS(SHIFT(439)),
        [sym_variable_declaration] = ACTIONS(SHIFT(241)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(242)),
        [sym__pattern] = ACTIONS(SHIFT(440)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(244)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(244)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(244)),
        [sym_optional_pattern] = ACTIONS(SHIFT(244)),
        [sym_is_pattern] = ACTIONS(SHIFT(244)),
        [sym_as_pattern] = ACTIONS(SHIFT(244)),
        [sym__expression] = ACTIONS(SHIFT(245)),
        [sym__expression_list] = ACTIONS(SHIFT(241)),
        [sym__type_identifier] = ACTIONS(SHIFT(246)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(247)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(441)),
        [anon_sym_case] = ACTIONS(SHIFT(442)),
        [anon_sym_let] = ACTIONS(SHIFT(250)),
        [anon_sym_var] = ACTIONS(SHIFT(251)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(244)),
        [anon_sym_DOT] = ACTIONS(SHIFT(252)),
        [anon_sym_is] = ACTIONS(SHIFT(253)),
        [sym_identifier] = ACTIONS(SHIFT(254)),
    },
    [7] = {
        [sym__condition_clause] = ACTIONS(SHIFT(437)),
        [sym__condition] = ACTIONS(SHIFT(180)),
        [sym_availability_condition] = ACTIONS(SHIFT(181)),
        [sym_case_condition] = ACTIONS(SHIFT(182)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(182)),
        [sym__expression] = ACTIONS(SHIFT(183)),
        [anon_sym_case] = ACTIONS(SHIFT(184)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(185)),
        [anon_sym_let] = ACTIONS(SHIFT(186)),
        [anon_sym_var] = ACTIONS(SHIFT(186)),
        [sym_identifier] = ACTIONS(SHIFT(187)),
    },
    [8] = {
        [sym__code_block] = ACTIONS(SHIFT(433)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(230)),
    },
    [9] = {
        [sym__condition_clause] = ACTIONS(SHIFT(425)),
        [sym__condition] = ACTIONS(SHIFT(180)),
        [sym_availability_condition] = ACTIONS(SHIFT(181)),
        [sym_case_condition] = ACTIONS(SHIFT(182)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(182)),
        [sym__expression] = ACTIONS(SHIFT(183)),
        [anon_sym_case] = ACTIONS(SHIFT(184)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(185)),
        [anon_sym_let] = ACTIONS(SHIFT(186)),
        [anon_sym_var] = ACTIONS(SHIFT(186)),
        [sym_identifier] = ACTIONS(SHIFT(187)),
    },
    [10] = {
        [sym__condition_clause] = ACTIONS(SHIFT(418)),
        [sym__condition] = ACTIONS(SHIFT(43)),
        [sym_availability_condition] = ACTIONS(SHIFT(44)),
        [sym_case_condition] = ACTIONS(SHIFT(45)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(45)),
        [sym__expression] = ACTIONS(SHIFT(46)),
        [anon_sym_case] = ACTIONS(SHIFT(47)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(48)),
        [anon_sym_let] = ACTIONS(SHIFT(49)),
        [anon_sym_var] = ACTIONS(SHIFT(49)),
        [sym_identifier] = ACTIONS(SHIFT(50)),
    },
    [11] = {
        [sym__expression] = ACTIONS(SHIFT(15)),
        [sym_identifier] = ACTIONS(SHIFT(16)),
    },
    [12] = {
        [sym__statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(SHIFT(13)),
        [sym__declaration] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [13] = {
        [sym__loop_statement] = ACTIONS(SHIFT(14)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(14)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
    },
    [14] = {
        [sym__statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
    },
    [15] = {
        [anon_sym_LBRACE] = ACTIONS(SHIFT(17)),
    },
    [16] = {
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [17] = {
        [sym_case_statement] = ACTIONS(SHIFT(18)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(19)),
        [anon_sym_case] = ACTIONS(SHIFT(20)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(21)),
        [anon_sym_default] = ACTIONS(SHIFT(22)),
    },
    [18] = {
        [sym_case_statement] = ACTIONS(SHIFT(18)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(417)),
        [anon_sym_case] = ACTIONS(SHIFT(20)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 1)),
        [anon_sym_default] = ACTIONS(SHIFT(22)),
    },
    [19] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(416)),
    },
    [20] = {
        [sym__pattern] = ACTIONS(SHIFT(382)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(383)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(383)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(383)),
        [sym_optional_pattern] = ACTIONS(SHIFT(383)),
        [sym_is_pattern] = ACTIONS(SHIFT(383)),
        [sym_as_pattern] = ACTIONS(SHIFT(383)),
        [sym__expression] = ACTIONS(SHIFT(383)),
        [sym__type_identifier] = ACTIONS(SHIFT(384)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(385)),
        [anon_sym_let] = ACTIONS(SHIFT(386)),
        [anon_sym_var] = ACTIONS(SHIFT(386)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(383)),
        [anon_sym_DOT] = ACTIONS(SHIFT(387)),
        [anon_sym_is] = ACTIONS(SHIFT(388)),
        [sym_identifier] = ACTIONS(SHIFT(389)),
    },
    [21] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 4)),
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
    [22] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(23)),
    },
    [23] = {
        [sym__statement] = ACTIONS(SHIFT(24)),
        [sym__loop_statement] = ACTIONS(SHIFT(25)),
        [sym_for_statement] = ACTIONS(SHIFT(26)),
        [sym_for_in_statement] = ACTIONS(SHIFT(26)),
        [sym_while_statement] = ACTIONS(SHIFT(26)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(26)),
        [sym_if_statement] = ACTIONS(SHIFT(25)),
        [sym_guard_statement] = ACTIONS(SHIFT(25)),
        [sym_switch_statement] = ACTIONS(SHIFT(25)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [sym_labeled_statement] = ACTIONS(SHIFT(25)),
        [sym__expression] = ACTIONS(SHIFT(25)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(27)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_for] = ACTIONS(SHIFT(28)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_while] = ACTIONS(SHIFT(29)),
        [anon_sym_repeat] = ACTIONS(SHIFT(30)),
        [anon_sym_if] = ACTIONS(SHIFT(31)),
        [anon_sym_guard] = ACTIONS(SHIFT(32)),
        [anon_sym_switch] = ACTIONS(SHIFT(33)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [sym__declaration] = ACTIONS(SHIFT(25)),
        [sym_identifier] = ACTIONS(SHIFT(34)),
    },
    [24] = {
        [sym__statement] = ACTIONS(SHIFT(24)),
        [sym__loop_statement] = ACTIONS(SHIFT(25)),
        [sym_for_statement] = ACTIONS(SHIFT(26)),
        [sym_for_in_statement] = ACTIONS(SHIFT(26)),
        [sym_while_statement] = ACTIONS(SHIFT(26)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(26)),
        [sym_if_statement] = ACTIONS(SHIFT(25)),
        [sym_guard_statement] = ACTIONS(SHIFT(25)),
        [sym_switch_statement] = ACTIONS(SHIFT(25)),
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [sym_labeled_statement] = ACTIONS(SHIFT(25)),
        [sym__expression] = ACTIONS(SHIFT(25)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(381)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_for] = ACTIONS(SHIFT(28)),
        [anon_sym_case] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_while] = ACTIONS(SHIFT(29)),
        [anon_sym_repeat] = ACTIONS(SHIFT(30)),
        [anon_sym_if] = ACTIONS(SHIFT(31)),
        [anon_sym_guard] = ACTIONS(SHIFT(32)),
        [anon_sym_switch] = ACTIONS(SHIFT(33)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_default] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [sym__declaration] = ACTIONS(SHIFT(25)),
        [sym_identifier] = ACTIONS(SHIFT(34)),
    },
    [25] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_case_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(380)),
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
    [26] = {
        [sym__statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_case_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_case] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_default] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__loop_statement, 1)),
    },
    [27] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 3)),
    },
    [28] = {
        [sym__for_init] = ACTIONS(SHIFT(239)),
        [sym__for_condition] = ACTIONS(SHIFT(360)),
        [sym_variable_declaration] = ACTIONS(SHIFT(241)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(242)),
        [sym__pattern] = ACTIONS(SHIFT(361)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(244)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(244)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(244)),
        [sym_optional_pattern] = ACTIONS(SHIFT(244)),
        [sym_is_pattern] = ACTIONS(SHIFT(244)),
        [sym_as_pattern] = ACTIONS(SHIFT(244)),
        [sym__expression] = ACTIONS(SHIFT(245)),
        [sym__expression_list] = ACTIONS(SHIFT(241)),
        [sym__type_identifier] = ACTIONS(SHIFT(246)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(247)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(362)),
        [anon_sym_case] = ACTIONS(SHIFT(363)),
        [anon_sym_let] = ACTIONS(SHIFT(250)),
        [anon_sym_var] = ACTIONS(SHIFT(251)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(244)),
        [anon_sym_DOT] = ACTIONS(SHIFT(252)),
        [anon_sym_is] = ACTIONS(SHIFT(253)),
        [sym_identifier] = ACTIONS(SHIFT(254)),
    },
    [29] = {
        [sym__condition_clause] = ACTIONS(SHIFT(358)),
        [sym__condition] = ACTIONS(SHIFT(180)),
        [sym_availability_condition] = ACTIONS(SHIFT(181)),
        [sym_case_condition] = ACTIONS(SHIFT(182)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(182)),
        [sym__expression] = ACTIONS(SHIFT(183)),
        [anon_sym_case] = ACTIONS(SHIFT(184)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(185)),
        [anon_sym_let] = ACTIONS(SHIFT(186)),
        [anon_sym_var] = ACTIONS(SHIFT(186)),
        [sym_identifier] = ACTIONS(SHIFT(187)),
    },
    [30] = {
        [sym__code_block] = ACTIONS(SHIFT(354)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(230)),
    },
    [31] = {
        [sym__condition_clause] = ACTIONS(SHIFT(346)),
        [sym__condition] = ACTIONS(SHIFT(180)),
        [sym_availability_condition] = ACTIONS(SHIFT(181)),
        [sym_case_condition] = ACTIONS(SHIFT(182)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(182)),
        [sym__expression] = ACTIONS(SHIFT(183)),
        [anon_sym_case] = ACTIONS(SHIFT(184)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(185)),
        [anon_sym_let] = ACTIONS(SHIFT(186)),
        [anon_sym_var] = ACTIONS(SHIFT(186)),
        [sym_identifier] = ACTIONS(SHIFT(187)),
    },
    [32] = {
        [sym__condition_clause] = ACTIONS(SHIFT(42)),
        [sym__condition] = ACTIONS(SHIFT(43)),
        [sym_availability_condition] = ACTIONS(SHIFT(44)),
        [sym_case_condition] = ACTIONS(SHIFT(45)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(45)),
        [sym__expression] = ACTIONS(SHIFT(46)),
        [anon_sym_case] = ACTIONS(SHIFT(47)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(48)),
        [anon_sym_let] = ACTIONS(SHIFT(49)),
        [anon_sym_var] = ACTIONS(SHIFT(49)),
        [sym_identifier] = ACTIONS(SHIFT(50)),
    },
    [33] = {
        [sym__expression] = ACTIONS(SHIFT(37)),
        [sym_identifier] = ACTIONS(SHIFT(16)),
    },
    [34] = {
        [sym__statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_case_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
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
        [anon_sym_COLON] = ACTIONS(SHIFT(35)),
        [anon_sym_default] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [35] = {
        [sym__loop_statement] = ACTIONS(SHIFT(36)),
        [sym_for_statement] = ACTIONS(SHIFT(26)),
        [sym_for_in_statement] = ACTIONS(SHIFT(26)),
        [sym_while_statement] = ACTIONS(SHIFT(26)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(26)),
        [sym_if_statement] = ACTIONS(SHIFT(36)),
        [anon_sym_for] = ACTIONS(SHIFT(28)),
        [anon_sym_while] = ACTIONS(SHIFT(29)),
        [anon_sym_repeat] = ACTIONS(SHIFT(30)),
        [anon_sym_if] = ACTIONS(SHIFT(31)),
    },
    [36] = {
        [sym__statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
    },
    [37] = {
        [anon_sym_LBRACE] = ACTIONS(SHIFT(38)),
    },
    [38] = {
        [sym_case_statement] = ACTIONS(SHIFT(18)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(39)),
        [anon_sym_case] = ACTIONS(SHIFT(20)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(40)),
        [anon_sym_default] = ACTIONS(SHIFT(22)),
    },
    [39] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(41)),
    },
    [40] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 4)),
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
    [41] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 5)),
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
    [42] = {
        [anon_sym_else] = ACTIONS(SHIFT(150)),
    },
    [43] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(149)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(143)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [44] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1), SHIFT(146)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [45] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [46] = {
        [anon_sym_COMMA] = ACTIONS(SHIFT(140)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [47] = {
        [sym__pattern] = ACTIONS(SHIFT(137)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(53)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(53)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(53)),
        [sym_optional_pattern] = ACTIONS(SHIFT(53)),
        [sym_is_pattern] = ACTIONS(SHIFT(53)),
        [sym_as_pattern] = ACTIONS(SHIFT(53)),
        [sym__expression] = ACTIONS(SHIFT(53)),
        [sym__type_identifier] = ACTIONS(SHIFT(54)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(56)),
        [anon_sym_let] = ACTIONS(SHIFT(57)),
        [anon_sym_var] = ACTIONS(SHIFT(57)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(53)),
        [anon_sym_DOT] = ACTIONS(SHIFT(58)),
        [anon_sym_is] = ACTIONS(SHIFT(59)),
        [sym_identifier] = ACTIONS(SHIFT(60)),
    },
    [48] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(122)),
    },
    [49] = {
        [sym_optional_binding] = ACTIONS(SHIFT(51)),
        [sym__pattern] = ACTIONS(SHIFT(52)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(53)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(53)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(53)),
        [sym_optional_pattern] = ACTIONS(SHIFT(53)),
        [sym_is_pattern] = ACTIONS(SHIFT(53)),
        [sym_as_pattern] = ACTIONS(SHIFT(53)),
        [sym__expression] = ACTIONS(SHIFT(53)),
        [sym__type_identifier] = ACTIONS(SHIFT(54)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(56)),
        [anon_sym_let] = ACTIONS(SHIFT(57)),
        [anon_sym_var] = ACTIONS(SHIFT(57)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(53)),
        [anon_sym_DOT] = ACTIONS(SHIFT(58)),
        [anon_sym_is] = ACTIONS(SHIFT(59)),
        [sym_identifier] = ACTIONS(SHIFT(60)),
    },
    [50] = {
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [51] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(115)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
    },
    [52] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(112)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(70)),
        [anon_sym_as] = ACTIONS(SHIFT(71)),
    },
    [53] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [54] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(109)),
    },
    [55] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(106)),
    },
    [56] = {
        [sym__pattern] = ACTIONS(SHIFT(73)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(74)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(74)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(75)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(74)),
        [sym_optional_pattern] = ACTIONS(SHIFT(74)),
        [sym_is_pattern] = ACTIONS(SHIFT(74)),
        [sym_as_pattern] = ACTIONS(SHIFT(74)),
        [sym__expression] = ACTIONS(SHIFT(74)),
        [sym__type_identifier] = ACTIONS(SHIFT(76)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(77)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(78)),
        [anon_sym_let] = ACTIONS(SHIFT(79)),
        [anon_sym_var] = ACTIONS(SHIFT(79)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(74)),
        [anon_sym_DOT] = ACTIONS(SHIFT(80)),
        [anon_sym_is] = ACTIONS(SHIFT(81)),
        [sym_identifier] = ACTIONS(SHIFT(82)),
    },
    [57] = {
        [sym__pattern] = ACTIONS(SHIFT(69)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(53)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(53)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(53)),
        [sym_optional_pattern] = ACTIONS(SHIFT(53)),
        [sym_is_pattern] = ACTIONS(SHIFT(53)),
        [sym_as_pattern] = ACTIONS(SHIFT(53)),
        [sym__expression] = ACTIONS(SHIFT(53)),
        [sym__type_identifier] = ACTIONS(SHIFT(54)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(56)),
        [anon_sym_let] = ACTIONS(SHIFT(57)),
        [anon_sym_var] = ACTIONS(SHIFT(57)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(53)),
        [anon_sym_DOT] = ACTIONS(SHIFT(58)),
        [anon_sym_is] = ACTIONS(SHIFT(59)),
        [sym_identifier] = ACTIONS(SHIFT(60)),
    },
    [58] = {
        [sym_identifier] = ACTIONS(SHIFT(67)),
    },
    [59] = {
        [sym_type] = ACTIONS(SHIFT(61)),
        [sym__type_identifier] = ACTIONS(SHIFT(62)),
        [sym__type_name] = ACTIONS(SHIFT(63)),
        [sym_identifier] = ACTIONS(SHIFT(64)),
    },
    [60] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [61] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [62] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [63] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(65)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [64] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [65] = {
        [sym__type_identifier] = ACTIONS(SHIFT(66)),
        [sym__type_name] = ACTIONS(SHIFT(63)),
        [sym_identifier] = ACTIONS(SHIFT(64)),
    },
    [66] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [67] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(68)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(56)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [68] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [69] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(70)),
        [anon_sym_as] = ACTIONS(SHIFT(71)),
    },
    [70] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [71] = {
        [sym_type] = ACTIONS(SHIFT(72)),
        [sym__type_identifier] = ACTIONS(SHIFT(62)),
        [sym__type_name] = ACTIONS(SHIFT(63)),
        [sym_identifier] = ACTIONS(SHIFT(64)),
    },
    [72] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [73] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(102)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(103)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(92)),
        [anon_sym_as] = ACTIONS(SHIFT(93)),
    },
    [74] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [75] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(101)),
    },
    [76] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(98)),
    },
    [77] = {
        [sym__pattern] = ACTIONS(SHIFT(73)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(74)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(74)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(95)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(74)),
        [sym_optional_pattern] = ACTIONS(SHIFT(74)),
        [sym_is_pattern] = ACTIONS(SHIFT(74)),
        [sym_as_pattern] = ACTIONS(SHIFT(74)),
        [sym__expression] = ACTIONS(SHIFT(74)),
        [sym__type_identifier] = ACTIONS(SHIFT(76)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(77)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(96)),
        [anon_sym_let] = ACTIONS(SHIFT(79)),
        [anon_sym_var] = ACTIONS(SHIFT(79)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(74)),
        [anon_sym_DOT] = ACTIONS(SHIFT(80)),
        [anon_sym_is] = ACTIONS(SHIFT(81)),
        [sym_identifier] = ACTIONS(SHIFT(82)),
    },
    [78] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [79] = {
        [sym__pattern] = ACTIONS(SHIFT(91)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(74)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(74)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(74)),
        [sym_optional_pattern] = ACTIONS(SHIFT(74)),
        [sym_is_pattern] = ACTIONS(SHIFT(74)),
        [sym_as_pattern] = ACTIONS(SHIFT(74)),
        [sym__expression] = ACTIONS(SHIFT(74)),
        [sym__type_identifier] = ACTIONS(SHIFT(76)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(77)),
        [anon_sym_let] = ACTIONS(SHIFT(79)),
        [anon_sym_var] = ACTIONS(SHIFT(79)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(74)),
        [anon_sym_DOT] = ACTIONS(SHIFT(80)),
        [anon_sym_is] = ACTIONS(SHIFT(81)),
        [sym_identifier] = ACTIONS(SHIFT(82)),
    },
    [80] = {
        [sym_identifier] = ACTIONS(SHIFT(89)),
    },
    [81] = {
        [sym_type] = ACTIONS(SHIFT(83)),
        [sym__type_identifier] = ACTIONS(SHIFT(84)),
        [sym__type_name] = ACTIONS(SHIFT(85)),
        [sym_identifier] = ACTIONS(SHIFT(86)),
    },
    [82] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [83] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [84] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [85] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(87)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [86] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [87] = {
        [sym__type_identifier] = ACTIONS(SHIFT(88)),
        [sym__type_name] = ACTIONS(SHIFT(85)),
        [sym_identifier] = ACTIONS(SHIFT(86)),
    },
    [88] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [89] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(90)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(77)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [90] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [91] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(92)),
        [anon_sym_as] = ACTIONS(SHIFT(93)),
    },
    [92] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [93] = {
        [sym_type] = ACTIONS(SHIFT(94)),
        [sym__type_identifier] = ACTIONS(SHIFT(84)),
        [sym__type_name] = ACTIONS(SHIFT(85)),
        [sym_identifier] = ACTIONS(SHIFT(86)),
    },
    [94] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [95] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(97)),
    },
    [96] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [97] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [98] = {
        [sym_identifier] = ACTIONS(SHIFT(99)),
    },
    [99] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(100)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(77)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [100] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [101] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [102] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 2)),
    },
    [103] = {
        [sym__pattern] = ACTIONS(SHIFT(104)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(74)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(74)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(74)),
        [sym_optional_pattern] = ACTIONS(SHIFT(74)),
        [sym_is_pattern] = ACTIONS(SHIFT(74)),
        [sym_as_pattern] = ACTIONS(SHIFT(74)),
        [sym__expression] = ACTIONS(SHIFT(74)),
        [sym__type_identifier] = ACTIONS(SHIFT(76)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(77)),
        [anon_sym_let] = ACTIONS(SHIFT(79)),
        [anon_sym_var] = ACTIONS(SHIFT(79)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(74)),
        [anon_sym_DOT] = ACTIONS(SHIFT(80)),
        [anon_sym_is] = ACTIONS(SHIFT(81)),
        [sym_identifier] = ACTIONS(SHIFT(82)),
    },
    [104] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(105)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(103)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(92)),
        [anon_sym_as] = ACTIONS(SHIFT(93)),
    },
    [105] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [106] = {
        [sym__type_identifier] = ACTIONS(SHIFT(107)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [sym_identifier] = ACTIONS(SHIFT(108)),
    },
    [107] = {
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [108] = {
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [109] = {
        [sym_identifier] = ACTIONS(SHIFT(110)),
    },
    [110] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(111)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(56)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [111] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [112] = {
        [sym__expression] = ACTIONS(SHIFT(113)),
        [sym_identifier] = ACTIONS(SHIFT(114)),
    },
    [113] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [114] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [115] = {
        [sym_optional_binding] = ACTIONS(SHIFT(116)),
        [sym__pattern] = ACTIONS(SHIFT(117)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(53)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(53)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(53)),
        [sym_optional_pattern] = ACTIONS(SHIFT(53)),
        [sym_is_pattern] = ACTIONS(SHIFT(53)),
        [sym_as_pattern] = ACTIONS(SHIFT(53)),
        [sym__expression] = ACTIONS(SHIFT(53)),
        [sym__type_identifier] = ACTIONS(SHIFT(54)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(56)),
        [anon_sym_let] = ACTIONS(SHIFT(57)),
        [anon_sym_var] = ACTIONS(SHIFT(57)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(53)),
        [anon_sym_DOT] = ACTIONS(SHIFT(58)),
        [anon_sym_is] = ACTIONS(SHIFT(59)),
        [sym_identifier] = ACTIONS(SHIFT(60)),
    },
    [116] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(SHIFT(121)),
        [anon_sym_COMMA] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
    },
    [117] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(118)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(70)),
        [anon_sym_as] = ACTIONS(SHIFT(71)),
    },
    [118] = {
        [sym__expression] = ACTIONS(SHIFT(119)),
        [sym_identifier] = ACTIONS(SHIFT(120)),
    },
    [119] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [120] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [121] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
    },
    [122] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(123)),
        [anon_sym_iOS] = ACTIONS(SHIFT(124)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(124)),
        [anon_sym_OSX] = ACTIONS(SHIFT(124)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(124)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(124)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(124)),
    },
    [123] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(135)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(136)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(128)),
    },
    [124] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(125)),
    },
    [125] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(126)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(127)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(128)),
    },
    [126] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(134)),
    },
    [127] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 5)),
    },
    [128] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(129)),
        [anon_sym_iOS] = ACTIONS(SHIFT(130)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(130)),
        [anon_sym_OSX] = ACTIONS(SHIFT(130)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(130)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(130)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(130)),
    },
    [129] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(133)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(128)),
    },
    [130] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(131)),
    },
    [131] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(132)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 3)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(128)),
    },
    [132] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 4)),
    },
    [133] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 3)),
    },
    [134] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 6)),
    },
    [135] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(127)),
    },
    [136] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 4)),
    },
    [137] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(138)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(70)),
        [anon_sym_as] = ACTIONS(SHIFT(71)),
    },
    [138] = {
        [sym__expression] = ACTIONS(SHIFT(139)),
        [sym_identifier] = ACTIONS(SHIFT(114)),
    },
    [139] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_case_condition, 4)),
    },
    [140] = {
        [sym__condition] = ACTIONS(SHIFT(141)),
        [sym_availability_condition] = ACTIONS(SHIFT(45)),
        [sym_case_condition] = ACTIONS(SHIFT(45)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(45)),
        [anon_sym_case] = ACTIONS(SHIFT(47)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(48)),
        [anon_sym_let] = ACTIONS(SHIFT(49)),
        [anon_sym_var] = ACTIONS(SHIFT(49)),
    },
    [141] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(142)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(143)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [142] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 4)),
    },
    [143] = {
        [sym__condition] = ACTIONS(SHIFT(144)),
        [sym_availability_condition] = ACTIONS(SHIFT(45)),
        [sym_case_condition] = ACTIONS(SHIFT(45)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(45)),
        [anon_sym_case] = ACTIONS(SHIFT(47)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(48)),
        [anon_sym_let] = ACTIONS(SHIFT(49)),
        [anon_sym_var] = ACTIONS(SHIFT(49)),
    },
    [144] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(145)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(143)),
        [anon_sym_else] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
    },
    [145] = {
        [anon_sym_else] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
    },
    [146] = {
        [sym__expression] = ACTIONS(SHIFT(147)),
        [sym_identifier] = ACTIONS(SHIFT(148)),
    },
    [147] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [148] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [149] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 2)),
    },
    [150] = {
        [sym__code_block] = ACTIONS(SHIFT(151)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(152)),
    },
    [151] = {
        [sym__statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_guard_statement, 4)),
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
    [152] = {
        [sym__statement] = ACTIONS(SHIFT(153)),
        [sym__loop_statement] = ACTIONS(SHIFT(154)),
        [sym_for_statement] = ACTIONS(SHIFT(155)),
        [sym_for_in_statement] = ACTIONS(SHIFT(155)),
        [sym_while_statement] = ACTIONS(SHIFT(155)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(155)),
        [sym_if_statement] = ACTIONS(SHIFT(154)),
        [sym_guard_statement] = ACTIONS(SHIFT(154)),
        [sym_switch_statement] = ACTIONS(SHIFT(154)),
        [sym_labeled_statement] = ACTIONS(SHIFT(154)),
        [sym__expression] = ACTIONS(SHIFT(154)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(156)),
        [anon_sym_for] = ACTIONS(SHIFT(157)),
        [anon_sym_while] = ACTIONS(SHIFT(158)),
        [anon_sym_repeat] = ACTIONS(SHIFT(159)),
        [anon_sym_if] = ACTIONS(SHIFT(160)),
        [anon_sym_guard] = ACTIONS(SHIFT(161)),
        [anon_sym_switch] = ACTIONS(SHIFT(162)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(163)),
        [sym__declaration] = ACTIONS(SHIFT(154)),
        [sym_identifier] = ACTIONS(SHIFT(164)),
    },
    [153] = {
        [sym__statement] = ACTIONS(SHIFT(153)),
        [sym__loop_statement] = ACTIONS(SHIFT(154)),
        [sym_for_statement] = ACTIONS(SHIFT(155)),
        [sym_for_in_statement] = ACTIONS(SHIFT(155)),
        [sym_while_statement] = ACTIONS(SHIFT(155)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(155)),
        [sym_if_statement] = ACTIONS(SHIFT(154)),
        [sym_guard_statement] = ACTIONS(SHIFT(154)),
        [sym_switch_statement] = ACTIONS(SHIFT(154)),
        [sym_labeled_statement] = ACTIONS(SHIFT(154)),
        [sym__expression] = ACTIONS(SHIFT(154)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(345)),
        [anon_sym_for] = ACTIONS(SHIFT(157)),
        [anon_sym_while] = ACTIONS(SHIFT(158)),
        [anon_sym_repeat] = ACTIONS(SHIFT(159)),
        [anon_sym_if] = ACTIONS(SHIFT(160)),
        [anon_sym_guard] = ACTIONS(SHIFT(161)),
        [anon_sym_switch] = ACTIONS(SHIFT(162)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [sym__declaration] = ACTIONS(SHIFT(154)),
        [sym_identifier] = ACTIONS(SHIFT(164)),
    },
    [154] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(344)),
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
    [155] = {
        [sym__statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__loop_statement, 1)),
    },
    [156] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(343)),
    },
    [157] = {
        [sym__for_init] = ACTIONS(SHIFT(239)),
        [sym__for_condition] = ACTIONS(SHIFT(240)),
        [sym_variable_declaration] = ACTIONS(SHIFT(241)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(242)),
        [sym__pattern] = ACTIONS(SHIFT(243)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(244)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(244)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(244)),
        [sym_optional_pattern] = ACTIONS(SHIFT(244)),
        [sym_is_pattern] = ACTIONS(SHIFT(244)),
        [sym_as_pattern] = ACTIONS(SHIFT(244)),
        [sym__expression] = ACTIONS(SHIFT(245)),
        [sym__expression_list] = ACTIONS(SHIFT(241)),
        [sym__type_identifier] = ACTIONS(SHIFT(246)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(247)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(248)),
        [anon_sym_case] = ACTIONS(SHIFT(249)),
        [anon_sym_let] = ACTIONS(SHIFT(250)),
        [anon_sym_var] = ACTIONS(SHIFT(251)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(244)),
        [anon_sym_DOT] = ACTIONS(SHIFT(252)),
        [anon_sym_is] = ACTIONS(SHIFT(253)),
        [sym_identifier] = ACTIONS(SHIFT(254)),
    },
    [158] = {
        [sym__condition_clause] = ACTIONS(SHIFT(237)),
        [sym__condition] = ACTIONS(SHIFT(180)),
        [sym_availability_condition] = ACTIONS(SHIFT(181)),
        [sym_case_condition] = ACTIONS(SHIFT(182)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(182)),
        [sym__expression] = ACTIONS(SHIFT(183)),
        [anon_sym_case] = ACTIONS(SHIFT(184)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(185)),
        [anon_sym_let] = ACTIONS(SHIFT(186)),
        [anon_sym_var] = ACTIONS(SHIFT(186)),
        [sym_identifier] = ACTIONS(SHIFT(187)),
    },
    [159] = {
        [sym__code_block] = ACTIONS(SHIFT(229)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(230)),
    },
    [160] = {
        [sym__condition_clause] = ACTIONS(SHIFT(179)),
        [sym__condition] = ACTIONS(SHIFT(180)),
        [sym_availability_condition] = ACTIONS(SHIFT(181)),
        [sym_case_condition] = ACTIONS(SHIFT(182)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(182)),
        [sym__expression] = ACTIONS(SHIFT(183)),
        [anon_sym_case] = ACTIONS(SHIFT(184)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(185)),
        [anon_sym_let] = ACTIONS(SHIFT(186)),
        [anon_sym_var] = ACTIONS(SHIFT(186)),
        [sym_identifier] = ACTIONS(SHIFT(187)),
    },
    [161] = {
        [sym__condition_clause] = ACTIONS(SHIFT(172)),
        [sym__condition] = ACTIONS(SHIFT(43)),
        [sym_availability_condition] = ACTIONS(SHIFT(44)),
        [sym_case_condition] = ACTIONS(SHIFT(45)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(45)),
        [sym__expression] = ACTIONS(SHIFT(46)),
        [anon_sym_case] = ACTIONS(SHIFT(47)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(48)),
        [anon_sym_let] = ACTIONS(SHIFT(49)),
        [anon_sym_var] = ACTIONS(SHIFT(49)),
        [sym_identifier] = ACTIONS(SHIFT(50)),
    },
    [162] = {
        [sym__expression] = ACTIONS(SHIFT(167)),
        [sym_identifier] = ACTIONS(SHIFT(16)),
    },
    [163] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_case_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_case] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [164] = {
        [sym__statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(SHIFT(165)),
        [sym__declaration] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [165] = {
        [sym__loop_statement] = ACTIONS(SHIFT(166)),
        [sym_for_statement] = ACTIONS(SHIFT(155)),
        [sym_for_in_statement] = ACTIONS(SHIFT(155)),
        [sym_while_statement] = ACTIONS(SHIFT(155)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(155)),
        [sym_if_statement] = ACTIONS(SHIFT(166)),
        [anon_sym_for] = ACTIONS(SHIFT(157)),
        [anon_sym_while] = ACTIONS(SHIFT(158)),
        [anon_sym_repeat] = ACTIONS(SHIFT(159)),
        [anon_sym_if] = ACTIONS(SHIFT(160)),
    },
    [166] = {
        [sym__statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
    },
    [167] = {
        [anon_sym_LBRACE] = ACTIONS(SHIFT(168)),
    },
    [168] = {
        [sym_case_statement] = ACTIONS(SHIFT(18)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(169)),
        [anon_sym_case] = ACTIONS(SHIFT(20)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(170)),
        [anon_sym_default] = ACTIONS(SHIFT(22)),
    },
    [169] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(171)),
    },
    [170] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 4)),
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
    [171] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 5)),
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
    [172] = {
        [anon_sym_else] = ACTIONS(SHIFT(173)),
    },
    [173] = {
        [sym__code_block] = ACTIONS(SHIFT(174)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(175)),
    },
    [174] = {
        [sym__statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_guard_statement, 4)),
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
    [175] = {
        [sym__statement] = ACTIONS(SHIFT(153)),
        [sym__loop_statement] = ACTIONS(SHIFT(154)),
        [sym_for_statement] = ACTIONS(SHIFT(155)),
        [sym_for_in_statement] = ACTIONS(SHIFT(155)),
        [sym_while_statement] = ACTIONS(SHIFT(155)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(155)),
        [sym_if_statement] = ACTIONS(SHIFT(154)),
        [sym_guard_statement] = ACTIONS(SHIFT(154)),
        [sym_switch_statement] = ACTIONS(SHIFT(154)),
        [sym_labeled_statement] = ACTIONS(SHIFT(154)),
        [sym__expression] = ACTIONS(SHIFT(154)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(176)),
        [anon_sym_for] = ACTIONS(SHIFT(157)),
        [anon_sym_while] = ACTIONS(SHIFT(158)),
        [anon_sym_repeat] = ACTIONS(SHIFT(159)),
        [anon_sym_if] = ACTIONS(SHIFT(160)),
        [anon_sym_guard] = ACTIONS(SHIFT(161)),
        [anon_sym_switch] = ACTIONS(SHIFT(162)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(177)),
        [sym__declaration] = ACTIONS(SHIFT(154)),
        [sym_identifier] = ACTIONS(SHIFT(164)),
    },
    [176] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(178)),
    },
    [177] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [178] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
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
    [179] = {
        [sym__code_block] = ACTIONS(SHIFT(222)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(223)),
    },
    [180] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(221)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(215)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [181] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1), SHIFT(218)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [182] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [183] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(212)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [184] = {
        [sym__pattern] = ACTIONS(SHIFT(209)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(53)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(53)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(53)),
        [sym_optional_pattern] = ACTIONS(SHIFT(53)),
        [sym_is_pattern] = ACTIONS(SHIFT(53)),
        [sym_as_pattern] = ACTIONS(SHIFT(53)),
        [sym__expression] = ACTIONS(SHIFT(53)),
        [sym__type_identifier] = ACTIONS(SHIFT(54)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(56)),
        [anon_sym_let] = ACTIONS(SHIFT(57)),
        [anon_sym_var] = ACTIONS(SHIFT(57)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(53)),
        [anon_sym_DOT] = ACTIONS(SHIFT(58)),
        [anon_sym_is] = ACTIONS(SHIFT(59)),
        [sym_identifier] = ACTIONS(SHIFT(60)),
    },
    [185] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(200)),
    },
    [186] = {
        [sym_optional_binding] = ACTIONS(SHIFT(188)),
        [sym__pattern] = ACTIONS(SHIFT(189)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(53)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(53)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(53)),
        [sym_optional_pattern] = ACTIONS(SHIFT(53)),
        [sym_is_pattern] = ACTIONS(SHIFT(53)),
        [sym_as_pattern] = ACTIONS(SHIFT(53)),
        [sym__expression] = ACTIONS(SHIFT(53)),
        [sym__type_identifier] = ACTIONS(SHIFT(54)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(56)),
        [anon_sym_let] = ACTIONS(SHIFT(57)),
        [anon_sym_var] = ACTIONS(SHIFT(57)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(53)),
        [anon_sym_DOT] = ACTIONS(SHIFT(58)),
        [anon_sym_is] = ACTIONS(SHIFT(59)),
        [sym_identifier] = ACTIONS(SHIFT(60)),
    },
    [187] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [188] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(193)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
    },
    [189] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(190)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(70)),
        [anon_sym_as] = ACTIONS(SHIFT(71)),
    },
    [190] = {
        [sym__expression] = ACTIONS(SHIFT(191)),
        [sym_identifier] = ACTIONS(SHIFT(192)),
    },
    [191] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [192] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [193] = {
        [sym_optional_binding] = ACTIONS(SHIFT(194)),
        [sym__pattern] = ACTIONS(SHIFT(195)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(53)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(53)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(53)),
        [sym_optional_pattern] = ACTIONS(SHIFT(53)),
        [sym_is_pattern] = ACTIONS(SHIFT(53)),
        [sym_as_pattern] = ACTIONS(SHIFT(53)),
        [sym__expression] = ACTIONS(SHIFT(53)),
        [sym__type_identifier] = ACTIONS(SHIFT(54)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(56)),
        [anon_sym_let] = ACTIONS(SHIFT(57)),
        [anon_sym_var] = ACTIONS(SHIFT(57)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(53)),
        [anon_sym_DOT] = ACTIONS(SHIFT(58)),
        [anon_sym_is] = ACTIONS(SHIFT(59)),
        [sym_identifier] = ACTIONS(SHIFT(60)),
    },
    [194] = {
        [sym__code_block] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(SHIFT(199)),
        [anon_sym_COMMA] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
    },
    [195] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(196)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(70)),
        [anon_sym_as] = ACTIONS(SHIFT(71)),
    },
    [196] = {
        [sym__expression] = ACTIONS(SHIFT(197)),
        [sym_identifier] = ACTIONS(SHIFT(198)),
    },
    [197] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [198] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [199] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
    },
    [200] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(201)),
        [anon_sym_iOS] = ACTIONS(SHIFT(202)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(202)),
        [anon_sym_OSX] = ACTIONS(SHIFT(202)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(202)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(202)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(202)),
    },
    [201] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(207)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(208)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(128)),
    },
    [202] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(203)),
    },
    [203] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(204)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(205)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(128)),
    },
    [204] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(206)),
    },
    [205] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 5)),
    },
    [206] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 6)),
    },
    [207] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(205)),
    },
    [208] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 4)),
    },
    [209] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(210)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(70)),
        [anon_sym_as] = ACTIONS(SHIFT(71)),
    },
    [210] = {
        [sym__expression] = ACTIONS(SHIFT(211)),
        [sym_identifier] = ACTIONS(SHIFT(192)),
    },
    [211] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_case_condition, 4)),
    },
    [212] = {
        [sym__condition] = ACTIONS(SHIFT(213)),
        [sym_availability_condition] = ACTIONS(SHIFT(182)),
        [sym_case_condition] = ACTIONS(SHIFT(182)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(182)),
        [anon_sym_case] = ACTIONS(SHIFT(184)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(185)),
        [anon_sym_let] = ACTIONS(SHIFT(186)),
        [anon_sym_var] = ACTIONS(SHIFT(186)),
    },
    [213] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(214)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(215)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [214] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 4)),
    },
    [215] = {
        [sym__condition] = ACTIONS(SHIFT(216)),
        [sym_availability_condition] = ACTIONS(SHIFT(182)),
        [sym_case_condition] = ACTIONS(SHIFT(182)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(182)),
        [anon_sym_case] = ACTIONS(SHIFT(184)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(185)),
        [anon_sym_let] = ACTIONS(SHIFT(186)),
        [anon_sym_var] = ACTIONS(SHIFT(186)),
    },
    [216] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(217)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(215)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
    },
    [217] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
    },
    [218] = {
        [sym__expression] = ACTIONS(SHIFT(219)),
        [sym_identifier] = ACTIONS(SHIFT(220)),
    },
    [219] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [220] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [221] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 2)),
    },
    [222] = {
        [sym__statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_else] = ACTIONS(SHIFT(227)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_if_statement, 3)),
    },
    [223] = {
        [sym__statement] = ACTIONS(SHIFT(153)),
        [sym__loop_statement] = ACTIONS(SHIFT(154)),
        [sym_for_statement] = ACTIONS(SHIFT(155)),
        [sym_for_in_statement] = ACTIONS(SHIFT(155)),
        [sym_while_statement] = ACTIONS(SHIFT(155)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(155)),
        [sym_if_statement] = ACTIONS(SHIFT(154)),
        [sym_guard_statement] = ACTIONS(SHIFT(154)),
        [sym_switch_statement] = ACTIONS(SHIFT(154)),
        [sym_labeled_statement] = ACTIONS(SHIFT(154)),
        [sym__expression] = ACTIONS(SHIFT(154)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(224)),
        [anon_sym_for] = ACTIONS(SHIFT(157)),
        [anon_sym_while] = ACTIONS(SHIFT(158)),
        [anon_sym_repeat] = ACTIONS(SHIFT(159)),
        [anon_sym_if] = ACTIONS(SHIFT(160)),
        [anon_sym_guard] = ACTIONS(SHIFT(161)),
        [anon_sym_switch] = ACTIONS(SHIFT(162)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(225)),
        [sym__declaration] = ACTIONS(SHIFT(154)),
        [sym_identifier] = ACTIONS(SHIFT(164)),
    },
    [224] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(226)),
    },
    [225] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [226] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
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
    [227] = {
        [sym_if_statement] = ACTIONS(SHIFT(228)),
        [sym__code_block] = ACTIONS(SHIFT(228)),
        [anon_sym_if] = ACTIONS(SHIFT(160)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(175)),
    },
    [228] = {
        [sym__statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_if_statement, 5)),
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
    [229] = {
        [anon_sym_while] = ACTIONS(SHIFT(234)),
    },
    [230] = {
        [sym__statement] = ACTIONS(SHIFT(153)),
        [sym__loop_statement] = ACTIONS(SHIFT(154)),
        [sym_for_statement] = ACTIONS(SHIFT(155)),
        [sym_for_in_statement] = ACTIONS(SHIFT(155)),
        [sym_while_statement] = ACTIONS(SHIFT(155)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(155)),
        [sym_if_statement] = ACTIONS(SHIFT(154)),
        [sym_guard_statement] = ACTIONS(SHIFT(154)),
        [sym_switch_statement] = ACTIONS(SHIFT(154)),
        [sym_labeled_statement] = ACTIONS(SHIFT(154)),
        [sym__expression] = ACTIONS(SHIFT(154)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(231)),
        [anon_sym_for] = ACTIONS(SHIFT(157)),
        [anon_sym_while] = ACTIONS(SHIFT(158)),
        [anon_sym_repeat] = ACTIONS(SHIFT(159)),
        [anon_sym_if] = ACTIONS(SHIFT(160)),
        [anon_sym_guard] = ACTIONS(SHIFT(161)),
        [anon_sym_switch] = ACTIONS(SHIFT(162)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(232)),
        [sym__declaration] = ACTIONS(SHIFT(154)),
        [sym_identifier] = ACTIONS(SHIFT(164)),
    },
    [231] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(233)),
    },
    [232] = {
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [233] = {
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [234] = {
        [sym__expression] = ACTIONS(SHIFT(235)),
        [sym_identifier] = ACTIONS(SHIFT(236)),
    },
    [235] = {
        [sym__statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
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
    [236] = {
        [sym__statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
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
    [237] = {
        [sym__code_block] = ACTIONS(SHIFT(238)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(175)),
    },
    [238] = {
        [sym__statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_while_statement, 3)),
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
    [239] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(339)),
    },
    [240] = {
        [sym__code_block] = ACTIONS(SHIFT(338)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(175)),
    },
    [241] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__for_init, 1)),
    },
    [242] = {
        [sym__variable_name] = ACTIONS(SHIFT(323)),
        [sym_identifier] = ACTIONS(SHIFT(324)),
    },
    [243] = {
        [sym__type_annotation] = ACTIONS(SHIFT(319)),
        [anon_sym_in] = ACTIONS(SHIFT(320)),
        [anon_sym_COLON] = ACTIONS(SHIFT(275)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(269)),
        [anon_sym_as] = ACTIONS(SHIFT(270)),
    },
    [244] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [245] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(300)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(301)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [246] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(316)),
    },
    [247] = {
        [sym__expression] = ACTIONS(SHIFT(311)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(312)),
        [sym_identifier] = ACTIONS(SHIFT(295)),
    },
    [248] = {
        [sym__for_init] = ACTIONS(SHIFT(287)),
        [sym__for_condition] = ACTIONS(SHIFT(288)),
        [sym_variable_declaration] = ACTIONS(SHIFT(241)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(242)),
        [sym__pattern] = ACTIONS(SHIFT(73)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(74)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(74)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(264)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(74)),
        [sym_optional_pattern] = ACTIONS(SHIFT(74)),
        [sym_is_pattern] = ACTIONS(SHIFT(74)),
        [sym_as_pattern] = ACTIONS(SHIFT(74)),
        [sym__expression] = ACTIONS(SHIFT(289)),
        [sym__expression_list] = ACTIONS(SHIFT(241)),
        [sym__type_identifier] = ACTIONS(SHIFT(76)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(290)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(77)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(265)),
        [anon_sym_let] = ACTIONS(SHIFT(79)),
        [anon_sym_var] = ACTIONS(SHIFT(291)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(74)),
        [anon_sym_DOT] = ACTIONS(SHIFT(80)),
        [anon_sym_is] = ACTIONS(SHIFT(81)),
        [sym_identifier] = ACTIONS(SHIFT(292)),
    },
    [249] = {
        [sym__pattern] = ACTIONS(SHIFT(272)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(244)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(244)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(244)),
        [sym_optional_pattern] = ACTIONS(SHIFT(244)),
        [sym_is_pattern] = ACTIONS(SHIFT(244)),
        [sym_as_pattern] = ACTIONS(SHIFT(244)),
        [sym__expression] = ACTIONS(SHIFT(244)),
        [sym__type_identifier] = ACTIONS(SHIFT(246)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(263)),
        [anon_sym_let] = ACTIONS(SHIFT(250)),
        [anon_sym_var] = ACTIONS(SHIFT(250)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(244)),
        [anon_sym_DOT] = ACTIONS(SHIFT(252)),
        [anon_sym_is] = ACTIONS(SHIFT(253)),
        [sym_identifier] = ACTIONS(SHIFT(268)),
    },
    [250] = {
        [sym__pattern] = ACTIONS(SHIFT(267)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(244)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(244)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(244)),
        [sym_optional_pattern] = ACTIONS(SHIFT(244)),
        [sym_is_pattern] = ACTIONS(SHIFT(244)),
        [sym_as_pattern] = ACTIONS(SHIFT(244)),
        [sym__expression] = ACTIONS(SHIFT(244)),
        [sym__type_identifier] = ACTIONS(SHIFT(246)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(263)),
        [anon_sym_let] = ACTIONS(SHIFT(250)),
        [anon_sym_var] = ACTIONS(SHIFT(250)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(244)),
        [anon_sym_DOT] = ACTIONS(SHIFT(252)),
        [anon_sym_is] = ACTIONS(SHIFT(253)),
        [sym_identifier] = ACTIONS(SHIFT(268)),
    },
    [251] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(267)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(244)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(244)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(244)),
        [sym_optional_pattern] = ACTIONS(SHIFT(244)),
        [sym_is_pattern] = ACTIONS(SHIFT(244)),
        [sym_as_pattern] = ACTIONS(SHIFT(244)),
        [sym__expression] = ACTIONS(SHIFT(244)),
        [sym__type_identifier] = ACTIONS(SHIFT(246)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(263)),
        [anon_sym_let] = ACTIONS(SHIFT(250)),
        [anon_sym_var] = ACTIONS(SHIFT(250)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(244)),
        [anon_sym_DOT] = ACTIONS(SHIFT(252)),
        [anon_sym_is] = ACTIONS(SHIFT(253)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(268)),
    },
    [252] = {
        [sym_identifier] = ACTIONS(SHIFT(261)),
    },
    [253] = {
        [sym_type] = ACTIONS(SHIFT(255)),
        [sym__type_identifier] = ACTIONS(SHIFT(256)),
        [sym__type_name] = ACTIONS(SHIFT(257)),
        [sym_identifier] = ACTIONS(SHIFT(258)),
    },
    [254] = {
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
    [255] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [256] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [257] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(259)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [258] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [259] = {
        [sym__type_identifier] = ACTIONS(SHIFT(260)),
        [sym__type_name] = ACTIONS(SHIFT(257)),
        [sym_identifier] = ACTIONS(SHIFT(258)),
    },
    [260] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [261] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(262)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(263)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [262] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [263] = {
        [sym__pattern] = ACTIONS(SHIFT(73)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(74)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(74)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(264)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(74)),
        [sym_optional_pattern] = ACTIONS(SHIFT(74)),
        [sym_is_pattern] = ACTIONS(SHIFT(74)),
        [sym_as_pattern] = ACTIONS(SHIFT(74)),
        [sym__expression] = ACTIONS(SHIFT(74)),
        [sym__type_identifier] = ACTIONS(SHIFT(76)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(77)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(265)),
        [anon_sym_let] = ACTIONS(SHIFT(79)),
        [anon_sym_var] = ACTIONS(SHIFT(79)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(74)),
        [anon_sym_DOT] = ACTIONS(SHIFT(80)),
        [anon_sym_is] = ACTIONS(SHIFT(81)),
        [sym_identifier] = ACTIONS(SHIFT(82)),
    },
    [264] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(266)),
    },
    [265] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [266] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [267] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(269)),
        [anon_sym_as] = ACTIONS(SHIFT(270)),
    },
    [268] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [269] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [270] = {
        [sym_type] = ACTIONS(SHIFT(271)),
        [sym__type_identifier] = ACTIONS(SHIFT(256)),
        [sym__type_name] = ACTIONS(SHIFT(257)),
        [sym_identifier] = ACTIONS(SHIFT(258)),
    },
    [271] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [272] = {
        [sym__type_annotation] = ACTIONS(SHIFT(273)),
        [anon_sym_in] = ACTIONS(SHIFT(274)),
        [anon_sym_COLON] = ACTIONS(SHIFT(275)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(269)),
        [anon_sym_as] = ACTIONS(SHIFT(270)),
    },
    [273] = {
        [anon_sym_in] = ACTIONS(SHIFT(284)),
    },
    [274] = {
        [sym__expression] = ACTIONS(SHIFT(282)),
        [sym_identifier] = ACTIONS(SHIFT(220)),
    },
    [275] = {
        [sym_type] = ACTIONS(SHIFT(276)),
        [sym__type_identifier] = ACTIONS(SHIFT(277)),
        [sym__type_name] = ACTIONS(SHIFT(278)),
        [sym_identifier] = ACTIONS(SHIFT(279)),
    },
    [276] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [277] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [278] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(280)),
    },
    [279] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [280] = {
        [sym__type_identifier] = ACTIONS(SHIFT(281)),
        [sym__type_name] = ACTIONS(SHIFT(278)),
        [sym_identifier] = ACTIONS(SHIFT(279)),
    },
    [281] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [282] = {
        [sym__code_block] = ACTIONS(SHIFT(283)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(175)),
    },
    [283] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
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
    [284] = {
        [sym__expression] = ACTIONS(SHIFT(285)),
        [sym_identifier] = ACTIONS(SHIFT(220)),
    },
    [285] = {
        [sym__code_block] = ACTIONS(SHIFT(286)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(175)),
    },
    [286] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
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
    [287] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(307)),
    },
    [288] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(305)),
    },
    [289] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(300)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1), SHIFT(301)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [290] = {
        [sym__expression] = ACTIONS(SHIFT(293)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(294)),
        [sym_identifier] = ACTIONS(SHIFT(295)),
    },
    [291] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(91)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(74)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(74)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(74)),
        [sym_optional_pattern] = ACTIONS(SHIFT(74)),
        [sym_is_pattern] = ACTIONS(SHIFT(74)),
        [sym_as_pattern] = ACTIONS(SHIFT(74)),
        [sym__expression] = ACTIONS(SHIFT(74)),
        [sym__type_identifier] = ACTIONS(SHIFT(76)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(77)),
        [anon_sym_let] = ACTIONS(SHIFT(79)),
        [anon_sym_var] = ACTIONS(SHIFT(79)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(74)),
        [anon_sym_DOT] = ACTIONS(SHIFT(80)),
        [anon_sym_is] = ACTIONS(SHIFT(81)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(82)),
    },
    [292] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [293] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(298)),
    },
    [294] = {
        [sym__expression] = ACTIONS(SHIFT(296)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(297)),
    },
    [295] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [296] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [297] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [298] = {
        [sym__expression] = ACTIONS(SHIFT(299)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(297)),
    },
    [299] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [300] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 2)),
    },
    [301] = {
        [sym__expression] = ACTIONS(SHIFT(302)),
        [sym_identifier] = ACTIONS(SHIFT(303)),
    },
    [302] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(304)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(301)),
    },
    [303] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [304] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 3)),
    },
    [305] = {
        [sym__code_block] = ACTIONS(SHIFT(306)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(175)),
    },
    [306] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_for_statement, 5)),
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
    [307] = {
        [sym__expression] = ACTIONS(SHIFT(308)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(298)),
        [sym_identifier] = ACTIONS(SHIFT(295)),
    },
    [308] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(309)),
    },
    [309] = {
        [sym__expression] = ACTIONS(SHIFT(310)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(297)),
    },
    [310] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [311] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(314)),
    },
    [312] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym__expression] = ACTIONS(SHIFT(313)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(220)),
    },
    [313] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [314] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym__expression] = ACTIONS(SHIFT(315)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(220)),
    },
    [315] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [316] = {
        [sym_identifier] = ACTIONS(SHIFT(317)),
    },
    [317] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(318)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(263)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [318] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [319] = {
        [anon_sym_in] = ACTIONS(SHIFT(274)),
    },
    [320] = {
        [sym__expression] = ACTIONS(SHIFT(321)),
        [sym_identifier] = ACTIONS(SHIFT(220)),
    },
    [321] = {
        [sym__code_block] = ACTIONS(SHIFT(322)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(175)),
    },
    [322] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
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
    [323] = {
        [sym__type_annotation] = ACTIONS(SHIFT(325)),
        [anon_sym_COLON] = ACTIONS(SHIFT(326)),
    },
    [324] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__variable_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__variable_name, 1)),
    },
    [325] = {
        [sym__code_block] = ACTIONS(SHIFT(333)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(334)),
    },
    [326] = {
        [sym_type] = ACTIONS(SHIFT(327)),
        [sym__type_identifier] = ACTIONS(SHIFT(328)),
        [sym__type_name] = ACTIONS(SHIFT(329)),
        [sym_identifier] = ACTIONS(SHIFT(330)),
    },
    [327] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [328] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [329] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(331)),
    },
    [330] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [331] = {
        [sym__type_identifier] = ACTIONS(SHIFT(332)),
        [sym__type_name] = ACTIONS(SHIFT(329)),
        [sym_identifier] = ACTIONS(SHIFT(330)),
    },
    [332] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [333] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_variable_declaration, 4)),
    },
    [334] = {
        [sym__statement] = ACTIONS(SHIFT(153)),
        [sym__loop_statement] = ACTIONS(SHIFT(154)),
        [sym_for_statement] = ACTIONS(SHIFT(155)),
        [sym_for_in_statement] = ACTIONS(SHIFT(155)),
        [sym_while_statement] = ACTIONS(SHIFT(155)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(155)),
        [sym_if_statement] = ACTIONS(SHIFT(154)),
        [sym_guard_statement] = ACTIONS(SHIFT(154)),
        [sym_switch_statement] = ACTIONS(SHIFT(154)),
        [sym_labeled_statement] = ACTIONS(SHIFT(154)),
        [sym__expression] = ACTIONS(SHIFT(154)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(335)),
        [anon_sym_for] = ACTIONS(SHIFT(157)),
        [anon_sym_while] = ACTIONS(SHIFT(158)),
        [anon_sym_repeat] = ACTIONS(SHIFT(159)),
        [anon_sym_if] = ACTIONS(SHIFT(160)),
        [anon_sym_guard] = ACTIONS(SHIFT(161)),
        [anon_sym_switch] = ACTIONS(SHIFT(162)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(336)),
        [sym__declaration] = ACTIONS(SHIFT(154)),
        [sym_identifier] = ACTIONS(SHIFT(164)),
    },
    [335] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(337)),
    },
    [336] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [337] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [338] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_for_statement, 3)),
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
    [339] = {
        [sym__expression] = ACTIONS(SHIFT(340)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(314)),
        [sym_identifier] = ACTIONS(SHIFT(295)),
    },
    [340] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(341)),
    },
    [341] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym__expression] = ACTIONS(SHIFT(342)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(220)),
    },
    [342] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [343] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_case_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
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
    [344] = {
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
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
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
    [345] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [346] = {
        [sym__code_block] = ACTIONS(SHIFT(347)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(348)),
    },
    [347] = {
        [sym__statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_else] = ACTIONS(SHIFT(352)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_if_statement, 3)),
    },
    [348] = {
        [sym__statement] = ACTIONS(SHIFT(153)),
        [sym__loop_statement] = ACTIONS(SHIFT(154)),
        [sym_for_statement] = ACTIONS(SHIFT(155)),
        [sym_for_in_statement] = ACTIONS(SHIFT(155)),
        [sym_while_statement] = ACTIONS(SHIFT(155)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(155)),
        [sym_if_statement] = ACTIONS(SHIFT(154)),
        [sym_guard_statement] = ACTIONS(SHIFT(154)),
        [sym_switch_statement] = ACTIONS(SHIFT(154)),
        [sym_labeled_statement] = ACTIONS(SHIFT(154)),
        [sym__expression] = ACTIONS(SHIFT(154)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(349)),
        [anon_sym_for] = ACTIONS(SHIFT(157)),
        [anon_sym_while] = ACTIONS(SHIFT(158)),
        [anon_sym_repeat] = ACTIONS(SHIFT(159)),
        [anon_sym_if] = ACTIONS(SHIFT(160)),
        [anon_sym_guard] = ACTIONS(SHIFT(161)),
        [anon_sym_switch] = ACTIONS(SHIFT(162)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(350)),
        [sym__declaration] = ACTIONS(SHIFT(154)),
        [sym_identifier] = ACTIONS(SHIFT(164)),
    },
    [349] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(351)),
    },
    [350] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_case_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_case] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [351] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_case_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
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
    [352] = {
        [sym_if_statement] = ACTIONS(SHIFT(353)),
        [sym__code_block] = ACTIONS(SHIFT(353)),
        [anon_sym_if] = ACTIONS(SHIFT(31)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(152)),
    },
    [353] = {
        [sym__statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_if_statement, 5)),
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
    [354] = {
        [anon_sym_while] = ACTIONS(SHIFT(355)),
    },
    [355] = {
        [sym__expression] = ACTIONS(SHIFT(356)),
        [sym_identifier] = ACTIONS(SHIFT(357)),
    },
    [356] = {
        [sym__statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
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
    [357] = {
        [sym__statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_case_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
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
    [358] = {
        [sym__code_block] = ACTIONS(SHIFT(359)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(152)),
    },
    [359] = {
        [sym__statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_while_statement, 3)),
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
    [360] = {
        [sym__code_block] = ACTIONS(SHIFT(379)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(152)),
    },
    [361] = {
        [sym__type_annotation] = ACTIONS(SHIFT(375)),
        [anon_sym_in] = ACTIONS(SHIFT(376)),
        [anon_sym_COLON] = ACTIONS(SHIFT(275)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(269)),
        [anon_sym_as] = ACTIONS(SHIFT(270)),
    },
    [362] = {
        [sym__for_init] = ACTIONS(SHIFT(287)),
        [sym__for_condition] = ACTIONS(SHIFT(372)),
        [sym_variable_declaration] = ACTIONS(SHIFT(241)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(242)),
        [sym__pattern] = ACTIONS(SHIFT(73)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(74)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(74)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(264)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(74)),
        [sym_optional_pattern] = ACTIONS(SHIFT(74)),
        [sym_is_pattern] = ACTIONS(SHIFT(74)),
        [sym_as_pattern] = ACTIONS(SHIFT(74)),
        [sym__expression] = ACTIONS(SHIFT(289)),
        [sym__expression_list] = ACTIONS(SHIFT(241)),
        [sym__type_identifier] = ACTIONS(SHIFT(76)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(290)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(77)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(265)),
        [anon_sym_let] = ACTIONS(SHIFT(79)),
        [anon_sym_var] = ACTIONS(SHIFT(291)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(74)),
        [anon_sym_DOT] = ACTIONS(SHIFT(80)),
        [anon_sym_is] = ACTIONS(SHIFT(81)),
        [sym_identifier] = ACTIONS(SHIFT(292)),
    },
    [363] = {
        [sym__pattern] = ACTIONS(SHIFT(364)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(244)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(244)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(244)),
        [sym_optional_pattern] = ACTIONS(SHIFT(244)),
        [sym_is_pattern] = ACTIONS(SHIFT(244)),
        [sym_as_pattern] = ACTIONS(SHIFT(244)),
        [sym__expression] = ACTIONS(SHIFT(244)),
        [sym__type_identifier] = ACTIONS(SHIFT(246)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(263)),
        [anon_sym_let] = ACTIONS(SHIFT(250)),
        [anon_sym_var] = ACTIONS(SHIFT(250)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(244)),
        [anon_sym_DOT] = ACTIONS(SHIFT(252)),
        [anon_sym_is] = ACTIONS(SHIFT(253)),
        [sym_identifier] = ACTIONS(SHIFT(268)),
    },
    [364] = {
        [sym__type_annotation] = ACTIONS(SHIFT(365)),
        [anon_sym_in] = ACTIONS(SHIFT(366)),
        [anon_sym_COLON] = ACTIONS(SHIFT(275)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(269)),
        [anon_sym_as] = ACTIONS(SHIFT(270)),
    },
    [365] = {
        [anon_sym_in] = ACTIONS(SHIFT(369)),
    },
    [366] = {
        [sym__expression] = ACTIONS(SHIFT(367)),
        [sym_identifier] = ACTIONS(SHIFT(220)),
    },
    [367] = {
        [sym__code_block] = ACTIONS(SHIFT(368)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(152)),
    },
    [368] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
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
    [369] = {
        [sym__expression] = ACTIONS(SHIFT(370)),
        [sym_identifier] = ACTIONS(SHIFT(220)),
    },
    [370] = {
        [sym__code_block] = ACTIONS(SHIFT(371)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(152)),
    },
    [371] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
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
    [372] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(373)),
    },
    [373] = {
        [sym__code_block] = ACTIONS(SHIFT(374)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(152)),
    },
    [374] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_for_statement, 5)),
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
    [375] = {
        [anon_sym_in] = ACTIONS(SHIFT(366)),
    },
    [376] = {
        [sym__expression] = ACTIONS(SHIFT(377)),
        [sym_identifier] = ACTIONS(SHIFT(220)),
    },
    [377] = {
        [sym__code_block] = ACTIONS(SHIFT(378)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(152)),
    },
    [378] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
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
    [379] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_for_statement, 3)),
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
    [380] = {
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
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [381] = {
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_case] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [382] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(408)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(409)),
        [anon_sym_COLON] = ACTIONS(SHIFT(410)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(399)),
        [anon_sym_as] = ACTIONS(SHIFT(400)),
    },
    [383] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [384] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(405)),
    },
    [385] = {
        [sym__pattern] = ACTIONS(SHIFT(73)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(74)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(74)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(402)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(74)),
        [sym_optional_pattern] = ACTIONS(SHIFT(74)),
        [sym_is_pattern] = ACTIONS(SHIFT(74)),
        [sym_as_pattern] = ACTIONS(SHIFT(74)),
        [sym__expression] = ACTIONS(SHIFT(74)),
        [sym__type_identifier] = ACTIONS(SHIFT(76)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(77)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(403)),
        [anon_sym_let] = ACTIONS(SHIFT(79)),
        [anon_sym_var] = ACTIONS(SHIFT(79)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(74)),
        [anon_sym_DOT] = ACTIONS(SHIFT(80)),
        [anon_sym_is] = ACTIONS(SHIFT(81)),
        [sym_identifier] = ACTIONS(SHIFT(82)),
    },
    [386] = {
        [sym__pattern] = ACTIONS(SHIFT(398)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(383)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(383)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(383)),
        [sym_optional_pattern] = ACTIONS(SHIFT(383)),
        [sym_is_pattern] = ACTIONS(SHIFT(383)),
        [sym_as_pattern] = ACTIONS(SHIFT(383)),
        [sym__expression] = ACTIONS(SHIFT(383)),
        [sym__type_identifier] = ACTIONS(SHIFT(384)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(385)),
        [anon_sym_let] = ACTIONS(SHIFT(386)),
        [anon_sym_var] = ACTIONS(SHIFT(386)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(383)),
        [anon_sym_DOT] = ACTIONS(SHIFT(387)),
        [anon_sym_is] = ACTIONS(SHIFT(388)),
        [sym_identifier] = ACTIONS(SHIFT(389)),
    },
    [387] = {
        [sym_identifier] = ACTIONS(SHIFT(396)),
    },
    [388] = {
        [sym_type] = ACTIONS(SHIFT(390)),
        [sym__type_identifier] = ACTIONS(SHIFT(391)),
        [sym__type_name] = ACTIONS(SHIFT(392)),
        [sym_identifier] = ACTIONS(SHIFT(393)),
    },
    [389] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [390] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [391] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [392] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(394)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [393] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [394] = {
        [sym__type_identifier] = ACTIONS(SHIFT(395)),
        [sym__type_name] = ACTIONS(SHIFT(392)),
        [sym_identifier] = ACTIONS(SHIFT(393)),
    },
    [395] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [396] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(397)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(385)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [397] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [398] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(399)),
        [anon_sym_as] = ACTIONS(SHIFT(400)),
    },
    [399] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [400] = {
        [sym_type] = ACTIONS(SHIFT(401)),
        [sym__type_identifier] = ACTIONS(SHIFT(391)),
        [sym__type_name] = ACTIONS(SHIFT(392)),
        [sym_identifier] = ACTIONS(SHIFT(393)),
    },
    [401] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [402] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(404)),
    },
    [403] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [404] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [405] = {
        [sym_identifier] = ACTIONS(SHIFT(406)),
    },
    [406] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(407)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(385)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [407] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [408] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(414)),
    },
    [409] = {
        [sym__pattern] = ACTIONS(SHIFT(412)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(383)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(383)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(383)),
        [sym_optional_pattern] = ACTIONS(SHIFT(383)),
        [sym_is_pattern] = ACTIONS(SHIFT(383)),
        [sym_as_pattern] = ACTIONS(SHIFT(383)),
        [sym__expression] = ACTIONS(SHIFT(383)),
        [sym__type_identifier] = ACTIONS(SHIFT(384)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(385)),
        [anon_sym_let] = ACTIONS(SHIFT(386)),
        [anon_sym_var] = ACTIONS(SHIFT(386)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(383)),
        [anon_sym_DOT] = ACTIONS(SHIFT(387)),
        [anon_sym_is] = ACTIONS(SHIFT(388)),
        [sym_identifier] = ACTIONS(SHIFT(389)),
    },
    [410] = {
        [sym__statement] = ACTIONS(SHIFT(24)),
        [sym__loop_statement] = ACTIONS(SHIFT(25)),
        [sym_for_statement] = ACTIONS(SHIFT(26)),
        [sym_for_in_statement] = ACTIONS(SHIFT(26)),
        [sym_while_statement] = ACTIONS(SHIFT(26)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(26)),
        [sym_if_statement] = ACTIONS(SHIFT(25)),
        [sym_guard_statement] = ACTIONS(SHIFT(25)),
        [sym_switch_statement] = ACTIONS(SHIFT(25)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [sym_labeled_statement] = ACTIONS(SHIFT(25)),
        [sym__expression] = ACTIONS(SHIFT(25)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(411)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_for] = ACTIONS(SHIFT(28)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_while] = ACTIONS(SHIFT(29)),
        [anon_sym_repeat] = ACTIONS(SHIFT(30)),
        [anon_sym_if] = ACTIONS(SHIFT(31)),
        [anon_sym_guard] = ACTIONS(SHIFT(32)),
        [anon_sym_switch] = ACTIONS(SHIFT(33)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [sym__declaration] = ACTIONS(SHIFT(25)),
        [sym_identifier] = ACTIONS(SHIFT(34)),
    },
    [411] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 4)),
    },
    [412] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(413)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(409)),
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(399)),
        [anon_sym_as] = ACTIONS(SHIFT(400)),
    },
    [413] = {
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [414] = {
        [sym__statement] = ACTIONS(SHIFT(24)),
        [sym__loop_statement] = ACTIONS(SHIFT(25)),
        [sym_for_statement] = ACTIONS(SHIFT(26)),
        [sym_for_in_statement] = ACTIONS(SHIFT(26)),
        [sym_while_statement] = ACTIONS(SHIFT(26)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(26)),
        [sym_if_statement] = ACTIONS(SHIFT(25)),
        [sym_guard_statement] = ACTIONS(SHIFT(25)),
        [sym_switch_statement] = ACTIONS(SHIFT(25)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [sym_labeled_statement] = ACTIONS(SHIFT(25)),
        [sym__expression] = ACTIONS(SHIFT(25)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(415)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_for] = ACTIONS(SHIFT(28)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_while] = ACTIONS(SHIFT(29)),
        [anon_sym_repeat] = ACTIONS(SHIFT(30)),
        [anon_sym_if] = ACTIONS(SHIFT(31)),
        [anon_sym_guard] = ACTIONS(SHIFT(32)),
        [anon_sym_switch] = ACTIONS(SHIFT(33)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [sym__declaration] = ACTIONS(SHIFT(25)),
        [sym_identifier] = ACTIONS(SHIFT(34)),
    },
    [415] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 5)),
    },
    [416] = {
        [sym__statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_switch_statement, 5)),
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
    [417] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 2)),
    },
    [418] = {
        [anon_sym_else] = ACTIONS(SHIFT(419)),
    },
    [419] = {
        [sym__code_block] = ACTIONS(SHIFT(420)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(421)),
    },
    [420] = {
        [sym__statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_guard_statement, 4)),
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
    [421] = {
        [sym__statement] = ACTIONS(SHIFT(153)),
        [sym__loop_statement] = ACTIONS(SHIFT(154)),
        [sym_for_statement] = ACTIONS(SHIFT(155)),
        [sym_for_in_statement] = ACTIONS(SHIFT(155)),
        [sym_while_statement] = ACTIONS(SHIFT(155)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(155)),
        [sym_if_statement] = ACTIONS(SHIFT(154)),
        [sym_guard_statement] = ACTIONS(SHIFT(154)),
        [sym_switch_statement] = ACTIONS(SHIFT(154)),
        [sym_labeled_statement] = ACTIONS(SHIFT(154)),
        [sym__expression] = ACTIONS(SHIFT(154)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(422)),
        [anon_sym_for] = ACTIONS(SHIFT(157)),
        [anon_sym_while] = ACTIONS(SHIFT(158)),
        [anon_sym_repeat] = ACTIONS(SHIFT(159)),
        [anon_sym_if] = ACTIONS(SHIFT(160)),
        [anon_sym_guard] = ACTIONS(SHIFT(161)),
        [anon_sym_switch] = ACTIONS(SHIFT(162)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(423)),
        [sym__declaration] = ACTIONS(SHIFT(154)),
        [sym_identifier] = ACTIONS(SHIFT(164)),
    },
    [422] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(424)),
    },
    [423] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__code_block, 2)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [424] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
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
    [425] = {
        [sym__code_block] = ACTIONS(SHIFT(426)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(427)),
    },
    [426] = {
        [sym__statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_else] = ACTIONS(SHIFT(431)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_if_statement, 3)),
    },
    [427] = {
        [sym__statement] = ACTIONS(SHIFT(153)),
        [sym__loop_statement] = ACTIONS(SHIFT(154)),
        [sym_for_statement] = ACTIONS(SHIFT(155)),
        [sym_for_in_statement] = ACTIONS(SHIFT(155)),
        [sym_while_statement] = ACTIONS(SHIFT(155)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(155)),
        [sym_if_statement] = ACTIONS(SHIFT(154)),
        [sym_guard_statement] = ACTIONS(SHIFT(154)),
        [sym_switch_statement] = ACTIONS(SHIFT(154)),
        [sym_labeled_statement] = ACTIONS(SHIFT(154)),
        [sym__expression] = ACTIONS(SHIFT(154)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(428)),
        [anon_sym_for] = ACTIONS(SHIFT(157)),
        [anon_sym_while] = ACTIONS(SHIFT(158)),
        [anon_sym_repeat] = ACTIONS(SHIFT(159)),
        [anon_sym_if] = ACTIONS(SHIFT(160)),
        [anon_sym_guard] = ACTIONS(SHIFT(161)),
        [anon_sym_switch] = ACTIONS(SHIFT(162)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(429)),
        [sym__declaration] = ACTIONS(SHIFT(154)),
        [sym_identifier] = ACTIONS(SHIFT(164)),
    },
    [428] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(430)),
    },
    [429] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__code_block, 2)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [430] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
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
    [431] = {
        [sym_if_statement] = ACTIONS(SHIFT(432)),
        [sym__code_block] = ACTIONS(SHIFT(432)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(421)),
    },
    [432] = {
        [sym__statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_if_statement, 5)),
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
    [433] = {
        [anon_sym_while] = ACTIONS(SHIFT(434)),
    },
    [434] = {
        [sym__expression] = ACTIONS(SHIFT(435)),
        [sym_identifier] = ACTIONS(SHIFT(436)),
    },
    [435] = {
        [sym__statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
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
    [436] = {
        [sym__statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
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
    [437] = {
        [sym__code_block] = ACTIONS(SHIFT(438)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(421)),
    },
    [438] = {
        [sym__statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_while_statement, 3)),
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
    [439] = {
        [sym__code_block] = ACTIONS(SHIFT(458)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(421)),
    },
    [440] = {
        [sym__type_annotation] = ACTIONS(SHIFT(454)),
        [anon_sym_in] = ACTIONS(SHIFT(455)),
        [anon_sym_COLON] = ACTIONS(SHIFT(275)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(269)),
        [anon_sym_as] = ACTIONS(SHIFT(270)),
    },
    [441] = {
        [sym__for_init] = ACTIONS(SHIFT(287)),
        [sym__for_condition] = ACTIONS(SHIFT(451)),
        [sym_variable_declaration] = ACTIONS(SHIFT(241)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(242)),
        [sym__pattern] = ACTIONS(SHIFT(73)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(74)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(74)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(264)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(74)),
        [sym_optional_pattern] = ACTIONS(SHIFT(74)),
        [sym_is_pattern] = ACTIONS(SHIFT(74)),
        [sym_as_pattern] = ACTIONS(SHIFT(74)),
        [sym__expression] = ACTIONS(SHIFT(289)),
        [sym__expression_list] = ACTIONS(SHIFT(241)),
        [sym__type_identifier] = ACTIONS(SHIFT(76)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(290)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(77)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(265)),
        [anon_sym_let] = ACTIONS(SHIFT(79)),
        [anon_sym_var] = ACTIONS(SHIFT(291)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(74)),
        [anon_sym_DOT] = ACTIONS(SHIFT(80)),
        [anon_sym_is] = ACTIONS(SHIFT(81)),
        [sym_identifier] = ACTIONS(SHIFT(292)),
    },
    [442] = {
        [sym__pattern] = ACTIONS(SHIFT(443)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(244)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(244)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(244)),
        [sym_optional_pattern] = ACTIONS(SHIFT(244)),
        [sym_is_pattern] = ACTIONS(SHIFT(244)),
        [sym_as_pattern] = ACTIONS(SHIFT(244)),
        [sym__expression] = ACTIONS(SHIFT(244)),
        [sym__type_identifier] = ACTIONS(SHIFT(246)),
        [sym__type_name] = ACTIONS(SHIFT(55)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(263)),
        [anon_sym_let] = ACTIONS(SHIFT(250)),
        [anon_sym_var] = ACTIONS(SHIFT(250)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(244)),
        [anon_sym_DOT] = ACTIONS(SHIFT(252)),
        [anon_sym_is] = ACTIONS(SHIFT(253)),
        [sym_identifier] = ACTIONS(SHIFT(268)),
    },
    [443] = {
        [sym__type_annotation] = ACTIONS(SHIFT(444)),
        [anon_sym_in] = ACTIONS(SHIFT(445)),
        [anon_sym_COLON] = ACTIONS(SHIFT(275)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(269)),
        [anon_sym_as] = ACTIONS(SHIFT(270)),
    },
    [444] = {
        [anon_sym_in] = ACTIONS(SHIFT(448)),
    },
    [445] = {
        [sym__expression] = ACTIONS(SHIFT(446)),
        [sym_identifier] = ACTIONS(SHIFT(220)),
    },
    [446] = {
        [sym__code_block] = ACTIONS(SHIFT(447)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(421)),
    },
    [447] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
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
    [448] = {
        [sym__expression] = ACTIONS(SHIFT(449)),
        [sym_identifier] = ACTIONS(SHIFT(220)),
    },
    [449] = {
        [sym__code_block] = ACTIONS(SHIFT(450)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(421)),
    },
    [450] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
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
    [451] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(452)),
    },
    [452] = {
        [sym__code_block] = ACTIONS(SHIFT(453)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(421)),
    },
    [453] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_for_statement, 5)),
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
    [454] = {
        [anon_sym_in] = ACTIONS(SHIFT(445)),
    },
    [455] = {
        [sym__expression] = ACTIONS(SHIFT(456)),
        [sym_identifier] = ACTIONS(SHIFT(220)),
    },
    [456] = {
        [sym__code_block] = ACTIONS(SHIFT(457)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(421)),
    },
    [457] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
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
    [458] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_for_statement, 3)),
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
    [459] = {
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
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
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
    [460] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_swift);
