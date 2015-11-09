#include "tree_sitter/parser.h"

#define STATE_COUNT 397
#define SYMBOL_COUNT 100

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
    sym_throw_statement,
    sym_defer_statement,
    sym_do_statement,
    sym_catch_clause,
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
    aux_sym_do_statement_repeat1,
    aux_sym__expression_list_repeat1,
    anon_sym_SEMI,
    aux_sym_SLASH_BSLASHn_SLASH,
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
    anon_sym_throw,
    anon_sym_defer,
    anon_sym_do,
    anon_sym_catch,
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
    [sym_throw_statement] = "throw_statement",
    [sym_defer_statement] = "defer_statement",
    [sym_do_statement] = "do_statement",
    [sym_catch_clause] = "catch_clause",
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
    [aux_sym_do_statement_repeat1] = "do_statement_repeat1",
    [aux_sym__expression_list_repeat1] = "_expression_list_repeat1",
    [ts_builtin_sym_error] = "ERROR",
    [ts_builtin_sym_end] = "END",
    [anon_sym_SEMI] = ";",
    [aux_sym_SLASH_BSLASHn_SLASH] = "/\n/",
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
    [anon_sym_throw] = "throw",
    [anon_sym_defer] = "defer",
    [anon_sym_do] = "do",
    [anon_sym_catch] = "catch",
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
    [sym_throw_statement] = TSNodeTypeNamed,
    [sym_defer_statement] = TSNodeTypeNamed,
    [sym_do_statement] = TSNodeTypeNamed,
    [sym_catch_clause] = TSNodeTypeNamed,
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
    [aux_sym_do_statement_repeat1] = TSNodeTypeHidden,
    [aux_sym__expression_list_repeat1] = TSNodeTypeHidden,
    [ts_builtin_sym_error] = TSNodeTypeNamed,
    [ts_builtin_sym_end] = TSNodeTypeHidden,
    [anon_sym_SEMI] = TSNodeTypeAnonymous,
    [aux_sym_SLASH_BSLASHn_SLASH] = TSNodeTypeHidden,
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
    [anon_sym_throw] = TSNodeTypeAnonymous,
    [anon_sym_defer] = TSNodeTypeAnonymous,
    [anon_sym_do] = TSNodeTypeAnonymous,
    [anon_sym_catch] = TSNodeTypeAnonymous,
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
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'b')
                ADVANCE(7);
            if (lookahead == 'c')
                ADVANCE(12);
            if (lookahead == 'd')
                ADVANCE(20);
            if (lookahead == 'f')
                ADVANCE(26);
            if (lookahead == 'g')
                ADVANCE(39);
            if (lookahead == 'i')
                ADVANCE(44);
            if (lookahead == 'r')
                ADVANCE(51);
            if (lookahead == 's')
                ADVANCE(61);
            if (lookahead == 't')
                ADVANCE(67);
            if (lookahead == 'w')
                ADVANCE(72);
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
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(21);
            if (lookahead == 'o')
                ADVANCE(25);
            ACCEPT_TOKEN(sym_identifier);
        case 21:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'f')
                ADVANCE(22);
            ACCEPT_TOKEN(sym_identifier);
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
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'r')
                ADVANCE(24);
            ACCEPT_TOKEN(sym_identifier);
        case 24:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_defer);
        case 25:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_do);
        case 26:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(27);
            if (lookahead == 'o')
                ADVANCE(37);
            ACCEPT_TOKEN(sym_identifier);
        case 27:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(28);
            ACCEPT_TOKEN(sym_identifier);
        case 28:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
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
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(31);
            ACCEPT_TOKEN(sym_identifier);
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
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(33);
            ACCEPT_TOKEN(sym_identifier);
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
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'g')
                ADVANCE(35);
            ACCEPT_TOKEN(sym_identifier);
        case 35:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier);
        case 36:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(sym_fallthrough_statement);
        case 37:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'r')
                ADVANCE(38);
            ACCEPT_TOKEN(sym_identifier);
        case 38:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_for);
        case 39:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'u')
                ADVANCE(40);
            ACCEPT_TOKEN(sym_identifier);
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
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'r')
                ADVANCE(42);
            ACCEPT_TOKEN(sym_identifier);
        case 42:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'd')
                ADVANCE(43);
            ACCEPT_TOKEN(sym_identifier);
        case 43:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_guard);
        case 44:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'f')
                ADVANCE(45);
            if (lookahead == 'm')
                ADVANCE(46);
            ACCEPT_TOKEN(sym_identifier);
        case 45:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_if);
        case 46:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(47);
            ACCEPT_TOKEN(sym_identifier);
        case 47:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(48);
            ACCEPT_TOKEN(sym_identifier);
        case 48:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'r')
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
            ACCEPT_TOKEN(sym__declaration);
        case 51:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(52);
            ACCEPT_TOKEN(sym_identifier);
        case 52:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(53);
            if (lookahead == 't')
                ADVANCE(57);
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
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(55);
            ACCEPT_TOKEN(sym_identifier);
        case 55:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(56);
            ACCEPT_TOKEN(sym_identifier);
        case 56:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_repeat);
        case 57:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'u')
                ADVANCE(58);
            ACCEPT_TOKEN(sym_identifier);
        case 58:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'r')
                ADVANCE(59);
            ACCEPT_TOKEN(sym_identifier);
        case 59:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(60);
            ACCEPT_TOKEN(sym_identifier);
        case 60:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_return);
        case 61:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'w')
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
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(64);
            ACCEPT_TOKEN(sym_identifier);
        case 64:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(65);
            ACCEPT_TOKEN(sym_identifier);
        case 65:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(66);
            ACCEPT_TOKEN(sym_identifier);
        case 66:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_switch);
        case 67:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(68);
            ACCEPT_TOKEN(sym_identifier);
        case 68:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'r')
                ADVANCE(69);
            ACCEPT_TOKEN(sym_identifier);
        case 69:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(70);
            ACCEPT_TOKEN(sym_identifier);
        case 70:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'w')
                ADVANCE(71);
            ACCEPT_TOKEN(sym_identifier);
        case 71:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_throw);
        case 72:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(73);
            ACCEPT_TOKEN(sym_identifier);
        case 73:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(74);
            ACCEPT_TOKEN(sym_identifier);
        case 74:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(75);
            ACCEPT_TOKEN(sym_identifier);
        case 75:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(76);
            ACCEPT_TOKEN(sym_identifier);
        case 76:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_while);
        case 77:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(77);
            LEX_ERROR();
        case 78:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(78);
            if (lookahead == '\n')
                ADVANCE(79);
            if (lookahead == ';')
                ADVANCE(80);
            LEX_ERROR();
        case 79:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 80:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 81:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(81);
            if (lookahead == '(')
                ADVANCE(82);
            if (lookahead == '.')
                ADVANCE(83);
            if (lookahead == ';')
                ADVANCE(80);
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
                ADVANCE(84);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'c')
                ADVANCE(85);
            if (lookahead == 'i')
                ADVANCE(89);
            if (lookahead == 'l')
                ADVANCE(91);
            if (lookahead == 'v')
                ADVANCE(94);
            LEX_ERROR();
        case 82:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 83:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 84:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(sym_wildcard_pattern);
        case 85:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(86);
            ACCEPT_TOKEN(sym_identifier);
        case 86:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(87);
            ACCEPT_TOKEN(sym_identifier);
        case 87:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(88);
            ACCEPT_TOKEN(sym_identifier);
        case 88:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_case);
        case 89:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(90);
            ACCEPT_TOKEN(sym_identifier);
        case 90:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_is);
        case 91:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(92);
            ACCEPT_TOKEN(sym_identifier);
        case 92:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(93);
            ACCEPT_TOKEN(sym_identifier);
        case 93:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_let);
        case 94:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(95);
            ACCEPT_TOKEN(sym_identifier);
        case 95:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'r')
                ADVANCE(96);
            ACCEPT_TOKEN(sym_identifier);
        case 96:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_var);
        case 97:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(97);
            if (lookahead == '#')
                ADVANCE(98);
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
                ADVANCE(85);
            if (lookahead == 'l')
                ADVANCE(91);
            if (lookahead == 'v')
                ADVANCE(94);
            LEX_ERROR();
        case 98:
            if (lookahead == 'a')
                ADVANCE(99);
            LEX_ERROR();
        case 99:
            if (lookahead == 'v')
                ADVANCE(100);
            LEX_ERROR();
        case 100:
            if (lookahead == 'a')
                ADVANCE(101);
            LEX_ERROR();
        case 101:
            if (lookahead == 'i')
                ADVANCE(102);
            LEX_ERROR();
        case 102:
            if (lookahead == 'l')
                ADVANCE(103);
            LEX_ERROR();
        case 103:
            if (lookahead == 'a')
                ADVANCE(104);
            LEX_ERROR();
        case 104:
            if (lookahead == 'b')
                ADVANCE(105);
            LEX_ERROR();
        case 105:
            if (lookahead == 'l')
                ADVANCE(106);
            LEX_ERROR();
        case 106:
            if (lookahead == 'e')
                ADVANCE(107);
            LEX_ERROR();
        case 107:
            ACCEPT_TOKEN(anon_sym_POUNDavailable);
        case 108:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(108);
            if (lookahead == '{')
                ADVANCE(109);
            LEX_ERROR();
        case 109:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 110:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(110);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 111:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(111);
            if (lookahead == '\n')
                ADVANCE(112);
            if (lookahead == ';')
                ADVANCE(80);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 112:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 113:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(113);
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == ':')
                ADVANCE(115);
            if (lookahead == ';')
                ADVANCE(80);
            LEX_ERROR();
        case 114:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 115:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 116:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(116);
            if (lookahead == 'f')
                ADVANCE(117);
            if (lookahead == 'i')
                ADVANCE(120);
            if (lookahead == 'r')
                ADVANCE(122);
            if (lookahead == 'w')
                ADVANCE(128);
            LEX_ERROR();
        case 117:
            if (lookahead == 'o')
                ADVANCE(118);
            LEX_ERROR();
        case 118:
            if (lookahead == 'r')
                ADVANCE(119);
            LEX_ERROR();
        case 119:
            ACCEPT_TOKEN(anon_sym_for);
        case 120:
            if (lookahead == 'f')
                ADVANCE(121);
            LEX_ERROR();
        case 121:
            ACCEPT_TOKEN(anon_sym_if);
        case 122:
            if (lookahead == 'e')
                ADVANCE(123);
            LEX_ERROR();
        case 123:
            if (lookahead == 'p')
                ADVANCE(124);
            LEX_ERROR();
        case 124:
            if (lookahead == 'e')
                ADVANCE(125);
            LEX_ERROR();
        case 125:
            if (lookahead == 'a')
                ADVANCE(126);
            LEX_ERROR();
        case 126:
            if (lookahead == 't')
                ADVANCE(127);
            LEX_ERROR();
        case 127:
            ACCEPT_TOKEN(anon_sym_repeat);
        case 128:
            if (lookahead == 'h')
                ADVANCE(129);
            LEX_ERROR();
        case 129:
            if (lookahead == 'i')
                ADVANCE(130);
            LEX_ERROR();
        case 130:
            if (lookahead == 'l')
                ADVANCE(131);
            LEX_ERROR();
        case 131:
            if (lookahead == 'e')
                ADVANCE(132);
            LEX_ERROR();
        case 132:
            ACCEPT_TOKEN(anon_sym_while);
        case 133:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(133);
            if (lookahead == '\n')
                ADVANCE(134);
            if (lookahead == ';')
                ADVANCE(80);
            if (lookahead == 'c')
                ADVANCE(135);
            LEX_ERROR();
        case 134:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 135:
            if (lookahead == 'a')
                ADVANCE(136);
            LEX_ERROR();
        case 136:
            if (lookahead == 't')
                ADVANCE(137);
            LEX_ERROR();
        case 137:
            if (lookahead == 'c')
                ADVANCE(138);
            LEX_ERROR();
        case 138:
            if (lookahead == 'h')
                ADVANCE(139);
            LEX_ERROR();
        case 139:
            ACCEPT_TOKEN(anon_sym_catch);
        case 140:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(140);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'b')
                ADVANCE(7);
            if (lookahead == 'c')
                ADVANCE(12);
            if (lookahead == 'd')
                ADVANCE(20);
            if (lookahead == 'f')
                ADVANCE(26);
            if (lookahead == 'g')
                ADVANCE(39);
            if (lookahead == 'i')
                ADVANCE(44);
            if (lookahead == 'r')
                ADVANCE(51);
            if (lookahead == 's')
                ADVANCE(61);
            if (lookahead == 't')
                ADVANCE(67);
            if (lookahead == 'w')
                ADVANCE(72);
            if (lookahead == '}')
                ADVANCE(141);
            LEX_ERROR();
        case 141:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 142:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(142);
            if (lookahead == '}')
                ADVANCE(141);
            LEX_ERROR();
        case 143:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(143);
            if (lookahead == '(')
                ADVANCE(82);
            if (lookahead == '.')
                ADVANCE(83);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(84);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(89);
            if (lookahead == 'l')
                ADVANCE(91);
            if (lookahead == 'v')
                ADVANCE(94);
            if (lookahead == '{')
                ADVANCE(109);
            LEX_ERROR();
        case 144:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(144);
            if (lookahead == '?')
                ADVANCE(145);
            if (lookahead == 'a')
                ADVANCE(146);
            if (lookahead == '{')
                ADVANCE(109);
            LEX_ERROR();
        case 145:
            ACCEPT_TOKEN(anon_sym_QMARK);
        case 146:
            if (lookahead == 's')
                ADVANCE(147);
            LEX_ERROR();
        case 147:
            ACCEPT_TOKEN(anon_sym_as);
        case 148:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(148);
            if (lookahead == '.')
                ADVANCE(83);
            LEX_ERROR();
        case 149:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(149);
            if (lookahead == '(')
                ADVANCE(82);
            if (lookahead == ')')
                ADVANCE(150);
            if (lookahead == '.')
                ADVANCE(83);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(84);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(89);
            if (lookahead == 'l')
                ADVANCE(91);
            if (lookahead == 'v')
                ADVANCE(94);
            LEX_ERROR();
        case 150:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 151:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(151);
            if (lookahead == '(')
                ADVANCE(82);
            if (lookahead == '.')
                ADVANCE(83);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(84);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(89);
            if (lookahead == 'l')
                ADVANCE(91);
            if (lookahead == 'v')
                ADVANCE(94);
            LEX_ERROR();
        case 152:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(152);
            if (lookahead == '.')
                ADVANCE(83);
            if (lookahead == '?')
                ADVANCE(145);
            if (lookahead == 'a')
                ADVANCE(146);
            if (lookahead == '{')
                ADVANCE(109);
            LEX_ERROR();
        case 153:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(153);
            if (lookahead == '(')
                ADVANCE(82);
            if (lookahead == '?')
                ADVANCE(145);
            if (lookahead == 'a')
                ADVANCE(146);
            if (lookahead == '{')
                ADVANCE(109);
            LEX_ERROR();
        case 154:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(154);
            if (lookahead == ')')
                ADVANCE(150);
            if (lookahead == ',')
                ADVANCE(155);
            if (lookahead == '?')
                ADVANCE(145);
            if (lookahead == 'a')
                ADVANCE(146);
            LEX_ERROR();
        case 155:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 156:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(156);
            if (lookahead == ')')
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
                ADVANCE(150);
            if (lookahead == ',')
                ADVANCE(155);
            if (lookahead == '.')
                ADVANCE(83);
            if (lookahead == '?')
                ADVANCE(145);
            if (lookahead == 'a')
                ADVANCE(146);
            LEX_ERROR();
        case 158:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(158);
            if (lookahead == '(')
                ADVANCE(82);
            if (lookahead == ')')
                ADVANCE(150);
            if (lookahead == ',')
                ADVANCE(155);
            if (lookahead == '?')
                ADVANCE(145);
            if (lookahead == 'a')
                ADVANCE(146);
            LEX_ERROR();
        case 159:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(159);
            if (lookahead == 'c')
                ADVANCE(160);
            if (lookahead == 'd')
                ADVANCE(164);
            if (lookahead == '}')
                ADVANCE(141);
            LEX_ERROR();
        case 160:
            if (lookahead == 'a')
                ADVANCE(161);
            LEX_ERROR();
        case 161:
            if (lookahead == 's')
                ADVANCE(162);
            LEX_ERROR();
        case 162:
            if (lookahead == 'e')
                ADVANCE(163);
            LEX_ERROR();
        case 163:
            ACCEPT_TOKEN(anon_sym_case);
        case 164:
            if (lookahead == 'e')
                ADVANCE(165);
            LEX_ERROR();
        case 165:
            if (lookahead == 'f')
                ADVANCE(166);
            LEX_ERROR();
        case 166:
            if (lookahead == 'a')
                ADVANCE(167);
            LEX_ERROR();
        case 167:
            if (lookahead == 'u')
                ADVANCE(168);
            LEX_ERROR();
        case 168:
            if (lookahead == 'l')
                ADVANCE(169);
            LEX_ERROR();
        case 169:
            if (lookahead == 't')
                ADVANCE(170);
            LEX_ERROR();
        case 170:
            ACCEPT_TOKEN(anon_sym_default);
        case 171:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(171);
            if (lookahead == ':')
                ADVANCE(115);
            LEX_ERROR();
        case 172:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(172);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'b')
                ADVANCE(7);
            if (lookahead == 'c')
                ADVANCE(173);
            if (lookahead == 'd')
                ADVANCE(174);
            if (lookahead == 'f')
                ADVANCE(26);
            if (lookahead == 'g')
                ADVANCE(39);
            if (lookahead == 'i')
                ADVANCE(44);
            if (lookahead == 'r')
                ADVANCE(51);
            if (lookahead == 's')
                ADVANCE(61);
            if (lookahead == 't')
                ADVANCE(67);
            if (lookahead == 'w')
                ADVANCE(72);
            if (lookahead == '}')
                ADVANCE(141);
            LEX_ERROR();
        case 173:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(86);
            if (lookahead == 'o')
                ADVANCE(13);
            ACCEPT_TOKEN(sym_identifier);
        case 174:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(175);
            if (lookahead == 'o')
                ADVANCE(25);
            ACCEPT_TOKEN(sym_identifier);
        case 175:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'f')
                ADVANCE(176);
            ACCEPT_TOKEN(sym_identifier);
        case 176:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(177);
            if (lookahead == 'e')
                ADVANCE(23);
            ACCEPT_TOKEN(sym_identifier);
        case 177:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'u')
                ADVANCE(178);
            ACCEPT_TOKEN(sym_identifier);
        case 178:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(179);
            ACCEPT_TOKEN(sym_identifier);
        case 179:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(180);
            ACCEPT_TOKEN(sym_identifier);
        case 180:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_default);
        case 181:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(181);
            if (lookahead == ',')
                ADVANCE(155);
            if (lookahead == ':')
                ADVANCE(115);
            if (lookahead == '?')
                ADVANCE(145);
            if (lookahead == 'a')
                ADVANCE(146);
            LEX_ERROR();
        case 182:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(182);
            if (lookahead == ',')
                ADVANCE(155);
            if (lookahead == '.')
                ADVANCE(83);
            if (lookahead == ':')
                ADVANCE(115);
            if (lookahead == '?')
                ADVANCE(145);
            if (lookahead == 'a')
                ADVANCE(146);
            LEX_ERROR();
        case 183:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(183);
            if (lookahead == '(')
                ADVANCE(82);
            if (lookahead == ',')
                ADVANCE(155);
            if (lookahead == ':')
                ADVANCE(115);
            if (lookahead == '?')
                ADVANCE(145);
            if (lookahead == 'a')
                ADVANCE(146);
            LEX_ERROR();
        case 184:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(184);
            if (lookahead == 'e')
                ADVANCE(185);
            LEX_ERROR();
        case 185:
            if (lookahead == 'l')
                ADVANCE(186);
            LEX_ERROR();
        case 186:
            if (lookahead == 's')
                ADVANCE(187);
            LEX_ERROR();
        case 187:
            if (lookahead == 'e')
                ADVANCE(188);
            LEX_ERROR();
        case 188:
            ACCEPT_TOKEN(anon_sym_else);
        case 189:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(189);
            if (lookahead == ',')
                ADVANCE(155);
            if (lookahead == 'e')
                ADVANCE(185);
            LEX_ERROR();
        case 190:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(190);
            if (lookahead == '(')
                ADVANCE(82);
            LEX_ERROR();
        case 191:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(191);
            if (lookahead == '=')
                ADVANCE(192);
            if (lookahead == '?')
                ADVANCE(145);
            if (lookahead == 'a')
                ADVANCE(146);
            LEX_ERROR();
        case 192:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 193:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(193);
            if (lookahead == '.')
                ADVANCE(83);
            if (lookahead == '=')
                ADVANCE(192);
            if (lookahead == '?')
                ADVANCE(145);
            if (lookahead == 'a')
                ADVANCE(146);
            LEX_ERROR();
        case 194:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(194);
            if (lookahead == '(')
                ADVANCE(82);
            if (lookahead == '=')
                ADVANCE(192);
            if (lookahead == '?')
                ADVANCE(145);
            if (lookahead == 'a')
                ADVANCE(146);
            LEX_ERROR();
        case 195:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(195);
            if (lookahead == '*')
                ADVANCE(196);
            if (lookahead == 'O')
                ADVANCE(197);
            if (lookahead == 'i')
                ADVANCE(220);
            if (lookahead == 't')
                ADVANCE(243);
            if (lookahead == 'w')
                ADVANCE(247);
            LEX_ERROR();
        case 196:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 197:
            if (lookahead == 'S')
                ADVANCE(198);
            LEX_ERROR();
        case 198:
            if (lookahead == 'X')
                ADVANCE(199);
            LEX_ERROR();
        case 199:
            if (lookahead == 'A')
                ADVANCE(200);
            ACCEPT_TOKEN(anon_sym_OSX);
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
            ACCEPT_TOKEN(anon_sym_OSXApplicationExtension);
        case 220:
            if (lookahead == 'O')
                ADVANCE(221);
            LEX_ERROR();
        case 221:
            if (lookahead == 'S')
                ADVANCE(222);
            LEX_ERROR();
        case 222:
            if (lookahead == 'A')
                ADVANCE(223);
            ACCEPT_TOKEN(anon_sym_iOS);
        case 223:
            if (lookahead == 'p')
                ADVANCE(224);
            LEX_ERROR();
        case 224:
            if (lookahead == 'p')
                ADVANCE(225);
            LEX_ERROR();
        case 225:
            if (lookahead == 'l')
                ADVANCE(226);
            LEX_ERROR();
        case 226:
            if (lookahead == 'i')
                ADVANCE(227);
            LEX_ERROR();
        case 227:
            if (lookahead == 'c')
                ADVANCE(228);
            LEX_ERROR();
        case 228:
            if (lookahead == 'a')
                ADVANCE(229);
            LEX_ERROR();
        case 229:
            if (lookahead == 't')
                ADVANCE(230);
            LEX_ERROR();
        case 230:
            if (lookahead == 'i')
                ADVANCE(231);
            LEX_ERROR();
        case 231:
            if (lookahead == 'o')
                ADVANCE(232);
            LEX_ERROR();
        case 232:
            if (lookahead == 'n')
                ADVANCE(233);
            LEX_ERROR();
        case 233:
            if (lookahead == 'E')
                ADVANCE(234);
            LEX_ERROR();
        case 234:
            if (lookahead == 'x')
                ADVANCE(235);
            LEX_ERROR();
        case 235:
            if (lookahead == 't')
                ADVANCE(236);
            LEX_ERROR();
        case 236:
            if (lookahead == 'e')
                ADVANCE(237);
            LEX_ERROR();
        case 237:
            if (lookahead == 'n')
                ADVANCE(238);
            LEX_ERROR();
        case 238:
            if (lookahead == 's')
                ADVANCE(239);
            LEX_ERROR();
        case 239:
            if (lookahead == 'i')
                ADVANCE(240);
            LEX_ERROR();
        case 240:
            if (lookahead == 'o')
                ADVANCE(241);
            LEX_ERROR();
        case 241:
            if (lookahead == 'n')
                ADVANCE(242);
            LEX_ERROR();
        case 242:
            ACCEPT_TOKEN(anon_sym_iOSApplicationExtension);
        case 243:
            if (lookahead == 'v')
                ADVANCE(244);
            LEX_ERROR();
        case 244:
            if (lookahead == 'O')
                ADVANCE(245);
            LEX_ERROR();
        case 245:
            if (lookahead == 'S')
                ADVANCE(246);
            LEX_ERROR();
        case 246:
            ACCEPT_TOKEN(anon_sym_tvOS);
        case 247:
            if (lookahead == 'a')
                ADVANCE(248);
            LEX_ERROR();
        case 248:
            if (lookahead == 't')
                ADVANCE(249);
            LEX_ERROR();
        case 249:
            if (lookahead == 'c')
                ADVANCE(250);
            LEX_ERROR();
        case 250:
            if (lookahead == 'h')
                ADVANCE(251);
            LEX_ERROR();
        case 251:
            if (lookahead == 'O')
                ADVANCE(252);
            LEX_ERROR();
        case 252:
            if (lookahead == 'S')
                ADVANCE(253);
            LEX_ERROR();
        case 253:
            ACCEPT_TOKEN(anon_sym_watchOS);
        case 254:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(254);
            if (lookahead == ')')
                ADVANCE(150);
            if (lookahead == ',')
                ADVANCE(155);
            LEX_ERROR();
        case 255:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(255);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(256);
            LEX_ERROR();
        case 256:
            if (lookahead == '.')
                ADVANCE(257);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(256);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 257:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(258);
            LEX_ERROR();
        case 258:
            if (lookahead == '.')
                ADVANCE(259);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(258);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 259:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(260);
            LEX_ERROR();
        case 260:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(260);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 261:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(261);
            if (lookahead == '#')
                ADVANCE(98);
            if (lookahead == 'c')
                ADVANCE(160);
            if (lookahead == 'l')
                ADVANCE(262);
            if (lookahead == 'v')
                ADVANCE(265);
            LEX_ERROR();
        case 262:
            if (lookahead == 'e')
                ADVANCE(263);
            LEX_ERROR();
        case 263:
            if (lookahead == 't')
                ADVANCE(264);
            LEX_ERROR();
        case 264:
            ACCEPT_TOKEN(anon_sym_let);
        case 265:
            if (lookahead == 'a')
                ADVANCE(266);
            LEX_ERROR();
        case 266:
            if (lookahead == 'r')
                ADVANCE(267);
            LEX_ERROR();
        case 267:
            ACCEPT_TOKEN(anon_sym_var);
        case 268:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(268);
            if (lookahead == ',')
                ADVANCE(155);
            if (lookahead == '{')
                ADVANCE(109);
            LEX_ERROR();
        case 269:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(269);
            if (lookahead == '\n')
                ADVANCE(270);
            if (lookahead == ';')
                ADVANCE(80);
            if (lookahead == 'e')
                ADVANCE(185);
            LEX_ERROR();
        case 270:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 271:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(271);
            if (lookahead == 'i')
                ADVANCE(120);
            if (lookahead == '{')
                ADVANCE(109);
            LEX_ERROR();
        case 272:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(272);
            if (lookahead == 'w')
                ADVANCE(128);
            LEX_ERROR();
        case 273:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(273);
            if (lookahead == ';')
                ADVANCE(80);
            LEX_ERROR();
        case 274:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(274);
            if (lookahead == ':')
                ADVANCE(115);
            if (lookahead == '?')
                ADVANCE(145);
            if (lookahead == 'a')
                ADVANCE(146);
            if (lookahead == 'i')
                ADVANCE(275);
            LEX_ERROR();
        case 275:
            if (lookahead == 'n')
                ADVANCE(276);
            LEX_ERROR();
        case 276:
            ACCEPT_TOKEN(anon_sym_in);
        case 277:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(277);
            if (lookahead == ',')
                ADVANCE(155);
            if (lookahead == ':')
                ADVANCE(115);
            if (lookahead == ';')
                ADVANCE(80);
            if (lookahead == '?')
                ADVANCE(145);
            if (lookahead == 'a')
                ADVANCE(146);
            if (lookahead == 'i')
                ADVANCE(275);
            LEX_ERROR();
        case 278:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(278);
            if (lookahead == ';')
                ADVANCE(80);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 279:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(279);
            if (lookahead == '(')
                ADVANCE(82);
            if (lookahead == ')')
                ADVANCE(150);
            if (lookahead == '.')
                ADVANCE(83);
            if (lookahead == ';')
                ADVANCE(80);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '_')
                ADVANCE(84);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'i')
                ADVANCE(89);
            if (lookahead == 'l')
                ADVANCE(91);
            if (lookahead == 'v')
                ADVANCE(94);
            LEX_ERROR();
        case 280:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(280);
            if (lookahead == ',')
                ADVANCE(155);
            if (lookahead == '.')
                ADVANCE(83);
            if (lookahead == ':')
                ADVANCE(115);
            if (lookahead == ';')
                ADVANCE(80);
            if (lookahead == '?')
                ADVANCE(145);
            if (lookahead == 'a')
                ADVANCE(146);
            if (lookahead == 'i')
                ADVANCE(275);
            LEX_ERROR();
        case 281:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(281);
            if (lookahead == '.')
                ADVANCE(83);
            if (lookahead == ':')
                ADVANCE(115);
            if (lookahead == '?')
                ADVANCE(145);
            if (lookahead == 'a')
                ADVANCE(146);
            if (lookahead == 'i')
                ADVANCE(275);
            LEX_ERROR();
        case 282:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(282);
            if (lookahead == '(')
                ADVANCE(82);
            if (lookahead == ':')
                ADVANCE(115);
            if (lookahead == '?')
                ADVANCE(145);
            if (lookahead == 'a')
                ADVANCE(146);
            if (lookahead == 'i')
                ADVANCE(275);
            LEX_ERROR();
        case 283:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(283);
            if (lookahead == 'i')
                ADVANCE(275);
            LEX_ERROR();
        case 284:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(284);
            if (lookahead == '.')
                ADVANCE(83);
            if (lookahead == 'i')
                ADVANCE(275);
            LEX_ERROR();
        case 285:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(285);
            if (lookahead == ')')
                ADVANCE(150);
            if (lookahead == ',')
                ADVANCE(155);
            if (lookahead == ';')
                ADVANCE(80);
            if (lookahead == '?')
                ADVANCE(145);
            if (lookahead == 'a')
                ADVANCE(146);
            LEX_ERROR();
        case 286:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(286);
            if (lookahead == ')')
                ADVANCE(150);
            if (lookahead == ',')
                ADVANCE(155);
            if (lookahead == '.')
                ADVANCE(83);
            if (lookahead == ';')
                ADVANCE(80);
            if (lookahead == '?')
                ADVANCE(145);
            if (lookahead == 'a')
                ADVANCE(146);
            LEX_ERROR();
        case 287:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(287);
            if (lookahead == ')')
                ADVANCE(150);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            LEX_ERROR();
        case 288:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(288);
            if (lookahead == ',')
                ADVANCE(155);
            if (lookahead == ';')
                ADVANCE(80);
            LEX_ERROR();
        case 289:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(289);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == '{')
                ADVANCE(109);
            LEX_ERROR();
        case 290:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(290);
            if (lookahead == '.')
                ADVANCE(83);
            if (lookahead == '{')
                ADVANCE(109);
            LEX_ERROR();
        case 291:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(291);
            if (lookahead == '\n')
                ADVANCE(292);
            if (lookahead == '#')
                ADVANCE(98);
            if (lookahead == '(')
                ADVANCE(82);
            if (lookahead == ')')
                ADVANCE(150);
            if (lookahead == '*')
                ADVANCE(196);
            if (lookahead == ',')
                ADVANCE(155);
            if (lookahead == '.')
                ADVANCE(83);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(256);
            if (lookahead == ':')
                ADVANCE(115);
            if (lookahead == ';')
                ADVANCE(80);
            if (lookahead == '=')
                ADVANCE(192);
            if (lookahead == '?')
                ADVANCE(145);
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
                ADVANCE(293);
            if (lookahead == '_')
                ADVANCE(84);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(316);
            if (lookahead == 'b')
                ADVANCE(7);
            if (lookahead == 'c')
                ADVANCE(318);
            if (lookahead == 'd')
                ADVANCE(174);
            if (lookahead == 'e')
                ADVANCE(323);
            if (lookahead == 'f')
                ADVANCE(26);
            if (lookahead == 'g')
                ADVANCE(39);
            if (lookahead == 'i')
                ADVANCE(327);
            if (lookahead == 'l')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(51);
            if (lookahead == 's')
                ADVANCE(61);
            if (lookahead == 't')
                ADVANCE(351);
            if (lookahead == 'v')
                ADVANCE(94);
            if (lookahead == 'w')
                ADVANCE(355);
            if (lookahead == '{')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(141);
            LEX_ERROR();
        case 292:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 293:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(294);
            ACCEPT_TOKEN(sym_identifier);
        case 294:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'W') ||
                (lookahead == 'Y') ||
                (lookahead == 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'X')
                ADVANCE(295);
            ACCEPT_TOKEN(sym_identifier);
        case 295:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (lookahead == 'A')
                ADVANCE(296);
            if (('B' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_OSX);
        case 296:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(297);
            ACCEPT_TOKEN(sym_identifier);
        case 297:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(298);
            ACCEPT_TOKEN(sym_identifier);
        case 298:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(299);
            ACCEPT_TOKEN(sym_identifier);
        case 299:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(300);
            ACCEPT_TOKEN(sym_identifier);
        case 300:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(301);
            ACCEPT_TOKEN(sym_identifier);
        case 301:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(302);
            ACCEPT_TOKEN(sym_identifier);
        case 302:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(303);
            ACCEPT_TOKEN(sym_identifier);
        case 303:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(304);
            ACCEPT_TOKEN(sym_identifier);
        case 304:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(305);
            ACCEPT_TOKEN(sym_identifier);
        case 305:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(306);
            ACCEPT_TOKEN(sym_identifier);
        case 306:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'D') ||
                ('F' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'E')
                ADVANCE(307);
            ACCEPT_TOKEN(sym_identifier);
        case 307:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(3);
            if (lookahead == 'x')
                ADVANCE(308);
            ACCEPT_TOKEN(sym_identifier);
        case 308:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(309);
            ACCEPT_TOKEN(sym_identifier);
        case 309:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(310);
            ACCEPT_TOKEN(sym_identifier);
        case 310:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(311);
            ACCEPT_TOKEN(sym_identifier);
        case 311:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(312);
            ACCEPT_TOKEN(sym_identifier);
        case 312:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(313);
            ACCEPT_TOKEN(sym_identifier);
        case 313:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(314);
            ACCEPT_TOKEN(sym_identifier);
        case 314:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(315);
            ACCEPT_TOKEN(sym_identifier);
        case 315:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_OSXApplicationExtension);
        case 316:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(317);
            ACCEPT_TOKEN(sym_identifier);
        case 317:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_as);
        case 318:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(319);
            if (lookahead == 'o')
                ADVANCE(13);
            ACCEPT_TOKEN(sym_identifier);
        case 319:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(87);
            if (lookahead == 't')
                ADVANCE(320);
            ACCEPT_TOKEN(sym_identifier);
        case 320:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(321);
            ACCEPT_TOKEN(sym_identifier);
        case 321:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(322);
            ACCEPT_TOKEN(sym_identifier);
        case 322:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_catch);
        case 323:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(324);
            ACCEPT_TOKEN(sym_identifier);
        case 324:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(325);
            ACCEPT_TOKEN(sym_identifier);
        case 325:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(326);
            ACCEPT_TOKEN(sym_identifier);
        case 326:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_else);
        case 327:
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
                ADVANCE(328);
            if (lookahead == 'f')
                ADVANCE(45);
            if (lookahead == 'm')
                ADVANCE(46);
            if (lookahead == 'n')
                ADVANCE(350);
            if (lookahead == 's')
                ADVANCE(90);
            ACCEPT_TOKEN(sym_identifier);
        case 328:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(329);
            ACCEPT_TOKEN(sym_identifier);
        case 329:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (lookahead == 'A')
                ADVANCE(330);
            if (('B' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_iOS);
        case 330:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(331);
            ACCEPT_TOKEN(sym_identifier);
        case 331:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'p')
                ADVANCE(332);
            ACCEPT_TOKEN(sym_identifier);
        case 332:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'l')
                ADVANCE(333);
            ACCEPT_TOKEN(sym_identifier);
        case 333:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(334);
            ACCEPT_TOKEN(sym_identifier);
        case 334:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(335);
            ACCEPT_TOKEN(sym_identifier);
        case 335:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(336);
            ACCEPT_TOKEN(sym_identifier);
        case 336:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(337);
            ACCEPT_TOKEN(sym_identifier);
        case 337:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(338);
            ACCEPT_TOKEN(sym_identifier);
        case 338:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(339);
            ACCEPT_TOKEN(sym_identifier);
        case 339:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(340);
            ACCEPT_TOKEN(sym_identifier);
        case 340:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'D') ||
                ('F' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'E')
                ADVANCE(341);
            ACCEPT_TOKEN(sym_identifier);
        case 341:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(3);
            if (lookahead == 'x')
                ADVANCE(342);
            ACCEPT_TOKEN(sym_identifier);
        case 342:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(343);
            ACCEPT_TOKEN(sym_identifier);
        case 343:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'e')
                ADVANCE(344);
            ACCEPT_TOKEN(sym_identifier);
        case 344:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(345);
            ACCEPT_TOKEN(sym_identifier);
        case 345:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 's')
                ADVANCE(346);
            ACCEPT_TOKEN(sym_identifier);
        case 346:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(347);
            ACCEPT_TOKEN(sym_identifier);
        case 347:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'o')
                ADVANCE(348);
            ACCEPT_TOKEN(sym_identifier);
        case 348:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(349);
            ACCEPT_TOKEN(sym_identifier);
        case 349:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_iOSApplicationExtension);
        case 350:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_in);
        case 351:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(68);
            if (lookahead == 'v')
                ADVANCE(352);
            ACCEPT_TOKEN(sym_identifier);
        case 352:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(353);
            ACCEPT_TOKEN(sym_identifier);
        case 353:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(354);
            ACCEPT_TOKEN(sym_identifier);
        case 354:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            ACCEPT_TOKEN(anon_sym_tvOS);
        case 355:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'a')
                ADVANCE(356);
            if (lookahead == 'h')
                ADVANCE(73);
            ACCEPT_TOKEN(sym_identifier);
        case 356:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(357);
            ACCEPT_TOKEN(sym_identifier);
        case 357:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'c')
                ADVANCE(358);
            ACCEPT_TOKEN(sym_identifier);
        case 358:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'h')
                ADVANCE(359);
            ACCEPT_TOKEN(sym_identifier);
        case 359:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'O')
                ADVANCE(360);
            ACCEPT_TOKEN(sym_identifier);
        case 360:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(3);
            if (lookahead == 'S')
                ADVANCE(361);
            ACCEPT_TOKEN(sym_identifier);
        case 361:
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
                ADVANCE(291);
            if (lookahead == '\n')
                ADVANCE(292);
            if (lookahead == '#')
                ADVANCE(98);
            if (lookahead == '(')
                ADVANCE(82);
            if (lookahead == ')')
                ADVANCE(150);
            if (lookahead == '*')
                ADVANCE(196);
            if (lookahead == ',')
                ADVANCE(155);
            if (lookahead == '.')
                ADVANCE(83);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(256);
            if (lookahead == ':')
                ADVANCE(115);
            if (lookahead == ';')
                ADVANCE(80);
            if (lookahead == '=')
                ADVANCE(192);
            if (lookahead == '?')
                ADVANCE(145);
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
                ADVANCE(293);
            if (lookahead == '_')
                ADVANCE(84);
            if (lookahead == '`')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(316);
            if (lookahead == 'b')
                ADVANCE(7);
            if (lookahead == 'c')
                ADVANCE(318);
            if (lookahead == 'd')
                ADVANCE(174);
            if (lookahead == 'e')
                ADVANCE(323);
            if (lookahead == 'f')
                ADVANCE(26);
            if (lookahead == 'g')
                ADVANCE(39);
            if (lookahead == 'i')
                ADVANCE(327);
            if (lookahead == 'l')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(51);
            if (lookahead == 's')
                ADVANCE(61);
            if (lookahead == 't')
                ADVANCE(351);
            if (lookahead == 'v')
                ADVANCE(94);
            if (lookahead == 'w')
                ADVANCE(355);
            if (lookahead == '{')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(141);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 1,
    [1] = 77,
    [2] = 1,
    [3] = 78,
    [4] = 78,
    [5] = 77,
    [6] = 81,
    [7] = 97,
    [8] = 108,
    [9] = 97,
    [10] = 97,
    [11] = 110,
    [12] = 111,
    [13] = 111,
    [14] = 111,
    [15] = 111,
    [16] = 108,
    [17] = 108,
    [18] = 113,
    [19] = 116,
    [20] = 78,
    [21] = 133,
    [22] = 140,
    [23] = 140,
    [24] = 78,
    [25] = 142,
    [26] = 133,
    [27] = 133,
    [28] = 140,
    [29] = 142,
    [30] = 133,
    [31] = 78,
    [32] = 143,
    [33] = 133,
    [34] = 144,
    [35] = 144,
    [36] = 148,
    [37] = 148,
    [38] = 149,
    [39] = 151,
    [40] = 110,
    [41] = 110,
    [42] = 152,
    [43] = 144,
    [44] = 144,
    [45] = 152,
    [46] = 152,
    [47] = 110,
    [48] = 144,
    [49] = 153,
    [50] = 144,
    [51] = 144,
    [52] = 144,
    [53] = 110,
    [54] = 144,
    [55] = 154,
    [56] = 154,
    [57] = 156,
    [58] = 148,
    [59] = 149,
    [60] = 144,
    [61] = 151,
    [62] = 110,
    [63] = 110,
    [64] = 157,
    [65] = 154,
    [66] = 154,
    [67] = 157,
    [68] = 157,
    [69] = 110,
    [70] = 154,
    [71] = 158,
    [72] = 154,
    [73] = 154,
    [74] = 154,
    [75] = 110,
    [76] = 154,
    [77] = 156,
    [78] = 154,
    [79] = 154,
    [80] = 110,
    [81] = 158,
    [82] = 154,
    [83] = 144,
    [84] = 156,
    [85] = 151,
    [86] = 154,
    [87] = 156,
    [88] = 110,
    [89] = 148,
    [90] = 148,
    [91] = 110,
    [92] = 153,
    [93] = 144,
    [94] = 133,
    [95] = 78,
    [96] = 78,
    [97] = 140,
    [98] = 142,
    [99] = 78,
    [100] = 78,
    [101] = 78,
    [102] = 78,
    [103] = 78,
    [104] = 78,
    [105] = 78,
    [106] = 108,
    [107] = 108,
    [108] = 159,
    [109] = 159,
    [110] = 142,
    [111] = 151,
    [112] = 78,
    [113] = 171,
    [114] = 172,
    [115] = 172,
    [116] = 78,
    [117] = 159,
    [118] = 172,
    [119] = 159,
    [120] = 181,
    [121] = 181,
    [122] = 148,
    [123] = 149,
    [124] = 151,
    [125] = 110,
    [126] = 110,
    [127] = 182,
    [128] = 181,
    [129] = 181,
    [130] = 182,
    [131] = 182,
    [132] = 110,
    [133] = 181,
    [134] = 183,
    [135] = 181,
    [136] = 181,
    [137] = 181,
    [138] = 110,
    [139] = 181,
    [140] = 156,
    [141] = 181,
    [142] = 181,
    [143] = 110,
    [144] = 183,
    [145] = 181,
    [146] = 171,
    [147] = 151,
    [148] = 172,
    [149] = 159,
    [150] = 181,
    [151] = 171,
    [152] = 172,
    [153] = 159,
    [154] = 78,
    [155] = 142,
    [156] = 184,
    [157] = 189,
    [158] = 189,
    [159] = 189,
    [160] = 189,
    [161] = 151,
    [162] = 190,
    [163] = 151,
    [164] = 189,
    [165] = 189,
    [166] = 191,
    [167] = 191,
    [168] = 148,
    [169] = 149,
    [170] = 151,
    [171] = 110,
    [172] = 110,
    [173] = 193,
    [174] = 191,
    [175] = 191,
    [176] = 193,
    [177] = 193,
    [178] = 110,
    [179] = 191,
    [180] = 194,
    [181] = 191,
    [182] = 191,
    [183] = 191,
    [184] = 110,
    [185] = 191,
    [186] = 156,
    [187] = 191,
    [188] = 191,
    [189] = 110,
    [190] = 194,
    [191] = 191,
    [192] = 110,
    [193] = 189,
    [194] = 189,
    [195] = 151,
    [196] = 189,
    [197] = 191,
    [198] = 110,
    [199] = 189,
    [200] = 189,
    [201] = 189,
    [202] = 195,
    [203] = 254,
    [204] = 255,
    [205] = 254,
    [206] = 156,
    [207] = 189,
    [208] = 195,
    [209] = 254,
    [210] = 255,
    [211] = 254,
    [212] = 156,
    [213] = 156,
    [214] = 189,
    [215] = 156,
    [216] = 189,
    [217] = 191,
    [218] = 110,
    [219] = 189,
    [220] = 261,
    [221] = 189,
    [222] = 184,
    [223] = 261,
    [224] = 189,
    [225] = 184,
    [226] = 110,
    [227] = 184,
    [228] = 184,
    [229] = 184,
    [230] = 108,
    [231] = 78,
    [232] = 108,
    [233] = 268,
    [234] = 268,
    [235] = 268,
    [236] = 268,
    [237] = 151,
    [238] = 190,
    [239] = 151,
    [240] = 268,
    [241] = 268,
    [242] = 191,
    [243] = 110,
    [244] = 268,
    [245] = 268,
    [246] = 151,
    [247] = 268,
    [248] = 191,
    [249] = 110,
    [250] = 268,
    [251] = 268,
    [252] = 268,
    [253] = 195,
    [254] = 254,
    [255] = 255,
    [256] = 254,
    [257] = 156,
    [258] = 268,
    [259] = 268,
    [260] = 156,
    [261] = 268,
    [262] = 191,
    [263] = 110,
    [264] = 268,
    [265] = 261,
    [266] = 268,
    [267] = 108,
    [268] = 261,
    [269] = 268,
    [270] = 108,
    [271] = 110,
    [272] = 108,
    [273] = 108,
    [274] = 108,
    [275] = 269,
    [276] = 140,
    [277] = 142,
    [278] = 269,
    [279] = 269,
    [280] = 271,
    [281] = 78,
    [282] = 272,
    [283] = 140,
    [284] = 142,
    [285] = 272,
    [286] = 272,
    [287] = 110,
    [288] = 78,
    [289] = 108,
    [290] = 78,
    [291] = 273,
    [292] = 108,
    [293] = 273,
    [294] = 110,
    [295] = 274,
    [296] = 274,
    [297] = 277,
    [298] = 148,
    [299] = 278,
    [300] = 279,
    [301] = 151,
    [302] = 151,
    [303] = 151,
    [304] = 110,
    [305] = 110,
    [306] = 280,
    [307] = 274,
    [308] = 274,
    [309] = 281,
    [310] = 281,
    [311] = 110,
    [312] = 274,
    [313] = 282,
    [314] = 274,
    [315] = 149,
    [316] = 156,
    [317] = 274,
    [318] = 274,
    [319] = 274,
    [320] = 281,
    [321] = 274,
    [322] = 110,
    [323] = 274,
    [324] = 274,
    [325] = 283,
    [326] = 110,
    [327] = 110,
    [328] = 283,
    [329] = 283,
    [330] = 284,
    [331] = 284,
    [332] = 110,
    [333] = 283,
    [334] = 108,
    [335] = 78,
    [336] = 110,
    [337] = 108,
    [338] = 78,
    [339] = 273,
    [340] = 156,
    [341] = 285,
    [342] = 278,
    [343] = 151,
    [344] = 286,
    [345] = 273,
    [346] = 287,
    [347] = 273,
    [348] = 156,
    [349] = 156,
    [350] = 287,
    [351] = 156,
    [352] = 273,
    [353] = 110,
    [354] = 288,
    [355] = 288,
    [356] = 273,
    [357] = 108,
    [358] = 78,
    [359] = 278,
    [360] = 273,
    [361] = 287,
    [362] = 156,
    [363] = 273,
    [364] = 289,
    [365] = 108,
    [366] = 289,
    [367] = 108,
    [368] = 110,
    [369] = 282,
    [370] = 274,
    [371] = 283,
    [372] = 110,
    [373] = 108,
    [374] = 78,
    [375] = 171,
    [376] = 171,
    [377] = 108,
    [378] = 110,
    [379] = 108,
    [380] = 108,
    [381] = 290,
    [382] = 290,
    [383] = 110,
    [384] = 108,
    [385] = 273,
    [386] = 140,
    [387] = 142,
    [388] = 273,
    [389] = 273,
    [390] = 78,
    [391] = 278,
    [392] = 273,
    [393] = 289,
    [394] = 108,
    [395] = 1,
    [396] = 77,
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
        [sym_throw_statement] = ACTIONS(SHIFT(3)),
        [sym_defer_statement] = ACTIONS(SHIFT(3)),
        [sym_do_statement] = ACTIONS(SHIFT(3)),
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
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [sym__declaration] = ACTIONS(SHIFT(3)),
        [sym_identifier] = ACTIONS(SHIFT(18)),
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
        [sym_throw_statement] = ACTIONS(SHIFT(3)),
        [sym_defer_statement] = ACTIONS(SHIFT(3)),
        [sym_do_statement] = ACTIONS(SHIFT(3)),
        [sym__expression] = ACTIONS(SHIFT(3)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(396)),
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
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [sym__declaration] = ACTIONS(SHIFT(3)),
        [sym_identifier] = ACTIONS(SHIFT(18)),
    },
    [3] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(395)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(SHIFT(395)),
    },
    [4] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__loop_statement, 1)),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_program, 1)),
    },
    [6] = {
        [sym__for_init] = ACTIONS(SHIFT(291)),
        [sym__for_condition] = ACTIONS(SHIFT(292)),
        [sym_variable_declaration] = ACTIONS(SHIFT(293)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(294)),
        [sym__pattern] = ACTIONS(SHIFT(295)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(296)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(296)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(296)),
        [sym_optional_pattern] = ACTIONS(SHIFT(296)),
        [sym_is_pattern] = ACTIONS(SHIFT(296)),
        [sym_as_pattern] = ACTIONS(SHIFT(296)),
        [sym__expression] = ACTIONS(SHIFT(297)),
        [sym__expression_list] = ACTIONS(SHIFT(293)),
        [sym__type_identifier] = ACTIONS(SHIFT(298)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(299)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(300)),
        [anon_sym_case] = ACTIONS(SHIFT(301)),
        [anon_sym_let] = ACTIONS(SHIFT(302)),
        [anon_sym_var] = ACTIONS(SHIFT(303)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(296)),
        [anon_sym_DOT] = ACTIONS(SHIFT(304)),
        [anon_sym_is] = ACTIONS(SHIFT(305)),
        [sym_identifier] = ACTIONS(SHIFT(306)),
    },
    [7] = {
        [sym__condition_clause] = ACTIONS(SHIFT(289)),
        [sym__condition] = ACTIONS(SHIFT(233)),
        [sym_availability_condition] = ACTIONS(SHIFT(234)),
        [sym_case_condition] = ACTIONS(SHIFT(235)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(235)),
        [sym__expression] = ACTIONS(SHIFT(236)),
        [anon_sym_case] = ACTIONS(SHIFT(237)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(238)),
        [anon_sym_let] = ACTIONS(SHIFT(239)),
        [anon_sym_var] = ACTIONS(SHIFT(239)),
        [sym_identifier] = ACTIONS(SHIFT(240)),
    },
    [8] = {
        [sym__code_block] = ACTIONS(SHIFT(282)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(283)),
    },
    [9] = {
        [sym__condition_clause] = ACTIONS(SHIFT(232)),
        [sym__condition] = ACTIONS(SHIFT(233)),
        [sym_availability_condition] = ACTIONS(SHIFT(234)),
        [sym_case_condition] = ACTIONS(SHIFT(235)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(235)),
        [sym__expression] = ACTIONS(SHIFT(236)),
        [anon_sym_case] = ACTIONS(SHIFT(237)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(238)),
        [anon_sym_let] = ACTIONS(SHIFT(239)),
        [anon_sym_var] = ACTIONS(SHIFT(239)),
        [sym_identifier] = ACTIONS(SHIFT(240)),
    },
    [10] = {
        [sym__condition_clause] = ACTIONS(SHIFT(156)),
        [sym__condition] = ACTIONS(SHIFT(157)),
        [sym_availability_condition] = ACTIONS(SHIFT(158)),
        [sym_case_condition] = ACTIONS(SHIFT(159)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(159)),
        [sym__expression] = ACTIONS(SHIFT(160)),
        [anon_sym_case] = ACTIONS(SHIFT(161)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(162)),
        [anon_sym_let] = ACTIONS(SHIFT(163)),
        [anon_sym_var] = ACTIONS(SHIFT(163)),
        [sym_identifier] = ACTIONS(SHIFT(164)),
    },
    [11] = {
        [sym__expression] = ACTIONS(SHIFT(106)),
        [sym_identifier] = ACTIONS(SHIFT(107)),
    },
    [12] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(105)),
    },
    [13] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_continue_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_continue_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(104)),
    },
    [14] = {
        [sym__expression] = ACTIONS(SHIFT(103)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_return_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_return_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(102)),
    },
    [15] = {
        [sym__expression] = ACTIONS(SHIFT(101)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_throw_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_throw_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(102)),
    },
    [16] = {
        [sym__code_block] = ACTIONS(SHIFT(96)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(97)),
    },
    [17] = {
        [sym__code_block] = ACTIONS(SHIFT(21)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(22)),
    },
    [18] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(SHIFT(19)),
    },
    [19] = {
        [sym__loop_statement] = ACTIONS(SHIFT(20)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(20)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
    },
    [20] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
    },
    [21] = {
        [sym_catch_clause] = ACTIONS(SHIFT(30)),
        [aux_sym_do_statement_repeat1] = ACTIONS(SHIFT(31)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_do_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_do_statement, 2)),
        [anon_sym_catch] = ACTIONS(SHIFT(32)),
    },
    [22] = {
        [sym__statement] = ACTIONS(SHIFT(23)),
        [sym__loop_statement] = ACTIONS(SHIFT(24)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(24)),
        [sym_guard_statement] = ACTIONS(SHIFT(24)),
        [sym_switch_statement] = ACTIONS(SHIFT(24)),
        [sym_labeled_statement] = ACTIONS(SHIFT(24)),
        [sym_break_statement] = ACTIONS(SHIFT(24)),
        [sym_continue_statement] = ACTIONS(SHIFT(24)),
        [sym_return_statement] = ACTIONS(SHIFT(24)),
        [sym_throw_statement] = ACTIONS(SHIFT(24)),
        [sym_defer_statement] = ACTIONS(SHIFT(24)),
        [sym_do_statement] = ACTIONS(SHIFT(24)),
        [sym__expression] = ACTIONS(SHIFT(24)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(25)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(26)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(24)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [sym__declaration] = ACTIONS(SHIFT(24)),
        [sym_identifier] = ACTIONS(SHIFT(18)),
    },
    [23] = {
        [sym__statement] = ACTIONS(SHIFT(23)),
        [sym__loop_statement] = ACTIONS(SHIFT(24)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(24)),
        [sym_guard_statement] = ACTIONS(SHIFT(24)),
        [sym_switch_statement] = ACTIONS(SHIFT(24)),
        [sym_labeled_statement] = ACTIONS(SHIFT(24)),
        [sym_break_statement] = ACTIONS(SHIFT(24)),
        [sym_continue_statement] = ACTIONS(SHIFT(24)),
        [sym_return_statement] = ACTIONS(SHIFT(24)),
        [sym_throw_statement] = ACTIONS(SHIFT(24)),
        [sym_defer_statement] = ACTIONS(SHIFT(24)),
        [sym_do_statement] = ACTIONS(SHIFT(24)),
        [sym__expression] = ACTIONS(SHIFT(24)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(29)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(24)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [sym__declaration] = ACTIONS(SHIFT(24)),
        [sym_identifier] = ACTIONS(SHIFT(18)),
    },
    [24] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(28)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(SHIFT(28)),
    },
    [25] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(27)),
    },
    [26] = {
        [sym_catch_clause] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_do_statement_repeat1] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_catch] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [27] = {
        [sym_catch_clause] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_do_statement_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_catch] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [28] = {
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
        [sym_throw_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_defer_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_do_statement] = ACTIONS(REDUCE(sym__statement, 2)),
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
        [anon_sym_throw] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_defer] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_do] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [29] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [30] = {
        [sym_catch_clause] = ACTIONS(SHIFT(30)),
        [aux_sym_do_statement_repeat1] = ACTIONS(SHIFT(95)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_do_statement_repeat1, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_do_statement_repeat1, 1)),
        [anon_sym_catch] = ACTIONS(SHIFT(32)),
    },
    [31] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_do_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_do_statement, 3)),
    },
    [32] = {
        [sym__code_block] = ACTIONS(SHIFT(33)),
        [sym__pattern] = ACTIONS(SHIFT(34)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(35)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(35)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(35)),
        [sym_optional_pattern] = ACTIONS(SHIFT(35)),
        [sym_is_pattern] = ACTIONS(SHIFT(35)),
        [sym_as_pattern] = ACTIONS(SHIFT(35)),
        [sym__expression] = ACTIONS(SHIFT(35)),
        [sym__type_identifier] = ACTIONS(SHIFT(36)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(38)),
        [anon_sym_let] = ACTIONS(SHIFT(39)),
        [anon_sym_var] = ACTIONS(SHIFT(39)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(22)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(35)),
        [anon_sym_DOT] = ACTIONS(SHIFT(40)),
        [anon_sym_is] = ACTIONS(SHIFT(41)),
        [sym_identifier] = ACTIONS(SHIFT(42)),
    },
    [33] = {
        [sym_catch_clause] = ACTIONS(REDUCE(sym_catch_clause, 2)),
        [aux_sym_do_statement_repeat1] = ACTIONS(REDUCE(sym_catch_clause, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_catch_clause, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_catch_clause, 2)),
        [anon_sym_catch] = ACTIONS(REDUCE(sym_catch_clause, 2)),
    },
    [34] = {
        [sym__code_block] = ACTIONS(SHIFT(94)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(22)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(52)),
        [anon_sym_as] = ACTIONS(SHIFT(53)),
    },
    [35] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [36] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(91)),
    },
    [37] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(88)),
    },
    [38] = {
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
        [anon_sym_let] = ACTIONS(SHIFT(61)),
        [anon_sym_var] = ACTIONS(SHIFT(61)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(56)),
        [anon_sym_DOT] = ACTIONS(SHIFT(62)),
        [anon_sym_is] = ACTIONS(SHIFT(63)),
        [sym_identifier] = ACTIONS(SHIFT(64)),
    },
    [39] = {
        [sym__pattern] = ACTIONS(SHIFT(51)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(35)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(35)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(35)),
        [sym_optional_pattern] = ACTIONS(SHIFT(35)),
        [sym_is_pattern] = ACTIONS(SHIFT(35)),
        [sym_as_pattern] = ACTIONS(SHIFT(35)),
        [sym__expression] = ACTIONS(SHIFT(35)),
        [sym__type_identifier] = ACTIONS(SHIFT(36)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(38)),
        [anon_sym_let] = ACTIONS(SHIFT(39)),
        [anon_sym_var] = ACTIONS(SHIFT(39)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(35)),
        [anon_sym_DOT] = ACTIONS(SHIFT(40)),
        [anon_sym_is] = ACTIONS(SHIFT(41)),
        [sym_identifier] = ACTIONS(SHIFT(42)),
    },
    [40] = {
        [sym_identifier] = ACTIONS(SHIFT(49)),
    },
    [41] = {
        [sym_type] = ACTIONS(SHIFT(43)),
        [sym__type_identifier] = ACTIONS(SHIFT(44)),
        [sym__type_name] = ACTIONS(SHIFT(45)),
        [sym_identifier] = ACTIONS(SHIFT(46)),
    },
    [42] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [43] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [44] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [45] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(47)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [46] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [47] = {
        [sym__type_identifier] = ACTIONS(SHIFT(48)),
        [sym__type_name] = ACTIONS(SHIFT(45)),
        [sym_identifier] = ACTIONS(SHIFT(46)),
    },
    [48] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [49] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(50)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(38)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [50] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [51] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(52)),
        [anon_sym_as] = ACTIONS(SHIFT(53)),
    },
    [52] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [53] = {
        [sym_type] = ACTIONS(SHIFT(54)),
        [sym__type_identifier] = ACTIONS(SHIFT(44)),
        [sym__type_name] = ACTIONS(SHIFT(45)),
        [sym_identifier] = ACTIONS(SHIFT(46)),
    },
    [54] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
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
        [anon_sym_let] = ACTIONS(SHIFT(61)),
        [anon_sym_var] = ACTIONS(SHIFT(61)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(56)),
        [anon_sym_DOT] = ACTIONS(SHIFT(62)),
        [anon_sym_is] = ACTIONS(SHIFT(63)),
        [sym_identifier] = ACTIONS(SHIFT(64)),
    },
    [60] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
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
        [anon_sym_let] = ACTIONS(SHIFT(61)),
        [anon_sym_var] = ACTIONS(SHIFT(61)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(56)),
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
        [sym__code_block] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
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
        [anon_sym_let] = ACTIONS(SHIFT(61)),
        [anon_sym_var] = ACTIONS(SHIFT(61)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(56)),
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
        [sym__type_identifier] = ACTIONS(SHIFT(89)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [sym_identifier] = ACTIONS(SHIFT(90)),
    },
    [89] = {
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [90] = {
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [91] = {
        [sym_identifier] = ACTIONS(SHIFT(92)),
    },
    [92] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(93)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(38)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [93] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [94] = {
        [sym_catch_clause] = ACTIONS(REDUCE(sym_catch_clause, 3)),
        [aux_sym_do_statement_repeat1] = ACTIONS(REDUCE(sym_catch_clause, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_catch_clause, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_catch_clause, 3)),
        [anon_sym_catch] = ACTIONS(REDUCE(sym_catch_clause, 3)),
    },
    [95] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_do_statement_repeat1, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_do_statement_repeat1, 2)),
    },
    [96] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_defer_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_defer_statement, 2)),
    },
    [97] = {
        [sym__statement] = ACTIONS(SHIFT(23)),
        [sym__loop_statement] = ACTIONS(SHIFT(24)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(24)),
        [sym_guard_statement] = ACTIONS(SHIFT(24)),
        [sym_switch_statement] = ACTIONS(SHIFT(24)),
        [sym_labeled_statement] = ACTIONS(SHIFT(24)),
        [sym_break_statement] = ACTIONS(SHIFT(24)),
        [sym_continue_statement] = ACTIONS(SHIFT(24)),
        [sym_return_statement] = ACTIONS(SHIFT(24)),
        [sym_throw_statement] = ACTIONS(SHIFT(24)),
        [sym_defer_statement] = ACTIONS(SHIFT(24)),
        [sym_do_statement] = ACTIONS(SHIFT(24)),
        [sym__expression] = ACTIONS(SHIFT(24)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(98)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(99)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(24)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [sym__declaration] = ACTIONS(SHIFT(24)),
        [sym_identifier] = ACTIONS(SHIFT(18)),
    },
    [98] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(100)),
    },
    [99] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [100] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [101] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_throw_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_throw_statement, 2)),
    },
    [102] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [103] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_return_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_return_statement, 2)),
    },
    [104] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_continue_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_continue_statement, 2)),
    },
    [105] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_break_statement, 2)),
    },
    [106] = {
        [anon_sym_LBRACE] = ACTIONS(SHIFT(108)),
    },
    [107] = {
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [108] = {
        [sym_case_statement] = ACTIONS(SHIFT(109)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(110)),
        [anon_sym_case] = ACTIONS(SHIFT(111)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(112)),
        [anon_sym_default] = ACTIONS(SHIFT(113)),
    },
    [109] = {
        [sym_case_statement] = ACTIONS(SHIFT(109)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(155)),
        [anon_sym_case] = ACTIONS(SHIFT(111)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 1)),
        [anon_sym_default] = ACTIONS(SHIFT(113)),
    },
    [110] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(154)),
    },
    [111] = {
        [sym__pattern] = ACTIONS(SHIFT(120)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(121)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(121)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(121)),
        [sym_optional_pattern] = ACTIONS(SHIFT(121)),
        [sym_is_pattern] = ACTIONS(SHIFT(121)),
        [sym_as_pattern] = ACTIONS(SHIFT(121)),
        [sym__expression] = ACTIONS(SHIFT(121)),
        [sym__type_identifier] = ACTIONS(SHIFT(122)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(123)),
        [anon_sym_let] = ACTIONS(SHIFT(124)),
        [anon_sym_var] = ACTIONS(SHIFT(124)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(121)),
        [anon_sym_DOT] = ACTIONS(SHIFT(125)),
        [anon_sym_is] = ACTIONS(SHIFT(126)),
        [sym_identifier] = ACTIONS(SHIFT(127)),
    },
    [112] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_switch_statement, 4)),
    },
    [113] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(114)),
    },
    [114] = {
        [sym__statement] = ACTIONS(SHIFT(115)),
        [sym__loop_statement] = ACTIONS(SHIFT(116)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(116)),
        [sym_guard_statement] = ACTIONS(SHIFT(116)),
        [sym_switch_statement] = ACTIONS(SHIFT(116)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [sym_labeled_statement] = ACTIONS(SHIFT(116)),
        [sym_break_statement] = ACTIONS(SHIFT(116)),
        [sym_continue_statement] = ACTIONS(SHIFT(116)),
        [sym_return_statement] = ACTIONS(SHIFT(116)),
        [sym_throw_statement] = ACTIONS(SHIFT(116)),
        [sym_defer_statement] = ACTIONS(SHIFT(116)),
        [sym_do_statement] = ACTIONS(SHIFT(116)),
        [sym__expression] = ACTIONS(SHIFT(116)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(117)),
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
        [sym_fallthrough_statement] = ACTIONS(SHIFT(116)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [sym__declaration] = ACTIONS(SHIFT(116)),
        [sym_identifier] = ACTIONS(SHIFT(18)),
    },
    [115] = {
        [sym__statement] = ACTIONS(SHIFT(115)),
        [sym__loop_statement] = ACTIONS(SHIFT(116)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(116)),
        [sym_guard_statement] = ACTIONS(SHIFT(116)),
        [sym_switch_statement] = ACTIONS(SHIFT(116)),
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [sym_labeled_statement] = ACTIONS(SHIFT(116)),
        [sym_break_statement] = ACTIONS(SHIFT(116)),
        [sym_continue_statement] = ACTIONS(SHIFT(116)),
        [sym_return_statement] = ACTIONS(SHIFT(116)),
        [sym_throw_statement] = ACTIONS(SHIFT(116)),
        [sym_defer_statement] = ACTIONS(SHIFT(116)),
        [sym_do_statement] = ACTIONS(SHIFT(116)),
        [sym__expression] = ACTIONS(SHIFT(116)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(119)),
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
        [sym_fallthrough_statement] = ACTIONS(SHIFT(116)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [sym__declaration] = ACTIONS(SHIFT(116)),
        [sym_identifier] = ACTIONS(SHIFT(18)),
    },
    [116] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(118)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(SHIFT(118)),
    },
    [117] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 3)),
    },
    [118] = {
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
        [sym_throw_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_defer_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_do_statement] = ACTIONS(REDUCE(sym__statement, 2)),
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
        [anon_sym_throw] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_defer] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_do] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [119] = {
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_case] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [120] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(146)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(147)),
        [anon_sym_COLON] = ACTIONS(SHIFT(148)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(137)),
        [anon_sym_as] = ACTIONS(SHIFT(138)),
    },
    [121] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [122] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(143)),
    },
    [123] = {
        [sym__pattern] = ACTIONS(SHIFT(55)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(56)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(56)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(140)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(56)),
        [sym_optional_pattern] = ACTIONS(SHIFT(56)),
        [sym_is_pattern] = ACTIONS(SHIFT(56)),
        [sym_as_pattern] = ACTIONS(SHIFT(56)),
        [sym__expression] = ACTIONS(SHIFT(56)),
        [sym__type_identifier] = ACTIONS(SHIFT(58)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(59)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(141)),
        [anon_sym_let] = ACTIONS(SHIFT(61)),
        [anon_sym_var] = ACTIONS(SHIFT(61)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(56)),
        [anon_sym_DOT] = ACTIONS(SHIFT(62)),
        [anon_sym_is] = ACTIONS(SHIFT(63)),
        [sym_identifier] = ACTIONS(SHIFT(64)),
    },
    [124] = {
        [sym__pattern] = ACTIONS(SHIFT(136)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(121)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(121)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(121)),
        [sym_optional_pattern] = ACTIONS(SHIFT(121)),
        [sym_is_pattern] = ACTIONS(SHIFT(121)),
        [sym_as_pattern] = ACTIONS(SHIFT(121)),
        [sym__expression] = ACTIONS(SHIFT(121)),
        [sym__type_identifier] = ACTIONS(SHIFT(122)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(123)),
        [anon_sym_let] = ACTIONS(SHIFT(124)),
        [anon_sym_var] = ACTIONS(SHIFT(124)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(121)),
        [anon_sym_DOT] = ACTIONS(SHIFT(125)),
        [anon_sym_is] = ACTIONS(SHIFT(126)),
        [sym_identifier] = ACTIONS(SHIFT(127)),
    },
    [125] = {
        [sym_identifier] = ACTIONS(SHIFT(134)),
    },
    [126] = {
        [sym_type] = ACTIONS(SHIFT(128)),
        [sym__type_identifier] = ACTIONS(SHIFT(129)),
        [sym__type_name] = ACTIONS(SHIFT(130)),
        [sym_identifier] = ACTIONS(SHIFT(131)),
    },
    [127] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [128] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [129] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [130] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(132)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [131] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [132] = {
        [sym__type_identifier] = ACTIONS(SHIFT(133)),
        [sym__type_name] = ACTIONS(SHIFT(130)),
        [sym_identifier] = ACTIONS(SHIFT(131)),
    },
    [133] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [134] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(135)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(123)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [135] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [136] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(137)),
        [anon_sym_as] = ACTIONS(SHIFT(138)),
    },
    [137] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [138] = {
        [sym_type] = ACTIONS(SHIFT(139)),
        [sym__type_identifier] = ACTIONS(SHIFT(129)),
        [sym__type_name] = ACTIONS(SHIFT(130)),
        [sym_identifier] = ACTIONS(SHIFT(131)),
    },
    [139] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [140] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(142)),
    },
    [141] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [142] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [143] = {
        [sym_identifier] = ACTIONS(SHIFT(144)),
    },
    [144] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(145)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(123)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [145] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [146] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(152)),
    },
    [147] = {
        [sym__pattern] = ACTIONS(SHIFT(150)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(121)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(121)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(121)),
        [sym_optional_pattern] = ACTIONS(SHIFT(121)),
        [sym_is_pattern] = ACTIONS(SHIFT(121)),
        [sym_as_pattern] = ACTIONS(SHIFT(121)),
        [sym__expression] = ACTIONS(SHIFT(121)),
        [sym__type_identifier] = ACTIONS(SHIFT(122)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(123)),
        [anon_sym_let] = ACTIONS(SHIFT(124)),
        [anon_sym_var] = ACTIONS(SHIFT(124)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(121)),
        [anon_sym_DOT] = ACTIONS(SHIFT(125)),
        [anon_sym_is] = ACTIONS(SHIFT(126)),
        [sym_identifier] = ACTIONS(SHIFT(127)),
    },
    [148] = {
        [sym__statement] = ACTIONS(SHIFT(115)),
        [sym__loop_statement] = ACTIONS(SHIFT(116)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(116)),
        [sym_guard_statement] = ACTIONS(SHIFT(116)),
        [sym_switch_statement] = ACTIONS(SHIFT(116)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [sym_labeled_statement] = ACTIONS(SHIFT(116)),
        [sym_break_statement] = ACTIONS(SHIFT(116)),
        [sym_continue_statement] = ACTIONS(SHIFT(116)),
        [sym_return_statement] = ACTIONS(SHIFT(116)),
        [sym_throw_statement] = ACTIONS(SHIFT(116)),
        [sym_defer_statement] = ACTIONS(SHIFT(116)),
        [sym_do_statement] = ACTIONS(SHIFT(116)),
        [sym__expression] = ACTIONS(SHIFT(116)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(149)),
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
        [sym_fallthrough_statement] = ACTIONS(SHIFT(116)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [sym__declaration] = ACTIONS(SHIFT(116)),
        [sym_identifier] = ACTIONS(SHIFT(18)),
    },
    [149] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 4)),
    },
    [150] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(151)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(147)),
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(137)),
        [anon_sym_as] = ACTIONS(SHIFT(138)),
    },
    [151] = {
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [152] = {
        [sym__statement] = ACTIONS(SHIFT(115)),
        [sym__loop_statement] = ACTIONS(SHIFT(116)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(116)),
        [sym_guard_statement] = ACTIONS(SHIFT(116)),
        [sym_switch_statement] = ACTIONS(SHIFT(116)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [sym_labeled_statement] = ACTIONS(SHIFT(116)),
        [sym_break_statement] = ACTIONS(SHIFT(116)),
        [sym_continue_statement] = ACTIONS(SHIFT(116)),
        [sym_return_statement] = ACTIONS(SHIFT(116)),
        [sym_throw_statement] = ACTIONS(SHIFT(116)),
        [sym_defer_statement] = ACTIONS(SHIFT(116)),
        [sym_do_statement] = ACTIONS(SHIFT(116)),
        [sym__expression] = ACTIONS(SHIFT(116)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(153)),
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
        [sym_fallthrough_statement] = ACTIONS(SHIFT(116)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [sym__declaration] = ACTIONS(SHIFT(116)),
        [sym_identifier] = ACTIONS(SHIFT(18)),
    },
    [153] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 5)),
    },
    [154] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_switch_statement, 5)),
    },
    [155] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 2)),
    },
    [156] = {
        [anon_sym_else] = ACTIONS(SHIFT(230)),
    },
    [157] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(229)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(223)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [158] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1), SHIFT(226)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [159] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [160] = {
        [anon_sym_COMMA] = ACTIONS(SHIFT(220)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [161] = {
        [sym__pattern] = ACTIONS(SHIFT(217)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(167)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(167)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(167)),
        [sym_optional_pattern] = ACTIONS(SHIFT(167)),
        [sym_is_pattern] = ACTIONS(SHIFT(167)),
        [sym_as_pattern] = ACTIONS(SHIFT(167)),
        [sym__expression] = ACTIONS(SHIFT(167)),
        [sym__type_identifier] = ACTIONS(SHIFT(168)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(169)),
        [anon_sym_let] = ACTIONS(SHIFT(170)),
        [anon_sym_var] = ACTIONS(SHIFT(170)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(167)),
        [anon_sym_DOT] = ACTIONS(SHIFT(171)),
        [anon_sym_is] = ACTIONS(SHIFT(172)),
        [sym_identifier] = ACTIONS(SHIFT(173)),
    },
    [162] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(202)),
    },
    [163] = {
        [sym_optional_binding] = ACTIONS(SHIFT(165)),
        [sym__pattern] = ACTIONS(SHIFT(166)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(167)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(167)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(167)),
        [sym_optional_pattern] = ACTIONS(SHIFT(167)),
        [sym_is_pattern] = ACTIONS(SHIFT(167)),
        [sym_as_pattern] = ACTIONS(SHIFT(167)),
        [sym__expression] = ACTIONS(SHIFT(167)),
        [sym__type_identifier] = ACTIONS(SHIFT(168)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(169)),
        [anon_sym_let] = ACTIONS(SHIFT(170)),
        [anon_sym_var] = ACTIONS(SHIFT(170)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(167)),
        [anon_sym_DOT] = ACTIONS(SHIFT(171)),
        [anon_sym_is] = ACTIONS(SHIFT(172)),
        [sym_identifier] = ACTIONS(SHIFT(173)),
    },
    [164] = {
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [165] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(195)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
    },
    [166] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(192)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(183)),
        [anon_sym_as] = ACTIONS(SHIFT(184)),
    },
    [167] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [168] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(189)),
    },
    [169] = {
        [sym__pattern] = ACTIONS(SHIFT(55)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(56)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(56)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(186)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(56)),
        [sym_optional_pattern] = ACTIONS(SHIFT(56)),
        [sym_is_pattern] = ACTIONS(SHIFT(56)),
        [sym_as_pattern] = ACTIONS(SHIFT(56)),
        [sym__expression] = ACTIONS(SHIFT(56)),
        [sym__type_identifier] = ACTIONS(SHIFT(58)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(59)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(187)),
        [anon_sym_let] = ACTIONS(SHIFT(61)),
        [anon_sym_var] = ACTIONS(SHIFT(61)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(56)),
        [anon_sym_DOT] = ACTIONS(SHIFT(62)),
        [anon_sym_is] = ACTIONS(SHIFT(63)),
        [sym_identifier] = ACTIONS(SHIFT(64)),
    },
    [170] = {
        [sym__pattern] = ACTIONS(SHIFT(182)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(167)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(167)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(167)),
        [sym_optional_pattern] = ACTIONS(SHIFT(167)),
        [sym_is_pattern] = ACTIONS(SHIFT(167)),
        [sym_as_pattern] = ACTIONS(SHIFT(167)),
        [sym__expression] = ACTIONS(SHIFT(167)),
        [sym__type_identifier] = ACTIONS(SHIFT(168)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(169)),
        [anon_sym_let] = ACTIONS(SHIFT(170)),
        [anon_sym_var] = ACTIONS(SHIFT(170)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(167)),
        [anon_sym_DOT] = ACTIONS(SHIFT(171)),
        [anon_sym_is] = ACTIONS(SHIFT(172)),
        [sym_identifier] = ACTIONS(SHIFT(173)),
    },
    [171] = {
        [sym_identifier] = ACTIONS(SHIFT(180)),
    },
    [172] = {
        [sym_type] = ACTIONS(SHIFT(174)),
        [sym__type_identifier] = ACTIONS(SHIFT(175)),
        [sym__type_name] = ACTIONS(SHIFT(176)),
        [sym_identifier] = ACTIONS(SHIFT(177)),
    },
    [173] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [174] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [175] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [176] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(178)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [177] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [178] = {
        [sym__type_identifier] = ACTIONS(SHIFT(179)),
        [sym__type_name] = ACTIONS(SHIFT(176)),
        [sym_identifier] = ACTIONS(SHIFT(177)),
    },
    [179] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [180] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(181)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(169)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [181] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [182] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(183)),
        [anon_sym_as] = ACTIONS(SHIFT(184)),
    },
    [183] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [184] = {
        [sym_type] = ACTIONS(SHIFT(185)),
        [sym__type_identifier] = ACTIONS(SHIFT(175)),
        [sym__type_name] = ACTIONS(SHIFT(176)),
        [sym_identifier] = ACTIONS(SHIFT(177)),
    },
    [185] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [186] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(188)),
    },
    [187] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [188] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [189] = {
        [sym_identifier] = ACTIONS(SHIFT(190)),
    },
    [190] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(191)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(169)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [191] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [192] = {
        [sym__expression] = ACTIONS(SHIFT(193)),
        [sym_identifier] = ACTIONS(SHIFT(194)),
    },
    [193] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [194] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [195] = {
        [sym_optional_binding] = ACTIONS(SHIFT(196)),
        [sym__pattern] = ACTIONS(SHIFT(197)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(167)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(167)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(167)),
        [sym_optional_pattern] = ACTIONS(SHIFT(167)),
        [sym_is_pattern] = ACTIONS(SHIFT(167)),
        [sym_as_pattern] = ACTIONS(SHIFT(167)),
        [sym__expression] = ACTIONS(SHIFT(167)),
        [sym__type_identifier] = ACTIONS(SHIFT(168)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(169)),
        [anon_sym_let] = ACTIONS(SHIFT(170)),
        [anon_sym_var] = ACTIONS(SHIFT(170)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(167)),
        [anon_sym_DOT] = ACTIONS(SHIFT(171)),
        [anon_sym_is] = ACTIONS(SHIFT(172)),
        [sym_identifier] = ACTIONS(SHIFT(173)),
    },
    [196] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(SHIFT(201)),
        [anon_sym_COMMA] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
    },
    [197] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(198)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(183)),
        [anon_sym_as] = ACTIONS(SHIFT(184)),
    },
    [198] = {
        [sym__expression] = ACTIONS(SHIFT(199)),
        [sym_identifier] = ACTIONS(SHIFT(200)),
    },
    [199] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [200] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [201] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
    },
    [202] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(203)),
        [anon_sym_iOS] = ACTIONS(SHIFT(204)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(204)),
        [anon_sym_OSX] = ACTIONS(SHIFT(204)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(204)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(204)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(204)),
    },
    [203] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(215)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(216)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(208)),
    },
    [204] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(205)),
    },
    [205] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(206)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(207)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(208)),
    },
    [206] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(214)),
    },
    [207] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 5)),
    },
    [208] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(209)),
        [anon_sym_iOS] = ACTIONS(SHIFT(210)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(210)),
        [anon_sym_OSX] = ACTIONS(SHIFT(210)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(210)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(210)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(210)),
    },
    [209] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(213)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(208)),
    },
    [210] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(211)),
    },
    [211] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(212)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 3)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(208)),
    },
    [212] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 4)),
    },
    [213] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 3)),
    },
    [214] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 6)),
    },
    [215] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(207)),
    },
    [216] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 4)),
    },
    [217] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(218)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(183)),
        [anon_sym_as] = ACTIONS(SHIFT(184)),
    },
    [218] = {
        [sym__expression] = ACTIONS(SHIFT(219)),
        [sym_identifier] = ACTIONS(SHIFT(194)),
    },
    [219] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_case_condition, 4)),
    },
    [220] = {
        [sym__condition] = ACTIONS(SHIFT(221)),
        [sym_availability_condition] = ACTIONS(SHIFT(159)),
        [sym_case_condition] = ACTIONS(SHIFT(159)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(159)),
        [anon_sym_case] = ACTIONS(SHIFT(161)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(162)),
        [anon_sym_let] = ACTIONS(SHIFT(163)),
        [anon_sym_var] = ACTIONS(SHIFT(163)),
    },
    [221] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(222)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(223)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [222] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 4)),
    },
    [223] = {
        [sym__condition] = ACTIONS(SHIFT(224)),
        [sym_availability_condition] = ACTIONS(SHIFT(159)),
        [sym_case_condition] = ACTIONS(SHIFT(159)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(159)),
        [anon_sym_case] = ACTIONS(SHIFT(161)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(162)),
        [anon_sym_let] = ACTIONS(SHIFT(163)),
        [anon_sym_var] = ACTIONS(SHIFT(163)),
    },
    [224] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(225)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(223)),
        [anon_sym_else] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
    },
    [225] = {
        [anon_sym_else] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
    },
    [226] = {
        [sym__expression] = ACTIONS(SHIFT(227)),
        [sym_identifier] = ACTIONS(SHIFT(228)),
    },
    [227] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [228] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [229] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 2)),
    },
    [230] = {
        [sym__code_block] = ACTIONS(SHIFT(231)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(97)),
    },
    [231] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_guard_statement, 4)),
    },
    [232] = {
        [sym__code_block] = ACTIONS(SHIFT(275)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(276)),
    },
    [233] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(274)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(268)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [234] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1), SHIFT(271)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [235] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [236] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(265)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [237] = {
        [sym__pattern] = ACTIONS(SHIFT(262)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(167)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(167)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(167)),
        [sym_optional_pattern] = ACTIONS(SHIFT(167)),
        [sym_is_pattern] = ACTIONS(SHIFT(167)),
        [sym_as_pattern] = ACTIONS(SHIFT(167)),
        [sym__expression] = ACTIONS(SHIFT(167)),
        [sym__type_identifier] = ACTIONS(SHIFT(168)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(169)),
        [anon_sym_let] = ACTIONS(SHIFT(170)),
        [anon_sym_var] = ACTIONS(SHIFT(170)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(167)),
        [anon_sym_DOT] = ACTIONS(SHIFT(171)),
        [anon_sym_is] = ACTIONS(SHIFT(172)),
        [sym_identifier] = ACTIONS(SHIFT(173)),
    },
    [238] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(253)),
    },
    [239] = {
        [sym_optional_binding] = ACTIONS(SHIFT(241)),
        [sym__pattern] = ACTIONS(SHIFT(242)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(167)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(167)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(167)),
        [sym_optional_pattern] = ACTIONS(SHIFT(167)),
        [sym_is_pattern] = ACTIONS(SHIFT(167)),
        [sym_as_pattern] = ACTIONS(SHIFT(167)),
        [sym__expression] = ACTIONS(SHIFT(167)),
        [sym__type_identifier] = ACTIONS(SHIFT(168)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(169)),
        [anon_sym_let] = ACTIONS(SHIFT(170)),
        [anon_sym_var] = ACTIONS(SHIFT(170)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(167)),
        [anon_sym_DOT] = ACTIONS(SHIFT(171)),
        [anon_sym_is] = ACTIONS(SHIFT(172)),
        [sym_identifier] = ACTIONS(SHIFT(173)),
    },
    [240] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [241] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(246)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
    },
    [242] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(243)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(183)),
        [anon_sym_as] = ACTIONS(SHIFT(184)),
    },
    [243] = {
        [sym__expression] = ACTIONS(SHIFT(244)),
        [sym_identifier] = ACTIONS(SHIFT(245)),
    },
    [244] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [245] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [246] = {
        [sym_optional_binding] = ACTIONS(SHIFT(247)),
        [sym__pattern] = ACTIONS(SHIFT(248)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(167)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(167)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(167)),
        [sym_optional_pattern] = ACTIONS(SHIFT(167)),
        [sym_is_pattern] = ACTIONS(SHIFT(167)),
        [sym_as_pattern] = ACTIONS(SHIFT(167)),
        [sym__expression] = ACTIONS(SHIFT(167)),
        [sym__type_identifier] = ACTIONS(SHIFT(168)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(169)),
        [anon_sym_let] = ACTIONS(SHIFT(170)),
        [anon_sym_var] = ACTIONS(SHIFT(170)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(167)),
        [anon_sym_DOT] = ACTIONS(SHIFT(171)),
        [anon_sym_is] = ACTIONS(SHIFT(172)),
        [sym_identifier] = ACTIONS(SHIFT(173)),
    },
    [247] = {
        [sym__code_block] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(SHIFT(252)),
        [anon_sym_COMMA] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
    },
    [248] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(249)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(183)),
        [anon_sym_as] = ACTIONS(SHIFT(184)),
    },
    [249] = {
        [sym__expression] = ACTIONS(SHIFT(250)),
        [sym_identifier] = ACTIONS(SHIFT(251)),
    },
    [250] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [251] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [252] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
    },
    [253] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(254)),
        [anon_sym_iOS] = ACTIONS(SHIFT(255)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(255)),
        [anon_sym_OSX] = ACTIONS(SHIFT(255)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(255)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(255)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(255)),
    },
    [254] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(260)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(261)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(208)),
    },
    [255] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(256)),
    },
    [256] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(257)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(258)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(208)),
    },
    [257] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(259)),
    },
    [258] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 5)),
    },
    [259] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 6)),
    },
    [260] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(258)),
    },
    [261] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 4)),
    },
    [262] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(263)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(183)),
        [anon_sym_as] = ACTIONS(SHIFT(184)),
    },
    [263] = {
        [sym__expression] = ACTIONS(SHIFT(264)),
        [sym_identifier] = ACTIONS(SHIFT(245)),
    },
    [264] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_case_condition, 4)),
    },
    [265] = {
        [sym__condition] = ACTIONS(SHIFT(266)),
        [sym_availability_condition] = ACTIONS(SHIFT(235)),
        [sym_case_condition] = ACTIONS(SHIFT(235)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(235)),
        [anon_sym_case] = ACTIONS(SHIFT(237)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(238)),
        [anon_sym_let] = ACTIONS(SHIFT(239)),
        [anon_sym_var] = ACTIONS(SHIFT(239)),
    },
    [266] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(267)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(268)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [267] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 4)),
    },
    [268] = {
        [sym__condition] = ACTIONS(SHIFT(269)),
        [sym_availability_condition] = ACTIONS(SHIFT(235)),
        [sym_case_condition] = ACTIONS(SHIFT(235)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(235)),
        [anon_sym_case] = ACTIONS(SHIFT(237)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(238)),
        [anon_sym_let] = ACTIONS(SHIFT(239)),
        [anon_sym_var] = ACTIONS(SHIFT(239)),
    },
    [269] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(270)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(268)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
    },
    [270] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
    },
    [271] = {
        [sym__expression] = ACTIONS(SHIFT(272)),
        [sym_identifier] = ACTIONS(SHIFT(273)),
    },
    [272] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [273] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [274] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 2)),
    },
    [275] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_else] = ACTIONS(SHIFT(280)),
    },
    [276] = {
        [sym__statement] = ACTIONS(SHIFT(23)),
        [sym__loop_statement] = ACTIONS(SHIFT(24)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(24)),
        [sym_guard_statement] = ACTIONS(SHIFT(24)),
        [sym_switch_statement] = ACTIONS(SHIFT(24)),
        [sym_labeled_statement] = ACTIONS(SHIFT(24)),
        [sym_break_statement] = ACTIONS(SHIFT(24)),
        [sym_continue_statement] = ACTIONS(SHIFT(24)),
        [sym_return_statement] = ACTIONS(SHIFT(24)),
        [sym_throw_statement] = ACTIONS(SHIFT(24)),
        [sym_defer_statement] = ACTIONS(SHIFT(24)),
        [sym_do_statement] = ACTIONS(SHIFT(24)),
        [sym__expression] = ACTIONS(SHIFT(24)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(277)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(278)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(24)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [sym__declaration] = ACTIONS(SHIFT(24)),
        [sym_identifier] = ACTIONS(SHIFT(18)),
    },
    [277] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(279)),
    },
    [278] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [279] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [280] = {
        [sym_if_statement] = ACTIONS(SHIFT(281)),
        [sym__code_block] = ACTIONS(SHIFT(281)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(97)),
    },
    [281] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_if_statement, 5)),
    },
    [282] = {
        [anon_sym_while] = ACTIONS(SHIFT(287)),
    },
    [283] = {
        [sym__statement] = ACTIONS(SHIFT(23)),
        [sym__loop_statement] = ACTIONS(SHIFT(24)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(24)),
        [sym_guard_statement] = ACTIONS(SHIFT(24)),
        [sym_switch_statement] = ACTIONS(SHIFT(24)),
        [sym_labeled_statement] = ACTIONS(SHIFT(24)),
        [sym_break_statement] = ACTIONS(SHIFT(24)),
        [sym_continue_statement] = ACTIONS(SHIFT(24)),
        [sym_return_statement] = ACTIONS(SHIFT(24)),
        [sym_throw_statement] = ACTIONS(SHIFT(24)),
        [sym_defer_statement] = ACTIONS(SHIFT(24)),
        [sym_do_statement] = ACTIONS(SHIFT(24)),
        [sym__expression] = ACTIONS(SHIFT(24)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(284)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(285)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(24)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [sym__declaration] = ACTIONS(SHIFT(24)),
        [sym_identifier] = ACTIONS(SHIFT(18)),
    },
    [284] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(286)),
    },
    [285] = {
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [286] = {
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [287] = {
        [sym__expression] = ACTIONS(SHIFT(288)),
        [sym_identifier] = ACTIONS(SHIFT(102)),
    },
    [288] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
    },
    [289] = {
        [sym__code_block] = ACTIONS(SHIFT(290)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(97)),
    },
    [290] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_while_statement, 3)),
    },
    [291] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(391)),
    },
    [292] = {
        [sym__code_block] = ACTIONS(SHIFT(390)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(97)),
    },
    [293] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__for_init, 1)),
    },
    [294] = {
        [sym__variable_name] = ACTIONS(SHIFT(375)),
        [sym_identifier] = ACTIONS(SHIFT(376)),
    },
    [295] = {
        [sym__type_annotation] = ACTIONS(SHIFT(371)),
        [anon_sym_in] = ACTIONS(SHIFT(372)),
        [anon_sym_COLON] = ACTIONS(SHIFT(327)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(321)),
        [anon_sym_as] = ACTIONS(SHIFT(322)),
    },
    [296] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [297] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(352)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(353)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [298] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(368)),
    },
    [299] = {
        [sym__expression] = ACTIONS(SHIFT(363)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(364)),
        [sym_identifier] = ACTIONS(SHIFT(347)),
    },
    [300] = {
        [sym__for_init] = ACTIONS(SHIFT(339)),
        [sym__for_condition] = ACTIONS(SHIFT(340)),
        [sym_variable_declaration] = ACTIONS(SHIFT(293)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(294)),
        [sym__pattern] = ACTIONS(SHIFT(55)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(56)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(56)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(316)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(56)),
        [sym_optional_pattern] = ACTIONS(SHIFT(56)),
        [sym_is_pattern] = ACTIONS(SHIFT(56)),
        [sym_as_pattern] = ACTIONS(SHIFT(56)),
        [sym__expression] = ACTIONS(SHIFT(341)),
        [sym__expression_list] = ACTIONS(SHIFT(293)),
        [sym__type_identifier] = ACTIONS(SHIFT(58)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(342)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(59)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(317)),
        [anon_sym_let] = ACTIONS(SHIFT(61)),
        [anon_sym_var] = ACTIONS(SHIFT(343)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(56)),
        [anon_sym_DOT] = ACTIONS(SHIFT(62)),
        [anon_sym_is] = ACTIONS(SHIFT(63)),
        [sym_identifier] = ACTIONS(SHIFT(344)),
    },
    [301] = {
        [sym__pattern] = ACTIONS(SHIFT(324)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(296)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(296)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(296)),
        [sym_optional_pattern] = ACTIONS(SHIFT(296)),
        [sym_is_pattern] = ACTIONS(SHIFT(296)),
        [sym_as_pattern] = ACTIONS(SHIFT(296)),
        [sym__expression] = ACTIONS(SHIFT(296)),
        [sym__type_identifier] = ACTIONS(SHIFT(298)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(315)),
        [anon_sym_let] = ACTIONS(SHIFT(302)),
        [anon_sym_var] = ACTIONS(SHIFT(302)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(296)),
        [anon_sym_DOT] = ACTIONS(SHIFT(304)),
        [anon_sym_is] = ACTIONS(SHIFT(305)),
        [sym_identifier] = ACTIONS(SHIFT(320)),
    },
    [302] = {
        [sym__pattern] = ACTIONS(SHIFT(319)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(296)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(296)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(296)),
        [sym_optional_pattern] = ACTIONS(SHIFT(296)),
        [sym_is_pattern] = ACTIONS(SHIFT(296)),
        [sym_as_pattern] = ACTIONS(SHIFT(296)),
        [sym__expression] = ACTIONS(SHIFT(296)),
        [sym__type_identifier] = ACTIONS(SHIFT(298)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(315)),
        [anon_sym_let] = ACTIONS(SHIFT(302)),
        [anon_sym_var] = ACTIONS(SHIFT(302)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(296)),
        [anon_sym_DOT] = ACTIONS(SHIFT(304)),
        [anon_sym_is] = ACTIONS(SHIFT(305)),
        [sym_identifier] = ACTIONS(SHIFT(320)),
    },
    [303] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(319)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(296)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(296)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(296)),
        [sym_optional_pattern] = ACTIONS(SHIFT(296)),
        [sym_is_pattern] = ACTIONS(SHIFT(296)),
        [sym_as_pattern] = ACTIONS(SHIFT(296)),
        [sym__expression] = ACTIONS(SHIFT(296)),
        [sym__type_identifier] = ACTIONS(SHIFT(298)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(315)),
        [anon_sym_let] = ACTIONS(SHIFT(302)),
        [anon_sym_var] = ACTIONS(SHIFT(302)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(296)),
        [anon_sym_DOT] = ACTIONS(SHIFT(304)),
        [anon_sym_is] = ACTIONS(SHIFT(305)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(320)),
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
    [307] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [308] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [309] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(311)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [310] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
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
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [313] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(314)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(315)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [314] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [315] = {
        [sym__pattern] = ACTIONS(SHIFT(55)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(56)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(56)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(316)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(56)),
        [sym_optional_pattern] = ACTIONS(SHIFT(56)),
        [sym_is_pattern] = ACTIONS(SHIFT(56)),
        [sym_as_pattern] = ACTIONS(SHIFT(56)),
        [sym__expression] = ACTIONS(SHIFT(56)),
        [sym__type_identifier] = ACTIONS(SHIFT(58)),
        [sym__type_name] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(59)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(317)),
        [anon_sym_let] = ACTIONS(SHIFT(61)),
        [anon_sym_var] = ACTIONS(SHIFT(61)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(56)),
        [anon_sym_DOT] = ACTIONS(SHIFT(62)),
        [anon_sym_is] = ACTIONS(SHIFT(63)),
        [sym_identifier] = ACTIONS(SHIFT(64)),
    },
    [316] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(318)),
    },
    [317] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [318] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [319] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(321)),
        [anon_sym_as] = ACTIONS(SHIFT(322)),
    },
    [320] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [321] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [322] = {
        [sym_type] = ACTIONS(SHIFT(323)),
        [sym__type_identifier] = ACTIONS(SHIFT(308)),
        [sym__type_name] = ACTIONS(SHIFT(309)),
        [sym_identifier] = ACTIONS(SHIFT(310)),
    },
    [323] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [324] = {
        [sym__type_annotation] = ACTIONS(SHIFT(325)),
        [anon_sym_in] = ACTIONS(SHIFT(326)),
        [anon_sym_COLON] = ACTIONS(SHIFT(327)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(321)),
        [anon_sym_as] = ACTIONS(SHIFT(322)),
    },
    [325] = {
        [anon_sym_in] = ACTIONS(SHIFT(336)),
    },
    [326] = {
        [sym__expression] = ACTIONS(SHIFT(334)),
        [sym_identifier] = ACTIONS(SHIFT(273)),
    },
    [327] = {
        [sym_type] = ACTIONS(SHIFT(328)),
        [sym__type_identifier] = ACTIONS(SHIFT(329)),
        [sym__type_name] = ACTIONS(SHIFT(330)),
        [sym_identifier] = ACTIONS(SHIFT(331)),
    },
    [328] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [329] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [330] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(332)),
    },
    [331] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [332] = {
        [sym__type_identifier] = ACTIONS(SHIFT(333)),
        [sym__type_name] = ACTIONS(SHIFT(330)),
        [sym_identifier] = ACTIONS(SHIFT(331)),
    },
    [333] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [334] = {
        [sym__code_block] = ACTIONS(SHIFT(335)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(97)),
    },
    [335] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
    },
    [336] = {
        [sym__expression] = ACTIONS(SHIFT(337)),
        [sym_identifier] = ACTIONS(SHIFT(273)),
    },
    [337] = {
        [sym__code_block] = ACTIONS(SHIFT(338)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(97)),
    },
    [338] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
    },
    [339] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(359)),
    },
    [340] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(357)),
    },
    [341] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(352)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1), SHIFT(353)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [342] = {
        [sym__expression] = ACTIONS(SHIFT(345)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(346)),
        [sym_identifier] = ACTIONS(SHIFT(347)),
    },
    [343] = {
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
        [anon_sym_let] = ACTIONS(SHIFT(61)),
        [anon_sym_var] = ACTIONS(SHIFT(61)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(56)),
        [anon_sym_DOT] = ACTIONS(SHIFT(62)),
        [anon_sym_is] = ACTIONS(SHIFT(63)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(64)),
    },
    [344] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [345] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(350)),
    },
    [346] = {
        [sym__expression] = ACTIONS(SHIFT(348)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(349)),
    },
    [347] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [348] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [349] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [350] = {
        [sym__expression] = ACTIONS(SHIFT(351)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(349)),
    },
    [351] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [352] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 2)),
    },
    [353] = {
        [sym__expression] = ACTIONS(SHIFT(354)),
        [sym_identifier] = ACTIONS(SHIFT(355)),
    },
    [354] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(356)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(353)),
    },
    [355] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [356] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 3)),
    },
    [357] = {
        [sym__code_block] = ACTIONS(SHIFT(358)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(97)),
    },
    [358] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_statement, 5)),
    },
    [359] = {
        [sym__expression] = ACTIONS(SHIFT(360)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(350)),
        [sym_identifier] = ACTIONS(SHIFT(347)),
    },
    [360] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(361)),
    },
    [361] = {
        [sym__expression] = ACTIONS(SHIFT(362)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(349)),
    },
    [362] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [363] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(366)),
    },
    [364] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym__expression] = ACTIONS(SHIFT(365)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(273)),
    },
    [365] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [366] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym__expression] = ACTIONS(SHIFT(367)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(273)),
    },
    [367] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [368] = {
        [sym_identifier] = ACTIONS(SHIFT(369)),
    },
    [369] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(370)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(315)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [370] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [371] = {
        [anon_sym_in] = ACTIONS(SHIFT(326)),
    },
    [372] = {
        [sym__expression] = ACTIONS(SHIFT(373)),
        [sym_identifier] = ACTIONS(SHIFT(273)),
    },
    [373] = {
        [sym__code_block] = ACTIONS(SHIFT(374)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(97)),
    },
    [374] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
    },
    [375] = {
        [sym__type_annotation] = ACTIONS(SHIFT(377)),
        [anon_sym_COLON] = ACTIONS(SHIFT(378)),
    },
    [376] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__variable_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__variable_name, 1)),
    },
    [377] = {
        [sym__code_block] = ACTIONS(SHIFT(385)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(386)),
    },
    [378] = {
        [sym_type] = ACTIONS(SHIFT(379)),
        [sym__type_identifier] = ACTIONS(SHIFT(380)),
        [sym__type_name] = ACTIONS(SHIFT(381)),
        [sym_identifier] = ACTIONS(SHIFT(382)),
    },
    [379] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [380] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [381] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(383)),
    },
    [382] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [383] = {
        [sym__type_identifier] = ACTIONS(SHIFT(384)),
        [sym__type_name] = ACTIONS(SHIFT(381)),
        [sym_identifier] = ACTIONS(SHIFT(382)),
    },
    [384] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [385] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_variable_declaration, 4)),
    },
    [386] = {
        [sym__statement] = ACTIONS(SHIFT(23)),
        [sym__loop_statement] = ACTIONS(SHIFT(24)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(24)),
        [sym_guard_statement] = ACTIONS(SHIFT(24)),
        [sym_switch_statement] = ACTIONS(SHIFT(24)),
        [sym_labeled_statement] = ACTIONS(SHIFT(24)),
        [sym_break_statement] = ACTIONS(SHIFT(24)),
        [sym_continue_statement] = ACTIONS(SHIFT(24)),
        [sym_return_statement] = ACTIONS(SHIFT(24)),
        [sym_throw_statement] = ACTIONS(SHIFT(24)),
        [sym_defer_statement] = ACTIONS(SHIFT(24)),
        [sym_do_statement] = ACTIONS(SHIFT(24)),
        [sym__expression] = ACTIONS(SHIFT(24)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(387)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_while] = ACTIONS(SHIFT(7)),
        [anon_sym_repeat] = ACTIONS(SHIFT(8)),
        [anon_sym_if] = ACTIONS(SHIFT(9)),
        [anon_sym_guard] = ACTIONS(SHIFT(10)),
        [anon_sym_switch] = ACTIONS(SHIFT(11)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(388)),
        [anon_sym_break] = ACTIONS(SHIFT(12)),
        [anon_sym_continue] = ACTIONS(SHIFT(13)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(24)),
        [anon_sym_return] = ACTIONS(SHIFT(14)),
        [anon_sym_throw] = ACTIONS(SHIFT(15)),
        [anon_sym_defer] = ACTIONS(SHIFT(16)),
        [anon_sym_do] = ACTIONS(SHIFT(17)),
        [sym__declaration] = ACTIONS(SHIFT(24)),
        [sym_identifier] = ACTIONS(SHIFT(18)),
    },
    [387] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(389)),
    },
    [388] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [389] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [390] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_statement, 3)),
    },
    [391] = {
        [sym__expression] = ACTIONS(SHIFT(392)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(366)),
        [sym_identifier] = ACTIONS(SHIFT(347)),
    },
    [392] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(393)),
    },
    [393] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym__expression] = ACTIONS(SHIFT(394)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(273)),
    },
    [394] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [395] = {
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
        [sym_throw_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_defer_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_do_statement] = ACTIONS(REDUCE(sym__statement, 2)),
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
        [anon_sym_throw] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_defer] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_do] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [396] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_swift);
