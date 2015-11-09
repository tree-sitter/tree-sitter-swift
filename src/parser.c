#include "tree_sitter/parser.h"

#define STATE_COUNT 473
#define SYMBOL_COUNT 133

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
                ('j' <= lookahead && lookahead <= 'q') ||
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
            if (lookahead == 'r')
                ADVANCE(58);
            if (lookahead == 's')
                ADVANCE(68);
            if (lookahead == 't')
                ADVANCE(74);
            if (lookahead == 'w')
                ADVANCE(79);
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
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(64);
            ACCEPT_TOKEN(sym_identifier);
        case 60:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(61);
            ACCEPT_TOKEN(sym_identifier);
        case 61:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(62);
            ACCEPT_TOKEN(sym_identifier);
        case 62:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier);
        case 63:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_repeat);
        case 64:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(65);
            ACCEPT_TOKEN(sym_identifier);
        case 65:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(66);
            ACCEPT_TOKEN(sym_identifier);
        case 66:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier);
        case 67:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_return);
        case 68:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'w')
                ADVANCE(69);
            ACCEPT_TOKEN(sym_identifier);
        case 69:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(70);
            ACCEPT_TOKEN(sym_identifier);
        case 70:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(71);
            ACCEPT_TOKEN(sym_identifier);
        case 71:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(72);
            ACCEPT_TOKEN(sym_identifier);
        case 72:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(73);
            ACCEPT_TOKEN(sym_identifier);
        case 73:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_switch);
        case 74:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(75);
            ACCEPT_TOKEN(sym_identifier);
        case 75:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(76);
            ACCEPT_TOKEN(sym_identifier);
        case 76:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(77);
            ACCEPT_TOKEN(sym_identifier);
        case 77:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'w')
                ADVANCE(78);
            ACCEPT_TOKEN(sym_identifier);
        case 78:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_throw);
        case 79:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier);
        case 80:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(81);
            ACCEPT_TOKEN(sym_identifier);
        case 81:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(82);
            ACCEPT_TOKEN(sym_identifier);
        case 82:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(83);
            ACCEPT_TOKEN(sym_identifier);
        case 83:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_while);
        case 84:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(84);
            LEX_ERROR();
        case 85:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(85);
            if (lookahead == '\n')
                ADVANCE(86);
            if (lookahead == ';')
                ADVANCE(87);
            LEX_ERROR();
        case 86:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 87:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 88:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(88);
            if (lookahead == '(')
                ADVANCE(89);
            if (lookahead == '.')
                ADVANCE(90);
            if (lookahead == ';')
                ADVANCE(87);
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
                ADVANCE(91);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'i')
                ADVANCE(96);
            if (lookahead == 'l')
                ADVANCE(98);
            if (lookahead == 'v')
                ADVANCE(101);
            LEX_ERROR();
        case 89:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 90:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 91:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_wildcard_pattern);
        case 92:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(93);
            ACCEPT_TOKEN(sym_identifier);
        case 93:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(94);
            ACCEPT_TOKEN(sym_identifier);
        case 94:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(95);
            ACCEPT_TOKEN(sym_identifier);
        case 95:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_case);
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_is);
        case 98:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(99);
            ACCEPT_TOKEN(sym_identifier);
        case 99:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(100);
            ACCEPT_TOKEN(sym_identifier);
        case 100:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_let);
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
                ADVANCE(92);
            if (lookahead == 'l')
                ADVANCE(98);
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
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 116:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 117:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(117);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            LEX_ERROR();
        case 118:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(118);
            if (lookahead == '\n')
                ADVANCE(119);
            if (lookahead == ';')
                ADVANCE(87);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            LEX_ERROR();
        case 119:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 120:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(120);
            if (lookahead == '!')
                ADVANCE(121);
            if (lookahead == '(')
                ADVANCE(89);
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
                ADVANCE(122);
            if (lookahead == 'f')
                ADVANCE(126);
            if (lookahead == 'o')
                ADVANCE(131);
            if (lookahead == 't')
                ADVANCE(133);
            LEX_ERROR();
        case 121:
            ACCEPT_TOKEN(anon_sym_BANG);
        case 122:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(123);
            ACCEPT_TOKEN(sym_identifier);
        case 123:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(124);
            ACCEPT_TOKEN(sym_identifier);
        case 124:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(125);
            ACCEPT_TOKEN(sym_identifier);
        case 125:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_arch);
        case 126:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(127);
            ACCEPT_TOKEN(sym_identifier);
        case 127:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(128);
            ACCEPT_TOKEN(sym_identifier);
        case 128:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(129);
            ACCEPT_TOKEN(sym_identifier);
        case 129:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(130);
            ACCEPT_TOKEN(sym_identifier);
        case 130:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_false);
        case 131:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(132);
            ACCEPT_TOKEN(sym_identifier);
        case 132:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_os);
        case 133:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(134);
            ACCEPT_TOKEN(sym_identifier);
        case 134:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(135);
            ACCEPT_TOKEN(sym_identifier);
        case 135:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(136);
            ACCEPT_TOKEN(sym_identifier);
        case 136:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_true);
        case 137:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(137);
            if (lookahead == '\n')
                ADVANCE(138);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(139);
            if (lookahead == ';')
                ADVANCE(87);
            LEX_ERROR();
        case 138:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 139:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(139);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH);
        case 140:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(140);
            if (lookahead == '!')
                ADVANCE(141);
            if (lookahead == '%')
                ADVANCE(141);
            if (lookahead == '&')
                ADVANCE(141);
            if (lookahead == '*')
                ADVANCE(141);
            if (lookahead == '+')
                ADVANCE(141);
            if (lookahead == '-')
                ADVANCE(141);
            if (lookahead == '/')
                ADVANCE(141);
            if (lookahead == '<')
                ADVANCE(141);
            if (lookahead == '=')
                ADVANCE(141);
            if (lookahead == '>')
                ADVANCE(141);
            if (lookahead == '?')
                ADVANCE(141);
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
                ADVANCE(141);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'c')
                ADVANCE(142);
            if (lookahead == 'e')
                ADVANCE(147);
            if (lookahead == 'f')
                ADVANCE(151);
            if (lookahead == 'p')
                ADVANCE(155);
            if (lookahead == 's')
                ADVANCE(163);
            if (lookahead == 't')
                ADVANCE(169);
            if (lookahead == 'v')
                ADVANCE(101);
            if (lookahead == '|')
                ADVANCE(141);
            if (lookahead == '~')
                ADVANCE(141);
            LEX_ERROR();
        case 141:
            if (lookahead == '!')
                ADVANCE(141);
            if (lookahead == '%')
                ADVANCE(141);
            if (lookahead == '&')
                ADVANCE(141);
            if (lookahead == '*')
                ADVANCE(141);
            if (lookahead == '+')
                ADVANCE(141);
            if (lookahead == '-')
                ADVANCE(141);
            if (lookahead == '/')
                ADVANCE(141);
            if (lookahead == '<')
                ADVANCE(141);
            if (lookahead == '=')
                ADVANCE(141);
            if (lookahead == '>')
                ADVANCE(141);
            if (lookahead == '?')
                ADVANCE(141);
            if (lookahead == '^')
                ADVANCE(141);
            if (lookahead == '|')
                ADVANCE(141);
            if (lookahead == '~')
                ADVANCE(141);
            ACCEPT_TOKEN(sym_operator);
        case 142:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(143);
            ACCEPT_TOKEN(sym_identifier);
        case 143:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(144);
            ACCEPT_TOKEN(sym_identifier);
        case 144:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_class);
        case 147:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(148);
            ACCEPT_TOKEN(sym_identifier);
        case 148:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(149);
            ACCEPT_TOKEN(sym_identifier);
        case 149:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'm')
                ADVANCE(150);
            ACCEPT_TOKEN(sym_identifier);
        case 150:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_enum);
        case 151:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(152);
            ACCEPT_TOKEN(sym_identifier);
        case 152:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(153);
            ACCEPT_TOKEN(sym_identifier);
        case 153:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(154);
            ACCEPT_TOKEN(sym_identifier);
        case 154:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_func);
        case 155:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(156);
            ACCEPT_TOKEN(sym_identifier);
        case 156:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(157);
            ACCEPT_TOKEN(sym_identifier);
        case 157:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(158);
            ACCEPT_TOKEN(sym_identifier);
        case 158:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(159);
            ACCEPT_TOKEN(sym_identifier);
        case 159:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(160);
            ACCEPT_TOKEN(sym_identifier);
        case 160:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(161);
            ACCEPT_TOKEN(sym_identifier);
        case 161:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(162);
            ACCEPT_TOKEN(sym_identifier);
        case 162:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_protocol);
        case 163:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(164);
            ACCEPT_TOKEN(sym_identifier);
        case 164:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(165);
            ACCEPT_TOKEN(sym_identifier);
        case 165:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'u')
                ADVANCE(166);
            ACCEPT_TOKEN(sym_identifier);
        case 166:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(167);
            ACCEPT_TOKEN(sym_identifier);
        case 167:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(168);
            ACCEPT_TOKEN(sym_identifier);
        case 168:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_struct);
        case 169:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(10);
            if (lookahead == 'y')
                ADVANCE(170);
            ACCEPT_TOKEN(sym_identifier);
        case 170:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(171);
            ACCEPT_TOKEN(sym_identifier);
        case 171:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(172);
            ACCEPT_TOKEN(sym_identifier);
        case 172:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(173);
            ACCEPT_TOKEN(sym_identifier);
        case 173:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(174);
            ACCEPT_TOKEN(sym_identifier);
        case 174:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(175);
            ACCEPT_TOKEN(sym_identifier);
        case 175:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(176);
            ACCEPT_TOKEN(sym_identifier);
        case 176:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(177);
            ACCEPT_TOKEN(sym_identifier);
        case 177:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_typealias);
        case 178:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(178);
            if (lookahead == '\n')
                ADVANCE(179);
            if (lookahead == ':')
                ADVANCE(180);
            if (lookahead == ';')
                ADVANCE(87);
            LEX_ERROR();
        case 179:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 180:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 181:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(181);
            if (lookahead == 'f')
                ADVANCE(182);
            if (lookahead == 'i')
                ADVANCE(185);
            if (lookahead == 'r')
                ADVANCE(187);
            if (lookahead == 'w')
                ADVANCE(193);
            LEX_ERROR();
        case 182:
            if (lookahead == 'o')
                ADVANCE(183);
            LEX_ERROR();
        case 183:
            if (lookahead == 'r')
                ADVANCE(184);
            LEX_ERROR();
        case 184:
            ACCEPT_TOKEN(anon_sym_for);
        case 185:
            if (lookahead == 'f')
                ADVANCE(186);
            LEX_ERROR();
        case 186:
            ACCEPT_TOKEN(anon_sym_if);
        case 187:
            if (lookahead == 'e')
                ADVANCE(188);
            LEX_ERROR();
        case 188:
            if (lookahead == 'p')
                ADVANCE(189);
            LEX_ERROR();
        case 189:
            if (lookahead == 'e')
                ADVANCE(190);
            LEX_ERROR();
        case 190:
            if (lookahead == 'a')
                ADVANCE(191);
            LEX_ERROR();
        case 191:
            if (lookahead == 't')
                ADVANCE(192);
            LEX_ERROR();
        case 192:
            ACCEPT_TOKEN(anon_sym_repeat);
        case 193:
            if (lookahead == 'h')
                ADVANCE(194);
            LEX_ERROR();
        case 194:
            if (lookahead == 'i')
                ADVANCE(195);
            LEX_ERROR();
        case 195:
            if (lookahead == 'l')
                ADVANCE(196);
            LEX_ERROR();
        case 196:
            if (lookahead == 'e')
                ADVANCE(197);
            LEX_ERROR();
        case 197:
            ACCEPT_TOKEN(anon_sym_while);
        case 198:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(198);
            if (lookahead == '!')
                ADVANCE(141);
            if (lookahead == '%')
                ADVANCE(141);
            if (lookahead == '&')
                ADVANCE(141);
            if (lookahead == '*')
                ADVANCE(141);
            if (lookahead == '+')
                ADVANCE(141);
            if (lookahead == '-')
                ADVANCE(141);
            if (lookahead == '/')
                ADVANCE(141);
            if (lookahead == '<')
                ADVANCE(141);
            if (lookahead == '=')
                ADVANCE(141);
            if (lookahead == '>')
                ADVANCE(141);
            if (lookahead == '?')
                ADVANCE(141);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '^')
                ADVANCE(141);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == '|')
                ADVANCE(141);
            if (lookahead == '~')
                ADVANCE(141);
            LEX_ERROR();
        case 199:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(199);
            if (lookahead == '\n')
                ADVANCE(200);
            if (lookahead == '.')
                ADVANCE(90);
            if (lookahead == ';')
                ADVANCE(87);
            LEX_ERROR();
        case 200:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 201:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(201);
            if (lookahead == '\"')
                ADVANCE(202);
            LEX_ERROR();
        case 202:
            if (lookahead == '\"')
                ADVANCE(203);
            if (lookahead == '\\')
                ADVANCE(204);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(202);
            LEX_ERROR();
        case 203:
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LPAREN_BSLASH_BSLASH_BSLASH_BSLASH_LPAREN_LBRACK_BSLASH_BSLASH0tnr_SQUOTE_BSLASH_DQUOTE_RBRACK_PIPEu_BSLASH_BSLASH_LBRACE_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA8_RBRACE_BSLASH_BSLASH_RBRACE_RPAREN_RPAREN_PIPE_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_BSLASH_BSLASH_BSLASH_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH);
        case 204:
            if (lookahead == '\\')
                ADVANCE(205);
            LEX_ERROR();
        case 205:
            if ((lookahead == '\"') ||
                (lookahead == '\'') ||
                (lookahead == '0') ||
                (lookahead == '\\') ||
                (lookahead == 'n') ||
                (lookahead == 'r') ||
                (lookahead == 't'))
                ADVANCE(202);
            if (lookahead == 'u')
                ADVANCE(206);
            LEX_ERROR();
        case 206:
            if (lookahead == '\\')
                ADVANCE(207);
            LEX_ERROR();
        case 207:
            if (lookahead == '{')
                ADVANCE(208);
            LEX_ERROR();
        case 208:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(209);
            LEX_ERROR();
        case 209:
            if (lookahead == '{')
                ADVANCE(210);
            LEX_ERROR();
        case 210:
            if (lookahead == '1')
                ADVANCE(211);
            LEX_ERROR();
        case 211:
            if (lookahead == ',')
                ADVANCE(212);
            LEX_ERROR();
        case 212:
            if (lookahead == '8')
                ADVANCE(213);
            LEX_ERROR();
        case 213:
            if (lookahead == '}')
                ADVANCE(214);
            LEX_ERROR();
        case 214:
            if (lookahead == '\\')
                ADVANCE(215);
            LEX_ERROR();
        case 215:
            if (lookahead == '}')
                ADVANCE(202);
            LEX_ERROR();
        case 216:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(216);
            if (lookahead == '#')
                ADVANCE(217);
            if (lookahead == '&')
                ADVANCE(228);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
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
            if (lookahead == 'r')
                ADVANCE(58);
            if (lookahead == 's')
                ADVANCE(68);
            if (lookahead == 't')
                ADVANCE(74);
            if (lookahead == 'w')
                ADVANCE(79);
            if (lookahead == '|')
                ADVANCE(230);
            LEX_ERROR();
        case 217:
            if (lookahead == 'e')
                ADVANCE(218);
            if (lookahead == 'i')
                ADVANCE(4);
            if (lookahead == 'l')
                ADVANCE(6);
            LEX_ERROR();
        case 218:
            if (lookahead == 'l')
                ADVANCE(219);
            if (lookahead == 'n')
                ADVANCE(224);
            LEX_ERROR();
        case 219:
            if (lookahead == 's')
                ADVANCE(220);
            LEX_ERROR();
        case 220:
            if (lookahead == 'e')
                ADVANCE(221);
            LEX_ERROR();
        case 221:
            if (lookahead == 'i')
                ADVANCE(222);
            ACCEPT_TOKEN(anon_sym_POUNDelse);
        case 222:
            if (lookahead == 'f')
                ADVANCE(223);
            LEX_ERROR();
        case 223:
            ACCEPT_TOKEN(anon_sym_POUNDelseif);
        case 224:
            if (lookahead == 'd')
                ADVANCE(225);
            LEX_ERROR();
        case 225:
            if (lookahead == 'i')
                ADVANCE(226);
            LEX_ERROR();
        case 226:
            if (lookahead == 'f')
                ADVANCE(227);
            LEX_ERROR();
        case 227:
            ACCEPT_TOKEN(anon_sym_POUNDendif);
        case 228:
            if (lookahead == '&')
                ADVANCE(229);
            LEX_ERROR();
        case 229:
            ACCEPT_TOKEN(anon_sym_AMP_AMP);
        case 230:
            if (lookahead == '|')
                ADVANCE(231);
            LEX_ERROR();
        case 231:
            ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
        case 232:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(232);
            if (lookahead == '(')
                ADVANCE(89);
            LEX_ERROR();
        case 233:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(233);
            if (lookahead == 'a')
                ADVANCE(234);
            if (lookahead == 'i')
                ADVANCE(239);
            if (lookahead == 'x')
                ADVANCE(243);
            LEX_ERROR();
        case 234:
            if (lookahead == 'r')
                ADVANCE(235);
            LEX_ERROR();
        case 235:
            if (lookahead == 'm')
                ADVANCE(236);
            LEX_ERROR();
        case 236:
            if (lookahead == '6')
                ADVANCE(237);
            ACCEPT_TOKEN(anon_sym_arm);
        case 237:
            if (lookahead == '4')
                ADVANCE(238);
            LEX_ERROR();
        case 238:
            ACCEPT_TOKEN(anon_sym_arm64);
        case 239:
            if (lookahead == '3')
                ADVANCE(240);
            LEX_ERROR();
        case 240:
            if (lookahead == '8')
                ADVANCE(241);
            LEX_ERROR();
        case 241:
            if (lookahead == '6')
                ADVANCE(242);
            LEX_ERROR();
        case 242:
            ACCEPT_TOKEN(anon_sym_i386);
        case 243:
            if (lookahead == '8')
                ADVANCE(244);
            LEX_ERROR();
        case 244:
            if (lookahead == '6')
                ADVANCE(245);
            LEX_ERROR();
        case 245:
            if (lookahead == '_')
                ADVANCE(246);
            LEX_ERROR();
        case 246:
            if (lookahead == '6')
                ADVANCE(247);
            LEX_ERROR();
        case 247:
            if (lookahead == '4')
                ADVANCE(248);
            LEX_ERROR();
        case 248:
            ACCEPT_TOKEN(anon_sym_x86_64);
        case 249:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(249);
            if (lookahead == ')')
                ADVANCE(250);
            LEX_ERROR();
        case 250:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 251:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(251);
            if (lookahead == 'O')
                ADVANCE(252);
            if (lookahead == 'i')
                ADVANCE(255);
            if (lookahead == 't')
                ADVANCE(258);
            if (lookahead == 'w')
                ADVANCE(262);
            LEX_ERROR();
        case 252:
            if (lookahead == 'S')
                ADVANCE(253);
            LEX_ERROR();
        case 253:
            if (lookahead == 'X')
                ADVANCE(254);
            LEX_ERROR();
        case 254:
            ACCEPT_TOKEN(anon_sym_OSX);
        case 255:
            if (lookahead == 'O')
                ADVANCE(256);
            LEX_ERROR();
        case 256:
            if (lookahead == 'S')
                ADVANCE(257);
            LEX_ERROR();
        case 257:
            ACCEPT_TOKEN(anon_sym_iOS);
        case 258:
            if (lookahead == 'v')
                ADVANCE(259);
            LEX_ERROR();
        case 259:
            if (lookahead == 'O')
                ADVANCE(260);
            LEX_ERROR();
        case 260:
            if (lookahead == 'S')
                ADVANCE(261);
            LEX_ERROR();
        case 261:
            ACCEPT_TOKEN(anon_sym_tvOS);
        case 262:
            if (lookahead == 'a')
                ADVANCE(263);
            LEX_ERROR();
        case 263:
            if (lookahead == 't')
                ADVANCE(264);
            LEX_ERROR();
        case 264:
            if (lookahead == 'c')
                ADVANCE(265);
            LEX_ERROR();
        case 265:
            if (lookahead == 'h')
                ADVANCE(266);
            LEX_ERROR();
        case 266:
            if (lookahead == 'O')
                ADVANCE(267);
            LEX_ERROR();
        case 267:
            if (lookahead == 'S')
                ADVANCE(268);
            LEX_ERROR();
        case 268:
            ACCEPT_TOKEN(anon_sym_watchOS);
        case 269:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(269);
            if (lookahead == '&')
                ADVANCE(228);
            if (lookahead == ')')
                ADVANCE(250);
            if (lookahead == '|')
                ADVANCE(230);
            LEX_ERROR();
        case 270:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(270);
            if (lookahead == '#')
                ADVANCE(217);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
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
            if (lookahead == 'r')
                ADVANCE(58);
            if (lookahead == 's')
                ADVANCE(68);
            if (lookahead == 't')
                ADVANCE(74);
            if (lookahead == 'w')
                ADVANCE(79);
            LEX_ERROR();
        case 271:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(271);
            if (lookahead == '#')
                ADVANCE(272);
            LEX_ERROR();
        case 272:
            if (lookahead == 'e')
                ADVANCE(218);
            LEX_ERROR();
        case 273:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(273);
            if (lookahead == '#')
                ADVANCE(274);
            LEX_ERROR();
        case 274:
            if (lookahead == 'e')
                ADVANCE(275);
            LEX_ERROR();
        case 275:
            if (lookahead == 'l')
                ADVANCE(276);
            if (lookahead == 'n')
                ADVANCE(224);
            LEX_ERROR();
        case 276:
            if (lookahead == 's')
                ADVANCE(277);
            LEX_ERROR();
        case 277:
            if (lookahead == 'e')
                ADVANCE(278);
            LEX_ERROR();
        case 278:
            ACCEPT_TOKEN(anon_sym_POUNDelse);
        case 279:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(279);
            if (lookahead == '#')
                ADVANCE(280);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
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
            if (lookahead == 'r')
                ADVANCE(58);
            if (lookahead == 's')
                ADVANCE(68);
            if (lookahead == 't')
                ADVANCE(74);
            if (lookahead == 'w')
                ADVANCE(79);
            LEX_ERROR();
        case 280:
            if (lookahead == 'e')
                ADVANCE(281);
            if (lookahead == 'i')
                ADVANCE(4);
            if (lookahead == 'l')
                ADVANCE(6);
            LEX_ERROR();
        case 281:
            if (lookahead == 'n')
                ADVANCE(224);
            LEX_ERROR();
        case 282:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(282);
            if (lookahead == '#')
                ADVANCE(283);
            LEX_ERROR();
        case 283:
            if (lookahead == 'e')
                ADVANCE(281);
            LEX_ERROR();
        case 284:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(284);
            if (lookahead == '\n')
                ADVANCE(285);
            if (lookahead == ';')
                ADVANCE(87);
            if (lookahead == 'c')
                ADVANCE(286);
            LEX_ERROR();
        case 285:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 286:
            if (lookahead == 'a')
                ADVANCE(287);
            LEX_ERROR();
        case 287:
            if (lookahead == 't')
                ADVANCE(288);
            LEX_ERROR();
        case 288:
            if (lookahead == 'c')
                ADVANCE(289);
            LEX_ERROR();
        case 289:
            if (lookahead == 'h')
                ADVANCE(290);
            LEX_ERROR();
        case 290:
            ACCEPT_TOKEN(anon_sym_catch);
        case 291:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(291);
            if (lookahead == '#')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'q') ||
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
            if (lookahead == 'r')
                ADVANCE(58);
            if (lookahead == 's')
                ADVANCE(68);
            if (lookahead == 't')
                ADVANCE(74);
            if (lookahead == 'w')
                ADVANCE(79);
            if (lookahead == '}')
                ADVANCE(292);
            LEX_ERROR();
        case 292:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 293:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(293);
            if (lookahead == '}')
                ADVANCE(292);
            LEX_ERROR();
        case 294:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(294);
            if (lookahead == '(')
                ADVANCE(89);
            if (lookahead == '.')
                ADVANCE(90);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(91);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(96);
            if (lookahead == 'l')
                ADVANCE(98);
            if (lookahead == 'v')
                ADVANCE(101);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 295:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(295);
            if (lookahead == '?')
                ADVANCE(296);
            if (lookahead == 'a')
                ADVANCE(297);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 296:
            ACCEPT_TOKEN(anon_sym_QMARK);
        case 297:
            if (lookahead == 's')
                ADVANCE(298);
            LEX_ERROR();
        case 298:
            ACCEPT_TOKEN(anon_sym_as);
        case 299:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(299);
            if (lookahead == '.')
                ADVANCE(90);
            LEX_ERROR();
        case 300:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(300);
            if (lookahead == '(')
                ADVANCE(89);
            if (lookahead == ')')
                ADVANCE(250);
            if (lookahead == '.')
                ADVANCE(90);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(91);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(96);
            if (lookahead == 'l')
                ADVANCE(98);
            if (lookahead == 'v')
                ADVANCE(101);
            LEX_ERROR();
        case 301:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(301);
            if (lookahead == '(')
                ADVANCE(89);
            if (lookahead == '.')
                ADVANCE(90);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(91);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(96);
            if (lookahead == 'l')
                ADVANCE(98);
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
                ADVANCE(90);
            if (lookahead == '?')
                ADVANCE(296);
            if (lookahead == 'a')
                ADVANCE(297);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 303:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(303);
            if (lookahead == '(')
                ADVANCE(89);
            if (lookahead == '?')
                ADVANCE(296);
            if (lookahead == 'a')
                ADVANCE(297);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 304:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(304);
            if (lookahead == ')')
                ADVANCE(250);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == '?')
                ADVANCE(296);
            if (lookahead == 'a')
                ADVANCE(297);
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
                ADVANCE(250);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == '.')
                ADVANCE(90);
            if (lookahead == '?')
                ADVANCE(296);
            if (lookahead == 'a')
                ADVANCE(297);
            LEX_ERROR();
        case 307:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(307);
            if (lookahead == '(')
                ADVANCE(89);
            if (lookahead == ')')
                ADVANCE(250);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == '?')
                ADVANCE(296);
            if (lookahead == 'a')
                ADVANCE(297);
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
                ADVANCE(292);
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
                ADVANCE(180);
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
                ('j' <= lookahead && lookahead <= 'q') ||
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
            if (lookahead == 'r')
                ADVANCE(58);
            if (lookahead == 's')
                ADVANCE(68);
            if (lookahead == 't')
                ADVANCE(74);
            if (lookahead == 'w')
                ADVANCE(79);
            if (lookahead == '}')
                ADVANCE(292);
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
                ADVANCE(93);
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
                ADVANCE(180);
            if (lookahead == '?')
                ADVANCE(296);
            if (lookahead == 'a')
                ADVANCE(297);
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
                ADVANCE(90);
            if (lookahead == ':')
                ADVANCE(180);
            if (lookahead == '?')
                ADVANCE(296);
            if (lookahead == 'a')
                ADVANCE(297);
            LEX_ERROR();
        case 332:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(332);
            if (lookahead == '(')
                ADVANCE(89);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == ':')
                ADVANCE(180);
            if (lookahead == '?')
                ADVANCE(296);
            if (lookahead == 'a')
                ADVANCE(297);
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
                ADVANCE(296);
            if (lookahead == 'a')
                ADVANCE(297);
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
                ADVANCE(90);
            if (lookahead == '=')
                ADVANCE(340);
            if (lookahead == '?')
                ADVANCE(296);
            if (lookahead == 'a')
                ADVANCE(297);
            LEX_ERROR();
        case 342:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(342);
            if (lookahead == '(')
                ADVANCE(89);
            if (lookahead == '=')
                ADVANCE(340);
            if (lookahead == '?')
                ADVANCE(296);
            if (lookahead == 'a')
                ADVANCE(297);
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
                ADVANCE(258);
            if (lookahead == 'w')
                ADVANCE(262);
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
                ADVANCE(250);
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
                ADVANCE(116);
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
                ADVANCE(87);
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
                ADVANCE(185);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 409:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(409);
            if (lookahead == 'w')
                ADVANCE(193);
            LEX_ERROR();
        case 410:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(410);
            if (lookahead == ';')
                ADVANCE(87);
            LEX_ERROR();
        case 411:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(411);
            if (lookahead == ':')
                ADVANCE(180);
            if (lookahead == '?')
                ADVANCE(296);
            if (lookahead == 'a')
                ADVANCE(297);
            if (lookahead == 'i')
                ADVANCE(412);
            LEX_ERROR();
        case 412:
            if (lookahead == 'n')
                ADVANCE(413);
            LEX_ERROR();
        case 413:
            ACCEPT_TOKEN(anon_sym_in);
        case 414:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(414);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == ':')
                ADVANCE(180);
            if (lookahead == ';')
                ADVANCE(87);
            if (lookahead == '?')
                ADVANCE(296);
            if (lookahead == 'a')
                ADVANCE(297);
            if (lookahead == 'i')
                ADVANCE(412);
            LEX_ERROR();
        case 415:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(415);
            if (lookahead == ';')
                ADVANCE(87);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            LEX_ERROR();
        case 416:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(416);
            if (lookahead == '(')
                ADVANCE(89);
            if (lookahead == ')')
                ADVANCE(250);
            if (lookahead == '.')
                ADVANCE(90);
            if (lookahead == ';')
                ADVANCE(87);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(91);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(96);
            if (lookahead == 'l')
                ADVANCE(98);
            if (lookahead == 'v')
                ADVANCE(101);
            LEX_ERROR();
        case 417:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(417);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == '.')
                ADVANCE(90);
            if (lookahead == ':')
                ADVANCE(180);
            if (lookahead == ';')
                ADVANCE(87);
            if (lookahead == '?')
                ADVANCE(296);
            if (lookahead == 'a')
                ADVANCE(297);
            if (lookahead == 'i')
                ADVANCE(412);
            LEX_ERROR();
        case 418:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(418);
            if (lookahead == '.')
                ADVANCE(90);
            if (lookahead == ':')
                ADVANCE(180);
            if (lookahead == '?')
                ADVANCE(296);
            if (lookahead == 'a')
                ADVANCE(297);
            if (lookahead == 'i')
                ADVANCE(412);
            LEX_ERROR();
        case 419:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(419);
            if (lookahead == '(')
                ADVANCE(89);
            if (lookahead == ':')
                ADVANCE(180);
            if (lookahead == '?')
                ADVANCE(296);
            if (lookahead == 'a')
                ADVANCE(297);
            if (lookahead == 'i')
                ADVANCE(412);
            LEX_ERROR();
        case 420:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(420);
            if (lookahead == 'i')
                ADVANCE(412);
            LEX_ERROR();
        case 421:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(421);
            if (lookahead == '.')
                ADVANCE(90);
            if (lookahead == 'i')
                ADVANCE(412);
            LEX_ERROR();
        case 422:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(422);
            if (lookahead == ')')
                ADVANCE(250);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == ';')
                ADVANCE(87);
            if (lookahead == '?')
                ADVANCE(296);
            if (lookahead == 'a')
                ADVANCE(297);
            LEX_ERROR();
        case 423:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(423);
            if (lookahead == ')')
                ADVANCE(250);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == '.')
                ADVANCE(90);
            if (lookahead == ';')
                ADVANCE(87);
            if (lookahead == '?')
                ADVANCE(296);
            if (lookahead == 'a')
                ADVANCE(297);
            LEX_ERROR();
        case 424:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(424);
            if (lookahead == ')')
                ADVANCE(250);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            LEX_ERROR();
        case 425:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(425);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == ';')
                ADVANCE(87);
            LEX_ERROR();
        case 426:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(426);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 427:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(427);
            if (lookahead == '.')
                ADVANCE(90);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 428:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(428);
            if (lookahead == '\n')
                ADVANCE(429);
            if (lookahead == '!')
                ADVANCE(430);
            if (lookahead == '\"')
                ADVANCE(202);
            if (lookahead == '#')
                ADVANCE(431);
            if (lookahead == '%')
                ADVANCE(141);
            if (lookahead == '&')
                ADVANCE(432);
            if (lookahead == '(')
                ADVANCE(89);
            if (lookahead == ')')
                ADVANCE(250);
            if (lookahead == '*')
                ADVANCE(434);
            if (lookahead == '+')
                ADVANCE(141);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == '-')
                ADVANCE(141);
            if (lookahead == '.')
                ADVANCE(90);
            if (lookahead == '/')
                ADVANCE(141);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(435);
            if (lookahead == ':')
                ADVANCE(180);
            if (lookahead == ';')
                ADVANCE(87);
            if (lookahead == '<')
                ADVANCE(141);
            if (lookahead == '=')
                ADVANCE(436);
            if (lookahead == '>')
                ADVANCE(141);
            if (lookahead == '?')
                ADVANCE(437);
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
                ADVANCE(438);
            if (lookahead == '^')
                ADVANCE(141);
            if (lookahead == '_')
                ADVANCE(91);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'a')
                ADVANCE(461);
            if (lookahead == 'b')
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(467);
            if (lookahead == 'd')
                ADVANCE(323);
            if (lookahead == 'e')
                ADVANCE(472);
            if (lookahead == 'f')
                ADVANCE(476);
            if (lookahead == 'g')
                ADVANCE(46);
            if (lookahead == 'i')
                ADVANCE(479);
            if (lookahead == 'l')
                ADVANCE(98);
            if (lookahead == 'o')
                ADVANCE(131);
            if (lookahead == 'p')
                ADVANCE(155);
            if (lookahead == 'r')
                ADVANCE(58);
            if (lookahead == 's')
                ADVANCE(506);
            if (lookahead == 't')
                ADVANCE(507);
            if (lookahead == 'v')
                ADVANCE(101);
            if (lookahead == 'w')
                ADVANCE(511);
            if (lookahead == 'x')
                ADVANCE(518);
            if (lookahead == '{')
                ADVANCE(116);
            if (lookahead == '|')
                ADVANCE(524);
            if (lookahead == '}')
                ADVANCE(292);
            if (lookahead == '~')
                ADVANCE(141);
            LEX_ERROR();
        case 429:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
        case 430:
            if (lookahead == '!')
                ADVANCE(141);
            if (lookahead == '%')
                ADVANCE(141);
            if (lookahead == '&')
                ADVANCE(141);
            if (lookahead == '*')
                ADVANCE(141);
            if (lookahead == '+')
                ADVANCE(141);
            if (lookahead == '-')
                ADVANCE(141);
            if (lookahead == '/')
                ADVANCE(141);
            if (lookahead == '<')
                ADVANCE(141);
            if (lookahead == '=')
                ADVANCE(141);
            if (lookahead == '>')
                ADVANCE(141);
            if (lookahead == '?')
                ADVANCE(141);
            if (lookahead == '^')
                ADVANCE(141);
            if (lookahead == '|')
                ADVANCE(141);
            if (lookahead == '~')
                ADVANCE(141);
            ACCEPT_TOKEN(anon_sym_BANG);
        case 431:
            if (lookahead == 'a')
                ADVANCE(106);
            if (lookahead == 'e')
                ADVANCE(218);
            if (lookahead == 'i')
                ADVANCE(4);
            if (lookahead == 'l')
                ADVANCE(6);
            LEX_ERROR();
        case 432:
            if (lookahead == '!')
                ADVANCE(141);
            if (lookahead == '%')
                ADVANCE(141);
            if (lookahead == '&')
                ADVANCE(433);
            if (lookahead == '*')
                ADVANCE(141);
            if (lookahead == '+')
                ADVANCE(141);
            if (lookahead == '-')
                ADVANCE(141);
            if (lookahead == '/')
                ADVANCE(141);
            if (lookahead == '<')
                ADVANCE(141);
            if (lookahead == '=')
                ADVANCE(141);
            if (lookahead == '>')
                ADVANCE(141);
            if (lookahead == '?')
                ADVANCE(141);
            if (lookahead == '^')
                ADVANCE(141);
            if (lookahead == '|')
                ADVANCE(141);
            if (lookahead == '~')
                ADVANCE(141);
            ACCEPT_TOKEN(sym_operator);
        case 433:
            if (lookahead == '!')
                ADVANCE(141);
            if (lookahead == '%')
                ADVANCE(141);
            if (lookahead == '&')
                ADVANCE(141);
            if (lookahead == '*')
                ADVANCE(141);
            if (lookahead == '+')
                ADVANCE(141);
            if (lookahead == '-')
                ADVANCE(141);
            if (lookahead == '/')
                ADVANCE(141);
            if (lookahead == '<')
                ADVANCE(141);
            if (lookahead == '=')
                ADVANCE(141);
            if (lookahead == '>')
                ADVANCE(141);
            if (lookahead == '?')
                ADVANCE(141);
            if (lookahead == '^')
                ADVANCE(141);
            if (lookahead == '|')
                ADVANCE(141);
            if (lookahead == '~')
                ADVANCE(141);
            ACCEPT_TOKEN(anon_sym_AMP_AMP);
        case 434:
            if (lookahead == '!')
                ADVANCE(141);
            if (lookahead == '%')
                ADVANCE(141);
            if (lookahead == '&')
                ADVANCE(141);
            if (lookahead == '*')
                ADVANCE(141);
            if (lookahead == '+')
                ADVANCE(141);
            if (lookahead == '-')
                ADVANCE(141);
            if (lookahead == '/')
                ADVANCE(141);
            if (lookahead == '<')
                ADVANCE(141);
            if (lookahead == '=')
                ADVANCE(141);
            if (lookahead == '>')
                ADVANCE(141);
            if (lookahead == '?')
                ADVANCE(141);
            if (lookahead == '^')
                ADVANCE(141);
            if (lookahead == '|')
                ADVANCE(141);
            if (lookahead == '~')
                ADVANCE(141);
            ACCEPT_TOKEN(anon_sym_STAR);
        case 435:
            if (lookahead == '.')
                ADVANCE(394);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(435);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH);
        case 436:
            if (lookahead == '!')
                ADVANCE(141);
            if (lookahead == '%')
                ADVANCE(141);
            if (lookahead == '&')
                ADVANCE(141);
            if (lookahead == '*')
                ADVANCE(141);
            if (lookahead == '+')
                ADVANCE(141);
            if (lookahead == '-')
                ADVANCE(141);
            if (lookahead == '/')
                ADVANCE(141);
            if (lookahead == '<')
                ADVANCE(141);
            if (lookahead == '=')
                ADVANCE(141);
            if (lookahead == '>')
                ADVANCE(141);
            if (lookahead == '?')
                ADVANCE(141);
            if (lookahead == '^')
                ADVANCE(141);
            if (lookahead == '|')
                ADVANCE(141);
            if (lookahead == '~')
                ADVANCE(141);
            ACCEPT_TOKEN(anon_sym_EQ);
        case 437:
            if (lookahead == '!')
                ADVANCE(141);
            if (lookahead == '%')
                ADVANCE(141);
            if (lookahead == '&')
                ADVANCE(141);
            if (lookahead == '*')
                ADVANCE(141);
            if (lookahead == '+')
                ADVANCE(141);
            if (lookahead == '-')
                ADVANCE(141);
            if (lookahead == '/')
                ADVANCE(141);
            if (lookahead == '<')
                ADVANCE(141);
            if (lookahead == '=')
                ADVANCE(141);
            if (lookahead == '>')
                ADVANCE(141);
            if (lookahead == '?')
                ADVANCE(141);
            if (lookahead == '^')
                ADVANCE(141);
            if (lookahead == '|')
                ADVANCE(141);
            if (lookahead == '~')
                ADVANCE(141);
            ACCEPT_TOKEN(anon_sym_QMARK);
        case 438:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'S')
                ADVANCE(439);
            ACCEPT_TOKEN(sym_identifier);
        case 439:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'W') ||
                (lookahead == 'Y') ||
                (lookahead == 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'X')
                ADVANCE(440);
            ACCEPT_TOKEN(sym_identifier);
        case 440:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == 'A')
                ADVANCE(441);
            if (('B' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_OSX);
        case 441:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(442);
            ACCEPT_TOKEN(sym_identifier);
        case 442:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(443);
            ACCEPT_TOKEN(sym_identifier);
        case 443:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(444);
            ACCEPT_TOKEN(sym_identifier);
        case 444:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(445);
            ACCEPT_TOKEN(sym_identifier);
        case 445:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(446);
            ACCEPT_TOKEN(sym_identifier);
        case 446:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(447);
            ACCEPT_TOKEN(sym_identifier);
        case 447:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(448);
            ACCEPT_TOKEN(sym_identifier);
        case 448:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(449);
            ACCEPT_TOKEN(sym_identifier);
        case 449:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(450);
            ACCEPT_TOKEN(sym_identifier);
        case 450:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(451);
            ACCEPT_TOKEN(sym_identifier);
        case 451:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'D') ||
                ('F' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'E')
                ADVANCE(452);
            ACCEPT_TOKEN(sym_identifier);
        case 452:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(10);
            if (lookahead == 'x')
                ADVANCE(453);
            ACCEPT_TOKEN(sym_identifier);
        case 453:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(454);
            ACCEPT_TOKEN(sym_identifier);
        case 454:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(455);
            ACCEPT_TOKEN(sym_identifier);
        case 455:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(456);
            ACCEPT_TOKEN(sym_identifier);
        case 456:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(457);
            ACCEPT_TOKEN(sym_identifier);
        case 457:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(458);
            ACCEPT_TOKEN(sym_identifier);
        case 458:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(459);
            ACCEPT_TOKEN(sym_identifier);
        case 459:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(460);
            ACCEPT_TOKEN(sym_identifier);
        case 460:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_OSXApplicationExtension);
        case 461:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'r')
                ADVANCE(462);
            if (lookahead == 's')
                ADVANCE(466);
            ACCEPT_TOKEN(sym_identifier);
        case 462:
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
                ADVANCE(124);
            if (lookahead == 'm')
                ADVANCE(463);
            ACCEPT_TOKEN(sym_identifier);
        case 463:
            if (('0' <= lookahead && lookahead <= '5') ||
                ('7' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '6')
                ADVANCE(464);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_arm);
        case 464:
            if (('0' <= lookahead && lookahead <= '3') ||
                ('5' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '4')
                ADVANCE(465);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 465:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_arm64);
        case 466:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_as);
        case 467:
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
                ADVANCE(468);
            if (lookahead == 'l')
                ADVANCE(143);
            if (lookahead == 'o')
                ADVANCE(20);
            ACCEPT_TOKEN(sym_identifier);
        case 468:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(94);
            if (lookahead == 't')
                ADVANCE(469);
            ACCEPT_TOKEN(sym_identifier);
        case 469:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(470);
            ACCEPT_TOKEN(sym_identifier);
        case 470:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(471);
            ACCEPT_TOKEN(sym_identifier);
        case 471:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_catch);
        case 472:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(473);
            if (lookahead == 'n')
                ADVANCE(148);
            ACCEPT_TOKEN(sym_identifier);
        case 473:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(474);
            ACCEPT_TOKEN(sym_identifier);
        case 474:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(475);
            ACCEPT_TOKEN(sym_identifier);
        case 475:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_else);
        case 476:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(477);
            if (lookahead == 'o')
                ADVANCE(44);
            if (lookahead == 'u')
                ADVANCE(152);
            ACCEPT_TOKEN(sym_identifier);
        case 477:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(478);
            ACCEPT_TOKEN(sym_identifier);
        case 478:
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
                ADVANCE(129);
            ACCEPT_TOKEN(sym_identifier);
        case 479:
            if (('0' <= lookahead && lookahead <= '2') ||
                ('4' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '3')
                ADVANCE(480);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'O')
                ADVANCE(483);
            if (lookahead == 'f')
                ADVANCE(52);
            if (lookahead == 'm')
                ADVANCE(53);
            if (lookahead == 'n')
                ADVANCE(505);
            if (lookahead == 's')
                ADVANCE(97);
            ACCEPT_TOKEN(sym_identifier);
        case 480:
            if (('0' <= lookahead && lookahead <= '7') ||
                (lookahead == '9'))
                ADVANCE(10);
            if (lookahead == '8')
                ADVANCE(481);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 481:
            if (('0' <= lookahead && lookahead <= '5') ||
                ('7' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '6')
                ADVANCE(482);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 482:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_i386);
        case 483:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'S')
                ADVANCE(484);
            ACCEPT_TOKEN(sym_identifier);
        case 484:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (lookahead == 'A')
                ADVANCE(485);
            if (('B' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_iOS);
        case 485:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(486);
            ACCEPT_TOKEN(sym_identifier);
        case 486:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'p')
                ADVANCE(487);
            ACCEPT_TOKEN(sym_identifier);
        case 487:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'l')
                ADVANCE(488);
            ACCEPT_TOKEN(sym_identifier);
        case 488:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(489);
            ACCEPT_TOKEN(sym_identifier);
        case 489:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(490);
            ACCEPT_TOKEN(sym_identifier);
        case 490:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(491);
            ACCEPT_TOKEN(sym_identifier);
        case 491:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(492);
            ACCEPT_TOKEN(sym_identifier);
        case 492:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(493);
            ACCEPT_TOKEN(sym_identifier);
        case 493:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(494);
            ACCEPT_TOKEN(sym_identifier);
        case 494:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(495);
            ACCEPT_TOKEN(sym_identifier);
        case 495:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'D') ||
                ('F' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'E')
                ADVANCE(496);
            ACCEPT_TOKEN(sym_identifier);
        case 496:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(10);
            if (lookahead == 'x')
                ADVANCE(497);
            ACCEPT_TOKEN(sym_identifier);
        case 497:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(498);
            ACCEPT_TOKEN(sym_identifier);
        case 498:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'e')
                ADVANCE(499);
            ACCEPT_TOKEN(sym_identifier);
        case 499:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(500);
            ACCEPT_TOKEN(sym_identifier);
        case 500:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 's')
                ADVANCE(501);
            ACCEPT_TOKEN(sym_identifier);
        case 501:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(502);
            ACCEPT_TOKEN(sym_identifier);
        case 502:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'o')
                ADVANCE(503);
            ACCEPT_TOKEN(sym_identifier);
        case 503:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'n')
                ADVANCE(504);
            ACCEPT_TOKEN(sym_identifier);
        case 504:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_iOSApplicationExtension);
        case 505:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_in);
        case 506:
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
                ADVANCE(164);
            if (lookahead == 'w')
                ADVANCE(69);
            ACCEPT_TOKEN(sym_identifier);
        case 507:
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
                ADVANCE(75);
            if (lookahead == 'r')
                ADVANCE(134);
            if (lookahead == 'v')
                ADVANCE(508);
            if (lookahead == 'y')
                ADVANCE(170);
            ACCEPT_TOKEN(sym_identifier);
        case 508:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'O')
                ADVANCE(509);
            ACCEPT_TOKEN(sym_identifier);
        case 509:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'S')
                ADVANCE(510);
            ACCEPT_TOKEN(sym_identifier);
        case 510:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_tvOS);
        case 511:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(512);
            if (lookahead == 'h')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier);
        case 512:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 't')
                ADVANCE(513);
            ACCEPT_TOKEN(sym_identifier);
        case 513:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'c')
                ADVANCE(514);
            ACCEPT_TOKEN(sym_identifier);
        case 514:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'h')
                ADVANCE(515);
            ACCEPT_TOKEN(sym_identifier);
        case 515:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'N') ||
                ('P' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'O')
                ADVANCE(516);
            ACCEPT_TOKEN(sym_identifier);
        case 516:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'R') ||
                ('T' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == 'S')
                ADVANCE(517);
            ACCEPT_TOKEN(sym_identifier);
        case 517:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_watchOS);
        case 518:
            if (('0' <= lookahead && lookahead <= '7') ||
                (lookahead == '9'))
                ADVANCE(10);
            if (lookahead == '8')
                ADVANCE(519);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 519:
            if (('0' <= lookahead && lookahead <= '5') ||
                ('7' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '6')
                ADVANCE(520);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 520:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            if (lookahead == '_')
                ADVANCE(521);
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
            if (('0' <= lookahead && lookahead <= '3') ||
                ('5' <= lookahead && lookahead <= '9'))
                ADVANCE(10);
            if (lookahead == '4')
                ADVANCE(523);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_identifier);
        case 523:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_x86_64);
        case 524:
            if (lookahead == '!')
                ADVANCE(141);
            if (lookahead == '%')
                ADVANCE(141);
            if (lookahead == '&')
                ADVANCE(141);
            if (lookahead == '*')
                ADVANCE(141);
            if (lookahead == '+')
                ADVANCE(141);
            if (lookahead == '-')
                ADVANCE(141);
            if (lookahead == '/')
                ADVANCE(141);
            if (lookahead == '<')
                ADVANCE(141);
            if (lookahead == '=')
                ADVANCE(141);
            if (lookahead == '>')
                ADVANCE(141);
            if (lookahead == '?')
                ADVANCE(141);
            if (lookahead == '^')
                ADVANCE(141);
            if (lookahead == '|')
                ADVANCE(525);
            if (lookahead == '~')
                ADVANCE(141);
            ACCEPT_TOKEN(sym_operator);
        case 525:
            if (lookahead == '!')
                ADVANCE(141);
            if (lookahead == '%')
                ADVANCE(141);
            if (lookahead == '&')
                ADVANCE(141);
            if (lookahead == '*')
                ADVANCE(141);
            if (lookahead == '+')
                ADVANCE(141);
            if (lookahead == '-')
                ADVANCE(141);
            if (lookahead == '/')
                ADVANCE(141);
            if (lookahead == '<')
                ADVANCE(141);
            if (lookahead == '=')
                ADVANCE(141);
            if (lookahead == '>')
                ADVANCE(141);
            if (lookahead == '?')
                ADVANCE(141);
            if (lookahead == '^')
                ADVANCE(141);
            if (lookahead == '|')
                ADVANCE(141);
            if (lookahead == '~')
                ADVANCE(141);
            ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
        case ts_lex_state_error:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(428);
            if (lookahead == '\n')
                ADVANCE(429);
            if (lookahead == '!')
                ADVANCE(430);
            if (lookahead == '\"')
                ADVANCE(202);
            if (lookahead == '#')
                ADVANCE(431);
            if (lookahead == '%')
                ADVANCE(141);
            if (lookahead == '&')
                ADVANCE(432);
            if (lookahead == '(')
                ADVANCE(89);
            if (lookahead == ')')
                ADVANCE(250);
            if (lookahead == '*')
                ADVANCE(434);
            if (lookahead == '+')
                ADVANCE(141);
            if (lookahead == ',')
                ADVANCE(305);
            if (lookahead == '-')
                ADVANCE(141);
            if (lookahead == '.')
                ADVANCE(90);
            if (lookahead == '/')
                ADVANCE(141);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(435);
            if (lookahead == ':')
                ADVANCE(180);
            if (lookahead == ';')
                ADVANCE(87);
            if (lookahead == '<')
                ADVANCE(141);
            if (lookahead == '=')
                ADVANCE(436);
            if (lookahead == '>')
                ADVANCE(141);
            if (lookahead == '?')
                ADVANCE(437);
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
                ADVANCE(438);
            if (lookahead == '^')
                ADVANCE(141);
            if (lookahead == '_')
                ADVANCE(91);
            if (lookahead == '`')
                ADVANCE(11);
            if (lookahead == 'a')
                ADVANCE(461);
            if (lookahead == 'b')
                ADVANCE(14);
            if (lookahead == 'c')
                ADVANCE(467);
            if (lookahead == 'd')
                ADVANCE(323);
            if (lookahead == 'e')
                ADVANCE(472);
            if (lookahead == 'f')
                ADVANCE(476);
            if (lookahead == 'g')
                ADVANCE(46);
            if (lookahead == 'i')
                ADVANCE(479);
            if (lookahead == 'l')
                ADVANCE(98);
            if (lookahead == 'o')
                ADVANCE(131);
            if (lookahead == 'p')
                ADVANCE(155);
            if (lookahead == 'r')
                ADVANCE(58);
            if (lookahead == 's')
                ADVANCE(506);
            if (lookahead == 't')
                ADVANCE(507);
            if (lookahead == 'v')
                ADVANCE(101);
            if (lookahead == 'w')
                ADVANCE(511);
            if (lookahead == 'x')
                ADVANCE(518);
            if (lookahead == '{')
                ADVANCE(116);
            if (lookahead == '|')
                ADVANCE(524);
            if (lookahead == '}')
                ADVANCE(292);
            if (lookahead == '~')
                ADVANCE(141);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 1,
    [1] = 84,
    [2] = 1,
    [3] = 85,
    [4] = 85,
    [5] = 85,
    [6] = 84,
    [7] = 88,
    [8] = 104,
    [9] = 115,
    [10] = 104,
    [11] = 104,
    [12] = 117,
    [13] = 118,
    [14] = 118,
    [15] = 118,
    [16] = 118,
    [17] = 115,
    [18] = 115,
    [19] = 120,
    [20] = 137,
    [21] = 140,
    [22] = 178,
    [23] = 181,
    [24] = 85,
    [25] = 198,
    [26] = 199,
    [27] = 85,
    [28] = 198,
    [29] = 199,
    [30] = 85,
    [31] = 199,
    [32] = 85,
    [33] = 201,
    [34] = 85,
    [35] = 216,
    [36] = 216,
    [37] = 120,
    [38] = 232,
    [39] = 232,
    [40] = 120,
    [41] = 216,
    [42] = 216,
    [43] = 120,
    [44] = 120,
    [45] = 216,
    [46] = 216,
    [47] = 233,
    [48] = 249,
    [49] = 216,
    [50] = 251,
    [51] = 269,
    [52] = 269,
    [53] = 120,
    [54] = 232,
    [55] = 232,
    [56] = 120,
    [57] = 269,
    [58] = 269,
    [59] = 120,
    [60] = 120,
    [61] = 269,
    [62] = 269,
    [63] = 233,
    [64] = 249,
    [65] = 269,
    [66] = 251,
    [67] = 269,
    [68] = 269,
    [69] = 216,
    [70] = 270,
    [71] = 85,
    [72] = 271,
    [73] = 273,
    [74] = 120,
    [75] = 279,
    [76] = 85,
    [77] = 279,
    [78] = 85,
    [79] = 282,
    [80] = 85,
    [81] = 85,
    [82] = 279,
    [83] = 282,
    [84] = 216,
    [85] = 271,
    [86] = 273,
    [87] = 273,
    [88] = 279,
    [89] = 282,
    [90] = 85,
    [91] = 273,
    [92] = 279,
    [93] = 282,
    [94] = 85,
    [95] = 270,
    [96] = 271,
    [97] = 284,
    [98] = 291,
    [99] = 291,
    [100] = 85,
    [101] = 293,
    [102] = 284,
    [103] = 284,
    [104] = 291,
    [105] = 293,
    [106] = 284,
    [107] = 85,
    [108] = 294,
    [109] = 284,
    [110] = 295,
    [111] = 295,
    [112] = 299,
    [113] = 299,
    [114] = 300,
    [115] = 301,
    [116] = 117,
    [117] = 117,
    [118] = 302,
    [119] = 295,
    [120] = 295,
    [121] = 302,
    [122] = 302,
    [123] = 117,
    [124] = 295,
    [125] = 303,
    [126] = 295,
    [127] = 295,
    [128] = 295,
    [129] = 117,
    [130] = 295,
    [131] = 304,
    [132] = 304,
    [133] = 249,
    [134] = 299,
    [135] = 300,
    [136] = 295,
    [137] = 301,
    [138] = 117,
    [139] = 117,
    [140] = 306,
    [141] = 304,
    [142] = 304,
    [143] = 306,
    [144] = 306,
    [145] = 117,
    [146] = 304,
    [147] = 307,
    [148] = 304,
    [149] = 304,
    [150] = 304,
    [151] = 117,
    [152] = 304,
    [153] = 249,
    [154] = 304,
    [155] = 304,
    [156] = 117,
    [157] = 307,
    [158] = 304,
    [159] = 295,
    [160] = 249,
    [161] = 301,
    [162] = 304,
    [163] = 249,
    [164] = 117,
    [165] = 299,
    [166] = 299,
    [167] = 117,
    [168] = 303,
    [169] = 295,
    [170] = 284,
    [171] = 85,
    [172] = 85,
    [173] = 291,
    [174] = 293,
    [175] = 85,
    [176] = 85,
    [177] = 85,
    [178] = 85,
    [179] = 85,
    [180] = 85,
    [181] = 85,
    [182] = 115,
    [183] = 115,
    [184] = 308,
    [185] = 308,
    [186] = 293,
    [187] = 301,
    [188] = 85,
    [189] = 320,
    [190] = 321,
    [191] = 321,
    [192] = 85,
    [193] = 308,
    [194] = 321,
    [195] = 308,
    [196] = 330,
    [197] = 330,
    [198] = 299,
    [199] = 300,
    [200] = 301,
    [201] = 117,
    [202] = 117,
    [203] = 331,
    [204] = 330,
    [205] = 330,
    [206] = 331,
    [207] = 331,
    [208] = 117,
    [209] = 330,
    [210] = 332,
    [211] = 330,
    [212] = 330,
    [213] = 330,
    [214] = 117,
    [215] = 330,
    [216] = 249,
    [217] = 330,
    [218] = 330,
    [219] = 117,
    [220] = 332,
    [221] = 330,
    [222] = 320,
    [223] = 301,
    [224] = 321,
    [225] = 308,
    [226] = 330,
    [227] = 320,
    [228] = 321,
    [229] = 308,
    [230] = 85,
    [231] = 293,
    [232] = 333,
    [233] = 338,
    [234] = 338,
    [235] = 338,
    [236] = 338,
    [237] = 301,
    [238] = 232,
    [239] = 301,
    [240] = 338,
    [241] = 338,
    [242] = 339,
    [243] = 339,
    [244] = 299,
    [245] = 300,
    [246] = 301,
    [247] = 117,
    [248] = 117,
    [249] = 341,
    [250] = 339,
    [251] = 339,
    [252] = 341,
    [253] = 341,
    [254] = 117,
    [255] = 339,
    [256] = 342,
    [257] = 339,
    [258] = 339,
    [259] = 339,
    [260] = 117,
    [261] = 339,
    [262] = 249,
    [263] = 339,
    [264] = 339,
    [265] = 117,
    [266] = 342,
    [267] = 339,
    [268] = 117,
    [269] = 338,
    [270] = 338,
    [271] = 301,
    [272] = 338,
    [273] = 339,
    [274] = 117,
    [275] = 338,
    [276] = 338,
    [277] = 338,
    [278] = 343,
    [279] = 391,
    [280] = 392,
    [281] = 391,
    [282] = 249,
    [283] = 338,
    [284] = 343,
    [285] = 391,
    [286] = 392,
    [287] = 391,
    [288] = 249,
    [289] = 249,
    [290] = 338,
    [291] = 249,
    [292] = 338,
    [293] = 339,
    [294] = 117,
    [295] = 338,
    [296] = 398,
    [297] = 338,
    [298] = 333,
    [299] = 398,
    [300] = 338,
    [301] = 333,
    [302] = 117,
    [303] = 333,
    [304] = 333,
    [305] = 333,
    [306] = 115,
    [307] = 85,
    [308] = 115,
    [309] = 405,
    [310] = 405,
    [311] = 405,
    [312] = 405,
    [313] = 301,
    [314] = 232,
    [315] = 301,
    [316] = 405,
    [317] = 405,
    [318] = 339,
    [319] = 117,
    [320] = 405,
    [321] = 405,
    [322] = 301,
    [323] = 405,
    [324] = 339,
    [325] = 117,
    [326] = 405,
    [327] = 405,
    [328] = 405,
    [329] = 343,
    [330] = 391,
    [331] = 392,
    [332] = 391,
    [333] = 249,
    [334] = 405,
    [335] = 405,
    [336] = 249,
    [337] = 405,
    [338] = 339,
    [339] = 117,
    [340] = 405,
    [341] = 398,
    [342] = 405,
    [343] = 115,
    [344] = 398,
    [345] = 405,
    [346] = 115,
    [347] = 117,
    [348] = 115,
    [349] = 115,
    [350] = 115,
    [351] = 406,
    [352] = 291,
    [353] = 293,
    [354] = 406,
    [355] = 406,
    [356] = 408,
    [357] = 85,
    [358] = 409,
    [359] = 291,
    [360] = 293,
    [361] = 409,
    [362] = 409,
    [363] = 117,
    [364] = 85,
    [365] = 115,
    [366] = 85,
    [367] = 410,
    [368] = 115,
    [369] = 410,
    [370] = 117,
    [371] = 411,
    [372] = 411,
    [373] = 414,
    [374] = 299,
    [375] = 415,
    [376] = 416,
    [377] = 301,
    [378] = 301,
    [379] = 301,
    [380] = 117,
    [381] = 117,
    [382] = 417,
    [383] = 411,
    [384] = 411,
    [385] = 418,
    [386] = 418,
    [387] = 117,
    [388] = 411,
    [389] = 419,
    [390] = 411,
    [391] = 300,
    [392] = 249,
    [393] = 411,
    [394] = 411,
    [395] = 411,
    [396] = 418,
    [397] = 411,
    [398] = 117,
    [399] = 411,
    [400] = 411,
    [401] = 420,
    [402] = 117,
    [403] = 117,
    [404] = 420,
    [405] = 420,
    [406] = 421,
    [407] = 421,
    [408] = 117,
    [409] = 420,
    [410] = 115,
    [411] = 85,
    [412] = 117,
    [413] = 115,
    [414] = 85,
    [415] = 410,
    [416] = 249,
    [417] = 422,
    [418] = 415,
    [419] = 301,
    [420] = 423,
    [421] = 410,
    [422] = 424,
    [423] = 410,
    [424] = 249,
    [425] = 249,
    [426] = 424,
    [427] = 249,
    [428] = 410,
    [429] = 117,
    [430] = 425,
    [431] = 425,
    [432] = 410,
    [433] = 115,
    [434] = 85,
    [435] = 415,
    [436] = 410,
    [437] = 424,
    [438] = 249,
    [439] = 410,
    [440] = 426,
    [441] = 115,
    [442] = 426,
    [443] = 115,
    [444] = 117,
    [445] = 419,
    [446] = 411,
    [447] = 420,
    [448] = 117,
    [449] = 115,
    [450] = 85,
    [451] = 320,
    [452] = 320,
    [453] = 115,
    [454] = 117,
    [455] = 115,
    [456] = 115,
    [457] = 427,
    [458] = 427,
    [459] = 117,
    [460] = 115,
    [461] = 410,
    [462] = 291,
    [463] = 293,
    [464] = 410,
    [465] = 410,
    [466] = 85,
    [467] = 415,
    [468] = 410,
    [469] = 426,
    [470] = 115,
    [471] = 1,
    [472] = 84,
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
        [sym__expression] = ACTIONS(SHIFT(3)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(6)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_program, 0)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_repeat] = ACTIONS(SHIFT(9)),
        [anon_sym_if] = ACTIONS(SHIFT(10)),
        [anon_sym_guard] = ACTIONS(SHIFT(11)),
        [anon_sym_switch] = ACTIONS(SHIFT(12)),
        [anon_sym_break] = ACTIONS(SHIFT(13)),
        [anon_sym_continue] = ACTIONS(SHIFT(14)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(3)),
        [anon_sym_return] = ACTIONS(SHIFT(15)),
        [anon_sym_throw] = ACTIONS(SHIFT(16)),
        [anon_sym_defer] = ACTIONS(SHIFT(17)),
        [anon_sym_do] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(20)),
        [anon_sym_import] = ACTIONS(SHIFT(21)),
        [sym_identifier] = ACTIONS(SHIFT(22)),
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
        [sym__expression] = ACTIONS(SHIFT(3)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(472)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_repeat] = ACTIONS(SHIFT(9)),
        [anon_sym_if] = ACTIONS(SHIFT(10)),
        [anon_sym_guard] = ACTIONS(SHIFT(11)),
        [anon_sym_switch] = ACTIONS(SHIFT(12)),
        [anon_sym_break] = ACTIONS(SHIFT(13)),
        [anon_sym_continue] = ACTIONS(SHIFT(14)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(3)),
        [anon_sym_return] = ACTIONS(SHIFT(15)),
        [anon_sym_throw] = ACTIONS(SHIFT(16)),
        [anon_sym_defer] = ACTIONS(SHIFT(17)),
        [anon_sym_do] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(20)),
        [anon_sym_import] = ACTIONS(SHIFT(21)),
        [sym_identifier] = ACTIONS(SHIFT(22)),
    },
    [3] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(471)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(SHIFT(471)),
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
        [sym__for_init] = ACTIONS(SHIFT(367)),
        [sym__for_condition] = ACTIONS(SHIFT(368)),
        [sym_variable_declaration] = ACTIONS(SHIFT(369)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(370)),
        [sym__pattern] = ACTIONS(SHIFT(371)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(372)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(372)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(372)),
        [sym_optional_pattern] = ACTIONS(SHIFT(372)),
        [sym_is_pattern] = ACTIONS(SHIFT(372)),
        [sym_as_pattern] = ACTIONS(SHIFT(372)),
        [sym__expression] = ACTIONS(SHIFT(373)),
        [sym__expression_list] = ACTIONS(SHIFT(369)),
        [sym__type_identifier] = ACTIONS(SHIFT(374)),
        [sym__type_name] = ACTIONS(SHIFT(113)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(375)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(376)),
        [anon_sym_case] = ACTIONS(SHIFT(377)),
        [anon_sym_let] = ACTIONS(SHIFT(378)),
        [anon_sym_var] = ACTIONS(SHIFT(379)),
        [anon_sym_DOT] = ACTIONS(SHIFT(380)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(372)),
        [anon_sym_is] = ACTIONS(SHIFT(381)),
        [sym_identifier] = ACTIONS(SHIFT(382)),
    },
    [8] = {
        [sym__condition_clause] = ACTIONS(SHIFT(365)),
        [sym__condition] = ACTIONS(SHIFT(309)),
        [sym_availability_condition] = ACTIONS(SHIFT(310)),
        [sym_case_condition] = ACTIONS(SHIFT(311)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(311)),
        [sym__expression] = ACTIONS(SHIFT(312)),
        [anon_sym_case] = ACTIONS(SHIFT(313)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(314)),
        [anon_sym_let] = ACTIONS(SHIFT(315)),
        [anon_sym_var] = ACTIONS(SHIFT(315)),
        [sym_identifier] = ACTIONS(SHIFT(316)),
    },
    [9] = {
        [sym__code_block] = ACTIONS(SHIFT(358)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(359)),
    },
    [10] = {
        [sym__condition_clause] = ACTIONS(SHIFT(308)),
        [sym__condition] = ACTIONS(SHIFT(309)),
        [sym_availability_condition] = ACTIONS(SHIFT(310)),
        [sym_case_condition] = ACTIONS(SHIFT(311)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(311)),
        [sym__expression] = ACTIONS(SHIFT(312)),
        [anon_sym_case] = ACTIONS(SHIFT(313)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(314)),
        [anon_sym_let] = ACTIONS(SHIFT(315)),
        [anon_sym_var] = ACTIONS(SHIFT(315)),
        [sym_identifier] = ACTIONS(SHIFT(316)),
    },
    [11] = {
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
    [12] = {
        [sym__expression] = ACTIONS(SHIFT(182)),
        [sym_identifier] = ACTIONS(SHIFT(183)),
    },
    [13] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_break_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(181)),
    },
    [14] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_continue_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_continue_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(180)),
    },
    [15] = {
        [sym__expression] = ACTIONS(SHIFT(179)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_return_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_return_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(178)),
    },
    [16] = {
        [sym__expression] = ACTIONS(SHIFT(177)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_throw_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_throw_statement, 1)),
        [sym_identifier] = ACTIONS(SHIFT(178)),
    },
    [17] = {
        [sym__code_block] = ACTIONS(SHIFT(172)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(173)),
    },
    [18] = {
        [sym__code_block] = ACTIONS(SHIFT(97)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(98)),
    },
    [19] = {
        [sym__build_configuration] = ACTIONS(SHIFT(35)),
        [sym_boolean_literal] = ACTIONS(SHIFT(36)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(37)),
        [anon_sym_os] = ACTIONS(SHIFT(38)),
        [anon_sym_arch] = ACTIONS(SHIFT(39)),
        [anon_sym_BANG] = ACTIONS(SHIFT(40)),
        [anon_sym_true] = ACTIONS(SHIFT(41)),
        [anon_sym_false] = ACTIONS(SHIFT(41)),
        [sym_identifier] = ACTIONS(SHIFT(36)),
    },
    [20] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_line_control_statement, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_line_control_statement, 1)),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(SHIFT(33)),
    },
    [21] = {
        [anon_sym_var] = ACTIONS(SHIFT(25)),
        [anon_sym_typealias] = ACTIONS(SHIFT(25)),
        [anon_sym_struct] = ACTIONS(SHIFT(25)),
        [anon_sym_class] = ACTIONS(SHIFT(25)),
        [anon_sym_enum] = ACTIONS(SHIFT(25)),
        [anon_sym_protocol] = ACTIONS(SHIFT(25)),
        [anon_sym_func] = ACTIONS(SHIFT(25)),
        [sym_identifier] = ACTIONS(SHIFT(26)),
        [sym_operator] = ACTIONS(SHIFT(26)),
    },
    [22] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(SHIFT(23)),
    },
    [23] = {
        [sym__loop_statement] = ACTIONS(SHIFT(24)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(24)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_repeat] = ACTIONS(SHIFT(9)),
        [anon_sym_if] = ACTIONS(SHIFT(10)),
    },
    [24] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_labeled_statement, 3)),
    },
    [25] = {
        [sym_identifier] = ACTIONS(SHIFT(31)),
        [sym_operator] = ACTIONS(SHIFT(31)),
    },
    [26] = {
        [aux_sym_import_declaration_repeat1] = ACTIONS(SHIFT(27)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_import_declaration, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_import_declaration, 2)),
        [anon_sym_DOT] = ACTIONS(SHIFT(28)),
    },
    [27] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_import_declaration, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_import_declaration, 3)),
    },
    [28] = {
        [sym_identifier] = ACTIONS(SHIFT(29)),
        [sym_operator] = ACTIONS(SHIFT(29)),
    },
    [29] = {
        [aux_sym_import_declaration_repeat1] = ACTIONS(SHIFT(30)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_import_declaration_repeat1, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_import_declaration_repeat1, 2)),
        [anon_sym_DOT] = ACTIONS(SHIFT(28)),
    },
    [30] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_import_declaration_repeat1, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_import_declaration_repeat1, 3)),
    },
    [31] = {
        [aux_sym_import_declaration_repeat1] = ACTIONS(SHIFT(32)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_import_declaration, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_import_declaration, 3)),
        [anon_sym_DOT] = ACTIONS(SHIFT(28)),
    },
    [32] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_import_declaration, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_import_declaration, 4)),
    },
    [33] = {
        [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LPAREN_BSLASH_BSLASH_BSLASH_BSLASH_LPAREN_LBRACK_BSLASH_BSLASH0tnr_SQUOTE_BSLASH_DQUOTE_RBRACK_PIPEu_BSLASH_BSLASH_LBRACE_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA8_RBRACE_BSLASH_BSLASH_RBRACE_RPAREN_RPAREN_PIPE_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_BSLASH_BSLASH_BSLASH_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(SHIFT(34)),
    },
    [34] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_line_control_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_line_control_statement, 3)),
    },
    [35] = {
        [sym__statement] = ACTIONS(SHIFT(70)),
        [sym__loop_statement] = ACTIONS(SHIFT(71)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(71)),
        [sym_guard_statement] = ACTIONS(SHIFT(71)),
        [sym_switch_statement] = ACTIONS(SHIFT(71)),
        [sym_labeled_statement] = ACTIONS(SHIFT(71)),
        [sym_break_statement] = ACTIONS(SHIFT(71)),
        [sym_continue_statement] = ACTIONS(SHIFT(71)),
        [sym_return_statement] = ACTIONS(SHIFT(71)),
        [sym_throw_statement] = ACTIONS(SHIFT(71)),
        [sym_defer_statement] = ACTIONS(SHIFT(71)),
        [sym_do_statement] = ACTIONS(SHIFT(71)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(71)),
        [sym_line_control_statement] = ACTIONS(SHIFT(71)),
        [sym__declaration] = ACTIONS(SHIFT(71)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(71)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(72)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(SHIFT(73)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_repeat] = ACTIONS(SHIFT(9)),
        [anon_sym_if] = ACTIONS(SHIFT(10)),
        [anon_sym_guard] = ACTIONS(SHIFT(11)),
        [anon_sym_switch] = ACTIONS(SHIFT(12)),
        [anon_sym_break] = ACTIONS(SHIFT(13)),
        [anon_sym_continue] = ACTIONS(SHIFT(14)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(71)),
        [anon_sym_return] = ACTIONS(SHIFT(15)),
        [anon_sym_throw] = ACTIONS(SHIFT(16)),
        [anon_sym_defer] = ACTIONS(SHIFT(17)),
        [anon_sym_do] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDelseif] = ACTIONS(SHIFT(74)),
        [anon_sym_POUNDelse] = ACTIONS(SHIFT(75)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(76)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(43)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(44)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(20)),
        [anon_sym_import] = ACTIONS(SHIFT(21)),
        [sym_identifier] = ACTIONS(SHIFT(22)),
    },
    [36] = {
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
        [sym__expression] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__build_configuration, 1)),
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
    [37] = {
        [sym__build_configuration] = ACTIONS(SHIFT(51)),
        [sym_boolean_literal] = ACTIONS(SHIFT(52)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(53)),
        [anon_sym_os] = ACTIONS(SHIFT(54)),
        [anon_sym_arch] = ACTIONS(SHIFT(55)),
        [anon_sym_BANG] = ACTIONS(SHIFT(56)),
        [anon_sym_true] = ACTIONS(SHIFT(57)),
        [anon_sym_false] = ACTIONS(SHIFT(57)),
        [sym_identifier] = ACTIONS(SHIFT(52)),
    },
    [38] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(50)),
    },
    [39] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(47)),
    },
    [40] = {
        [sym__build_configuration] = ACTIONS(SHIFT(42)),
        [sym_boolean_literal] = ACTIONS(SHIFT(36)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(37)),
        [anon_sym_os] = ACTIONS(SHIFT(38)),
        [anon_sym_arch] = ACTIONS(SHIFT(39)),
        [anon_sym_BANG] = ACTIONS(SHIFT(40)),
        [anon_sym_true] = ACTIONS(SHIFT(41)),
        [anon_sym_false] = ACTIONS(SHIFT(41)),
        [sym_identifier] = ACTIONS(SHIFT(36)),
    },
    [41] = {
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
        [sym__expression] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_while] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
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
    [42] = {
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
        [sym__expression] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__build_configuration, 2)),
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
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(43)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(44)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_import] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__build_configuration, 2)),
    },
    [43] = {
        [sym__build_configuration] = ACTIONS(SHIFT(46)),
        [sym_boolean_literal] = ACTIONS(SHIFT(36)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(37)),
        [anon_sym_os] = ACTIONS(SHIFT(38)),
        [anon_sym_arch] = ACTIONS(SHIFT(39)),
        [anon_sym_BANG] = ACTIONS(SHIFT(40)),
        [anon_sym_true] = ACTIONS(SHIFT(41)),
        [anon_sym_false] = ACTIONS(SHIFT(41)),
        [sym_identifier] = ACTIONS(SHIFT(36)),
    },
    [44] = {
        [sym__build_configuration] = ACTIONS(SHIFT(45)),
        [sym_boolean_literal] = ACTIONS(SHIFT(36)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(37)),
        [anon_sym_os] = ACTIONS(SHIFT(38)),
        [anon_sym_arch] = ACTIONS(SHIFT(39)),
        [anon_sym_BANG] = ACTIONS(SHIFT(40)),
        [anon_sym_true] = ACTIONS(SHIFT(41)),
        [anon_sym_false] = ACTIONS(SHIFT(41)),
        [sym_identifier] = ACTIONS(SHIFT(36)),
    },
    [45] = {
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
        [sym__expression] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_for] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_while] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
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
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(43)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_import] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [sym_identifier] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
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
        [sym__expression] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_for] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_while] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
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
    [47] = {
        [anon_sym_i386] = ACTIONS(SHIFT(48)),
        [anon_sym_x86_64] = ACTIONS(SHIFT(48)),
        [anon_sym_arm] = ACTIONS(SHIFT(48)),
        [anon_sym_arm64] = ACTIONS(SHIFT(48)),
    },
    [48] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(49)),
    },
    [49] = {
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
        [sym__expression] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__build_configuration, 4)),
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
    [50] = {
        [anon_sym_iOS] = ACTIONS(SHIFT(48)),
        [anon_sym_OSX] = ACTIONS(SHIFT(48)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(48)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(48)),
    },
    [51] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(69)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(59)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(60)),
    },
    [52] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE(sym__build_configuration, 1)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE(sym__build_configuration, 1)),
    },
    [53] = {
        [sym__build_configuration] = ACTIONS(SHIFT(67)),
        [sym_boolean_literal] = ACTIONS(SHIFT(52)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(53)),
        [anon_sym_os] = ACTIONS(SHIFT(54)),
        [anon_sym_arch] = ACTIONS(SHIFT(55)),
        [anon_sym_BANG] = ACTIONS(SHIFT(56)),
        [anon_sym_true] = ACTIONS(SHIFT(57)),
        [anon_sym_false] = ACTIONS(SHIFT(57)),
        [sym_identifier] = ACTIONS(SHIFT(52)),
    },
    [54] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(66)),
    },
    [55] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(63)),
    },
    [56] = {
        [sym__build_configuration] = ACTIONS(SHIFT(58)),
        [sym_boolean_literal] = ACTIONS(SHIFT(52)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(53)),
        [anon_sym_os] = ACTIONS(SHIFT(54)),
        [anon_sym_arch] = ACTIONS(SHIFT(55)),
        [anon_sym_BANG] = ACTIONS(SHIFT(56)),
        [anon_sym_true] = ACTIONS(SHIFT(57)),
        [anon_sym_false] = ACTIONS(SHIFT(57)),
        [sym_identifier] = ACTIONS(SHIFT(52)),
    },
    [57] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE(sym_boolean_literal, 1)),
    },
    [58] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__build_configuration, 2)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(59)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(60)),
    },
    [59] = {
        [sym__build_configuration] = ACTIONS(SHIFT(62)),
        [sym_boolean_literal] = ACTIONS(SHIFT(52)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(53)),
        [anon_sym_os] = ACTIONS(SHIFT(54)),
        [anon_sym_arch] = ACTIONS(SHIFT(55)),
        [anon_sym_BANG] = ACTIONS(SHIFT(56)),
        [anon_sym_true] = ACTIONS(SHIFT(57)),
        [anon_sym_false] = ACTIONS(SHIFT(57)),
        [sym_identifier] = ACTIONS(SHIFT(52)),
    },
    [60] = {
        [sym__build_configuration] = ACTIONS(SHIFT(61)),
        [sym_boolean_literal] = ACTIONS(SHIFT(52)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(53)),
        [anon_sym_os] = ACTIONS(SHIFT(54)),
        [anon_sym_arch] = ACTIONS(SHIFT(55)),
        [anon_sym_BANG] = ACTIONS(SHIFT(56)),
        [anon_sym_true] = ACTIONS(SHIFT(57)),
        [anon_sym_false] = ACTIONS(SHIFT(57)),
        [sym_identifier] = ACTIONS(SHIFT(52)),
    },
    [61] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(59)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
    },
    [62] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE_FRAGILE(sym__build_configuration, 3)),
    },
    [63] = {
        [anon_sym_i386] = ACTIONS(SHIFT(64)),
        [anon_sym_x86_64] = ACTIONS(SHIFT(64)),
        [anon_sym_arm] = ACTIONS(SHIFT(64)),
        [anon_sym_arm64] = ACTIONS(SHIFT(64)),
    },
    [64] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(65)),
    },
    [65] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE(sym__build_configuration, 4)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE(sym__build_configuration, 4)),
    },
    [66] = {
        [anon_sym_iOS] = ACTIONS(SHIFT(64)),
        [anon_sym_OSX] = ACTIONS(SHIFT(64)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(64)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(64)),
    },
    [67] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(68)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(59)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(60)),
    },
    [68] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_AMP_AMP] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_PIPE_PIPE] = ACTIONS(REDUCE(sym__build_configuration, 3)),
    },
    [69] = {
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
        [sym__expression] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__build_configuration, 3)),
        [anon_sym_while] = ACTIONS(REDUCE(sym__build_configuration, 3)),
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
    [70] = {
        [sym__statement] = ACTIONS(SHIFT(70)),
        [sym__loop_statement] = ACTIONS(SHIFT(71)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(71)),
        [sym_guard_statement] = ACTIONS(SHIFT(71)),
        [sym_switch_statement] = ACTIONS(SHIFT(71)),
        [sym_labeled_statement] = ACTIONS(SHIFT(71)),
        [sym_break_statement] = ACTIONS(SHIFT(71)),
        [sym_continue_statement] = ACTIONS(SHIFT(71)),
        [sym_return_statement] = ACTIONS(SHIFT(71)),
        [sym_throw_statement] = ACTIONS(SHIFT(71)),
        [sym_defer_statement] = ACTIONS(SHIFT(71)),
        [sym_do_statement] = ACTIONS(SHIFT(71)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(71)),
        [sym_line_control_statement] = ACTIONS(SHIFT(71)),
        [sym__declaration] = ACTIONS(SHIFT(71)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(71)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(96)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_repeat] = ACTIONS(SHIFT(9)),
        [anon_sym_if] = ACTIONS(SHIFT(10)),
        [anon_sym_guard] = ACTIONS(SHIFT(11)),
        [anon_sym_switch] = ACTIONS(SHIFT(12)),
        [anon_sym_break] = ACTIONS(SHIFT(13)),
        [anon_sym_continue] = ACTIONS(SHIFT(14)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(71)),
        [anon_sym_return] = ACTIONS(SHIFT(15)),
        [anon_sym_throw] = ACTIONS(SHIFT(16)),
        [anon_sym_defer] = ACTIONS(SHIFT(17)),
        [anon_sym_do] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDelseif] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(20)),
        [anon_sym_import] = ACTIONS(SHIFT(21)),
        [sym_identifier] = ACTIONS(SHIFT(22)),
    },
    [71] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(95)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(SHIFT(95)),
    },
    [72] = {
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(SHIFT(91)),
        [anon_sym_POUNDelseif] = ACTIONS(SHIFT(74)),
        [anon_sym_POUNDelse] = ACTIONS(SHIFT(88)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(80)),
    },
    [73] = {
        [anon_sym_POUNDelse] = ACTIONS(SHIFT(88)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(80)),
    },
    [74] = {
        [sym__build_configuration] = ACTIONS(SHIFT(84)),
        [sym_boolean_literal] = ACTIONS(SHIFT(36)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(37)),
        [anon_sym_os] = ACTIONS(SHIFT(38)),
        [anon_sym_arch] = ACTIONS(SHIFT(39)),
        [anon_sym_BANG] = ACTIONS(SHIFT(40)),
        [anon_sym_true] = ACTIONS(SHIFT(41)),
        [anon_sym_false] = ACTIONS(SHIFT(41)),
        [sym_identifier] = ACTIONS(SHIFT(36)),
    },
    [75] = {
        [sym__statement] = ACTIONS(SHIFT(77)),
        [sym__loop_statement] = ACTIONS(SHIFT(78)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(78)),
        [sym_guard_statement] = ACTIONS(SHIFT(78)),
        [sym_switch_statement] = ACTIONS(SHIFT(78)),
        [sym_labeled_statement] = ACTIONS(SHIFT(78)),
        [sym_break_statement] = ACTIONS(SHIFT(78)),
        [sym_continue_statement] = ACTIONS(SHIFT(78)),
        [sym_return_statement] = ACTIONS(SHIFT(78)),
        [sym_throw_statement] = ACTIONS(SHIFT(78)),
        [sym_defer_statement] = ACTIONS(SHIFT(78)),
        [sym_do_statement] = ACTIONS(SHIFT(78)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(78)),
        [sym_line_control_statement] = ACTIONS(SHIFT(78)),
        [sym__declaration] = ACTIONS(SHIFT(78)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(78)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(79)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_repeat] = ACTIONS(SHIFT(9)),
        [anon_sym_if] = ACTIONS(SHIFT(10)),
        [anon_sym_guard] = ACTIONS(SHIFT(11)),
        [anon_sym_switch] = ACTIONS(SHIFT(12)),
        [anon_sym_break] = ACTIONS(SHIFT(13)),
        [anon_sym_continue] = ACTIONS(SHIFT(14)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(78)),
        [anon_sym_return] = ACTIONS(SHIFT(15)),
        [anon_sym_throw] = ACTIONS(SHIFT(16)),
        [anon_sym_defer] = ACTIONS(SHIFT(17)),
        [anon_sym_do] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(80)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(20)),
        [anon_sym_import] = ACTIONS(SHIFT(21)),
        [sym_identifier] = ACTIONS(SHIFT(22)),
    },
    [76] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_build_configuration_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_build_configuration_statement, 3)),
    },
    [77] = {
        [sym__statement] = ACTIONS(SHIFT(77)),
        [sym__loop_statement] = ACTIONS(SHIFT(78)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(78)),
        [sym_guard_statement] = ACTIONS(SHIFT(78)),
        [sym_switch_statement] = ACTIONS(SHIFT(78)),
        [sym_labeled_statement] = ACTIONS(SHIFT(78)),
        [sym_break_statement] = ACTIONS(SHIFT(78)),
        [sym_continue_statement] = ACTIONS(SHIFT(78)),
        [sym_return_statement] = ACTIONS(SHIFT(78)),
        [sym_throw_statement] = ACTIONS(SHIFT(78)),
        [sym_defer_statement] = ACTIONS(SHIFT(78)),
        [sym_do_statement] = ACTIONS(SHIFT(78)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(78)),
        [sym_line_control_statement] = ACTIONS(SHIFT(78)),
        [sym__declaration] = ACTIONS(SHIFT(78)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(78)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(83)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_repeat] = ACTIONS(SHIFT(9)),
        [anon_sym_if] = ACTIONS(SHIFT(10)),
        [anon_sym_guard] = ACTIONS(SHIFT(11)),
        [anon_sym_switch] = ACTIONS(SHIFT(12)),
        [anon_sym_break] = ACTIONS(SHIFT(13)),
        [anon_sym_continue] = ACTIONS(SHIFT(14)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(78)),
        [anon_sym_return] = ACTIONS(SHIFT(15)),
        [anon_sym_throw] = ACTIONS(SHIFT(16)),
        [anon_sym_defer] = ACTIONS(SHIFT(17)),
        [anon_sym_do] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(20)),
        [anon_sym_import] = ACTIONS(SHIFT(21)),
        [sym_identifier] = ACTIONS(SHIFT(22)),
    },
    [78] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(82)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(SHIFT(82)),
    },
    [79] = {
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(81)),
    },
    [80] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_build_configuration_statement, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_build_configuration_statement, 4)),
    },
    [81] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_build_configuration_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_build_configuration_statement, 5)),
    },
    [82] = {
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
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
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
        [anon_sym_POUNDif] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_import] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [83] = {
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [84] = {
        [sym__statement] = ACTIONS(SHIFT(70)),
        [sym__loop_statement] = ACTIONS(SHIFT(71)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(71)),
        [sym_guard_statement] = ACTIONS(SHIFT(71)),
        [sym_switch_statement] = ACTIONS(SHIFT(71)),
        [sym_labeled_statement] = ACTIONS(SHIFT(71)),
        [sym_break_statement] = ACTIONS(SHIFT(71)),
        [sym_continue_statement] = ACTIONS(SHIFT(71)),
        [sym_return_statement] = ACTIONS(SHIFT(71)),
        [sym_throw_statement] = ACTIONS(SHIFT(71)),
        [sym_defer_statement] = ACTIONS(SHIFT(71)),
        [sym_do_statement] = ACTIONS(SHIFT(71)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(71)),
        [sym_line_control_statement] = ACTIONS(SHIFT(71)),
        [sym__declaration] = ACTIONS(SHIFT(71)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(71)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(85)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(SHIFT(86)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_repeat] = ACTIONS(SHIFT(9)),
        [anon_sym_if] = ACTIONS(SHIFT(10)),
        [anon_sym_guard] = ACTIONS(SHIFT(11)),
        [anon_sym_switch] = ACTIONS(SHIFT(12)),
        [anon_sym_break] = ACTIONS(SHIFT(13)),
        [anon_sym_continue] = ACTIONS(SHIFT(14)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(71)),
        [anon_sym_return] = ACTIONS(SHIFT(15)),
        [anon_sym_throw] = ACTIONS(SHIFT(16)),
        [anon_sym_defer] = ACTIONS(SHIFT(17)),
        [anon_sym_do] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDelseif] = ACTIONS(SHIFT(74)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 2)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 2)),
        [anon_sym_AMP_AMP] = ACTIONS(SHIFT(43)),
        [anon_sym_PIPE_PIPE] = ACTIONS(SHIFT(44)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(20)),
        [anon_sym_import] = ACTIONS(SHIFT(21)),
        [sym_identifier] = ACTIONS(SHIFT(22)),
    },
    [85] = {
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(SHIFT(87)),
        [anon_sym_POUNDelseif] = ACTIONS(SHIFT(74)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 3)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 3)),
    },
    [86] = {
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 3)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 3)),
    },
    [87] = {
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 4)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_build_configuration_statement_repeat1, 4)),
    },
    [88] = {
        [sym__statement] = ACTIONS(SHIFT(77)),
        [sym__loop_statement] = ACTIONS(SHIFT(78)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(78)),
        [sym_guard_statement] = ACTIONS(SHIFT(78)),
        [sym_switch_statement] = ACTIONS(SHIFT(78)),
        [sym_labeled_statement] = ACTIONS(SHIFT(78)),
        [sym_break_statement] = ACTIONS(SHIFT(78)),
        [sym_continue_statement] = ACTIONS(SHIFT(78)),
        [sym_return_statement] = ACTIONS(SHIFT(78)),
        [sym_throw_statement] = ACTIONS(SHIFT(78)),
        [sym_defer_statement] = ACTIONS(SHIFT(78)),
        [sym_do_statement] = ACTIONS(SHIFT(78)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(78)),
        [sym_line_control_statement] = ACTIONS(SHIFT(78)),
        [sym__declaration] = ACTIONS(SHIFT(78)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(78)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(89)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_repeat] = ACTIONS(SHIFT(9)),
        [anon_sym_if] = ACTIONS(SHIFT(10)),
        [anon_sym_guard] = ACTIONS(SHIFT(11)),
        [anon_sym_switch] = ACTIONS(SHIFT(12)),
        [anon_sym_break] = ACTIONS(SHIFT(13)),
        [anon_sym_continue] = ACTIONS(SHIFT(14)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(78)),
        [anon_sym_return] = ACTIONS(SHIFT(15)),
        [anon_sym_throw] = ACTIONS(SHIFT(16)),
        [anon_sym_defer] = ACTIONS(SHIFT(17)),
        [anon_sym_do] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(81)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(20)),
        [anon_sym_import] = ACTIONS(SHIFT(21)),
        [sym_identifier] = ACTIONS(SHIFT(22)),
    },
    [89] = {
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(90)),
    },
    [90] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_build_configuration_statement, 6)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_build_configuration_statement, 6)),
    },
    [91] = {
        [anon_sym_POUNDelse] = ACTIONS(SHIFT(92)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(81)),
    },
    [92] = {
        [sym__statement] = ACTIONS(SHIFT(77)),
        [sym__loop_statement] = ACTIONS(SHIFT(78)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(78)),
        [sym_guard_statement] = ACTIONS(SHIFT(78)),
        [sym_switch_statement] = ACTIONS(SHIFT(78)),
        [sym_labeled_statement] = ACTIONS(SHIFT(78)),
        [sym_break_statement] = ACTIONS(SHIFT(78)),
        [sym_continue_statement] = ACTIONS(SHIFT(78)),
        [sym_return_statement] = ACTIONS(SHIFT(78)),
        [sym_throw_statement] = ACTIONS(SHIFT(78)),
        [sym_defer_statement] = ACTIONS(SHIFT(78)),
        [sym_do_statement] = ACTIONS(SHIFT(78)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(78)),
        [sym_line_control_statement] = ACTIONS(SHIFT(78)),
        [sym__declaration] = ACTIONS(SHIFT(78)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(78)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(93)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_repeat] = ACTIONS(SHIFT(9)),
        [anon_sym_if] = ACTIONS(SHIFT(10)),
        [anon_sym_guard] = ACTIONS(SHIFT(11)),
        [anon_sym_switch] = ACTIONS(SHIFT(12)),
        [anon_sym_break] = ACTIONS(SHIFT(13)),
        [anon_sym_continue] = ACTIONS(SHIFT(14)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(78)),
        [anon_sym_return] = ACTIONS(SHIFT(15)),
        [anon_sym_throw] = ACTIONS(SHIFT(16)),
        [anon_sym_defer] = ACTIONS(SHIFT(17)),
        [anon_sym_do] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(90)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(20)),
        [anon_sym_import] = ACTIONS(SHIFT(21)),
        [sym_identifier] = ACTIONS(SHIFT(22)),
    },
    [93] = {
        [anon_sym_POUNDendif] = ACTIONS(SHIFT(94)),
    },
    [94] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_build_configuration_statement, 7)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_build_configuration_statement, 7)),
    },
    [95] = {
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
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
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
        [anon_sym_POUNDif] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDelseif] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_import] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [96] = {
        [aux_sym_build_configuration_statement_repeat1] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_POUNDelseif] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_POUNDelse] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_POUNDendif] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [97] = {
        [sym_catch_clause] = ACTIONS(SHIFT(106)),
        [aux_sym_do_statement_repeat1] = ACTIONS(SHIFT(107)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_do_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_do_statement, 2)),
        [anon_sym_catch] = ACTIONS(SHIFT(108)),
    },
    [98] = {
        [sym__statement] = ACTIONS(SHIFT(99)),
        [sym__loop_statement] = ACTIONS(SHIFT(100)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(100)),
        [sym_guard_statement] = ACTIONS(SHIFT(100)),
        [sym_switch_statement] = ACTIONS(SHIFT(100)),
        [sym_labeled_statement] = ACTIONS(SHIFT(100)),
        [sym_break_statement] = ACTIONS(SHIFT(100)),
        [sym_continue_statement] = ACTIONS(SHIFT(100)),
        [sym_return_statement] = ACTIONS(SHIFT(100)),
        [sym_throw_statement] = ACTIONS(SHIFT(100)),
        [sym_defer_statement] = ACTIONS(SHIFT(100)),
        [sym_do_statement] = ACTIONS(SHIFT(100)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(100)),
        [sym_line_control_statement] = ACTIONS(SHIFT(100)),
        [sym__declaration] = ACTIONS(SHIFT(100)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(100)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(101)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_repeat] = ACTIONS(SHIFT(9)),
        [anon_sym_if] = ACTIONS(SHIFT(10)),
        [anon_sym_guard] = ACTIONS(SHIFT(11)),
        [anon_sym_switch] = ACTIONS(SHIFT(12)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(102)),
        [anon_sym_break] = ACTIONS(SHIFT(13)),
        [anon_sym_continue] = ACTIONS(SHIFT(14)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(100)),
        [anon_sym_return] = ACTIONS(SHIFT(15)),
        [anon_sym_throw] = ACTIONS(SHIFT(16)),
        [anon_sym_defer] = ACTIONS(SHIFT(17)),
        [anon_sym_do] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(20)),
        [anon_sym_import] = ACTIONS(SHIFT(21)),
        [sym_identifier] = ACTIONS(SHIFT(22)),
    },
    [99] = {
        [sym__statement] = ACTIONS(SHIFT(99)),
        [sym__loop_statement] = ACTIONS(SHIFT(100)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(100)),
        [sym_guard_statement] = ACTIONS(SHIFT(100)),
        [sym_switch_statement] = ACTIONS(SHIFT(100)),
        [sym_labeled_statement] = ACTIONS(SHIFT(100)),
        [sym_break_statement] = ACTIONS(SHIFT(100)),
        [sym_continue_statement] = ACTIONS(SHIFT(100)),
        [sym_return_statement] = ACTIONS(SHIFT(100)),
        [sym_throw_statement] = ACTIONS(SHIFT(100)),
        [sym_defer_statement] = ACTIONS(SHIFT(100)),
        [sym_do_statement] = ACTIONS(SHIFT(100)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(100)),
        [sym_line_control_statement] = ACTIONS(SHIFT(100)),
        [sym__declaration] = ACTIONS(SHIFT(100)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(100)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(105)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_repeat] = ACTIONS(SHIFT(9)),
        [anon_sym_if] = ACTIONS(SHIFT(10)),
        [anon_sym_guard] = ACTIONS(SHIFT(11)),
        [anon_sym_switch] = ACTIONS(SHIFT(12)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_break] = ACTIONS(SHIFT(13)),
        [anon_sym_continue] = ACTIONS(SHIFT(14)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(100)),
        [anon_sym_return] = ACTIONS(SHIFT(15)),
        [anon_sym_throw] = ACTIONS(SHIFT(16)),
        [anon_sym_defer] = ACTIONS(SHIFT(17)),
        [anon_sym_do] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(20)),
        [anon_sym_import] = ACTIONS(SHIFT(21)),
        [sym_identifier] = ACTIONS(SHIFT(22)),
    },
    [100] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(104)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(SHIFT(104)),
    },
    [101] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(103)),
    },
    [102] = {
        [sym_catch_clause] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_do_statement_repeat1] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_catch] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [103] = {
        [sym_catch_clause] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_do_statement_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_catch] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [104] = {
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
        [anon_sym_POUNDif] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_import] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [105] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [106] = {
        [sym_catch_clause] = ACTIONS(SHIFT(106)),
        [aux_sym_do_statement_repeat1] = ACTIONS(SHIFT(171)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_do_statement_repeat1, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_do_statement_repeat1, 1)),
        [anon_sym_catch] = ACTIONS(SHIFT(108)),
    },
    [107] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_do_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_do_statement, 3)),
    },
    [108] = {
        [sym__code_block] = ACTIONS(SHIFT(109)),
        [sym__pattern] = ACTIONS(SHIFT(110)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(111)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(111)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(111)),
        [sym_optional_pattern] = ACTIONS(SHIFT(111)),
        [sym_is_pattern] = ACTIONS(SHIFT(111)),
        [sym_as_pattern] = ACTIONS(SHIFT(111)),
        [sym__expression] = ACTIONS(SHIFT(111)),
        [sym__type_identifier] = ACTIONS(SHIFT(112)),
        [sym__type_name] = ACTIONS(SHIFT(113)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(114)),
        [anon_sym_let] = ACTIONS(SHIFT(115)),
        [anon_sym_var] = ACTIONS(SHIFT(115)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(98)),
        [anon_sym_DOT] = ACTIONS(SHIFT(116)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(111)),
        [anon_sym_is] = ACTIONS(SHIFT(117)),
        [sym_identifier] = ACTIONS(SHIFT(118)),
    },
    [109] = {
        [sym_catch_clause] = ACTIONS(REDUCE(sym_catch_clause, 2)),
        [aux_sym_do_statement_repeat1] = ACTIONS(REDUCE(sym_catch_clause, 2)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_catch_clause, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_catch_clause, 2)),
        [anon_sym_catch] = ACTIONS(REDUCE(sym_catch_clause, 2)),
    },
    [110] = {
        [sym__code_block] = ACTIONS(SHIFT(170)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(98)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(128)),
        [anon_sym_as] = ACTIONS(SHIFT(129)),
    },
    [111] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [112] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(167)),
    },
    [113] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(164)),
    },
    [114] = {
        [sym__pattern] = ACTIONS(SHIFT(131)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(132)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(132)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(133)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(132)),
        [sym_optional_pattern] = ACTIONS(SHIFT(132)),
        [sym_is_pattern] = ACTIONS(SHIFT(132)),
        [sym_as_pattern] = ACTIONS(SHIFT(132)),
        [sym__expression] = ACTIONS(SHIFT(132)),
        [sym__type_identifier] = ACTIONS(SHIFT(134)),
        [sym__type_name] = ACTIONS(SHIFT(113)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(135)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(136)),
        [anon_sym_let] = ACTIONS(SHIFT(137)),
        [anon_sym_var] = ACTIONS(SHIFT(137)),
        [anon_sym_DOT] = ACTIONS(SHIFT(138)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(132)),
        [anon_sym_is] = ACTIONS(SHIFT(139)),
        [sym_identifier] = ACTIONS(SHIFT(140)),
    },
    [115] = {
        [sym__pattern] = ACTIONS(SHIFT(127)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(111)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(111)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(111)),
        [sym_optional_pattern] = ACTIONS(SHIFT(111)),
        [sym_is_pattern] = ACTIONS(SHIFT(111)),
        [sym_as_pattern] = ACTIONS(SHIFT(111)),
        [sym__expression] = ACTIONS(SHIFT(111)),
        [sym__type_identifier] = ACTIONS(SHIFT(112)),
        [sym__type_name] = ACTIONS(SHIFT(113)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(114)),
        [anon_sym_let] = ACTIONS(SHIFT(115)),
        [anon_sym_var] = ACTIONS(SHIFT(115)),
        [anon_sym_DOT] = ACTIONS(SHIFT(116)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(111)),
        [anon_sym_is] = ACTIONS(SHIFT(117)),
        [sym_identifier] = ACTIONS(SHIFT(118)),
    },
    [116] = {
        [sym_identifier] = ACTIONS(SHIFT(125)),
    },
    [117] = {
        [sym_type] = ACTIONS(SHIFT(119)),
        [sym__type_identifier] = ACTIONS(SHIFT(120)),
        [sym__type_name] = ACTIONS(SHIFT(121)),
        [sym_identifier] = ACTIONS(SHIFT(122)),
    },
    [118] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [119] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [120] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [121] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(123)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [122] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [123] = {
        [sym__type_identifier] = ACTIONS(SHIFT(124)),
        [sym__type_name] = ACTIONS(SHIFT(121)),
        [sym_identifier] = ACTIONS(SHIFT(122)),
    },
    [124] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [125] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(126)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(114)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [126] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [127] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(128)),
        [anon_sym_as] = ACTIONS(SHIFT(129)),
    },
    [128] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [129] = {
        [sym_type] = ACTIONS(SHIFT(130)),
        [sym__type_identifier] = ACTIONS(SHIFT(120)),
        [sym__type_name] = ACTIONS(SHIFT(121)),
        [sym_identifier] = ACTIONS(SHIFT(122)),
    },
    [130] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [131] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(160)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(161)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(150)),
        [anon_sym_as] = ACTIONS(SHIFT(151)),
    },
    [132] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [133] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(159)),
    },
    [134] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(156)),
    },
    [135] = {
        [sym__pattern] = ACTIONS(SHIFT(131)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(132)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(132)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(153)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(132)),
        [sym_optional_pattern] = ACTIONS(SHIFT(132)),
        [sym_is_pattern] = ACTIONS(SHIFT(132)),
        [sym_as_pattern] = ACTIONS(SHIFT(132)),
        [sym__expression] = ACTIONS(SHIFT(132)),
        [sym__type_identifier] = ACTIONS(SHIFT(134)),
        [sym__type_name] = ACTIONS(SHIFT(113)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(135)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(154)),
        [anon_sym_let] = ACTIONS(SHIFT(137)),
        [anon_sym_var] = ACTIONS(SHIFT(137)),
        [anon_sym_DOT] = ACTIONS(SHIFT(138)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(132)),
        [anon_sym_is] = ACTIONS(SHIFT(139)),
        [sym_identifier] = ACTIONS(SHIFT(140)),
    },
    [136] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [137] = {
        [sym__pattern] = ACTIONS(SHIFT(149)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(132)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(132)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(132)),
        [sym_optional_pattern] = ACTIONS(SHIFT(132)),
        [sym_is_pattern] = ACTIONS(SHIFT(132)),
        [sym_as_pattern] = ACTIONS(SHIFT(132)),
        [sym__expression] = ACTIONS(SHIFT(132)),
        [sym__type_identifier] = ACTIONS(SHIFT(134)),
        [sym__type_name] = ACTIONS(SHIFT(113)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(135)),
        [anon_sym_let] = ACTIONS(SHIFT(137)),
        [anon_sym_var] = ACTIONS(SHIFT(137)),
        [anon_sym_DOT] = ACTIONS(SHIFT(138)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(132)),
        [anon_sym_is] = ACTIONS(SHIFT(139)),
        [sym_identifier] = ACTIONS(SHIFT(140)),
    },
    [138] = {
        [sym_identifier] = ACTIONS(SHIFT(147)),
    },
    [139] = {
        [sym_type] = ACTIONS(SHIFT(141)),
        [sym__type_identifier] = ACTIONS(SHIFT(142)),
        [sym__type_name] = ACTIONS(SHIFT(143)),
        [sym_identifier] = ACTIONS(SHIFT(144)),
    },
    [140] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [141] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [142] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [143] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(145)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [144] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [145] = {
        [sym__type_identifier] = ACTIONS(SHIFT(146)),
        [sym__type_name] = ACTIONS(SHIFT(143)),
        [sym_identifier] = ACTIONS(SHIFT(144)),
    },
    [146] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [147] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(148)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(135)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [148] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [149] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(150)),
        [anon_sym_as] = ACTIONS(SHIFT(151)),
    },
    [150] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [151] = {
        [sym_type] = ACTIONS(SHIFT(152)),
        [sym__type_identifier] = ACTIONS(SHIFT(142)),
        [sym__type_name] = ACTIONS(SHIFT(143)),
        [sym_identifier] = ACTIONS(SHIFT(144)),
    },
    [152] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [153] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(155)),
    },
    [154] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [155] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [156] = {
        [sym_identifier] = ACTIONS(SHIFT(157)),
    },
    [157] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(158)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(135)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [158] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [159] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [160] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__tuple_pattern_element_list, 2)),
    },
    [161] = {
        [sym__pattern] = ACTIONS(SHIFT(162)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(132)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(132)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(132)),
        [sym_optional_pattern] = ACTIONS(SHIFT(132)),
        [sym_is_pattern] = ACTIONS(SHIFT(132)),
        [sym_as_pattern] = ACTIONS(SHIFT(132)),
        [sym__expression] = ACTIONS(SHIFT(132)),
        [sym__type_identifier] = ACTIONS(SHIFT(134)),
        [sym__type_name] = ACTIONS(SHIFT(113)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(135)),
        [anon_sym_let] = ACTIONS(SHIFT(137)),
        [anon_sym_var] = ACTIONS(SHIFT(137)),
        [anon_sym_DOT] = ACTIONS(SHIFT(138)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(132)),
        [anon_sym_is] = ACTIONS(SHIFT(139)),
        [sym_identifier] = ACTIONS(SHIFT(140)),
    },
    [162] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(163)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(161)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(150)),
        [anon_sym_as] = ACTIONS(SHIFT(151)),
    },
    [163] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [164] = {
        [sym__type_identifier] = ACTIONS(SHIFT(165)),
        [sym__type_name] = ACTIONS(SHIFT(113)),
        [sym_identifier] = ACTIONS(SHIFT(166)),
    },
    [165] = {
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [166] = {
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [167] = {
        [sym_identifier] = ACTIONS(SHIFT(168)),
    },
    [168] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(169)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(114)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [169] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [170] = {
        [sym_catch_clause] = ACTIONS(REDUCE(sym_catch_clause, 3)),
        [aux_sym_do_statement_repeat1] = ACTIONS(REDUCE(sym_catch_clause, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_catch_clause, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_catch_clause, 3)),
        [anon_sym_catch] = ACTIONS(REDUCE(sym_catch_clause, 3)),
    },
    [171] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym_do_statement_repeat1, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(aux_sym_do_statement_repeat1, 2)),
    },
    [172] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_defer_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_defer_statement, 2)),
    },
    [173] = {
        [sym__statement] = ACTIONS(SHIFT(99)),
        [sym__loop_statement] = ACTIONS(SHIFT(100)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(100)),
        [sym_guard_statement] = ACTIONS(SHIFT(100)),
        [sym_switch_statement] = ACTIONS(SHIFT(100)),
        [sym_labeled_statement] = ACTIONS(SHIFT(100)),
        [sym_break_statement] = ACTIONS(SHIFT(100)),
        [sym_continue_statement] = ACTIONS(SHIFT(100)),
        [sym_return_statement] = ACTIONS(SHIFT(100)),
        [sym_throw_statement] = ACTIONS(SHIFT(100)),
        [sym_defer_statement] = ACTIONS(SHIFT(100)),
        [sym_do_statement] = ACTIONS(SHIFT(100)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(100)),
        [sym_line_control_statement] = ACTIONS(SHIFT(100)),
        [sym__declaration] = ACTIONS(SHIFT(100)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(100)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(174)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_repeat] = ACTIONS(SHIFT(9)),
        [anon_sym_if] = ACTIONS(SHIFT(10)),
        [anon_sym_guard] = ACTIONS(SHIFT(11)),
        [anon_sym_switch] = ACTIONS(SHIFT(12)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(175)),
        [anon_sym_break] = ACTIONS(SHIFT(13)),
        [anon_sym_continue] = ACTIONS(SHIFT(14)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(100)),
        [anon_sym_return] = ACTIONS(SHIFT(15)),
        [anon_sym_throw] = ACTIONS(SHIFT(16)),
        [anon_sym_defer] = ACTIONS(SHIFT(17)),
        [anon_sym_do] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(20)),
        [anon_sym_import] = ACTIONS(SHIFT(21)),
        [sym_identifier] = ACTIONS(SHIFT(22)),
    },
    [174] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(176)),
    },
    [175] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [176] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [177] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_throw_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_throw_statement, 2)),
    },
    [178] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [179] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_return_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_return_statement, 2)),
    },
    [180] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_continue_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_continue_statement, 2)),
    },
    [181] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_break_statement, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_break_statement, 2)),
    },
    [182] = {
        [anon_sym_LBRACE] = ACTIONS(SHIFT(184)),
    },
    [183] = {
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [184] = {
        [sym_case_statement] = ACTIONS(SHIFT(185)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(186)),
        [anon_sym_case] = ACTIONS(SHIFT(187)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(188)),
        [anon_sym_default] = ACTIONS(SHIFT(189)),
    },
    [185] = {
        [sym_case_statement] = ACTIONS(SHIFT(185)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(SHIFT(231)),
        [anon_sym_case] = ACTIONS(SHIFT(187)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 1)),
        [anon_sym_default] = ACTIONS(SHIFT(189)),
    },
    [186] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(230)),
    },
    [187] = {
        [sym__pattern] = ACTIONS(SHIFT(196)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(197)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(197)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(197)),
        [sym_optional_pattern] = ACTIONS(SHIFT(197)),
        [sym_is_pattern] = ACTIONS(SHIFT(197)),
        [sym_as_pattern] = ACTIONS(SHIFT(197)),
        [sym__expression] = ACTIONS(SHIFT(197)),
        [sym__type_identifier] = ACTIONS(SHIFT(198)),
        [sym__type_name] = ACTIONS(SHIFT(113)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(199)),
        [anon_sym_let] = ACTIONS(SHIFT(200)),
        [anon_sym_var] = ACTIONS(SHIFT(200)),
        [anon_sym_DOT] = ACTIONS(SHIFT(201)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(197)),
        [anon_sym_is] = ACTIONS(SHIFT(202)),
        [sym_identifier] = ACTIONS(SHIFT(203)),
    },
    [188] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_switch_statement, 4)),
    },
    [189] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(190)),
    },
    [190] = {
        [sym__statement] = ACTIONS(SHIFT(191)),
        [sym__loop_statement] = ACTIONS(SHIFT(192)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(192)),
        [sym_guard_statement] = ACTIONS(SHIFT(192)),
        [sym_switch_statement] = ACTIONS(SHIFT(192)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [sym_labeled_statement] = ACTIONS(SHIFT(192)),
        [sym_break_statement] = ACTIONS(SHIFT(192)),
        [sym_continue_statement] = ACTIONS(SHIFT(192)),
        [sym_return_statement] = ACTIONS(SHIFT(192)),
        [sym_throw_statement] = ACTIONS(SHIFT(192)),
        [sym_defer_statement] = ACTIONS(SHIFT(192)),
        [sym_do_statement] = ACTIONS(SHIFT(192)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(192)),
        [sym_line_control_statement] = ACTIONS(SHIFT(192)),
        [sym__declaration] = ACTIONS(SHIFT(192)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(192)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(193)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_repeat] = ACTIONS(SHIFT(9)),
        [anon_sym_if] = ACTIONS(SHIFT(10)),
        [anon_sym_guard] = ACTIONS(SHIFT(11)),
        [anon_sym_switch] = ACTIONS(SHIFT(12)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 2)),
        [anon_sym_break] = ACTIONS(SHIFT(13)),
        [anon_sym_continue] = ACTIONS(SHIFT(14)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(192)),
        [anon_sym_return] = ACTIONS(SHIFT(15)),
        [anon_sym_throw] = ACTIONS(SHIFT(16)),
        [anon_sym_defer] = ACTIONS(SHIFT(17)),
        [anon_sym_do] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(20)),
        [anon_sym_import] = ACTIONS(SHIFT(21)),
        [sym_identifier] = ACTIONS(SHIFT(22)),
    },
    [191] = {
        [sym__statement] = ACTIONS(SHIFT(191)),
        [sym__loop_statement] = ACTIONS(SHIFT(192)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(192)),
        [sym_guard_statement] = ACTIONS(SHIFT(192)),
        [sym_switch_statement] = ACTIONS(SHIFT(192)),
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [sym_labeled_statement] = ACTIONS(SHIFT(192)),
        [sym_break_statement] = ACTIONS(SHIFT(192)),
        [sym_continue_statement] = ACTIONS(SHIFT(192)),
        [sym_return_statement] = ACTIONS(SHIFT(192)),
        [sym_throw_statement] = ACTIONS(SHIFT(192)),
        [sym_defer_statement] = ACTIONS(SHIFT(192)),
        [sym_do_statement] = ACTIONS(SHIFT(192)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(192)),
        [sym_line_control_statement] = ACTIONS(SHIFT(192)),
        [sym__declaration] = ACTIONS(SHIFT(192)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(192)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(195)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_case] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_repeat] = ACTIONS(SHIFT(9)),
        [anon_sym_if] = ACTIONS(SHIFT(10)),
        [anon_sym_guard] = ACTIONS(SHIFT(11)),
        [anon_sym_switch] = ACTIONS(SHIFT(12)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_default] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_break] = ACTIONS(SHIFT(13)),
        [anon_sym_continue] = ACTIONS(SHIFT(14)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(192)),
        [anon_sym_return] = ACTIONS(SHIFT(15)),
        [anon_sym_throw] = ACTIONS(SHIFT(16)),
        [anon_sym_defer] = ACTIONS(SHIFT(17)),
        [anon_sym_do] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(20)),
        [anon_sym_import] = ACTIONS(SHIFT(21)),
        [sym_identifier] = ACTIONS(SHIFT(22)),
    },
    [192] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(194)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(SHIFT(194)),
    },
    [193] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 3)),
    },
    [194] = {
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
        [anon_sym_POUNDif] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_import] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [195] = {
        [sym_case_statement] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_case] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
        [anon_sym_default] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [196] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(222)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(223)),
        [anon_sym_COLON] = ACTIONS(SHIFT(224)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(213)),
        [anon_sym_as] = ACTIONS(SHIFT(214)),
    },
    [197] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [198] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(219)),
    },
    [199] = {
        [sym__pattern] = ACTIONS(SHIFT(131)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(132)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(132)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(216)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(132)),
        [sym_optional_pattern] = ACTIONS(SHIFT(132)),
        [sym_is_pattern] = ACTIONS(SHIFT(132)),
        [sym_as_pattern] = ACTIONS(SHIFT(132)),
        [sym__expression] = ACTIONS(SHIFT(132)),
        [sym__type_identifier] = ACTIONS(SHIFT(134)),
        [sym__type_name] = ACTIONS(SHIFT(113)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(135)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(217)),
        [anon_sym_let] = ACTIONS(SHIFT(137)),
        [anon_sym_var] = ACTIONS(SHIFT(137)),
        [anon_sym_DOT] = ACTIONS(SHIFT(138)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(132)),
        [anon_sym_is] = ACTIONS(SHIFT(139)),
        [sym_identifier] = ACTIONS(SHIFT(140)),
    },
    [200] = {
        [sym__pattern] = ACTIONS(SHIFT(212)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(197)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(197)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(197)),
        [sym_optional_pattern] = ACTIONS(SHIFT(197)),
        [sym_is_pattern] = ACTIONS(SHIFT(197)),
        [sym_as_pattern] = ACTIONS(SHIFT(197)),
        [sym__expression] = ACTIONS(SHIFT(197)),
        [sym__type_identifier] = ACTIONS(SHIFT(198)),
        [sym__type_name] = ACTIONS(SHIFT(113)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(199)),
        [anon_sym_let] = ACTIONS(SHIFT(200)),
        [anon_sym_var] = ACTIONS(SHIFT(200)),
        [anon_sym_DOT] = ACTIONS(SHIFT(201)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(197)),
        [anon_sym_is] = ACTIONS(SHIFT(202)),
        [sym_identifier] = ACTIONS(SHIFT(203)),
    },
    [201] = {
        [sym_identifier] = ACTIONS(SHIFT(210)),
    },
    [202] = {
        [sym_type] = ACTIONS(SHIFT(204)),
        [sym__type_identifier] = ACTIONS(SHIFT(205)),
        [sym__type_name] = ACTIONS(SHIFT(206)),
        [sym_identifier] = ACTIONS(SHIFT(207)),
    },
    [203] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [204] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [205] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [206] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(208)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [207] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [208] = {
        [sym__type_identifier] = ACTIONS(SHIFT(209)),
        [sym__type_name] = ACTIONS(SHIFT(206)),
        [sym_identifier] = ACTIONS(SHIFT(207)),
    },
    [209] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [210] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(211)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(199)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [211] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [212] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(213)),
        [anon_sym_as] = ACTIONS(SHIFT(214)),
    },
    [213] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [214] = {
        [sym_type] = ACTIONS(SHIFT(215)),
        [sym__type_identifier] = ACTIONS(SHIFT(205)),
        [sym__type_name] = ACTIONS(SHIFT(206)),
        [sym_identifier] = ACTIONS(SHIFT(207)),
    },
    [215] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [216] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(218)),
    },
    [217] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [218] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [219] = {
        [sym_identifier] = ACTIONS(SHIFT(220)),
    },
    [220] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(221)),
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(199)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [221] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [222] = {
        [anon_sym_COLON] = ACTIONS(SHIFT(228)),
    },
    [223] = {
        [sym__pattern] = ACTIONS(SHIFT(226)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(197)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(197)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(197)),
        [sym_optional_pattern] = ACTIONS(SHIFT(197)),
        [sym_is_pattern] = ACTIONS(SHIFT(197)),
        [sym_as_pattern] = ACTIONS(SHIFT(197)),
        [sym__expression] = ACTIONS(SHIFT(197)),
        [sym__type_identifier] = ACTIONS(SHIFT(198)),
        [sym__type_name] = ACTIONS(SHIFT(113)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(199)),
        [anon_sym_let] = ACTIONS(SHIFT(200)),
        [anon_sym_var] = ACTIONS(SHIFT(200)),
        [anon_sym_DOT] = ACTIONS(SHIFT(201)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(197)),
        [anon_sym_is] = ACTIONS(SHIFT(202)),
        [sym_identifier] = ACTIONS(SHIFT(203)),
    },
    [224] = {
        [sym__statement] = ACTIONS(SHIFT(191)),
        [sym__loop_statement] = ACTIONS(SHIFT(192)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(192)),
        [sym_guard_statement] = ACTIONS(SHIFT(192)),
        [sym_switch_statement] = ACTIONS(SHIFT(192)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [sym_labeled_statement] = ACTIONS(SHIFT(192)),
        [sym_break_statement] = ACTIONS(SHIFT(192)),
        [sym_continue_statement] = ACTIONS(SHIFT(192)),
        [sym_return_statement] = ACTIONS(SHIFT(192)),
        [sym_throw_statement] = ACTIONS(SHIFT(192)),
        [sym_defer_statement] = ACTIONS(SHIFT(192)),
        [sym_do_statement] = ACTIONS(SHIFT(192)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(192)),
        [sym_line_control_statement] = ACTIONS(SHIFT(192)),
        [sym__declaration] = ACTIONS(SHIFT(192)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(192)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(225)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_repeat] = ACTIONS(SHIFT(9)),
        [anon_sym_if] = ACTIONS(SHIFT(10)),
        [anon_sym_guard] = ACTIONS(SHIFT(11)),
        [anon_sym_switch] = ACTIONS(SHIFT(12)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 3)),
        [anon_sym_break] = ACTIONS(SHIFT(13)),
        [anon_sym_continue] = ACTIONS(SHIFT(14)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(192)),
        [anon_sym_return] = ACTIONS(SHIFT(15)),
        [anon_sym_throw] = ACTIONS(SHIFT(16)),
        [anon_sym_defer] = ACTIONS(SHIFT(17)),
        [anon_sym_do] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(20)),
        [anon_sym_import] = ACTIONS(SHIFT(21)),
        [sym_identifier] = ACTIONS(SHIFT(22)),
    },
    [225] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 4)),
    },
    [226] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(SHIFT(227)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(223)),
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(213)),
        [anon_sym_as] = ACTIONS(SHIFT(214)),
    },
    [227] = {
        [anon_sym_COLON] = ACTIONS(REDUCE(aux_sym_case_statement_repeat1, 3)),
    },
    [228] = {
        [sym__statement] = ACTIONS(SHIFT(191)),
        [sym__loop_statement] = ACTIONS(SHIFT(192)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(192)),
        [sym_guard_statement] = ACTIONS(SHIFT(192)),
        [sym_switch_statement] = ACTIONS(SHIFT(192)),
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [sym_labeled_statement] = ACTIONS(SHIFT(192)),
        [sym_break_statement] = ACTIONS(SHIFT(192)),
        [sym_continue_statement] = ACTIONS(SHIFT(192)),
        [sym_return_statement] = ACTIONS(SHIFT(192)),
        [sym_throw_statement] = ACTIONS(SHIFT(192)),
        [sym_defer_statement] = ACTIONS(SHIFT(192)),
        [sym_do_statement] = ACTIONS(SHIFT(192)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(192)),
        [sym_line_control_statement] = ACTIONS(SHIFT(192)),
        [sym__declaration] = ACTIONS(SHIFT(192)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(192)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(229)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_repeat] = ACTIONS(SHIFT(9)),
        [anon_sym_if] = ACTIONS(SHIFT(10)),
        [anon_sym_guard] = ACTIONS(SHIFT(11)),
        [anon_sym_switch] = ACTIONS(SHIFT(12)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 4)),
        [anon_sym_break] = ACTIONS(SHIFT(13)),
        [anon_sym_continue] = ACTIONS(SHIFT(14)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(192)),
        [anon_sym_return] = ACTIONS(SHIFT(15)),
        [anon_sym_throw] = ACTIONS(SHIFT(16)),
        [anon_sym_defer] = ACTIONS(SHIFT(17)),
        [anon_sym_do] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(20)),
        [anon_sym_import] = ACTIONS(SHIFT(21)),
        [sym_identifier] = ACTIONS(SHIFT(22)),
    },
    [229] = {
        [sym_case_statement] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [aux_sym_switch_statement_repeat1] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_case] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_case_statement, 5)),
        [anon_sym_default] = ACTIONS(REDUCE(sym_case_statement, 5)),
    },
    [230] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_switch_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_switch_statement, 5)),
    },
    [231] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_switch_statement_repeat1, 2)),
    },
    [232] = {
        [anon_sym_else] = ACTIONS(SHIFT(306)),
    },
    [233] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(305)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(299)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [234] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1), SHIFT(302)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [235] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [236] = {
        [anon_sym_COMMA] = ACTIONS(SHIFT(296)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [237] = {
        [sym__pattern] = ACTIONS(SHIFT(293)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(243)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(243)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(243)),
        [sym_optional_pattern] = ACTIONS(SHIFT(243)),
        [sym_is_pattern] = ACTIONS(SHIFT(243)),
        [sym_as_pattern] = ACTIONS(SHIFT(243)),
        [sym__expression] = ACTIONS(SHIFT(243)),
        [sym__type_identifier] = ACTIONS(SHIFT(244)),
        [sym__type_name] = ACTIONS(SHIFT(113)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(245)),
        [anon_sym_let] = ACTIONS(SHIFT(246)),
        [anon_sym_var] = ACTIONS(SHIFT(246)),
        [anon_sym_DOT] = ACTIONS(SHIFT(247)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(243)),
        [anon_sym_is] = ACTIONS(SHIFT(248)),
        [sym_identifier] = ACTIONS(SHIFT(249)),
    },
    [238] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(278)),
    },
    [239] = {
        [sym_optional_binding] = ACTIONS(SHIFT(241)),
        [sym__pattern] = ACTIONS(SHIFT(242)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(243)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(243)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(243)),
        [sym_optional_pattern] = ACTIONS(SHIFT(243)),
        [sym_is_pattern] = ACTIONS(SHIFT(243)),
        [sym_as_pattern] = ACTIONS(SHIFT(243)),
        [sym__expression] = ACTIONS(SHIFT(243)),
        [sym__type_identifier] = ACTIONS(SHIFT(244)),
        [sym__type_name] = ACTIONS(SHIFT(113)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(245)),
        [anon_sym_let] = ACTIONS(SHIFT(246)),
        [anon_sym_var] = ACTIONS(SHIFT(246)),
        [anon_sym_DOT] = ACTIONS(SHIFT(247)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(243)),
        [anon_sym_is] = ACTIONS(SHIFT(248)),
        [sym_identifier] = ACTIONS(SHIFT(249)),
    },
    [240] = {
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [241] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(271)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
    },
    [242] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(268)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(259)),
        [anon_sym_as] = ACTIONS(SHIFT(260)),
    },
    [243] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [244] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(265)),
    },
    [245] = {
        [sym__pattern] = ACTIONS(SHIFT(131)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(132)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(132)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(262)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(132)),
        [sym_optional_pattern] = ACTIONS(SHIFT(132)),
        [sym_is_pattern] = ACTIONS(SHIFT(132)),
        [sym_as_pattern] = ACTIONS(SHIFT(132)),
        [sym__expression] = ACTIONS(SHIFT(132)),
        [sym__type_identifier] = ACTIONS(SHIFT(134)),
        [sym__type_name] = ACTIONS(SHIFT(113)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(135)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(263)),
        [anon_sym_let] = ACTIONS(SHIFT(137)),
        [anon_sym_var] = ACTIONS(SHIFT(137)),
        [anon_sym_DOT] = ACTIONS(SHIFT(138)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(132)),
        [anon_sym_is] = ACTIONS(SHIFT(139)),
        [sym_identifier] = ACTIONS(SHIFT(140)),
    },
    [246] = {
        [sym__pattern] = ACTIONS(SHIFT(258)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(243)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(243)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(243)),
        [sym_optional_pattern] = ACTIONS(SHIFT(243)),
        [sym_is_pattern] = ACTIONS(SHIFT(243)),
        [sym_as_pattern] = ACTIONS(SHIFT(243)),
        [sym__expression] = ACTIONS(SHIFT(243)),
        [sym__type_identifier] = ACTIONS(SHIFT(244)),
        [sym__type_name] = ACTIONS(SHIFT(113)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(245)),
        [anon_sym_let] = ACTIONS(SHIFT(246)),
        [anon_sym_var] = ACTIONS(SHIFT(246)),
        [anon_sym_DOT] = ACTIONS(SHIFT(247)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(243)),
        [anon_sym_is] = ACTIONS(SHIFT(248)),
        [sym_identifier] = ACTIONS(SHIFT(249)),
    },
    [247] = {
        [sym_identifier] = ACTIONS(SHIFT(256)),
    },
    [248] = {
        [sym_type] = ACTIONS(SHIFT(250)),
        [sym__type_identifier] = ACTIONS(SHIFT(251)),
        [sym__type_name] = ACTIONS(SHIFT(252)),
        [sym_identifier] = ACTIONS(SHIFT(253)),
    },
    [249] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [250] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [251] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [252] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(254)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [253] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [254] = {
        [sym__type_identifier] = ACTIONS(SHIFT(255)),
        [sym__type_name] = ACTIONS(SHIFT(252)),
        [sym_identifier] = ACTIONS(SHIFT(253)),
    },
    [255] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [256] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(257)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(245)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [257] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [258] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(259)),
        [anon_sym_as] = ACTIONS(SHIFT(260)),
    },
    [259] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [260] = {
        [sym_type] = ACTIONS(SHIFT(261)),
        [sym__type_identifier] = ACTIONS(SHIFT(251)),
        [sym__type_name] = ACTIONS(SHIFT(252)),
        [sym_identifier] = ACTIONS(SHIFT(253)),
    },
    [261] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [262] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(264)),
    },
    [263] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [264] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [265] = {
        [sym_identifier] = ACTIONS(SHIFT(266)),
    },
    [266] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(267)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(245)),
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [267] = {
        [anon_sym_EQ] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [268] = {
        [sym__expression] = ACTIONS(SHIFT(269)),
        [sym_identifier] = ACTIONS(SHIFT(270)),
    },
    [269] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [270] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [271] = {
        [sym_optional_binding] = ACTIONS(SHIFT(272)),
        [sym__pattern] = ACTIONS(SHIFT(273)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(243)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(243)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(243)),
        [sym_optional_pattern] = ACTIONS(SHIFT(243)),
        [sym_is_pattern] = ACTIONS(SHIFT(243)),
        [sym_as_pattern] = ACTIONS(SHIFT(243)),
        [sym__expression] = ACTIONS(SHIFT(243)),
        [sym__type_identifier] = ACTIONS(SHIFT(244)),
        [sym__type_name] = ACTIONS(SHIFT(113)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(245)),
        [anon_sym_let] = ACTIONS(SHIFT(246)),
        [anon_sym_var] = ACTIONS(SHIFT(246)),
        [anon_sym_DOT] = ACTIONS(SHIFT(247)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(243)),
        [anon_sym_is] = ACTIONS(SHIFT(248)),
        [sym_identifier] = ACTIONS(SHIFT(249)),
    },
    [272] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(SHIFT(277)),
        [anon_sym_COMMA] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
    },
    [273] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(274)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(259)),
        [anon_sym_as] = ACTIONS(SHIFT(260)),
    },
    [274] = {
        [sym__expression] = ACTIONS(SHIFT(275)),
        [sym_identifier] = ACTIONS(SHIFT(276)),
    },
    [275] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [276] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [277] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
    },
    [278] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(279)),
        [anon_sym_iOS] = ACTIONS(SHIFT(280)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(280)),
        [anon_sym_OSX] = ACTIONS(SHIFT(280)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(280)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(280)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(280)),
    },
    [279] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(291)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(292)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(284)),
    },
    [280] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(281)),
    },
    [281] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(282)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(283)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(284)),
    },
    [282] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(290)),
    },
    [283] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 5)),
    },
    [284] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(285)),
        [anon_sym_iOS] = ACTIONS(SHIFT(286)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(286)),
        [anon_sym_OSX] = ACTIONS(SHIFT(286)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(286)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(286)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(286)),
    },
    [285] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(289)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(284)),
    },
    [286] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(287)),
    },
    [287] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(288)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 3)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(284)),
    },
    [288] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 4)),
    },
    [289] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(aux_sym_availability_condition_repeat1, 3)),
    },
    [290] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 6)),
    },
    [291] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(283)),
    },
    [292] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_availability_condition, 4)),
    },
    [293] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(294)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(259)),
        [anon_sym_as] = ACTIONS(SHIFT(260)),
    },
    [294] = {
        [sym__expression] = ACTIONS(SHIFT(295)),
        [sym_identifier] = ACTIONS(SHIFT(270)),
    },
    [295] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_else] = ACTIONS(REDUCE(sym_case_condition, 4)),
    },
    [296] = {
        [sym__condition] = ACTIONS(SHIFT(297)),
        [sym_availability_condition] = ACTIONS(SHIFT(235)),
        [sym_case_condition] = ACTIONS(SHIFT(235)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(235)),
        [anon_sym_case] = ACTIONS(SHIFT(237)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(238)),
        [anon_sym_let] = ACTIONS(SHIFT(239)),
        [anon_sym_var] = ACTIONS(SHIFT(239)),
    },
    [297] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(298)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(299)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [298] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 4)),
    },
    [299] = {
        [sym__condition] = ACTIONS(SHIFT(300)),
        [sym_availability_condition] = ACTIONS(SHIFT(235)),
        [sym_case_condition] = ACTIONS(SHIFT(235)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(235)),
        [anon_sym_case] = ACTIONS(SHIFT(237)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(238)),
        [anon_sym_let] = ACTIONS(SHIFT(239)),
        [anon_sym_var] = ACTIONS(SHIFT(239)),
    },
    [300] = {
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(301)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(299)),
        [anon_sym_else] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
    },
    [301] = {
        [anon_sym_else] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
    },
    [302] = {
        [sym__expression] = ACTIONS(SHIFT(303)),
        [sym_identifier] = ACTIONS(SHIFT(304)),
    },
    [303] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [304] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [305] = {
        [anon_sym_else] = ACTIONS(REDUCE(sym__condition_clause, 2)),
    },
    [306] = {
        [sym__code_block] = ACTIONS(SHIFT(307)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(173)),
    },
    [307] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_guard_statement, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_guard_statement, 4)),
    },
    [308] = {
        [sym__code_block] = ACTIONS(SHIFT(351)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(352)),
    },
    [309] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(350)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(344)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [310] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1), SHIFT(347)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [311] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__condition, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition, 1)),
    },
    [312] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(341)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 1)),
    },
    [313] = {
        [sym__pattern] = ACTIONS(SHIFT(338)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(243)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(243)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(243)),
        [sym_optional_pattern] = ACTIONS(SHIFT(243)),
        [sym_is_pattern] = ACTIONS(SHIFT(243)),
        [sym_as_pattern] = ACTIONS(SHIFT(243)),
        [sym__expression] = ACTIONS(SHIFT(243)),
        [sym__type_identifier] = ACTIONS(SHIFT(244)),
        [sym__type_name] = ACTIONS(SHIFT(113)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(245)),
        [anon_sym_let] = ACTIONS(SHIFT(246)),
        [anon_sym_var] = ACTIONS(SHIFT(246)),
        [anon_sym_DOT] = ACTIONS(SHIFT(247)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(243)),
        [anon_sym_is] = ACTIONS(SHIFT(248)),
        [sym_identifier] = ACTIONS(SHIFT(249)),
    },
    [314] = {
        [anon_sym_LPAREN] = ACTIONS(SHIFT(329)),
    },
    [315] = {
        [sym_optional_binding] = ACTIONS(SHIFT(317)),
        [sym__pattern] = ACTIONS(SHIFT(318)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(243)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(243)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(243)),
        [sym_optional_pattern] = ACTIONS(SHIFT(243)),
        [sym_is_pattern] = ACTIONS(SHIFT(243)),
        [sym_as_pattern] = ACTIONS(SHIFT(243)),
        [sym__expression] = ACTIONS(SHIFT(243)),
        [sym__type_identifier] = ACTIONS(SHIFT(244)),
        [sym__type_name] = ACTIONS(SHIFT(113)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(245)),
        [anon_sym_let] = ACTIONS(SHIFT(246)),
        [anon_sym_var] = ACTIONS(SHIFT(246)),
        [anon_sym_DOT] = ACTIONS(SHIFT(247)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(243)),
        [anon_sym_is] = ACTIONS(SHIFT(248)),
        [sym_identifier] = ACTIONS(SHIFT(249)),
    },
    [316] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [317] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(322)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding_condition, 2)),
    },
    [318] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(319)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(259)),
        [anon_sym_as] = ACTIONS(SHIFT(260)),
    },
    [319] = {
        [sym__expression] = ACTIONS(SHIFT(320)),
        [sym_identifier] = ACTIONS(SHIFT(321)),
    },
    [320] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [321] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [322] = {
        [sym_optional_binding] = ACTIONS(SHIFT(323)),
        [sym__pattern] = ACTIONS(SHIFT(324)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(243)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(243)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(243)),
        [sym_optional_pattern] = ACTIONS(SHIFT(243)),
        [sym_is_pattern] = ACTIONS(SHIFT(243)),
        [sym_as_pattern] = ACTIONS(SHIFT(243)),
        [sym__expression] = ACTIONS(SHIFT(243)),
        [sym__type_identifier] = ACTIONS(SHIFT(244)),
        [sym__type_name] = ACTIONS(SHIFT(113)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(245)),
        [anon_sym_let] = ACTIONS(SHIFT(246)),
        [anon_sym_var] = ACTIONS(SHIFT(246)),
        [anon_sym_DOT] = ACTIONS(SHIFT(247)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(243)),
        [anon_sym_is] = ACTIONS(SHIFT(248)),
        [sym_identifier] = ACTIONS(SHIFT(249)),
    },
    [323] = {
        [sym__code_block] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(SHIFT(328)),
        [anon_sym_COMMA] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE_FRAGILE(sym_optional_binding_condition, 4)),
    },
    [324] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(325)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(259)),
        [anon_sym_as] = ACTIONS(SHIFT(260)),
    },
    [325] = {
        [sym__expression] = ACTIONS(SHIFT(326)),
        [sym_identifier] = ACTIONS(SHIFT(327)),
    },
    [326] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding, 3)),
    },
    [327] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym_optional_binding_condition_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [328] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_optional_binding_condition, 5)),
    },
    [329] = {
        [anon_sym_STAR] = ACTIONS(SHIFT(330)),
        [anon_sym_iOS] = ACTIONS(SHIFT(331)),
        [anon_sym_iOSApplicationExtension] = ACTIONS(SHIFT(331)),
        [anon_sym_OSX] = ACTIONS(SHIFT(331)),
        [anon_sym_OSXApplicationExtension] = ACTIONS(SHIFT(331)),
        [anon_sym_watchOS] = ACTIONS(SHIFT(331)),
        [anon_sym_tvOS] = ACTIONS(SHIFT(331)),
    },
    [330] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(336)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(337)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(284)),
    },
    [331] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_DOT_LBRACK0_DASH9_RBRACK_PLUS_PIPE_RPAREN_PIPE_RPAREN_SLASH] = ACTIONS(SHIFT(332)),
    },
    [332] = {
        [aux_sym_availability_condition_repeat1] = ACTIONS(SHIFT(333)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(334)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(284)),
    },
    [333] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(335)),
    },
    [334] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 5)),
    },
    [335] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 6)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 6)),
    },
    [336] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(334)),
    },
    [337] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_availability_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_availability_condition, 4)),
    },
    [338] = {
        [anon_sym_EQ] = ACTIONS(SHIFT(339)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(259)),
        [anon_sym_as] = ACTIONS(SHIFT(260)),
    },
    [339] = {
        [sym__expression] = ACTIONS(SHIFT(340)),
        [sym_identifier] = ACTIONS(SHIFT(321)),
    },
    [340] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym_case_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_case_condition, 4)),
    },
    [341] = {
        [sym__condition] = ACTIONS(SHIFT(342)),
        [sym_availability_condition] = ACTIONS(SHIFT(311)),
        [sym_case_condition] = ACTIONS(SHIFT(311)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(311)),
        [anon_sym_case] = ACTIONS(SHIFT(313)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(314)),
        [anon_sym_let] = ACTIONS(SHIFT(315)),
        [anon_sym_var] = ACTIONS(SHIFT(315)),
    },
    [342] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 3)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(343)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(344)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [343] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 4)),
    },
    [344] = {
        [sym__condition] = ACTIONS(SHIFT(345)),
        [sym_availability_condition] = ACTIONS(SHIFT(311)),
        [sym_case_condition] = ACTIONS(SHIFT(311)),
        [sym_optional_binding_condition] = ACTIONS(SHIFT(311)),
        [anon_sym_case] = ACTIONS(SHIFT(313)),
        [anon_sym_POUNDavailable] = ACTIONS(SHIFT(314)),
        [anon_sym_let] = ACTIONS(SHIFT(315)),
        [anon_sym_var] = ACTIONS(SHIFT(315)),
    },
    [345] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
        [aux_sym__condition_clause_repeat1] = ACTIONS(SHIFT(346)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(344)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 2)),
    },
    [346] = {
        [sym__code_block] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(aux_sym__condition_clause_repeat1, 3)),
    },
    [347] = {
        [sym__expression] = ACTIONS(SHIFT(348)),
        [sym_identifier] = ACTIONS(SHIFT(349)),
    },
    [348] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 3)),
    },
    [349] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [350] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__condition_clause, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__condition_clause, 2)),
    },
    [351] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_if_statement, 3)),
        [anon_sym_else] = ACTIONS(SHIFT(356)),
    },
    [352] = {
        [sym__statement] = ACTIONS(SHIFT(99)),
        [sym__loop_statement] = ACTIONS(SHIFT(100)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(100)),
        [sym_guard_statement] = ACTIONS(SHIFT(100)),
        [sym_switch_statement] = ACTIONS(SHIFT(100)),
        [sym_labeled_statement] = ACTIONS(SHIFT(100)),
        [sym_break_statement] = ACTIONS(SHIFT(100)),
        [sym_continue_statement] = ACTIONS(SHIFT(100)),
        [sym_return_statement] = ACTIONS(SHIFT(100)),
        [sym_throw_statement] = ACTIONS(SHIFT(100)),
        [sym_defer_statement] = ACTIONS(SHIFT(100)),
        [sym_do_statement] = ACTIONS(SHIFT(100)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(100)),
        [sym_line_control_statement] = ACTIONS(SHIFT(100)),
        [sym__declaration] = ACTIONS(SHIFT(100)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(100)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(353)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_repeat] = ACTIONS(SHIFT(9)),
        [anon_sym_if] = ACTIONS(SHIFT(10)),
        [anon_sym_guard] = ACTIONS(SHIFT(11)),
        [anon_sym_switch] = ACTIONS(SHIFT(12)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(354)),
        [anon_sym_break] = ACTIONS(SHIFT(13)),
        [anon_sym_continue] = ACTIONS(SHIFT(14)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(100)),
        [anon_sym_return] = ACTIONS(SHIFT(15)),
        [anon_sym_throw] = ACTIONS(SHIFT(16)),
        [anon_sym_defer] = ACTIONS(SHIFT(17)),
        [anon_sym_do] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(20)),
        [anon_sym_import] = ACTIONS(SHIFT(21)),
        [sym_identifier] = ACTIONS(SHIFT(22)),
    },
    [353] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(355)),
    },
    [354] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 2)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [355] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_else] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [356] = {
        [sym_if_statement] = ACTIONS(SHIFT(357)),
        [sym__code_block] = ACTIONS(SHIFT(357)),
        [anon_sym_if] = ACTIONS(SHIFT(10)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(173)),
    },
    [357] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_if_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_if_statement, 5)),
    },
    [358] = {
        [anon_sym_while] = ACTIONS(SHIFT(363)),
    },
    [359] = {
        [sym__statement] = ACTIONS(SHIFT(99)),
        [sym__loop_statement] = ACTIONS(SHIFT(100)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(100)),
        [sym_guard_statement] = ACTIONS(SHIFT(100)),
        [sym_switch_statement] = ACTIONS(SHIFT(100)),
        [sym_labeled_statement] = ACTIONS(SHIFT(100)),
        [sym_break_statement] = ACTIONS(SHIFT(100)),
        [sym_continue_statement] = ACTIONS(SHIFT(100)),
        [sym_return_statement] = ACTIONS(SHIFT(100)),
        [sym_throw_statement] = ACTIONS(SHIFT(100)),
        [sym_defer_statement] = ACTIONS(SHIFT(100)),
        [sym_do_statement] = ACTIONS(SHIFT(100)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(100)),
        [sym_line_control_statement] = ACTIONS(SHIFT(100)),
        [sym__declaration] = ACTIONS(SHIFT(100)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(100)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(360)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_repeat] = ACTIONS(SHIFT(9)),
        [anon_sym_if] = ACTIONS(SHIFT(10)),
        [anon_sym_guard] = ACTIONS(SHIFT(11)),
        [anon_sym_switch] = ACTIONS(SHIFT(12)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(361)),
        [anon_sym_break] = ACTIONS(SHIFT(13)),
        [anon_sym_continue] = ACTIONS(SHIFT(14)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(100)),
        [anon_sym_return] = ACTIONS(SHIFT(15)),
        [anon_sym_throw] = ACTIONS(SHIFT(16)),
        [anon_sym_defer] = ACTIONS(SHIFT(17)),
        [anon_sym_do] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(20)),
        [anon_sym_import] = ACTIONS(SHIFT(21)),
        [sym_identifier] = ACTIONS(SHIFT(22)),
    },
    [360] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(362)),
    },
    [361] = {
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [362] = {
        [anon_sym_while] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [363] = {
        [sym__expression] = ACTIONS(SHIFT(364)),
        [sym_identifier] = ACTIONS(SHIFT(178)),
    },
    [364] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_repeat_while_statement, 4)),
    },
    [365] = {
        [sym__code_block] = ACTIONS(SHIFT(366)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(173)),
    },
    [366] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_while_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_while_statement, 3)),
    },
    [367] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(467)),
    },
    [368] = {
        [sym__code_block] = ACTIONS(SHIFT(466)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(173)),
    },
    [369] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__for_init, 1)),
    },
    [370] = {
        [sym__variable_name] = ACTIONS(SHIFT(451)),
        [sym_identifier] = ACTIONS(SHIFT(452)),
    },
    [371] = {
        [sym__type_annotation] = ACTIONS(SHIFT(447)),
        [anon_sym_in] = ACTIONS(SHIFT(448)),
        [anon_sym_COLON] = ACTIONS(SHIFT(403)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(397)),
        [anon_sym_as] = ACTIONS(SHIFT(398)),
    },
    [372] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [373] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(428)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(429)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [374] = {
        [anon_sym_DOT] = ACTIONS(SHIFT(444)),
    },
    [375] = {
        [sym__expression] = ACTIONS(SHIFT(439)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(440)),
        [sym_identifier] = ACTIONS(SHIFT(423)),
    },
    [376] = {
        [sym__for_init] = ACTIONS(SHIFT(415)),
        [sym__for_condition] = ACTIONS(SHIFT(416)),
        [sym_variable_declaration] = ACTIONS(SHIFT(369)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(370)),
        [sym__pattern] = ACTIONS(SHIFT(131)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(132)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(132)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(392)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(132)),
        [sym_optional_pattern] = ACTIONS(SHIFT(132)),
        [sym_is_pattern] = ACTIONS(SHIFT(132)),
        [sym_as_pattern] = ACTIONS(SHIFT(132)),
        [sym__expression] = ACTIONS(SHIFT(417)),
        [sym__expression_list] = ACTIONS(SHIFT(369)),
        [sym__type_identifier] = ACTIONS(SHIFT(134)),
        [sym__type_name] = ACTIONS(SHIFT(113)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(418)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(135)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(393)),
        [anon_sym_let] = ACTIONS(SHIFT(137)),
        [anon_sym_var] = ACTIONS(SHIFT(419)),
        [anon_sym_DOT] = ACTIONS(SHIFT(138)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(132)),
        [anon_sym_is] = ACTIONS(SHIFT(139)),
        [sym_identifier] = ACTIONS(SHIFT(420)),
    },
    [377] = {
        [sym__pattern] = ACTIONS(SHIFT(400)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(372)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(372)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(372)),
        [sym_optional_pattern] = ACTIONS(SHIFT(372)),
        [sym_is_pattern] = ACTIONS(SHIFT(372)),
        [sym_as_pattern] = ACTIONS(SHIFT(372)),
        [sym__expression] = ACTIONS(SHIFT(372)),
        [sym__type_identifier] = ACTIONS(SHIFT(374)),
        [sym__type_name] = ACTIONS(SHIFT(113)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(391)),
        [anon_sym_let] = ACTIONS(SHIFT(378)),
        [anon_sym_var] = ACTIONS(SHIFT(378)),
        [anon_sym_DOT] = ACTIONS(SHIFT(380)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(372)),
        [anon_sym_is] = ACTIONS(SHIFT(381)),
        [sym_identifier] = ACTIONS(SHIFT(396)),
    },
    [378] = {
        [sym__pattern] = ACTIONS(SHIFT(395)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(372)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(372)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(372)),
        [sym_optional_pattern] = ACTIONS(SHIFT(372)),
        [sym_is_pattern] = ACTIONS(SHIFT(372)),
        [sym_as_pattern] = ACTIONS(SHIFT(372)),
        [sym__expression] = ACTIONS(SHIFT(372)),
        [sym__type_identifier] = ACTIONS(SHIFT(374)),
        [sym__type_name] = ACTIONS(SHIFT(113)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(391)),
        [anon_sym_let] = ACTIONS(SHIFT(378)),
        [anon_sym_var] = ACTIONS(SHIFT(378)),
        [anon_sym_DOT] = ACTIONS(SHIFT(380)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(372)),
        [anon_sym_is] = ACTIONS(SHIFT(381)),
        [sym_identifier] = ACTIONS(SHIFT(396)),
    },
    [379] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(395)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(372)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(372)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(372)),
        [sym_optional_pattern] = ACTIONS(SHIFT(372)),
        [sym_is_pattern] = ACTIONS(SHIFT(372)),
        [sym_as_pattern] = ACTIONS(SHIFT(372)),
        [sym__expression] = ACTIONS(SHIFT(372)),
        [sym__type_identifier] = ACTIONS(SHIFT(374)),
        [sym__type_name] = ACTIONS(SHIFT(113)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(391)),
        [anon_sym_let] = ACTIONS(SHIFT(378)),
        [anon_sym_var] = ACTIONS(SHIFT(378)),
        [anon_sym_DOT] = ACTIONS(SHIFT(380)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(372)),
        [anon_sym_is] = ACTIONS(SHIFT(381)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(396)),
    },
    [380] = {
        [sym_identifier] = ACTIONS(SHIFT(389)),
    },
    [381] = {
        [sym_type] = ACTIONS(SHIFT(383)),
        [sym__type_identifier] = ACTIONS(SHIFT(384)),
        [sym__type_name] = ACTIONS(SHIFT(385)),
        [sym_identifier] = ACTIONS(SHIFT(386)),
    },
    [382] = {
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
    [383] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_is_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_is_pattern, 2)),
    },
    [384] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [385] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(387)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 1)),
    },
    [386] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [387] = {
        [sym__type_identifier] = ACTIONS(SHIFT(388)),
        [sym__type_name] = ACTIONS(SHIFT(385)),
        [sym_identifier] = ACTIONS(SHIFT(386)),
    },
    [388] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [389] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(390)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(391)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 2)),
    },
    [390] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [391] = {
        [sym__pattern] = ACTIONS(SHIFT(131)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(132)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(132)),
        [sym__tuple_pattern_element_list] = ACTIONS(SHIFT(392)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(132)),
        [sym_optional_pattern] = ACTIONS(SHIFT(132)),
        [sym_is_pattern] = ACTIONS(SHIFT(132)),
        [sym_as_pattern] = ACTIONS(SHIFT(132)),
        [sym__expression] = ACTIONS(SHIFT(132)),
        [sym__type_identifier] = ACTIONS(SHIFT(134)),
        [sym__type_name] = ACTIONS(SHIFT(113)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(135)),
        [anon_sym_RPAREN] = ACTIONS(SHIFT(393)),
        [anon_sym_let] = ACTIONS(SHIFT(137)),
        [anon_sym_var] = ACTIONS(SHIFT(137)),
        [anon_sym_DOT] = ACTIONS(SHIFT(138)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(132)),
        [anon_sym_is] = ACTIONS(SHIFT(139)),
        [sym_identifier] = ACTIONS(SHIFT(140)),
    },
    [392] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(394)),
    },
    [393] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 2)),
    },
    [394] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_tuple_pattern, 3)),
    },
    [395] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_value_binding_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(397)),
        [anon_sym_as] = ACTIONS(SHIFT(398)),
    },
    [396] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_in] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [397] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_optional_pattern, 2)),
    },
    [398] = {
        [sym_type] = ACTIONS(SHIFT(399)),
        [sym__type_identifier] = ACTIONS(SHIFT(384)),
        [sym__type_name] = ACTIONS(SHIFT(385)),
        [sym_identifier] = ACTIONS(SHIFT(386)),
    },
    [399] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_as_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_as_pattern, 3)),
    },
    [400] = {
        [sym__type_annotation] = ACTIONS(SHIFT(401)),
        [anon_sym_in] = ACTIONS(SHIFT(402)),
        [anon_sym_COLON] = ACTIONS(SHIFT(403)),
        [anon_sym_QMARK] = ACTIONS(SHIFT(397)),
        [anon_sym_as] = ACTIONS(SHIFT(398)),
    },
    [401] = {
        [anon_sym_in] = ACTIONS(SHIFT(412)),
    },
    [402] = {
        [sym__expression] = ACTIONS(SHIFT(410)),
        [sym_identifier] = ACTIONS(SHIFT(349)),
    },
    [403] = {
        [sym_type] = ACTIONS(SHIFT(404)),
        [sym__type_identifier] = ACTIONS(SHIFT(405)),
        [sym__type_name] = ACTIONS(SHIFT(406)),
        [sym_identifier] = ACTIONS(SHIFT(407)),
    },
    [404] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [405] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [406] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(408)),
    },
    [407] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [408] = {
        [sym__type_identifier] = ACTIONS(SHIFT(409)),
        [sym__type_name] = ACTIONS(SHIFT(406)),
        [sym_identifier] = ACTIONS(SHIFT(407)),
    },
    [409] = {
        [anon_sym_in] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [410] = {
        [sym__code_block] = ACTIONS(SHIFT(411)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(173)),
    },
    [411] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_in_statement, 6)),
    },
    [412] = {
        [sym__expression] = ACTIONS(SHIFT(413)),
        [sym_identifier] = ACTIONS(SHIFT(349)),
    },
    [413] = {
        [sym__code_block] = ACTIONS(SHIFT(414)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(173)),
    },
    [414] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_in_statement, 7)),
    },
    [415] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(435)),
    },
    [416] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(433)),
    },
    [417] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__pattern, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(428)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__pattern, 1), SHIFT(429)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__pattern, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__pattern, 1)),
    },
    [418] = {
        [sym__expression] = ACTIONS(SHIFT(421)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(422)),
        [sym_identifier] = ACTIONS(SHIFT(423)),
    },
    [419] = {
        [sym__variable_name] = ACTIONS(REDUCE(sym__variable_declaration_head, 1)),
        [sym__pattern] = ACTIONS(SHIFT(149)),
        [sym_value_binding_pattern] = ACTIONS(SHIFT(132)),
        [sym_tuple_pattern] = ACTIONS(SHIFT(132)),
        [sym_enum_case_pattern] = ACTIONS(SHIFT(132)),
        [sym_optional_pattern] = ACTIONS(SHIFT(132)),
        [sym_is_pattern] = ACTIONS(SHIFT(132)),
        [sym_as_pattern] = ACTIONS(SHIFT(132)),
        [sym__expression] = ACTIONS(SHIFT(132)),
        [sym__type_identifier] = ACTIONS(SHIFT(134)),
        [sym__type_name] = ACTIONS(SHIFT(113)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(135)),
        [anon_sym_let] = ACTIONS(SHIFT(137)),
        [anon_sym_var] = ACTIONS(SHIFT(137)),
        [anon_sym_DOT] = ACTIONS(SHIFT(138)),
        [sym_wildcard_pattern] = ACTIONS(SHIFT(132)),
        [anon_sym_is] = ACTIONS(SHIFT(139)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_declaration_head, 1), SHIFT(140)),
    },
    [420] = {
        [aux_sym_case_statement_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_as] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [421] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(426)),
    },
    [422] = {
        [sym__expression] = ACTIONS(SHIFT(424)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(425)),
    },
    [423] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [424] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [425] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [426] = {
        [sym__expression] = ACTIONS(SHIFT(427)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(425)),
    },
    [427] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [428] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 2)),
    },
    [429] = {
        [sym__expression] = ACTIONS(SHIFT(430)),
        [sym_identifier] = ACTIONS(SHIFT(431)),
    },
    [430] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(432)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(429)),
    },
    [431] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression, 1)),
        [anon_sym_COMMA] = ACTIONS(REDUCE(sym__expression, 1)),
    },
    [432] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 3)),
    },
    [433] = {
        [sym__code_block] = ACTIONS(SHIFT(434)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(173)),
    },
    [434] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_statement, 5)),
    },
    [435] = {
        [sym__expression] = ACTIONS(SHIFT(436)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(426)),
        [sym_identifier] = ACTIONS(SHIFT(423)),
    },
    [436] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(437)),
    },
    [437] = {
        [sym__expression] = ACTIONS(SHIFT(438)),
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(425)),
    },
    [438] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [439] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(442)),
    },
    [440] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym__expression] = ACTIONS(SHIFT(441)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym_identifier] = ACTIONS(SHIFT(349)),
    },
    [441] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [442] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym__expression] = ACTIONS(SHIFT(443)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym_identifier] = ACTIONS(SHIFT(349)),
    },
    [443] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [444] = {
        [sym_identifier] = ACTIONS(SHIFT(445)),
    },
    [445] = {
        [sym_tuple_pattern] = ACTIONS(SHIFT(446)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(391)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 3)),
    },
    [446] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_in] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_QMARK] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
        [anon_sym_as] = ACTIONS(REDUCE(sym_enum_case_pattern, 4)),
    },
    [447] = {
        [anon_sym_in] = ACTIONS(SHIFT(402)),
    },
    [448] = {
        [sym__expression] = ACTIONS(SHIFT(449)),
        [sym_identifier] = ACTIONS(SHIFT(349)),
    },
    [449] = {
        [sym__code_block] = ACTIONS(SHIFT(450)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(173)),
    },
    [450] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_in_statement, 5)),
    },
    [451] = {
        [sym__type_annotation] = ACTIONS(SHIFT(453)),
        [anon_sym_COLON] = ACTIONS(SHIFT(454)),
    },
    [452] = {
        [sym__type_annotation] = ACTIONS(REDUCE(sym__variable_name, 1)),
        [anon_sym_COLON] = ACTIONS(REDUCE(sym__variable_name, 1)),
    },
    [453] = {
        [sym__code_block] = ACTIONS(SHIFT(461)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(462)),
    },
    [454] = {
        [sym_type] = ACTIONS(SHIFT(455)),
        [sym__type_identifier] = ACTIONS(SHIFT(456)),
        [sym__type_name] = ACTIONS(SHIFT(457)),
        [sym_identifier] = ACTIONS(SHIFT(458)),
    },
    [455] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_annotation, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_annotation, 2)),
    },
    [456] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [457] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(459)),
    },
    [458] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [459] = {
        [sym__type_identifier] = ACTIONS(SHIFT(460)),
        [sym__type_name] = ACTIONS(SHIFT(457)),
        [sym_identifier] = ACTIONS(SHIFT(458)),
    },
    [460] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [461] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_variable_declaration, 4)),
    },
    [462] = {
        [sym__statement] = ACTIONS(SHIFT(99)),
        [sym__loop_statement] = ACTIONS(SHIFT(100)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [sym_for_in_statement] = ACTIONS(SHIFT(4)),
        [sym_while_statement] = ACTIONS(SHIFT(4)),
        [sym_repeat_while_statement] = ACTIONS(SHIFT(4)),
        [sym_if_statement] = ACTIONS(SHIFT(100)),
        [sym_guard_statement] = ACTIONS(SHIFT(100)),
        [sym_switch_statement] = ACTIONS(SHIFT(100)),
        [sym_labeled_statement] = ACTIONS(SHIFT(100)),
        [sym_break_statement] = ACTIONS(SHIFT(100)),
        [sym_continue_statement] = ACTIONS(SHIFT(100)),
        [sym_return_statement] = ACTIONS(SHIFT(100)),
        [sym_throw_statement] = ACTIONS(SHIFT(100)),
        [sym_defer_statement] = ACTIONS(SHIFT(100)),
        [sym_do_statement] = ACTIONS(SHIFT(100)),
        [sym_build_configuration_statement] = ACTIONS(SHIFT(100)),
        [sym_line_control_statement] = ACTIONS(SHIFT(100)),
        [sym__declaration] = ACTIONS(SHIFT(100)),
        [sym_import_declaration] = ACTIONS(SHIFT(5)),
        [sym__expression] = ACTIONS(SHIFT(100)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(463)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [anon_sym_while] = ACTIONS(SHIFT(8)),
        [anon_sym_repeat] = ACTIONS(SHIFT(9)),
        [anon_sym_if] = ACTIONS(SHIFT(10)),
        [anon_sym_guard] = ACTIONS(SHIFT(11)),
        [anon_sym_switch] = ACTIONS(SHIFT(12)),
        [anon_sym_RBRACE] = ACTIONS(SHIFT(464)),
        [anon_sym_break] = ACTIONS(SHIFT(13)),
        [anon_sym_continue] = ACTIONS(SHIFT(14)),
        [sym_fallthrough_statement] = ACTIONS(SHIFT(100)),
        [anon_sym_return] = ACTIONS(SHIFT(15)),
        [anon_sym_throw] = ACTIONS(SHIFT(16)),
        [anon_sym_defer] = ACTIONS(SHIFT(17)),
        [anon_sym_do] = ACTIONS(SHIFT(18)),
        [anon_sym_POUNDif] = ACTIONS(SHIFT(19)),
        [anon_sym_POUNDline] = ACTIONS(SHIFT(20)),
        [anon_sym_import] = ACTIONS(SHIFT(21)),
        [sym_identifier] = ACTIONS(SHIFT(22)),
    },
    [463] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(465)),
    },
    [464] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 2)),
    },
    [465] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [466] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(REDUCE(sym_for_statement, 3)),
    },
    [467] = {
        [sym__expression] = ACTIONS(SHIFT(468)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(442)),
        [sym_identifier] = ACTIONS(SHIFT(423)),
    },
    [468] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(469)),
    },
    [469] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym__expression] = ACTIONS(SHIFT(470)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym_identifier] = ACTIONS(SHIFT(349)),
    },
    [470] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [471] = {
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
        [anon_sym_POUNDif] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_POUNDline] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_import] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_identifier] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [472] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_swift);
