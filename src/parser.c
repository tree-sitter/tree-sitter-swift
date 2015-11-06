#include "tree_sitter/parser.h"

#define STATE_COUNT 467
#define SYMBOL_COUNT 85

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
    anon_sym_break,
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
    [anon_sym_break] = "break",
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
    [anon_sym_break] = TSNodeTypeAnonymous,
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
                ('c' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'b')
                ADVANCE(7);
            if (lookahead == 'f')
                ADVANCE(12);
            if (lookahead == 'g')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(27);
            if (lookahead == 's')
                ADVANCE(33);
            if (lookahead == 'w')
                ADVANCE(39);
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_for);
        case 15:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'u')
                ADVANCE(16);
            ACCEPT_TOKEN(sym_identifier);
        case 16:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(17);
            ACCEPT_TOKEN(sym_identifier);
        case 17:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'r')
                ADVANCE(18);
            ACCEPT_TOKEN(sym_identifier);
        case 18:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'd')
                ADVANCE(19);
            ACCEPT_TOKEN(sym_identifier);
        case 19:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_guard);
        case 20:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'f')
                ADVANCE(21);
            if (lookahead == 'm')
                ADVANCE(22);
            ACCEPT_TOKEN(sym_identifier);
        case 21:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_if);
        case 22:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(23);
            ACCEPT_TOKEN(sym_identifier);
        case 23:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(24);
            ACCEPT_TOKEN(sym_identifier);
        case 24:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'r')
                ADVANCE(25);
            ACCEPT_TOKEN(sym_identifier);
        case 25:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(26);
            ACCEPT_TOKEN(sym_identifier);
        case 26:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(sym__declaration);
        case 27:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(28);
            ACCEPT_TOKEN(sym_identifier);
        case 28:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(29);
            ACCEPT_TOKEN(sym_identifier);
        case 29:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(30);
            ACCEPT_TOKEN(sym_identifier);
        case 30:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(31);
            ACCEPT_TOKEN(sym_identifier);
        case 31:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(32);
            ACCEPT_TOKEN(sym_identifier);
        case 32:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_repeat);
        case 33:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'w')
                ADVANCE(34);
            ACCEPT_TOKEN(sym_identifier);
        case 34:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
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
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(37);
            ACCEPT_TOKEN(sym_identifier);
        case 37:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(38);
            ACCEPT_TOKEN(sym_identifier);
        case 38:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_switch);
        case 39:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(40);
            ACCEPT_TOKEN(sym_identifier);
        case 40:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(41);
            ACCEPT_TOKEN(sym_identifier);
        case 41:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
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
            ACCEPT_TOKEN(anon_sym_while);
        case 44:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(44);
            LEX_ERROR();
        case 45:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(45);
            if (lookahead == ';')
                ADVANCE(46);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'b')
                ADVANCE(7);
            if (lookahead == 'f')
                ADVANCE(12);
            if (lookahead == 'g')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(27);
            if (lookahead == 's')
                ADVANCE(33);
            if (lookahead == 'w')
                ADVANCE(39);
            LEX_ERROR();
        case 46:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 47:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(47);
            if (lookahead == '(')
                ADVANCE(48);
            if (lookahead == '.')
                ADVANCE(49);
            if (lookahead == ';')
                ADVANCE(46);
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
                ADVANCE(50);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'c')
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(55);
            if (lookahead == 'l')
                ADVANCE(57);
            if (lookahead == 'v')
                ADVANCE(60);
            LEX_ERROR();
        case 48:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 49:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 50:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(sym_wildcard_pattern);
        case 51:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(52);
            ACCEPT_TOKEN(sym_identifier);
        case 52:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(53);
            ACCEPT_TOKEN(sym_identifier);
        case 53:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(54);
            ACCEPT_TOKEN(sym_identifier);
        case 54:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_case);
        case 55:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(56);
            ACCEPT_TOKEN(sym_identifier);
        case 56:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_is);
        case 57:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_let);
        case 60:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(61);
            ACCEPT_TOKEN(sym_identifier);
        case 61:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'r')
                ADVANCE(62);
            ACCEPT_TOKEN(sym_identifier);
        case 62:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_var);
        case 63:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(63);
            if (lookahead == '#')
                ADVANCE(64);
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
                ADVANCE(51);
            if (lookahead == 'l')
                ADVANCE(57);
            if (lookahead == 'v')
                ADVANCE(60);
            LEX_ERROR();
        case 64:
            if (lookahead == 'a')
                ADVANCE(65);
            LEX_ERROR();
        case 65:
            if (lookahead == 'v')
                ADVANCE(66);
            LEX_ERROR();
        case 66:
            if (lookahead == 'a')
                ADVANCE(67);
            LEX_ERROR();
        case 67:
            if (lookahead == 'i')
                ADVANCE(68);
            LEX_ERROR();
        case 68:
            if (lookahead == 'l')
                ADVANCE(69);
            LEX_ERROR();
        case 69:
            if (lookahead == 'a')
                ADVANCE(70);
            LEX_ERROR();
        case 70:
            if (lookahead == 'b')
                ADVANCE(71);
            LEX_ERROR();
        case 71:
            if (lookahead == 'l')
                ADVANCE(72);
            LEX_ERROR();
        case 72:
            if (lookahead == 'e')
                ADVANCE(73);
            LEX_ERROR();
        case 73:
            ACCEPT_TOKEN(anon_sym_POUNDavailable);
        case 74:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(74);
            if (lookahead == '{')
                ADVANCE(75);
            LEX_ERROR();
        case 75:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 76:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(76);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 77:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(77);
            if (lookahead == ':')
                ADVANCE(78);
            if (lookahead == ';')
                ADVANCE(46);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'b')
                ADVANCE(7);
            if (lookahead == 'f')
                ADVANCE(12);
            if (lookahead == 'g')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(27);
            if (lookahead == 's')
                ADVANCE(33);
            if (lookahead == 'w')
                ADVANCE(39);
            LEX_ERROR();
        case 78:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 79:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(79);
            if (lookahead == 'f')
                ADVANCE(80);
            if (lookahead == 'i')
                ADVANCE(83);
            if (lookahead == 'r')
                ADVANCE(85);
            if (lookahead == 'w')
                ADVANCE(91);
            LEX_ERROR();
        case 80:
            if (lookahead == 'o')
                ADVANCE(81);
            LEX_ERROR();
        case 81:
            if (lookahead == 'r')
                ADVANCE(82);
            LEX_ERROR();
        case 82:
            ACCEPT_TOKEN(anon_sym_for);
        case 83:
            if (lookahead == 'f')
                ADVANCE(84);
            LEX_ERROR();
        case 84:
            ACCEPT_TOKEN(anon_sym_if);
        case 85:
            if (lookahead == 'e')
                ADVANCE(86);
            LEX_ERROR();
        case 86:
            if (lookahead == 'p')
                ADVANCE(87);
            LEX_ERROR();
        case 87:
            if (lookahead == 'e')
                ADVANCE(88);
            LEX_ERROR();
        case 88:
            if (lookahead == 'a')
                ADVANCE(89);
            LEX_ERROR();
        case 89:
            if (lookahead == 't')
                ADVANCE(90);
            LEX_ERROR();
        case 90:
            ACCEPT_TOKEN(anon_sym_repeat);
        case 91:
            if (lookahead == 'h')
                ADVANCE(92);
            LEX_ERROR();
        case 92:
            if (lookahead == 'i')
                ADVANCE(93);
            LEX_ERROR();
        case 93:
            if (lookahead == 'l')
                ADVANCE(94);
            LEX_ERROR();
        case 94:
            if (lookahead == 'e')
                ADVANCE(95);
            LEX_ERROR();
        case 95:
            ACCEPT_TOKEN(anon_sym_while);
        case 96:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(96);
            if (lookahead == 'c')
                ADVANCE(97);
            if (lookahead == 'd')
                ADVANCE(101);
            if (lookahead == '}')
                ADVANCE(108);
            LEX_ERROR();
        case 97:
            if (lookahead == 'a')
                ADVANCE(98);
            LEX_ERROR();
        case 98:
            if (lookahead == 's')
                ADVANCE(99);
            LEX_ERROR();
        case 99:
            if (lookahead == 'e')
                ADVANCE(100);
            LEX_ERROR();
        case 100:
            ACCEPT_TOKEN(anon_sym_case);
        case 101:
            if (lookahead == 'e')
                ADVANCE(102);
            LEX_ERROR();
        case 102:
            if (lookahead == 'f')
                ADVANCE(103);
            LEX_ERROR();
        case 103:
            if (lookahead == 'a')
                ADVANCE(104);
            LEX_ERROR();
        case 104:
            if (lookahead == 'u')
                ADVANCE(105);
            LEX_ERROR();
        case 105:
            if (lookahead == 'l')
                ADVANCE(106);
            LEX_ERROR();
        case 106:
            if (lookahead == 't')
                ADVANCE(107);
            LEX_ERROR();
        case 107:
            ACCEPT_TOKEN(anon_sym_default);
        case 108:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 109:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(108);
            LEX_ERROR();
        case 110:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(110);
            if (lookahead == '(')
                ADVANCE(48);
            if (lookahead == '.')
                ADVANCE(49);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(50);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(55);
            if (lookahead == 'l')
                ADVANCE(57);
            if (lookahead == 'v')
                ADVANCE(60);
            LEX_ERROR();
        case 111:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(111);
            if (lookahead == ':')
                ADVANCE(78);
            LEX_ERROR();
        case 112:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(112);
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
                ADVANCE(51);
            if (lookahead == 'd')
                ADVANCE(113);
            if (lookahead == 'f')
                ADVANCE(12);
            if (lookahead == 'g')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(27);
            if (lookahead == 's')
                ADVANCE(33);
            if (lookahead == 'w')
                ADVANCE(39);
            if (lookahead == '}')
                ADVANCE(108);
            LEX_ERROR();
        case 113:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(114);
            ACCEPT_TOKEN(sym_identifier);
        case 114:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'f')
                ADVANCE(115);
            ACCEPT_TOKEN(sym_identifier);
        case 115:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(116);
            ACCEPT_TOKEN(sym_identifier);
        case 116:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'u')
                ADVANCE(117);
            ACCEPT_TOKEN(sym_identifier);
        case 117:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(118);
            ACCEPT_TOKEN(sym_identifier);
        case 118:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(119);
            ACCEPT_TOKEN(sym_identifier);
        case 119:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_default);
        case 120:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(120);
            if (lookahead == ';')
                ADVANCE(46);
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
                ADVANCE(51);
            if (lookahead == 'd')
                ADVANCE(113);
            if (lookahead == 'f')
                ADVANCE(12);
            if (lookahead == 'g')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(27);
            if (lookahead == 's')
                ADVANCE(33);
            if (lookahead == 'w')
                ADVANCE(39);
            if (lookahead == '}')
                ADVANCE(108);
            LEX_ERROR();
        case 121:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(121);
            if (lookahead == ':')
                ADVANCE(78);
            if (lookahead == ';')
                ADVANCE(46);
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
                ADVANCE(51);
            if (lookahead == 'd')
                ADVANCE(113);
            if (lookahead == 'f')
                ADVANCE(12);
            if (lookahead == 'g')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(27);
            if (lookahead == 's')
                ADVANCE(33);
            if (lookahead == 'w')
                ADVANCE(39);
            if (lookahead == '}')
                ADVANCE(108);
            LEX_ERROR();
        case 122:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(122);
            if (lookahead == 'e')
                ADVANCE(123);
            LEX_ERROR();
        case 123:
            if (lookahead == 'l')
                ADVANCE(124);
            LEX_ERROR();
        case 124:
            if (lookahead == 's')
                ADVANCE(125);
            LEX_ERROR();
        case 125:
            if (lookahead == 'e')
                ADVANCE(126);
            LEX_ERROR();
        case 126:
            ACCEPT_TOKEN(anon_sym_else);
        case 127:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(127);
            if (lookahead == ',')
                ADVANCE(128);
            if (lookahead == 'e')
                ADVANCE(123);
            LEX_ERROR();
        case 128:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 129:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(129);
            if (lookahead == '(')
                ADVANCE(48);
            LEX_ERROR();
        case 130:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(130);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '?')
                ADVANCE(132);
            if (lookahead == 'a')
                ADVANCE(133);
            LEX_ERROR();
        case 131:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 132:
            ACCEPT_TOKEN(anon_sym_QMARK);
        case 133:
            if (lookahead == 's')
                ADVANCE(134);
            LEX_ERROR();
        case 134:
            ACCEPT_TOKEN(anon_sym_as);
        case 135:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(135);
            if (lookahead == '.')
                ADVANCE(49);
            LEX_ERROR();
        case 136:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(136);
            if (lookahead == '(')
                ADVANCE(48);
            if (lookahead == ')')
                ADVANCE(137);
            if (lookahead == '.')
                ADVANCE(49);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(50);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(55);
            if (lookahead == 'l')
                ADVANCE(57);
            if (lookahead == 'v')
                ADVANCE(60);
            LEX_ERROR();
        case 137:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 138:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(138);
            if (lookahead == '.')
                ADVANCE(49);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '?')
                ADVANCE(132);
            if (lookahead == 'a')
                ADVANCE(133);
            LEX_ERROR();
        case 139:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(139);
            if (lookahead == '(')
                ADVANCE(48);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '?')
                ADVANCE(132);
            if (lookahead == 'a')
                ADVANCE(133);
            LEX_ERROR();
        case 140:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(140);
            if (lookahead == ')')
                ADVANCE(137);
            if (lookahead == ',')
                ADVANCE(128);
            if (lookahead == '?')
                ADVANCE(132);
            if (lookahead == 'a')
                ADVANCE(133);
            LEX_ERROR();
        case 141:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(141);
            if (lookahead == ')')
                ADVANCE(137);
            LEX_ERROR();
        case 142:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(142);
            if (lookahead == ')')
                ADVANCE(137);
            if (lookahead == ',')
                ADVANCE(128);
            if (lookahead == '.')
                ADVANCE(49);
            if (lookahead == '?')
                ADVANCE(132);
            if (lookahead == 'a')
                ADVANCE(133);
            LEX_ERROR();
        case 143:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(143);
            if (lookahead == '(')
                ADVANCE(48);
            if (lookahead == ')')
                ADVANCE(137);
            if (lookahead == ',')
                ADVANCE(128);
            if (lookahead == '?')
                ADVANCE(132);
            if (lookahead == 'a')
                ADVANCE(133);
            LEX_ERROR();
        case 144:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(144);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == 'O')
                ADVANCE(146);
            if (lookahead == 'i')
                ADVANCE(169);
            if (lookahead == 't')
                ADVANCE(192);
            if (lookahead == 'w')
                ADVANCE(196);
            LEX_ERROR();
        case 145:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 146:
            if (lookahead == 'S')
                ADVANCE(147);
            LEX_ERROR();
        case 147:
            if (lookahead == 'X')
                ADVANCE(148);
            LEX_ERROR();
        case 148:
            if (lookahead == 'A')
                ADVANCE(149);
            ACCEPT_TOKEN(anon_sym_OSX);
        case 149:
            if (lookahead == 'p')
                ADVANCE(150);
            LEX_ERROR();
        case 150:
            if (lookahead == 'p')
                ADVANCE(151);
            LEX_ERROR();
        case 151:
            if (lookahead == 'l')
                ADVANCE(152);
            LEX_ERROR();
        case 152:
            if (lookahead == 'i')
                ADVANCE(153);
            LEX_ERROR();
        case 153:
            if (lookahead == 'c')
                ADVANCE(154);
            LEX_ERROR();
        case 154:
            if (lookahead == 'a')
                ADVANCE(155);
            LEX_ERROR();
        case 155:
            if (lookahead == 't')
                ADVANCE(156);
            LEX_ERROR();
        case 156:
            if (lookahead == 'i')
                ADVANCE(157);
            LEX_ERROR();
        case 157:
            if (lookahead == 'o')
                ADVANCE(158);
            LEX_ERROR();
        case 158:
            if (lookahead == 'n')
                ADVANCE(159);
            LEX_ERROR();
        case 159:
            if (lookahead == 'E')
                ADVANCE(160);
            LEX_ERROR();
        case 160:
            if (lookahead == 'x')
                ADVANCE(161);
            LEX_ERROR();
        case 161:
            if (lookahead == 't')
                ADVANCE(162);
            LEX_ERROR();
        case 162:
            if (lookahead == 'e')
                ADVANCE(163);
            LEX_ERROR();
        case 163:
            if (lookahead == 'n')
                ADVANCE(164);
            LEX_ERROR();
        case 164:
            if (lookahead == 's')
                ADVANCE(165);
            LEX_ERROR();
        case 165:
            if (lookahead == 'i')
                ADVANCE(166);
            LEX_ERROR();
        case 166:
            if (lookahead == 'o')
                ADVANCE(167);
            LEX_ERROR();
        case 167:
            if (lookahead == 'n')
                ADVANCE(168);
            LEX_ERROR();
        case 168:
            ACCEPT_TOKEN(anon_sym_OSXApplicationExtension);
        case 169:
            if (lookahead == 'O')
                ADVANCE(170);
            LEX_ERROR();
        case 170:
            if (lookahead == 'S')
                ADVANCE(171);
            LEX_ERROR();
        case 171:
            if (lookahead == 'A')
                ADVANCE(172);
            ACCEPT_TOKEN(anon_sym_iOS);
        case 172:
            if (lookahead == 'p')
                ADVANCE(173);
            LEX_ERROR();
        case 173:
            if (lookahead == 'p')
                ADVANCE(174);
            LEX_ERROR();
        case 174:
            if (lookahead == 'l')
                ADVANCE(175);
            LEX_ERROR();
        case 175:
            if (lookahead == 'i')
                ADVANCE(176);
            LEX_ERROR();
        case 176:
            if (lookahead == 'c')
                ADVANCE(177);
            LEX_ERROR();
        case 177:
            if (lookahead == 'a')
                ADVANCE(178);
            LEX_ERROR();
        case 178:
            if (lookahead == 't')
                ADVANCE(179);
            LEX_ERROR();
        case 179:
            if (lookahead == 'i')
                ADVANCE(180);
            LEX_ERROR();
        case 180:
            if (lookahead == 'o')
                ADVANCE(181);
            LEX_ERROR();
        case 181:
            if (lookahead == 'n')
                ADVANCE(182);
            LEX_ERROR();
        case 182:
            if (lookahead == 'E')
                ADVANCE(183);
            LEX_ERROR();
        case 183:
            if (lookahead == 'x')
                ADVANCE(184);
            LEX_ERROR();
        case 184:
            if (lookahead == 't')
                ADVANCE(185);
            LEX_ERROR();
        case 185:
            if (lookahead == 'e')
                ADVANCE(186);
            LEX_ERROR();
        case 186:
            if (lookahead == 'n')
                ADVANCE(187);
            LEX_ERROR();
        case 187:
            if (lookahead == 's')
                ADVANCE(188);
            LEX_ERROR();
        case 188:
            if (lookahead == 'i')
                ADVANCE(189);
            LEX_ERROR();
        case 189:
            if (lookahead == 'o')
                ADVANCE(190);
            LEX_ERROR();
        case 190:
            if (lookahead == 'n')
                ADVANCE(191);
            LEX_ERROR();
        case 191:
            ACCEPT_TOKEN(anon_sym_iOSApplicationExtension);
        case 192:
            if (lookahead == 'v')
                ADVANCE(193);
            LEX_ERROR();
        case 193:
            if (lookahead == 'O')
                ADVANCE(194);
            LEX_ERROR();
        case 194:
            if (lookahead == 'S')
                ADVANCE(195);
            LEX_ERROR();
        case 195:
            ACCEPT_TOKEN(anon_sym_tvOS);
        case 196:
            if (lookahead == 'a')
                ADVANCE(197);
            LEX_ERROR();
        case 197:
            if (lookahead == 't')
                ADVANCE(198);
            LEX_ERROR();
        case 198:
            if (lookahead == 'c')
                ADVANCE(199);
            LEX_ERROR();
        case 199:
            if (lookahead == 'h')
                ADVANCE(200);
            LEX_ERROR();
        case 200:
            if (lookahead == 'O')
                ADVANCE(201);
            LEX_ERROR();
        case 201:
            if (lookahead == 'S')
                ADVANCE(202);
            LEX_ERROR();
        case 202:
            ACCEPT_TOKEN(anon_sym_watchOS);
        case 203:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(203);
            if (lookahead == ')')
                ADVANCE(137);
            if (lookahead == ',')
                ADVANCE(128);
            LEX_ERROR();
        case 204:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(204);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(205);
            LEX_ERROR();
        case 205:
            if (lookahead == '.')
                ADVANCE(206);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(205);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 206:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(207);
            LEX_ERROR();
        case 207:
            if (lookahead == '.')
                ADVANCE(208);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(207);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 208:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(209);
            LEX_ERROR();
        case 209:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(209);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 210:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(210);
            if (lookahead == '#')
                ADVANCE(64);
            if (lookahead == 'c')
                ADVANCE(97);
            if (lookahead == 'l')
                ADVANCE(211);
            if (lookahead == 'v')
                ADVANCE(214);
            LEX_ERROR();
        case 211:
            if (lookahead == 'e')
                ADVANCE(212);
            LEX_ERROR();
        case 212:
            if (lookahead == 't')
                ADVANCE(213);
            LEX_ERROR();
        case 213:
            ACCEPT_TOKEN(anon_sym_let);
        case 214:
            if (lookahead == 'a')
                ADVANCE(215);
            LEX_ERROR();
        case 215:
            if (lookahead == 'r')
                ADVANCE(216);
            LEX_ERROR();
        case 216:
            ACCEPT_TOKEN(anon_sym_var);
        case 217:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(217);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'b')
                ADVANCE(7);
            if (lookahead == 'f')
                ADVANCE(12);
            if (lookahead == 'g')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(27);
            if (lookahead == 's')
                ADVANCE(33);
            if (lookahead == 'w')
                ADVANCE(39);
            if (lookahead == '}')
                ADVANCE(108);
            LEX_ERROR();
        case 218:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(218);
            if (lookahead == ';')
                ADVANCE(46);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'b')
                ADVANCE(7);
            if (lookahead == 'f')
                ADVANCE(12);
            if (lookahead == 'g')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(27);
            if (lookahead == 's')
                ADVANCE(33);
            if (lookahead == 'w')
                ADVANCE(39);
            if (lookahead == '}')
                ADVANCE(108);
            LEX_ERROR();
        case 219:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(219);
            if (lookahead == ':')
                ADVANCE(78);
            if (lookahead == ';')
                ADVANCE(46);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'e') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'b')
                ADVANCE(7);
            if (lookahead == 'f')
                ADVANCE(12);
            if (lookahead == 'g')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(27);
            if (lookahead == 's')
                ADVANCE(33);
            if (lookahead == 'w')
                ADVANCE(39);
            if (lookahead == '}')
                ADVANCE(108);
            LEX_ERROR();
        case 220:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(220);
            if (lookahead == ',')
                ADVANCE(128);
            if (lookahead == '{')
                ADVANCE(75);
            LEX_ERROR();
        case 221:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(221);
            if (lookahead == ';')
                ADVANCE(46);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'c') ||
                (lookahead == 'd') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'b')
                ADVANCE(7);
            if (lookahead == 'e')
                ADVANCE(222);
            if (lookahead == 'f')
                ADVANCE(12);
            if (lookahead == 'g')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(27);
            if (lookahead == 's')
                ADVANCE(33);
            if (lookahead == 'w')
                ADVANCE(39);
            if (lookahead == '}')
                ADVANCE(108);
            LEX_ERROR();
        case 222:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(223);
            ACCEPT_TOKEN(sym_identifier);
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
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(225);
            ACCEPT_TOKEN(sym_identifier);
        case 225:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_else);
        case 226:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(226);
            if (lookahead == 'i')
                ADVANCE(83);
            if (lookahead == '{')
                ADVANCE(75);
            LEX_ERROR();
        case 227:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(227);
            if (lookahead == 'w')
                ADVANCE(91);
            LEX_ERROR();
        case 228:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(228);
            if (lookahead == ';')
                ADVANCE(46);
            LEX_ERROR();
        case 229:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(229);
            if (lookahead == ':')
                ADVANCE(78);
            if (lookahead == '?')
                ADVANCE(132);
            if (lookahead == 'a')
                ADVANCE(133);
            if (lookahead == 'i')
                ADVANCE(230);
            LEX_ERROR();
        case 230:
            if (lookahead == 'n')
                ADVANCE(231);
            LEX_ERROR();
        case 231:
            ACCEPT_TOKEN(anon_sym_in);
        case 232:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(232);
            if (lookahead == ',')
                ADVANCE(128);
            if (lookahead == ':')
                ADVANCE(78);
            if (lookahead == ';')
                ADVANCE(46);
            if (lookahead == '?')
                ADVANCE(132);
            if (lookahead == 'a')
                ADVANCE(133);
            if (lookahead == 'i')
                ADVANCE(230);
            LEX_ERROR();
        case 233:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(233);
            if (lookahead == ';')
                ADVANCE(46);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 234:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(234);
            if (lookahead == '(')
                ADVANCE(48);
            if (lookahead == ')')
                ADVANCE(137);
            if (lookahead == '.')
                ADVANCE(49);
            if (lookahead == ';')
                ADVANCE(46);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(50);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(55);
            if (lookahead == 'l')
                ADVANCE(57);
            if (lookahead == 'v')
                ADVANCE(60);
            LEX_ERROR();
        case 235:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(235);
            if (lookahead == ',')
                ADVANCE(128);
            if (lookahead == '.')
                ADVANCE(49);
            if (lookahead == ':')
                ADVANCE(78);
            if (lookahead == ';')
                ADVANCE(46);
            if (lookahead == '?')
                ADVANCE(132);
            if (lookahead == 'a')
                ADVANCE(133);
            if (lookahead == 'i')
                ADVANCE(230);
            LEX_ERROR();
        case 236:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(236);
            if (lookahead == '.')
                ADVANCE(49);
            if (lookahead == ':')
                ADVANCE(78);
            if (lookahead == '?')
                ADVANCE(132);
            if (lookahead == 'a')
                ADVANCE(133);
            if (lookahead == 'i')
                ADVANCE(230);
            LEX_ERROR();
        case 237:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(237);
            if (lookahead == '(')
                ADVANCE(48);
            if (lookahead == ':')
                ADVANCE(78);
            if (lookahead == '?')
                ADVANCE(132);
            if (lookahead == 'a')
                ADVANCE(133);
            if (lookahead == 'i')
                ADVANCE(230);
            LEX_ERROR();
        case 238:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(238);
            if (lookahead == 'i')
                ADVANCE(230);
            LEX_ERROR();
        case 239:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(239);
            if (lookahead == '.')
                ADVANCE(49);
            if (lookahead == 'i')
                ADVANCE(230);
            LEX_ERROR();
        case 240:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(240);
            if (lookahead == ')')
                ADVANCE(137);
            if (lookahead == ',')
                ADVANCE(128);
            if (lookahead == ';')
                ADVANCE(46);
            if (lookahead == '?')
                ADVANCE(132);
            if (lookahead == 'a')
                ADVANCE(133);
            LEX_ERROR();
        case 241:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(241);
            if (lookahead == ')')
                ADVANCE(137);
            if (lookahead == ',')
                ADVANCE(128);
            if (lookahead == '.')
                ADVANCE(49);
            if (lookahead == ';')
                ADVANCE(46);
            if (lookahead == '?')
                ADVANCE(132);
            if (lookahead == 'a')
                ADVANCE(133);
            LEX_ERROR();
        case 242:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(242);
            if (lookahead == ')')
                ADVANCE(137);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 243:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(243);
            if (lookahead == ',')
                ADVANCE(128);
            if (lookahead == ';')
                ADVANCE(46);
            LEX_ERROR();
        case 244:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(244);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == '{')
                ADVANCE(75);
            LEX_ERROR();
        case 245:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(245);
            if (lookahead == '.')
                ADVANCE(49);
            if (lookahead == '{')
                ADVANCE(75);
            LEX_ERROR();
        case 246:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(246);
            if (lookahead == ';')
                ADVANCE(46);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
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
                ADVANCE(51);
            if (lookahead == 'd')
                ADVANCE(113);
            if (lookahead == 'e')
                ADVANCE(222);
            if (lookahead == 'f')
                ADVANCE(12);
            if (lookahead == 'g')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(27);
            if (lookahead == 's')
                ADVANCE(33);
            if (lookahead == 'w')
                ADVANCE(39);
            if (lookahead == '}')
                ADVANCE(108);
            LEX_ERROR();
        case 247:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(247);
            if (lookahead == ',')
                ADVANCE(128);
            if (lookahead == ':')
                ADVANCE(78);
            if (lookahead == '?')
                ADVANCE(132);
            if (lookahead == 'a')
                ADVANCE(133);
            LEX_ERROR();
        case 248:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(248);
            if (lookahead == ',')
                ADVANCE(128);
            if (lookahead == '.')
                ADVANCE(49);
            if (lookahead == ':')
                ADVANCE(78);
            if (lookahead == '?')
                ADVANCE(132);
            if (lookahead == 'a')
                ADVANCE(133);
            LEX_ERROR();
        case 249:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(249);
            if (lookahead == '(')
                ADVANCE(48);
            if (lookahead == ',')
                ADVANCE(128);
            if (lookahead == ':')
                ADVANCE(78);
            if (lookahead == '?')
                ADVANCE(132);
            if (lookahead == 'a')
                ADVANCE(133);
            LEX_ERROR();
        case 250:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(250);
            if (lookahead == ';')
                ADVANCE(46);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'c') ||
                (lookahead == 'd') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'b')
                ADVANCE(7);
            if (lookahead == 'e')
                ADVANCE(222);
            if (lookahead == 'f')
                ADVANCE(12);
            if (lookahead == 'g')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(27);
            if (lookahead == 's')
                ADVANCE(33);
            if (lookahead == 'w')
                ADVANCE(39);
            LEX_ERROR();
        case 251:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(251);
            if (lookahead == '#')
                ADVANCE(64);
            if (lookahead == '(')
                ADVANCE(48);
            if (lookahead == ')')
                ADVANCE(137);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == ',')
                ADVANCE(128);
            if (lookahead == '.')
                ADVANCE(49);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(205);
            if (lookahead == ':')
                ADVANCE(78);
            if (lookahead == ';')
                ADVANCE(46);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '?')
                ADVANCE(132);
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
                ADVANCE(252);
            if (lookahead == '_')
                ADVANCE(50);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(275);
            if (lookahead == 'b')
                ADVANCE(7);
            if (lookahead == 'c')
                ADVANCE(51);
            if (lookahead == 'd')
                ADVANCE(113);
            if (lookahead == 'e')
                ADVANCE(222);
            if (lookahead == 'f')
                ADVANCE(12);
            if (lookahead == 'g')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(277);
            if (lookahead == 'l')
                ADVANCE(57);
            if (lookahead == 'r')
                ADVANCE(27);
            if (lookahead == 's')
                ADVANCE(33);
            if (lookahead == 't')
                ADVANCE(301);
            if (lookahead == 'v')
                ADVANCE(60);
            if (lookahead == 'w')
                ADVANCE(305);
            if (lookahead == '{')
                ADVANCE(75);
            if (lookahead == '}')
                ADVANCE(108);
            LEX_ERROR();
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
            if (('A' <= lookahead && lookahead <= 'W') ||
                (lookahead == 'Y') ||
                (lookahead == 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'X')
                ADVANCE(254);
            ACCEPT_TOKEN(sym_identifier);
        case 254:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (lookahead == 'A')
                ADVANCE(255);
            if (('B' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_OSX);
        case 255:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(256);
            ACCEPT_TOKEN(sym_identifier);
        case 256:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(257);
            ACCEPT_TOKEN(sym_identifier);
        case 257:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(258);
            ACCEPT_TOKEN(sym_identifier);
        case 258:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(259);
            ACCEPT_TOKEN(sym_identifier);
        case 259:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(260);
            ACCEPT_TOKEN(sym_identifier);
        case 260:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(261);
            ACCEPT_TOKEN(sym_identifier);
        case 261:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(262);
            ACCEPT_TOKEN(sym_identifier);
        case 262:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(263);
            ACCEPT_TOKEN(sym_identifier);
        case 263:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
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
            if (('A' <= lookahead && lookahead <= 'D') ||
                ('F' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'E')
                ADVANCE(266);
            ACCEPT_TOKEN(sym_identifier);
        case 266:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(3);
            if (lookahead == 'x')
                ADVANCE(267);
            ACCEPT_TOKEN(sym_identifier);
        case 267:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(268);
            ACCEPT_TOKEN(sym_identifier);
        case 268:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(269);
            ACCEPT_TOKEN(sym_identifier);
        case 269:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(270);
            ACCEPT_TOKEN(sym_identifier);
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
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(272);
            ACCEPT_TOKEN(sym_identifier);
        case 272:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(273);
            ACCEPT_TOKEN(sym_identifier);
        case 273:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(274);
            ACCEPT_TOKEN(sym_identifier);
        case 274:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_OSXApplicationExtension);
        case 275:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(276);
            ACCEPT_TOKEN(sym_identifier);
        case 276:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_as);
        case 277:
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
                ADVANCE(278);
            if (lookahead == 'f')
                ADVANCE(21);
            if (lookahead == 'm')
                ADVANCE(22);
            if (lookahead == 'n')
                ADVANCE(300);
            if (lookahead == 's')
                ADVANCE(56);
            ACCEPT_TOKEN(sym_identifier);
        case 278:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(279);
            ACCEPT_TOKEN(sym_identifier);
        case 279:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (lookahead == 'A')
                ADVANCE(280);
            if (('B' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_iOS);
        case 280:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(281);
            ACCEPT_TOKEN(sym_identifier);
        case 281:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(282);
            ACCEPT_TOKEN(sym_identifier);
        case 282:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(283);
            ACCEPT_TOKEN(sym_identifier);
        case 283:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(284);
            ACCEPT_TOKEN(sym_identifier);
        case 284:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(285);
            ACCEPT_TOKEN(sym_identifier);
        case 285:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(286);
            ACCEPT_TOKEN(sym_identifier);
        case 286:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(287);
            ACCEPT_TOKEN(sym_identifier);
        case 287:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(288);
            ACCEPT_TOKEN(sym_identifier);
        case 288:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
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
            if (('A' <= lookahead && lookahead <= 'D') ||
                ('F' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'E')
                ADVANCE(291);
            ACCEPT_TOKEN(sym_identifier);
        case 291:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(3);
            if (lookahead == 'x')
                ADVANCE(292);
            ACCEPT_TOKEN(sym_identifier);
        case 292:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(293);
            ACCEPT_TOKEN(sym_identifier);
        case 293:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(294);
            ACCEPT_TOKEN(sym_identifier);
        case 294:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(295);
            ACCEPT_TOKEN(sym_identifier);
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
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(297);
            ACCEPT_TOKEN(sym_identifier);
        case 297:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(298);
            ACCEPT_TOKEN(sym_identifier);
        case 298:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(299);
            ACCEPT_TOKEN(sym_identifier);
        case 299:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_iOSApplicationExtension);
        case 300:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_in);
        case 301:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'v')
                ADVANCE(302);
            ACCEPT_TOKEN(sym_identifier);
        case 302:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(303);
            ACCEPT_TOKEN(sym_identifier);
        case 303:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(304);
            ACCEPT_TOKEN(sym_identifier);
        case 304:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_tvOS);
        case 305:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(306);
            if (lookahead == 'h')
                ADVANCE(40);
            ACCEPT_TOKEN(sym_identifier);
        case 306:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(307);
            ACCEPT_TOKEN(sym_identifier);
        case 307:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(308);
            ACCEPT_TOKEN(sym_identifier);
        case 308:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(309);
            ACCEPT_TOKEN(sym_identifier);
        case 309:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(310);
            ACCEPT_TOKEN(sym_identifier);
        case 310:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(311);
            ACCEPT_TOKEN(sym_identifier);
        case 311:
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
                ADVANCE(251);
            if (lookahead == '#')
                ADVANCE(64);
            if (lookahead == '(')
                ADVANCE(48);
            if (lookahead == ')')
                ADVANCE(137);
            if (lookahead == '*')
                ADVANCE(145);
            if (lookahead == ',')
                ADVANCE(128);
            if (lookahead == '.')
                ADVANCE(49);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(205);
            if (lookahead == ':')
                ADVANCE(78);
            if (lookahead == ';')
                ADVANCE(46);
            if (lookahead == '=')
                ADVANCE(131);
            if (lookahead == '?')
                ADVANCE(132);
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
                ADVANCE(252);
            if (lookahead == '_')
                ADVANCE(50);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(275);
            if (lookahead == 'b')
                ADVANCE(7);
            if (lookahead == 'c')
                ADVANCE(51);
            if (lookahead == 'd')
                ADVANCE(113);
            if (lookahead == 'e')
                ADVANCE(222);
            if (lookahead == 'f')
                ADVANCE(12);
            if (lookahead == 'g')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(277);
            if (lookahead == 'l')
                ADVANCE(57);
            if (lookahead == 'r')
                ADVANCE(27);
            if (lookahead == 's')
                ADVANCE(33);
            if (lookahead == 't')
                ADVANCE(301);
            if (lookahead == 'v')
                ADVANCE(60);
            if (lookahead == 'w')
                ADVANCE(305);
            if (lookahead == '{')
                ADVANCE(75);
            if (lookahead == '}')
                ADVANCE(108);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 1,
    [1] = 44,
    [2] = 1,
    [3] = 45,
    [4] = 45,
    [5] = 44,
    [6] = 47,
    [7] = 63,
    [8] = 74,
    [9] = 63,
    [10] = 63,
    [11] = 76,
    [12] = 45,
    [13] = 77,
    [14] = 79,
    [15] = 45,
    [16] = 45,
    [17] = 74,
    [18] = 74,
    [19] = 96,
    [20] = 96,
    [21] = 109,
    [22] = 110,
    [23] = 45,
    [24] = 111,
    [25] = 112,
    [26] = 112,
    [27] = 120,
    [28] = 120,
    [29] = 96,
    [30] = 47,
    [31] = 63,
    [32] = 74,
    [33] = 63,
    [34] = 63,
    [35] = 76,
    [36] = 120,
    [37] = 121,
    [38] = 79,
    [39] = 120,
    [40] = 120,
    [41] = 74,
    [42] = 96,
    [43] = 109,
    [44] = 120,
    [45] = 120,
    [46] = 122,
    [47] = 127,
    [48] = 127,
    [49] = 127,
    [50] = 127,
    [51] = 110,
    [52] = 129,
    [53] = 110,
    [54] = 127,
    [55] = 127,
    [56] = 130,
    [57] = 130,
    [58] = 135,
    [59] = 135,
    [60] = 136,
    [61] = 110,
    [62] = 76,
    [63] = 76,
    [64] = 138,
    [65] = 130,
    [66] = 130,
    [67] = 138,
    [68] = 138,
    [69] = 76,
    [70] = 130,
    [71] = 139,
    [72] = 130,
    [73] = 130,
    [74] = 130,
    [75] = 76,
    [76] = 130,
    [77] = 140,
    [78] = 140,
    [79] = 141,
    [80] = 135,
    [81] = 136,
    [82] = 130,
    [83] = 110,
    [84] = 76,
    [85] = 76,
    [86] = 142,
    [87] = 140,
    [88] = 140,
    [89] = 142,
    [90] = 142,
    [91] = 76,
    [92] = 140,
    [93] = 143,
    [94] = 140,
    [95] = 140,
    [96] = 140,
    [97] = 76,
    [98] = 140,
    [99] = 141,
    [100] = 140,
    [101] = 140,
    [102] = 76,
    [103] = 143,
    [104] = 140,
    [105] = 130,
    [106] = 141,
    [107] = 110,
    [108] = 140,
    [109] = 141,
    [110] = 76,
    [111] = 135,
    [112] = 135,
    [113] = 76,
    [114] = 139,
    [115] = 130,
    [116] = 76,
    [117] = 127,
    [118] = 127,
    [119] = 110,
    [120] = 127,
    [121] = 130,
    [122] = 76,
    [123] = 127,
    [124] = 127,
    [125] = 127,
    [126] = 144,
    [127] = 203,
    [128] = 204,
    [129] = 203,
    [130] = 141,
    [131] = 127,
    [132] = 144,
    [133] = 203,
    [134] = 204,
    [135] = 203,
    [136] = 141,
    [137] = 141,
    [138] = 127,
    [139] = 141,
    [140] = 127,
    [141] = 130,
    [142] = 76,
    [143] = 127,
    [144] = 210,
    [145] = 127,
    [146] = 122,
    [147] = 210,
    [148] = 127,
    [149] = 122,
    [150] = 76,
    [151] = 122,
    [152] = 122,
    [153] = 122,
    [154] = 74,
    [155] = 120,
    [156] = 217,
    [157] = 217,
    [158] = 218,
    [159] = 218,
    [160] = 109,
    [161] = 47,
    [162] = 63,
    [163] = 74,
    [164] = 63,
    [165] = 63,
    [166] = 76,
    [167] = 120,
    [168] = 218,
    [169] = 219,
    [170] = 79,
    [171] = 218,
    [172] = 218,
    [173] = 74,
    [174] = 96,
    [175] = 109,
    [176] = 218,
    [177] = 218,
    [178] = 122,
    [179] = 74,
    [180] = 218,
    [181] = 217,
    [182] = 109,
    [183] = 218,
    [184] = 218,
    [185] = 74,
    [186] = 220,
    [187] = 220,
    [188] = 220,
    [189] = 220,
    [190] = 110,
    [191] = 129,
    [192] = 110,
    [193] = 220,
    [194] = 220,
    [195] = 130,
    [196] = 76,
    [197] = 220,
    [198] = 220,
    [199] = 110,
    [200] = 220,
    [201] = 130,
    [202] = 76,
    [203] = 220,
    [204] = 220,
    [205] = 220,
    [206] = 144,
    [207] = 203,
    [208] = 204,
    [209] = 203,
    [210] = 141,
    [211] = 220,
    [212] = 220,
    [213] = 141,
    [214] = 220,
    [215] = 130,
    [216] = 76,
    [217] = 220,
    [218] = 210,
    [219] = 220,
    [220] = 74,
    [221] = 210,
    [222] = 220,
    [223] = 74,
    [224] = 76,
    [225] = 74,
    [226] = 74,
    [227] = 74,
    [228] = 221,
    [229] = 217,
    [230] = 109,
    [231] = 221,
    [232] = 221,
    [233] = 226,
    [234] = 218,
    [235] = 227,
    [236] = 217,
    [237] = 109,
    [238] = 227,
    [239] = 227,
    [240] = 76,
    [241] = 218,
    [242] = 218,
    [243] = 74,
    [244] = 218,
    [245] = 228,
    [246] = 74,
    [247] = 228,
    [248] = 76,
    [249] = 229,
    [250] = 229,
    [251] = 232,
    [252] = 135,
    [253] = 233,
    [254] = 234,
    [255] = 110,
    [256] = 110,
    [257] = 110,
    [258] = 76,
    [259] = 76,
    [260] = 235,
    [261] = 229,
    [262] = 229,
    [263] = 236,
    [264] = 236,
    [265] = 76,
    [266] = 229,
    [267] = 237,
    [268] = 229,
    [269] = 136,
    [270] = 141,
    [271] = 229,
    [272] = 229,
    [273] = 229,
    [274] = 236,
    [275] = 229,
    [276] = 76,
    [277] = 229,
    [278] = 229,
    [279] = 238,
    [280] = 76,
    [281] = 76,
    [282] = 238,
    [283] = 238,
    [284] = 239,
    [285] = 239,
    [286] = 76,
    [287] = 238,
    [288] = 74,
    [289] = 218,
    [290] = 76,
    [291] = 74,
    [292] = 218,
    [293] = 228,
    [294] = 141,
    [295] = 240,
    [296] = 233,
    [297] = 110,
    [298] = 241,
    [299] = 228,
    [300] = 242,
    [301] = 228,
    [302] = 141,
    [303] = 141,
    [304] = 242,
    [305] = 141,
    [306] = 228,
    [307] = 76,
    [308] = 243,
    [309] = 243,
    [310] = 228,
    [311] = 74,
    [312] = 218,
    [313] = 233,
    [314] = 228,
    [315] = 242,
    [316] = 141,
    [317] = 228,
    [318] = 244,
    [319] = 74,
    [320] = 244,
    [321] = 74,
    [322] = 76,
    [323] = 237,
    [324] = 229,
    [325] = 238,
    [326] = 76,
    [327] = 74,
    [328] = 218,
    [329] = 111,
    [330] = 111,
    [331] = 74,
    [332] = 76,
    [333] = 74,
    [334] = 74,
    [335] = 245,
    [336] = 245,
    [337] = 76,
    [338] = 74,
    [339] = 228,
    [340] = 217,
    [341] = 109,
    [342] = 228,
    [343] = 228,
    [344] = 218,
    [345] = 233,
    [346] = 228,
    [347] = 244,
    [348] = 74,
    [349] = 120,
    [350] = 217,
    [351] = 109,
    [352] = 74,
    [353] = 246,
    [354] = 217,
    [355] = 109,
    [356] = 246,
    [357] = 246,
    [358] = 226,
    [359] = 120,
    [360] = 227,
    [361] = 76,
    [362] = 120,
    [363] = 120,
    [364] = 74,
    [365] = 120,
    [366] = 74,
    [367] = 229,
    [368] = 234,
    [369] = 110,
    [370] = 229,
    [371] = 238,
    [372] = 76,
    [373] = 74,
    [374] = 120,
    [375] = 76,
    [376] = 74,
    [377] = 120,
    [378] = 141,
    [379] = 74,
    [380] = 120,
    [381] = 238,
    [382] = 76,
    [383] = 74,
    [384] = 120,
    [385] = 120,
    [386] = 112,
    [387] = 96,
    [388] = 247,
    [389] = 247,
    [390] = 135,
    [391] = 136,
    [392] = 110,
    [393] = 76,
    [394] = 76,
    [395] = 248,
    [396] = 247,
    [397] = 247,
    [398] = 248,
    [399] = 248,
    [400] = 76,
    [401] = 247,
    [402] = 249,
    [403] = 247,
    [404] = 247,
    [405] = 247,
    [406] = 76,
    [407] = 247,
    [408] = 141,
    [409] = 247,
    [410] = 247,
    [411] = 76,
    [412] = 249,
    [413] = 247,
    [414] = 111,
    [415] = 110,
    [416] = 112,
    [417] = 96,
    [418] = 247,
    [419] = 111,
    [420] = 112,
    [421] = 96,
    [422] = 45,
    [423] = 109,
    [424] = 122,
    [425] = 74,
    [426] = 45,
    [427] = 217,
    [428] = 109,
    [429] = 45,
    [430] = 45,
    [431] = 74,
    [432] = 250,
    [433] = 217,
    [434] = 109,
    [435] = 250,
    [436] = 250,
    [437] = 226,
    [438] = 45,
    [439] = 227,
    [440] = 76,
    [441] = 45,
    [442] = 45,
    [443] = 74,
    [444] = 45,
    [445] = 74,
    [446] = 229,
    [447] = 234,
    [448] = 110,
    [449] = 229,
    [450] = 238,
    [451] = 76,
    [452] = 74,
    [453] = 45,
    [454] = 76,
    [455] = 74,
    [456] = 45,
    [457] = 141,
    [458] = 74,
    [459] = 45,
    [460] = 238,
    [461] = 76,
    [462] = 74,
    [463] = 45,
    [464] = 45,
    [465] = 1,
    [466] = 44,
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
        [sym__declaration] = ACTIONS(SHIFT(3)),
        [sym_identifier] = ACTIONS(SHIFT(13)),
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
        [sym__expression] = ACTIONS(SHIFT(3)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(466)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [sym__declaration] = ACTIONS(SHIFT(3)),
        [sym_identifier] = ACTIONS(SHIFT(13)),
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
        [sym_break_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(465)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_break] = ACTIONS(REDUCE(sym__statement, 1)),
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
        [sym_break_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__loop_statement, 1)),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_program, 1)),
    },
    [6] = {
        [sym__for_init] = ACTIONS(SHIFT(245)),
        [sym__for_condition] = ACTIONS(SHIFT(445)),
        [sym_variable_declaration] = ACTIONS(SHIFT(247)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(248)),
        [sym__pattern] = ACTIONS(SHIFT(446)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(250)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(250)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(250)),
        [sym_optional_pattern] = ACTIONS(SHIFT(250)),
        [sym_is_pattern] = ACTIONS(SHIFT(250)),
        [sym_as_pattern] = ACTIONS(SHIFT(250)),
        [sym__expression] = ACTIONS(SHIFT(251)),
        [sym__expression_list] = ACTIONS(SHIFT(247)),
        [sym__type_identifier] = ACTIONS(SHIFT(252)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(253)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(447)),
        [anon_sym_case] = ACTIONS(SHIFT(448)),
        [anon_sym_let] = ACTIONS(SHIFT(256)),
        [anon_sym_var] = ACTIONS(SHIFT(257)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(250)),
        [anon_sym_DOT] = ACTIONS(SHIFT(258)),
        [anon_sym_is] = ACTIONS(SHIFT(259)),
        [sym_identifier] = ACTIONS(SHIFT(260)),
    },
    [7] = {
        [sym__condition_clause] = ACTIONS(SHIFT(443)),
        [sym__condition] = ACTIONS(SHIFT(186)),
        [sym_availability_condition] = ACTIONS(SHIFT(187)),
        [sym_case_condition] = ACTIONS(SHIFT(188)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(188)),
        [sym__expression] = ACTIONS(SHIFT(189)),
        [anon_sym_case] = ACTIONS(SHIFT(190)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(191)),
        [anon_sym_let] = ACTIONS(SHIFT(192)),
        [anon_sym_var] = ACTIONS(SHIFT(192)),
        [sym_identifier] = ACTIONS(SHIFT(193)),
    },
    [8] = {
        [sym__code_block] = ACTIONS(SHIFT(439)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(236)),
    },
    [9] = {
        [sym__condition_clause] = ACTIONS(SHIFT(431)),
        [sym__condition] = ACTIONS(SHIFT(186)),
        [sym_availability_condition] = ACTIONS(SHIFT(187)),
        [sym_case_condition] = ACTIONS(SHIFT(188)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(188)),
        [sym__expression] = ACTIONS(SHIFT(189)),
        [anon_sym_case] = ACTIONS(SHIFT(190)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(191)),
        [anon_sym_let] = ACTIONS(SHIFT(192)),
        [anon_sym_var] = ACTIONS(SHIFT(192)),
        [sym_identifier] = ACTIONS(SHIFT(193)),
    },
    [10] = {
        [sym__condition_clause] = ACTIONS(SHIFT(424)),
        [sym__condition] = ACTIONS(SHIFT(47)),
        [sym_availability_condition] = ACTIONS(SHIFT(48)),
        [sym_case_condition] = ACTIONS(SHIFT(49)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(49)),
        [sym__expression] = ACTIONS(SHIFT(50)),
        [anon_sym_case] = ACTIONS(SHIFT(51)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(52)),
        [anon_sym_let] = ACTIONS(SHIFT(53)),
        [anon_sym_var] = ACTIONS(SHIFT(53)),
        [sym_identifier] = ACTIONS(SHIFT(54)),
    },
    [11] = {
        [sym__expression] = ACTIONS(SHIFT(17)),
        [sym_identifier] = ACTIONS(SHIFT(18)),
    },
    [12] = {
        [sym__statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_break_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [anon_sym_break] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(16)),
    },
    [13] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym__expression, 1)),
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
        [anon_sym_COLON] = ACTIONS(SHIFT(14)),
        [anon_sym_break] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [14] = {
        [sym__loop_statement] = ACTIONS(SHIFT(15)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(15)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
    },
    [15] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
    },
    [16] = {
        [sym__statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_break_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [anon_sym_break] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym_break_statement, 2)),
    },
    [17] = {
        [anon_sym_LBRACE] = ACTIONS(SHIFT(19)),
    },
    [18] = {
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [19] = {
        [sym_case_statement] = ACTIONS(SHIFT(20)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(21)),
        [anon_sym_case] = ACTIONS(SHIFT(22)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(23)),
        [anon_sym_default] = ACTIONS(SHIFT(24)),
    },
    [20] = {
        [sym_case_statement] = ACTIONS(SHIFT(20)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(423)),
        [anon_sym_case] = ACTIONS(SHIFT(22)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 1)),
        [anon_sym_default] = ACTIONS(SHIFT(24)),
    },
    [21] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(422)),
    },
    [22] = {
        [sym__pattern] = ACTIONS(SHIFT(388)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(389)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(389)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(389)),
        [sym_optional_pattern] = ACTIONS(SHIFT(389)),
        [sym_is_pattern] = ACTIONS(SHIFT(389)),
        [sym_as_pattern] = ACTIONS(SHIFT(389)),
        [sym__expression] = ACTIONS(SHIFT(389)),
        [sym__type_identifier] = ACTIONS(SHIFT(390)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(391)),
        [anon_sym_let] = ACTIONS(SHIFT(392)),
        [anon_sym_var] = ACTIONS(SHIFT(392)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(389)),
        [anon_sym_DOT] = ACTIONS(SHIFT(393)),
        [anon_sym_is] = ACTIONS(SHIFT(394)),
        [sym_identifier] = ACTIONS(SHIFT(395)),
    },
    [23] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 4)),
    },
    [24] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(25)),
    },
    [25] = {
        [sym__statement] = ACTIONS(SHIFT(26)),
        [sym__loop_statement] = ACTIONS(SHIFT(27)),
        [sym_for_statement] = ACTIONS(SHIFT(28)),
        [sym_for_in_statement] = ACTIONS(SHIFT(28)),
        [sym_while_statement] = ACTIONS(SHIFT(28)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(28)),
        [sym_if_statement] = ACTIONS(SHIFT(27)),
        [sym_guard_statement] = ACTIONS(SHIFT(27)),
        [sym_switch_statement] = ACTIONS(SHIFT(27)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [sym_labeled_statement] = ACTIONS(SHIFT(27)),
        [sym_break_statement] = ACTIONS(SHIFT(27)),
        [sym__expression] = ACTIONS(SHIFT(27)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(29)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_for] = ACTIONS(SHIFT(30)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_while] = ACTIONS(SHIFT(31)),
        [anon_sym_repeat] = ACTIONS(SHIFT(32)),
        [anon_sym_if] = ACTIONS(SHIFT(33)),
        [anon_sym_guard] = ACTIONS(SHIFT(34)),
        [anon_sym_switch] = ACTIONS(SHIFT(35)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_break] = ACTIONS(SHIFT(36)),
        [sym__declaration] = ACTIONS(SHIFT(27)),
        [sym_identifier] = ACTIONS(SHIFT(37)),
    },
    [26] = {
        [sym__statement] = ACTIONS(SHIFT(26)),
        [sym__loop_statement] = ACTIONS(SHIFT(27)),
        [sym_for_statement] = ACTIONS(SHIFT(28)),
        [sym_for_in_statement] = ACTIONS(SHIFT(28)),
        [sym_while_statement] = ACTIONS(SHIFT(28)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(28)),
        [sym_if_statement] = ACTIONS(SHIFT(27)),
        [sym_guard_statement] = ACTIONS(SHIFT(27)),
        [sym_switch_statement] = ACTIONS(SHIFT(27)),
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [sym_labeled_statement] = ACTIONS(SHIFT(27)),
        [sym_break_statement] = ACTIONS(SHIFT(27)),
        [sym__expression] = ACTIONS(SHIFT(27)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(387)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_for] = ACTIONS(SHIFT(30)),
        [anon_sym_case] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_while] = ACTIONS(SHIFT(31)),
        [anon_sym_repeat] = ACTIONS(SHIFT(32)),
        [anon_sym_if] = ACTIONS(SHIFT(33)),
        [anon_sym_guard] = ACTIONS(SHIFT(34)),
        [anon_sym_switch] = ACTIONS(SHIFT(35)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_default] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_break] = ACTIONS(SHIFT(36)),
        [sym__declaration] = ACTIONS(SHIFT(27)),
        [sym_identifier] = ACTIONS(SHIFT(37)),
    },
    [27] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(386)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_case] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_default] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_break] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 1)),
    },
    [28] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__loop_statement, 1)),
    },
    [29] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 3)),
    },
    [30] = {
        [sym__for_init] = ACTIONS(SHIFT(245)),
        [sym__for_condition] = ACTIONS(SHIFT(366)),
        [sym_variable_declaration] = ACTIONS(SHIFT(247)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(248)),
        [sym__pattern] = ACTIONS(SHIFT(367)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(250)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(250)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(250)),
        [sym_optional_pattern] = ACTIONS(SHIFT(250)),
        [sym_is_pattern] = ACTIONS(SHIFT(250)),
        [sym_as_pattern] = ACTIONS(SHIFT(250)),
        [sym__expression] = ACTIONS(SHIFT(251)),
        [sym__expression_list] = ACTIONS(SHIFT(247)),
        [sym__type_identifier] = ACTIONS(SHIFT(252)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(253)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(368)),
        [anon_sym_case] = ACTIONS(SHIFT(369)),
        [anon_sym_let] = ACTIONS(SHIFT(256)),
        [anon_sym_var] = ACTIONS(SHIFT(257)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(250)),
        [anon_sym_DOT] = ACTIONS(SHIFT(258)),
        [anon_sym_is] = ACTIONS(SHIFT(259)),
        [sym_identifier] = ACTIONS(SHIFT(260)),
    },
    [31] = {
        [sym__condition_clause] = ACTIONS(SHIFT(364)),
        [sym__condition] = ACTIONS(SHIFT(186)),
        [sym_availability_condition] = ACTIONS(SHIFT(187)),
        [sym_case_condition] = ACTIONS(SHIFT(188)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(188)),
        [sym__expression] = ACTIONS(SHIFT(189)),
        [anon_sym_case] = ACTIONS(SHIFT(190)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(191)),
        [anon_sym_let] = ACTIONS(SHIFT(192)),
        [anon_sym_var] = ACTIONS(SHIFT(192)),
        [sym_identifier] = ACTIONS(SHIFT(193)),
    },
    [32] = {
        [sym__code_block] = ACTIONS(SHIFT(360)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(236)),
    },
    [33] = {
        [sym__condition_clause] = ACTIONS(SHIFT(352)),
        [sym__condition] = ACTIONS(SHIFT(186)),
        [sym_availability_condition] = ACTIONS(SHIFT(187)),
        [sym_case_condition] = ACTIONS(SHIFT(188)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(188)),
        [sym__expression] = ACTIONS(SHIFT(189)),
        [anon_sym_case] = ACTIONS(SHIFT(190)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(191)),
        [anon_sym_let] = ACTIONS(SHIFT(192)),
        [anon_sym_var] = ACTIONS(SHIFT(192)),
        [sym_identifier] = ACTIONS(SHIFT(193)),
    },
    [34] = {
        [sym__condition_clause] = ACTIONS(SHIFT(46)),
        [sym__condition] = ACTIONS(SHIFT(47)),
        [sym_availability_condition] = ACTIONS(SHIFT(48)),
        [sym_case_condition] = ACTIONS(SHIFT(49)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(49)),
        [sym__expression] = ACTIONS(SHIFT(50)),
        [anon_sym_case] = ACTIONS(SHIFT(51)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(52)),
        [anon_sym_let] = ACTIONS(SHIFT(53)),
        [anon_sym_var] = ACTIONS(SHIFT(53)),
        [sym_identifier] = ACTIONS(SHIFT(54)),
    },
    [35] = {
        [sym__expression] = ACTIONS(SHIFT(41)),
        [sym_identifier] = ACTIONS(SHIFT(18)),
    },
    [36] = {
        [sym__statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_break_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [anon_sym_break] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(40)),
    },
    [37] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym__expression, 1)),
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
        [anon_sym_COLON] = ACTIONS(SHIFT(38)),
        [anon_sym_default] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_break] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [38] = {
        [sym__loop_statement] = ACTIONS(SHIFT(39)),
        [sym_for_statement] = ACTIONS(SHIFT(28)),
        [sym_for_in_statement] = ACTIONS(SHIFT(28)),
        [sym_while_statement] = ACTIONS(SHIFT(28)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(28)),
        [sym_if_statement] = ACTIONS(SHIFT(39)),
        [anon_sym_for] = ACTIONS(SHIFT(30)),
        [anon_sym_while] = ACTIONS(SHIFT(31)),
        [anon_sym_repeat] = ACTIONS(SHIFT(32)),
        [anon_sym_if] = ACTIONS(SHIFT(33)),
    },
    [39] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
    },
    [40] = {
        [sym__statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_break_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [anon_sym_break] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym_break_statement, 2)),
    },
    [41] = {
        [anon_sym_LBRACE] = ACTIONS(SHIFT(42)),
    },
    [42] = {
        [sym_case_statement] = ACTIONS(SHIFT(20)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(43)),
        [anon_sym_case] = ACTIONS(SHIFT(22)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(44)),
        [anon_sym_default] = ACTIONS(SHIFT(24)),
    },
    [43] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(45)),
    },
    [44] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 4)),
    },
    [45] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 5)),
    },
    [46] = {
        [anon_sym_else] = ACTIONS(SHIFT(154)),
    },
    [47] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(153)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(147)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [48] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1), SHIFT(150)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [49] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [50] = {
        [anon_sym_COMMA] = ACTIONS(SHIFT(144)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [51] = {
        [sym__pattern] = ACTIONS(SHIFT(141)),
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
    [52] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(126)),
    },
    [53] = {
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
    [54] = {
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [55] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(119)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
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
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [118] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
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
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(SHIFT(125)),
        [anon_sym_COMMA] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
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
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [124] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [125] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
    },
    [126] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(127)),
        [anon_sym_iOS] = ACTIONS(SHIFT(128)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(128)),
        [anon_sym_OSX] = ACTIONS(SHIFT(128)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(128)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(128)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(128)),
    },
    [127] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(139)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(140)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(132)),
    },
    [128] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(129)),
    },
    [129] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(130)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(131)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(132)),
    },
    [130] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(138)),
    },
    [131] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 5)),
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
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(137)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(132)),
    },
    [134] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(135)),
    },
    [135] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(136)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 3)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(132)),
    },
    [136] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 4)),
    },
    [137] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 3)),
    },
    [138] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 6)),
    },
    [139] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(131)),
    },
    [140] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 4)),
    },
    [141] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(142)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(74)),
        [anon_sym_as] = ACTIONS(SHIFT(75)),
    },
    [142] = {
        [sym__expression] = ACTIONS(SHIFT(143)),
        [sym_identifier] = ACTIONS(SHIFT(118)),
    },
    [143] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_case_condition, 4)),
    },
    [144] = {
        [sym__condition] = ACTIONS(SHIFT(145)),
        [sym_availability_condition] = ACTIONS(SHIFT(49)),
        [sym_case_condition] = ACTIONS(SHIFT(49)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(49)),
        [anon_sym_case] = ACTIONS(SHIFT(51)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(52)),
        [anon_sym_let] = ACTIONS(SHIFT(53)),
        [anon_sym_var] = ACTIONS(SHIFT(53)),
    },
    [145] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(146)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(147)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [146] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 4)),
    },
    [147] = {
        [sym__condition] = ACTIONS(SHIFT(148)),
        [sym_availability_condition] = ACTIONS(SHIFT(49)),
        [sym_case_condition] = ACTIONS(SHIFT(49)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(49)),
        [anon_sym_case] = ACTIONS(SHIFT(51)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(52)),
        [anon_sym_let] = ACTIONS(SHIFT(53)),
        [anon_sym_var] = ACTIONS(SHIFT(53)),
    },
    [148] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(149)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(147)),
        [anon_sym_else] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
    },
    [149] = {
        [anon_sym_else] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
    },
    [150] = {
        [sym__expression] = ACTIONS(SHIFT(151)),
        [sym_identifier] = ACTIONS(SHIFT(152)),
    },
    [151] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [152] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [153] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 2)),
    },
    [154] = {
        [sym__code_block] = ACTIONS(SHIFT(155)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(156)),
    },
    [155] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_guard_statement, 4)),
    },
    [156] = {
        [sym__statement] = ACTIONS(SHIFT(157)),
        [sym__loop_statement] = ACTIONS(SHIFT(158)),
        [sym_for_statement] = ACTIONS(SHIFT(159)),
        [sym_for_in_statement] = ACTIONS(SHIFT(159)),
        [sym_while_statement] = ACTIONS(SHIFT(159)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(159)),
        [sym_if_statement] = ACTIONS(SHIFT(158)),
        [sym_guard_statement] = ACTIONS(SHIFT(158)),
        [sym_switch_statement] = ACTIONS(SHIFT(158)),
        [sym_labeled_statement] = ACTIONS(SHIFT(158)),
        [sym_break_statement] = ACTIONS(SHIFT(158)),
        [sym__expression] = ACTIONS(SHIFT(158)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(160)),
        [anon_sym_for] = ACTIONS(SHIFT(161)),
        [anon_sym_while] = ACTIONS(SHIFT(162)),
        [anon_sym_repeat] = ACTIONS(SHIFT(163)),
        [anon_sym_if] = ACTIONS(SHIFT(164)),
        [anon_sym_guard] = ACTIONS(SHIFT(165)),
        [anon_sym_switch] = ACTIONS(SHIFT(166)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(167)),
        [anon_sym_break] = ACTIONS(SHIFT(168)),
        [sym__declaration] = ACTIONS(SHIFT(158)),
        [sym_identifier] = ACTIONS(SHIFT(169)),
    },
    [157] = {
        [sym__statement] = ACTIONS(SHIFT(157)),
        [sym__loop_statement] = ACTIONS(SHIFT(158)),
        [sym_for_statement] = ACTIONS(SHIFT(159)),
        [sym_for_in_statement] = ACTIONS(SHIFT(159)),
        [sym_while_statement] = ACTIONS(SHIFT(159)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(159)),
        [sym_if_statement] = ACTIONS(SHIFT(158)),
        [sym_guard_statement] = ACTIONS(SHIFT(158)),
        [sym_switch_statement] = ACTIONS(SHIFT(158)),
        [sym_labeled_statement] = ACTIONS(SHIFT(158)),
        [sym_break_statement] = ACTIONS(SHIFT(158)),
        [sym__expression] = ACTIONS(SHIFT(158)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(351)),
        [anon_sym_for] = ACTIONS(SHIFT(161)),
        [anon_sym_while] = ACTIONS(SHIFT(162)),
        [anon_sym_repeat] = ACTIONS(SHIFT(163)),
        [anon_sym_if] = ACTIONS(SHIFT(164)),
        [anon_sym_guard] = ACTIONS(SHIFT(165)),
        [anon_sym_switch] = ACTIONS(SHIFT(166)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_break] = ACTIONS(SHIFT(168)),
        [sym__declaration] = ACTIONS(SHIFT(158)),
        [sym_identifier] = ACTIONS(SHIFT(169)),
    },
    [158] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(350)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_break] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 1)),
    },
    [159] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__loop_statement, 1)),
    },
    [160] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(349)),
    },
    [161] = {
        [sym__for_init] = ACTIONS(SHIFT(245)),
        [sym__for_condition] = ACTIONS(SHIFT(246)),
        [sym_variable_declaration] = ACTIONS(SHIFT(247)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(248)),
        [sym__pattern] = ACTIONS(SHIFT(249)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(250)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(250)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(250)),
        [sym_optional_pattern] = ACTIONS(SHIFT(250)),
        [sym_is_pattern] = ACTIONS(SHIFT(250)),
        [sym_as_pattern] = ACTIONS(SHIFT(250)),
        [sym__expression] = ACTIONS(SHIFT(251)),
        [sym__expression_list] = ACTIONS(SHIFT(247)),
        [sym__type_identifier] = ACTIONS(SHIFT(252)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(253)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(254)),
        [anon_sym_case] = ACTIONS(SHIFT(255)),
        [anon_sym_let] = ACTIONS(SHIFT(256)),
        [anon_sym_var] = ACTIONS(SHIFT(257)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(250)),
        [anon_sym_DOT] = ACTIONS(SHIFT(258)),
        [anon_sym_is] = ACTIONS(SHIFT(259)),
        [sym_identifier] = ACTIONS(SHIFT(260)),
    },
    [162] = {
        [sym__condition_clause] = ACTIONS(SHIFT(243)),
        [sym__condition] = ACTIONS(SHIFT(186)),
        [sym_availability_condition] = ACTIONS(SHIFT(187)),
        [sym_case_condition] = ACTIONS(SHIFT(188)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(188)),
        [sym__expression] = ACTIONS(SHIFT(189)),
        [anon_sym_case] = ACTIONS(SHIFT(190)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(191)),
        [anon_sym_let] = ACTIONS(SHIFT(192)),
        [anon_sym_var] = ACTIONS(SHIFT(192)),
        [sym_identifier] = ACTIONS(SHIFT(193)),
    },
    [163] = {
        [sym__code_block] = ACTIONS(SHIFT(235)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(236)),
    },
    [164] = {
        [sym__condition_clause] = ACTIONS(SHIFT(185)),
        [sym__condition] = ACTIONS(SHIFT(186)),
        [sym_availability_condition] = ACTIONS(SHIFT(187)),
        [sym_case_condition] = ACTIONS(SHIFT(188)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(188)),
        [sym__expression] = ACTIONS(SHIFT(189)),
        [anon_sym_case] = ACTIONS(SHIFT(190)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(191)),
        [anon_sym_let] = ACTIONS(SHIFT(192)),
        [anon_sym_var] = ACTIONS(SHIFT(192)),
        [sym_identifier] = ACTIONS(SHIFT(193)),
    },
    [165] = {
        [sym__condition_clause] = ACTIONS(SHIFT(178)),
        [sym__condition] = ACTIONS(SHIFT(47)),
        [sym_availability_condition] = ACTIONS(SHIFT(48)),
        [sym_case_condition] = ACTIONS(SHIFT(49)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(49)),
        [sym__expression] = ACTIONS(SHIFT(50)),
        [anon_sym_case] = ACTIONS(SHIFT(51)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(52)),
        [anon_sym_let] = ACTIONS(SHIFT(53)),
        [anon_sym_var] = ACTIONS(SHIFT(53)),
        [sym_identifier] = ACTIONS(SHIFT(54)),
    },
    [166] = {
        [sym__expression] = ACTIONS(SHIFT(173)),
        [sym_identifier] = ACTIONS(SHIFT(18)),
    },
    [167] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [168] = {
        [sym__statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_break_statement] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [anon_sym_break] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(172)),
    },
    [169] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym__expression, 1)),
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
        [anon_sym_COLON] = ACTIONS(SHIFT(170)),
        [anon_sym_break] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [170] = {
        [sym__loop_statement] = ACTIONS(SHIFT(171)),
        [sym_for_statement] = ACTIONS(SHIFT(159)),
        [sym_for_in_statement] = ACTIONS(SHIFT(159)),
        [sym_while_statement] = ACTIONS(SHIFT(159)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(159)),
        [sym_if_statement] = ACTIONS(SHIFT(171)),
        [anon_sym_for] = ACTIONS(SHIFT(161)),
        [anon_sym_while] = ACTIONS(SHIFT(162)),
        [anon_sym_repeat] = ACTIONS(SHIFT(163)),
        [anon_sym_if] = ACTIONS(SHIFT(164)),
    },
    [171] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
    },
    [172] = {
        [sym__statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_break_statement] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [anon_sym_break] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym_break_statement, 2)),
    },
    [173] = {
        [anon_sym_LBRACE] = ACTIONS(SHIFT(174)),
    },
    [174] = {
        [sym_case_statement] = ACTIONS(SHIFT(20)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(175)),
        [anon_sym_case] = ACTIONS(SHIFT(22)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(176)),
        [anon_sym_default] = ACTIONS(SHIFT(24)),
    },
    [175] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(177)),
    },
    [176] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_switch_statement, 4)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 4)),
    },
    [177] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 5)),
    },
    [178] = {
        [anon_sym_else] = ACTIONS(SHIFT(179)),
    },
    [179] = {
        [sym__code_block] = ACTIONS(SHIFT(180)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(181)),
    },
    [180] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_guard_statement, 4)),
    },
    [181] = {
        [sym__statement] = ACTIONS(SHIFT(157)),
        [sym__loop_statement] = ACTIONS(SHIFT(158)),
        [sym_for_statement] = ACTIONS(SHIFT(159)),
        [sym_for_in_statement] = ACTIONS(SHIFT(159)),
        [sym_while_statement] = ACTIONS(SHIFT(159)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(159)),
        [sym_if_statement] = ACTIONS(SHIFT(158)),
        [sym_guard_statement] = ACTIONS(SHIFT(158)),
        [sym_switch_statement] = ACTIONS(SHIFT(158)),
        [sym_labeled_statement] = ACTIONS(SHIFT(158)),
        [sym_break_statement] = ACTIONS(SHIFT(158)),
        [sym__expression] = ACTIONS(SHIFT(158)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(182)),
        [anon_sym_for] = ACTIONS(SHIFT(161)),
        [anon_sym_while] = ACTIONS(SHIFT(162)),
        [anon_sym_repeat] = ACTIONS(SHIFT(163)),
        [anon_sym_if] = ACTIONS(SHIFT(164)),
        [anon_sym_guard] = ACTIONS(SHIFT(165)),
        [anon_sym_switch] = ACTIONS(SHIFT(166)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(183)),
        [anon_sym_break] = ACTIONS(SHIFT(168)),
        [sym__declaration] = ACTIONS(SHIFT(158)),
        [sym_identifier] = ACTIONS(SHIFT(169)),
    },
    [182] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(184)),
    },
    [183] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [184] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [185] = {
        [sym__code_block] = ACTIONS(SHIFT(228)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(229)),
    },
    [186] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(227)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(221)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [187] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1), SHIFT(224)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [188] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [189] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(218)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [190] = {
        [sym__pattern] = ACTIONS(SHIFT(215)),
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
    [191] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(206)),
    },
    [192] = {
        [sym_optional_binding] = ACTIONS(SHIFT(194)),
        [sym__pattern] = ACTIONS(SHIFT(195)),
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
    [193] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [194] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(199)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
    },
    [195] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(196)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(74)),
        [anon_sym_as] = ACTIONS(SHIFT(75)),
    },
    [196] = {
        [sym__expression] = ACTIONS(SHIFT(197)),
        [sym_identifier] = ACTIONS(SHIFT(198)),
    },
    [197] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [198] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [199] = {
        [sym_optional_binding] = ACTIONS(SHIFT(200)),
        [sym__pattern] = ACTIONS(SHIFT(201)),
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
    [200] = {
        [sym__code_block] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(SHIFT(205)),
        [anon_sym_COMMA] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
    },
    [201] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(202)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(74)),
        [anon_sym_as] = ACTIONS(SHIFT(75)),
    },
    [202] = {
        [sym__expression] = ACTIONS(SHIFT(203)),
        [sym_identifier] = ACTIONS(SHIFT(204)),
    },
    [203] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [204] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [205] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
    },
    [206] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(207)),
        [anon_sym_iOS] = ACTIONS(SHIFT(208)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(208)),
        [anon_sym_OSX] = ACTIONS(SHIFT(208)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(208)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(208)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(208)),
    },
    [207] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(213)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(214)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(132)),
    },
    [208] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(209)),
    },
    [209] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(210)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(211)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(132)),
    },
    [210] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(212)),
    },
    [211] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 5)),
    },
    [212] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 6)),
    },
    [213] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(211)),
    },
    [214] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 4)),
    },
    [215] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(216)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(74)),
        [anon_sym_as] = ACTIONS(SHIFT(75)),
    },
    [216] = {
        [sym__expression] = ACTIONS(SHIFT(217)),
        [sym_identifier] = ACTIONS(SHIFT(198)),
    },
    [217] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_case_condition, 4)),
    },
    [218] = {
        [sym__condition] = ACTIONS(SHIFT(219)),
        [sym_availability_condition] = ACTIONS(SHIFT(188)),
        [sym_case_condition] = ACTIONS(SHIFT(188)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(188)),
        [anon_sym_case] = ACTIONS(SHIFT(190)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(191)),
        [anon_sym_let] = ACTIONS(SHIFT(192)),
        [anon_sym_var] = ACTIONS(SHIFT(192)),
    },
    [219] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(220)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(221)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [220] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 4)),
    },
    [221] = {
        [sym__condition] = ACTIONS(SHIFT(222)),
        [sym_availability_condition] = ACTIONS(SHIFT(188)),
        [sym_case_condition] = ACTIONS(SHIFT(188)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(188)),
        [anon_sym_case] = ACTIONS(SHIFT(190)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(191)),
        [anon_sym_let] = ACTIONS(SHIFT(192)),
        [anon_sym_var] = ACTIONS(SHIFT(192)),
    },
    [222] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(223)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(221)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
    },
    [223] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
    },
    [224] = {
        [sym__expression] = ACTIONS(SHIFT(225)),
        [sym_identifier] = ACTIONS(SHIFT(226)),
    },
    [225] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [226] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [227] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 2)),
    },
    [228] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_else] = ACTIONS(SHIFT(233)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_break] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_if_statement, 3)),
    },
    [229] = {
        [sym__statement] = ACTIONS(SHIFT(157)),
        [sym__loop_statement] = ACTIONS(SHIFT(158)),
        [sym_for_statement] = ACTIONS(SHIFT(159)),
        [sym_for_in_statement] = ACTIONS(SHIFT(159)),
        [sym_while_statement] = ACTIONS(SHIFT(159)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(159)),
        [sym_if_statement] = ACTIONS(SHIFT(158)),
        [sym_guard_statement] = ACTIONS(SHIFT(158)),
        [sym_switch_statement] = ACTIONS(SHIFT(158)),
        [sym_labeled_statement] = ACTIONS(SHIFT(158)),
        [sym_break_statement] = ACTIONS(SHIFT(158)),
        [sym__expression] = ACTIONS(SHIFT(158)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(230)),
        [anon_sym_for] = ACTIONS(SHIFT(161)),
        [anon_sym_while] = ACTIONS(SHIFT(162)),
        [anon_sym_repeat] = ACTIONS(SHIFT(163)),
        [anon_sym_if] = ACTIONS(SHIFT(164)),
        [anon_sym_guard] = ACTIONS(SHIFT(165)),
        [anon_sym_switch] = ACTIONS(SHIFT(166)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(231)),
        [anon_sym_break] = ACTIONS(SHIFT(168)),
        [sym__declaration] = ACTIONS(SHIFT(158)),
        [sym_identifier] = ACTIONS(SHIFT(169)),
    },
    [230] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(232)),
    },
    [231] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [232] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [233] = {
        [sym_if_statement] = ACTIONS(SHIFT(234)),
        [sym__code_block] = ACTIONS(SHIFT(234)),
        [anon_sym_if] = ACTIONS(SHIFT(164)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(181)),
    },
    [234] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_if_statement, 5)),
    },
    [235] = {
        [anon_sym_while] = ACTIONS(SHIFT(240)),
    },
    [236] = {
        [sym__statement] = ACTIONS(SHIFT(157)),
        [sym__loop_statement] = ACTIONS(SHIFT(158)),
        [sym_for_statement] = ACTIONS(SHIFT(159)),
        [sym_for_in_statement] = ACTIONS(SHIFT(159)),
        [sym_while_statement] = ACTIONS(SHIFT(159)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(159)),
        [sym_if_statement] = ACTIONS(SHIFT(158)),
        [sym_guard_statement] = ACTIONS(SHIFT(158)),
        [sym_switch_statement] = ACTIONS(SHIFT(158)),
        [sym_labeled_statement] = ACTIONS(SHIFT(158)),
        [sym_break_statement] = ACTIONS(SHIFT(158)),
        [sym__expression] = ACTIONS(SHIFT(158)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(237)),
        [anon_sym_for] = ACTIONS(SHIFT(161)),
        [anon_sym_while] = ACTIONS(SHIFT(162)),
        [anon_sym_repeat] = ACTIONS(SHIFT(163)),
        [anon_sym_if] = ACTIONS(SHIFT(164)),
        [anon_sym_guard] = ACTIONS(SHIFT(165)),
        [anon_sym_switch] = ACTIONS(SHIFT(166)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(238)),
        [anon_sym_break] = ACTIONS(SHIFT(168)),
        [sym__declaration] = ACTIONS(SHIFT(158)),
        [sym_identifier] = ACTIONS(SHIFT(169)),
    },
    [237] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(239)),
    },
    [238] = {
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [239] = {
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [240] = {
        [sym__expression] = ACTIONS(SHIFT(241)),
        [sym_identifier] = ACTIONS(SHIFT(242)),
    },
    [241] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
    },
    [242] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym__expression, 1)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [243] = {
        [sym__code_block] = ACTIONS(SHIFT(244)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(181)),
    },
    [244] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_while_statement, 3)),
    },
    [245] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(345)),
    },
    [246] = {
        [sym__code_block] = ACTIONS(SHIFT(344)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(181)),
    },
    [247] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__for_init, 1)),
    },
    [248] = {
        [sym__variable_name] = ACTIONS(SHIFT(329)),
        [sym_identifier] = ACTIONS(SHIFT(330)),
    },
    [249] = {
        [sym__type_annotation] = ACTIONS(SHIFT(325)),
        [anon_sym_in] = ACTIONS(SHIFT(326)),
        [anon_sym_COLON] = ACTIONS(SHIFT(281)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(275)),
        [anon_sym_as] = ACTIONS(SHIFT(276)),
    },
    [250] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [251] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(306)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(307)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [252] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(322)),
    },
    [253] = {
        [sym__expression] = ACTIONS(SHIFT(317)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(318)),
        [sym_identifier] = ACTIONS(SHIFT(301)),
    },
    [254] = {
        [sym__for_init] = ACTIONS(SHIFT(293)),
        [sym__for_condition] = ACTIONS(SHIFT(294)),
        [sym_variable_declaration] = ACTIONS(SHIFT(247)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(248)),
        [sym__pattern] = ACTIONS(SHIFT(77)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(78)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(78)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(270)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(78)),
        [sym_optional_pattern] = ACTIONS(SHIFT(78)),
        [sym_is_pattern] = ACTIONS(SHIFT(78)),
        [sym_as_pattern] = ACTIONS(SHIFT(78)),
        [sym__expression] = ACTIONS(SHIFT(295)),
        [sym__expression_list] = ACTIONS(SHIFT(247)),
        [sym__type_identifier] = ACTIONS(SHIFT(80)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(296)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(81)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(271)),
        [anon_sym_let] = ACTIONS(SHIFT(83)),
        [anon_sym_var] = ACTIONS(SHIFT(297)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(78)),
        [anon_sym_DOT] = ACTIONS(SHIFT(84)),
        [anon_sym_is] = ACTIONS(SHIFT(85)),
        [sym_identifier] = ACTIONS(SHIFT(298)),
    },
    [255] = {
        [sym__pattern] = ACTIONS(SHIFT(278)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(250)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(250)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(250)),
        [sym_optional_pattern] = ACTIONS(SHIFT(250)),
        [sym_is_pattern] = ACTIONS(SHIFT(250)),
        [sym_as_pattern] = ACTIONS(SHIFT(250)),
        [sym__expression] = ACTIONS(SHIFT(250)),
        [sym__type_identifier] = ACTIONS(SHIFT(252)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(269)),
        [anon_sym_let] = ACTIONS(SHIFT(256)),
        [anon_sym_var] = ACTIONS(SHIFT(256)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(250)),
        [anon_sym_DOT] = ACTIONS(SHIFT(258)),
        [anon_sym_is] = ACTIONS(SHIFT(259)),
        [sym_identifier] = ACTIONS(SHIFT(274)),
    },
    [256] = {
        [sym__pattern] = ACTIONS(SHIFT(273)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(250)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(250)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(250)),
        [sym_optional_pattern] = ACTIONS(SHIFT(250)),
        [sym_is_pattern] = ACTIONS(SHIFT(250)),
        [sym_as_pattern] = ACTIONS(SHIFT(250)),
        [sym__expression] = ACTIONS(SHIFT(250)),
        [sym__type_identifier] = ACTIONS(SHIFT(252)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(269)),
        [anon_sym_let] = ACTIONS(SHIFT(256)),
        [anon_sym_var] = ACTIONS(SHIFT(256)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(250)),
        [anon_sym_DOT] = ACTIONS(SHIFT(258)),
        [anon_sym_is] = ACTIONS(SHIFT(259)),
        [sym_identifier] = ACTIONS(SHIFT(274)),
    },
    [257] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(273)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(250)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(250)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(250)),
        [sym_optional_pattern] = ACTIONS(SHIFT(250)),
        [sym_is_pattern] = ACTIONS(SHIFT(250)),
        [sym_as_pattern] = ACTIONS(SHIFT(250)),
        [sym__expression] = ACTIONS(SHIFT(250)),
        [sym__type_identifier] = ACTIONS(SHIFT(252)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(269)),
        [anon_sym_let] = ACTIONS(SHIFT(256)),
        [anon_sym_var] = ACTIONS(SHIFT(256)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(250)),
        [anon_sym_DOT] = ACTIONS(SHIFT(258)),
        [anon_sym_is] = ACTIONS(SHIFT(259)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(274)),
    },
    [258] = {
        [sym_identifier] = ACTIONS(SHIFT(267)),
    },
    [259] = {
        [sym_type] = ACTIONS(SHIFT(261)),
        [sym__type_identifier] = ACTIONS(SHIFT(262)),
        [sym__type_name] = ACTIONS(SHIFT(263)),
        [sym_identifier] = ACTIONS(SHIFT(264)),
    },
    [260] = {
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
    [261] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [262] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [263] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(265)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [264] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [265] = {
        [sym__type_identifier] = ACTIONS(SHIFT(266)),
        [sym__type_name] = ACTIONS(SHIFT(263)),
        [sym_identifier] = ACTIONS(SHIFT(264)),
    },
    [266] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [267] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(268)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(269)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [268] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [269] = {
        [sym__pattern] = ACTIONS(SHIFT(77)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(78)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(78)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(270)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(78)),
        [sym_optional_pattern] = ACTIONS(SHIFT(78)),
        [sym_is_pattern] = ACTIONS(SHIFT(78)),
        [sym_as_pattern] = ACTIONS(SHIFT(78)),
        [sym__expression] = ACTIONS(SHIFT(78)),
        [sym__type_identifier] = ACTIONS(SHIFT(80)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(81)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(271)),
        [anon_sym_let] = ACTIONS(SHIFT(83)),
        [anon_sym_var] = ACTIONS(SHIFT(83)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(78)),
        [anon_sym_DOT] = ACTIONS(SHIFT(84)),
        [anon_sym_is] = ACTIONS(SHIFT(85)),
        [sym_identifier] = ACTIONS(SHIFT(86)),
    },
    [270] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(272)),
    },
    [271] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [272] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [273] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(275)),
        [anon_sym_as] = ACTIONS(SHIFT(276)),
    },
    [274] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [275] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [276] = {
        [sym_type] = ACTIONS(SHIFT(277)),
        [sym__type_identifier] = ACTIONS(SHIFT(262)),
        [sym__type_name] = ACTIONS(SHIFT(263)),
        [sym_identifier] = ACTIONS(SHIFT(264)),
    },
    [277] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [278] = {
        [sym__type_annotation] = ACTIONS(SHIFT(279)),
        [anon_sym_in] = ACTIONS(SHIFT(280)),
        [anon_sym_COLON] = ACTIONS(SHIFT(281)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(275)),
        [anon_sym_as] = ACTIONS(SHIFT(276)),
    },
    [279] = {
        [anon_sym_in] = ACTIONS(SHIFT(290)),
    },
    [280] = {
        [sym__expression] = ACTIONS(SHIFT(288)),
        [sym_identifier] = ACTIONS(SHIFT(226)),
    },
    [281] = {
        [sym_type] = ACTIONS(SHIFT(282)),
        [sym__type_identifier] = ACTIONS(SHIFT(283)),
        [sym__type_name] = ACTIONS(SHIFT(284)),
        [sym_identifier] = ACTIONS(SHIFT(285)),
    },
    [282] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [283] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [284] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(286)),
    },
    [285] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [286] = {
        [sym__type_identifier] = ACTIONS(SHIFT(287)),
        [sym__type_name] = ACTIONS(SHIFT(284)),
        [sym_identifier] = ACTIONS(SHIFT(285)),
    },
    [287] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [288] = {
        [sym__code_block] = ACTIONS(SHIFT(289)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(181)),
    },
    [289] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
    },
    [290] = {
        [sym__expression] = ACTIONS(SHIFT(291)),
        [sym_identifier] = ACTIONS(SHIFT(226)),
    },
    [291] = {
        [sym__code_block] = ACTIONS(SHIFT(292)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(181)),
    },
    [292] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
    },
    [293] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(313)),
    },
    [294] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(311)),
    },
    [295] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(306)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1), SHIFT(307)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [296] = {
        [sym__expression] = ACTIONS(SHIFT(299)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(300)),
        [sym_identifier] = ACTIONS(SHIFT(301)),
    },
    [297] = {
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
    [298] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [299] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(304)),
    },
    [300] = {
        [sym__expression] = ACTIONS(SHIFT(302)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(303)),
    },
    [301] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [302] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [303] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [304] = {
        [sym__expression] = ACTIONS(SHIFT(305)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(303)),
    },
    [305] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [306] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 2)),
    },
    [307] = {
        [sym__expression] = ACTIONS(SHIFT(308)),
        [sym_identifier] = ACTIONS(SHIFT(309)),
    },
    [308] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(310)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(307)),
    },
    [309] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [310] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 3)),
    },
    [311] = {
        [sym__code_block] = ACTIONS(SHIFT(312)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(181)),
    },
    [312] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 5)),
    },
    [313] = {
        [sym__expression] = ACTIONS(SHIFT(314)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(304)),
        [sym_identifier] = ACTIONS(SHIFT(301)),
    },
    [314] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(315)),
    },
    [315] = {
        [sym__expression] = ACTIONS(SHIFT(316)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(303)),
    },
    [316] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [317] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(320)),
    },
    [318] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym__expression] = ACTIONS(SHIFT(319)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(226)),
    },
    [319] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [320] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym__expression] = ACTIONS(SHIFT(321)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(226)),
    },
    [321] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [322] = {
        [sym_identifier] = ACTIONS(SHIFT(323)),
    },
    [323] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(324)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(269)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [324] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [325] = {
        [anon_sym_in] = ACTIONS(SHIFT(280)),
    },
    [326] = {
        [sym__expression] = ACTIONS(SHIFT(327)),
        [sym_identifier] = ACTIONS(SHIFT(226)),
    },
    [327] = {
        [sym__code_block] = ACTIONS(SHIFT(328)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(181)),
    },
    [328] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
    },
    [329] = {
        [sym__type_annotation] = ACTIONS(SHIFT(331)),
        [anon_sym_COLON] = ACTIONS(SHIFT(332)),
    },
    [330] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__variable_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__variable_name, 1)),
    },
    [331] = {
        [sym__code_block] = ACTIONS(SHIFT(339)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(340)),
    },
    [332] = {
        [sym_type] = ACTIONS(SHIFT(333)),
        [sym__type_identifier] = ACTIONS(SHIFT(334)),
        [sym__type_name] = ACTIONS(SHIFT(335)),
        [sym_identifier] = ACTIONS(SHIFT(336)),
    },
    [333] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [334] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [335] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(337)),
    },
    [336] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [337] = {
        [sym__type_identifier] = ACTIONS(SHIFT(338)),
        [sym__type_name] = ACTIONS(SHIFT(335)),
        [sym_identifier] = ACTIONS(SHIFT(336)),
    },
    [338] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [339] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_variable_declaration, 4)),
    },
    [340] = {
        [sym__statement] = ACTIONS(SHIFT(157)),
        [sym__loop_statement] = ACTIONS(SHIFT(158)),
        [sym_for_statement] = ACTIONS(SHIFT(159)),
        [sym_for_in_statement] = ACTIONS(SHIFT(159)),
        [sym_while_statement] = ACTIONS(SHIFT(159)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(159)),
        [sym_if_statement] = ACTIONS(SHIFT(158)),
        [sym_guard_statement] = ACTIONS(SHIFT(158)),
        [sym_switch_statement] = ACTIONS(SHIFT(158)),
        [sym_labeled_statement] = ACTIONS(SHIFT(158)),
        [sym_break_statement] = ACTIONS(SHIFT(158)),
        [sym__expression] = ACTIONS(SHIFT(158)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(341)),
        [anon_sym_for] = ACTIONS(SHIFT(161)),
        [anon_sym_while] = ACTIONS(SHIFT(162)),
        [anon_sym_repeat] = ACTIONS(SHIFT(163)),
        [anon_sym_if] = ACTIONS(SHIFT(164)),
        [anon_sym_guard] = ACTIONS(SHIFT(165)),
        [anon_sym_switch] = ACTIONS(SHIFT(166)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(342)),
        [anon_sym_break] = ACTIONS(SHIFT(168)),
        [sym__declaration] = ACTIONS(SHIFT(158)),
        [sym_identifier] = ACTIONS(SHIFT(169)),
    },
    [341] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(343)),
    },
    [342] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [343] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [344] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 3)),
    },
    [345] = {
        [sym__expression] = ACTIONS(SHIFT(346)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(320)),
        [sym_identifier] = ACTIONS(SHIFT(301)),
    },
    [346] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(347)),
    },
    [347] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym__expression] = ACTIONS(SHIFT(348)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(226)),
    },
    [348] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [349] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [350] = {
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
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [351] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [352] = {
        [sym__code_block] = ACTIONS(SHIFT(353)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(354)),
    },
    [353] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_else] = ACTIONS(SHIFT(358)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_break] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_if_statement, 3)),
    },
    [354] = {
        [sym__statement] = ACTIONS(SHIFT(157)),
        [sym__loop_statement] = ACTIONS(SHIFT(158)),
        [sym_for_statement] = ACTIONS(SHIFT(159)),
        [sym_for_in_statement] = ACTIONS(SHIFT(159)),
        [sym_while_statement] = ACTIONS(SHIFT(159)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(159)),
        [sym_if_statement] = ACTIONS(SHIFT(158)),
        [sym_guard_statement] = ACTIONS(SHIFT(158)),
        [sym_switch_statement] = ACTIONS(SHIFT(158)),
        [sym_labeled_statement] = ACTIONS(SHIFT(158)),
        [sym_break_statement] = ACTIONS(SHIFT(158)),
        [sym__expression] = ACTIONS(SHIFT(158)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(355)),
        [anon_sym_for] = ACTIONS(SHIFT(161)),
        [anon_sym_while] = ACTIONS(SHIFT(162)),
        [anon_sym_repeat] = ACTIONS(SHIFT(163)),
        [anon_sym_if] = ACTIONS(SHIFT(164)),
        [anon_sym_guard] = ACTIONS(SHIFT(165)),
        [anon_sym_switch] = ACTIONS(SHIFT(166)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(356)),
        [anon_sym_break] = ACTIONS(SHIFT(168)),
        [sym__declaration] = ACTIONS(SHIFT(158)),
        [sym_identifier] = ACTIONS(SHIFT(169)),
    },
    [355] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(357)),
    },
    [356] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [357] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [358] = {
        [sym_if_statement] = ACTIONS(SHIFT(359)),
        [sym__code_block] = ACTIONS(SHIFT(359)),
        [anon_sym_if] = ACTIONS(SHIFT(33)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(156)),
    },
    [359] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_if_statement, 5)),
    },
    [360] = {
        [anon_sym_while] = ACTIONS(SHIFT(361)),
    },
    [361] = {
        [sym__expression] = ACTIONS(SHIFT(362)),
        [sym_identifier] = ACTIONS(SHIFT(363)),
    },
    [362] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
    },
    [363] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym__expression, 1)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [364] = {
        [sym__code_block] = ACTIONS(SHIFT(365)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(156)),
    },
    [365] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_while_statement, 3)),
    },
    [366] = {
        [sym__code_block] = ACTIONS(SHIFT(385)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(156)),
    },
    [367] = {
        [sym__type_annotation] = ACTIONS(SHIFT(381)),
        [anon_sym_in] = ACTIONS(SHIFT(382)),
        [anon_sym_COLON] = ACTIONS(SHIFT(281)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(275)),
        [anon_sym_as] = ACTIONS(SHIFT(276)),
    },
    [368] = {
        [sym__for_init] = ACTIONS(SHIFT(293)),
        [sym__for_condition] = ACTIONS(SHIFT(378)),
        [sym_variable_declaration] = ACTIONS(SHIFT(247)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(248)),
        [sym__pattern] = ACTIONS(SHIFT(77)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(78)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(78)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(270)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(78)),
        [sym_optional_pattern] = ACTIONS(SHIFT(78)),
        [sym_is_pattern] = ACTIONS(SHIFT(78)),
        [sym_as_pattern] = ACTIONS(SHIFT(78)),
        [sym__expression] = ACTIONS(SHIFT(295)),
        [sym__expression_list] = ACTIONS(SHIFT(247)),
        [sym__type_identifier] = ACTIONS(SHIFT(80)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(296)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(81)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(271)),
        [anon_sym_let] = ACTIONS(SHIFT(83)),
        [anon_sym_var] = ACTIONS(SHIFT(297)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(78)),
        [anon_sym_DOT] = ACTIONS(SHIFT(84)),
        [anon_sym_is] = ACTIONS(SHIFT(85)),
        [sym_identifier] = ACTIONS(SHIFT(298)),
    },
    [369] = {
        [sym__pattern] = ACTIONS(SHIFT(370)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(250)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(250)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(250)),
        [sym_optional_pattern] = ACTIONS(SHIFT(250)),
        [sym_is_pattern] = ACTIONS(SHIFT(250)),
        [sym_as_pattern] = ACTIONS(SHIFT(250)),
        [sym__expression] = ACTIONS(SHIFT(250)),
        [sym__type_identifier] = ACTIONS(SHIFT(252)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(269)),
        [anon_sym_let] = ACTIONS(SHIFT(256)),
        [anon_sym_var] = ACTIONS(SHIFT(256)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(250)),
        [anon_sym_DOT] = ACTIONS(SHIFT(258)),
        [anon_sym_is] = ACTIONS(SHIFT(259)),
        [sym_identifier] = ACTIONS(SHIFT(274)),
    },
    [370] = {
        [sym__type_annotation] = ACTIONS(SHIFT(371)),
        [anon_sym_in] = ACTIONS(SHIFT(372)),
        [anon_sym_COLON] = ACTIONS(SHIFT(281)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(275)),
        [anon_sym_as] = ACTIONS(SHIFT(276)),
    },
    [371] = {
        [anon_sym_in] = ACTIONS(SHIFT(375)),
    },
    [372] = {
        [sym__expression] = ACTIONS(SHIFT(373)),
        [sym_identifier] = ACTIONS(SHIFT(226)),
    },
    [373] = {
        [sym__code_block] = ACTIONS(SHIFT(374)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(156)),
    },
    [374] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
    },
    [375] = {
        [sym__expression] = ACTIONS(SHIFT(376)),
        [sym_identifier] = ACTIONS(SHIFT(226)),
    },
    [376] = {
        [sym__code_block] = ACTIONS(SHIFT(377)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(156)),
    },
    [377] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
    },
    [378] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(379)),
    },
    [379] = {
        [sym__code_block] = ACTIONS(SHIFT(380)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(156)),
    },
    [380] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 5)),
    },
    [381] = {
        [anon_sym_in] = ACTIONS(SHIFT(372)),
    },
    [382] = {
        [sym__expression] = ACTIONS(SHIFT(383)),
        [sym_identifier] = ACTIONS(SHIFT(226)),
    },
    [383] = {
        [sym__code_block] = ACTIONS(SHIFT(384)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(156)),
    },
    [384] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
    },
    [385] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 3)),
    },
    [386] = {
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
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [387] = {
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_case] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [388] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(414)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(415)),
        [anon_sym_COLON] = ACTIONS(SHIFT(416)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(405)),
        [anon_sym_as] = ACTIONS(SHIFT(406)),
    },
    [389] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [390] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(411)),
    },
    [391] = {
        [sym__pattern] = ACTIONS(SHIFT(77)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(78)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(78)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(408)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(78)),
        [sym_optional_pattern] = ACTIONS(SHIFT(78)),
        [sym_is_pattern] = ACTIONS(SHIFT(78)),
        [sym_as_pattern] = ACTIONS(SHIFT(78)),
        [sym__expression] = ACTIONS(SHIFT(78)),
        [sym__type_identifier] = ACTIONS(SHIFT(80)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(81)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(409)),
        [anon_sym_let] = ACTIONS(SHIFT(83)),
        [anon_sym_var] = ACTIONS(SHIFT(83)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(78)),
        [anon_sym_DOT] = ACTIONS(SHIFT(84)),
        [anon_sym_is] = ACTIONS(SHIFT(85)),
        [sym_identifier] = ACTIONS(SHIFT(86)),
    },
    [392] = {
        [sym__pattern] = ACTIONS(SHIFT(404)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(389)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(389)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(389)),
        [sym_optional_pattern] = ACTIONS(SHIFT(389)),
        [sym_is_pattern] = ACTIONS(SHIFT(389)),
        [sym_as_pattern] = ACTIONS(SHIFT(389)),
        [sym__expression] = ACTIONS(SHIFT(389)),
        [sym__type_identifier] = ACTIONS(SHIFT(390)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(391)),
        [anon_sym_let] = ACTIONS(SHIFT(392)),
        [anon_sym_var] = ACTIONS(SHIFT(392)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(389)),
        [anon_sym_DOT] = ACTIONS(SHIFT(393)),
        [anon_sym_is] = ACTIONS(SHIFT(394)),
        [sym_identifier] = ACTIONS(SHIFT(395)),
    },
    [393] = {
        [sym_identifier] = ACTIONS(SHIFT(402)),
    },
    [394] = {
        [sym_type] = ACTIONS(SHIFT(396)),
        [sym__type_identifier] = ACTIONS(SHIFT(397)),
        [sym__type_name] = ACTIONS(SHIFT(398)),
        [sym_identifier] = ACTIONS(SHIFT(399)),
    },
    [395] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [396] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [397] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [398] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(400)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [399] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [400] = {
        [sym__type_identifier] = ACTIONS(SHIFT(401)),
        [sym__type_name] = ACTIONS(SHIFT(398)),
        [sym_identifier] = ACTIONS(SHIFT(399)),
    },
    [401] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [402] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(403)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(391)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [403] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [404] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(405)),
        [anon_sym_as] = ACTIONS(SHIFT(406)),
    },
    [405] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [406] = {
        [sym_type] = ACTIONS(SHIFT(407)),
        [sym__type_identifier] = ACTIONS(SHIFT(397)),
        [sym__type_name] = ACTIONS(SHIFT(398)),
        [sym_identifier] = ACTIONS(SHIFT(399)),
    },
    [407] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [408] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(410)),
    },
    [409] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [410] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [411] = {
        [sym_identifier] = ACTIONS(SHIFT(412)),
    },
    [412] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(413)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(391)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [413] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [414] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(420)),
    },
    [415] = {
        [sym__pattern] = ACTIONS(SHIFT(418)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(389)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(389)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(389)),
        [sym_optional_pattern] = ACTIONS(SHIFT(389)),
        [sym_is_pattern] = ACTIONS(SHIFT(389)),
        [sym_as_pattern] = ACTIONS(SHIFT(389)),
        [sym__expression] = ACTIONS(SHIFT(389)),
        [sym__type_identifier] = ACTIONS(SHIFT(390)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(391)),
        [anon_sym_let] = ACTIONS(SHIFT(392)),
        [anon_sym_var] = ACTIONS(SHIFT(392)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(389)),
        [anon_sym_DOT] = ACTIONS(SHIFT(393)),
        [anon_sym_is] = ACTIONS(SHIFT(394)),
        [sym_identifier] = ACTIONS(SHIFT(395)),
    },
    [416] = {
        [sym__statement] = ACTIONS(SHIFT(26)),
        [sym__loop_statement] = ACTIONS(SHIFT(27)),
        [sym_for_statement] = ACTIONS(SHIFT(28)),
        [sym_for_in_statement] = ACTIONS(SHIFT(28)),
        [sym_while_statement] = ACTIONS(SHIFT(28)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(28)),
        [sym_if_statement] = ACTIONS(SHIFT(27)),
        [sym_guard_statement] = ACTIONS(SHIFT(27)),
        [sym_switch_statement] = ACTIONS(SHIFT(27)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [sym_labeled_statement] = ACTIONS(SHIFT(27)),
        [sym_break_statement] = ACTIONS(SHIFT(27)),
        [sym__expression] = ACTIONS(SHIFT(27)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(417)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_for] = ACTIONS(SHIFT(30)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_while] = ACTIONS(SHIFT(31)),
        [anon_sym_repeat] = ACTIONS(SHIFT(32)),
        [anon_sym_if] = ACTIONS(SHIFT(33)),
        [anon_sym_guard] = ACTIONS(SHIFT(34)),
        [anon_sym_switch] = ACTIONS(SHIFT(35)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_break] = ACTIONS(SHIFT(36)),
        [sym__declaration] = ACTIONS(SHIFT(27)),
        [sym_identifier] = ACTIONS(SHIFT(37)),
    },
    [417] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 4)),
    },
    [418] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(419)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(415)),
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(405)),
        [anon_sym_as] = ACTIONS(SHIFT(406)),
    },
    [419] = {
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [420] = {
        [sym__statement] = ACTIONS(SHIFT(26)),
        [sym__loop_statement] = ACTIONS(SHIFT(27)),
        [sym_for_statement] = ACTIONS(SHIFT(28)),
        [sym_for_in_statement] = ACTIONS(SHIFT(28)),
        [sym_while_statement] = ACTIONS(SHIFT(28)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(28)),
        [sym_if_statement] = ACTIONS(SHIFT(27)),
        [sym_guard_statement] = ACTIONS(SHIFT(27)),
        [sym_switch_statement] = ACTIONS(SHIFT(27)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [sym_labeled_statement] = ACTIONS(SHIFT(27)),
        [sym_break_statement] = ACTIONS(SHIFT(27)),
        [sym__expression] = ACTIONS(SHIFT(27)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(421)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_for] = ACTIONS(SHIFT(30)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_while] = ACTIONS(SHIFT(31)),
        [anon_sym_repeat] = ACTIONS(SHIFT(32)),
        [anon_sym_if] = ACTIONS(SHIFT(33)),
        [anon_sym_guard] = ACTIONS(SHIFT(34)),
        [anon_sym_switch] = ACTIONS(SHIFT(35)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_break] = ACTIONS(SHIFT(36)),
        [sym__declaration] = ACTIONS(SHIFT(27)),
        [sym_identifier] = ACTIONS(SHIFT(37)),
    },
    [421] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 5)),
    },
    [422] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_switch_statement, 5)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_switch_statement, 5)),
    },
    [423] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 2)),
    },
    [424] = {
        [anon_sym_else] = ACTIONS(SHIFT(425)),
    },
    [425] = {
        [sym__code_block] = ACTIONS(SHIFT(426)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(427)),
    },
    [426] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_guard_statement, 4)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_guard_statement, 4)),
    },
    [427] = {
        [sym__statement] = ACTIONS(SHIFT(157)),
        [sym__loop_statement] = ACTIONS(SHIFT(158)),
        [sym_for_statement] = ACTIONS(SHIFT(159)),
        [sym_for_in_statement] = ACTIONS(SHIFT(159)),
        [sym_while_statement] = ACTIONS(SHIFT(159)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(159)),
        [sym_if_statement] = ACTIONS(SHIFT(158)),
        [sym_guard_statement] = ACTIONS(SHIFT(158)),
        [sym_switch_statement] = ACTIONS(SHIFT(158)),
        [sym_labeled_statement] = ACTIONS(SHIFT(158)),
        [sym_break_statement] = ACTIONS(SHIFT(158)),
        [sym__expression] = ACTIONS(SHIFT(158)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(428)),
        [anon_sym_for] = ACTIONS(SHIFT(161)),
        [anon_sym_while] = ACTIONS(SHIFT(162)),
        [anon_sym_repeat] = ACTIONS(SHIFT(163)),
        [anon_sym_if] = ACTIONS(SHIFT(164)),
        [anon_sym_guard] = ACTIONS(SHIFT(165)),
        [anon_sym_switch] = ACTIONS(SHIFT(166)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(429)),
        [anon_sym_break] = ACTIONS(SHIFT(168)),
        [sym__declaration] = ACTIONS(SHIFT(158)),
        [sym_identifier] = ACTIONS(SHIFT(169)),
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
        [sym_break_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym__code_block, 2)),
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
        [sym_break_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [431] = {
        [sym__code_block] = ACTIONS(SHIFT(432)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(433)),
    },
    [432] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_else] = ACTIONS(SHIFT(437)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_break] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_if_statement, 3)),
    },
    [433] = {
        [sym__statement] = ACTIONS(SHIFT(157)),
        [sym__loop_statement] = ACTIONS(SHIFT(158)),
        [sym_for_statement] = ACTIONS(SHIFT(159)),
        [sym_for_in_statement] = ACTIONS(SHIFT(159)),
        [sym_while_statement] = ACTIONS(SHIFT(159)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(159)),
        [sym_if_statement] = ACTIONS(SHIFT(158)),
        [sym_guard_statement] = ACTIONS(SHIFT(158)),
        [sym_switch_statement] = ACTIONS(SHIFT(158)),
        [sym_labeled_statement] = ACTIONS(SHIFT(158)),
        [sym_break_statement] = ACTIONS(SHIFT(158)),
        [sym__expression] = ACTIONS(SHIFT(158)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(434)),
        [anon_sym_for] = ACTIONS(SHIFT(161)),
        [anon_sym_while] = ACTIONS(SHIFT(162)),
        [anon_sym_repeat] = ACTIONS(SHIFT(163)),
        [anon_sym_if] = ACTIONS(SHIFT(164)),
        [anon_sym_guard] = ACTIONS(SHIFT(165)),
        [anon_sym_switch] = ACTIONS(SHIFT(166)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(435)),
        [anon_sym_break] = ACTIONS(SHIFT(168)),
        [sym__declaration] = ACTIONS(SHIFT(158)),
        [sym_identifier] = ACTIONS(SHIFT(169)),
    },
    [434] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(436)),
    },
    [435] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym__code_block, 2)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [436] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [437] = {
        [sym_if_statement] = ACTIONS(SHIFT(438)),
        [sym__code_block] = ACTIONS(SHIFT(438)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(427)),
    },
    [438] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_if_statement, 5)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_if_statement, 5)),
    },
    [439] = {
        [anon_sym_while] = ACTIONS(SHIFT(440)),
    },
    [440] = {
        [sym__expression] = ACTIONS(SHIFT(441)),
        [sym_identifier] = ACTIONS(SHIFT(442)),
    },
    [441] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
    },
    [442] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym__expression, 1)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__expression, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [443] = {
        [sym__code_block] = ACTIONS(SHIFT(444)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(427)),
    },
    [444] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_while_statement, 3)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_while_statement, 3)),
    },
    [445] = {
        [sym__code_block] = ACTIONS(SHIFT(464)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(427)),
    },
    [446] = {
        [sym__type_annotation] = ACTIONS(SHIFT(460)),
        [anon_sym_in] = ACTIONS(SHIFT(461)),
        [anon_sym_COLON] = ACTIONS(SHIFT(281)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(275)),
        [anon_sym_as] = ACTIONS(SHIFT(276)),
    },
    [447] = {
        [sym__for_init] = ACTIONS(SHIFT(293)),
        [sym__for_condition] = ACTIONS(SHIFT(457)),
        [sym_variable_declaration] = ACTIONS(SHIFT(247)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(248)),
        [sym__pattern] = ACTIONS(SHIFT(77)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(78)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(78)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(270)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(78)),
        [sym_optional_pattern] = ACTIONS(SHIFT(78)),
        [sym_is_pattern] = ACTIONS(SHIFT(78)),
        [sym_as_pattern] = ACTIONS(SHIFT(78)),
        [sym__expression] = ACTIONS(SHIFT(295)),
        [sym__expression_list] = ACTIONS(SHIFT(247)),
        [sym__type_identifier] = ACTIONS(SHIFT(80)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(296)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(81)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(271)),
        [anon_sym_let] = ACTIONS(SHIFT(83)),
        [anon_sym_var] = ACTIONS(SHIFT(297)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(78)),
        [anon_sym_DOT] = ACTIONS(SHIFT(84)),
        [anon_sym_is] = ACTIONS(SHIFT(85)),
        [sym_identifier] = ACTIONS(SHIFT(298)),
    },
    [448] = {
        [sym__pattern] = ACTIONS(SHIFT(449)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(250)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(250)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(250)),
        [sym_optional_pattern] = ACTIONS(SHIFT(250)),
        [sym_is_pattern] = ACTIONS(SHIFT(250)),
        [sym_as_pattern] = ACTIONS(SHIFT(250)),
        [sym__expression] = ACTIONS(SHIFT(250)),
        [sym__type_identifier] = ACTIONS(SHIFT(252)),
        [sym__type_name] = ACTIONS(SHIFT(59)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(269)),
        [anon_sym_let] = ACTIONS(SHIFT(256)),
        [anon_sym_var] = ACTIONS(SHIFT(256)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(250)),
        [anon_sym_DOT] = ACTIONS(SHIFT(258)),
        [anon_sym_is] = ACTIONS(SHIFT(259)),
        [sym_identifier] = ACTIONS(SHIFT(274)),
    },
    [449] = {
        [sym__type_annotation] = ACTIONS(SHIFT(450)),
        [anon_sym_in] = ACTIONS(SHIFT(451)),
        [anon_sym_COLON] = ACTIONS(SHIFT(281)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(275)),
        [anon_sym_as] = ACTIONS(SHIFT(276)),
    },
    [450] = {
        [anon_sym_in] = ACTIONS(SHIFT(454)),
    },
    [451] = {
        [sym__expression] = ACTIONS(SHIFT(452)),
        [sym_identifier] = ACTIONS(SHIFT(226)),
    },
    [452] = {
        [sym__code_block] = ACTIONS(SHIFT(453)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(427)),
    },
    [453] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
    },
    [454] = {
        [sym__expression] = ACTIONS(SHIFT(455)),
        [sym_identifier] = ACTIONS(SHIFT(226)),
    },
    [455] = {
        [sym__code_block] = ACTIONS(SHIFT(456)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(427)),
    },
    [456] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
    },
    [457] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(458)),
    },
    [458] = {
        [sym__code_block] = ACTIONS(SHIFT(459)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(427)),
    },
    [459] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 5)),
    },
    [460] = {
        [anon_sym_in] = ACTIONS(SHIFT(451)),
    },
    [461] = {
        [sym__expression] = ACTIONS(SHIFT(462)),
        [sym_identifier] = ACTIONS(SHIFT(226)),
    },
    [462] = {
        [sym__code_block] = ACTIONS(SHIFT(463)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(427)),
    },
    [463] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
    },
    [464] = {
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
        [sym_break_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
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
        [anon_sym_break] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym_for_statement, 3)),
    },
    [465] = {
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
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [466] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_swift);
