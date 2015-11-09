#include "tree_sitter/parser.h"

#define STATE_COUNT 355
#define SYMBOL_COUNT 91

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
                ADVANCE(55);
            if (lookahead == 'w')
                ADVANCE(61);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_return);
        case 55:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'w')
                ADVANCE(56);
            ACCEPT_TOKEN(sym_identifier);
        case 56:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(57);
            ACCEPT_TOKEN(sym_identifier);
        case 57:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(58);
            ACCEPT_TOKEN(sym_identifier);
        case 58:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(59);
            ACCEPT_TOKEN(sym_identifier);
        case 59:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(60);
            ACCEPT_TOKEN(sym_identifier);
        case 60:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_switch);
        case 61:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(62);
            ACCEPT_TOKEN(sym_identifier);
        case 62:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier);
        case 63:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(64);
            ACCEPT_TOKEN(sym_identifier);
        case 64:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(65);
            ACCEPT_TOKEN(sym_identifier);
        case 65:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_while);
        case 66:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(66);
            LEX_ERROR();
        case 67:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(67);
            if (lookahead == '\n')
                ADVANCE(68);
            if (lookahead == ';')
                ADVANCE(69);
            LEX_ERROR();
        case 68:
            START_TOKEN();
            if (lookahead == '\n')
                ADVANCE(68);
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_PLUS_SLASH);
        case 69:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 70:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(70);
            if (lookahead == '(')
                ADVANCE(71);
            if (lookahead == '.')
                ADVANCE(72);
            if (lookahead == ';')
                ADVANCE(69);
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
                ADVANCE(73);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'c')
                ADVANCE(74);
            if (lookahead == 'i')
                ADVANCE(78);
            if (lookahead == 'l')
                ADVANCE(80);
            if (lookahead == 'v')
                ADVANCE(83);
            LEX_ERROR();
        case 71:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 72:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 73:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(sym_wildcard_pattern);
        case 74:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(75);
            ACCEPT_TOKEN(sym_identifier);
        case 75:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(76);
            ACCEPT_TOKEN(sym_identifier);
        case 76:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(77);
            ACCEPT_TOKEN(sym_identifier);
        case 77:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_case);
        case 78:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(79);
            ACCEPT_TOKEN(sym_identifier);
        case 79:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_is);
        case 80:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(81);
            ACCEPT_TOKEN(sym_identifier);
        case 81:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(82);
            ACCEPT_TOKEN(sym_identifier);
        case 82:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_let);
        case 83:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(84);
            ACCEPT_TOKEN(sym_identifier);
        case 84:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'r')
                ADVANCE(85);
            ACCEPT_TOKEN(sym_identifier);
        case 85:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_var);
        case 86:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(86);
            if (lookahead == '#')
                ADVANCE(87);
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
                ADVANCE(74);
            if (lookahead == 'l')
                ADVANCE(80);
            if (lookahead == 'v')
                ADVANCE(83);
            LEX_ERROR();
        case 87:
            if (lookahead == 'a')
                ADVANCE(88);
            LEX_ERROR();
        case 88:
            if (lookahead == 'v')
                ADVANCE(89);
            LEX_ERROR();
        case 89:
            if (lookahead == 'a')
                ADVANCE(90);
            LEX_ERROR();
        case 90:
            if (lookahead == 'i')
                ADVANCE(91);
            LEX_ERROR();
        case 91:
            if (lookahead == 'l')
                ADVANCE(92);
            LEX_ERROR();
        case 92:
            if (lookahead == 'a')
                ADVANCE(93);
            LEX_ERROR();
        case 93:
            if (lookahead == 'b')
                ADVANCE(94);
            LEX_ERROR();
        case 94:
            if (lookahead == 'l')
                ADVANCE(95);
            LEX_ERROR();
        case 95:
            if (lookahead == 'e')
                ADVANCE(96);
            LEX_ERROR();
        case 96:
            ACCEPT_TOKEN(anon_sym_POUNDavailable);
        case 97:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(97);
            if (lookahead == '{')
                ADVANCE(98);
            LEX_ERROR();
        case 98:
            ACCEPT_TOKEN(anon_sym_LBRACE);
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
            LEX_ERROR();
        case 100:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(100);
            if (lookahead == '\n')
                ADVANCE(101);
            if (lookahead == ';')
                ADVANCE(69);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 101:
            START_TOKEN();
            if (lookahead == '\n')
                ADVANCE(101);
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_PLUS_SLASH);
        case 102:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(102);
            if (lookahead == '\n')
                ADVANCE(103);
            if (lookahead == ':')
                ADVANCE(104);
            if (lookahead == ';')
                ADVANCE(69);
            LEX_ERROR();
        case 103:
            START_TOKEN();
            if (lookahead == '\n')
                ADVANCE(103);
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_PLUS_SLASH);
        case 104:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 105:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(105);
            if (lookahead == 'f')
                ADVANCE(106);
            if (lookahead == 'i')
                ADVANCE(109);
            if (lookahead == 'r')
                ADVANCE(111);
            if (lookahead == 'w')
                ADVANCE(117);
            LEX_ERROR();
        case 106:
            if (lookahead == 'o')
                ADVANCE(107);
            LEX_ERROR();
        case 107:
            if (lookahead == 'r')
                ADVANCE(108);
            LEX_ERROR();
        case 108:
            ACCEPT_TOKEN(anon_sym_for);
        case 109:
            if (lookahead == 'f')
                ADVANCE(110);
            LEX_ERROR();
        case 110:
            ACCEPT_TOKEN(anon_sym_if);
        case 111:
            if (lookahead == 'e')
                ADVANCE(112);
            LEX_ERROR();
        case 112:
            if (lookahead == 'p')
                ADVANCE(113);
            LEX_ERROR();
        case 113:
            if (lookahead == 'e')
                ADVANCE(114);
            LEX_ERROR();
        case 114:
            if (lookahead == 'a')
                ADVANCE(115);
            LEX_ERROR();
        case 115:
            if (lookahead == 't')
                ADVANCE(116);
            LEX_ERROR();
        case 116:
            ACCEPT_TOKEN(anon_sym_repeat);
        case 117:
            if (lookahead == 'h')
                ADVANCE(118);
            LEX_ERROR();
        case 118:
            if (lookahead == 'i')
                ADVANCE(119);
            LEX_ERROR();
        case 119:
            if (lookahead == 'l')
                ADVANCE(120);
            LEX_ERROR();
        case 120:
            if (lookahead == 'e')
                ADVANCE(121);
            LEX_ERROR();
        case 121:
            ACCEPT_TOKEN(anon_sym_while);
        case 122:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(122);
            if (lookahead == 'c')
                ADVANCE(123);
            if (lookahead == 'd')
                ADVANCE(127);
            if (lookahead == '}')
                ADVANCE(134);
            LEX_ERROR();
        case 123:
            if (lookahead == 'a')
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
            ACCEPT_TOKEN(anon_sym_case);
        case 127:
            if (lookahead == 'e')
                ADVANCE(128);
            LEX_ERROR();
        case 128:
            if (lookahead == 'f')
                ADVANCE(129);
            LEX_ERROR();
        case 129:
            if (lookahead == 'a')
                ADVANCE(130);
            LEX_ERROR();
        case 130:
            if (lookahead == 'u')
                ADVANCE(131);
            LEX_ERROR();
        case 131:
            if (lookahead == 'l')
                ADVANCE(132);
            LEX_ERROR();
        case 132:
            if (lookahead == 't')
                ADVANCE(133);
            LEX_ERROR();
        case 133:
            ACCEPT_TOKEN(anon_sym_default);
        case 134:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 135:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(135);
            if (lookahead == '}')
                ADVANCE(134);
            LEX_ERROR();
        case 136:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(136);
            if (lookahead == '(')
                ADVANCE(71);
            if (lookahead == '.')
                ADVANCE(72);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(73);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(78);
            if (lookahead == 'l')
                ADVANCE(80);
            if (lookahead == 'v')
                ADVANCE(83);
            LEX_ERROR();
        case 137:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(137);
            if (lookahead == ':')
                ADVANCE(104);
            LEX_ERROR();
        case 138:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(138);
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
                ADVANCE(139);
            if (lookahead == 'd')
                ADVANCE(140);
            if (lookahead == 'f')
                ADVANCE(20);
            if (lookahead == 'g')
                ADVANCE(33);
            if (lookahead == 'i')
                ADVANCE(38);
            if (lookahead == 'r')
                ADVANCE(45);
            if (lookahead == 's')
                ADVANCE(55);
            if (lookahead == 'w')
                ADVANCE(61);
            if (lookahead == '}')
                ADVANCE(134);
            LEX_ERROR();
        case 139:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(75);
            if (lookahead == 'o')
                ADVANCE(13);
            ACCEPT_TOKEN(sym_identifier);
        case 140:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(141);
            ACCEPT_TOKEN(sym_identifier);
        case 141:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'f')
                ADVANCE(142);
            ACCEPT_TOKEN(sym_identifier);
        case 142:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(143);
            ACCEPT_TOKEN(sym_identifier);
        case 143:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'u')
                ADVANCE(144);
            ACCEPT_TOKEN(sym_identifier);
        case 144:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(145);
            ACCEPT_TOKEN(sym_identifier);
        case 145:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(146);
            ACCEPT_TOKEN(sym_identifier);
        case 146:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_default);
        case 147:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(147);
            if (lookahead == ',')
                ADVANCE(148);
            if (lookahead == ':')
                ADVANCE(104);
            if (lookahead == '?')
                ADVANCE(149);
            if (lookahead == 'a')
                ADVANCE(150);
            LEX_ERROR();
        case 148:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 149:
            ACCEPT_TOKEN(anon_sym_QMARK);
        case 150:
            if (lookahead == 's')
                ADVANCE(151);
            LEX_ERROR();
        case 151:
            ACCEPT_TOKEN(anon_sym_as);
        case 152:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(152);
            if (lookahead == '.')
                ADVANCE(72);
            LEX_ERROR();
        case 153:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(153);
            if (lookahead == '(')
                ADVANCE(71);
            if (lookahead == ')')
                ADVANCE(154);
            if (lookahead == '.')
                ADVANCE(72);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(73);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(78);
            if (lookahead == 'l')
                ADVANCE(80);
            if (lookahead == 'v')
                ADVANCE(83);
            LEX_ERROR();
        case 154:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 155:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(155);
            if (lookahead == ',')
                ADVANCE(148);
            if (lookahead == '.')
                ADVANCE(72);
            if (lookahead == ':')
                ADVANCE(104);
            if (lookahead == '?')
                ADVANCE(149);
            if (lookahead == 'a')
                ADVANCE(150);
            LEX_ERROR();
        case 156:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(156);
            if (lookahead == '(')
                ADVANCE(71);
            if (lookahead == ',')
                ADVANCE(148);
            if (lookahead == ':')
                ADVANCE(104);
            if (lookahead == '?')
                ADVANCE(149);
            if (lookahead == 'a')
                ADVANCE(150);
            LEX_ERROR();
        case 157:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(157);
            if (lookahead == ')')
                ADVANCE(154);
            if (lookahead == ',')
                ADVANCE(148);
            if (lookahead == '?')
                ADVANCE(149);
            if (lookahead == 'a')
                ADVANCE(150);
            LEX_ERROR();
        case 158:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(158);
            if (lookahead == ')')
                ADVANCE(154);
            LEX_ERROR();
        case 159:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(159);
            if (lookahead == ')')
                ADVANCE(154);
            if (lookahead == ',')
                ADVANCE(148);
            if (lookahead == '.')
                ADVANCE(72);
            if (lookahead == '?')
                ADVANCE(149);
            if (lookahead == 'a')
                ADVANCE(150);
            LEX_ERROR();
        case 160:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(160);
            if (lookahead == '(')
                ADVANCE(71);
            if (lookahead == ')')
                ADVANCE(154);
            if (lookahead == ',')
                ADVANCE(148);
            if (lookahead == '?')
                ADVANCE(149);
            if (lookahead == 'a')
                ADVANCE(150);
            LEX_ERROR();
        case 161:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(161);
            if (lookahead == 'e')
                ADVANCE(162);
            LEX_ERROR();
        case 162:
            if (lookahead == 'l')
                ADVANCE(163);
            LEX_ERROR();
        case 163:
            if (lookahead == 's')
                ADVANCE(164);
            LEX_ERROR();
        case 164:
            if (lookahead == 'e')
                ADVANCE(165);
            LEX_ERROR();
        case 165:
            ACCEPT_TOKEN(anon_sym_else);
        case 166:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(166);
            if (lookahead == ',')
                ADVANCE(148);
            if (lookahead == 'e')
                ADVANCE(162);
            LEX_ERROR();
        case 167:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(167);
            if (lookahead == '(')
                ADVANCE(71);
            LEX_ERROR();
        case 168:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(168);
            if (lookahead == '=')
                ADVANCE(169);
            if (lookahead == '?')
                ADVANCE(149);
            if (lookahead == 'a')
                ADVANCE(150);
            LEX_ERROR();
        case 169:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 170:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(170);
            if (lookahead == '.')
                ADVANCE(72);
            if (lookahead == '=')
                ADVANCE(169);
            if (lookahead == '?')
                ADVANCE(149);
            if (lookahead == 'a')
                ADVANCE(150);
            LEX_ERROR();
        case 171:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(171);
            if (lookahead == '(')
                ADVANCE(71);
            if (lookahead == '=')
                ADVANCE(169);
            if (lookahead == '?')
                ADVANCE(149);
            if (lookahead == 'a')
                ADVANCE(150);
            LEX_ERROR();
        case 172:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(172);
            if (lookahead == '*')
                ADVANCE(173);
            if (lookahead == 'O')
                ADVANCE(174);
            if (lookahead == 'i')
                ADVANCE(197);
            if (lookahead == 't')
                ADVANCE(220);
            if (lookahead == 'w')
                ADVANCE(224);
            LEX_ERROR();
        case 173:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 174:
            if (lookahead == 'S')
                ADVANCE(175);
            LEX_ERROR();
        case 175:
            if (lookahead == 'X')
                ADVANCE(176);
            LEX_ERROR();
        case 176:
            if (lookahead == 'A')
                ADVANCE(177);
            ACCEPT_TOKEN(anon_sym_OSX);
        case 177:
            if (lookahead == 'p')
                ADVANCE(178);
            LEX_ERROR();
        case 178:
            if (lookahead == 'p')
                ADVANCE(179);
            LEX_ERROR();
        case 179:
            if (lookahead == 'l')
                ADVANCE(180);
            LEX_ERROR();
        case 180:
            if (lookahead == 'i')
                ADVANCE(181);
            LEX_ERROR();
        case 181:
            if (lookahead == 'c')
                ADVANCE(182);
            LEX_ERROR();
        case 182:
            if (lookahead == 'a')
                ADVANCE(183);
            LEX_ERROR();
        case 183:
            if (lookahead == 't')
                ADVANCE(184);
            LEX_ERROR();
        case 184:
            if (lookahead == 'i')
                ADVANCE(185);
            LEX_ERROR();
        case 185:
            if (lookahead == 'o')
                ADVANCE(186);
            LEX_ERROR();
        case 186:
            if (lookahead == 'n')
                ADVANCE(187);
            LEX_ERROR();
        case 187:
            if (lookahead == 'E')
                ADVANCE(188);
            LEX_ERROR();
        case 188:
            if (lookahead == 'x')
                ADVANCE(189);
            LEX_ERROR();
        case 189:
            if (lookahead == 't')
                ADVANCE(190);
            LEX_ERROR();
        case 190:
            if (lookahead == 'e')
                ADVANCE(191);
            LEX_ERROR();
        case 191:
            if (lookahead == 'n')
                ADVANCE(192);
            LEX_ERROR();
        case 192:
            if (lookahead == 's')
                ADVANCE(193);
            LEX_ERROR();
        case 193:
            if (lookahead == 'i')
                ADVANCE(194);
            LEX_ERROR();
        case 194:
            if (lookahead == 'o')
                ADVANCE(195);
            LEX_ERROR();
        case 195:
            if (lookahead == 'n')
                ADVANCE(196);
            LEX_ERROR();
        case 196:
            ACCEPT_TOKEN(anon_sym_OSXApplicationExtension);
        case 197:
            if (lookahead == 'O')
                ADVANCE(198);
            LEX_ERROR();
        case 198:
            if (lookahead == 'S')
                ADVANCE(199);
            LEX_ERROR();
        case 199:
            if (lookahead == 'A')
                ADVANCE(200);
            ACCEPT_TOKEN(anon_sym_iOS);
        case 200:
            if (lookahead == 'p')
                ADVANCE(201);
            LEX_ERROR();
        case 201:
            if (lookahead == 'p')
                ADVANCE(202);
            LEX_ERROR();
        case 202:
            if (lookahead == 'l')
                ADVANCE(203);
            LEX_ERROR();
        case 203:
            if (lookahead == 'i')
                ADVANCE(204);
            LEX_ERROR();
        case 204:
            if (lookahead == 'c')
                ADVANCE(205);
            LEX_ERROR();
        case 205:
            if (lookahead == 'a')
                ADVANCE(206);
            LEX_ERROR();
        case 206:
            if (lookahead == 't')
                ADVANCE(207);
            LEX_ERROR();
        case 207:
            if (lookahead == 'i')
                ADVANCE(208);
            LEX_ERROR();
        case 208:
            if (lookahead == 'o')
                ADVANCE(209);
            LEX_ERROR();
        case 209:
            if (lookahead == 'n')
                ADVANCE(210);
            LEX_ERROR();
        case 210:
            if (lookahead == 'E')
                ADVANCE(211);
            LEX_ERROR();
        case 211:
            if (lookahead == 'x')
                ADVANCE(212);
            LEX_ERROR();
        case 212:
            if (lookahead == 't')
                ADVANCE(213);
            LEX_ERROR();
        case 213:
            if (lookahead == 'e')
                ADVANCE(214);
            LEX_ERROR();
        case 214:
            if (lookahead == 'n')
                ADVANCE(215);
            LEX_ERROR();
        case 215:
            if (lookahead == 's')
                ADVANCE(216);
            LEX_ERROR();
        case 216:
            if (lookahead == 'i')
                ADVANCE(217);
            LEX_ERROR();
        case 217:
            if (lookahead == 'o')
                ADVANCE(218);
            LEX_ERROR();
        case 218:
            if (lookahead == 'n')
                ADVANCE(219);
            LEX_ERROR();
        case 219:
            ACCEPT_TOKEN(anon_sym_iOSApplicationExtension);
        case 220:
            if (lookahead == 'v')
                ADVANCE(221);
            LEX_ERROR();
        case 221:
            if (lookahead == 'O')
                ADVANCE(222);
            LEX_ERROR();
        case 222:
            if (lookahead == 'S')
                ADVANCE(223);
            LEX_ERROR();
        case 223:
            ACCEPT_TOKEN(anon_sym_tvOS);
        case 224:
            if (lookahead == 'a')
                ADVANCE(225);
            LEX_ERROR();
        case 225:
            if (lookahead == 't')
                ADVANCE(226);
            LEX_ERROR();
        case 226:
            if (lookahead == 'c')
                ADVANCE(227);
            LEX_ERROR();
        case 227:
            if (lookahead == 'h')
                ADVANCE(228);
            LEX_ERROR();
        case 228:
            if (lookahead == 'O')
                ADVANCE(229);
            LEX_ERROR();
        case 229:
            if (lookahead == 'S')
                ADVANCE(230);
            LEX_ERROR();
        case 230:
            ACCEPT_TOKEN(anon_sym_watchOS);
        case 231:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(231);
            if (lookahead == ')')
                ADVANCE(154);
            if (lookahead == ',')
                ADVANCE(148);
            LEX_ERROR();
        case 232:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(232);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(233);
            LEX_ERROR();
        case 233:
            if (lookahead == '.')
                ADVANCE(234);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(233);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 234:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(235);
            LEX_ERROR();
        case 235:
            if (lookahead == '.')
                ADVANCE(236);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(235);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 236:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(237);
            LEX_ERROR();
        case 237:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(237);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 238:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(238);
            if (lookahead == '#')
                ADVANCE(87);
            if (lookahead == 'c')
                ADVANCE(123);
            if (lookahead == 'l')
                ADVANCE(239);
            if (lookahead == 'v')
                ADVANCE(242);
            LEX_ERROR();
        case 239:
            if (lookahead == 'e')
                ADVANCE(240);
            LEX_ERROR();
        case 240:
            if (lookahead == 't')
                ADVANCE(241);
            LEX_ERROR();
        case 241:
            ACCEPT_TOKEN(anon_sym_let);
        case 242:
            if (lookahead == 'a')
                ADVANCE(243);
            LEX_ERROR();
        case 243:
            if (lookahead == 'r')
                ADVANCE(244);
            LEX_ERROR();
        case 244:
            ACCEPT_TOKEN(anon_sym_var);
        case 245:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(245);
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
                ADVANCE(55);
            if (lookahead == 'w')
                ADVANCE(61);
            if (lookahead == '}')
                ADVANCE(134);
            LEX_ERROR();
        case 246:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(246);
            if (lookahead == ',')
                ADVANCE(148);
            if (lookahead == '{')
                ADVANCE(98);
            LEX_ERROR();
        case 247:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(247);
            if (lookahead == '\n')
                ADVANCE(248);
            if (lookahead == ';')
                ADVANCE(69);
            if (lookahead == 'e')
                ADVANCE(162);
            LEX_ERROR();
        case 248:
            START_TOKEN();
            if (lookahead == '\n')
                ADVANCE(248);
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_PLUS_SLASH);
        case 249:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(249);
            if (lookahead == 'i')
                ADVANCE(109);
            if (lookahead == '{')
                ADVANCE(98);
            LEX_ERROR();
        case 250:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(250);
            if (lookahead == 'w')
                ADVANCE(117);
            LEX_ERROR();
        case 251:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(251);
            if (lookahead == ';')
                ADVANCE(69);
            LEX_ERROR();
        case 252:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(252);
            if (lookahead == ':')
                ADVANCE(104);
            if (lookahead == '?')
                ADVANCE(149);
            if (lookahead == 'a')
                ADVANCE(150);
            if (lookahead == 'i')
                ADVANCE(253);
            LEX_ERROR();
        case 253:
            if (lookahead == 'n')
                ADVANCE(254);
            LEX_ERROR();
        case 254:
            ACCEPT_TOKEN(anon_sym_in);
        case 255:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(255);
            if (lookahead == ',')
                ADVANCE(148);
            if (lookahead == ':')
                ADVANCE(104);
            if (lookahead == ';')
                ADVANCE(69);
            if (lookahead == '?')
                ADVANCE(149);
            if (lookahead == 'a')
                ADVANCE(150);
            if (lookahead == 'i')
                ADVANCE(253);
            LEX_ERROR();
        case 256:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(256);
            if (lookahead == ';')
                ADVANCE(69);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 257:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(257);
            if (lookahead == '(')
                ADVANCE(71);
            if (lookahead == ')')
                ADVANCE(154);
            if (lookahead == '.')
                ADVANCE(72);
            if (lookahead == ';')
                ADVANCE(69);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(73);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(78);
            if (lookahead == 'l')
                ADVANCE(80);
            if (lookahead == 'v')
                ADVANCE(83);
            LEX_ERROR();
        case 258:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(258);
            if (lookahead == ',')
                ADVANCE(148);
            if (lookahead == '.')
                ADVANCE(72);
            if (lookahead == ':')
                ADVANCE(104);
            if (lookahead == ';')
                ADVANCE(69);
            if (lookahead == '?')
                ADVANCE(149);
            if (lookahead == 'a')
                ADVANCE(150);
            if (lookahead == 'i')
                ADVANCE(253);
            LEX_ERROR();
        case 259:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(259);
            if (lookahead == '.')
                ADVANCE(72);
            if (lookahead == ':')
                ADVANCE(104);
            if (lookahead == '?')
                ADVANCE(149);
            if (lookahead == 'a')
                ADVANCE(150);
            if (lookahead == 'i')
                ADVANCE(253);
            LEX_ERROR();
        case 260:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(260);
            if (lookahead == '(')
                ADVANCE(71);
            if (lookahead == ':')
                ADVANCE(104);
            if (lookahead == '?')
                ADVANCE(149);
            if (lookahead == 'a')
                ADVANCE(150);
            if (lookahead == 'i')
                ADVANCE(253);
            LEX_ERROR();
        case 261:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(261);
            if (lookahead == 'i')
                ADVANCE(253);
            LEX_ERROR();
        case 262:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(262);
            if (lookahead == '.')
                ADVANCE(72);
            if (lookahead == 'i')
                ADVANCE(253);
            LEX_ERROR();
        case 263:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(263);
            if (lookahead == ')')
                ADVANCE(154);
            if (lookahead == ',')
                ADVANCE(148);
            if (lookahead == ';')
                ADVANCE(69);
            if (lookahead == '?')
                ADVANCE(149);
            if (lookahead == 'a')
                ADVANCE(150);
            LEX_ERROR();
        case 264:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(264);
            if (lookahead == ')')
                ADVANCE(154);
            if (lookahead == ',')
                ADVANCE(148);
            if (lookahead == '.')
                ADVANCE(72);
            if (lookahead == ';')
                ADVANCE(69);
            if (lookahead == '?')
                ADVANCE(149);
            if (lookahead == 'a')
                ADVANCE(150);
            LEX_ERROR();
        case 265:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(265);
            if (lookahead == ')')
                ADVANCE(154);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 266:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(266);
            if (lookahead == ',')
                ADVANCE(148);
            if (lookahead == ';')
                ADVANCE(69);
            LEX_ERROR();
        case 267:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(267);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == '{')
                ADVANCE(98);
            LEX_ERROR();
        case 268:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(268);
            if (lookahead == '.')
                ADVANCE(72);
            if (lookahead == '{')
                ADVANCE(98);
            LEX_ERROR();
        case 269:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(269);
            if (lookahead == '\n')
                ADVANCE(270);
            if (lookahead == '#')
                ADVANCE(87);
            if (lookahead == '(')
                ADVANCE(71);
            if (lookahead == ')')
                ADVANCE(154);
            if (lookahead == '*')
                ADVANCE(173);
            if (lookahead == ',')
                ADVANCE(148);
            if (lookahead == '.')
                ADVANCE(72);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(233);
            if (lookahead == ':')
                ADVANCE(104);
            if (lookahead == ';')
                ADVANCE(69);
            if (lookahead == '=')
                ADVANCE(169);
            if (lookahead == '?')
                ADVANCE(149);
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
                ADVANCE(271);
            if (lookahead == '_')
                ADVANCE(73);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(294);
            if (lookahead == 'b')
                ADVANCE(7);
            if (lookahead == 'c')
                ADVANCE(139);
            if (lookahead == 'd')
                ADVANCE(140);
            if (lookahead == 'e')
                ADVANCE(296);
            if (lookahead == 'f')
                ADVANCE(20);
            if (lookahead == 'g')
                ADVANCE(33);
            if (lookahead == 'i')
                ADVANCE(300);
            if (lookahead == 'l')
                ADVANCE(80);
            if (lookahead == 'r')
                ADVANCE(45);
            if (lookahead == 's')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(324);
            if (lookahead == 'v')
                ADVANCE(83);
            if (lookahead == 'w')
                ADVANCE(328);
            if (lookahead == '{')
                ADVANCE(98);
            if (lookahead == '}')
                ADVANCE(134);
            LEX_ERROR();
        case 270:
            START_TOKEN();
            if (lookahead == '\n')
                ADVANCE(270);
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_PLUS_SLASH);
        case 271:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(272);
            ACCEPT_TOKEN(sym_identifier);
        case 272:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'W') ||
                (lookahead == 'Y') ||
                (lookahead == 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'X')
                ADVANCE(273);
            ACCEPT_TOKEN(sym_identifier);
        case 273:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (lookahead == 'A')
                ADVANCE(274);
            if (('B' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_OSX);
        case 274:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(275);
            ACCEPT_TOKEN(sym_identifier);
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
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(277);
            ACCEPT_TOKEN(sym_identifier);
        case 277:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(278);
            ACCEPT_TOKEN(sym_identifier);
        case 278:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(279);
            ACCEPT_TOKEN(sym_identifier);
        case 279:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(280);
            ACCEPT_TOKEN(sym_identifier);
        case 280:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(281);
            ACCEPT_TOKEN(sym_identifier);
        case 281:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(282);
            ACCEPT_TOKEN(sym_identifier);
        case 282:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(283);
            ACCEPT_TOKEN(sym_identifier);
        case 283:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(284);
            ACCEPT_TOKEN(sym_identifier);
        case 284:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'D') ||
                ('F' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'E')
                ADVANCE(285);
            ACCEPT_TOKEN(sym_identifier);
        case 285:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(3);
            if (lookahead == 'x')
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
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(288);
            ACCEPT_TOKEN(sym_identifier);
        case 288:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(289);
            ACCEPT_TOKEN(sym_identifier);
        case 289:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(290);
            ACCEPT_TOKEN(sym_identifier);
        case 290:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(291);
            ACCEPT_TOKEN(sym_identifier);
        case 291:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(292);
            ACCEPT_TOKEN(sym_identifier);
        case 292:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(293);
            ACCEPT_TOKEN(sym_identifier);
        case 293:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_OSXApplicationExtension);
        case 294:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(295);
            ACCEPT_TOKEN(sym_identifier);
        case 295:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_as);
        case 296:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(297);
            ACCEPT_TOKEN(sym_identifier);
        case 297:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(298);
            ACCEPT_TOKEN(sym_identifier);
        case 298:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(299);
            ACCEPT_TOKEN(sym_identifier);
        case 299:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_else);
        case 300:
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
                ADVANCE(301);
            if (lookahead == 'f')
                ADVANCE(39);
            if (lookahead == 'm')
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(323);
            if (lookahead == 's')
                ADVANCE(79);
            ACCEPT_TOKEN(sym_identifier);
        case 301:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(302);
            ACCEPT_TOKEN(sym_identifier);
        case 302:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (lookahead == 'A')
                ADVANCE(303);
            if (('B' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_iOS);
        case 303:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(304);
            ACCEPT_TOKEN(sym_identifier);
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
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(306);
            ACCEPT_TOKEN(sym_identifier);
        case 306:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
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
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(309);
            ACCEPT_TOKEN(sym_identifier);
        case 309:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(310);
            ACCEPT_TOKEN(sym_identifier);
        case 310:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(311);
            ACCEPT_TOKEN(sym_identifier);
        case 311:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(312);
            ACCEPT_TOKEN(sym_identifier);
        case 312:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(313);
            ACCEPT_TOKEN(sym_identifier);
        case 313:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'D') ||
                ('F' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'E')
                ADVANCE(314);
            ACCEPT_TOKEN(sym_identifier);
        case 314:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(3);
            if (lookahead == 'x')
                ADVANCE(315);
            ACCEPT_TOKEN(sym_identifier);
        case 315:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(316);
            ACCEPT_TOKEN(sym_identifier);
        case 316:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(317);
            ACCEPT_TOKEN(sym_identifier);
        case 317:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(318);
            ACCEPT_TOKEN(sym_identifier);
        case 318:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(319);
            ACCEPT_TOKEN(sym_identifier);
        case 319:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(320);
            ACCEPT_TOKEN(sym_identifier);
        case 320:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(321);
            ACCEPT_TOKEN(sym_identifier);
        case 321:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(322);
            ACCEPT_TOKEN(sym_identifier);
        case 322:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_iOSApplicationExtension);
        case 323:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_in);
        case 324:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'v')
                ADVANCE(325);
            ACCEPT_TOKEN(sym_identifier);
        case 325:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(326);
            ACCEPT_TOKEN(sym_identifier);
        case 326:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(327);
            ACCEPT_TOKEN(sym_identifier);
        case 327:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_tvOS);
        case 328:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(329);
            if (lookahead == 'h')
                ADVANCE(62);
            ACCEPT_TOKEN(sym_identifier);
        case 329:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(330);
            ACCEPT_TOKEN(sym_identifier);
        case 330:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(331);
            ACCEPT_TOKEN(sym_identifier);
        case 331:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(332);
            ACCEPT_TOKEN(sym_identifier);
        case 332:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(333);
            ACCEPT_TOKEN(sym_identifier);
        case 333:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(334);
            ACCEPT_TOKEN(sym_identifier);
        case 334:
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
                ADVANCE(269);
            if (lookahead == '\n')
                ADVANCE(270);
            if (lookahead == '#')
                ADVANCE(87);
            if (lookahead == '(')
                ADVANCE(71);
            if (lookahead == ')')
                ADVANCE(154);
            if (lookahead == '*')
                ADVANCE(173);
            if (lookahead == ',')
                ADVANCE(148);
            if (lookahead == '.')
                ADVANCE(72);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(233);
            if (lookahead == ':')
                ADVANCE(104);
            if (lookahead == ';')
                ADVANCE(69);
            if (lookahead == '=')
                ADVANCE(169);
            if (lookahead == '?')
                ADVANCE(149);
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
                ADVANCE(271);
            if (lookahead == '_')
                ADVANCE(73);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(294);
            if (lookahead == 'b')
                ADVANCE(7);
            if (lookahead == 'c')
                ADVANCE(139);
            if (lookahead == 'd')
                ADVANCE(140);
            if (lookahead == 'e')
                ADVANCE(296);
            if (lookahead == 'f')
                ADVANCE(20);
            if (lookahead == 'g')
                ADVANCE(33);
            if (lookahead == 'i')
                ADVANCE(300);
            if (lookahead == 'l')
                ADVANCE(80);
            if (lookahead == 'r')
                ADVANCE(45);
            if (lookahead == 's')
                ADVANCE(55);
            if (lookahead == 't')
                ADVANCE(324);
            if (lookahead == 'v')
                ADVANCE(83);
            if (lookahead == 'w')
                ADVANCE(328);
            if (lookahead == '{')
                ADVANCE(98);
            if (lookahead == '}')
                ADVANCE(134);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 1,
    [1] = 66,
    [2] = 1,
    [3] = 67,
    [4] = 67,
    [5] = 66,
    [6] = 70,
    [7] = 86,
    [8] = 97,
    [9] = 86,
    [10] = 86,
    [11] = 99,
    [12] = 100,
    [13] = 100,
    [14] = 100,
    [15] = 102,
    [16] = 105,
    [17] = 67,
    [18] = 67,
    [19] = 67,
    [20] = 67,
    [21] = 67,
    [22] = 97,
    [23] = 97,
    [24] = 122,
    [25] = 122,
    [26] = 135,
    [27] = 136,
    [28] = 67,
    [29] = 137,
    [30] = 138,
    [31] = 138,
    [32] = 67,
    [33] = 122,
    [34] = 138,
    [35] = 122,
    [36] = 147,
    [37] = 147,
    [38] = 152,
    [39] = 152,
    [40] = 153,
    [41] = 136,
    [42] = 99,
    [43] = 99,
    [44] = 155,
    [45] = 147,
    [46] = 147,
    [47] = 155,
    [48] = 155,
    [49] = 99,
    [50] = 147,
    [51] = 156,
    [52] = 147,
    [53] = 147,
    [54] = 147,
    [55] = 99,
    [56] = 147,
    [57] = 157,
    [58] = 157,
    [59] = 158,
    [60] = 152,
    [61] = 153,
    [62] = 147,
    [63] = 136,
    [64] = 99,
    [65] = 99,
    [66] = 159,
    [67] = 157,
    [68] = 157,
    [69] = 159,
    [70] = 159,
    [71] = 99,
    [72] = 157,
    [73] = 160,
    [74] = 157,
    [75] = 157,
    [76] = 157,
    [77] = 99,
    [78] = 157,
    [79] = 158,
    [80] = 157,
    [81] = 157,
    [82] = 99,
    [83] = 160,
    [84] = 157,
    [85] = 147,
    [86] = 158,
    [87] = 136,
    [88] = 157,
    [89] = 158,
    [90] = 99,
    [91] = 152,
    [92] = 152,
    [93] = 99,
    [94] = 156,
    [95] = 147,
    [96] = 137,
    [97] = 136,
    [98] = 138,
    [99] = 122,
    [100] = 147,
    [101] = 137,
    [102] = 138,
    [103] = 122,
    [104] = 67,
    [105] = 135,
    [106] = 161,
    [107] = 166,
    [108] = 166,
    [109] = 166,
    [110] = 166,
    [111] = 136,
    [112] = 167,
    [113] = 136,
    [114] = 166,
    [115] = 166,
    [116] = 168,
    [117] = 168,
    [118] = 152,
    [119] = 153,
    [120] = 136,
    [121] = 99,
    [122] = 99,
    [123] = 170,
    [124] = 168,
    [125] = 168,
    [126] = 170,
    [127] = 170,
    [128] = 99,
    [129] = 168,
    [130] = 171,
    [131] = 168,
    [132] = 168,
    [133] = 168,
    [134] = 99,
    [135] = 168,
    [136] = 158,
    [137] = 168,
    [138] = 168,
    [139] = 99,
    [140] = 171,
    [141] = 168,
    [142] = 99,
    [143] = 166,
    [144] = 166,
    [145] = 136,
    [146] = 166,
    [147] = 168,
    [148] = 99,
    [149] = 166,
    [150] = 166,
    [151] = 166,
    [152] = 172,
    [153] = 231,
    [154] = 232,
    [155] = 231,
    [156] = 158,
    [157] = 166,
    [158] = 172,
    [159] = 231,
    [160] = 232,
    [161] = 231,
    [162] = 158,
    [163] = 158,
    [164] = 166,
    [165] = 158,
    [166] = 166,
    [167] = 168,
    [168] = 99,
    [169] = 166,
    [170] = 238,
    [171] = 166,
    [172] = 161,
    [173] = 238,
    [174] = 166,
    [175] = 161,
    [176] = 99,
    [177] = 161,
    [178] = 161,
    [179] = 161,
    [180] = 97,
    [181] = 67,
    [182] = 245,
    [183] = 245,
    [184] = 67,
    [185] = 135,
    [186] = 67,
    [187] = 67,
    [188] = 245,
    [189] = 135,
    [190] = 97,
    [191] = 246,
    [192] = 246,
    [193] = 246,
    [194] = 246,
    [195] = 136,
    [196] = 167,
    [197] = 136,
    [198] = 246,
    [199] = 246,
    [200] = 168,
    [201] = 99,
    [202] = 246,
    [203] = 246,
    [204] = 136,
    [205] = 246,
    [206] = 168,
    [207] = 99,
    [208] = 246,
    [209] = 246,
    [210] = 246,
    [211] = 172,
    [212] = 231,
    [213] = 232,
    [214] = 231,
    [215] = 158,
    [216] = 246,
    [217] = 246,
    [218] = 158,
    [219] = 246,
    [220] = 168,
    [221] = 99,
    [222] = 246,
    [223] = 238,
    [224] = 246,
    [225] = 97,
    [226] = 238,
    [227] = 246,
    [228] = 97,
    [229] = 99,
    [230] = 97,
    [231] = 97,
    [232] = 97,
    [233] = 247,
    [234] = 245,
    [235] = 135,
    [236] = 247,
    [237] = 247,
    [238] = 249,
    [239] = 67,
    [240] = 250,
    [241] = 245,
    [242] = 135,
    [243] = 250,
    [244] = 250,
    [245] = 99,
    [246] = 67,
    [247] = 97,
    [248] = 67,
    [249] = 251,
    [250] = 97,
    [251] = 251,
    [252] = 99,
    [253] = 252,
    [254] = 252,
    [255] = 255,
    [256] = 152,
    [257] = 256,
    [258] = 257,
    [259] = 136,
    [260] = 136,
    [261] = 136,
    [262] = 99,
    [263] = 99,
    [264] = 258,
    [265] = 252,
    [266] = 252,
    [267] = 259,
    [268] = 259,
    [269] = 99,
    [270] = 252,
    [271] = 260,
    [272] = 252,
    [273] = 153,
    [274] = 158,
    [275] = 252,
    [276] = 252,
    [277] = 252,
    [278] = 259,
    [279] = 252,
    [280] = 99,
    [281] = 252,
    [282] = 252,
    [283] = 261,
    [284] = 99,
    [285] = 99,
    [286] = 261,
    [287] = 261,
    [288] = 262,
    [289] = 262,
    [290] = 99,
    [291] = 261,
    [292] = 97,
    [293] = 67,
    [294] = 99,
    [295] = 97,
    [296] = 67,
    [297] = 251,
    [298] = 158,
    [299] = 263,
    [300] = 256,
    [301] = 136,
    [302] = 264,
    [303] = 251,
    [304] = 265,
    [305] = 251,
    [306] = 158,
    [307] = 158,
    [308] = 265,
    [309] = 158,
    [310] = 251,
    [311] = 99,
    [312] = 266,
    [313] = 266,
    [314] = 251,
    [315] = 97,
    [316] = 67,
    [317] = 256,
    [318] = 251,
    [319] = 265,
    [320] = 158,
    [321] = 251,
    [322] = 267,
    [323] = 97,
    [324] = 267,
    [325] = 97,
    [326] = 99,
    [327] = 260,
    [328] = 252,
    [329] = 261,
    [330] = 99,
    [331] = 97,
    [332] = 67,
    [333] = 137,
    [334] = 137,
    [335] = 97,
    [336] = 99,
    [337] = 97,
    [338] = 97,
    [339] = 268,
    [340] = 268,
    [341] = 99,
    [342] = 97,
    [343] = 251,
    [344] = 245,
    [345] = 135,
    [346] = 251,
    [347] = 251,
    [348] = 67,
    [349] = 256,
    [350] = 251,
    [351] = 267,
    [352] = 97,
    [353] = 1,
    [354] = 66,
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
        [sym__declaration] = ACTIONS(SHIFT(3)),
        [sym_identifier] = ACTIONS(SHIFT(15)),
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
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(354)),
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
        [sym__declaration] = ACTIONS(SHIFT(3)),
        [sym_identifier] = ACTIONS(SHIFT(15)),
    },
    [3] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(353)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(SHIFT(353)),
    },
    [4] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym__loop_statement, 1)),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_program, 1)),
    },
    [6] = {
        [sym__for_init] = ACTIONS(SHIFT(249)),
        [sym__for_condition] = ACTIONS(SHIFT(250)),
        [sym_variable_declaration] = ACTIONS(SHIFT(251)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(252)),
        [sym__pattern] = ACTIONS(SHIFT(253)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(254)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(254)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(254)),
        [sym_optional_pattern] = ACTIONS(SHIFT(254)),
        [sym_is_pattern] = ACTIONS(SHIFT(254)),
        [sym_as_pattern] = ACTIONS(SHIFT(254)),
        [sym__expression] = ACTIONS(SHIFT(255)),
        [sym__expression_list] = ACTIONS(SHIFT(251)),
        [sym__type_identifier] = ACTIONS(SHIFT(256)),
        [sym__type_name] = ACTIONS(SHIFT(39)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(257)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(258)),
        [anon_sym_case] = ACTIONS(SHIFT(259)),
        [anon_sym_let] = ACTIONS(SHIFT(260)),
        [anon_sym_var] = ACTIONS(SHIFT(261)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(254)),
        [anon_sym_DOT] = ACTIONS(SHIFT(262)),
        [anon_sym_is] = ACTIONS(SHIFT(263)),
        [sym_identifier] = ACTIONS(SHIFT(264)),
    },
    [7] = {
        [sym__condition_clause] = ACTIONS(SHIFT(247)),
        [sym__condition] = ACTIONS(SHIFT(191)),
        [sym_availability_condition] = ACTIONS(SHIFT(192)),
        [sym_case_condition] = ACTIONS(SHIFT(193)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(193)),
        [sym__expression] = ACTIONS(SHIFT(194)),
        [anon_sym_case] = ACTIONS(SHIFT(195)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(196)),
        [anon_sym_let] = ACTIONS(SHIFT(197)),
        [anon_sym_var] = ACTIONS(SHIFT(197)),
        [sym_identifier] = ACTIONS(SHIFT(198)),
    },
    [8] = {
        [sym__code_block] = ACTIONS(SHIFT(240)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(241)),
    },
    [9] = {
        [sym__condition_clause] = ACTIONS(SHIFT(190)),
        [sym__condition] = ACTIONS(SHIFT(191)),
        [sym_availability_condition] = ACTIONS(SHIFT(192)),
        [sym_case_condition] = ACTIONS(SHIFT(193)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(193)),
        [sym__expression] = ACTIONS(SHIFT(194)),
        [anon_sym_case] = ACTIONS(SHIFT(195)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(196)),
        [anon_sym_let] = ACTIONS(SHIFT(197)),
        [anon_sym_var] = ACTIONS(SHIFT(197)),
        [sym_identifier] = ACTIONS(SHIFT(198)),
    },
    [10] = {
        [sym__condition_clause] = ACTIONS(SHIFT(106)),
        [sym__condition] = ACTIONS(SHIFT(107)),
        [sym_availability_condition] = ACTIONS(SHIFT(108)),
        [sym_case_condition] = ACTIONS(SHIFT(109)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(109)),
        [sym__expression] = ACTIONS(SHIFT(110)),
        [anon_sym_case] = ACTIONS(SHIFT(111)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(112)),
        [anon_sym_let] = ACTIONS(SHIFT(113)),
        [anon_sym_var] = ACTIONS(SHIFT(113)),
        [sym_identifier] = ACTIONS(SHIFT(114)),
    },
    [11] = {
        [sym__expression] = ACTIONS(SHIFT(22)),
        [sym_identifier] = ACTIONS(SHIFT(23)),
    },
    [12] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(21)),
    },
    [13] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_continue_statement, 1)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_continue_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(20)),
    },
    [14] = {
        [sym__expression] = ACTIONS(SHIFT(18)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_return_statement, 1)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_return_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(19)),
    },
    [15] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(SHIFT(16)),
    },
    [16] = {
        [sym__loop_statement] = ACTIONS(SHIFT(17)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(17)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
    },
    [17] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
    },
    [18] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_return_statement, 2)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_return_statement, 2)),
    },
    [19] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [20] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_continue_statement, 2)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_continue_statement, 2)),
    },
    [21] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_break_statement, 2)),
    },
    [22] = {
        [anon_sym_LBRACE] = ACTIONS(SHIFT(24)),
    },
    [23] = {
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [24] = {
        [sym_case_statement] = ACTIONS(SHIFT(25)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(26)),
        [anon_sym_case] = ACTIONS(SHIFT(27)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(28)),
        [anon_sym_default] = ACTIONS(SHIFT(29)),
    },
    [25] = {
        [sym_case_statement] = ACTIONS(SHIFT(25)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(105)),
        [anon_sym_case] = ACTIONS(SHIFT(27)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 1)),
        [anon_sym_default] = ACTIONS(SHIFT(29)),
    },
    [26] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(104)),
    },
    [27] = {
        [sym__pattern] = ACTIONS(SHIFT(36)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(37)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(37)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(37)),
        [sym_optional_pattern] = ACTIONS(SHIFT(37)),
        [sym_is_pattern] = ACTIONS(SHIFT(37)),
        [sym_as_pattern] = ACTIONS(SHIFT(37)),
        [sym__expression] = ACTIONS(SHIFT(37)),
        [sym__type_identifier] = ACTIONS(SHIFT(38)),
        [sym__type_name] = ACTIONS(SHIFT(39)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(40)),
        [anon_sym_let] = ACTIONS(SHIFT(41)),
        [anon_sym_var] = ACTIONS(SHIFT(41)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(37)),
        [anon_sym_DOT] = ACTIONS(SHIFT(42)),
        [anon_sym_is] = ACTIONS(SHIFT(43)),
        [sym_identifier] = ACTIONS(SHIFT(44)),
    },
    [28] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_switch_statement, 4)),
    },
    [29] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(30)),
    },
    [30] = {
        [sym__statement] = ACTIONS(SHIFT(31)),
        [sym__loop_statement] = ACTIONS(SHIFT(32)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(32)),
        [sym_guard_statement] = ACTIONS(SHIFT(32)),
        [sym_switch_statement] = ACTIONS(SHIFT(32)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [sym_labeled_statement] = ACTIONS(SHIFT(32)),
        [sym_break_statement] = ACTIONS(SHIFT(32)),
        [sym_continue_statement] = ACTIONS(SHIFT(32)),
        [sym_return_statement] = ACTIONS(SHIFT(32)),
        [sym__expression] = ACTIONS(SHIFT(32)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(33)),
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
        [sym_fallthrough_statement] = ACTIONS(SHIFT(32)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [sym__declaration] = ACTIONS(SHIFT(32)),
        [sym_identifier] = ACTIONS(SHIFT(15)),
    },
    [31] = {
        [sym__statement] = ACTIONS(SHIFT(31)),
        [sym__loop_statement] = ACTIONS(SHIFT(32)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(32)),
        [sym_guard_statement] = ACTIONS(SHIFT(32)),
        [sym_switch_statement] = ACTIONS(SHIFT(32)),
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [sym_labeled_statement] = ACTIONS(SHIFT(32)),
        [sym_break_statement] = ACTIONS(SHIFT(32)),
        [sym_continue_statement] = ACTIONS(SHIFT(32)),
        [sym_return_statement] = ACTIONS(SHIFT(32)),
        [sym__expression] = ACTIONS(SHIFT(32)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(35)),
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
        [sym_fallthrough_statement] = ACTIONS(SHIFT(32)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [sym__declaration] = ACTIONS(SHIFT(32)),
        [sym_identifier] = ACTIONS(SHIFT(15)),
    },
    [32] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(34)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(SHIFT(34)),
    },
    [33] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 3)),
    },
    [34] = {
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
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [35] = {
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_case] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [36] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(96)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(97)),
        [anon_sym_COLON] = ACTIONS(SHIFT(98)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(54)),
        [anon_sym_as] = ACTIONS(SHIFT(55)),
    },
    [37] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [38] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(93)),
    },
    [39] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(90)),
    },
    [40] = {
        [sym__pattern] = ACTIONS(SHIFT(57)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(58)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(58)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(59)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(58)),
        [sym_optional_pattern] = ACTIONS(SHIFT(58)),
        [sym_is_pattern] = ACTIONS(SHIFT(58)),
        [sym_as_pattern] = ACTIONS(SHIFT(58)),
        [sym__expression] = ACTIONS(SHIFT(58)),
        [sym__type_identifier] = ACTIONS(SHIFT(60)),
        [sym__type_name] = ACTIONS(SHIFT(39)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(61)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(62)),
        [anon_sym_let] = ACTIONS(SHIFT(63)),
        [anon_sym_var] = ACTIONS(SHIFT(63)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(58)),
        [anon_sym_DOT] = ACTIONS(SHIFT(64)),
        [anon_sym_is] = ACTIONS(SHIFT(65)),
        [sym_identifier] = ACTIONS(SHIFT(66)),
    },
    [41] = {
        [sym__pattern] = ACTIONS(SHIFT(53)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(37)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(37)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(37)),
        [sym_optional_pattern] = ACTIONS(SHIFT(37)),
        [sym_is_pattern] = ACTIONS(SHIFT(37)),
        [sym_as_pattern] = ACTIONS(SHIFT(37)),
        [sym__expression] = ACTIONS(SHIFT(37)),
        [sym__type_identifier] = ACTIONS(SHIFT(38)),
        [sym__type_name] = ACTIONS(SHIFT(39)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(40)),
        [anon_sym_let] = ACTIONS(SHIFT(41)),
        [anon_sym_var] = ACTIONS(SHIFT(41)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(37)),
        [anon_sym_DOT] = ACTIONS(SHIFT(42)),
        [anon_sym_is] = ACTIONS(SHIFT(43)),
        [sym_identifier] = ACTIONS(SHIFT(44)),
    },
    [42] = {
        [sym_identifier] = ACTIONS(SHIFT(51)),
    },
    [43] = {
        [sym_type] = ACTIONS(SHIFT(45)),
        [sym__type_identifier] = ACTIONS(SHIFT(46)),
        [sym__type_name] = ACTIONS(SHIFT(47)),
        [sym_identifier] = ACTIONS(SHIFT(48)),
    },
    [44] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [45] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [46] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [47] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(49)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [48] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [49] = {
        [sym__type_identifier] = ACTIONS(SHIFT(50)),
        [sym__type_name] = ACTIONS(SHIFT(47)),
        [sym_identifier] = ACTIONS(SHIFT(48)),
    },
    [50] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [51] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(52)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(40)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [52] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [53] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(54)),
        [anon_sym_as] = ACTIONS(SHIFT(55)),
    },
    [54] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [55] = {
        [sym_type] = ACTIONS(SHIFT(56)),
        [sym__type_identifier] = ACTIONS(SHIFT(46)),
        [sym__type_name] = ACTIONS(SHIFT(47)),
        [sym_identifier] = ACTIONS(SHIFT(48)),
    },
    [56] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [57] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(86)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(87)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(76)),
        [anon_sym_as] = ACTIONS(SHIFT(77)),
    },
    [58] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [59] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(85)),
    },
    [60] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(82)),
    },
    [61] = {
        [sym__pattern] = ACTIONS(SHIFT(57)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(58)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(58)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(79)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(58)),
        [sym_optional_pattern] = ACTIONS(SHIFT(58)),
        [sym_is_pattern] = ACTIONS(SHIFT(58)),
        [sym_as_pattern] = ACTIONS(SHIFT(58)),
        [sym__expression] = ACTIONS(SHIFT(58)),
        [sym__type_identifier] = ACTIONS(SHIFT(60)),
        [sym__type_name] = ACTIONS(SHIFT(39)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(61)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(80)),
        [anon_sym_let] = ACTIONS(SHIFT(63)),
        [anon_sym_var] = ACTIONS(SHIFT(63)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(58)),
        [anon_sym_DOT] = ACTIONS(SHIFT(64)),
        [anon_sym_is] = ACTIONS(SHIFT(65)),
        [sym_identifier] = ACTIONS(SHIFT(66)),
    },
    [62] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [63] = {
        [sym__pattern] = ACTIONS(SHIFT(75)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(58)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(58)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(58)),
        [sym_optional_pattern] = ACTIONS(SHIFT(58)),
        [sym_is_pattern] = ACTIONS(SHIFT(58)),
        [sym_as_pattern] = ACTIONS(SHIFT(58)),
        [sym__expression] = ACTIONS(SHIFT(58)),
        [sym__type_identifier] = ACTIONS(SHIFT(60)),
        [sym__type_name] = ACTIONS(SHIFT(39)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(61)),
        [anon_sym_let] = ACTIONS(SHIFT(63)),
        [anon_sym_var] = ACTIONS(SHIFT(63)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(58)),
        [anon_sym_DOT] = ACTIONS(SHIFT(64)),
        [anon_sym_is] = ACTIONS(SHIFT(65)),
        [sym_identifier] = ACTIONS(SHIFT(66)),
    },
    [64] = {
        [sym_identifier] = ACTIONS(SHIFT(73)),
    },
    [65] = {
        [sym_type] = ACTIONS(SHIFT(67)),
        [sym__type_identifier] = ACTIONS(SHIFT(68)),
        [sym__type_name] = ACTIONS(SHIFT(69)),
        [sym_identifier] = ACTIONS(SHIFT(70)),
    },
    [66] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [67] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [68] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [69] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(71)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [70] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [71] = {
        [sym__type_identifier] = ACTIONS(SHIFT(72)),
        [sym__type_name] = ACTIONS(SHIFT(69)),
        [sym_identifier] = ACTIONS(SHIFT(70)),
    },
    [72] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [73] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(74)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(61)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [74] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [75] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(76)),
        [anon_sym_as] = ACTIONS(SHIFT(77)),
    },
    [76] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [77] = {
        [sym_type] = ACTIONS(SHIFT(78)),
        [sym__type_identifier] = ACTIONS(SHIFT(68)),
        [sym__type_name] = ACTIONS(SHIFT(69)),
        [sym_identifier] = ACTIONS(SHIFT(70)),
    },
    [78] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [79] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(81)),
    },
    [80] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [81] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [82] = {
        [sym_identifier] = ACTIONS(SHIFT(83)),
    },
    [83] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(84)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(61)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [84] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [85] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [86] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 2)),
    },
    [87] = {
        [sym__pattern] = ACTIONS(SHIFT(88)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(58)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(58)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(58)),
        [sym_optional_pattern] = ACTIONS(SHIFT(58)),
        [sym_is_pattern] = ACTIONS(SHIFT(58)),
        [sym_as_pattern] = ACTIONS(SHIFT(58)),
        [sym__expression] = ACTIONS(SHIFT(58)),
        [sym__type_identifier] = ACTIONS(SHIFT(60)),
        [sym__type_name] = ACTIONS(SHIFT(39)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(61)),
        [anon_sym_let] = ACTIONS(SHIFT(63)),
        [anon_sym_var] = ACTIONS(SHIFT(63)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(58)),
        [anon_sym_DOT] = ACTIONS(SHIFT(64)),
        [anon_sym_is] = ACTIONS(SHIFT(65)),
        [sym_identifier] = ACTIONS(SHIFT(66)),
    },
    [88] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(89)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(87)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(76)),
        [anon_sym_as] = ACTIONS(SHIFT(77)),
    },
    [89] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [90] = {
        [sym__type_identifier] = ACTIONS(SHIFT(91)),
        [sym__type_name] = ACTIONS(SHIFT(39)),
        [sym_identifier] = ACTIONS(SHIFT(92)),
    },
    [91] = {
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [92] = {
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [93] = {
        [sym_identifier] = ACTIONS(SHIFT(94)),
    },
    [94] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(95)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(40)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [95] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [96] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(102)),
    },
    [97] = {
        [sym__pattern] = ACTIONS(SHIFT(100)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(37)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(37)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(37)),
        [sym_optional_pattern] = ACTIONS(SHIFT(37)),
        [sym_is_pattern] = ACTIONS(SHIFT(37)),
        [sym_as_pattern] = ACTIONS(SHIFT(37)),
        [sym__expression] = ACTIONS(SHIFT(37)),
        [sym__type_identifier] = ACTIONS(SHIFT(38)),
        [sym__type_name] = ACTIONS(SHIFT(39)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(40)),
        [anon_sym_let] = ACTIONS(SHIFT(41)),
        [anon_sym_var] = ACTIONS(SHIFT(41)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(37)),
        [anon_sym_DOT] = ACTIONS(SHIFT(42)),
        [anon_sym_is] = ACTIONS(SHIFT(43)),
        [sym_identifier] = ACTIONS(SHIFT(44)),
    },
    [98] = {
        [sym__statement] = ACTIONS(SHIFT(31)),
        [sym__loop_statement] = ACTIONS(SHIFT(32)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(32)),
        [sym_guard_statement] = ACTIONS(SHIFT(32)),
        [sym_switch_statement] = ACTIONS(SHIFT(32)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [sym_labeled_statement] = ACTIONS(SHIFT(32)),
        [sym_break_statement] = ACTIONS(SHIFT(32)),
        [sym_continue_statement] = ACTIONS(SHIFT(32)),
        [sym_return_statement] = ACTIONS(SHIFT(32)),
        [sym__expression] = ACTIONS(SHIFT(32)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(99)),
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
        [sym_fallthrough_statement] = ACTIONS(SHIFT(32)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [sym__declaration] = ACTIONS(SHIFT(32)),
        [sym_identifier] = ACTIONS(SHIFT(15)),
    },
    [99] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 4)),
    },
    [100] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(101)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(97)),
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(54)),
        [anon_sym_as] = ACTIONS(SHIFT(55)),
    },
    [101] = {
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [102] = {
        [sym__statement] = ACTIONS(SHIFT(31)),
        [sym__loop_statement] = ACTIONS(SHIFT(32)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(32)),
        [sym_guard_statement] = ACTIONS(SHIFT(32)),
        [sym_switch_statement] = ACTIONS(SHIFT(32)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [sym_labeled_statement] = ACTIONS(SHIFT(32)),
        [sym_break_statement] = ACTIONS(SHIFT(32)),
        [sym_continue_statement] = ACTIONS(SHIFT(32)),
        [sym_return_statement] = ACTIONS(SHIFT(32)),
        [sym__expression] = ACTIONS(SHIFT(32)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(103)),
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
        [sym_fallthrough_statement] = ACTIONS(SHIFT(32)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [sym__declaration] = ACTIONS(SHIFT(32)),
        [sym_identifier] = ACTIONS(SHIFT(15)),
    },
    [103] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 5)),
    },
    [104] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_switch_statement, 5)),
    },
    [105] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 2)),
    },
    [106] = {
        [anon_sym_else] = ACTIONS(SHIFT(180)),
    },
    [107] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(179)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(173)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [108] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1), SHIFT(176)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [109] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [110] = {
        [anon_sym_COMMA] = ACTIONS(SHIFT(170)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [111] = {
        [sym__pattern] = ACTIONS(SHIFT(167)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(117)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(117)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(117)),
        [sym_optional_pattern] = ACTIONS(SHIFT(117)),
        [sym_is_pattern] = ACTIONS(SHIFT(117)),
        [sym_as_pattern] = ACTIONS(SHIFT(117)),
        [sym__expression] = ACTIONS(SHIFT(117)),
        [sym__type_identifier] = ACTIONS(SHIFT(118)),
        [sym__type_name] = ACTIONS(SHIFT(39)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(119)),
        [anon_sym_let] = ACTIONS(SHIFT(120)),
        [anon_sym_var] = ACTIONS(SHIFT(120)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(117)),
        [anon_sym_DOT] = ACTIONS(SHIFT(121)),
        [anon_sym_is] = ACTIONS(SHIFT(122)),
        [sym_identifier] = ACTIONS(SHIFT(123)),
    },
    [112] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(152)),
    },
    [113] = {
        [sym_optional_binding] = ACTIONS(SHIFT(115)),
        [sym__pattern] = ACTIONS(SHIFT(116)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(117)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(117)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(117)),
        [sym_optional_pattern] = ACTIONS(SHIFT(117)),
        [sym_is_pattern] = ACTIONS(SHIFT(117)),
        [sym_as_pattern] = ACTIONS(SHIFT(117)),
        [sym__expression] = ACTIONS(SHIFT(117)),
        [sym__type_identifier] = ACTIONS(SHIFT(118)),
        [sym__type_name] = ACTIONS(SHIFT(39)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(119)),
        [anon_sym_let] = ACTIONS(SHIFT(120)),
        [anon_sym_var] = ACTIONS(SHIFT(120)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(117)),
        [anon_sym_DOT] = ACTIONS(SHIFT(121)),
        [anon_sym_is] = ACTIONS(SHIFT(122)),
        [sym_identifier] = ACTIONS(SHIFT(123)),
    },
    [114] = {
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [115] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(145)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
    },
    [116] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(142)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(133)),
        [anon_sym_as] = ACTIONS(SHIFT(134)),
    },
    [117] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [118] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(139)),
    },
    [119] = {
        [sym__pattern] = ACTIONS(SHIFT(57)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(58)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(58)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(136)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(58)),
        [sym_optional_pattern] = ACTIONS(SHIFT(58)),
        [sym_is_pattern] = ACTIONS(SHIFT(58)),
        [sym_as_pattern] = ACTIONS(SHIFT(58)),
        [sym__expression] = ACTIONS(SHIFT(58)),
        [sym__type_identifier] = ACTIONS(SHIFT(60)),
        [sym__type_name] = ACTIONS(SHIFT(39)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(61)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(137)),
        [anon_sym_let] = ACTIONS(SHIFT(63)),
        [anon_sym_var] = ACTIONS(SHIFT(63)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(58)),
        [anon_sym_DOT] = ACTIONS(SHIFT(64)),
        [anon_sym_is] = ACTIONS(SHIFT(65)),
        [sym_identifier] = ACTIONS(SHIFT(66)),
    },
    [120] = {
        [sym__pattern] = ACTIONS(SHIFT(132)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(117)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(117)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(117)),
        [sym_optional_pattern] = ACTIONS(SHIFT(117)),
        [sym_is_pattern] = ACTIONS(SHIFT(117)),
        [sym_as_pattern] = ACTIONS(SHIFT(117)),
        [sym__expression] = ACTIONS(SHIFT(117)),
        [sym__type_identifier] = ACTIONS(SHIFT(118)),
        [sym__type_name] = ACTIONS(SHIFT(39)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(119)),
        [anon_sym_let] = ACTIONS(SHIFT(120)),
        [anon_sym_var] = ACTIONS(SHIFT(120)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(117)),
        [anon_sym_DOT] = ACTIONS(SHIFT(121)),
        [anon_sym_is] = ACTIONS(SHIFT(122)),
        [sym_identifier] = ACTIONS(SHIFT(123)),
    },
    [121] = {
        [sym_identifier] = ACTIONS(SHIFT(130)),
    },
    [122] = {
        [sym_type] = ACTIONS(SHIFT(124)),
        [sym__type_identifier] = ACTIONS(SHIFT(125)),
        [sym__type_name] = ACTIONS(SHIFT(126)),
        [sym_identifier] = ACTIONS(SHIFT(127)),
    },
    [123] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [124] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [125] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [126] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(128)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [127] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [128] = {
        [sym__type_identifier] = ACTIONS(SHIFT(129)),
        [sym__type_name] = ACTIONS(SHIFT(126)),
        [sym_identifier] = ACTIONS(SHIFT(127)),
    },
    [129] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [130] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(131)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(119)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [131] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [132] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(133)),
        [anon_sym_as] = ACTIONS(SHIFT(134)),
    },
    [133] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [134] = {
        [sym_type] = ACTIONS(SHIFT(135)),
        [sym__type_identifier] = ACTIONS(SHIFT(125)),
        [sym__type_name] = ACTIONS(SHIFT(126)),
        [sym_identifier] = ACTIONS(SHIFT(127)),
    },
    [135] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [136] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(138)),
    },
    [137] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [138] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [139] = {
        [sym_identifier] = ACTIONS(SHIFT(140)),
    },
    [140] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(141)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(119)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [141] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [142] = {
        [sym__expression] = ACTIONS(SHIFT(143)),
        [sym_identifier] = ACTIONS(SHIFT(144)),
    },
    [143] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [144] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [145] = {
        [sym_optional_binding] = ACTIONS(SHIFT(146)),
        [sym__pattern] = ACTIONS(SHIFT(147)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(117)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(117)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(117)),
        [sym_optional_pattern] = ACTIONS(SHIFT(117)),
        [sym_is_pattern] = ACTIONS(SHIFT(117)),
        [sym_as_pattern] = ACTIONS(SHIFT(117)),
        [sym__expression] = ACTIONS(SHIFT(117)),
        [sym__type_identifier] = ACTIONS(SHIFT(118)),
        [sym__type_name] = ACTIONS(SHIFT(39)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(119)),
        [anon_sym_let] = ACTIONS(SHIFT(120)),
        [anon_sym_var] = ACTIONS(SHIFT(120)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(117)),
        [anon_sym_DOT] = ACTIONS(SHIFT(121)),
        [anon_sym_is] = ACTIONS(SHIFT(122)),
        [sym_identifier] = ACTIONS(SHIFT(123)),
    },
    [146] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(SHIFT(151)),
        [anon_sym_COMMA] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
    },
    [147] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(148)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(133)),
        [anon_sym_as] = ACTIONS(SHIFT(134)),
    },
    [148] = {
        [sym__expression] = ACTIONS(SHIFT(149)),
        [sym_identifier] = ACTIONS(SHIFT(150)),
    },
    [149] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [150] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [151] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
    },
    [152] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(153)),
        [anon_sym_iOS] = ACTIONS(SHIFT(154)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(154)),
        [anon_sym_OSX] = ACTIONS(SHIFT(154)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(154)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(154)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(154)),
    },
    [153] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(165)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(166)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(158)),
    },
    [154] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(155)),
    },
    [155] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(156)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(157)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(158)),
    },
    [156] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(164)),
    },
    [157] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 5)),
    },
    [158] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(159)),
        [anon_sym_iOS] = ACTIONS(SHIFT(160)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(160)),
        [anon_sym_OSX] = ACTIONS(SHIFT(160)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(160)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(160)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(160)),
    },
    [159] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(163)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(158)),
    },
    [160] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(161)),
    },
    [161] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(162)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 3)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(158)),
    },
    [162] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 4)),
    },
    [163] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 3)),
    },
    [164] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 6)),
    },
    [165] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(157)),
    },
    [166] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 4)),
    },
    [167] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(168)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(133)),
        [anon_sym_as] = ACTIONS(SHIFT(134)),
    },
    [168] = {
        [sym__expression] = ACTIONS(SHIFT(169)),
        [sym_identifier] = ACTIONS(SHIFT(144)),
    },
    [169] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_case_condition, 4)),
    },
    [170] = {
        [sym__condition] = ACTIONS(SHIFT(171)),
        [sym_availability_condition] = ACTIONS(SHIFT(109)),
        [sym_case_condition] = ACTIONS(SHIFT(109)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(109)),
        [anon_sym_case] = ACTIONS(SHIFT(111)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(112)),
        [anon_sym_let] = ACTIONS(SHIFT(113)),
        [anon_sym_var] = ACTIONS(SHIFT(113)),
    },
    [171] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(172)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(173)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [172] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 4)),
    },
    [173] = {
        [sym__condition] = ACTIONS(SHIFT(174)),
        [sym_availability_condition] = ACTIONS(SHIFT(109)),
        [sym_case_condition] = ACTIONS(SHIFT(109)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(109)),
        [anon_sym_case] = ACTIONS(SHIFT(111)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(112)),
        [anon_sym_let] = ACTIONS(SHIFT(113)),
        [anon_sym_var] = ACTIONS(SHIFT(113)),
    },
    [174] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(175)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(173)),
        [anon_sym_else] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
    },
    [175] = {
        [anon_sym_else] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
    },
    [176] = {
        [sym__expression] = ACTIONS(SHIFT(177)),
        [sym_identifier] = ACTIONS(SHIFT(178)),
    },
    [177] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [178] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [179] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 2)),
    },
    [180] = {
        [sym__code_block] = ACTIONS(SHIFT(181)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(182)),
    },
    [181] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_guard_statement, 4)),
    },
    [182] = {
        [sym__statement] = ACTIONS(SHIFT(183)),
        [sym__loop_statement] = ACTIONS(SHIFT(184)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(184)),
        [sym_guard_statement] = ACTIONS(SHIFT(184)),
        [sym_switch_statement] = ACTIONS(SHIFT(184)),
        [sym_labeled_statement] = ACTIONS(SHIFT(184)),
        [sym_break_statement] = ACTIONS(SHIFT(184)),
        [sym_continue_statement] = ACTIONS(SHIFT(184)),
        [sym_return_statement] = ACTIONS(SHIFT(184)),
        [sym__expression] = ACTIONS(SHIFT(184)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(185)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(186)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(184)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [sym__declaration] = ACTIONS(SHIFT(184)),
        [sym_identifier] = ACTIONS(SHIFT(15)),
    },
    [183] = {
        [sym__statement] = ACTIONS(SHIFT(183)),
        [sym__loop_statement] = ACTIONS(SHIFT(184)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(184)),
        [sym_guard_statement] = ACTIONS(SHIFT(184)),
        [sym_switch_statement] = ACTIONS(SHIFT(184)),
        [sym_labeled_statement] = ACTIONS(SHIFT(184)),
        [sym_break_statement] = ACTIONS(SHIFT(184)),
        [sym_continue_statement] = ACTIONS(SHIFT(184)),
        [sym_return_statement] = ACTIONS(SHIFT(184)),
        [sym__expression] = ACTIONS(SHIFT(184)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(189)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(184)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [sym__declaration] = ACTIONS(SHIFT(184)),
        [sym_identifier] = ACTIONS(SHIFT(15)),
    },
    [184] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(188)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(SHIFT(188)),
    },
    [185] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(187)),
    },
    [186] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [187] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [188] = {
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
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [189] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [190] = {
        [sym__code_block] = ACTIONS(SHIFT(233)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(234)),
    },
    [191] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(232)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(226)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [192] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1), SHIFT(229)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [193] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [194] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(223)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [195] = {
        [sym__pattern] = ACTIONS(SHIFT(220)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(117)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(117)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(117)),
        [sym_optional_pattern] = ACTIONS(SHIFT(117)),
        [sym_is_pattern] = ACTIONS(SHIFT(117)),
        [sym_as_pattern] = ACTIONS(SHIFT(117)),
        [sym__expression] = ACTIONS(SHIFT(117)),
        [sym__type_identifier] = ACTIONS(SHIFT(118)),
        [sym__type_name] = ACTIONS(SHIFT(39)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(119)),
        [anon_sym_let] = ACTIONS(SHIFT(120)),
        [anon_sym_var] = ACTIONS(SHIFT(120)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(117)),
        [anon_sym_DOT] = ACTIONS(SHIFT(121)),
        [anon_sym_is] = ACTIONS(SHIFT(122)),
        [sym_identifier] = ACTIONS(SHIFT(123)),
    },
    [196] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(211)),
    },
    [197] = {
        [sym_optional_binding] = ACTIONS(SHIFT(199)),
        [sym__pattern] = ACTIONS(SHIFT(200)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(117)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(117)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(117)),
        [sym_optional_pattern] = ACTIONS(SHIFT(117)),
        [sym_is_pattern] = ACTIONS(SHIFT(117)),
        [sym_as_pattern] = ACTIONS(SHIFT(117)),
        [sym__expression] = ACTIONS(SHIFT(117)),
        [sym__type_identifier] = ACTIONS(SHIFT(118)),
        [sym__type_name] = ACTIONS(SHIFT(39)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(119)),
        [anon_sym_let] = ACTIONS(SHIFT(120)),
        [anon_sym_var] = ACTIONS(SHIFT(120)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(117)),
        [anon_sym_DOT] = ACTIONS(SHIFT(121)),
        [anon_sym_is] = ACTIONS(SHIFT(122)),
        [sym_identifier] = ACTIONS(SHIFT(123)),
    },
    [198] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [199] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(204)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
    },
    [200] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(201)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(133)),
        [anon_sym_as] = ACTIONS(SHIFT(134)),
    },
    [201] = {
        [sym__expression] = ACTIONS(SHIFT(202)),
        [sym_identifier] = ACTIONS(SHIFT(203)),
    },
    [202] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [203] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [204] = {
        [sym_optional_binding] = ACTIONS(SHIFT(205)),
        [sym__pattern] = ACTIONS(SHIFT(206)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(117)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(117)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(117)),
        [sym_optional_pattern] = ACTIONS(SHIFT(117)),
        [sym_is_pattern] = ACTIONS(SHIFT(117)),
        [sym_as_pattern] = ACTIONS(SHIFT(117)),
        [sym__expression] = ACTIONS(SHIFT(117)),
        [sym__type_identifier] = ACTIONS(SHIFT(118)),
        [sym__type_name] = ACTIONS(SHIFT(39)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(119)),
        [anon_sym_let] = ACTIONS(SHIFT(120)),
        [anon_sym_var] = ACTIONS(SHIFT(120)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(117)),
        [anon_sym_DOT] = ACTIONS(SHIFT(121)),
        [anon_sym_is] = ACTIONS(SHIFT(122)),
        [sym_identifier] = ACTIONS(SHIFT(123)),
    },
    [205] = {
        [sym__code_block] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(SHIFT(210)),
        [anon_sym_COMMA] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
    },
    [206] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(207)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(133)),
        [anon_sym_as] = ACTIONS(SHIFT(134)),
    },
    [207] = {
        [sym__expression] = ACTIONS(SHIFT(208)),
        [sym_identifier] = ACTIONS(SHIFT(209)),
    },
    [208] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [209] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [210] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
    },
    [211] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(212)),
        [anon_sym_iOS] = ACTIONS(SHIFT(213)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(213)),
        [anon_sym_OSX] = ACTIONS(SHIFT(213)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(213)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(213)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(213)),
    },
    [212] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(218)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(219)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(158)),
    },
    [213] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(214)),
    },
    [214] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(215)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(216)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(158)),
    },
    [215] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(217)),
    },
    [216] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 5)),
    },
    [217] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 6)),
    },
    [218] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(216)),
    },
    [219] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 4)),
    },
    [220] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(221)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(133)),
        [anon_sym_as] = ACTIONS(SHIFT(134)),
    },
    [221] = {
        [sym__expression] = ACTIONS(SHIFT(222)),
        [sym_identifier] = ACTIONS(SHIFT(203)),
    },
    [222] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_case_condition, 4)),
    },
    [223] = {
        [sym__condition] = ACTIONS(SHIFT(224)),
        [sym_availability_condition] = ACTIONS(SHIFT(193)),
        [sym_case_condition] = ACTIONS(SHIFT(193)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(193)),
        [anon_sym_case] = ACTIONS(SHIFT(195)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(196)),
        [anon_sym_let] = ACTIONS(SHIFT(197)),
        [anon_sym_var] = ACTIONS(SHIFT(197)),
    },
    [224] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(225)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(226)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [225] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 4)),
    },
    [226] = {
        [sym__condition] = ACTIONS(SHIFT(227)),
        [sym_availability_condition] = ACTIONS(SHIFT(193)),
        [sym_case_condition] = ACTIONS(SHIFT(193)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(193)),
        [anon_sym_case] = ACTIONS(SHIFT(195)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(196)),
        [anon_sym_let] = ACTIONS(SHIFT(197)),
        [anon_sym_var] = ACTIONS(SHIFT(197)),
    },
    [227] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(228)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(226)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
    },
    [228] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
    },
    [229] = {
        [sym__expression] = ACTIONS(SHIFT(230)),
        [sym_identifier] = ACTIONS(SHIFT(231)),
    },
    [230] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [231] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [232] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 2)),
    },
    [233] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_else] = ACTIONS(SHIFT(238)),
    },
    [234] = {
        [sym__statement] = ACTIONS(SHIFT(183)),
        [sym__loop_statement] = ACTIONS(SHIFT(184)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(184)),
        [sym_guard_statement] = ACTIONS(SHIFT(184)),
        [sym_switch_statement] = ACTIONS(SHIFT(184)),
        [sym_labeled_statement] = ACTIONS(SHIFT(184)),
        [sym_break_statement] = ACTIONS(SHIFT(184)),
        [sym_continue_statement] = ACTIONS(SHIFT(184)),
        [sym_return_statement] = ACTIONS(SHIFT(184)),
        [sym__expression] = ACTIONS(SHIFT(184)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(235)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(236)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(184)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [sym__declaration] = ACTIONS(SHIFT(184)),
        [sym_identifier] = ACTIONS(SHIFT(15)),
    },
    [235] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(237)),
    },
    [236] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [237] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [238] = {
        [sym_if_statement] = ACTIONS(SHIFT(239)),
        [sym__code_block] = ACTIONS(SHIFT(239)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(182)),
    },
    [239] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_if_statement, 5)),
    },
    [240] = {
        [anon_sym_while] = ACTIONS(SHIFT(245)),
    },
    [241] = {
        [sym__statement] = ACTIONS(SHIFT(183)),
        [sym__loop_statement] = ACTIONS(SHIFT(184)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(184)),
        [sym_guard_statement] = ACTIONS(SHIFT(184)),
        [sym_switch_statement] = ACTIONS(SHIFT(184)),
        [sym_labeled_statement] = ACTIONS(SHIFT(184)),
        [sym_break_statement] = ACTIONS(SHIFT(184)),
        [sym_continue_statement] = ACTIONS(SHIFT(184)),
        [sym_return_statement] = ACTIONS(SHIFT(184)),
        [sym__expression] = ACTIONS(SHIFT(184)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(242)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(243)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(184)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [sym__declaration] = ACTIONS(SHIFT(184)),
        [sym_identifier] = ACTIONS(SHIFT(15)),
    },
    [242] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(244)),
    },
    [243] = {
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [244] = {
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [245] = {
        [sym__expression] = ACTIONS(SHIFT(246)),
        [sym_identifier] = ACTIONS(SHIFT(19)),
    },
    [246] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
    },
    [247] = {
        [sym__code_block] = ACTIONS(SHIFT(248)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(182)),
    },
    [248] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_while_statement, 3)),
    },
    [249] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(349)),
    },
    [250] = {
        [sym__code_block] = ACTIONS(SHIFT(348)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(182)),
    },
    [251] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__for_init, 1)),
    },
    [252] = {
        [sym__variable_name] = ACTIONS(SHIFT(333)),
        [sym_identifier] = ACTIONS(SHIFT(334)),
    },
    [253] = {
        [sym__type_annotation] = ACTIONS(SHIFT(329)),
        [anon_sym_in] = ACTIONS(SHIFT(330)),
        [anon_sym_COLON] = ACTIONS(SHIFT(285)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(279)),
        [anon_sym_as] = ACTIONS(SHIFT(280)),
    },
    [254] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [255] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(310)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(311)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [256] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(326)),
    },
    [257] = {
        [sym__expression] = ACTIONS(SHIFT(321)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(322)),
        [sym_identifier] = ACTIONS(SHIFT(305)),
    },
    [258] = {
        [sym__for_init] = ACTIONS(SHIFT(297)),
        [sym__for_condition] = ACTIONS(SHIFT(298)),
        [sym_variable_declaration] = ACTIONS(SHIFT(251)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(252)),
        [sym__pattern] = ACTIONS(SHIFT(57)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(58)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(58)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(274)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(58)),
        [sym_optional_pattern] = ACTIONS(SHIFT(58)),
        [sym_is_pattern] = ACTIONS(SHIFT(58)),
        [sym_as_pattern] = ACTIONS(SHIFT(58)),
        [sym__expression] = ACTIONS(SHIFT(299)),
        [sym__expression_list] = ACTIONS(SHIFT(251)),
        [sym__type_identifier] = ACTIONS(SHIFT(60)),
        [sym__type_name] = ACTIONS(SHIFT(39)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(300)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(61)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(275)),
        [anon_sym_let] = ACTIONS(SHIFT(63)),
        [anon_sym_var] = ACTIONS(SHIFT(301)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(58)),
        [anon_sym_DOT] = ACTIONS(SHIFT(64)),
        [anon_sym_is] = ACTIONS(SHIFT(65)),
        [sym_identifier] = ACTIONS(SHIFT(302)),
    },
    [259] = {
        [sym__pattern] = ACTIONS(SHIFT(282)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(254)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(254)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(254)),
        [sym_optional_pattern] = ACTIONS(SHIFT(254)),
        [sym_is_pattern] = ACTIONS(SHIFT(254)),
        [sym_as_pattern] = ACTIONS(SHIFT(254)),
        [sym__expression] = ACTIONS(SHIFT(254)),
        [sym__type_identifier] = ACTIONS(SHIFT(256)),
        [sym__type_name] = ACTIONS(SHIFT(39)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(273)),
        [anon_sym_let] = ACTIONS(SHIFT(260)),
        [anon_sym_var] = ACTIONS(SHIFT(260)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(254)),
        [anon_sym_DOT] = ACTIONS(SHIFT(262)),
        [anon_sym_is] = ACTIONS(SHIFT(263)),
        [sym_identifier] = ACTIONS(SHIFT(278)),
    },
    [260] = {
        [sym__pattern] = ACTIONS(SHIFT(277)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(254)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(254)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(254)),
        [sym_optional_pattern] = ACTIONS(SHIFT(254)),
        [sym_is_pattern] = ACTIONS(SHIFT(254)),
        [sym_as_pattern] = ACTIONS(SHIFT(254)),
        [sym__expression] = ACTIONS(SHIFT(254)),
        [sym__type_identifier] = ACTIONS(SHIFT(256)),
        [sym__type_name] = ACTIONS(SHIFT(39)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(273)),
        [anon_sym_let] = ACTIONS(SHIFT(260)),
        [anon_sym_var] = ACTIONS(SHIFT(260)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(254)),
        [anon_sym_DOT] = ACTIONS(SHIFT(262)),
        [anon_sym_is] = ACTIONS(SHIFT(263)),
        [sym_identifier] = ACTIONS(SHIFT(278)),
    },
    [261] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(277)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(254)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(254)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(254)),
        [sym_optional_pattern] = ACTIONS(SHIFT(254)),
        [sym_is_pattern] = ACTIONS(SHIFT(254)),
        [sym_as_pattern] = ACTIONS(SHIFT(254)),
        [sym__expression] = ACTIONS(SHIFT(254)),
        [sym__type_identifier] = ACTIONS(SHIFT(256)),
        [sym__type_name] = ACTIONS(SHIFT(39)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(273)),
        [anon_sym_let] = ACTIONS(SHIFT(260)),
        [anon_sym_var] = ACTIONS(SHIFT(260)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(254)),
        [anon_sym_DOT] = ACTIONS(SHIFT(262)),
        [anon_sym_is] = ACTIONS(SHIFT(263)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(278)),
    },
    [262] = {
        [sym_identifier] = ACTIONS(SHIFT(271)),
    },
    [263] = {
        [sym_type] = ACTIONS(SHIFT(265)),
        [sym__type_identifier] = ACTIONS(SHIFT(266)),
        [sym__type_name] = ACTIONS(SHIFT(267)),
        [sym_identifier] = ACTIONS(SHIFT(268)),
    },
    [264] = {
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
    [265] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [266] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [267] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(269)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [268] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [269] = {
        [sym__type_identifier] = ACTIONS(SHIFT(270)),
        [sym__type_name] = ACTIONS(SHIFT(267)),
        [sym_identifier] = ACTIONS(SHIFT(268)),
    },
    [270] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [271] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(272)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(273)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [272] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [273] = {
        [sym__pattern] = ACTIONS(SHIFT(57)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(58)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(58)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(274)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(58)),
        [sym_optional_pattern] = ACTIONS(SHIFT(58)),
        [sym_is_pattern] = ACTIONS(SHIFT(58)),
        [sym_as_pattern] = ACTIONS(SHIFT(58)),
        [sym__expression] = ACTIONS(SHIFT(58)),
        [sym__type_identifier] = ACTIONS(SHIFT(60)),
        [sym__type_name] = ACTIONS(SHIFT(39)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(61)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(275)),
        [anon_sym_let] = ACTIONS(SHIFT(63)),
        [anon_sym_var] = ACTIONS(SHIFT(63)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(58)),
        [anon_sym_DOT] = ACTIONS(SHIFT(64)),
        [anon_sym_is] = ACTIONS(SHIFT(65)),
        [sym_identifier] = ACTIONS(SHIFT(66)),
    },
    [274] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(276)),
    },
    [275] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [276] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [277] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(279)),
        [anon_sym_as] = ACTIONS(SHIFT(280)),
    },
    [278] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [279] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [280] = {
        [sym_type] = ACTIONS(SHIFT(281)),
        [sym__type_identifier] = ACTIONS(SHIFT(266)),
        [sym__type_name] = ACTIONS(SHIFT(267)),
        [sym_identifier] = ACTIONS(SHIFT(268)),
    },
    [281] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [282] = {
        [sym__type_annotation] = ACTIONS(SHIFT(283)),
        [anon_sym_in] = ACTIONS(SHIFT(284)),
        [anon_sym_COLON] = ACTIONS(SHIFT(285)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(279)),
        [anon_sym_as] = ACTIONS(SHIFT(280)),
    },
    [283] = {
        [anon_sym_in] = ACTIONS(SHIFT(294)),
    },
    [284] = {
        [sym__expression] = ACTIONS(SHIFT(292)),
        [sym_identifier] = ACTIONS(SHIFT(231)),
    },
    [285] = {
        [sym_type] = ACTIONS(SHIFT(286)),
        [sym__type_identifier] = ACTIONS(SHIFT(287)),
        [sym__type_name] = ACTIONS(SHIFT(288)),
        [sym_identifier] = ACTIONS(SHIFT(289)),
    },
    [286] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [287] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [288] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(290)),
    },
    [289] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [290] = {
        [sym__type_identifier] = ACTIONS(SHIFT(291)),
        [sym__type_name] = ACTIONS(SHIFT(288)),
        [sym_identifier] = ACTIONS(SHIFT(289)),
    },
    [291] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [292] = {
        [sym__code_block] = ACTIONS(SHIFT(293)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(182)),
    },
    [293] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
    },
    [294] = {
        [sym__expression] = ACTIONS(SHIFT(295)),
        [sym_identifier] = ACTIONS(SHIFT(231)),
    },
    [295] = {
        [sym__code_block] = ACTIONS(SHIFT(296)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(182)),
    },
    [296] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
    },
    [297] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(317)),
    },
    [298] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(315)),
    },
    [299] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(310)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1), SHIFT(311)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [300] = {
        [sym__expression] = ACTIONS(SHIFT(303)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(304)),
        [sym_identifier] = ACTIONS(SHIFT(305)),
    },
    [301] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(75)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(58)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(58)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(58)),
        [sym_optional_pattern] = ACTIONS(SHIFT(58)),
        [sym_is_pattern] = ACTIONS(SHIFT(58)),
        [sym_as_pattern] = ACTIONS(SHIFT(58)),
        [sym__expression] = ACTIONS(SHIFT(58)),
        [sym__type_identifier] = ACTIONS(SHIFT(60)),
        [sym__type_name] = ACTIONS(SHIFT(39)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(61)),
        [anon_sym_let] = ACTIONS(SHIFT(63)),
        [anon_sym_var] = ACTIONS(SHIFT(63)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(58)),
        [anon_sym_DOT] = ACTIONS(SHIFT(64)),
        [anon_sym_is] = ACTIONS(SHIFT(65)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(66)),
    },
    [302] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [303] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(308)),
    },
    [304] = {
        [sym__expression] = ACTIONS(SHIFT(306)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(307)),
    },
    [305] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [306] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [307] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [308] = {
        [sym__expression] = ACTIONS(SHIFT(309)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(307)),
    },
    [309] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [310] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 2)),
    },
    [311] = {
        [sym__expression] = ACTIONS(SHIFT(312)),
        [sym_identifier] = ACTIONS(SHIFT(313)),
    },
    [312] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(314)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(311)),
    },
    [313] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [314] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 3)),
    },
    [315] = {
        [sym__code_block] = ACTIONS(SHIFT(316)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(182)),
    },
    [316] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_for_statement, 5)),
    },
    [317] = {
        [sym__expression] = ACTIONS(SHIFT(318)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(308)),
        [sym_identifier] = ACTIONS(SHIFT(305)),
    },
    [318] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(319)),
    },
    [319] = {
        [sym__expression] = ACTIONS(SHIFT(320)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(307)),
    },
    [320] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [321] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(324)),
    },
    [322] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym__expression] = ACTIONS(SHIFT(323)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(231)),
    },
    [323] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [324] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym__expression] = ACTIONS(SHIFT(325)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(231)),
    },
    [325] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [326] = {
        [sym_identifier] = ACTIONS(SHIFT(327)),
    },
    [327] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(328)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(273)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [328] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [329] = {
        [anon_sym_in] = ACTIONS(SHIFT(284)),
    },
    [330] = {
        [sym__expression] = ACTIONS(SHIFT(331)),
        [sym_identifier] = ACTIONS(SHIFT(231)),
    },
    [331] = {
        [sym__code_block] = ACTIONS(SHIFT(332)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(182)),
    },
    [332] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
    },
    [333] = {
        [sym__type_annotation] = ACTIONS(SHIFT(335)),
        [anon_sym_COLON] = ACTIONS(SHIFT(336)),
    },
    [334] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__variable_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__variable_name, 1)),
    },
    [335] = {
        [sym__code_block] = ACTIONS(SHIFT(343)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(344)),
    },
    [336] = {
        [sym_type] = ACTIONS(SHIFT(337)),
        [sym__type_identifier] = ACTIONS(SHIFT(338)),
        [sym__type_name] = ACTIONS(SHIFT(339)),
        [sym_identifier] = ACTIONS(SHIFT(340)),
    },
    [337] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [338] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [339] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(341)),
    },
    [340] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [341] = {
        [sym__type_identifier] = ACTIONS(SHIFT(342)),
        [sym__type_name] = ACTIONS(SHIFT(339)),
        [sym_identifier] = ACTIONS(SHIFT(340)),
    },
    [342] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [343] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_variable_declaration, 4)),
    },
    [344] = {
        [sym__statement] = ACTIONS(SHIFT(183)),
        [sym__loop_statement] = ACTIONS(SHIFT(184)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(184)),
        [sym_guard_statement] = ACTIONS(SHIFT(184)),
        [sym_switch_statement] = ACTIONS(SHIFT(184)),
        [sym_labeled_statement] = ACTIONS(SHIFT(184)),
        [sym_break_statement] = ACTIONS(SHIFT(184)),
        [sym_continue_statement] = ACTIONS(SHIFT(184)),
        [sym_return_statement] = ACTIONS(SHIFT(184)),
        [sym__expression] = ACTIONS(SHIFT(184)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(345)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(346)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(184)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [sym__declaration] = ACTIONS(SHIFT(184)),
        [sym_identifier] = ACTIONS(SHIFT(15)),
    },
    [345] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(347)),
    },
    [346] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [347] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [348] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym_SLASH_BSLASHn_PLUS_SLASH] = ACTIONS(REDUCE(sym_for_statement, 3)),
    },
    [349] = {
        [sym__expression] = ACTIONS(SHIFT(350)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(324)),
        [sym_identifier] = ACTIONS(SHIFT(305)),
    },
    [350] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(351)),
    },
    [351] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym__expression] = ACTIONS(SHIFT(352)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(231)),
    },
    [352] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [353] = {
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
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [354] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_swift);
