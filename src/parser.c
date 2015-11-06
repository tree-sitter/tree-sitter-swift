#include "tree_sitter/parser.h"

#define STATE_COUNT 77
#define SYMBOL_COUNT 31

enum {
    sym_program = ts_builtin_sym_start,
    sym__statement,
    sym__statements,
    sym__loop_statement,
    sym_for_statement,
    sym__for_init,
    sym__for_condition,
    sym__code_block,
    sym_variable_declaration,
    sym__variable_name,
    sym__expression_list,
    sym_type,
    sym__type_annotation,
    sym__type_identifier,
    sym__type_name,
    aux_sym__statements_repeat1,
    aux_sym__expression_list_repeat1,
    anon_sym_SEMI,
    anon_sym_for,
    anon_sym_LPAREN,
    anon_sym_RPAREN,
    anon_sym_LBRACE,
    anon_sym_RBRACE,
    sym__declaration,
    sym__variable_declaration_head,
    sym__expression,
    anon_sym_COMMA,
    sym_identifier,
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
    [sym__code_block] = "_code_block",
    [sym_variable_declaration] = "variable_declaration",
    [sym__variable_name] = "_variable_name",
    [sym__expression_list] = "_expression_list",
    [sym_type] = "type",
    [sym__type_annotation] = "_type_annotation",
    [sym__type_identifier] = "_type_identifier",
    [sym__type_name] = "_type_name",
    [aux_sym__statements_repeat1] = "_statements_repeat1",
    [aux_sym__expression_list_repeat1] = "_expression_list_repeat1",
    [ts_builtin_sym_error] = "ERROR",
    [ts_builtin_sym_end] = "END",
    [anon_sym_SEMI] = ";",
    [anon_sym_for] = "for",
    [anon_sym_LPAREN] = "(",
    [anon_sym_RPAREN] = ")",
    [anon_sym_LBRACE] = "{",
    [anon_sym_RBRACE] = "}",
    [sym__declaration] = "_declaration",
    [sym__variable_declaration_head] = "_variable_declaration_head",
    [sym__expression] = "_expression",
    [anon_sym_COMMA] = ",",
    [sym_identifier] = "identifier",
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
    [sym__code_block] = TSNodeTypeHidden,
    [sym_variable_declaration] = TSNodeTypeNamed,
    [sym__variable_name] = TSNodeTypeHidden,
    [sym__expression_list] = TSNodeTypeHidden,
    [sym_type] = TSNodeTypeNamed,
    [sym__type_annotation] = TSNodeTypeHidden,
    [sym__type_identifier] = TSNodeTypeHidden,
    [sym__type_name] = TSNodeTypeHidden,
    [aux_sym__statements_repeat1] = TSNodeTypeHidden,
    [aux_sym__expression_list_repeat1] = TSNodeTypeHidden,
    [ts_builtin_sym_error] = TSNodeTypeNamed,
    [ts_builtin_sym_end] = TSNodeTypeHidden,
    [anon_sym_SEMI] = TSNodeTypeAnonymous,
    [anon_sym_for] = TSNodeTypeAnonymous,
    [anon_sym_LPAREN] = TSNodeTypeAnonymous,
    [anon_sym_RPAREN] = TSNodeTypeAnonymous,
    [anon_sym_LBRACE] = TSNodeTypeAnonymous,
    [anon_sym_RBRACE] = TSNodeTypeAnonymous,
    [sym__declaration] = TSNodeTypeHidden,
    [sym__variable_declaration_head] = TSNodeTypeHidden,
    [sym__expression] = TSNodeTypeHidden,
    [anon_sym_COMMA] = TSNodeTypeAnonymous,
    [sym_identifier] = TSNodeTypeNamed,
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
            if (lookahead == 'f')
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(6);
            if (lookahead == 't')
                ADVANCE(12);
            LEX_ERROR();
        case 2:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 3:
            if (lookahead == 'o')
                ADVANCE(4);
            LEX_ERROR();
        case 4:
            if (lookahead == 'r')
                ADVANCE(5);
            LEX_ERROR();
        case 5:
            ACCEPT_TOKEN(anon_sym_for);
        case 6:
            if (lookahead == 'm')
                ADVANCE(7);
            LEX_ERROR();
        case 7:
            if (lookahead == 'p')
                ADVANCE(8);
            LEX_ERROR();
        case 8:
            if (lookahead == 'o')
                ADVANCE(9);
            LEX_ERROR();
        case 9:
            if (lookahead == 'r')
                ADVANCE(10);
            LEX_ERROR();
        case 10:
            if (lookahead == 't')
                ADVANCE(11);
            LEX_ERROR();
        case 11:
            ACCEPT_TOKEN(sym__declaration);
        case 12:
            if (lookahead == 'r')
                ADVANCE(13);
            LEX_ERROR();
        case 13:
            if (lookahead == 'y')
                ADVANCE(14);
            LEX_ERROR();
        case 14:
            ACCEPT_TOKEN(sym__expression);
        case 15:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(15);
            LEX_ERROR();
        case 16:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(16);
            if (lookahead == ';')
                ADVANCE(17);
            if (lookahead == 'f')
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(6);
            if (lookahead == 't')
                ADVANCE(12);
            LEX_ERROR();
        case 17:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 18:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(18);
            if (lookahead == '(')
                ADVANCE(19);
            if (lookahead == ';')
                ADVANCE(17);
            if (lookahead == 't')
                ADVANCE(12);
            if (lookahead == 'v')
                ADVANCE(20);
            LEX_ERROR();
        case 19:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 20:
            if (lookahead == 'a')
                ADVANCE(21);
            LEX_ERROR();
        case 21:
            if (lookahead == 'r')
                ADVANCE(22);
            LEX_ERROR();
        case 22:
            ACCEPT_TOKEN(sym__variable_declaration_head);
        case 23:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(23);
            if (lookahead == ';')
                ADVANCE(17);
            LEX_ERROR();
        case 24:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(24);
            if (lookahead == '{')
                ADVANCE(25);
            LEX_ERROR();
        case 25:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 26:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(26);
            if (lookahead == ';')
                ADVANCE(17);
            if (lookahead == 't')
                ADVANCE(12);
            LEX_ERROR();
        case 27:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(27);
            if (lookahead == ';')
                ADVANCE(17);
            if (lookahead == 't')
                ADVANCE(12);
            if (lookahead == 'v')
                ADVANCE(20);
            LEX_ERROR();
        case 28:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(28);
            if (lookahead == '`')
                ADVANCE(29);
            LEX_ERROR();
        case 29:
            LEX_ERROR();
        case 30:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(30);
            if (lookahead == ',')
                ADVANCE(31);
            if (lookahead == ';')
                ADVANCE(17);
            LEX_ERROR();
        case 31:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 32:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(32);
            if (lookahead == 't')
                ADVANCE(12);
            LEX_ERROR();
        case 33:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(33);
            if (lookahead == '.')
                ADVANCE(34);
            if (lookahead == '{')
                ADVANCE(25);
            LEX_ERROR();
        case 34:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 35:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(35);
            if (lookahead == 'f')
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(6);
            if (lookahead == 't')
                ADVANCE(12);
            if (lookahead == '}')
                ADVANCE(36);
            LEX_ERROR();
        case 36:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 37:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(37);
            if (lookahead == '}')
                ADVANCE(36);
            LEX_ERROR();
        case 38:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(38);
            if (lookahead == ';')
                ADVANCE(17);
            if (lookahead == 'f')
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(6);
            if (lookahead == 't')
                ADVANCE(12);
            if (lookahead == '}')
                ADVANCE(36);
            LEX_ERROR();
        case 39:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(39);
            if (lookahead == ')')
                ADVANCE(40);
            LEX_ERROR();
        case 40:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 41:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(41);
            if (lookahead == ')')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(12);
            LEX_ERROR();
        case 42:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(12);
            if (lookahead == '{')
                ADVANCE(25);
            LEX_ERROR();
        case 43:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(43);
            if (lookahead == '(')
                ADVANCE(19);
            if (lookahead == ')')
                ADVANCE(40);
            if (lookahead == ',')
                ADVANCE(31);
            if (lookahead == '.')
                ADVANCE(34);
            if (lookahead == ';')
                ADVANCE(17);
            if (lookahead == '`')
                ADVANCE(29);
            if (lookahead == 'f')
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(6);
            if (lookahead == 't')
                ADVANCE(12);
            if (lookahead == 'v')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(25);
            if (lookahead == '}')
                ADVANCE(36);
            LEX_ERROR();
        case ts_lex_state_error:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(43);
            if (lookahead == '(')
                ADVANCE(19);
            if (lookahead == ')')
                ADVANCE(40);
            if (lookahead == ',')
                ADVANCE(31);
            if (lookahead == '.')
                ADVANCE(34);
            if (lookahead == ';')
                ADVANCE(17);
            if (lookahead == '`')
                ADVANCE(29);
            if (lookahead == 'f')
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(6);
            if (lookahead == 't')
                ADVANCE(12);
            if (lookahead == 'v')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(25);
            if (lookahead == '}')
                ADVANCE(36);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 1,
    [1] = 15,
    [2] = 1,
    [3] = 15,
    [4] = 16,
    [5] = 16,
    [6] = 15,
    [7] = 18,
    [8] = 23,
    [9] = 24,
    [10] = 23,
    [11] = 26,
    [12] = 27,
    [13] = 28,
    [14] = 30,
    [15] = 23,
    [16] = 32,
    [17] = 30,
    [18] = 23,
    [19] = 28,
    [20] = 28,
    [21] = 24,
    [22] = 24,
    [23] = 24,
    [24] = 33,
    [25] = 33,
    [26] = 28,
    [27] = 24,
    [28] = 23,
    [29] = 35,
    [30] = 35,
    [31] = 37,
    [32] = 38,
    [33] = 38,
    [34] = 37,
    [35] = 18,
    [36] = 24,
    [37] = 27,
    [38] = 23,
    [39] = 39,
    [40] = 26,
    [41] = 41,
    [42] = 23,
    [43] = 41,
    [44] = 39,
    [45] = 39,
    [46] = 24,
    [47] = 38,
    [48] = 35,
    [49] = 37,
    [50] = 38,
    [51] = 26,
    [52] = 23,
    [53] = 41,
    [54] = 39,
    [55] = 38,
    [56] = 35,
    [57] = 23,
    [58] = 37,
    [59] = 39,
    [60] = 24,
    [61] = 16,
    [62] = 35,
    [63] = 37,
    [64] = 16,
    [65] = 42,
    [66] = 23,
    [67] = 42,
    [68] = 24,
    [69] = 24,
    [70] = 16,
    [71] = 26,
    [72] = 23,
    [73] = 42,
    [74] = 24,
    [75] = 1,
    [76] = 15,
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
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(6)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statements, 0)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [sym__declaration] = ACTIONS(SHIFT(4)),
        [sym__expression] = ACTIONS(SHIFT(4)),
    },
    [1] = {
        [ts_builtin_sym_end] = ACTIONS(ACCEPT_INPUT()),
    },
    [2] = {
        [sym__statement] = ACTIONS(SHIFT(2)),
        [sym__loop_statement] = ACTIONS(SHIFT(4)),
        [sym_for_statement] = ACTIONS(SHIFT(5)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(76)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [anon_sym_for] = ACTIONS(SHIFT(7)),
        [sym__declaration] = ACTIONS(SHIFT(4)),
        [sym__expression] = ACTIONS(SHIFT(4)),
    },
    [3] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_program, 1)),
    },
    [4] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(75)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 1)),
    },
    [5] = {
        [sym__statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__loop_statement, 1)),
    },
    [6] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statements, 1)),
    },
    [7] = {
        [sym__for_init] = ACTIONS(SHIFT(8)),
        [sym__for_condition] = ACTIONS(SHIFT(9)),
        [sym_variable_declaration] = ACTIONS(SHIFT(10)),
        [sym__expression_list] = ACTIONS(SHIFT(10)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(11)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(12)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(13)),
        [sym__expression] = ACTIONS(SHIFT(14)),
    },
    [8] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(71)),
    },
    [9] = {
        [sym__code_block] = ACTIONS(SHIFT(70)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(62)),
    },
    [10] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__for_init, 1)),
    },
    [11] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(65)),
        [sym__expression] = ACTIONS(SHIFT(66)),
    },
    [12] = {
        [sym__for_init] = ACTIONS(SHIFT(38)),
        [sym__for_condition] = ACTIONS(SHIFT(59)),
        [sym_variable_declaration] = ACTIONS(SHIFT(10)),
        [sym__expression_list] = ACTIONS(SHIFT(10)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(40)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(13)),
        [sym__expression] = ACTIONS(SHIFT(14)),
    },
    [13] = {
        [sym__variable_name] = ACTIONS(SHIFT(19)),
        [sym_identifier] = ACTIONS(SHIFT(20)),
    },
    [14] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(15)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(16)),
    },
    [15] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 2)),
    },
    [16] = {
        [sym__expression] = ACTIONS(SHIFT(17)),
    },
    [17] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(18)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(16)),
    },
    [18] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 3)),
    },
    [19] = {
        [sym_type] = ACTIONS(SHIFT(21)),
        [sym__type_annotation] = ACTIONS(SHIFT(22)),
        [sym__type_identifier] = ACTIONS(SHIFT(23)),
        [sym__type_name] = ACTIONS(SHIFT(24)),
        [sym_identifier] = ACTIONS(SHIFT(25)),
    },
    [20] = {
        [sym_type] = ACTIONS(REDUCE(sym__variable_name, 1)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym__variable_name, 1)),
        [sym__type_identifier] = ACTIONS(REDUCE(sym__variable_name, 1)),
        [sym__type_name] = ACTIONS(REDUCE(sym__variable_name, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_name, 1)),
    },
    [21] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_annotation, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_annotation, 1)),
    },
    [22] = {
        [sym__code_block] = ACTIONS(SHIFT(28)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(29)),
    },
    [23] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [24] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(26)),
    },
    [25] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [26] = {
        [sym__type_identifier] = ACTIONS(SHIFT(27)),
        [sym__type_name] = ACTIONS(SHIFT(24)),
        [sym_identifier] = ACTIONS(SHIFT(25)),
    },
    [27] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [28] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_variable_declaration, 4)),
    },
    [29] = {
        [sym__statement] = ACTIONS(SHIFT(30)),
        [sym__statements] = ACTIONS(SHIFT(31)),
        [sym__loop_statement] = ACTIONS(SHIFT(32)),
        [sym_for_statement] = ACTIONS(SHIFT(33)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(34)),
        [anon_sym_for] = ACTIONS(SHIFT(35)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(32)),
        [sym__expression] = ACTIONS(SHIFT(32)),
    },
    [30] = {
        [sym__statement] = ACTIONS(SHIFT(30)),
        [sym__loop_statement] = ACTIONS(SHIFT(32)),
        [sym_for_statement] = ACTIONS(SHIFT(33)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(58)),
        [anon_sym_for] = ACTIONS(SHIFT(35)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 1)),
        [sym__declaration] = ACTIONS(SHIFT(32)),
        [sym__expression] = ACTIONS(SHIFT(32)),
    },
    [31] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(57)),
    },
    [32] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(56)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 1)),
    },
    [33] = {
        [sym__statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__loop_statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__loop_statement, 1)),
    },
    [34] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 1)),
    },
    [35] = {
        [sym__for_init] = ACTIONS(SHIFT(8)),
        [sym__for_condition] = ACTIONS(SHIFT(36)),
        [sym_variable_declaration] = ACTIONS(SHIFT(10)),
        [sym__expression_list] = ACTIONS(SHIFT(10)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(11)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(37)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(13)),
        [sym__expression] = ACTIONS(SHIFT(14)),
    },
    [36] = {
        [sym__code_block] = ACTIONS(SHIFT(55)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(48)),
    },
    [37] = {
        [sym__for_init] = ACTIONS(SHIFT(38)),
        [sym__for_condition] = ACTIONS(SHIFT(39)),
        [sym_variable_declaration] = ACTIONS(SHIFT(10)),
        [sym__expression_list] = ACTIONS(SHIFT(10)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(40)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(13)),
        [sym__expression] = ACTIONS(SHIFT(14)),
    },
    [38] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(51)),
    },
    [39] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(46)),
    },
    [40] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(41)),
        [sym__expression] = ACTIONS(SHIFT(42)),
    },
    [41] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym__expression] = ACTIONS(SHIFT(45)),
    },
    [42] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(43)),
    },
    [43] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym__expression] = ACTIONS(SHIFT(44)),
    },
    [44] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [45] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [46] = {
        [sym__code_block] = ACTIONS(SHIFT(47)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(48)),
    },
    [47] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 5)),
    },
    [48] = {
        [sym__statement] = ACTIONS(SHIFT(30)),
        [sym__statements] = ACTIONS(SHIFT(49)),
        [sym__loop_statement] = ACTIONS(SHIFT(32)),
        [sym_for_statement] = ACTIONS(SHIFT(33)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(34)),
        [anon_sym_for] = ACTIONS(SHIFT(35)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(32)),
        [sym__expression] = ACTIONS(SHIFT(32)),
    },
    [49] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(50)),
    },
    [50] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [51] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(43)),
        [sym__expression] = ACTIONS(SHIFT(52)),
    },
    [52] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(53)),
    },
    [53] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym__expression] = ACTIONS(SHIFT(54)),
    },
    [54] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [55] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 3)),
    },
    [56] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [57] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [58] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
    },
    [59] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(60)),
    },
    [60] = {
        [sym__code_block] = ACTIONS(SHIFT(61)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(62)),
    },
    [61] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 5)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 5)),
    },
    [62] = {
        [sym__statement] = ACTIONS(SHIFT(30)),
        [sym__statements] = ACTIONS(SHIFT(63)),
        [sym__loop_statement] = ACTIONS(SHIFT(32)),
        [sym_for_statement] = ACTIONS(SHIFT(33)),
        [aux_sym__statements_repeat1] = ACTIONS(SHIFT(34)),
        [anon_sym_for] = ACTIONS(SHIFT(35)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(32)),
        [sym__expression] = ACTIONS(SHIFT(32)),
    },
    [63] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(64)),
    },
    [64] = {
        [sym__statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__code_block, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__code_block, 3)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym__code_block, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [65] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym__expression] = ACTIONS(SHIFT(69)),
    },
    [66] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(67)),
    },
    [67] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym__expression] = ACTIONS(SHIFT(68)),
    },
    [68] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [69] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [70] = {
        [sym__statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym_for_statement] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [anon_sym_for] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__declaration] = ACTIONS(REDUCE(sym_for_statement, 3)),
        [sym__expression] = ACTIONS(REDUCE(sym_for_statement, 3)),
    },
    [71] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(67)),
        [sym__expression] = ACTIONS(SHIFT(72)),
    },
    [72] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(73)),
    },
    [73] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym__expression] = ACTIONS(SHIFT(74)),
    },
    [74] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [75] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym__statements_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [76] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym__statements_repeat1, 2)),
    },
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_swift);
