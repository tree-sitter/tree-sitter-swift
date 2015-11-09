#include "tree_sitter/parser.h"

#define STATE_COUNT 484
#define SYMBOL_COUNT 135

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
    sym_build_configuration_statement,
    sym__build_configuration,
    sym_line_control_statement,
    sym__declaration,
    sym_import_declaration,
    sym_constant_declaration,
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
    sym_boolean_literal,
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
    aux_sym_build_configuration_statement_repeat1,
    aux_sym_import_declaration_repeat1,
    aux_sym_constant_declaration_repeat1,
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
    anon_sym_POUNDif,
    anon_sym_POUNDelseif,
    anon_sym_POUNDelse,
    anon_sym_POUNDendif,
    anon_sym_os,
    anon_sym_arch,
    anon_sym_i386,
    anon_sym_x86_64,
    anon_sym_arm,
    anon_sym_arm64,
    anon_sym_BANG,
    anon_sym_AMP_AMP,
    anon_sym_PIPE_PIPE,
    anon_sym_POUNDline,
    aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH,
    aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LPAREN_BSLASH_BSLASH_BSLASH_BSLASH_LPAREN_LBRACK_BSLASH_BSLASH0tnr_SQUOTE_BSLASH_DQUOTE_RBRACK_PIPEu_BSLASH_BSLASH_LBRACE_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA8_RBRACE_BSLASH_BSLASH_RBRACE_RPAREN_RPAREN_PIPE_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_BSLASH_BSLASH_BSLASH_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH,
    anon_sym_import,
    anon_sym_typealias,
    anon_sym_struct,
    anon_sym_class,
    anon_sym_enum,
    anon_sym_protocol,
    anon_sym_func,
    anon_sym_DOT,
    sym_wildcard_pattern,
    anon_sym_QMARK,
    anon_sym_is,
    anon_sym_as,
    anon_sym_true,
    anon_sym_false,
    sym_identifier,
    sym_operator,
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
    [sym_build_configuration_statement] = "build_configuration_statement",
    [sym__build_configuration] = "_build_configuration",
    [sym_line_control_statement] = "line_control_statement",
    [sym__declaration] = "_declaration",
    [sym_import_declaration] = "import_declaration",
    [sym_constant_declaration] = "constant_declaration",
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
    [sym_boolean_literal] = "boolean_literal",
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
    [aux_sym_build_configuration_statement_repeat1] = "build_configuration_statement_repeat1",
    [aux_sym_import_declaration_repeat1] = "import_declaration_repeat1",
    [aux_sym_constant_declaration_repeat1] = "constant_declaration_repeat1",
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
    [anon_sym_POUNDif] = "#if",
    [anon_sym_POUNDelseif] = "#elseif",
    [anon_sym_POUNDelse] = "#else",
    [anon_sym_POUNDendif] = "#endif",
    [anon_sym_os] = "os",
    [anon_sym_arch] = "arch",
    [anon_sym_i386] = "i386",
    [anon_sym_x86_64] = "x86_64",
    [anon_sym_arm] = "arm",
    [anon_sym_arm64] = "arm64",
    [anon_sym_BANG] = "!",
    [anon_sym_AMP_AMP] = "&&",
    [anon_sym_PIPE_PIPE] = "||",
    [anon_sym_POUNDline] = "#line",
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = "/[0-9]+/",
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LPAREN_BSLASH_BSLASH_BSLASH_BSLASH_LPAREN_LBRACK_BSLASH_BSLASH0tnr_SQUOTE_BSLASH_DQUOTE_RBRACK_PIPEu_BSLASH_BSLASH_LBRACE_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA8_RBRACE_BSLASH_BSLASH_RBRACE_RPAREN_RPAREN_PIPE_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_BSLASH_BSLASH_BSLASH_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = "/\"((\\\\([\\0tnr'\"]|u\\{[a-fA-F0-9]{1,8}\\}))|[^\"\\\\])*\"/",
    [anon_sym_import] = "import",
    [anon_sym_typealias] = "typealias",
    [anon_sym_struct] = "struct",
    [anon_sym_class] = "class",
    [anon_sym_enum] = "enum",
    [anon_sym_protocol] = "protocol",
    [anon_sym_func] = "func",
    [anon_sym_DOT] = ".",
    [sym_wildcard_pattern] = "wildcard_pattern",
    [anon_sym_QMARK] = "?",
    [anon_sym_is] = "is",
    [anon_sym_as] = "as",
    [anon_sym_true] = "true",
    [anon_sym_false] = "false",
    [sym_identifier] = "identifier",
    [sym_operator] = "operator",
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
    [sym_build_configuration_statement] = TSNodeTypeNamed,
    [sym__build_configuration] = TSNodeTypeHidden,
    [sym_line_control_statement] = TSNodeTypeNamed,
    [sym__declaration] = TSNodeTypeHidden,
    [sym_import_declaration] = TSNodeTypeNamed,
    [sym_constant_declaration] = TSNodeTypeNamed,
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
    [sym_boolean_literal] = TSNodeTypeNamed,
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
    [aux_sym_build_configuration_statement_repeat1] = TSNodeTypeHidden,
    [aux_sym_import_declaration_repeat1] = TSNodeTypeHidden,
    [aux_sym_constant_declaration_repeat1] = TSNodeTypeHidden,
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
    [anon_sym_POUNDif] = TSNodeTypeAnonymous,
    [anon_sym_POUNDelseif] = TSNodeTypeAnonymous,
    [anon_sym_POUNDelse] = TSNodeTypeAnonymous,
    [anon_sym_POUNDendif] = TSNodeTypeAnonymous,
    [anon_sym_os] = TSNodeTypeAnonymous,
    [anon_sym_arch] = TSNodeTypeAnonymous,
    [anon_sym_i386] = TSNodeTypeAnonymous,
    [anon_sym_x86_64] = TSNodeTypeAnonymous,
    [anon_sym_arm] = TSNodeTypeAnonymous,
    [anon_sym_arm64] = TSNodeTypeAnonymous,
    [anon_sym_BANG] = TSNodeTypeAnonymous,
    [anon_sym_AMP_AMP] = TSNodeTypeAnonymous,
    [anon_sym_PIPE_PIPE] = TSNodeTypeAnonymous,
    [anon_sym_POUNDline] = TSNodeTypeAnonymous,
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = TSNodeTypeHidden,
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LPAREN_BSLASH_BSLASH_BSLASH_BSLASH_LPAREN_LBRACK_BSLASH_BSLASH0tnr_SQUOTE_BSLASH_DQUOTE_RBRACK_PIPEu_BSLASH_BSLASH_LBRACE_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA8_RBRACE_BSLASH_BSLASH_RBRACE_RPAREN_RPAREN_PIPE_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_BSLASH_BSLASH_BSLASH_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = TSNodeTypeHidden,
    [anon_sym_import] = TSNodeTypeAnonymous,
    [anon_sym_typealias] = TSNodeTypeAnonymous,
    [anon_sym_struct] = TSNodeTypeAnonymous,
    [anon_sym_class] = TSNodeTypeAnonymous,
    [anon_sym_enum] = TSNodeTypeAnonymous,
    [anon_sym_protocol] = TSNodeTypeAnonymous,
    [anon_sym_func] = TSNodeTypeAnonymous,
    [anon_sym_DOT] = TSNodeTypeAnonymous,
    [sym_wildcard_pattern] = TSNodeTypeNamed,
    [anon_sym_QMARK] = TSNodeTypeAnonymous,
    [anon_sym_is] = TSNodeTypeAnonymous,
    [anon_sym_as] = TSNodeTypeAnonymous,
    [anon_sym_true] = TSNodeTypeAnonymous,
    [anon_sym_false] = TSNodeTypeAnonymous,
    [sym_identifier] = TSNodeTypeNamed,
    [sym_operator] = TSNodeTypeNamed,
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
            if (lookahead == '#')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'b')
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(27);
            if (lookahead == 'f')
                ADVANCE(33);
            if (lookahead == 'g')
                ADVANCE(46);
            if (lookahead == 'i')
                ADVANCE(51);
            if (lookahead == 'l')
                ADVANCE(58);
            if (lookahead == 'r')
                ADVANCE(61);
            if (lookahead == 's')
                ADVANCE(71);
            if (lookahead == 't')
                ADVANCE(77);
            if (lookahead == 'w')
                ADVANCE(82);
            LEX_ERROR();
        case 2:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 3:
            if (lookahead == 'i')
                ADVANCE(4);
            if (lookahead == 'l')
                ADVANCE(6);
            LEX_ERROR();
        case 4:
            if (lookahead == 'f')
                ADVANCE(5);
            LEX_ERROR();
        case 5:
            ACCEPT_TOKEN(anon_sym_POUNDif);
        case 6:
            if (lookahead == 'i')
                ADVANCE(7);
            LEX_ERROR();
        case 7:
            if (lookahead == 'n')
                ADVANCE(8);
            LEX_ERROR();
        case 8:
            if (lookahead == 'e')
                ADVANCE(9);
            LEX_ERROR();
        case 9:
            ACCEPT_TOKEN(anon_sym_POUNDline);
        case 10:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 11:
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            LEX_ERROR();
        case 12:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            if (lookahead == '`')
                ADVANCE(13);
            LEX_ERROR();
        case 13:
            ACCEPT_TOKEN(sym_identifier);
        case 14:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(15);
            ACCEPT_TOKEN(sym_identifier);
        case 15:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(16);
            ACCEPT_TOKEN(sym_identifier);
        case 16:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(17);
            ACCEPT_TOKEN(sym_identifier);
        case 17:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'j') ||
                ('l' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'k')
                ADVANCE(18);
            ACCEPT_TOKEN(sym_identifier);
        case 18:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_break);
        case 19:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(20);
            ACCEPT_TOKEN(sym_identifier);
        case 20:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(21);
            ACCEPT_TOKEN(sym_identifier);
        case 21:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(22);
            ACCEPT_TOKEN(sym_identifier);
        case 22:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(23);
            ACCEPT_TOKEN(sym_identifier);
        case 23:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(24);
            ACCEPT_TOKEN(sym_identifier);
        case 24:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(25);
            ACCEPT_TOKEN(sym_identifier);
        case 25:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(26);
            ACCEPT_TOKEN(sym_identifier);
        case 26:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_continue);
        case 27:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(28);
            if (lookahead == 'o')
                ADVANCE(32);
            ACCEPT_TOKEN(sym_identifier);
        case 28:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'f')
                ADVANCE(29);
            ACCEPT_TOKEN(sym_identifier);
        case 29:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(30);
            ACCEPT_TOKEN(sym_identifier);
        case 30:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(31);
            ACCEPT_TOKEN(sym_identifier);
        case 31:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_defer);
        case 32:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_do);
        case 33:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(34);
            if (lookahead == 'o')
                ADVANCE(44);
            ACCEPT_TOKEN(sym_identifier);
        case 34:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(35);
            ACCEPT_TOKEN(sym_identifier);
        case 35:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier);
        case 36:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(37);
            ACCEPT_TOKEN(sym_identifier);
        case 37:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(38);
            ACCEPT_TOKEN(sym_identifier);
        case 38:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(39);
            ACCEPT_TOKEN(sym_identifier);
        case 39:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(40);
            ACCEPT_TOKEN(sym_identifier);
        case 40:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(41);
            ACCEPT_TOKEN(sym_identifier);
        case 41:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'g')
                ADVANCE(42);
            ACCEPT_TOKEN(sym_identifier);
        case 42:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(43);
            ACCEPT_TOKEN(sym_identifier);
        case 43:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_fallthrough_statement);
        case 44:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(45);
            ACCEPT_TOKEN(sym_identifier);
        case 45:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_for);
        case 46:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(47);
            ACCEPT_TOKEN(sym_identifier);
        case 47:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(48);
            ACCEPT_TOKEN(sym_identifier);
        case 48:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(49);
            ACCEPT_TOKEN(sym_identifier);
        case 49:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'd')
                ADVANCE(50);
            ACCEPT_TOKEN(sym_identifier);
        case 50:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_guard);
        case 51:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'f')
                ADVANCE(52);
            if (lookahead == 'm')
                ADVANCE(53);
            ACCEPT_TOKEN(sym_identifier);
        case 52:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_if);
        case 53:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(54);
            ACCEPT_TOKEN(sym_identifier);
        case 54:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(55);
            ACCEPT_TOKEN(sym_identifier);
        case 55:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(56);
            ACCEPT_TOKEN(sym_identifier);
        case 56:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(57);
            ACCEPT_TOKEN(sym_identifier);
        case 57:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_import);
        case 58:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(59);
            ACCEPT_TOKEN(sym_identifier);
        case 59:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(60);
            ACCEPT_TOKEN(sym_identifier);
        case 60:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_let);
        case 61:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(62);
            ACCEPT_TOKEN(sym_identifier);
        case 62:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(63);
            if (lookahead == 't')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier);
        case 63:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(64);
            ACCEPT_TOKEN(sym_identifier);
        case 64:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(65);
            ACCEPT_TOKEN(sym_identifier);
        case 65:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(66);
            ACCEPT_TOKEN(sym_identifier);
        case 66:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_repeat);
        case 67:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(68);
            ACCEPT_TOKEN(sym_identifier);
        case 68:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(69);
            ACCEPT_TOKEN(sym_identifier);
        case 69:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(70);
            ACCEPT_TOKEN(sym_identifier);
        case 70:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_return);
        case 71:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'w')
                ADVANCE(72);
            ACCEPT_TOKEN(sym_identifier);
        case 72:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(73);
            ACCEPT_TOKEN(sym_identifier);
        case 73:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(74);
            ACCEPT_TOKEN(sym_identifier);
        case 74:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(75);
            ACCEPT_TOKEN(sym_identifier);
        case 75:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(76);
            ACCEPT_TOKEN(sym_identifier);
        case 76:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_switch);
        case 77:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(78);
            ACCEPT_TOKEN(sym_identifier);
        case 78:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(79);
            ACCEPT_TOKEN(sym_identifier);
        case 79:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier);
        case 80:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'w')
                ADVANCE(81);
            ACCEPT_TOKEN(sym_identifier);
        case 81:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_throw);
        case 82:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(83);
            ACCEPT_TOKEN(sym_identifier);
        case 83:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(84);
            ACCEPT_TOKEN(sym_identifier);
        case 84:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(85);
            ACCEPT_TOKEN(sym_identifier);
        case 85:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(86);
            ACCEPT_TOKEN(sym_identifier);
        case 86:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_while);
        case 87:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(87);
            LEX_ERROR();
        case 88:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(88);
            if (lookahead == '\n')
                ADVANCE(89);
            if (lookahead == ';')
                ADVANCE(90);
            LEX_ERROR();
        case 89:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 90:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 91:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(91);
            if (lookahead == '(')
                ADVANCE(92);
            if (lookahead == '.')
                ADVANCE(93);
            if (lookahead == ';')
                ADVANCE(90);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(94);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'c')
                ADVANCE(95);
            if (lookahead == 'i')
                ADVANCE(99);
            if (lookahead == 'l')
                ADVANCE(58);
            if (lookahead == 'v')
                ADVANCE(101);
            LEX_ERROR();
        case 92:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 93:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 94:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_wildcard_pattern);
        case 95:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(96);
            ACCEPT_TOKEN(sym_identifier);
        case 96:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(97);
            ACCEPT_TOKEN(sym_identifier);
        case 97:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(98);
            ACCEPT_TOKEN(sym_identifier);
        case 98:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_case);
        case 99:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(100);
            ACCEPT_TOKEN(sym_identifier);
        case 100:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_is);
        case 101:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(102);
            ACCEPT_TOKEN(sym_identifier);
        case 102:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(103);
            ACCEPT_TOKEN(sym_identifier);
        case 103:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_var);
        case 104:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(104);
            if (lookahead == '#')
                ADVANCE(105);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'c')
                ADVANCE(95);
            if (lookahead == 'l')
                ADVANCE(58);
            if (lookahead == 'v')
                ADVANCE(101);
            LEX_ERROR();
        case 105:
            if (lookahead == 'a')
                ADVANCE(106);
            LEX_ERROR();
        case 106:
            if (lookahead == 'v')
                ADVANCE(107);
            LEX_ERROR();
        case 107:
            if (lookahead == 'a')
                ADVANCE(108);
            LEX_ERROR();
        case 108:
            if (lookahead == 'i')
                ADVANCE(109);
            LEX_ERROR();
        case 109:
            if (lookahead == 'l')
                ADVANCE(110);
            LEX_ERROR();
        case 110:
            if (lookahead == 'a')
                ADVANCE(111);
            LEX_ERROR();
        case 111:
            if (lookahead == 'b')
                ADVANCE(112);
            LEX_ERROR();
        case 112:
            if (lookahead == 'l')
                ADVANCE(113);
            LEX_ERROR();
        case 113:
            if (lookahead == 'e')
                ADVANCE(114);
            LEX_ERROR();
        case 114:
            ACCEPT_TOKEN(anon_sym_POUNDavailable);
        case 115:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(115);
            if (lookahead == '(')
                ADVANCE(92);
            if (lookahead == '.')
                ADVANCE(93);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(94);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(99);
            if (lookahead == 'l')
                ADVANCE(58);
            if (lookahead == 'v')
                ADVANCE(101);
            LEX_ERROR();
        case 116:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(116);
            if (lookahead == '{')
                ADVANCE(117);
            LEX_ERROR();
        case 117:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 118:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(118);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            LEX_ERROR();
        case 119:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(119);
            if (lookahead == '\n')
                ADVANCE(120);
            if (lookahead == ';')
                ADVANCE(90);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            LEX_ERROR();
        case 120:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 121:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(121);
            if (lookahead == '!')
                ADVANCE(122);
            if (lookahead == '(')
                ADVANCE(92);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'a')
                ADVANCE(123);
            if (lookahead == 'f')
                ADVANCE(127);
            if (lookahead == 'o')
                ADVANCE(132);
            if (lookahead == 't')
                ADVANCE(134);
            LEX_ERROR();
        case 122:
            ACCEPT_TOKEN(anon_sym_BANG);
        case 123:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(124);
            ACCEPT_TOKEN(sym_identifier);
        case 124:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(125);
            ACCEPT_TOKEN(sym_identifier);
        case 125:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(126);
            ACCEPT_TOKEN(sym_identifier);
        case 126:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_arch);
        case 127:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(128);
            ACCEPT_TOKEN(sym_identifier);
        case 128:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(129);
            ACCEPT_TOKEN(sym_identifier);
        case 129:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(130);
            ACCEPT_TOKEN(sym_identifier);
        case 130:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(131);
            ACCEPT_TOKEN(sym_identifier);
        case 131:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_false);
        case 132:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(133);
            ACCEPT_TOKEN(sym_identifier);
        case 133:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_os);
        case 134:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(135);
            ACCEPT_TOKEN(sym_identifier);
        case 135:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(136);
            ACCEPT_TOKEN(sym_identifier);
        case 136:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(137);
            ACCEPT_TOKEN(sym_identifier);
        case 137:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_true);
        case 138:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(138);
            if (lookahead == '\n')
                ADVANCE(139);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(140);
            if (lookahead == ';')
                ADVANCE(90);
            LEX_ERROR();
        case 139:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 140:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(140);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH);
        case 141:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(141);
            if (lookahead == '!')
                ADVANCE(142);
            if (lookahead == '%')
                ADVANCE(142);
            if (lookahead == '&')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(142);
            if (lookahead == '+')
                ADVANCE(142);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(142);
            if (lookahead == '<')
                ADVANCE(142);
            if (lookahead == '=')
                ADVANCE(142);
            if (lookahead == '>')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(142);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                ('g' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 'r') ||
                (lookahead == 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '^')
                ADVANCE(142);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'c')
                ADVANCE(143);
            if (lookahead == 'e')
                ADVANCE(148);
            if (lookahead == 'f')
                ADVANCE(152);
            if (lookahead == 'p')
                ADVANCE(156);
            if (lookahead == 's')
                ADVANCE(164);
            if (lookahead == 't')
                ADVANCE(170);
            if (lookahead == 'v')
                ADVANCE(101);
            if (lookahead == '|')
                ADVANCE(142);
            if (lookahead == '~')
                ADVANCE(142);
            LEX_ERROR();
        case 142:
            if (lookahead == '!')
                ADVANCE(142);
            if (lookahead == '%')
                ADVANCE(142);
            if (lookahead == '&')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(142);
            if (lookahead == '+')
                ADVANCE(142);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(142);
            if (lookahead == '<')
                ADVANCE(142);
            if (lookahead == '=')
                ADVANCE(142);
            if (lookahead == '>')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(142);
            if (lookahead == '^')
                ADVANCE(142);
            if (lookahead == '|')
                ADVANCE(142);
            if (lookahead == '~')
                ADVANCE(142);
            ACCEPT_TOKEN(sym_operator);
        case 143:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(144);
            ACCEPT_TOKEN(sym_identifier);
        case 144:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(145);
            ACCEPT_TOKEN(sym_identifier);
        case 145:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(146);
            ACCEPT_TOKEN(sym_identifier);
        case 146:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(147);
            ACCEPT_TOKEN(sym_identifier);
        case 147:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_class);
        case 148:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(149);
            ACCEPT_TOKEN(sym_identifier);
        case 149:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(150);
            ACCEPT_TOKEN(sym_identifier);
        case 150:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'm')
                ADVANCE(151);
            ACCEPT_TOKEN(sym_identifier);
        case 151:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_enum);
        case 152:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(153);
            ACCEPT_TOKEN(sym_identifier);
        case 153:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(154);
            ACCEPT_TOKEN(sym_identifier);
        case 154:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(155);
            ACCEPT_TOKEN(sym_identifier);
        case 155:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_func);
        case 156:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(157);
            ACCEPT_TOKEN(sym_identifier);
        case 157:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(158);
            ACCEPT_TOKEN(sym_identifier);
        case 158:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(159);
            ACCEPT_TOKEN(sym_identifier);
        case 159:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(160);
            ACCEPT_TOKEN(sym_identifier);
        case 160:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(161);
            ACCEPT_TOKEN(sym_identifier);
        case 161:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(162);
            ACCEPT_TOKEN(sym_identifier);
        case 162:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(163);
            ACCEPT_TOKEN(sym_identifier);
        case 163:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_protocol);
        case 164:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(165);
            ACCEPT_TOKEN(sym_identifier);
        case 165:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(166);
            ACCEPT_TOKEN(sym_identifier);
        case 166:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(167);
            ACCEPT_TOKEN(sym_identifier);
        case 167:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(168);
            ACCEPT_TOKEN(sym_identifier);
        case 168:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(169);
            ACCEPT_TOKEN(sym_identifier);
        case 169:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_struct);
        case 170:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(10);
            if (lookahead == 'y')
                ADVANCE(171);
            ACCEPT_TOKEN(sym_identifier);
        case 171:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(172);
            ACCEPT_TOKEN(sym_identifier);
        case 172:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(173);
            ACCEPT_TOKEN(sym_identifier);
        case 173:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(174);
            ACCEPT_TOKEN(sym_identifier);
        case 174:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(175);
            ACCEPT_TOKEN(sym_identifier);
        case 175:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(176);
            ACCEPT_TOKEN(sym_identifier);
        case 176:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(177);
            ACCEPT_TOKEN(sym_identifier);
        case 177:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(178);
            ACCEPT_TOKEN(sym_identifier);
        case 178:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_typealias);
        case 179:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(179);
            if (lookahead == '\n')
                ADVANCE(180);
            if (lookahead == ':')
                ADVANCE(181);
            if (lookahead == ';')
                ADVANCE(90);
            LEX_ERROR();
        case 180:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 181:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 182:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(182);
            if (lookahead == 'f')
                ADVANCE(183);
            if (lookahead == 'i')
                ADVANCE(186);
            if (lookahead == 'r')
                ADVANCE(188);
            if (lookahead == 'w')
                ADVANCE(194);
            LEX_ERROR();
        case 183:
            if (lookahead == 'o')
                ADVANCE(184);
            LEX_ERROR();
        case 184:
            if (lookahead == 'r')
                ADVANCE(185);
            LEX_ERROR();
        case 185:
            ACCEPT_TOKEN(anon_sym_for);
        case 186:
            if (lookahead == 'f')
                ADVANCE(187);
            LEX_ERROR();
        case 187:
            ACCEPT_TOKEN(anon_sym_if);
        case 188:
            if (lookahead == 'e')
                ADVANCE(189);
            LEX_ERROR();
        case 189:
            if (lookahead == 'p')
                ADVANCE(190);
            LEX_ERROR();
        case 190:
            if (lookahead == 'e')
                ADVANCE(191);
            LEX_ERROR();
        case 191:
            if (lookahead == 'a')
                ADVANCE(192);
            LEX_ERROR();
        case 192:
            if (lookahead == 't')
                ADVANCE(193);
            LEX_ERROR();
        case 193:
            ACCEPT_TOKEN(anon_sym_repeat);
        case 194:
            if (lookahead == 'h')
                ADVANCE(195);
            LEX_ERROR();
        case 195:
            if (lookahead == 'i')
                ADVANCE(196);
            LEX_ERROR();
        case 196:
            if (lookahead == 'l')
                ADVANCE(197);
            LEX_ERROR();
        case 197:
            if (lookahead == 'e')
                ADVANCE(198);
            LEX_ERROR();
        case 198:
            ACCEPT_TOKEN(anon_sym_while);
        case 199:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(199);
            if (lookahead == '!')
                ADVANCE(142);
            if (lookahead == '%')
                ADVANCE(142);
            if (lookahead == '&')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(142);
            if (lookahead == '+')
                ADVANCE(142);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(142);
            if (lookahead == '<')
                ADVANCE(142);
            if (lookahead == '=')
                ADVANCE(142);
            if (lookahead == '>')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(142);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '^')
                ADVANCE(142);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == '|')
                ADVANCE(142);
            if (lookahead == '~')
                ADVANCE(142);
            LEX_ERROR();
        case 200:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(200);
            if (lookahead == '\n')
                ADVANCE(201);
            if (lookahead == '.')
                ADVANCE(93);
            if (lookahead == ';')
                ADVANCE(90);
            LEX_ERROR();
        case 201:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 202:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(202);
            if (lookahead == '\"')
                ADVANCE(203);
            LEX_ERROR();
        case 203:
            if (lookahead == '\"')
                ADVANCE(204);
            if (lookahead == '\\')
                ADVANCE(205);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(203);
            LEX_ERROR();
        case 204:
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LPAREN_BSLASH_BSLASH_BSLASH_BSLASH_LPAREN_LBRACK_BSLASH_BSLASH0tnr_SQUOTE_BSLASH_DQUOTE_RBRACK_PIPEu_BSLASH_BSLASH_LBRACE_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA8_RBRACE_BSLASH_BSLASH_RBRACE_RPAREN_RPAREN_PIPE_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_BSLASH_BSLASH_BSLASH_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH);
        case 205:
            if (lookahead == '\\')
                ADVANCE(206);
            LEX_ERROR();
        case 206:
            if ((lookahead == '\"') ||
                (lookahead == '\'') ||
                (lookahead == '0') ||
                (lookahead == '\\') ||
                (lookahead == 'n') ||
                (lookahead == 'r') ||
                (lookahead == 't'))
                ADVANCE(203);
            if (lookahead == 'u')
                ADVANCE(207);
            LEX_ERROR();
        case 207:
            if (lookahead == '\\')
                ADVANCE(208);
            LEX_ERROR();
        case 208:
            if (lookahead == '{')
                ADVANCE(209);
            LEX_ERROR();
        case 209:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(210);
            LEX_ERROR();
        case 210:
            if (lookahead == '{')
                ADVANCE(211);
            LEX_ERROR();
        case 211:
            if (lookahead == '1')
                ADVANCE(212);
            LEX_ERROR();
        case 212:
            if (lookahead == ',')
                ADVANCE(213);
            LEX_ERROR();
        case 213:
            if (lookahead == '8')
                ADVANCE(214);
            LEX_ERROR();
        case 214:
            if (lookahead == '}')
                ADVANCE(215);
            LEX_ERROR();
        case 215:
            if (lookahead == '\\')
                ADVANCE(216);
            LEX_ERROR();
        case 216:
            if (lookahead == '}')
                ADVANCE(203);
            LEX_ERROR();
        case 217:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(217);
            if (lookahead == '#')
                ADVANCE(218);
            if (lookahead == '&')
                ADVANCE(229);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'b')
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(27);
            if (lookahead == 'f')
                ADVANCE(33);
            if (lookahead == 'g')
                ADVANCE(46);
            if (lookahead == 'i')
                ADVANCE(51);
            if (lookahead == 'l')
                ADVANCE(58);
            if (lookahead == 'r')
                ADVANCE(61);
            if (lookahead == 's')
                ADVANCE(71);
            if (lookahead == 't')
                ADVANCE(77);
            if (lookahead == 'w')
                ADVANCE(82);
            if (lookahead == '|')
                ADVANCE(231);
            LEX_ERROR();
        case 218:
            if (lookahead == 'e')
                ADVANCE(219);
            if (lookahead == 'i')
                ADVANCE(4);
            if (lookahead == 'l')
                ADVANCE(6);
            LEX_ERROR();
        case 219:
            if (lookahead == 'l')
                ADVANCE(220);
            if (lookahead == 'n')
                ADVANCE(225);
            LEX_ERROR();
        case 220:
            if (lookahead == 's')
                ADVANCE(221);
            LEX_ERROR();
        case 221:
            if (lookahead == 'e')
                ADVANCE(222);
            LEX_ERROR();
        case 222:
            if (lookahead == 'i')
                ADVANCE(223);
            ACCEPT_TOKEN(anon_sym_POUNDelse);
        case 223:
            if (lookahead == 'f')
                ADVANCE(224);
            LEX_ERROR();
        case 224:
            ACCEPT_TOKEN(anon_sym_POUNDelseif);
        case 225:
            if (lookahead == 'd')
                ADVANCE(226);
            LEX_ERROR();
        case 226:
            if (lookahead == 'i')
                ADVANCE(227);
            LEX_ERROR();
        case 227:
            if (lookahead == 'f')
                ADVANCE(228);
            LEX_ERROR();
        case 228:
            ACCEPT_TOKEN(anon_sym_POUNDendif);
        case 229:
            if (lookahead == '&')
                ADVANCE(230);
            LEX_ERROR();
        case 230:
            ACCEPT_TOKEN(anon_sym_AMP_AMP);
        case 231:
            if (lookahead == '|')
                ADVANCE(232);
            LEX_ERROR();
        case 232:
            ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
        case 233:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(233);
            if (lookahead == '(')
                ADVANCE(92);
            LEX_ERROR();
        case 234:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(234);
            if (lookahead == 'a')
                ADVANCE(235);
            if (lookahead == 'i')
                ADVANCE(240);
            if (lookahead == 'x')
                ADVANCE(244);
            LEX_ERROR();
        case 235:
            if (lookahead == 'r')
                ADVANCE(236);
            LEX_ERROR();
        case 236:
            if (lookahead == 'm')
                ADVANCE(237);
            LEX_ERROR();
        case 237:
            if (lookahead == '6')
                ADVANCE(238);
            ACCEPT_TOKEN(anon_sym_arm);
        case 238:
            if (lookahead == '4')
                ADVANCE(239);
            LEX_ERROR();
        case 239:
            ACCEPT_TOKEN(anon_sym_arm64);
        case 240:
            if (lookahead == '3')
                ADVANCE(241);
            LEX_ERROR();
        case 241:
            if (lookahead == '8')
                ADVANCE(242);
            LEX_ERROR();
        case 242:
            if (lookahead == '6')
                ADVANCE(243);
            LEX_ERROR();
        case 243:
            ACCEPT_TOKEN(anon_sym_i386);
        case 244:
            if (lookahead == '8')
                ADVANCE(245);
            LEX_ERROR();
        case 245:
            if (lookahead == '6')
                ADVANCE(246);
            LEX_ERROR();
        case 246:
            if (lookahead == '_')
                ADVANCE(247);
            LEX_ERROR();
        case 247:
            if (lookahead == '6')
                ADVANCE(248);
            LEX_ERROR();
        case 248:
            if (lookahead == '4')
                ADVANCE(249);
            LEX_ERROR();
        case 249:
            ACCEPT_TOKEN(anon_sym_x86_64);
        case 250:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(250);
            if (lookahead == ')')
                ADVANCE(251);
            LEX_ERROR();
        case 251:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 252:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(252);
            if (lookahead == 'O')
                ADVANCE(253);
            if (lookahead == 'i')
                ADVANCE(256);
            if (lookahead == 't')
                ADVANCE(259);
            if (lookahead == 'w')
                ADVANCE(263);
            LEX_ERROR();
        case 253:
            if (lookahead == 'S')
                ADVANCE(254);
            LEX_ERROR();
        case 254:
            if (lookahead == 'X')
                ADVANCE(255);
            LEX_ERROR();
        case 255:
            ACCEPT_TOKEN(anon_sym_OSX);
        case 256:
            if (lookahead == 'O')
                ADVANCE(257);
            LEX_ERROR();
        case 257:
            if (lookahead == 'S')
                ADVANCE(258);
            LEX_ERROR();
        case 258:
            ACCEPT_TOKEN(anon_sym_iOS);
        case 259:
            if (lookahead == 'v')
                ADVANCE(260);
            LEX_ERROR();
        case 260:
            if (lookahead == 'O')
                ADVANCE(261);
            LEX_ERROR();
        case 261:
            if (lookahead == 'S')
                ADVANCE(262);
            LEX_ERROR();
        case 262:
            ACCEPT_TOKEN(anon_sym_tvOS);
        case 263:
            if (lookahead == 'a')
                ADVANCE(264);
            LEX_ERROR();
        case 264:
            if (lookahead == 't')
                ADVANCE(265);
            LEX_ERROR();
        case 265:
            if (lookahead == 'c')
                ADVANCE(266);
            LEX_ERROR();
        case 266:
            if (lookahead == 'h')
                ADVANCE(267);
            LEX_ERROR();
        case 267:
            if (lookahead == 'O')
                ADVANCE(268);
            LEX_ERROR();
        case 268:
            if (lookahead == 'S')
                ADVANCE(269);
            LEX_ERROR();
        case 269:
            ACCEPT_TOKEN(anon_sym_watchOS);
        case 270:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(270);
            if (lookahead == '&')
                ADVANCE(229);
            if (lookahead == ')')
                ADVANCE(251);
            if (lookahead == '|')
                ADVANCE(231);
            LEX_ERROR();
        case 271:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(271);
            if (lookahead == '#')
                ADVANCE(218);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'b')
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(27);
            if (lookahead == 'f')
                ADVANCE(33);
            if (lookahead == 'g')
                ADVANCE(46);
            if (lookahead == 'i')
                ADVANCE(51);
            if (lookahead == 'l')
                ADVANCE(58);
            if (lookahead == 'r')
                ADVANCE(61);
            if (lookahead == 's')
                ADVANCE(71);
            if (lookahead == 't')
                ADVANCE(77);
            if (lookahead == 'w')
                ADVANCE(82);
            LEX_ERROR();
        case 272:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(272);
            if (lookahead == '#')
                ADVANCE(273);
            LEX_ERROR();
        case 273:
            if (lookahead == 'e')
                ADVANCE(219);
            LEX_ERROR();
        case 274:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(274);
            if (lookahead == '#')
                ADVANCE(275);
            LEX_ERROR();
        case 275:
            if (lookahead == 'e')
                ADVANCE(276);
            LEX_ERROR();
        case 276:
            if (lookahead == 'l')
                ADVANCE(277);
            if (lookahead == 'n')
                ADVANCE(225);
            LEX_ERROR();
        case 277:
            if (lookahead == 's')
                ADVANCE(278);
            LEX_ERROR();
        case 278:
            if (lookahead == 'e')
                ADVANCE(279);
            LEX_ERROR();
        case 279:
            ACCEPT_TOKEN(anon_sym_POUNDelse);
        case 280:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(280);
            if (lookahead == '#')
                ADVANCE(281);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'b')
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(27);
            if (lookahead == 'f')
                ADVANCE(33);
            if (lookahead == 'g')
                ADVANCE(46);
            if (lookahead == 'i')
                ADVANCE(51);
            if (lookahead == 'l')
                ADVANCE(58);
            if (lookahead == 'r')
                ADVANCE(61);
            if (lookahead == 's')
                ADVANCE(71);
            if (lookahead == 't')
                ADVANCE(77);
            if (lookahead == 'w')
                ADVANCE(82);
            LEX_ERROR();
        case 281:
            if (lookahead == 'e')
                ADVANCE(282);
            if (lookahead == 'i')
                ADVANCE(4);
            if (lookahead == 'l')
                ADVANCE(6);
            LEX_ERROR();
        case 282:
            if (lookahead == 'n')
                ADVANCE(225);
            LEX_ERROR();
        case 283:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(283);
            if (lookahead == '#')
                ADVANCE(284);
            LEX_ERROR();
        case 284:
            if (lookahead == 'e')
                ADVANCE(282);
            LEX_ERROR();
        case 285:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(285);
            if (lookahead == '\n')
                ADVANCE(286);
            if (lookahead == ';')
                ADVANCE(90);
            if (lookahead == 'c')
                ADVANCE(287);
            LEX_ERROR();
        case 286:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 287:
            if (lookahead == 'a')
                ADVANCE(288);
            LEX_ERROR();
        case 288:
            if (lookahead == 't')
                ADVANCE(289);
            LEX_ERROR();
        case 289:
            if (lookahead == 'c')
                ADVANCE(290);
            LEX_ERROR();
        case 290:
            if (lookahead == 'h')
                ADVANCE(291);
            LEX_ERROR();
        case 291:
            ACCEPT_TOKEN(anon_sym_catch);
        case 292:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(292);
            if (lookahead == '#')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'b')
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(19);
            if (lookahead == 'd')
                ADVANCE(27);
            if (lookahead == 'f')
                ADVANCE(33);
            if (lookahead == 'g')
                ADVANCE(46);
            if (lookahead == 'i')
                ADVANCE(51);
            if (lookahead == 'l')
                ADVANCE(58);
            if (lookahead == 'r')
                ADVANCE(61);
            if (lookahead == 's')
                ADVANCE(71);
            if (lookahead == 't')
                ADVANCE(77);
            if (lookahead == 'w')
                ADVANCE(82);
            if (lookahead == '}')
                ADVANCE(293);
            LEX_ERROR();
        case 293:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 294:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(294);
            if (lookahead == '}')
                ADVANCE(293);
            LEX_ERROR();
        case 295:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(295);
            if (lookahead == '(')
                ADVANCE(92);
            if (lookahead == '.')
                ADVANCE(93);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(94);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(99);
            if (lookahead == 'l')
                ADVANCE(58);
            if (lookahead == 'v')
                ADVANCE(101);
            if (lookahead == '{')
                ADVANCE(117);
            LEX_ERROR();
        case 296:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(296);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            if (lookahead == '{')
                ADVANCE(117);
            LEX_ERROR();
        case 297:
            ACCEPT_TOKEN(anon_sym_QMARK);
        case 298:
            if (lookahead == 's')
                ADVANCE(299);
            LEX_ERROR();
        case 299:
            ACCEPT_TOKEN(anon_sym_as);
        case 300:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(300);
            if (lookahead == '.')
                ADVANCE(93);
            LEX_ERROR();
        case 301:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(301);
            if (lookahead == '(')
                ADVANCE(92);
            if (lookahead == ')')
                ADVANCE(251);
            if (lookahead == '.')
                ADVANCE(93);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(94);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(99);
            if (lookahead == 'l')
                ADVANCE(58);
            if (lookahead == 'v')
                ADVANCE(101);
            LEX_ERROR();
        case 302:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(302);
            if (lookahead == '.')
                ADVANCE(93);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            if (lookahead == '{')
                ADVANCE(117);
            LEX_ERROR();
        case 303:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(303);
            if (lookahead == '(')
                ADVANCE(92);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            if (lookahead == '{')
                ADVANCE(117);
            LEX_ERROR();
        case 304:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(304);
            if (lookahead == ')')
                ADVANCE(251);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            LEX_ERROR();
        case 305:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 306:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(306);
            if (lookahead == ')')
                ADVANCE(251);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == '.')
                ADVANCE(93);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            LEX_ERROR();
        case 307:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(307);
            if (lookahead == '(')
                ADVANCE(92);
            if (lookahead == ')')
                ADVANCE(251);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            LEX_ERROR();
        case 308:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(308);
            if (lookahead == 'c')
                ADVANCE(309);
            if (lookahead == 'd')
                ADVANCE(313);
            if (lookahead == '}')
                ADVANCE(293);
            LEX_ERROR();
        case 309:
            if (lookahead == 'a')
                ADVANCE(310);
            LEX_ERROR();
        case 310:
            if (lookahead == 's')
                ADVANCE(311);
            LEX_ERROR();
        case 311:
            if (lookahead == 'e')
                ADVANCE(312);
            LEX_ERROR();
        case 312:
            ACCEPT_TOKEN(anon_sym_case);
        case 313:
            if (lookahead == 'e')
                ADVANCE(314);
            LEX_ERROR();
        case 314:
            if (lookahead == 'f')
                ADVANCE(315);
            LEX_ERROR();
        case 315:
            if (lookahead == 'a')
                ADVANCE(316);
            LEX_ERROR();
        case 316:
            if (lookahead == 'u')
                ADVANCE(317);
            LEX_ERROR();
        case 317:
            if (lookahead == 'l')
                ADVANCE(318);
            LEX_ERROR();
        case 318:
            if (lookahead == 't')
                ADVANCE(319);
            LEX_ERROR();
        case 319:
            ACCEPT_TOKEN(anon_sym_default);
        case 320:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(320);
            if (lookahead == ':')
                ADVANCE(181);
            LEX_ERROR();
        case 321:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(321);
            if (lookahead == '#')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'b')
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(322);
            if (lookahead == 'd')
                ADVANCE(323);
            if (lookahead == 'f')
                ADVANCE(33);
            if (lookahead == 'g')
                ADVANCE(46);
            if (lookahead == 'i')
                ADVANCE(51);
            if (lookahead == 'l')
                ADVANCE(58);
            if (lookahead == 'r')
                ADVANCE(61);
            if (lookahead == 's')
                ADVANCE(71);
            if (lookahead == 't')
                ADVANCE(77);
            if (lookahead == 'w')
                ADVANCE(82);
            if (lookahead == '}')
                ADVANCE(293);
            LEX_ERROR();
        case 322:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(96);
            if (lookahead == 'o')
                ADVANCE(20);
            ACCEPT_TOKEN(sym_identifier);
        case 323:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(324);
            if (lookahead == 'o')
                ADVANCE(32);
            ACCEPT_TOKEN(sym_identifier);
        case 324:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'f')
                ADVANCE(325);
            ACCEPT_TOKEN(sym_identifier);
        case 325:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(326);
            if (lookahead == 'e')
                ADVANCE(30);
            ACCEPT_TOKEN(sym_identifier);
        case 326:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(327);
            ACCEPT_TOKEN(sym_identifier);
        case 327:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(328);
            ACCEPT_TOKEN(sym_identifier);
        case 328:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(329);
            ACCEPT_TOKEN(sym_identifier);
        case 329:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_default);
        case 330:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(330);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == ':')
                ADVANCE(181);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            LEX_ERROR();
        case 331:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(331);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == '.')
                ADVANCE(93);
            if (lookahead == ':')
                ADVANCE(181);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            LEX_ERROR();
        case 332:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(332);
            if (lookahead == '(')
                ADVANCE(92);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == ':')
                ADVANCE(181);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            LEX_ERROR();
        case 333:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(333);
            if (lookahead == 'e')
                ADVANCE(334);
            LEX_ERROR();
        case 334:
            if (lookahead == 'l')
                ADVANCE(335);
            LEX_ERROR();
        case 335:
            if (lookahead == 's')
                ADVANCE(336);
            LEX_ERROR();
        case 336:
            if (lookahead == 'e')
                ADVANCE(337);
            LEX_ERROR();
        case 337:
            ACCEPT_TOKEN(anon_sym_else);
        case 338:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(338);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == 'e')
                ADVANCE(334);
            LEX_ERROR();
        case 339:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(339);
            if (lookahead == '=')
                ADVANCE(340);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            LEX_ERROR();
        case 340:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 341:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(341);
            if (lookahead == '.')
                ADVANCE(93);
            if (lookahead == '=')
                ADVANCE(340);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            LEX_ERROR();
        case 342:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(342);
            if (lookahead == '(')
                ADVANCE(92);
            if (lookahead == '=')
                ADVANCE(340);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            LEX_ERROR();
        case 343:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(343);
            if (lookahead == '*')
                ADVANCE(344);
            if (lookahead == 'O')
                ADVANCE(345);
            if (lookahead == 'i')
                ADVANCE(368);
            if (lookahead == 't')
                ADVANCE(259);
            if (lookahead == 'w')
                ADVANCE(263);
            LEX_ERROR();
        case 344:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 345:
            if (lookahead == 'S')
                ADVANCE(346);
            LEX_ERROR();
        case 346:
            if (lookahead == 'X')
                ADVANCE(347);
            LEX_ERROR();
        case 347:
            if (lookahead == 'A')
                ADVANCE(348);
            ACCEPT_TOKEN(anon_sym_OSX);
        case 348:
            if (lookahead == 'p')
                ADVANCE(349);
            LEX_ERROR();
        case 349:
            if (lookahead == 'p')
                ADVANCE(350);
            LEX_ERROR();
        case 350:
            if (lookahead == 'l')
                ADVANCE(351);
            LEX_ERROR();
        case 351:
            if (lookahead == 'i')
                ADVANCE(352);
            LEX_ERROR();
        case 352:
            if (lookahead == 'c')
                ADVANCE(353);
            LEX_ERROR();
        case 353:
            if (lookahead == 'a')
                ADVANCE(354);
            LEX_ERROR();
        case 354:
            if (lookahead == 't')
                ADVANCE(355);
            LEX_ERROR();
        case 355:
            if (lookahead == 'i')
                ADVANCE(356);
            LEX_ERROR();
        case 356:
            if (lookahead == 'o')
                ADVANCE(357);
            LEX_ERROR();
        case 357:
            if (lookahead == 'n')
                ADVANCE(358);
            LEX_ERROR();
        case 358:
            if (lookahead == 'E')
                ADVANCE(359);
            LEX_ERROR();
        case 359:
            if (lookahead == 'x')
                ADVANCE(360);
            LEX_ERROR();
        case 360:
            if (lookahead == 't')
                ADVANCE(361);
            LEX_ERROR();
        case 361:
            if (lookahead == 'e')
                ADVANCE(362);
            LEX_ERROR();
        case 362:
            if (lookahead == 'n')
                ADVANCE(363);
            LEX_ERROR();
        case 363:
            if (lookahead == 's')
                ADVANCE(364);
            LEX_ERROR();
        case 364:
            if (lookahead == 'i')
                ADVANCE(365);
            LEX_ERROR();
        case 365:
            if (lookahead == 'o')
                ADVANCE(366);
            LEX_ERROR();
        case 366:
            if (lookahead == 'n')
                ADVANCE(367);
            LEX_ERROR();
        case 367:
            ACCEPT_TOKEN(anon_sym_OSXApplicationExtension);
        case 368:
            if (lookahead == 'O')
                ADVANCE(369);
            LEX_ERROR();
        case 369:
            if (lookahead == 'S')
                ADVANCE(370);
            LEX_ERROR();
        case 370:
            if (lookahead == 'A')
                ADVANCE(371);
            ACCEPT_TOKEN(anon_sym_iOS);
        case 371:
            if (lookahead == 'p')
                ADVANCE(372);
            LEX_ERROR();
        case 372:
            if (lookahead == 'p')
                ADVANCE(373);
            LEX_ERROR();
        case 373:
            if (lookahead == 'l')
                ADVANCE(374);
            LEX_ERROR();
        case 374:
            if (lookahead == 'i')
                ADVANCE(375);
            LEX_ERROR();
        case 375:
            if (lookahead == 'c')
                ADVANCE(376);
            LEX_ERROR();
        case 376:
            if (lookahead == 'a')
                ADVANCE(377);
            LEX_ERROR();
        case 377:
            if (lookahead == 't')
                ADVANCE(378);
            LEX_ERROR();
        case 378:
            if (lookahead == 'i')
                ADVANCE(379);
            LEX_ERROR();
        case 379:
            if (lookahead == 'o')
                ADVANCE(380);
            LEX_ERROR();
        case 380:
            if (lookahead == 'n')
                ADVANCE(381);
            LEX_ERROR();
        case 381:
            if (lookahead == 'E')
                ADVANCE(382);
            LEX_ERROR();
        case 382:
            if (lookahead == 'x')
                ADVANCE(383);
            LEX_ERROR();
        case 383:
            if (lookahead == 't')
                ADVANCE(384);
            LEX_ERROR();
        case 384:
            if (lookahead == 'e')
                ADVANCE(385);
            LEX_ERROR();
        case 385:
            if (lookahead == 'n')
                ADVANCE(386);
            LEX_ERROR();
        case 386:
            if (lookahead == 's')
                ADVANCE(387);
            LEX_ERROR();
        case 387:
            if (lookahead == 'i')
                ADVANCE(388);
            LEX_ERROR();
        case 388:
            if (lookahead == 'o')
                ADVANCE(389);
            LEX_ERROR();
        case 389:
            if (lookahead == 'n')
                ADVANCE(390);
            LEX_ERROR();
        case 390:
            ACCEPT_TOKEN(anon_sym_iOSApplicationExtension);
        case 391:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(391);
            if (lookahead == ')')
                ADVANCE(251);
            if (lookahead == ',')
                ADVANCE(305);
            LEX_ERROR();
        case 392:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(392);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(393);
            LEX_ERROR();
        case 393:
            if (lookahead == '.')
                ADVANCE(394);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(393);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 394:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(395);
            LEX_ERROR();
        case 395:
            if (lookahead == '.')
                ADVANCE(396);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(395);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 396:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(397);
            LEX_ERROR();
        case 397:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(397);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 398:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(398);
            if (lookahead == '#')
                ADVANCE(105);
            if (lookahead == 'c')
                ADVANCE(309);
            if (lookahead == 'l')
                ADVANCE(399);
            if (lookahead == 'v')
                ADVANCE(402);
            LEX_ERROR();
        case 399:
            if (lookahead == 'e')
                ADVANCE(400);
            LEX_ERROR();
        case 400:
            if (lookahead == 't')
                ADVANCE(401);
            LEX_ERROR();
        case 401:
            ACCEPT_TOKEN(anon_sym_let);
        case 402:
            if (lookahead == 'a')
                ADVANCE(403);
            LEX_ERROR();
        case 403:
            if (lookahead == 'r')
                ADVANCE(404);
            LEX_ERROR();
        case 404:
            ACCEPT_TOKEN(anon_sym_var);
        case 405:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(405);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == '{')
                ADVANCE(117);
            LEX_ERROR();
        case 406:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(406);
            if (lookahead == '\n')
                ADVANCE(407);
            if (lookahead == ';')
                ADVANCE(90);
            if (lookahead == 'e')
                ADVANCE(334);
            LEX_ERROR();
        case 407:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 408:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(408);
            if (lookahead == 'i')
                ADVANCE(186);
            if (lookahead == '{')
                ADVANCE(117);
            LEX_ERROR();
        case 409:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(409);
            if (lookahead == 'w')
                ADVANCE(194);
            LEX_ERROR();
        case 410:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(410);
            if (lookahead == '\n')
                ADVANCE(411);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == ';')
                ADVANCE(90);
            LEX_ERROR();
        case 411:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 412:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(412);
            if (lookahead == ';')
                ADVANCE(90);
            LEX_ERROR();
        case 413:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(413);
            if (lookahead == ':')
                ADVANCE(181);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            if (lookahead == 'i')
                ADVANCE(414);
            LEX_ERROR();
        case 414:
            if (lookahead == 'n')
                ADVANCE(415);
            LEX_ERROR();
        case 415:
            ACCEPT_TOKEN(anon_sym_in);
        case 416:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(416);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == ':')
                ADVANCE(181);
            if (lookahead == ';')
                ADVANCE(90);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            if (lookahead == 'i')
                ADVANCE(414);
            LEX_ERROR();
        case 417:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(417);
            if (lookahead == ';')
                ADVANCE(90);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            LEX_ERROR();
        case 418:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(418);
            if (lookahead == '(')
                ADVANCE(92);
            if (lookahead == ')')
                ADVANCE(251);
            if (lookahead == '.')
                ADVANCE(93);
            if (lookahead == ';')
                ADVANCE(90);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(94);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(99);
            if (lookahead == 'l')
                ADVANCE(58);
            if (lookahead == 'v')
                ADVANCE(101);
            LEX_ERROR();
        case 419:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(419);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == '.')
                ADVANCE(93);
            if (lookahead == ':')
                ADVANCE(181);
            if (lookahead == ';')
                ADVANCE(90);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            if (lookahead == 'i')
                ADVANCE(414);
            LEX_ERROR();
        case 420:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(420);
            if (lookahead == '.')
                ADVANCE(93);
            if (lookahead == ':')
                ADVANCE(181);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            if (lookahead == 'i')
                ADVANCE(414);
            LEX_ERROR();
        case 421:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(421);
            if (lookahead == '(')
                ADVANCE(92);
            if (lookahead == ':')
                ADVANCE(181);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            if (lookahead == 'i')
                ADVANCE(414);
            LEX_ERROR();
        case 422:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(422);
            if (lookahead == 'i')
                ADVANCE(414);
            LEX_ERROR();
        case 423:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(423);
            if (lookahead == '.')
                ADVANCE(93);
            if (lookahead == 'i')
                ADVANCE(414);
            LEX_ERROR();
        case 424:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(424);
            if (lookahead == ')')
                ADVANCE(251);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == ';')
                ADVANCE(90);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            LEX_ERROR();
        case 425:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(425);
            if (lookahead == ')')
                ADVANCE(251);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == '.')
                ADVANCE(93);
            if (lookahead == ';')
                ADVANCE(90);
            if (lookahead == '?')
                ADVANCE(297);
            if (lookahead == 'a')
                ADVANCE(298);
            LEX_ERROR();
        case 426:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(426);
            if (lookahead == ')')
                ADVANCE(251);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            LEX_ERROR();
        case 427:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(427);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == ';')
                ADVANCE(90);
            LEX_ERROR();
        case 428:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(428);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == '{')
                ADVANCE(117);
            LEX_ERROR();
        case 429:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(429);
            if (lookahead == '.')
                ADVANCE(93);
            if (lookahead == '{')
                ADVANCE(117);
            LEX_ERROR();
        case 430:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(430);
            if (lookahead == '\n')
                ADVANCE(431);
            if (lookahead == '!')
                ADVANCE(432);
            if (lookahead == '\"')
                ADVANCE(203);
            if (lookahead == '#')
                ADVANCE(433);
            if (lookahead == '%')
                ADVANCE(142);
            if (lookahead == '&')
                ADVANCE(434);
            if (lookahead == '(')
                ADVANCE(92);
            if (lookahead == ')')
                ADVANCE(251);
            if (lookahead == '*')
                ADVANCE(436);
            if (lookahead == '+')
                ADVANCE(142);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '.')
                ADVANCE(93);
            if (lookahead == '/')
                ADVANCE(142);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(437);
            if (lookahead == ':')
                ADVANCE(181);
            if (lookahead == ';')
                ADVANCE(90);
            if (lookahead == '<')
                ADVANCE(142);
            if (lookahead == '=')
                ADVANCE(438);
            if (lookahead == '>')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(439);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'n') ||
                (lookahead == 'q') ||
                (lookahead == 'u') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(10);
            if (lookahead == 'O')
                ADVANCE(440);
            if (lookahead == '^')
                ADVANCE(142);
            if (lookahead == '_')
                ADVANCE(94);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'a')
                ADVANCE(463);
            if (lookahead == 'b')
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(469);
            if (lookahead == 'd')
                ADVANCE(323);
            if (lookahead == 'e')
                ADVANCE(474);
            if (lookahead == 'f')
                ADVANCE(478);
            if (lookahead == 'g')
                ADVANCE(46);
            if (lookahead == 'i')
                ADVANCE(481);
            if (lookahead == 'l')
                ADVANCE(58);
            if (lookahead == 'o')
                ADVANCE(132);
            if (lookahead == 'p')
                ADVANCE(156);
            if (lookahead == 'r')
                ADVANCE(61);
            if (lookahead == 's')
                ADVANCE(508);
            if (lookahead == 't')
                ADVANCE(509);
            if (lookahead == 'v')
                ADVANCE(101);
            if (lookahead == 'w')
                ADVANCE(513);
            if (lookahead == 'x')
                ADVANCE(520);
            if (lookahead == '{')
                ADVANCE(117);
            if (lookahead == '|')
                ADVANCE(526);
            if (lookahead == '}')
                ADVANCE(293);
            if (lookahead == '~')
                ADVANCE(142);
            LEX_ERROR();
        case 431:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 432:
            if (lookahead == '!')
                ADVANCE(142);
            if (lookahead == '%')
                ADVANCE(142);
            if (lookahead == '&')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(142);
            if (lookahead == '+')
                ADVANCE(142);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(142);
            if (lookahead == '<')
                ADVANCE(142);
            if (lookahead == '=')
                ADVANCE(142);
            if (lookahead == '>')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(142);
            if (lookahead == '^')
                ADVANCE(142);
            if (lookahead == '|')
                ADVANCE(142);
            if (lookahead == '~')
                ADVANCE(142);
            ACCEPT_TOKEN(anon_sym_BANG);
        case 433:
            if (lookahead == 'a')
                ADVANCE(106);
            if (lookahead == 'e')
                ADVANCE(219);
            if (lookahead == 'i')
                ADVANCE(4);
            if (lookahead == 'l')
                ADVANCE(6);
            LEX_ERROR();
        case 434:
            if (lookahead == '!')
                ADVANCE(142);
            if (lookahead == '%')
                ADVANCE(142);
            if (lookahead == '&')
                ADVANCE(435);
            if (lookahead == '*')
                ADVANCE(142);
            if (lookahead == '+')
                ADVANCE(142);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(142);
            if (lookahead == '<')
                ADVANCE(142);
            if (lookahead == '=')
                ADVANCE(142);
            if (lookahead == '>')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(142);
            if (lookahead == '^')
                ADVANCE(142);
            if (lookahead == '|')
                ADVANCE(142);
            if (lookahead == '~')
                ADVANCE(142);
            ACCEPT_TOKEN(sym_operator);
        case 435:
            if (lookahead == '!')
                ADVANCE(142);
            if (lookahead == '%')
                ADVANCE(142);
            if (lookahead == '&')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(142);
            if (lookahead == '+')
                ADVANCE(142);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(142);
            if (lookahead == '<')
                ADVANCE(142);
            if (lookahead == '=')
                ADVANCE(142);
            if (lookahead == '>')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(142);
            if (lookahead == '^')
                ADVANCE(142);
            if (lookahead == '|')
                ADVANCE(142);
            if (lookahead == '~')
                ADVANCE(142);
            ACCEPT_TOKEN(anon_sym_AMP_AMP);
        case 436:
            if (lookahead == '!')
                ADVANCE(142);
            if (lookahead == '%')
                ADVANCE(142);
            if (lookahead == '&')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(142);
            if (lookahead == '+')
                ADVANCE(142);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(142);
            if (lookahead == '<')
                ADVANCE(142);
            if (lookahead == '=')
                ADVANCE(142);
            if (lookahead == '>')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(142);
            if (lookahead == '^')
                ADVANCE(142);
            if (lookahead == '|')
                ADVANCE(142);
            if (lookahead == '~')
                ADVANCE(142);
            ACCEPT_TOKEN(anon_sym_STAR);
        case 437:
            if (lookahead == '.')
                ADVANCE(394);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(437);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 438:
            if (lookahead == '!')
                ADVANCE(142);
            if (lookahead == '%')
                ADVANCE(142);
            if (lookahead == '&')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(142);
            if (lookahead == '+')
                ADVANCE(142);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(142);
            if (lookahead == '<')
                ADVANCE(142);
            if (lookahead == '=')
                ADVANCE(142);
            if (lookahead == '>')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(142);
            if (lookahead == '^')
                ADVANCE(142);
            if (lookahead == '|')
                ADVANCE(142);
            if (lookahead == '~')
                ADVANCE(142);
            ACCEPT_TOKEN(anon_sym_EQ);
        case 439:
            if (lookahead == '!')
                ADVANCE(142);
            if (lookahead == '%')
                ADVANCE(142);
            if (lookahead == '&')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(142);
            if (lookahead == '+')
                ADVANCE(142);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(142);
            if (lookahead == '<')
                ADVANCE(142);
            if (lookahead == '=')
                ADVANCE(142);
            if (lookahead == '>')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(142);
            if (lookahead == '^')
                ADVANCE(142);
            if (lookahead == '|')
                ADVANCE(142);
            if (lookahead == '~')
                ADVANCE(142);
            ACCEPT_TOKEN(anon_sym_QMARK);
        case 440:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'S')
                ADVANCE(441);
            ACCEPT_TOKEN(sym_identifier);
        case 441:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'W') ||
                (lookahead == 'Y') ||
                (lookahead == 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'X')
                ADVANCE(442);
            ACCEPT_TOKEN(sym_identifier);
        case 442:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == 'A')
                ADVANCE(443);
            if (('B' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_OSX);
        case 443:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(444);
            ACCEPT_TOKEN(sym_identifier);
        case 444:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(445);
            ACCEPT_TOKEN(sym_identifier);
        case 445:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(446);
            ACCEPT_TOKEN(sym_identifier);
        case 446:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(447);
            ACCEPT_TOKEN(sym_identifier);
        case 447:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(448);
            ACCEPT_TOKEN(sym_identifier);
        case 448:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(449);
            ACCEPT_TOKEN(sym_identifier);
        case 449:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(450);
            ACCEPT_TOKEN(sym_identifier);
        case 450:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(451);
            ACCEPT_TOKEN(sym_identifier);
        case 451:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(452);
            ACCEPT_TOKEN(sym_identifier);
        case 452:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(453);
            ACCEPT_TOKEN(sym_identifier);
        case 453:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'D') ||
                ('F' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'E')
                ADVANCE(454);
            ACCEPT_TOKEN(sym_identifier);
        case 454:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(10);
            if (lookahead == 'x')
                ADVANCE(455);
            ACCEPT_TOKEN(sym_identifier);
        case 455:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(456);
            ACCEPT_TOKEN(sym_identifier);
        case 456:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(457);
            ACCEPT_TOKEN(sym_identifier);
        case 457:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(458);
            ACCEPT_TOKEN(sym_identifier);
        case 458:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(459);
            ACCEPT_TOKEN(sym_identifier);
        case 459:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(460);
            ACCEPT_TOKEN(sym_identifier);
        case 460:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(461);
            ACCEPT_TOKEN(sym_identifier);
        case 461:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(462);
            ACCEPT_TOKEN(sym_identifier);
        case 462:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_OSXApplicationExtension);
        case 463:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(464);
            if (lookahead == 's')
                ADVANCE(468);
            ACCEPT_TOKEN(sym_identifier);
        case 464:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(125);
            if (lookahead == 'm')
                ADVANCE(465);
            ACCEPT_TOKEN(sym_identifier);
        case 465:
            if (('0' <= lookahead && lookahead <= '5') ||
                ('7' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '6')
                ADVANCE(466);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_arm);
        case 466:
            if (('0' <= lookahead && lookahead <= '3') ||
                ('5' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '4')
                ADVANCE(467);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 467:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_arm64);
        case 468:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_as);
        case 469:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(470);
            if (lookahead == 'l')
                ADVANCE(144);
            if (lookahead == 'o')
                ADVANCE(20);
            ACCEPT_TOKEN(sym_identifier);
        case 470:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(97);
            if (lookahead == 't')
                ADVANCE(471);
            ACCEPT_TOKEN(sym_identifier);
        case 471:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(472);
            ACCEPT_TOKEN(sym_identifier);
        case 472:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(473);
            ACCEPT_TOKEN(sym_identifier);
        case 473:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_catch);
        case 474:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(475);
            if (lookahead == 'n')
                ADVANCE(149);
            ACCEPT_TOKEN(sym_identifier);
        case 475:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(476);
            ACCEPT_TOKEN(sym_identifier);
        case 476:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(477);
            ACCEPT_TOKEN(sym_identifier);
        case 477:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_else);
        case 478:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(479);
            if (lookahead == 'o')
                ADVANCE(44);
            if (lookahead == 'u')
                ADVANCE(153);
            ACCEPT_TOKEN(sym_identifier);
        case 479:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(480);
            ACCEPT_TOKEN(sym_identifier);
        case 480:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(36);
            if (lookahead == 's')
                ADVANCE(130);
            ACCEPT_TOKEN(sym_identifier);
        case 481:
            if (('0' <= lookahead && lookahead <= '2') ||
                ('4' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '3')
                ADVANCE(482);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'O')
                ADVANCE(485);
            if (lookahead == 'f')
                ADVANCE(52);
            if (lookahead == 'm')
                ADVANCE(53);
            if (lookahead == 'n')
                ADVANCE(507);
            if (lookahead == 's')
                ADVANCE(100);
            ACCEPT_TOKEN(sym_identifier);
        case 482:
            if (('0' <= lookahead && lookahead <= '7') ||
                (lookahead == '9'))
                ADVANCE(10);
            if (lookahead == '8')
                ADVANCE(483);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 483:
            if (('0' <= lookahead && lookahead <= '5') ||
                ('7' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '6')
                ADVANCE(484);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 484:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_i386);
        case 485:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'S')
                ADVANCE(486);
            ACCEPT_TOKEN(sym_identifier);
        case 486:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == 'A')
                ADVANCE(487);
            if (('B' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_iOS);
        case 487:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(488);
            ACCEPT_TOKEN(sym_identifier);
        case 488:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(489);
            ACCEPT_TOKEN(sym_identifier);
        case 489:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(490);
            ACCEPT_TOKEN(sym_identifier);
        case 490:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(491);
            ACCEPT_TOKEN(sym_identifier);
        case 491:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(492);
            ACCEPT_TOKEN(sym_identifier);
        case 492:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(493);
            ACCEPT_TOKEN(sym_identifier);
        case 493:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(494);
            ACCEPT_TOKEN(sym_identifier);
        case 494:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(495);
            ACCEPT_TOKEN(sym_identifier);
        case 495:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(496);
            ACCEPT_TOKEN(sym_identifier);
        case 496:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(497);
            ACCEPT_TOKEN(sym_identifier);
        case 497:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'D') ||
                ('F' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'E')
                ADVANCE(498);
            ACCEPT_TOKEN(sym_identifier);
        case 498:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(10);
            if (lookahead == 'x')
                ADVANCE(499);
            ACCEPT_TOKEN(sym_identifier);
        case 499:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(500);
            ACCEPT_TOKEN(sym_identifier);
        case 500:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(501);
            ACCEPT_TOKEN(sym_identifier);
        case 501:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(502);
            ACCEPT_TOKEN(sym_identifier);
        case 502:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(503);
            ACCEPT_TOKEN(sym_identifier);
        case 503:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(504);
            ACCEPT_TOKEN(sym_identifier);
        case 504:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(505);
            ACCEPT_TOKEN(sym_identifier);
        case 505:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(506);
            ACCEPT_TOKEN(sym_identifier);
        case 506:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_iOSApplicationExtension);
        case 507:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_in);
        case 508:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(165);
            if (lookahead == 'w')
                ADVANCE(72);
            ACCEPT_TOKEN(sym_identifier);
        case 509:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'u') ||
                (lookahead == 'w') ||
                (lookahead == 'x') ||
                (lookahead == 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(78);
            if (lookahead == 'r')
                ADVANCE(135);
            if (lookahead == 'v')
                ADVANCE(510);
            if (lookahead == 'y')
                ADVANCE(171);
            ACCEPT_TOKEN(sym_identifier);
        case 510:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'O')
                ADVANCE(511);
            ACCEPT_TOKEN(sym_identifier);
        case 511:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'S')
                ADVANCE(512);
            ACCEPT_TOKEN(sym_identifier);
        case 512:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_tvOS);
        case 513:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(514);
            if (lookahead == 'h')
                ADVANCE(83);
            ACCEPT_TOKEN(sym_identifier);
        case 514:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(515);
            ACCEPT_TOKEN(sym_identifier);
        case 515:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(516);
            ACCEPT_TOKEN(sym_identifier);
        case 516:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(517);
            ACCEPT_TOKEN(sym_identifier);
        case 517:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'O')
                ADVANCE(518);
            ACCEPT_TOKEN(sym_identifier);
        case 518:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'S')
                ADVANCE(519);
            ACCEPT_TOKEN(sym_identifier);
        case 519:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_watchOS);
        case 520:
            if (('0' <= lookahead && lookahead <= '7') ||
                (lookahead == '9'))
                ADVANCE(10);
            if (lookahead == '8')
                ADVANCE(521);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 521:
            if (('0' <= lookahead && lookahead <= '5') ||
                ('7' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '6')
                ADVANCE(522);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 522:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(523);
            ACCEPT_TOKEN(sym_identifier);
        case 523:
            if (('0' <= lookahead && lookahead <= '5') ||
                ('7' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '6')
                ADVANCE(524);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 524:
            if (('0' <= lookahead && lookahead <= '3') ||
                ('5' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '4')
                ADVANCE(525);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 525:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_x86_64);
        case 526:
            if (lookahead == '!')
                ADVANCE(142);
            if (lookahead == '%')
                ADVANCE(142);
            if (lookahead == '&')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(142);
            if (lookahead == '+')
                ADVANCE(142);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(142);
            if (lookahead == '<')
                ADVANCE(142);
            if (lookahead == '=')
                ADVANCE(142);
            if (lookahead == '>')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(142);
            if (lookahead == '^')
                ADVANCE(142);
            if (lookahead == '|')
                ADVANCE(527);
            if (lookahead == '~')
                ADVANCE(142);
            ACCEPT_TOKEN(sym_operator);
        case 527:
            if (lookahead == '!')
                ADVANCE(142);
            if (lookahead == '%')
                ADVANCE(142);
            if (lookahead == '&')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(142);
            if (lookahead == '+')
                ADVANCE(142);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(142);
            if (lookahead == '<')
                ADVANCE(142);
            if (lookahead == '=')
                ADVANCE(142);
            if (lookahead == '>')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(142);
            if (lookahead == '^')
                ADVANCE(142);
            if (lookahead == '|')
                ADVANCE(142);
            if (lookahead == '~')
                ADVANCE(142);
            ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
        case ts_lex_state_error:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(430);
            if (lookahead == '\n')
                ADVANCE(431);
            if (lookahead == '!')
                ADVANCE(432);
            if (lookahead == '\"')
                ADVANCE(203);
            if (lookahead == '#')
                ADVANCE(433);
            if (lookahead == '%')
                ADVANCE(142);
            if (lookahead == '&')
                ADVANCE(434);
            if (lookahead == '(')
                ADVANCE(92);
            if (lookahead == ')')
                ADVANCE(251);
            if (lookahead == '*')
                ADVANCE(436);
            if (lookahead == '+')
                ADVANCE(142);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == '-')
                ADVANCE(142);
            if (lookahead == '.')
                ADVANCE(93);
            if (lookahead == '/')
                ADVANCE(142);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(437);
            if (lookahead == ':')
                ADVANCE(181);
            if (lookahead == ';')
                ADVANCE(90);
            if (lookahead == '<')
                ADVANCE(142);
            if (lookahead == '=')
                ADVANCE(438);
            if (lookahead == '>')
                ADVANCE(142);
            if (lookahead == '?')
                ADVANCE(439);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'n') ||
                (lookahead == 'q') ||
                (lookahead == 'u') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(10);
            if (lookahead == 'O')
                ADVANCE(440);
            if (lookahead == '^')
                ADVANCE(142);
            if (lookahead == '_')
                ADVANCE(94);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'a')
                ADVANCE(463);
            if (lookahead == 'b')
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(469);
            if (lookahead == 'd')
                ADVANCE(323);
            if (lookahead == 'e')
                ADVANCE(474);
            if (lookahead == 'f')
                ADVANCE(478);
            if (lookahead == 'g')
                ADVANCE(46);
            if (lookahead == 'i')
                ADVANCE(481);
            if (lookahead == 'l')
                ADVANCE(58);
            if (lookahead == 'o')
                ADVANCE(132);
            if (lookahead == 'p')
                ADVANCE(156);
            if (lookahead == 'r')
                ADVANCE(61);
            if (lookahead == 's')
                ADVANCE(508);
            if (lookahead == 't')
                ADVANCE(509);
            if (lookahead == 'v')
                ADVANCE(101);
            if (lookahead == 'w')
                ADVANCE(513);
            if (lookahead == 'x')
                ADVANCE(520);
            if (lookahead == '{')
                ADVANCE(117);
            if (lookahead == '|')
                ADVANCE(526);
            if (lookahead == '}')
                ADVANCE(293);
            if (lookahead == '~')
                ADVANCE(142);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 1,
    [1] = 87,
    [2] = 1,
    [3] = 88,
    [4] = 88,
    [5] = 88,
    [6] = 87,
    [7] = 91,
    [8] = 104,
    [9] = 115,
    [10] = 116,
    [11] = 104,
    [12] = 104,
    [13] = 118,
    [14] = 119,
    [15] = 119,
    [16] = 119,
    [17] = 119,
    [18] = 116,
    [19] = 116,
    [20] = 121,
    [21] = 138,
    [22] = 141,
    [23] = 179,
    [24] = 182,
    [25] = 88,
    [26] = 199,
    [27] = 200,
    [28] = 88,
    [29] = 199,
    [30] = 200,
    [31] = 88,
    [32] = 200,
    [33] = 88,
    [34] = 202,
    [35] = 88,
    [36] = 217,
    [37] = 217,
    [38] = 121,
    [39] = 233,
    [40] = 233,
    [41] = 121,
    [42] = 217,
    [43] = 217,
    [44] = 121,
    [45] = 121,
    [46] = 217,
    [47] = 217,
    [48] = 234,
    [49] = 250,
    [50] = 217,
    [51] = 252,
    [52] = 270,
    [53] = 270,
    [54] = 121,
    [55] = 233,
    [56] = 233,
    [57] = 121,
    [58] = 270,
    [59] = 270,
    [60] = 121,
    [61] = 121,
    [62] = 270,
    [63] = 270,
    [64] = 234,
    [65] = 250,
    [66] = 270,
    [67] = 252,
    [68] = 270,
    [69] = 270,
    [70] = 217,
    [71] = 271,
    [72] = 88,
    [73] = 272,
    [74] = 274,
    [75] = 121,
    [76] = 280,
    [77] = 88,
    [78] = 280,
    [79] = 88,
    [80] = 283,
    [81] = 88,
    [82] = 88,
    [83] = 280,
    [84] = 283,
    [85] = 217,
    [86] = 272,
    [87] = 274,
    [88] = 274,
    [89] = 280,
    [90] = 283,
    [91] = 88,
    [92] = 274,
    [93] = 280,
    [94] = 283,
    [95] = 88,
    [96] = 271,
    [97] = 272,
    [98] = 285,
    [99] = 292,
    [100] = 292,
    [101] = 88,
    [102] = 294,
    [103] = 285,
    [104] = 285,
    [105] = 292,
    [106] = 294,
    [107] = 285,
    [108] = 88,
    [109] = 295,
    [110] = 285,
    [111] = 296,
    [112] = 296,
    [113] = 300,
    [114] = 300,
    [115] = 301,
    [116] = 115,
    [117] = 118,
    [118] = 118,
    [119] = 302,
    [120] = 296,
    [121] = 296,
    [122] = 302,
    [123] = 302,
    [124] = 118,
    [125] = 296,
    [126] = 303,
    [127] = 296,
    [128] = 296,
    [129] = 296,
    [130] = 118,
    [131] = 296,
    [132] = 304,
    [133] = 304,
    [134] = 250,
    [135] = 300,
    [136] = 301,
    [137] = 296,
    [138] = 115,
    [139] = 118,
    [140] = 118,
    [141] = 306,
    [142] = 304,
    [143] = 304,
    [144] = 306,
    [145] = 306,
    [146] = 118,
    [147] = 304,
    [148] = 307,
    [149] = 304,
    [150] = 304,
    [151] = 304,
    [152] = 118,
    [153] = 304,
    [154] = 250,
    [155] = 304,
    [156] = 304,
    [157] = 118,
    [158] = 307,
    [159] = 304,
    [160] = 296,
    [161] = 250,
    [162] = 115,
    [163] = 304,
    [164] = 250,
    [165] = 118,
    [166] = 300,
    [167] = 300,
    [168] = 118,
    [169] = 303,
    [170] = 296,
    [171] = 285,
    [172] = 88,
    [173] = 88,
    [174] = 292,
    [175] = 294,
    [176] = 88,
    [177] = 88,
    [178] = 88,
    [179] = 88,
    [180] = 88,
    [181] = 88,
    [182] = 88,
    [183] = 116,
    [184] = 116,
    [185] = 308,
    [186] = 308,
    [187] = 294,
    [188] = 115,
    [189] = 88,
    [190] = 320,
    [191] = 321,
    [192] = 321,
    [193] = 88,
    [194] = 308,
    [195] = 321,
    [196] = 308,
    [197] = 330,
    [198] = 330,
    [199] = 300,
    [200] = 301,
    [201] = 115,
    [202] = 118,
    [203] = 118,
    [204] = 331,
    [205] = 330,
    [206] = 330,
    [207] = 331,
    [208] = 331,
    [209] = 118,
    [210] = 330,
    [211] = 332,
    [212] = 330,
    [213] = 330,
    [214] = 330,
    [215] = 118,
    [216] = 330,
    [217] = 250,
    [218] = 330,
    [219] = 330,
    [220] = 118,
    [221] = 332,
    [222] = 330,
    [223] = 320,
    [224] = 115,
    [225] = 321,
    [226] = 308,
    [227] = 330,
    [228] = 320,
    [229] = 321,
    [230] = 308,
    [231] = 88,
    [232] = 294,
    [233] = 333,
    [234] = 338,
    [235] = 338,
    [236] = 338,
    [237] = 338,
    [238] = 115,
    [239] = 233,
    [240] = 115,
    [241] = 338,
    [242] = 338,
    [243] = 339,
    [244] = 339,
    [245] = 300,
    [246] = 301,
    [247] = 115,
    [248] = 118,
    [249] = 118,
    [250] = 341,
    [251] = 339,
    [252] = 339,
    [253] = 341,
    [254] = 341,
    [255] = 118,
    [256] = 339,
    [257] = 342,
    [258] = 339,
    [259] = 339,
    [260] = 339,
    [261] = 118,
    [262] = 339,
    [263] = 250,
    [264] = 339,
    [265] = 339,
    [266] = 118,
    [267] = 342,
    [268] = 339,
    [269] = 118,
    [270] = 338,
    [271] = 338,
    [272] = 115,
    [273] = 338,
    [274] = 339,
    [275] = 118,
    [276] = 338,
    [277] = 338,
    [278] = 338,
    [279] = 343,
    [280] = 391,
    [281] = 392,
    [282] = 391,
    [283] = 250,
    [284] = 338,
    [285] = 343,
    [286] = 391,
    [287] = 392,
    [288] = 391,
    [289] = 250,
    [290] = 250,
    [291] = 338,
    [292] = 250,
    [293] = 338,
    [294] = 339,
    [295] = 118,
    [296] = 338,
    [297] = 398,
    [298] = 338,
    [299] = 333,
    [300] = 398,
    [301] = 338,
    [302] = 333,
    [303] = 118,
    [304] = 333,
    [305] = 333,
    [306] = 333,
    [307] = 116,
    [308] = 88,
    [309] = 116,
    [310] = 405,
    [311] = 405,
    [312] = 405,
    [313] = 405,
    [314] = 115,
    [315] = 233,
    [316] = 115,
    [317] = 405,
    [318] = 405,
    [319] = 339,
    [320] = 118,
    [321] = 405,
    [322] = 405,
    [323] = 115,
    [324] = 405,
    [325] = 339,
    [326] = 118,
    [327] = 405,
    [328] = 405,
    [329] = 405,
    [330] = 343,
    [331] = 391,
    [332] = 392,
    [333] = 391,
    [334] = 250,
    [335] = 405,
    [336] = 405,
    [337] = 250,
    [338] = 405,
    [339] = 339,
    [340] = 118,
    [341] = 405,
    [342] = 398,
    [343] = 405,
    [344] = 116,
    [345] = 398,
    [346] = 405,
    [347] = 116,
    [348] = 118,
    [349] = 116,
    [350] = 116,
    [351] = 116,
    [352] = 406,
    [353] = 292,
    [354] = 294,
    [355] = 406,
    [356] = 406,
    [357] = 408,
    [358] = 88,
    [359] = 409,
    [360] = 292,
    [361] = 294,
    [362] = 409,
    [363] = 409,
    [364] = 118,
    [365] = 88,
    [366] = 339,
    [367] = 118,
    [368] = 410,
    [369] = 410,
    [370] = 88,
    [371] = 115,
    [372] = 339,
    [373] = 118,
    [374] = 410,
    [375] = 88,
    [376] = 116,
    [377] = 88,
    [378] = 412,
    [379] = 116,
    [380] = 412,
    [381] = 118,
    [382] = 413,
    [383] = 413,
    [384] = 416,
    [385] = 300,
    [386] = 417,
    [387] = 418,
    [388] = 115,
    [389] = 115,
    [390] = 115,
    [391] = 118,
    [392] = 118,
    [393] = 419,
    [394] = 413,
    [395] = 413,
    [396] = 420,
    [397] = 420,
    [398] = 118,
    [399] = 413,
    [400] = 421,
    [401] = 413,
    [402] = 301,
    [403] = 250,
    [404] = 413,
    [405] = 413,
    [406] = 413,
    [407] = 420,
    [408] = 413,
    [409] = 118,
    [410] = 413,
    [411] = 413,
    [412] = 422,
    [413] = 118,
    [414] = 118,
    [415] = 422,
    [416] = 422,
    [417] = 423,
    [418] = 423,
    [419] = 118,
    [420] = 422,
    [421] = 116,
    [422] = 88,
    [423] = 118,
    [424] = 116,
    [425] = 88,
    [426] = 412,
    [427] = 250,
    [428] = 424,
    [429] = 417,
    [430] = 115,
    [431] = 425,
    [432] = 412,
    [433] = 426,
    [434] = 412,
    [435] = 250,
    [436] = 250,
    [437] = 426,
    [438] = 250,
    [439] = 412,
    [440] = 118,
    [441] = 427,
    [442] = 427,
    [443] = 412,
    [444] = 116,
    [445] = 88,
    [446] = 417,
    [447] = 412,
    [448] = 426,
    [449] = 250,
    [450] = 412,
    [451] = 428,
    [452] = 116,
    [453] = 428,
    [454] = 116,
    [455] = 118,
    [456] = 421,
    [457] = 413,
    [458] = 422,
    [459] = 118,
    [460] = 116,
    [461] = 88,
    [462] = 320,
    [463] = 320,
    [464] = 116,
    [465] = 118,
    [466] = 116,
    [467] = 116,
    [468] = 429,
    [469] = 429,
    [470] = 118,
    [471] = 116,
    [472] = 412,
    [473] = 292,
    [474] = 294,
    [475] = 412,
    [476] = 412,
    [477] = 88,
    [478] = 417,
    [479] = 412,
    [480] = 428,
    [481] = 116,
    [482] = 1,
    [483] = 87,
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
        [sym_build_configuration_statement] = ACTIONS(SHIFT(3)),
        [sym_line_control_statement] = ACTIONS(SHIFT(3)),
        [sym__declaration] = ACTIONS(SHIFT(3)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(3)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(6)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_program, 0)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_let] = ACTIONS(SHIFT(9)),
        [anon_sym_repeat] = ACTIONS(SHIFT(10)),
        [anon_sym_if] = ACTIONS(SHIFT(11)),
        [anon_sym_guard] = ACTIONS(SHIFT(12)),
        [anon_sym_switch] = ACTIONS(SHIFT(13)),
        [anon_sym_break] = ACTIONS(SHIFT(14)),
        [anon_sym_continue] = ACTIONS(SHIFT(15)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(3)),
        [anon_sym_return] = ACTIONS(SHIFT(16)),
        [anon_sym_throw] = ACTIONS(SHIFT(17)),
        [anon_sym_defer] = ACTIONS(SHIFT(18)),
        [anon_sym_do] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(20)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(21)),
        [anon_sym_import] = ACTIONS(SHIFT(22)),
        [sym_identifier] = ACTIONS(SHIFT(23)),
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
        [sym_build_configuration_statement] = ACTIONS(SHIFT(3)),
        [sym_line_control_statement] = ACTIONS(SHIFT(3)),
        [sym__declaration] = ACTIONS(SHIFT(3)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(3)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(483)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_let] = ACTIONS(SHIFT(9)),
        [anon_sym_repeat] = ACTIONS(SHIFT(10)),
        [anon_sym_if] = ACTIONS(SHIFT(11)),
        [anon_sym_guard] = ACTIONS(SHIFT(12)),
        [anon_sym_switch] = ACTIONS(SHIFT(13)),
        [anon_sym_break] = ACTIONS(SHIFT(14)),
        [anon_sym_continue] = ACTIONS(SHIFT(15)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(3)),
        [anon_sym_return] = ACTIONS(SHIFT(16)),
        [anon_sym_throw] = ACTIONS(SHIFT(17)),
        [anon_sym_defer] = ACTIONS(SHIFT(18)),
        [anon_sym_do] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(20)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(21)),
        [anon_sym_import] = ACTIONS(SHIFT(22)),
        [sym_identifier] = ACTIONS(SHIFT(23)),
    },
    [3] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(482)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(SHIFT(482)),
    },
    [4] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__loop_statement, 1)),
    },
    [5] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__declaration, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__declaration, 1)),
    },
    [6] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_program, 1)),
    },
    [7] = {
        [sym__for_init] = ACTIONS(SHIFT(378)),
        [sym__for_condition] = ACTIONS(SHIFT(379)),
        [sym_variable_declaration] = ACTIONS(SHIFT(380)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(381)),
        [sym__pattern] = ACTIONS(SHIFT(382)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(383)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(383)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(383)),
        [sym_optional_pattern] = ACTIONS(SHIFT(383)),
        [sym_is_pattern] = ACTIONS(SHIFT(383)),
        [sym_as_pattern] = ACTIONS(SHIFT(383)),
        [sym__expression] = ACTIONS(SHIFT(384)),
        [sym__expression_list] = ACTIONS(SHIFT(380)),
        [sym__type_identifier] = ACTIONS(SHIFT(385)),
        [sym__type_name] = ACTIONS(SHIFT(114)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(386)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(387)),
        [anon_sym_case] = ACTIONS(SHIFT(388)),
        [anon_sym_let] = ACTIONS(SHIFT(389)),
        [anon_sym_var] = ACTIONS(SHIFT(390)),
        [anon_sym_DOT] = ACTIONS(SHIFT(391)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(383)),
        [anon_sym_is] = ACTIONS(SHIFT(392)),
        [sym_identifier] = ACTIONS(SHIFT(393)),
    },
    [8] = {
        [sym__condition_clause] = ACTIONS(SHIFT(376)),
        [sym__condition] = ACTIONS(SHIFT(310)),
        [sym_availability_condition] = ACTIONS(SHIFT(311)),
        [sym_case_condition] = ACTIONS(SHIFT(312)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(312)),
        [sym__expression] = ACTIONS(SHIFT(313)),
        [anon_sym_case] = ACTIONS(SHIFT(314)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(315)),
        [anon_sym_let] = ACTIONS(SHIFT(316)),
        [anon_sym_var] = ACTIONS(SHIFT(316)),
        [sym_identifier] = ACTIONS(SHIFT(317)),
    },
    [9] = {
        [sym__pattern] = ACTIONS(SHIFT(366)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(244)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(244)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(244)),
        [sym_optional_pattern] = ACTIONS(SHIFT(244)),
        [sym_is_pattern] = ACTIONS(SHIFT(244)),
        [sym_as_pattern] = ACTIONS(SHIFT(244)),
        [sym__expression] = ACTIONS(SHIFT(244)),
        [sym__type_identifier] = ACTIONS(SHIFT(245)),
        [sym__type_name] = ACTIONS(SHIFT(114)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(246)),
        [anon_sym_let] = ACTIONS(SHIFT(247)),
        [anon_sym_var] = ACTIONS(SHIFT(247)),
        [anon_sym_DOT] = ACTIONS(SHIFT(248)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(244)),
        [anon_sym_is] = ACTIONS(SHIFT(249)),
        [sym_identifier] = ACTIONS(SHIFT(250)),
    },
    [10] = {
        [sym__code_block] = ACTIONS(SHIFT(359)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(360)),
    },
    [11] = {
        [sym__condition_clause] = ACTIONS(SHIFT(309)),
        [sym__condition] = ACTIONS(SHIFT(310)),
        [sym_availability_condition] = ACTIONS(SHIFT(311)),
        [sym_case_condition] = ACTIONS(SHIFT(312)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(312)),
        [sym__expression] = ACTIONS(SHIFT(313)),
        [anon_sym_case] = ACTIONS(SHIFT(314)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(315)),
        [anon_sym_let] = ACTIONS(SHIFT(316)),
        [anon_sym_var] = ACTIONS(SHIFT(316)),
        [sym_identifier] = ACTIONS(SHIFT(317)),
    },
    [12] = {
        [sym__condition_clause] = ACTIONS(SHIFT(233)),
        [sym__condition] = ACTIONS(SHIFT(234)),
        [sym_availability_condition] = ACTIONS(SHIFT(235)),
        [sym_case_condition] = ACTIONS(SHIFT(236)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(236)),
        [sym__expression] = ACTIONS(SHIFT(237)),
        [anon_sym_case] = ACTIONS(SHIFT(238)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(239)),
        [anon_sym_let] = ACTIONS(SHIFT(240)),
        [anon_sym_var] = ACTIONS(SHIFT(240)),
        [sym_identifier] = ACTIONS(SHIFT(241)),
    },
    [13] = {
        [sym__expression] = ACTIONS(SHIFT(183)),
        [sym_identifier] = ACTIONS(SHIFT(184)),
    },
    [14] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(182)),
    },
    [15] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_continue_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_continue_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(181)),
    },
    [16] = {
        [sym__expression] = ACTIONS(SHIFT(180)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_return_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_return_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(179)),
    },
    [17] = {
        [sym__expression] = ACTIONS(SHIFT(178)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_throw_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_throw_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(179)),
    },
    [18] = {
        [sym__code_block] = ACTIONS(SHIFT(173)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(174)),
    },
    [19] = {
        [sym__code_block] = ACTIONS(SHIFT(98)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(99)),
    },
    [20] = {
        [sym__build_configuration] = ACTIONS(SHIFT(36)),
        [sym_boolean_literal] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(38)),
        [anon_sym_os] = ACTIONS(SHIFT(39)),
        [anon_sym_arch] = ACTIONS(SHIFT(40)),
        [anon_sym_BANG] = ACTIONS(SHIFT(41)),
        [anon_sym_true] = ACTIONS(SHIFT(42)),
        [anon_sym_false] = ACTIONS(SHIFT(42)),
        [sym_identifier] = ACTIONS(SHIFT(37)),
    },
    [21] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_line_control_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_line_control_statement, 1)),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(SHIFT(34)),
    },
    [22] = {
        [anon_sym_var] = ACTIONS(SHIFT(26)),
        [anon_sym_typealias] = ACTIONS(SHIFT(26)),
        [anon_sym_struct] = ACTIONS(SHIFT(26)),
        [anon_sym_class] = ACTIONS(SHIFT(26)),
        [anon_sym_enum] = ACTIONS(SHIFT(26)),
        [anon_sym_protocol] = ACTIONS(SHIFT(26)),
        [anon_sym_func] = ACTIONS(SHIFT(26)),
        [sym_identifier] = ACTIONS(SHIFT(27)),
        [sym_operator] = ACTIONS(SHIFT(27)),
    },
    [23] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(SHIFT(24)),
    },
    [24] = {
        [sym__loop_statement] = ACTIONS(SHIFT(25)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(25)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_repeat] = ACTIONS(SHIFT(10)),
        [anon_sym_if] = ACTIONS(SHIFT(11)),
    },
    [25] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
    },
    [26] = {
        [sym_identifier] = ACTIONS(SHIFT(32)),
        [sym_operator] = ACTIONS(SHIFT(32)),
    },
    [27] = {
        [aux_sym_import_declaration_repeat1] = ACTIONS(SHIFT(28)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_import_declaration, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_import_declaration, 2)),
        [anon_sym_DOT] = ACTIONS(SHIFT(29)),
    },
    [28] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_import_declaration, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_import_declaration, 3)),
    },
    [29] = {
        [sym_identifier] = ACTIONS(SHIFT(30)),
        [sym_operator] = ACTIONS(SHIFT(30)),
    },
    [30] = {
        [aux_sym_import_declaration_repeat1] = ACTIONS(SHIFT(31)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_import_declaration_repeat1, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_import_declaration_repeat1, 2)),
        [anon_sym_DOT] = ACTIONS(SHIFT(29)),
    },
    [31] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_import_declaration_repeat1, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_import_declaration_repeat1, 3)),
    },
    [32] = {
        [aux_sym_import_declaration_repeat1] = ACTIONS(SHIFT(33)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_import_declaration, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_import_declaration, 3)),
        [anon_sym_DOT] = ACTIONS(SHIFT(29)),
    },
    [33] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_import_declaration, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_import_declaration, 4)),
    },
    [34] = {
        [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LPAREN_BSLASH_BSLASH_BSLASH_BSLASH_LPAREN_LBRACK_BSLASH_BSLASH0tnr_SQUOTE_BSLASH_DQUOTE_RBRACK_PIPEu_BSLASH_BSLASH_LBRACE_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA8_RBRACE_BSLASH_BSLASH_RBRACE_RPAREN_RPAREN_PIPE_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_BSLASH_BSLASH_BSLASH_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(SHIFT(35)),
    },
    [35] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_line_control_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_line_control_statement, 3)),
    },
    [36] = {
        [sym__statement] = ACTIONS(SHIFT(71)),
        [sym__loop_statement] = ACTIONS(SHIFT(72)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(72)),
        [sym_guard_statement] = ACTIONS(SHIFT(72)),
        [sym_switch_statement] = ACTIONS(SHIFT(72)),
        [sym_labeled_statement] = ACTIONS(SHIFT(72)),
        [sym_break_statement] = ACTIONS(SHIFT(72)),
        [sym_continue_statement] = ACTIONS(SHIFT(72)),
        [sym_return_statement] = ACTIONS(SHIFT(72)),
        [sym_throw_statement] = ACTIONS(SHIFT(72)),
        [sym_defer_statement] = ACTIONS(SHIFT(72)),
        [sym_do_statement] = ACTIONS(SHIFT(72)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(72)),
        [sym_line_control_statement] = ACTIONS(SHIFT(72)),
        [sym__declaration] = ACTIONS(SHIFT(72)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(72)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(73)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(SHIFT(74)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_let] = ACTIONS(SHIFT(9)),
        [anon_sym_repeat] = ACTIONS(SHIFT(10)),
        [anon_sym_if] = ACTIONS(SHIFT(11)),
        [anon_sym_guard] = ACTIONS(SHIFT(12)),
        [anon_sym_switch] = ACTIONS(SHIFT(13)),
        [anon_sym_break] = ACTIONS(SHIFT(14)),
        [anon_sym_continue] = ACTIONS(SHIFT(15)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(72)),
        [anon_sym_return] = ACTIONS(SHIFT(16)),
        [anon_sym_throw] = ACTIONS(SHIFT(17)),
        [anon_sym_defer] = ACTIONS(SHIFT(18)),
        [anon_sym_do] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(20)),
        [anon_sym_POUNDelseif] = ACTIONS(SHIFT(75)),
        [anon_sym_POUNDelse] = ACTIONS(SHIFT(76)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(77)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(44)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(45)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(21)),
        [anon_sym_import] = ACTIONS(SHIFT(22)),
        [sym_identifier] = ACTIONS(SHIFT(23)),
    },
    [37] = {
        [sym__statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_break_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_continue_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_return_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_throw_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_defer_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_do_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_build_configuration_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_line_control_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_import_declaration] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_constant_declaration] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_let] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_break] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_continue] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_fallthrough_statement] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_return] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_throw] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_defer] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_do] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_POUNDif] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_POUNDelseif] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_import] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__build_configuration, 1)),
    },
    [38] = {
        [sym__build_configuration] = ACTIONS(SHIFT(52)),
        [sym_boolean_literal] = ACTIONS(SHIFT(53)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(54)),
        [anon_sym_os] = ACTIONS(SHIFT(55)),
        [anon_sym_arch] = ACTIONS(SHIFT(56)),
        [anon_sym_BANG] = ACTIONS(SHIFT(57)),
        [anon_sym_true] = ACTIONS(SHIFT(58)),
        [anon_sym_false] = ACTIONS(SHIFT(58)),
        [sym_identifier] = ACTIONS(SHIFT(53)),
    },
    [39] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(51)),
    },
    [40] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(48)),
    },
    [41] = {
        [sym__build_configuration] = ACTIONS(SHIFT(43)),
        [sym_boolean_literal] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(38)),
        [anon_sym_os] = ACTIONS(SHIFT(39)),
        [anon_sym_arch] = ACTIONS(SHIFT(40)),
        [anon_sym_BANG] = ACTIONS(SHIFT(41)),
        [anon_sym_true] = ACTIONS(SHIFT(42)),
        [anon_sym_false] = ACTIONS(SHIFT(42)),
        [sym_identifier] = ACTIONS(SHIFT(37)),
    },
    [42] = {
        [sym__statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_while_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_if_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_break_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_continue_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_return_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_throw_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_defer_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_do_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_build_configuration_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_line_control_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_import_declaration] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_constant_declaration] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_let] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_if] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_break] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_continue] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_fallthrough_statement] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_return] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_throw] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_defer] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_do] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_POUNDif] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_POUNDelseif] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_import] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
    },
    [43] = {
        [sym__statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_break_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_continue_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_return_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_throw_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_defer_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_do_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_build_configuration_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_line_control_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_import_declaration] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_constant_declaration] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_let] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_break] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_continue] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_fallthrough_statement] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_return] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_throw] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_defer] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_do] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_POUNDif] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_POUNDelseif] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(44)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(45)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_import] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__build_configuration, 2)),
    },
    [44] = {
        [sym__build_configuration] = ACTIONS(SHIFT(47)),
        [sym_boolean_literal] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(38)),
        [anon_sym_os] = ACTIONS(SHIFT(39)),
        [anon_sym_arch] = ACTIONS(SHIFT(40)),
        [anon_sym_BANG] = ACTIONS(SHIFT(41)),
        [anon_sym_true] = ACTIONS(SHIFT(42)),
        [anon_sym_false] = ACTIONS(SHIFT(42)),
        [sym_identifier] = ACTIONS(SHIFT(37)),
    },
    [45] = {
        [sym__build_configuration] = ACTIONS(SHIFT(46)),
        [sym_boolean_literal] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(38)),
        [anon_sym_os] = ACTIONS(SHIFT(39)),
        [anon_sym_arch] = ACTIONS(SHIFT(40)),
        [anon_sym_BANG] = ACTIONS(SHIFT(41)),
        [anon_sym_true] = ACTIONS(SHIFT(42)),
        [anon_sym_false] = ACTIONS(SHIFT(42)),
        [sym_identifier] = ACTIONS(SHIFT(37)),
    },
    [46] = {
        [sym__statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_for_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_while_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_if_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_labeled_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_break_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_continue_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_return_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_throw_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_defer_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_do_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_build_configuration_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_line_control_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym__declaration] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_import_declaration] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_constant_declaration] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym__expression] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_for] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_while] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_let] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_if] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_guard] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_break] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_continue] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_fallthrough_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_return] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_throw] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_defer] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_do] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_POUNDif] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_POUNDelseif] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(44)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_import] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_identifier] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
    },
    [47] = {
        [sym__statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_for_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_while_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_if_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_labeled_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_break_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_continue_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_return_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_throw_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_defer_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_do_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_build_configuration_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_line_control_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym__declaration] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_import_declaration] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_constant_declaration] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym__expression] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_for] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_while] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_let] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_if] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_guard] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_break] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_continue] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_fallthrough_statement] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_return] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_throw] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_defer] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_do] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_POUNDif] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_POUNDelseif] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_import] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_identifier] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
    },
    [48] = {
        [anon_sym_i386] = ACTIONS(SHIFT(49)),
        [anon_sym_x86_64] = ACTIONS(SHIFT(49)),
        [anon_sym_arm] = ACTIONS(SHIFT(49)),
        [anon_sym_arm64] = ACTIONS(SHIFT(49)),
    },
    [49] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(50)),
    },
    [50] = {
        [sym__statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_break_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_continue_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_return_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_throw_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_defer_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_do_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_build_configuration_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_line_control_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym__declaration] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_import_declaration] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_constant_declaration] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym__expression] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_let] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_break] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_continue] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_fallthrough_statement] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_return] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_throw] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_defer] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_do] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_POUNDif] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_POUNDelseif] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_import] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [sym_identifier] = ACTIONS(REDUCE(sym__build_configuration, 4)),
    },
    [51] = {
        [anon_sym_iOS] = ACTIONS(SHIFT(49)),
        [anon_sym_OSX] = ACTIONS(SHIFT(49)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(49)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(49)),
    },
    [52] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(70)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(60)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(61)),
    },
    [53] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE(sym__build_configuration, 1)),
    },
    [54] = {
        [sym__build_configuration] = ACTIONS(SHIFT(68)),
        [sym_boolean_literal] = ACTIONS(SHIFT(53)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(54)),
        [anon_sym_os] = ACTIONS(SHIFT(55)),
        [anon_sym_arch] = ACTIONS(SHIFT(56)),
        [anon_sym_BANG] = ACTIONS(SHIFT(57)),
        [anon_sym_true] = ACTIONS(SHIFT(58)),
        [anon_sym_false] = ACTIONS(SHIFT(58)),
        [sym_identifier] = ACTIONS(SHIFT(53)),
    },
    [55] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(67)),
    },
    [56] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(64)),
    },
    [57] = {
        [sym__build_configuration] = ACTIONS(SHIFT(59)),
        [sym_boolean_literal] = ACTIONS(SHIFT(53)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(54)),
        [anon_sym_os] = ACTIONS(SHIFT(55)),
        [anon_sym_arch] = ACTIONS(SHIFT(56)),
        [anon_sym_BANG] = ACTIONS(SHIFT(57)),
        [anon_sym_true] = ACTIONS(SHIFT(58)),
        [anon_sym_false] = ACTIONS(SHIFT(58)),
        [sym_identifier] = ACTIONS(SHIFT(53)),
    },
    [58] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
    },
    [59] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(60)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(61)),
    },
    [60] = {
        [sym__build_configuration] = ACTIONS(SHIFT(63)),
        [sym_boolean_literal] = ACTIONS(SHIFT(53)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(54)),
        [anon_sym_os] = ACTIONS(SHIFT(55)),
        [anon_sym_arch] = ACTIONS(SHIFT(56)),
        [anon_sym_BANG] = ACTIONS(SHIFT(57)),
        [anon_sym_true] = ACTIONS(SHIFT(58)),
        [anon_sym_false] = ACTIONS(SHIFT(58)),
        [sym_identifier] = ACTIONS(SHIFT(53)),
    },
    [61] = {
        [sym__build_configuration] = ACTIONS(SHIFT(62)),
        [sym_boolean_literal] = ACTIONS(SHIFT(53)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(54)),
        [anon_sym_os] = ACTIONS(SHIFT(55)),
        [anon_sym_arch] = ACTIONS(SHIFT(56)),
        [anon_sym_BANG] = ACTIONS(SHIFT(57)),
        [anon_sym_true] = ACTIONS(SHIFT(58)),
        [anon_sym_false] = ACTIONS(SHIFT(58)),
        [sym_identifier] = ACTIONS(SHIFT(53)),
    },
    [62] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(60)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
    },
    [63] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
    },
    [64] = {
        [anon_sym_i386] = ACTIONS(SHIFT(65)),
        [anon_sym_x86_64] = ACTIONS(SHIFT(65)),
        [anon_sym_arm] = ACTIONS(SHIFT(65)),
        [anon_sym_arm64] = ACTIONS(SHIFT(65)),
    },
    [65] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(66)),
    },
    [66] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE(sym__build_configuration, 4)),
    },
    [67] = {
        [anon_sym_iOS] = ACTIONS(SHIFT(65)),
        [anon_sym_OSX] = ACTIONS(SHIFT(65)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(65)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(65)),
    },
    [68] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(69)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(60)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(61)),
    },
    [69] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE(sym__build_configuration, 3)),
    },
    [70] = {
        [sym__statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_for_in_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_while_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_repeat_while_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_if_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_guard_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_switch_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_labeled_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_break_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_continue_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_return_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_throw_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_defer_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_do_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_build_configuration_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_line_control_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_import_declaration] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_constant_declaration] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_let] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_repeat] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_if] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_guard] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_switch] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_break] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_continue] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_fallthrough_statement] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_return] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_throw] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_defer] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_do] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_POUNDif] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_POUNDelseif] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_import] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [sym_identifier] = ACTIONS(REDUCE(sym__build_configuration, 3)),
    },
    [71] = {
        [sym__statement] = ACTIONS(SHIFT(71)),
        [sym__loop_statement] = ACTIONS(SHIFT(72)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(72)),
        [sym_guard_statement] = ACTIONS(SHIFT(72)),
        [sym_switch_statement] = ACTIONS(SHIFT(72)),
        [sym_labeled_statement] = ACTIONS(SHIFT(72)),
        [sym_break_statement] = ACTIONS(SHIFT(72)),
        [sym_continue_statement] = ACTIONS(SHIFT(72)),
        [sym_return_statement] = ACTIONS(SHIFT(72)),
        [sym_throw_statement] = ACTIONS(SHIFT(72)),
        [sym_defer_statement] = ACTIONS(SHIFT(72)),
        [sym_do_statement] = ACTIONS(SHIFT(72)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(72)),
        [sym_line_control_statement] = ACTIONS(SHIFT(72)),
        [sym__declaration] = ACTIONS(SHIFT(72)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(72)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(97)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_let] = ACTIONS(SHIFT(9)),
        [anon_sym_repeat] = ACTIONS(SHIFT(10)),
        [anon_sym_if] = ACTIONS(SHIFT(11)),
        [anon_sym_guard] = ACTIONS(SHIFT(12)),
        [anon_sym_switch] = ACTIONS(SHIFT(13)),
        [anon_sym_break] = ACTIONS(SHIFT(14)),
        [anon_sym_continue] = ACTIONS(SHIFT(15)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(72)),
        [anon_sym_return] = ACTIONS(SHIFT(16)),
        [anon_sym_throw] = ACTIONS(SHIFT(17)),
        [anon_sym_defer] = ACTIONS(SHIFT(18)),
        [anon_sym_do] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(20)),
        [anon_sym_POUNDelseif] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(21)),
        [anon_sym_import] = ACTIONS(SHIFT(22)),
        [sym_identifier] = ACTIONS(SHIFT(23)),
    },
    [72] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(96)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(SHIFT(96)),
    },
    [73] = {
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(SHIFT(92)),
        [anon_sym_POUNDelseif] = ACTIONS(SHIFT(75)),
        [anon_sym_POUNDelse] = ACTIONS(SHIFT(89)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(81)),
    },
    [74] = {
        [anon_sym_POUNDelse] = ACTIONS(SHIFT(89)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(81)),
    },
    [75] = {
        [sym__build_configuration] = ACTIONS(SHIFT(85)),
        [sym_boolean_literal] = ACTIONS(SHIFT(37)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(38)),
        [anon_sym_os] = ACTIONS(SHIFT(39)),
        [anon_sym_arch] = ACTIONS(SHIFT(40)),
        [anon_sym_BANG] = ACTIONS(SHIFT(41)),
        [anon_sym_true] = ACTIONS(SHIFT(42)),
        [anon_sym_false] = ACTIONS(SHIFT(42)),
        [sym_identifier] = ACTIONS(SHIFT(37)),
    },
    [76] = {
        [sym__statement] = ACTIONS(SHIFT(78)),
        [sym__loop_statement] = ACTIONS(SHIFT(79)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(79)),
        [sym_guard_statement] = ACTIONS(SHIFT(79)),
        [sym_switch_statement] = ACTIONS(SHIFT(79)),
        [sym_labeled_statement] = ACTIONS(SHIFT(79)),
        [sym_break_statement] = ACTIONS(SHIFT(79)),
        [sym_continue_statement] = ACTIONS(SHIFT(79)),
        [sym_return_statement] = ACTIONS(SHIFT(79)),
        [sym_throw_statement] = ACTIONS(SHIFT(79)),
        [sym_defer_statement] = ACTIONS(SHIFT(79)),
        [sym_do_statement] = ACTIONS(SHIFT(79)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(79)),
        [sym_line_control_statement] = ACTIONS(SHIFT(79)),
        [sym__declaration] = ACTIONS(SHIFT(79)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(79)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(80)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_let] = ACTIONS(SHIFT(9)),
        [anon_sym_repeat] = ACTIONS(SHIFT(10)),
        [anon_sym_if] = ACTIONS(SHIFT(11)),
        [anon_sym_guard] = ACTIONS(SHIFT(12)),
        [anon_sym_switch] = ACTIONS(SHIFT(13)),
        [anon_sym_break] = ACTIONS(SHIFT(14)),
        [anon_sym_continue] = ACTIONS(SHIFT(15)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(79)),
        [anon_sym_return] = ACTIONS(SHIFT(16)),
        [anon_sym_throw] = ACTIONS(SHIFT(17)),
        [anon_sym_defer] = ACTIONS(SHIFT(18)),
        [anon_sym_do] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(20)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(81)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(21)),
        [anon_sym_import] = ACTIONS(SHIFT(22)),
        [sym_identifier] = ACTIONS(SHIFT(23)),
    },
    [77] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_build_configuration_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_build_configuration_statement, 3)),
    },
    [78] = {
        [sym__statement] = ACTIONS(SHIFT(78)),
        [sym__loop_statement] = ACTIONS(SHIFT(79)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(79)),
        [sym_guard_statement] = ACTIONS(SHIFT(79)),
        [sym_switch_statement] = ACTIONS(SHIFT(79)),
        [sym_labeled_statement] = ACTIONS(SHIFT(79)),
        [sym_break_statement] = ACTIONS(SHIFT(79)),
        [sym_continue_statement] = ACTIONS(SHIFT(79)),
        [sym_return_statement] = ACTIONS(SHIFT(79)),
        [sym_throw_statement] = ACTIONS(SHIFT(79)),
        [sym_defer_statement] = ACTIONS(SHIFT(79)),
        [sym_do_statement] = ACTIONS(SHIFT(79)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(79)),
        [sym_line_control_statement] = ACTIONS(SHIFT(79)),
        [sym__declaration] = ACTIONS(SHIFT(79)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(79)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(84)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_let] = ACTIONS(SHIFT(9)),
        [anon_sym_repeat] = ACTIONS(SHIFT(10)),
        [anon_sym_if] = ACTIONS(SHIFT(11)),
        [anon_sym_guard] = ACTIONS(SHIFT(12)),
        [anon_sym_switch] = ACTIONS(SHIFT(13)),
        [anon_sym_break] = ACTIONS(SHIFT(14)),
        [anon_sym_continue] = ACTIONS(SHIFT(15)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(79)),
        [anon_sym_return] = ACTIONS(SHIFT(16)),
        [anon_sym_throw] = ACTIONS(SHIFT(17)),
        [anon_sym_defer] = ACTIONS(SHIFT(18)),
        [anon_sym_do] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(20)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(21)),
        [anon_sym_import] = ACTIONS(SHIFT(22)),
        [sym_identifier] = ACTIONS(SHIFT(23)),
    },
    [79] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(83)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(SHIFT(83)),
    },
    [80] = {
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(82)),
    },
    [81] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_build_configuration_statement, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_build_configuration_statement, 4)),
    },
    [82] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_build_configuration_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_build_configuration_statement, 5)),
    },
    [83] = {
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
        [sym_build_configuration_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_line_control_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_import_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_constant_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_let] = ACTIONS(REDUCE(sym__statement, 2)),
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
        [anon_sym_POUNDif] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_import] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [84] = {
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [85] = {
        [sym__statement] = ACTIONS(SHIFT(71)),
        [sym__loop_statement] = ACTIONS(SHIFT(72)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(72)),
        [sym_guard_statement] = ACTIONS(SHIFT(72)),
        [sym_switch_statement] = ACTIONS(SHIFT(72)),
        [sym_labeled_statement] = ACTIONS(SHIFT(72)),
        [sym_break_statement] = ACTIONS(SHIFT(72)),
        [sym_continue_statement] = ACTIONS(SHIFT(72)),
        [sym_return_statement] = ACTIONS(SHIFT(72)),
        [sym_throw_statement] = ACTIONS(SHIFT(72)),
        [sym_defer_statement] = ACTIONS(SHIFT(72)),
        [sym_do_statement] = ACTIONS(SHIFT(72)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(72)),
        [sym_line_control_statement] = ACTIONS(SHIFT(72)),
        [sym__declaration] = ACTIONS(SHIFT(72)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(72)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(86)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(SHIFT(87)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_let] = ACTIONS(SHIFT(9)),
        [anon_sym_repeat] = ACTIONS(SHIFT(10)),
        [anon_sym_if] = ACTIONS(SHIFT(11)),
        [anon_sym_guard] = ACTIONS(SHIFT(12)),
        [anon_sym_switch] = ACTIONS(SHIFT(13)),
        [anon_sym_break] = ACTIONS(SHIFT(14)),
        [anon_sym_continue] = ACTIONS(SHIFT(15)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(72)),
        [anon_sym_return] = ACTIONS(SHIFT(16)),
        [anon_sym_throw] = ACTIONS(SHIFT(17)),
        [anon_sym_defer] = ACTIONS(SHIFT(18)),
        [anon_sym_do] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(20)),
        [anon_sym_POUNDelseif] = ACTIONS(SHIFT(75)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 2)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 2)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(44)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(45)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(21)),
        [anon_sym_import] = ACTIONS(SHIFT(22)),
        [sym_identifier] = ACTIONS(SHIFT(23)),
    },
    [86] = {
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(SHIFT(88)),
        [anon_sym_POUNDelseif] = ACTIONS(SHIFT(75)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 3)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 3)),
    },
    [87] = {
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 3)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 3)),
    },
    [88] = {
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 4)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 4)),
    },
    [89] = {
        [sym__statement] = ACTIONS(SHIFT(78)),
        [sym__loop_statement] = ACTIONS(SHIFT(79)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(79)),
        [sym_guard_statement] = ACTIONS(SHIFT(79)),
        [sym_switch_statement] = ACTIONS(SHIFT(79)),
        [sym_labeled_statement] = ACTIONS(SHIFT(79)),
        [sym_break_statement] = ACTIONS(SHIFT(79)),
        [sym_continue_statement] = ACTIONS(SHIFT(79)),
        [sym_return_statement] = ACTIONS(SHIFT(79)),
        [sym_throw_statement] = ACTIONS(SHIFT(79)),
        [sym_defer_statement] = ACTIONS(SHIFT(79)),
        [sym_do_statement] = ACTIONS(SHIFT(79)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(79)),
        [sym_line_control_statement] = ACTIONS(SHIFT(79)),
        [sym__declaration] = ACTIONS(SHIFT(79)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(79)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(90)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_let] = ACTIONS(SHIFT(9)),
        [anon_sym_repeat] = ACTIONS(SHIFT(10)),
        [anon_sym_if] = ACTIONS(SHIFT(11)),
        [anon_sym_guard] = ACTIONS(SHIFT(12)),
        [anon_sym_switch] = ACTIONS(SHIFT(13)),
        [anon_sym_break] = ACTIONS(SHIFT(14)),
        [anon_sym_continue] = ACTIONS(SHIFT(15)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(79)),
        [anon_sym_return] = ACTIONS(SHIFT(16)),
        [anon_sym_throw] = ACTIONS(SHIFT(17)),
        [anon_sym_defer] = ACTIONS(SHIFT(18)),
        [anon_sym_do] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(20)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(82)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(21)),
        [anon_sym_import] = ACTIONS(SHIFT(22)),
        [sym_identifier] = ACTIONS(SHIFT(23)),
    },
    [90] = {
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(91)),
    },
    [91] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_build_configuration_statement, 6)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_build_configuration_statement, 6)),
    },
    [92] = {
        [anon_sym_POUNDelse] = ACTIONS(SHIFT(93)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(82)),
    },
    [93] = {
        [sym__statement] = ACTIONS(SHIFT(78)),
        [sym__loop_statement] = ACTIONS(SHIFT(79)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(79)),
        [sym_guard_statement] = ACTIONS(SHIFT(79)),
        [sym_switch_statement] = ACTIONS(SHIFT(79)),
        [sym_labeled_statement] = ACTIONS(SHIFT(79)),
        [sym_break_statement] = ACTIONS(SHIFT(79)),
        [sym_continue_statement] = ACTIONS(SHIFT(79)),
        [sym_return_statement] = ACTIONS(SHIFT(79)),
        [sym_throw_statement] = ACTIONS(SHIFT(79)),
        [sym_defer_statement] = ACTIONS(SHIFT(79)),
        [sym_do_statement] = ACTIONS(SHIFT(79)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(79)),
        [sym_line_control_statement] = ACTIONS(SHIFT(79)),
        [sym__declaration] = ACTIONS(SHIFT(79)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(79)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(94)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_let] = ACTIONS(SHIFT(9)),
        [anon_sym_repeat] = ACTIONS(SHIFT(10)),
        [anon_sym_if] = ACTIONS(SHIFT(11)),
        [anon_sym_guard] = ACTIONS(SHIFT(12)),
        [anon_sym_switch] = ACTIONS(SHIFT(13)),
        [anon_sym_break] = ACTIONS(SHIFT(14)),
        [anon_sym_continue] = ACTIONS(SHIFT(15)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(79)),
        [anon_sym_return] = ACTIONS(SHIFT(16)),
        [anon_sym_throw] = ACTIONS(SHIFT(17)),
        [anon_sym_defer] = ACTIONS(SHIFT(18)),
        [anon_sym_do] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(20)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(91)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(21)),
        [anon_sym_import] = ACTIONS(SHIFT(22)),
        [sym_identifier] = ACTIONS(SHIFT(23)),
    },
    [94] = {
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(95)),
    },
    [95] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_build_configuration_statement, 7)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_build_configuration_statement, 7)),
    },
    [96] = {
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
        [sym_build_configuration_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_line_control_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_import_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_constant_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_let] = ACTIONS(REDUCE(sym__statement, 2)),
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
        [anon_sym_POUNDif] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDelseif] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_import] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [97] = {
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_POUNDelseif] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [98] = {
        [sym_catch_clause] = ACTIONS(SHIFT(107)),
        [aux_sym_do_statement_repeat1] = ACTIONS(SHIFT(108)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_do_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_do_statement, 2)),
        [anon_sym_catch] = ACTIONS(SHIFT(109)),
    },
    [99] = {
        [sym__statement] = ACTIONS(SHIFT(100)),
        [sym__loop_statement] = ACTIONS(SHIFT(101)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(101)),
        [sym_guard_statement] = ACTIONS(SHIFT(101)),
        [sym_switch_statement] = ACTIONS(SHIFT(101)),
        [sym_labeled_statement] = ACTIONS(SHIFT(101)),
        [sym_break_statement] = ACTIONS(SHIFT(101)),
        [sym_continue_statement] = ACTIONS(SHIFT(101)),
        [sym_return_statement] = ACTIONS(SHIFT(101)),
        [sym_throw_statement] = ACTIONS(SHIFT(101)),
        [sym_defer_statement] = ACTIONS(SHIFT(101)),
        [sym_do_statement] = ACTIONS(SHIFT(101)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(101)),
        [sym_line_control_statement] = ACTIONS(SHIFT(101)),
        [sym__declaration] = ACTIONS(SHIFT(101)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(101)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(102)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_let] = ACTIONS(SHIFT(9)),
        [anon_sym_repeat] = ACTIONS(SHIFT(10)),
        [anon_sym_if] = ACTIONS(SHIFT(11)),
        [anon_sym_guard] = ACTIONS(SHIFT(12)),
        [anon_sym_switch] = ACTIONS(SHIFT(13)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(103)),
        [anon_sym_break] = ACTIONS(SHIFT(14)),
        [anon_sym_continue] = ACTIONS(SHIFT(15)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(101)),
        [anon_sym_return] = ACTIONS(SHIFT(16)),
        [anon_sym_throw] = ACTIONS(SHIFT(17)),
        [anon_sym_defer] = ACTIONS(SHIFT(18)),
        [anon_sym_do] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(20)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(21)),
        [anon_sym_import] = ACTIONS(SHIFT(22)),
        [sym_identifier] = ACTIONS(SHIFT(23)),
    },
    [100] = {
        [sym__statement] = ACTIONS(SHIFT(100)),
        [sym__loop_statement] = ACTIONS(SHIFT(101)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(101)),
        [sym_guard_statement] = ACTIONS(SHIFT(101)),
        [sym_switch_statement] = ACTIONS(SHIFT(101)),
        [sym_labeled_statement] = ACTIONS(SHIFT(101)),
        [sym_break_statement] = ACTIONS(SHIFT(101)),
        [sym_continue_statement] = ACTIONS(SHIFT(101)),
        [sym_return_statement] = ACTIONS(SHIFT(101)),
        [sym_throw_statement] = ACTIONS(SHIFT(101)),
        [sym_defer_statement] = ACTIONS(SHIFT(101)),
        [sym_do_statement] = ACTIONS(SHIFT(101)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(101)),
        [sym_line_control_statement] = ACTIONS(SHIFT(101)),
        [sym__declaration] = ACTIONS(SHIFT(101)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(101)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(106)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_let] = ACTIONS(SHIFT(9)),
        [anon_sym_repeat] = ACTIONS(SHIFT(10)),
        [anon_sym_if] = ACTIONS(SHIFT(11)),
        [anon_sym_guard] = ACTIONS(SHIFT(12)),
        [anon_sym_switch] = ACTIONS(SHIFT(13)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_break] = ACTIONS(SHIFT(14)),
        [anon_sym_continue] = ACTIONS(SHIFT(15)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(101)),
        [anon_sym_return] = ACTIONS(SHIFT(16)),
        [anon_sym_throw] = ACTIONS(SHIFT(17)),
        [anon_sym_defer] = ACTIONS(SHIFT(18)),
        [anon_sym_do] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(20)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(21)),
        [anon_sym_import] = ACTIONS(SHIFT(22)),
        [sym_identifier] = ACTIONS(SHIFT(23)),
    },
    [101] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(105)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(SHIFT(105)),
    },
    [102] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(104)),
    },
    [103] = {
        [sym_catch_clause] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_do_statement_repeat1] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_catch] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [104] = {
        [sym_catch_clause] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_do_statement_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_catch] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [105] = {
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
        [sym_build_configuration_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_line_control_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_import_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_constant_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_let] = ACTIONS(REDUCE(sym__statement, 2)),
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
        [anon_sym_POUNDif] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_import] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [106] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [107] = {
        [sym_catch_clause] = ACTIONS(SHIFT(107)),
        [aux_sym_do_statement_repeat1] = ACTIONS(SHIFT(172)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_do_statement_repeat1, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_do_statement_repeat1, 1)),
        [anon_sym_catch] = ACTIONS(SHIFT(109)),
    },
    [108] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_do_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_do_statement, 3)),
    },
    [109] = {
        [sym__code_block] = ACTIONS(SHIFT(110)),
        [sym__pattern] = ACTIONS(SHIFT(111)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(112)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(112)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(112)),
        [sym_optional_pattern] = ACTIONS(SHIFT(112)),
        [sym_is_pattern] = ACTIONS(SHIFT(112)),
        [sym_as_pattern] = ACTIONS(SHIFT(112)),
        [sym__expression] = ACTIONS(SHIFT(112)),
        [sym__type_identifier] = ACTIONS(SHIFT(113)),
        [sym__type_name] = ACTIONS(SHIFT(114)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(115)),
        [anon_sym_let] = ACTIONS(SHIFT(116)),
        [anon_sym_var] = ACTIONS(SHIFT(116)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(99)),
        [anon_sym_DOT] = ACTIONS(SHIFT(117)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(112)),
        [anon_sym_is] = ACTIONS(SHIFT(118)),
        [sym_identifier] = ACTIONS(SHIFT(119)),
    },
    [110] = {
        [sym_catch_clause] = ACTIONS(REDUCE(sym_catch_clause, 2)),
        [aux_sym_do_statement_repeat1] = ACTIONS(REDUCE(sym_catch_clause, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_catch_clause, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_catch_clause, 2)),
        [anon_sym_catch] = ACTIONS(REDUCE(sym_catch_clause, 2)),
    },
    [111] = {
        [sym__code_block] = ACTIONS(SHIFT(171)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(99)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(129)),
        [anon_sym_as] = ACTIONS(SHIFT(130)),
    },
    [112] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [113] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(168)),
    },
    [114] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(165)),
    },
    [115] = {
        [sym__pattern] = ACTIONS(SHIFT(132)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(133)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(133)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(134)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(133)),
        [sym_optional_pattern] = ACTIONS(SHIFT(133)),
        [sym_is_pattern] = ACTIONS(SHIFT(133)),
        [sym_as_pattern] = ACTIONS(SHIFT(133)),
        [sym__expression] = ACTIONS(SHIFT(133)),
        [sym__type_identifier] = ACTIONS(SHIFT(135)),
        [sym__type_name] = ACTIONS(SHIFT(114)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(136)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(137)),
        [anon_sym_let] = ACTIONS(SHIFT(138)),
        [anon_sym_var] = ACTIONS(SHIFT(138)),
        [anon_sym_DOT] = ACTIONS(SHIFT(139)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(133)),
        [anon_sym_is] = ACTIONS(SHIFT(140)),
        [sym_identifier] = ACTIONS(SHIFT(141)),
    },
    [116] = {
        [sym__pattern] = ACTIONS(SHIFT(128)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(112)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(112)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(112)),
        [sym_optional_pattern] = ACTIONS(SHIFT(112)),
        [sym_is_pattern] = ACTIONS(SHIFT(112)),
        [sym_as_pattern] = ACTIONS(SHIFT(112)),
        [sym__expression] = ACTIONS(SHIFT(112)),
        [sym__type_identifier] = ACTIONS(SHIFT(113)),
        [sym__type_name] = ACTIONS(SHIFT(114)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(115)),
        [anon_sym_let] = ACTIONS(SHIFT(116)),
        [anon_sym_var] = ACTIONS(SHIFT(116)),
        [anon_sym_DOT] = ACTIONS(SHIFT(117)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(112)),
        [anon_sym_is] = ACTIONS(SHIFT(118)),
        [sym_identifier] = ACTIONS(SHIFT(119)),
    },
    [117] = {
        [sym_identifier] = ACTIONS(SHIFT(126)),
    },
    [118] = {
        [sym_type] = ACTIONS(SHIFT(120)),
        [sym__type_identifier] = ACTIONS(SHIFT(121)),
        [sym__type_name] = ACTIONS(SHIFT(122)),
        [sym_identifier] = ACTIONS(SHIFT(123)),
    },
    [119] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [120] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [121] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [122] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(124)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [123] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [124] = {
        [sym__type_identifier] = ACTIONS(SHIFT(125)),
        [sym__type_name] = ACTIONS(SHIFT(122)),
        [sym_identifier] = ACTIONS(SHIFT(123)),
    },
    [125] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [126] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(127)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(115)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [127] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [128] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(129)),
        [anon_sym_as] = ACTIONS(SHIFT(130)),
    },
    [129] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [130] = {
        [sym_type] = ACTIONS(SHIFT(131)),
        [sym__type_identifier] = ACTIONS(SHIFT(121)),
        [sym__type_name] = ACTIONS(SHIFT(122)),
        [sym_identifier] = ACTIONS(SHIFT(123)),
    },
    [131] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [132] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(161)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(162)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(151)),
        [anon_sym_as] = ACTIONS(SHIFT(152)),
    },
    [133] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [134] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(160)),
    },
    [135] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(157)),
    },
    [136] = {
        [sym__pattern] = ACTIONS(SHIFT(132)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(133)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(133)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(154)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(133)),
        [sym_optional_pattern] = ACTIONS(SHIFT(133)),
        [sym_is_pattern] = ACTIONS(SHIFT(133)),
        [sym_as_pattern] = ACTIONS(SHIFT(133)),
        [sym__expression] = ACTIONS(SHIFT(133)),
        [sym__type_identifier] = ACTIONS(SHIFT(135)),
        [sym__type_name] = ACTIONS(SHIFT(114)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(136)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(155)),
        [anon_sym_let] = ACTIONS(SHIFT(138)),
        [anon_sym_var] = ACTIONS(SHIFT(138)),
        [anon_sym_DOT] = ACTIONS(SHIFT(139)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(133)),
        [anon_sym_is] = ACTIONS(SHIFT(140)),
        [sym_identifier] = ACTIONS(SHIFT(141)),
    },
    [137] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [138] = {
        [sym__pattern] = ACTIONS(SHIFT(150)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(133)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(133)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(133)),
        [sym_optional_pattern] = ACTIONS(SHIFT(133)),
        [sym_is_pattern] = ACTIONS(SHIFT(133)),
        [sym_as_pattern] = ACTIONS(SHIFT(133)),
        [sym__expression] = ACTIONS(SHIFT(133)),
        [sym__type_identifier] = ACTIONS(SHIFT(135)),
        [sym__type_name] = ACTIONS(SHIFT(114)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(136)),
        [anon_sym_let] = ACTIONS(SHIFT(138)),
        [anon_sym_var] = ACTIONS(SHIFT(138)),
        [anon_sym_DOT] = ACTIONS(SHIFT(139)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(133)),
        [anon_sym_is] = ACTIONS(SHIFT(140)),
        [sym_identifier] = ACTIONS(SHIFT(141)),
    },
    [139] = {
        [sym_identifier] = ACTIONS(SHIFT(148)),
    },
    [140] = {
        [sym_type] = ACTIONS(SHIFT(142)),
        [sym__type_identifier] = ACTIONS(SHIFT(143)),
        [sym__type_name] = ACTIONS(SHIFT(144)),
        [sym_identifier] = ACTIONS(SHIFT(145)),
    },
    [141] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [142] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [143] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [144] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(146)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [145] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [146] = {
        [sym__type_identifier] = ACTIONS(SHIFT(147)),
        [sym__type_name] = ACTIONS(SHIFT(144)),
        [sym_identifier] = ACTIONS(SHIFT(145)),
    },
    [147] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [148] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(149)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(136)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [149] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [150] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(151)),
        [anon_sym_as] = ACTIONS(SHIFT(152)),
    },
    [151] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [152] = {
        [sym_type] = ACTIONS(SHIFT(153)),
        [sym__type_identifier] = ACTIONS(SHIFT(143)),
        [sym__type_name] = ACTIONS(SHIFT(144)),
        [sym_identifier] = ACTIONS(SHIFT(145)),
    },
    [153] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [154] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(156)),
    },
    [155] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [156] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [157] = {
        [sym_identifier] = ACTIONS(SHIFT(158)),
    },
    [158] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(159)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(136)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [159] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [160] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [161] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 2)),
    },
    [162] = {
        [sym__pattern] = ACTIONS(SHIFT(163)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(133)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(133)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(133)),
        [sym_optional_pattern] = ACTIONS(SHIFT(133)),
        [sym_is_pattern] = ACTIONS(SHIFT(133)),
        [sym_as_pattern] = ACTIONS(SHIFT(133)),
        [sym__expression] = ACTIONS(SHIFT(133)),
        [sym__type_identifier] = ACTIONS(SHIFT(135)),
        [sym__type_name] = ACTIONS(SHIFT(114)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(136)),
        [anon_sym_let] = ACTIONS(SHIFT(138)),
        [anon_sym_var] = ACTIONS(SHIFT(138)),
        [anon_sym_DOT] = ACTIONS(SHIFT(139)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(133)),
        [anon_sym_is] = ACTIONS(SHIFT(140)),
        [sym_identifier] = ACTIONS(SHIFT(141)),
    },
    [163] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(164)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(162)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(151)),
        [anon_sym_as] = ACTIONS(SHIFT(152)),
    },
    [164] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [165] = {
        [sym__type_identifier] = ACTIONS(SHIFT(166)),
        [sym__type_name] = ACTIONS(SHIFT(114)),
        [sym_identifier] = ACTIONS(SHIFT(167)),
    },
    [166] = {
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [167] = {
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [168] = {
        [sym_identifier] = ACTIONS(SHIFT(169)),
    },
    [169] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(170)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(115)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [170] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [171] = {
        [sym_catch_clause] = ACTIONS(REDUCE(sym_catch_clause, 3)),
        [aux_sym_do_statement_repeat1] = ACTIONS(REDUCE(sym_catch_clause, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_catch_clause, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_catch_clause, 3)),
        [anon_sym_catch] = ACTIONS(REDUCE(sym_catch_clause, 3)),
    },
    [172] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_do_statement_repeat1, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_do_statement_repeat1, 2)),
    },
    [173] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_defer_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_defer_statement, 2)),
    },
    [174] = {
        [sym__statement] = ACTIONS(SHIFT(100)),
        [sym__loop_statement] = ACTIONS(SHIFT(101)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(101)),
        [sym_guard_statement] = ACTIONS(SHIFT(101)),
        [sym_switch_statement] = ACTIONS(SHIFT(101)),
        [sym_labeled_statement] = ACTIONS(SHIFT(101)),
        [sym_break_statement] = ACTIONS(SHIFT(101)),
        [sym_continue_statement] = ACTIONS(SHIFT(101)),
        [sym_return_statement] = ACTIONS(SHIFT(101)),
        [sym_throw_statement] = ACTIONS(SHIFT(101)),
        [sym_defer_statement] = ACTIONS(SHIFT(101)),
        [sym_do_statement] = ACTIONS(SHIFT(101)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(101)),
        [sym_line_control_statement] = ACTIONS(SHIFT(101)),
        [sym__declaration] = ACTIONS(SHIFT(101)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(101)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(175)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_let] = ACTIONS(SHIFT(9)),
        [anon_sym_repeat] = ACTIONS(SHIFT(10)),
        [anon_sym_if] = ACTIONS(SHIFT(11)),
        [anon_sym_guard] = ACTIONS(SHIFT(12)),
        [anon_sym_switch] = ACTIONS(SHIFT(13)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(176)),
        [anon_sym_break] = ACTIONS(SHIFT(14)),
        [anon_sym_continue] = ACTIONS(SHIFT(15)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(101)),
        [anon_sym_return] = ACTIONS(SHIFT(16)),
        [anon_sym_throw] = ACTIONS(SHIFT(17)),
        [anon_sym_defer] = ACTIONS(SHIFT(18)),
        [anon_sym_do] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(20)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(21)),
        [anon_sym_import] = ACTIONS(SHIFT(22)),
        [sym_identifier] = ACTIONS(SHIFT(23)),
    },
    [175] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(177)),
    },
    [176] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [177] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [178] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_throw_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_throw_statement, 2)),
    },
    [179] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [180] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_return_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_return_statement, 2)),
    },
    [181] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_continue_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_continue_statement, 2)),
    },
    [182] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_break_statement, 2)),
    },
    [183] = {
        [anon_sym_LBRACE] = ACTIONS(SHIFT(185)),
    },
    [184] = {
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [185] = {
        [sym_case_statement] = ACTIONS(SHIFT(186)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(187)),
        [anon_sym_case] = ACTIONS(SHIFT(188)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(189)),
        [anon_sym_default] = ACTIONS(SHIFT(190)),
    },
    [186] = {
        [sym_case_statement] = ACTIONS(SHIFT(186)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(232)),
        [anon_sym_case] = ACTIONS(SHIFT(188)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 1)),
        [anon_sym_default] = ACTIONS(SHIFT(190)),
    },
    [187] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(231)),
    },
    [188] = {
        [sym__pattern] = ACTIONS(SHIFT(197)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(198)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(198)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(198)),
        [sym_optional_pattern] = ACTIONS(SHIFT(198)),
        [sym_is_pattern] = ACTIONS(SHIFT(198)),
        [sym_as_pattern] = ACTIONS(SHIFT(198)),
        [sym__expression] = ACTIONS(SHIFT(198)),
        [sym__type_identifier] = ACTIONS(SHIFT(199)),
        [sym__type_name] = ACTIONS(SHIFT(114)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(200)),
        [anon_sym_let] = ACTIONS(SHIFT(201)),
        [anon_sym_var] = ACTIONS(SHIFT(201)),
        [anon_sym_DOT] = ACTIONS(SHIFT(202)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(198)),
        [anon_sym_is] = ACTIONS(SHIFT(203)),
        [sym_identifier] = ACTIONS(SHIFT(204)),
    },
    [189] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_switch_statement, 4)),
    },
    [190] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(191)),
    },
    [191] = {
        [sym__statement] = ACTIONS(SHIFT(192)),
        [sym__loop_statement] = ACTIONS(SHIFT(193)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(193)),
        [sym_guard_statement] = ACTIONS(SHIFT(193)),
        [sym_switch_statement] = ACTIONS(SHIFT(193)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [sym_labeled_statement] = ACTIONS(SHIFT(193)),
        [sym_break_statement] = ACTIONS(SHIFT(193)),
        [sym_continue_statement] = ACTIONS(SHIFT(193)),
        [sym_return_statement] = ACTIONS(SHIFT(193)),
        [sym_throw_statement] = ACTIONS(SHIFT(193)),
        [sym_defer_statement] = ACTIONS(SHIFT(193)),
        [sym_do_statement] = ACTIONS(SHIFT(193)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(193)),
        [sym_line_control_statement] = ACTIONS(SHIFT(193)),
        [sym__declaration] = ACTIONS(SHIFT(193)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(193)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(194)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_let] = ACTIONS(SHIFT(9)),
        [anon_sym_repeat] = ACTIONS(SHIFT(10)),
        [anon_sym_if] = ACTIONS(SHIFT(11)),
        [anon_sym_guard] = ACTIONS(SHIFT(12)),
        [anon_sym_switch] = ACTIONS(SHIFT(13)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_break] = ACTIONS(SHIFT(14)),
        [anon_sym_continue] = ACTIONS(SHIFT(15)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(193)),
        [anon_sym_return] = ACTIONS(SHIFT(16)),
        [anon_sym_throw] = ACTIONS(SHIFT(17)),
        [anon_sym_defer] = ACTIONS(SHIFT(18)),
        [anon_sym_do] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(20)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(21)),
        [anon_sym_import] = ACTIONS(SHIFT(22)),
        [sym_identifier] = ACTIONS(SHIFT(23)),
    },
    [192] = {
        [sym__statement] = ACTIONS(SHIFT(192)),
        [sym__loop_statement] = ACTIONS(SHIFT(193)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(193)),
        [sym_guard_statement] = ACTIONS(SHIFT(193)),
        [sym_switch_statement] = ACTIONS(SHIFT(193)),
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [sym_labeled_statement] = ACTIONS(SHIFT(193)),
        [sym_break_statement] = ACTIONS(SHIFT(193)),
        [sym_continue_statement] = ACTIONS(SHIFT(193)),
        [sym_return_statement] = ACTIONS(SHIFT(193)),
        [sym_throw_statement] = ACTIONS(SHIFT(193)),
        [sym_defer_statement] = ACTIONS(SHIFT(193)),
        [sym_do_statement] = ACTIONS(SHIFT(193)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(193)),
        [sym_line_control_statement] = ACTIONS(SHIFT(193)),
        [sym__declaration] = ACTIONS(SHIFT(193)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(193)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(196)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_case] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_let] = ACTIONS(SHIFT(9)),
        [anon_sym_repeat] = ACTIONS(SHIFT(10)),
        [anon_sym_if] = ACTIONS(SHIFT(11)),
        [anon_sym_guard] = ACTIONS(SHIFT(12)),
        [anon_sym_switch] = ACTIONS(SHIFT(13)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_default] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_break] = ACTIONS(SHIFT(14)),
        [anon_sym_continue] = ACTIONS(SHIFT(15)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(193)),
        [anon_sym_return] = ACTIONS(SHIFT(16)),
        [anon_sym_throw] = ACTIONS(SHIFT(17)),
        [anon_sym_defer] = ACTIONS(SHIFT(18)),
        [anon_sym_do] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(20)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(21)),
        [anon_sym_import] = ACTIONS(SHIFT(22)),
        [sym_identifier] = ACTIONS(SHIFT(23)),
    },
    [193] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(195)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(SHIFT(195)),
    },
    [194] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 3)),
    },
    [195] = {
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
        [sym_build_configuration_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_line_control_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_import_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_constant_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_case] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_let] = ACTIONS(REDUCE(sym__statement, 2)),
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
        [anon_sym_POUNDif] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_import] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [196] = {
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_case] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [197] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(223)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(224)),
        [anon_sym_COLON] = ACTIONS(SHIFT(225)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(214)),
        [anon_sym_as] = ACTIONS(SHIFT(215)),
    },
    [198] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [199] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(220)),
    },
    [200] = {
        [sym__pattern] = ACTIONS(SHIFT(132)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(133)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(133)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(217)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(133)),
        [sym_optional_pattern] = ACTIONS(SHIFT(133)),
        [sym_is_pattern] = ACTIONS(SHIFT(133)),
        [sym_as_pattern] = ACTIONS(SHIFT(133)),
        [sym__expression] = ACTIONS(SHIFT(133)),
        [sym__type_identifier] = ACTIONS(SHIFT(135)),
        [sym__type_name] = ACTIONS(SHIFT(114)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(136)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(218)),
        [anon_sym_let] = ACTIONS(SHIFT(138)),
        [anon_sym_var] = ACTIONS(SHIFT(138)),
        [anon_sym_DOT] = ACTIONS(SHIFT(139)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(133)),
        [anon_sym_is] = ACTIONS(SHIFT(140)),
        [sym_identifier] = ACTIONS(SHIFT(141)),
    },
    [201] = {
        [sym__pattern] = ACTIONS(SHIFT(213)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(198)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(198)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(198)),
        [sym_optional_pattern] = ACTIONS(SHIFT(198)),
        [sym_is_pattern] = ACTIONS(SHIFT(198)),
        [sym_as_pattern] = ACTIONS(SHIFT(198)),
        [sym__expression] = ACTIONS(SHIFT(198)),
        [sym__type_identifier] = ACTIONS(SHIFT(199)),
        [sym__type_name] = ACTIONS(SHIFT(114)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(200)),
        [anon_sym_let] = ACTIONS(SHIFT(201)),
        [anon_sym_var] = ACTIONS(SHIFT(201)),
        [anon_sym_DOT] = ACTIONS(SHIFT(202)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(198)),
        [anon_sym_is] = ACTIONS(SHIFT(203)),
        [sym_identifier] = ACTIONS(SHIFT(204)),
    },
    [202] = {
        [sym_identifier] = ACTIONS(SHIFT(211)),
    },
    [203] = {
        [sym_type] = ACTIONS(SHIFT(205)),
        [sym__type_identifier] = ACTIONS(SHIFT(206)),
        [sym__type_name] = ACTIONS(SHIFT(207)),
        [sym_identifier] = ACTIONS(SHIFT(208)),
    },
    [204] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [205] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [206] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [207] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(209)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [208] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [209] = {
        [sym__type_identifier] = ACTIONS(SHIFT(210)),
        [sym__type_name] = ACTIONS(SHIFT(207)),
        [sym_identifier] = ACTIONS(SHIFT(208)),
    },
    [210] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [211] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(212)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(200)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [212] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [213] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(214)),
        [anon_sym_as] = ACTIONS(SHIFT(215)),
    },
    [214] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [215] = {
        [sym_type] = ACTIONS(SHIFT(216)),
        [sym__type_identifier] = ACTIONS(SHIFT(206)),
        [sym__type_name] = ACTIONS(SHIFT(207)),
        [sym_identifier] = ACTIONS(SHIFT(208)),
    },
    [216] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [217] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(219)),
    },
    [218] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [219] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [220] = {
        [sym_identifier] = ACTIONS(SHIFT(221)),
    },
    [221] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(222)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(200)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [222] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [223] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(229)),
    },
    [224] = {
        [sym__pattern] = ACTIONS(SHIFT(227)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(198)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(198)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(198)),
        [sym_optional_pattern] = ACTIONS(SHIFT(198)),
        [sym_is_pattern] = ACTIONS(SHIFT(198)),
        [sym_as_pattern] = ACTIONS(SHIFT(198)),
        [sym__expression] = ACTIONS(SHIFT(198)),
        [sym__type_identifier] = ACTIONS(SHIFT(199)),
        [sym__type_name] = ACTIONS(SHIFT(114)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(200)),
        [anon_sym_let] = ACTIONS(SHIFT(201)),
        [anon_sym_var] = ACTIONS(SHIFT(201)),
        [anon_sym_DOT] = ACTIONS(SHIFT(202)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(198)),
        [anon_sym_is] = ACTIONS(SHIFT(203)),
        [sym_identifier] = ACTIONS(SHIFT(204)),
    },
    [225] = {
        [sym__statement] = ACTIONS(SHIFT(192)),
        [sym__loop_statement] = ACTIONS(SHIFT(193)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(193)),
        [sym_guard_statement] = ACTIONS(SHIFT(193)),
        [sym_switch_statement] = ACTIONS(SHIFT(193)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [sym_labeled_statement] = ACTIONS(SHIFT(193)),
        [sym_break_statement] = ACTIONS(SHIFT(193)),
        [sym_continue_statement] = ACTIONS(SHIFT(193)),
        [sym_return_statement] = ACTIONS(SHIFT(193)),
        [sym_throw_statement] = ACTIONS(SHIFT(193)),
        [sym_defer_statement] = ACTIONS(SHIFT(193)),
        [sym_do_statement] = ACTIONS(SHIFT(193)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(193)),
        [sym_line_control_statement] = ACTIONS(SHIFT(193)),
        [sym__declaration] = ACTIONS(SHIFT(193)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(193)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(226)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_let] = ACTIONS(SHIFT(9)),
        [anon_sym_repeat] = ACTIONS(SHIFT(10)),
        [anon_sym_if] = ACTIONS(SHIFT(11)),
        [anon_sym_guard] = ACTIONS(SHIFT(12)),
        [anon_sym_switch] = ACTIONS(SHIFT(13)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_break] = ACTIONS(SHIFT(14)),
        [anon_sym_continue] = ACTIONS(SHIFT(15)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(193)),
        [anon_sym_return] = ACTIONS(SHIFT(16)),
        [anon_sym_throw] = ACTIONS(SHIFT(17)),
        [anon_sym_defer] = ACTIONS(SHIFT(18)),
        [anon_sym_do] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(20)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(21)),
        [anon_sym_import] = ACTIONS(SHIFT(22)),
        [sym_identifier] = ACTIONS(SHIFT(23)),
    },
    [226] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 4)),
    },
    [227] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(228)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(224)),
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(214)),
        [anon_sym_as] = ACTIONS(SHIFT(215)),
    },
    [228] = {
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [229] = {
        [sym__statement] = ACTIONS(SHIFT(192)),
        [sym__loop_statement] = ACTIONS(SHIFT(193)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(193)),
        [sym_guard_statement] = ACTIONS(SHIFT(193)),
        [sym_switch_statement] = ACTIONS(SHIFT(193)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [sym_labeled_statement] = ACTIONS(SHIFT(193)),
        [sym_break_statement] = ACTIONS(SHIFT(193)),
        [sym_continue_statement] = ACTIONS(SHIFT(193)),
        [sym_return_statement] = ACTIONS(SHIFT(193)),
        [sym_throw_statement] = ACTIONS(SHIFT(193)),
        [sym_defer_statement] = ACTIONS(SHIFT(193)),
        [sym_do_statement] = ACTIONS(SHIFT(193)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(193)),
        [sym_line_control_statement] = ACTIONS(SHIFT(193)),
        [sym__declaration] = ACTIONS(SHIFT(193)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(193)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(230)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_let] = ACTIONS(SHIFT(9)),
        [anon_sym_repeat] = ACTIONS(SHIFT(10)),
        [anon_sym_if] = ACTIONS(SHIFT(11)),
        [anon_sym_guard] = ACTIONS(SHIFT(12)),
        [anon_sym_switch] = ACTIONS(SHIFT(13)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_break] = ACTIONS(SHIFT(14)),
        [anon_sym_continue] = ACTIONS(SHIFT(15)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(193)),
        [anon_sym_return] = ACTIONS(SHIFT(16)),
        [anon_sym_throw] = ACTIONS(SHIFT(17)),
        [anon_sym_defer] = ACTIONS(SHIFT(18)),
        [anon_sym_do] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(20)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(21)),
        [anon_sym_import] = ACTIONS(SHIFT(22)),
        [sym_identifier] = ACTIONS(SHIFT(23)),
    },
    [230] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 5)),
    },
    [231] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_switch_statement, 5)),
    },
    [232] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 2)),
    },
    [233] = {
        [anon_sym_else] = ACTIONS(SHIFT(307)),
    },
    [234] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(306)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(300)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [235] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1), SHIFT(303)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [236] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [237] = {
        [anon_sym_COMMA] = ACTIONS(SHIFT(297)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [238] = {
        [sym__pattern] = ACTIONS(SHIFT(294)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(244)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(244)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(244)),
        [sym_optional_pattern] = ACTIONS(SHIFT(244)),
        [sym_is_pattern] = ACTIONS(SHIFT(244)),
        [sym_as_pattern] = ACTIONS(SHIFT(244)),
        [sym__expression] = ACTIONS(SHIFT(244)),
        [sym__type_identifier] = ACTIONS(SHIFT(245)),
        [sym__type_name] = ACTIONS(SHIFT(114)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(246)),
        [anon_sym_let] = ACTIONS(SHIFT(247)),
        [anon_sym_var] = ACTIONS(SHIFT(247)),
        [anon_sym_DOT] = ACTIONS(SHIFT(248)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(244)),
        [anon_sym_is] = ACTIONS(SHIFT(249)),
        [sym_identifier] = ACTIONS(SHIFT(250)),
    },
    [239] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(279)),
    },
    [240] = {
        [sym_optional_binding] = ACTIONS(SHIFT(242)),
        [sym__pattern] = ACTIONS(SHIFT(243)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(244)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(244)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(244)),
        [sym_optional_pattern] = ACTIONS(SHIFT(244)),
        [sym_is_pattern] = ACTIONS(SHIFT(244)),
        [sym_as_pattern] = ACTIONS(SHIFT(244)),
        [sym__expression] = ACTIONS(SHIFT(244)),
        [sym__type_identifier] = ACTIONS(SHIFT(245)),
        [sym__type_name] = ACTIONS(SHIFT(114)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(246)),
        [anon_sym_let] = ACTIONS(SHIFT(247)),
        [anon_sym_var] = ACTIONS(SHIFT(247)),
        [anon_sym_DOT] = ACTIONS(SHIFT(248)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(244)),
        [anon_sym_is] = ACTIONS(SHIFT(249)),
        [sym_identifier] = ACTIONS(SHIFT(250)),
    },
    [241] = {
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [242] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(272)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
    },
    [243] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(269)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(260)),
        [anon_sym_as] = ACTIONS(SHIFT(261)),
    },
    [244] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [245] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(266)),
    },
    [246] = {
        [sym__pattern] = ACTIONS(SHIFT(132)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(133)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(133)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(263)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(133)),
        [sym_optional_pattern] = ACTIONS(SHIFT(133)),
        [sym_is_pattern] = ACTIONS(SHIFT(133)),
        [sym_as_pattern] = ACTIONS(SHIFT(133)),
        [sym__expression] = ACTIONS(SHIFT(133)),
        [sym__type_identifier] = ACTIONS(SHIFT(135)),
        [sym__type_name] = ACTIONS(SHIFT(114)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(136)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(264)),
        [anon_sym_let] = ACTIONS(SHIFT(138)),
        [anon_sym_var] = ACTIONS(SHIFT(138)),
        [anon_sym_DOT] = ACTIONS(SHIFT(139)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(133)),
        [anon_sym_is] = ACTIONS(SHIFT(140)),
        [sym_identifier] = ACTIONS(SHIFT(141)),
    },
    [247] = {
        [sym__pattern] = ACTIONS(SHIFT(259)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(244)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(244)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(244)),
        [sym_optional_pattern] = ACTIONS(SHIFT(244)),
        [sym_is_pattern] = ACTIONS(SHIFT(244)),
        [sym_as_pattern] = ACTIONS(SHIFT(244)),
        [sym__expression] = ACTIONS(SHIFT(244)),
        [sym__type_identifier] = ACTIONS(SHIFT(245)),
        [sym__type_name] = ACTIONS(SHIFT(114)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(246)),
        [anon_sym_let] = ACTIONS(SHIFT(247)),
        [anon_sym_var] = ACTIONS(SHIFT(247)),
        [anon_sym_DOT] = ACTIONS(SHIFT(248)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(244)),
        [anon_sym_is] = ACTIONS(SHIFT(249)),
        [sym_identifier] = ACTIONS(SHIFT(250)),
    },
    [248] = {
        [sym_identifier] = ACTIONS(SHIFT(257)),
    },
    [249] = {
        [sym_type] = ACTIONS(SHIFT(251)),
        [sym__type_identifier] = ACTIONS(SHIFT(252)),
        [sym__type_name] = ACTIONS(SHIFT(253)),
        [sym_identifier] = ACTIONS(SHIFT(254)),
    },
    [250] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [251] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [252] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [253] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(255)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [254] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [255] = {
        [sym__type_identifier] = ACTIONS(SHIFT(256)),
        [sym__type_name] = ACTIONS(SHIFT(253)),
        [sym_identifier] = ACTIONS(SHIFT(254)),
    },
    [256] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [257] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(258)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(246)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [258] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [259] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(260)),
        [anon_sym_as] = ACTIONS(SHIFT(261)),
    },
    [260] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [261] = {
        [sym_type] = ACTIONS(SHIFT(262)),
        [sym__type_identifier] = ACTIONS(SHIFT(252)),
        [sym__type_name] = ACTIONS(SHIFT(253)),
        [sym_identifier] = ACTIONS(SHIFT(254)),
    },
    [262] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [263] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(265)),
    },
    [264] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [265] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [266] = {
        [sym_identifier] = ACTIONS(SHIFT(267)),
    },
    [267] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(268)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(246)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [268] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [269] = {
        [sym__expression] = ACTIONS(SHIFT(270)),
        [sym_identifier] = ACTIONS(SHIFT(271)),
    },
    [270] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [271] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [272] = {
        [sym_optional_binding] = ACTIONS(SHIFT(273)),
        [sym__pattern] = ACTIONS(SHIFT(274)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(244)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(244)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(244)),
        [sym_optional_pattern] = ACTIONS(SHIFT(244)),
        [sym_is_pattern] = ACTIONS(SHIFT(244)),
        [sym_as_pattern] = ACTIONS(SHIFT(244)),
        [sym__expression] = ACTIONS(SHIFT(244)),
        [sym__type_identifier] = ACTIONS(SHIFT(245)),
        [sym__type_name] = ACTIONS(SHIFT(114)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(246)),
        [anon_sym_let] = ACTIONS(SHIFT(247)),
        [anon_sym_var] = ACTIONS(SHIFT(247)),
        [anon_sym_DOT] = ACTIONS(SHIFT(248)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(244)),
        [anon_sym_is] = ACTIONS(SHIFT(249)),
        [sym_identifier] = ACTIONS(SHIFT(250)),
    },
    [273] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(SHIFT(278)),
        [anon_sym_COMMA] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
    },
    [274] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(275)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(260)),
        [anon_sym_as] = ACTIONS(SHIFT(261)),
    },
    [275] = {
        [sym__expression] = ACTIONS(SHIFT(276)),
        [sym_identifier] = ACTIONS(SHIFT(277)),
    },
    [276] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [277] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [278] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
    },
    [279] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(280)),
        [anon_sym_iOS] = ACTIONS(SHIFT(281)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(281)),
        [anon_sym_OSX] = ACTIONS(SHIFT(281)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(281)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(281)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(281)),
    },
    [280] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(292)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(293)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(285)),
    },
    [281] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(282)),
    },
    [282] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(283)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(284)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(285)),
    },
    [283] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(291)),
    },
    [284] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 5)),
    },
    [285] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(286)),
        [anon_sym_iOS] = ACTIONS(SHIFT(287)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(287)),
        [anon_sym_OSX] = ACTIONS(SHIFT(287)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(287)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(287)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(287)),
    },
    [286] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(290)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(285)),
    },
    [287] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(288)),
    },
    [288] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(289)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 3)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(285)),
    },
    [289] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 4)),
    },
    [290] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 3)),
    },
    [291] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 6)),
    },
    [292] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(284)),
    },
    [293] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 4)),
    },
    [294] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(295)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(260)),
        [anon_sym_as] = ACTIONS(SHIFT(261)),
    },
    [295] = {
        [sym__expression] = ACTIONS(SHIFT(296)),
        [sym_identifier] = ACTIONS(SHIFT(271)),
    },
    [296] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_case_condition, 4)),
    },
    [297] = {
        [sym__condition] = ACTIONS(SHIFT(298)),
        [sym_availability_condition] = ACTIONS(SHIFT(236)),
        [sym_case_condition] = ACTIONS(SHIFT(236)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(236)),
        [anon_sym_case] = ACTIONS(SHIFT(238)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(239)),
        [anon_sym_let] = ACTIONS(SHIFT(240)),
        [anon_sym_var] = ACTIONS(SHIFT(240)),
    },
    [298] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(299)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(300)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [299] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 4)),
    },
    [300] = {
        [sym__condition] = ACTIONS(SHIFT(301)),
        [sym_availability_condition] = ACTIONS(SHIFT(236)),
        [sym_case_condition] = ACTIONS(SHIFT(236)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(236)),
        [anon_sym_case] = ACTIONS(SHIFT(238)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(239)),
        [anon_sym_let] = ACTIONS(SHIFT(240)),
        [anon_sym_var] = ACTIONS(SHIFT(240)),
    },
    [301] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(302)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(300)),
        [anon_sym_else] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
    },
    [302] = {
        [anon_sym_else] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
    },
    [303] = {
        [sym__expression] = ACTIONS(SHIFT(304)),
        [sym_identifier] = ACTIONS(SHIFT(305)),
    },
    [304] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [305] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [306] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 2)),
    },
    [307] = {
        [sym__code_block] = ACTIONS(SHIFT(308)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(174)),
    },
    [308] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_guard_statement, 4)),
    },
    [309] = {
        [sym__code_block] = ACTIONS(SHIFT(352)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(353)),
    },
    [310] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(351)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(345)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [311] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1), SHIFT(348)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [312] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [313] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(342)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [314] = {
        [sym__pattern] = ACTIONS(SHIFT(339)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(244)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(244)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(244)),
        [sym_optional_pattern] = ACTIONS(SHIFT(244)),
        [sym_is_pattern] = ACTIONS(SHIFT(244)),
        [sym_as_pattern] = ACTIONS(SHIFT(244)),
        [sym__expression] = ACTIONS(SHIFT(244)),
        [sym__type_identifier] = ACTIONS(SHIFT(245)),
        [sym__type_name] = ACTIONS(SHIFT(114)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(246)),
        [anon_sym_let] = ACTIONS(SHIFT(247)),
        [anon_sym_var] = ACTIONS(SHIFT(247)),
        [anon_sym_DOT] = ACTIONS(SHIFT(248)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(244)),
        [anon_sym_is] = ACTIONS(SHIFT(249)),
        [sym_identifier] = ACTIONS(SHIFT(250)),
    },
    [315] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(330)),
    },
    [316] = {
        [sym_optional_binding] = ACTIONS(SHIFT(318)),
        [sym__pattern] = ACTIONS(SHIFT(319)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(244)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(244)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(244)),
        [sym_optional_pattern] = ACTIONS(SHIFT(244)),
        [sym_is_pattern] = ACTIONS(SHIFT(244)),
        [sym_as_pattern] = ACTIONS(SHIFT(244)),
        [sym__expression] = ACTIONS(SHIFT(244)),
        [sym__type_identifier] = ACTIONS(SHIFT(245)),
        [sym__type_name] = ACTIONS(SHIFT(114)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(246)),
        [anon_sym_let] = ACTIONS(SHIFT(247)),
        [anon_sym_var] = ACTIONS(SHIFT(247)),
        [anon_sym_DOT] = ACTIONS(SHIFT(248)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(244)),
        [anon_sym_is] = ACTIONS(SHIFT(249)),
        [sym_identifier] = ACTIONS(SHIFT(250)),
    },
    [317] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [318] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(323)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
    },
    [319] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(320)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(260)),
        [anon_sym_as] = ACTIONS(SHIFT(261)),
    },
    [320] = {
        [sym__expression] = ACTIONS(SHIFT(321)),
        [sym_identifier] = ACTIONS(SHIFT(322)),
    },
    [321] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [322] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [323] = {
        [sym_optional_binding] = ACTIONS(SHIFT(324)),
        [sym__pattern] = ACTIONS(SHIFT(325)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(244)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(244)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(244)),
        [sym_optional_pattern] = ACTIONS(SHIFT(244)),
        [sym_is_pattern] = ACTIONS(SHIFT(244)),
        [sym_as_pattern] = ACTIONS(SHIFT(244)),
        [sym__expression] = ACTIONS(SHIFT(244)),
        [sym__type_identifier] = ACTIONS(SHIFT(245)),
        [sym__type_name] = ACTIONS(SHIFT(114)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(246)),
        [anon_sym_let] = ACTIONS(SHIFT(247)),
        [anon_sym_var] = ACTIONS(SHIFT(247)),
        [anon_sym_DOT] = ACTIONS(SHIFT(248)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(244)),
        [anon_sym_is] = ACTIONS(SHIFT(249)),
        [sym_identifier] = ACTIONS(SHIFT(250)),
    },
    [324] = {
        [sym__code_block] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(SHIFT(329)),
        [anon_sym_COMMA] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
    },
    [325] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(326)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(260)),
        [anon_sym_as] = ACTIONS(SHIFT(261)),
    },
    [326] = {
        [sym__expression] = ACTIONS(SHIFT(327)),
        [sym_identifier] = ACTIONS(SHIFT(328)),
    },
    [327] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [328] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [329] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
    },
    [330] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(331)),
        [anon_sym_iOS] = ACTIONS(SHIFT(332)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(332)),
        [anon_sym_OSX] = ACTIONS(SHIFT(332)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(332)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(332)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(332)),
    },
    [331] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(337)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(338)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(285)),
    },
    [332] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(333)),
    },
    [333] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(334)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(335)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(285)),
    },
    [334] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(336)),
    },
    [335] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 5)),
    },
    [336] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 6)),
    },
    [337] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(335)),
    },
    [338] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 4)),
    },
    [339] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(340)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(260)),
        [anon_sym_as] = ACTIONS(SHIFT(261)),
    },
    [340] = {
        [sym__expression] = ACTIONS(SHIFT(341)),
        [sym_identifier] = ACTIONS(SHIFT(322)),
    },
    [341] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_case_condition, 4)),
    },
    [342] = {
        [sym__condition] = ACTIONS(SHIFT(343)),
        [sym_availability_condition] = ACTIONS(SHIFT(312)),
        [sym_case_condition] = ACTIONS(SHIFT(312)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(312)),
        [anon_sym_case] = ACTIONS(SHIFT(314)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(315)),
        [anon_sym_let] = ACTIONS(SHIFT(316)),
        [anon_sym_var] = ACTIONS(SHIFT(316)),
    },
    [343] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(344)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(345)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [344] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 4)),
    },
    [345] = {
        [sym__condition] = ACTIONS(SHIFT(346)),
        [sym_availability_condition] = ACTIONS(SHIFT(312)),
        [sym_case_condition] = ACTIONS(SHIFT(312)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(312)),
        [anon_sym_case] = ACTIONS(SHIFT(314)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(315)),
        [anon_sym_let] = ACTIONS(SHIFT(316)),
        [anon_sym_var] = ACTIONS(SHIFT(316)),
    },
    [346] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(347)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(345)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
    },
    [347] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
    },
    [348] = {
        [sym__expression] = ACTIONS(SHIFT(349)),
        [sym_identifier] = ACTIONS(SHIFT(350)),
    },
    [349] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [350] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [351] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 2)),
    },
    [352] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_else] = ACTIONS(SHIFT(357)),
    },
    [353] = {
        [sym__statement] = ACTIONS(SHIFT(100)),
        [sym__loop_statement] = ACTIONS(SHIFT(101)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(101)),
        [sym_guard_statement] = ACTIONS(SHIFT(101)),
        [sym_switch_statement] = ACTIONS(SHIFT(101)),
        [sym_labeled_statement] = ACTIONS(SHIFT(101)),
        [sym_break_statement] = ACTIONS(SHIFT(101)),
        [sym_continue_statement] = ACTIONS(SHIFT(101)),
        [sym_return_statement] = ACTIONS(SHIFT(101)),
        [sym_throw_statement] = ACTIONS(SHIFT(101)),
        [sym_defer_statement] = ACTIONS(SHIFT(101)),
        [sym_do_statement] = ACTIONS(SHIFT(101)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(101)),
        [sym_line_control_statement] = ACTIONS(SHIFT(101)),
        [sym__declaration] = ACTIONS(SHIFT(101)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(101)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(354)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_let] = ACTIONS(SHIFT(9)),
        [anon_sym_repeat] = ACTIONS(SHIFT(10)),
        [anon_sym_if] = ACTIONS(SHIFT(11)),
        [anon_sym_guard] = ACTIONS(SHIFT(12)),
        [anon_sym_switch] = ACTIONS(SHIFT(13)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(355)),
        [anon_sym_break] = ACTIONS(SHIFT(14)),
        [anon_sym_continue] = ACTIONS(SHIFT(15)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(101)),
        [anon_sym_return] = ACTIONS(SHIFT(16)),
        [anon_sym_throw] = ACTIONS(SHIFT(17)),
        [anon_sym_defer] = ACTIONS(SHIFT(18)),
        [anon_sym_do] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(20)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(21)),
        [anon_sym_import] = ACTIONS(SHIFT(22)),
        [sym_identifier] = ACTIONS(SHIFT(23)),
    },
    [354] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(356)),
    },
    [355] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [356] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [357] = {
        [sym_if_statement] = ACTIONS(SHIFT(358)),
        [sym__code_block] = ACTIONS(SHIFT(358)),
        [anon_sym_if] = ACTIONS(SHIFT(11)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(174)),
    },
    [358] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_if_statement, 5)),
    },
    [359] = {
        [anon_sym_while] = ACTIONS(SHIFT(364)),
    },
    [360] = {
        [sym__statement] = ACTIONS(SHIFT(100)),
        [sym__loop_statement] = ACTIONS(SHIFT(101)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(101)),
        [sym_guard_statement] = ACTIONS(SHIFT(101)),
        [sym_switch_statement] = ACTIONS(SHIFT(101)),
        [sym_labeled_statement] = ACTIONS(SHIFT(101)),
        [sym_break_statement] = ACTIONS(SHIFT(101)),
        [sym_continue_statement] = ACTIONS(SHIFT(101)),
        [sym_return_statement] = ACTIONS(SHIFT(101)),
        [sym_throw_statement] = ACTIONS(SHIFT(101)),
        [sym_defer_statement] = ACTIONS(SHIFT(101)),
        [sym_do_statement] = ACTIONS(SHIFT(101)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(101)),
        [sym_line_control_statement] = ACTIONS(SHIFT(101)),
        [sym__declaration] = ACTIONS(SHIFT(101)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(101)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(361)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_let] = ACTIONS(SHIFT(9)),
        [anon_sym_repeat] = ACTIONS(SHIFT(10)),
        [anon_sym_if] = ACTIONS(SHIFT(11)),
        [anon_sym_guard] = ACTIONS(SHIFT(12)),
        [anon_sym_switch] = ACTIONS(SHIFT(13)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(362)),
        [anon_sym_break] = ACTIONS(SHIFT(14)),
        [anon_sym_continue] = ACTIONS(SHIFT(15)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(101)),
        [anon_sym_return] = ACTIONS(SHIFT(16)),
        [anon_sym_throw] = ACTIONS(SHIFT(17)),
        [anon_sym_defer] = ACTIONS(SHIFT(18)),
        [anon_sym_do] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(20)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(21)),
        [anon_sym_import] = ACTIONS(SHIFT(22)),
        [sym_identifier] = ACTIONS(SHIFT(23)),
    },
    [361] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(363)),
    },
    [362] = {
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [363] = {
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [364] = {
        [sym__expression] = ACTIONS(SHIFT(365)),
        [sym_identifier] = ACTIONS(SHIFT(179)),
    },
    [365] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
    },
    [366] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(367)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(260)),
        [anon_sym_as] = ACTIONS(SHIFT(261)),
    },
    [367] = {
        [sym__expression] = ACTIONS(SHIFT(368)),
        [sym_identifier] = ACTIONS(SHIFT(369)),
    },
    [368] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(SHIFT(370)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_constant_declaration, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_constant_declaration, 4)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(371)),
    },
    [369] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [370] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_constant_declaration, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_constant_declaration, 5)),
    },
    [371] = {
        [sym__pattern] = ACTIONS(SHIFT(372)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(244)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(244)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(244)),
        [sym_optional_pattern] = ACTIONS(SHIFT(244)),
        [sym_is_pattern] = ACTIONS(SHIFT(244)),
        [sym_as_pattern] = ACTIONS(SHIFT(244)),
        [sym__expression] = ACTIONS(SHIFT(244)),
        [sym__type_identifier] = ACTIONS(SHIFT(245)),
        [sym__type_name] = ACTIONS(SHIFT(114)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(246)),
        [anon_sym_let] = ACTIONS(SHIFT(247)),
        [anon_sym_var] = ACTIONS(SHIFT(247)),
        [anon_sym_DOT] = ACTIONS(SHIFT(248)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(244)),
        [anon_sym_is] = ACTIONS(SHIFT(249)),
        [sym_identifier] = ACTIONS(SHIFT(250)),
    },
    [372] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(373)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(260)),
        [anon_sym_as] = ACTIONS(SHIFT(261)),
    },
    [373] = {
        [sym__expression] = ACTIONS(SHIFT(374)),
        [sym_identifier] = ACTIONS(SHIFT(369)),
    },
    [374] = {
        [aux_sym_constant_declaration_repeat1] = ACTIONS(SHIFT(375)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_constant_declaration_repeat1, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_constant_declaration_repeat1, 4)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(371)),
    },
    [375] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_constant_declaration_repeat1, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_constant_declaration_repeat1, 5)),
    },
    [376] = {
        [sym__code_block] = ACTIONS(SHIFT(377)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(174)),
    },
    [377] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_while_statement, 3)),
    },
    [378] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(478)),
    },
    [379] = {
        [sym__code_block] = ACTIONS(SHIFT(477)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(174)),
    },
    [380] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__for_init, 1)),
    },
    [381] = {
        [sym__variable_name] = ACTIONS(SHIFT(462)),
        [sym_identifier] = ACTIONS(SHIFT(463)),
    },
    [382] = {
        [sym__type_annotation] = ACTIONS(SHIFT(458)),
        [anon_sym_in] = ACTIONS(SHIFT(459)),
        [anon_sym_COLON] = ACTIONS(SHIFT(414)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(408)),
        [anon_sym_as] = ACTIONS(SHIFT(409)),
    },
    [383] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [384] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(439)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(440)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [385] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(455)),
    },
    [386] = {
        [sym__expression] = ACTIONS(SHIFT(450)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(451)),
        [sym_identifier] = ACTIONS(SHIFT(434)),
    },
    [387] = {
        [sym__for_init] = ACTIONS(SHIFT(426)),
        [sym__for_condition] = ACTIONS(SHIFT(427)),
        [sym_variable_declaration] = ACTIONS(SHIFT(380)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(381)),
        [sym__pattern] = ACTIONS(SHIFT(132)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(133)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(133)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(403)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(133)),
        [sym_optional_pattern] = ACTIONS(SHIFT(133)),
        [sym_is_pattern] = ACTIONS(SHIFT(133)),
        [sym_as_pattern] = ACTIONS(SHIFT(133)),
        [sym__expression] = ACTIONS(SHIFT(428)),
        [sym__expression_list] = ACTIONS(SHIFT(380)),
        [sym__type_identifier] = ACTIONS(SHIFT(135)),
        [sym__type_name] = ACTIONS(SHIFT(114)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(429)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(136)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(404)),
        [anon_sym_let] = ACTIONS(SHIFT(138)),
        [anon_sym_var] = ACTIONS(SHIFT(430)),
        [anon_sym_DOT] = ACTIONS(SHIFT(139)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(133)),
        [anon_sym_is] = ACTIONS(SHIFT(140)),
        [sym_identifier] = ACTIONS(SHIFT(431)),
    },
    [388] = {
        [sym__pattern] = ACTIONS(SHIFT(411)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(383)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(383)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(383)),
        [sym_optional_pattern] = ACTIONS(SHIFT(383)),
        [sym_is_pattern] = ACTIONS(SHIFT(383)),
        [sym_as_pattern] = ACTIONS(SHIFT(383)),
        [sym__expression] = ACTIONS(SHIFT(383)),
        [sym__type_identifier] = ACTIONS(SHIFT(385)),
        [sym__type_name] = ACTIONS(SHIFT(114)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(402)),
        [anon_sym_let] = ACTIONS(SHIFT(389)),
        [anon_sym_var] = ACTIONS(SHIFT(389)),
        [anon_sym_DOT] = ACTIONS(SHIFT(391)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(383)),
        [anon_sym_is] = ACTIONS(SHIFT(392)),
        [sym_identifier] = ACTIONS(SHIFT(407)),
    },
    [389] = {
        [sym__pattern] = ACTIONS(SHIFT(406)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(383)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(383)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(383)),
        [sym_optional_pattern] = ACTIONS(SHIFT(383)),
        [sym_is_pattern] = ACTIONS(SHIFT(383)),
        [sym_as_pattern] = ACTIONS(SHIFT(383)),
        [sym__expression] = ACTIONS(SHIFT(383)),
        [sym__type_identifier] = ACTIONS(SHIFT(385)),
        [sym__type_name] = ACTIONS(SHIFT(114)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(402)),
        [anon_sym_let] = ACTIONS(SHIFT(389)),
        [anon_sym_var] = ACTIONS(SHIFT(389)),
        [anon_sym_DOT] = ACTIONS(SHIFT(391)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(383)),
        [anon_sym_is] = ACTIONS(SHIFT(392)),
        [sym_identifier] = ACTIONS(SHIFT(407)),
    },
    [390] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(406)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(383)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(383)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(383)),
        [sym_optional_pattern] = ACTIONS(SHIFT(383)),
        [sym_is_pattern] = ACTIONS(SHIFT(383)),
        [sym_as_pattern] = ACTIONS(SHIFT(383)),
        [sym__expression] = ACTIONS(SHIFT(383)),
        [sym__type_identifier] = ACTIONS(SHIFT(385)),
        [sym__type_name] = ACTIONS(SHIFT(114)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(402)),
        [anon_sym_let] = ACTIONS(SHIFT(389)),
        [anon_sym_var] = ACTIONS(SHIFT(389)),
        [anon_sym_DOT] = ACTIONS(SHIFT(391)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(383)),
        [anon_sym_is] = ACTIONS(SHIFT(392)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(407)),
    },
    [391] = {
        [sym_identifier] = ACTIONS(SHIFT(400)),
    },
    [392] = {
        [sym_type] = ACTIONS(SHIFT(394)),
        [sym__type_identifier] = ACTIONS(SHIFT(395)),
        [sym__type_name] = ACTIONS(SHIFT(396)),
        [sym_identifier] = ACTIONS(SHIFT(397)),
    },
    [393] = {
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
    [394] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [395] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [396] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(398)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [397] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [398] = {
        [sym__type_identifier] = ACTIONS(SHIFT(399)),
        [sym__type_name] = ACTIONS(SHIFT(396)),
        [sym_identifier] = ACTIONS(SHIFT(397)),
    },
    [399] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [400] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(401)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(402)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [401] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [402] = {
        [sym__pattern] = ACTIONS(SHIFT(132)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(133)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(133)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(403)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(133)),
        [sym_optional_pattern] = ACTIONS(SHIFT(133)),
        [sym_is_pattern] = ACTIONS(SHIFT(133)),
        [sym_as_pattern] = ACTIONS(SHIFT(133)),
        [sym__expression] = ACTIONS(SHIFT(133)),
        [sym__type_identifier] = ACTIONS(SHIFT(135)),
        [sym__type_name] = ACTIONS(SHIFT(114)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(136)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(404)),
        [anon_sym_let] = ACTIONS(SHIFT(138)),
        [anon_sym_var] = ACTIONS(SHIFT(138)),
        [anon_sym_DOT] = ACTIONS(SHIFT(139)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(133)),
        [anon_sym_is] = ACTIONS(SHIFT(140)),
        [sym_identifier] = ACTIONS(SHIFT(141)),
    },
    [403] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(405)),
    },
    [404] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [405] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [406] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(408)),
        [anon_sym_as] = ACTIONS(SHIFT(409)),
    },
    [407] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [408] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [409] = {
        [sym_type] = ACTIONS(SHIFT(410)),
        [sym__type_identifier] = ACTIONS(SHIFT(395)),
        [sym__type_name] = ACTIONS(SHIFT(396)),
        [sym_identifier] = ACTIONS(SHIFT(397)),
    },
    [410] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [411] = {
        [sym__type_annotation] = ACTIONS(SHIFT(412)),
        [anon_sym_in] = ACTIONS(SHIFT(413)),
        [anon_sym_COLON] = ACTIONS(SHIFT(414)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(408)),
        [anon_sym_as] = ACTIONS(SHIFT(409)),
    },
    [412] = {
        [anon_sym_in] = ACTIONS(SHIFT(423)),
    },
    [413] = {
        [sym__expression] = ACTIONS(SHIFT(421)),
        [sym_identifier] = ACTIONS(SHIFT(350)),
    },
    [414] = {
        [sym_type] = ACTIONS(SHIFT(415)),
        [sym__type_identifier] = ACTIONS(SHIFT(416)),
        [sym__type_name] = ACTIONS(SHIFT(417)),
        [sym_identifier] = ACTIONS(SHIFT(418)),
    },
    [415] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [416] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [417] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(419)),
    },
    [418] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [419] = {
        [sym__type_identifier] = ACTIONS(SHIFT(420)),
        [sym__type_name] = ACTIONS(SHIFT(417)),
        [sym_identifier] = ACTIONS(SHIFT(418)),
    },
    [420] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [421] = {
        [sym__code_block] = ACTIONS(SHIFT(422)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(174)),
    },
    [422] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
    },
    [423] = {
        [sym__expression] = ACTIONS(SHIFT(424)),
        [sym_identifier] = ACTIONS(SHIFT(350)),
    },
    [424] = {
        [sym__code_block] = ACTIONS(SHIFT(425)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(174)),
    },
    [425] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
    },
    [426] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(446)),
    },
    [427] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(444)),
    },
    [428] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(439)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1), SHIFT(440)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [429] = {
        [sym__expression] = ACTIONS(SHIFT(432)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(433)),
        [sym_identifier] = ACTIONS(SHIFT(434)),
    },
    [430] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(150)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(133)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(133)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(133)),
        [sym_optional_pattern] = ACTIONS(SHIFT(133)),
        [sym_is_pattern] = ACTIONS(SHIFT(133)),
        [sym_as_pattern] = ACTIONS(SHIFT(133)),
        [sym__expression] = ACTIONS(SHIFT(133)),
        [sym__type_identifier] = ACTIONS(SHIFT(135)),
        [sym__type_name] = ACTIONS(SHIFT(114)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(136)),
        [anon_sym_let] = ACTIONS(SHIFT(138)),
        [anon_sym_var] = ACTIONS(SHIFT(138)),
        [anon_sym_DOT] = ACTIONS(SHIFT(139)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(133)),
        [anon_sym_is] = ACTIONS(SHIFT(140)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(141)),
    },
    [431] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [432] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(437)),
    },
    [433] = {
        [sym__expression] = ACTIONS(SHIFT(435)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(436)),
    },
    [434] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [435] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [436] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [437] = {
        [sym__expression] = ACTIONS(SHIFT(438)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(436)),
    },
    [438] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [439] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 2)),
    },
    [440] = {
        [sym__expression] = ACTIONS(SHIFT(441)),
        [sym_identifier] = ACTIONS(SHIFT(442)),
    },
    [441] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(443)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(440)),
    },
    [442] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [443] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 3)),
    },
    [444] = {
        [sym__code_block] = ACTIONS(SHIFT(445)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(174)),
    },
    [445] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_statement, 5)),
    },
    [446] = {
        [sym__expression] = ACTIONS(SHIFT(447)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(437)),
        [sym_identifier] = ACTIONS(SHIFT(434)),
    },
    [447] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(448)),
    },
    [448] = {
        [sym__expression] = ACTIONS(SHIFT(449)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(436)),
    },
    [449] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [450] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(453)),
    },
    [451] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym__expression] = ACTIONS(SHIFT(452)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(350)),
    },
    [452] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [453] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym__expression] = ACTIONS(SHIFT(454)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(350)),
    },
    [454] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [455] = {
        [sym_identifier] = ACTIONS(SHIFT(456)),
    },
    [456] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(457)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(402)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [457] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [458] = {
        [anon_sym_in] = ACTIONS(SHIFT(413)),
    },
    [459] = {
        [sym__expression] = ACTIONS(SHIFT(460)),
        [sym_identifier] = ACTIONS(SHIFT(350)),
    },
    [460] = {
        [sym__code_block] = ACTIONS(SHIFT(461)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(174)),
    },
    [461] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
    },
    [462] = {
        [sym__type_annotation] = ACTIONS(SHIFT(464)),
        [anon_sym_COLON] = ACTIONS(SHIFT(465)),
    },
    [463] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__variable_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__variable_name, 1)),
    },
    [464] = {
        [sym__code_block] = ACTIONS(SHIFT(472)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(473)),
    },
    [465] = {
        [sym_type] = ACTIONS(SHIFT(466)),
        [sym__type_identifier] = ACTIONS(SHIFT(467)),
        [sym__type_name] = ACTIONS(SHIFT(468)),
        [sym_identifier] = ACTIONS(SHIFT(469)),
    },
    [466] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [467] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [468] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(470)),
    },
    [469] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [470] = {
        [sym__type_identifier] = ACTIONS(SHIFT(471)),
        [sym__type_name] = ACTIONS(SHIFT(468)),
        [sym_identifier] = ACTIONS(SHIFT(469)),
    },
    [471] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [472] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_variable_declaration, 4)),
    },
    [473] = {
        [sym__statement] = ACTIONS(SHIFT(100)),
        [sym__loop_statement] = ACTIONS(SHIFT(101)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(101)),
        [sym_guard_statement] = ACTIONS(SHIFT(101)),
        [sym_switch_statement] = ACTIONS(SHIFT(101)),
        [sym_labeled_statement] = ACTIONS(SHIFT(101)),
        [sym_break_statement] = ACTIONS(SHIFT(101)),
        [sym_continue_statement] = ACTIONS(SHIFT(101)),
        [sym_return_statement] = ACTIONS(SHIFT(101)),
        [sym_throw_statement] = ACTIONS(SHIFT(101)),
        [sym_defer_statement] = ACTIONS(SHIFT(101)),
        [sym_do_statement] = ACTIONS(SHIFT(101)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(101)),
        [sym_line_control_statement] = ACTIONS(SHIFT(101)),
        [sym__declaration] = ACTIONS(SHIFT(101)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym_constant_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(101)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(474)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_let] = ACTIONS(SHIFT(9)),
        [anon_sym_repeat] = ACTIONS(SHIFT(10)),
        [anon_sym_if] = ACTIONS(SHIFT(11)),
        [anon_sym_guard] = ACTIONS(SHIFT(12)),
        [anon_sym_switch] = ACTIONS(SHIFT(13)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(475)),
        [anon_sym_break] = ACTIONS(SHIFT(14)),
        [anon_sym_continue] = ACTIONS(SHIFT(15)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(101)),
        [anon_sym_return] = ACTIONS(SHIFT(16)),
        [anon_sym_throw] = ACTIONS(SHIFT(17)),
        [anon_sym_defer] = ACTIONS(SHIFT(18)),
        [anon_sym_do] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(20)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(21)),
        [anon_sym_import] = ACTIONS(SHIFT(22)),
        [sym_identifier] = ACTIONS(SHIFT(23)),
    },
    [474] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(476)),
    },
    [475] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [476] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [477] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_statement, 3)),
    },
    [478] = {
        [sym__expression] = ACTIONS(SHIFT(479)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(453)),
        [sym_identifier] = ACTIONS(SHIFT(434)),
    },
    [479] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(480)),
    },
    [480] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym__expression] = ACTIONS(SHIFT(481)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(350)),
    },
    [481] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [482] = {
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
        [sym_build_configuration_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_line_control_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_import_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_constant_declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_let] = ACTIONS(REDUCE(sym__statement, 2)),
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
        [anon_sym_POUNDif] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_import] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [483] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_swift);
