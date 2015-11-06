#include "tree_sitter/parser.h"

#define STATE_COUNT 62
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
    aux_sym_program_repeat1,
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
    [aux_sym_program_repeat1] = "program_repeat1",
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
    [aux_sym_program_repeat1] = TSNodeTypeHidden,
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
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(16);
            if (lookahead == ';')
                ADVANCE(17);
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
            if (lookahead == '{')
                ADVANCE(24);
            LEX_ERROR();
        case 24:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 25:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(25);
            if (lookahead == ';')
                ADVANCE(17);
            if (lookahead == 't')
                ADVANCE(12);
            LEX_ERROR();
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
            if (lookahead == 'v')
                ADVANCE(20);
            LEX_ERROR();
        case 27:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(27);
            if (lookahead == '`')
                ADVANCE(28);
            LEX_ERROR();
        case 28:
            LEX_ERROR();
        case 29:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(29);
            if (lookahead == ',')
                ADVANCE(30);
            if (lookahead == ';')
                ADVANCE(17);
            LEX_ERROR();
        case 30:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 31:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(31);
            if (lookahead == 't')
                ADVANCE(12);
            LEX_ERROR();
        case 32:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(32);
            if (lookahead == '.')
                ADVANCE(33);
            if (lookahead == '{')
                ADVANCE(24);
            LEX_ERROR();
        case 33:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 34:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(34);
            if (lookahead == 'f')
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(6);
            if (lookahead == 't')
                ADVANCE(12);
            if (lookahead == '}')
                ADVANCE(35);
            LEX_ERROR();
        case 35:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 36:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(36);
            if (lookahead == '}')
                ADVANCE(35);
            LEX_ERROR();
        case 37:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(37);
            if (lookahead == ')')
                ADVANCE(38);
            LEX_ERROR();
        case 38:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 39:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(39);
            if (lookahead == ')')
                ADVANCE(38);
            if (lookahead == 't')
                ADVANCE(12);
            LEX_ERROR();
        case 40:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(12);
            if (lookahead == '{')
                ADVANCE(24);
            LEX_ERROR();
        case 41:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(41);
            if (lookahead == '(')
                ADVANCE(19);
            if (lookahead == ')')
                ADVANCE(38);
            if (lookahead == ',')
                ADVANCE(30);
            if (lookahead == '.')
                ADVANCE(33);
            if (lookahead == ';')
                ADVANCE(17);
            if (lookahead == '`')
                ADVANCE(28);
            if (lookahead == 'f')
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(6);
            if (lookahead == 't')
                ADVANCE(12);
            if (lookahead == 'v')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(24);
            if (lookahead == '}')
                ADVANCE(35);
            LEX_ERROR();
        case ts_lex_state_error:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(41);
            if (lookahead == '(')
                ADVANCE(19);
            if (lookahead == ')')
                ADVANCE(38);
            if (lookahead == ',')
                ADVANCE(30);
            if (lookahead == '.')
                ADVANCE(33);
            if (lookahead == ';')
                ADVANCE(17);
            if (lookahead == '`')
                ADVANCE(28);
            if (lookahead == 'f')
                ADVANCE(3);
            if (lookahead == 'i')
                ADVANCE(6);
            if (lookahead == 't')
                ADVANCE(12);
            if (lookahead == 'v')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(24);
            if (lookahead == '}')
                ADVANCE(35);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 1,
    [1] = 15,
    [2] = 1,
    [3] = 16,
    [4] = 16,
    [5] = 15,
    [6] = 18,
    [7] = 16,
    [8] = 23,
    [9] = 16,
    [10] = 25,
    [11] = 26,
    [12] = 27,
    [13] = 29,
    [14] = 16,
    [15] = 31,
    [16] = 29,
    [17] = 16,
    [18] = 27,
    [19] = 27,
    [20] = 23,
    [21] = 23,
    [22] = 23,
    [23] = 32,
    [24] = 32,
    [25] = 27,
    [26] = 23,
    [27] = 16,
    [28] = 34,
    [29] = 34,
    [30] = 36,
    [31] = 16,
    [32] = 36,
    [33] = 34,
    [34] = 16,
    [35] = 36,
    [36] = 16,
    [37] = 37,
    [38] = 25,
    [39] = 39,
    [40] = 16,
    [41] = 39,
    [42] = 37,
    [43] = 37,
    [44] = 23,
    [45] = 16,
    [46] = 25,
    [47] = 16,
    [48] = 39,
    [49] = 37,
    [50] = 40,
    [51] = 16,
    [52] = 40,
    [53] = 23,
    [54] = 23,
    [55] = 16,
    [56] = 25,
    [57] = 16,
    [58] = 40,
    [59] = 23,
    [60] = 1,
    [61] = 15,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static const TSParseAction *ts_parse_actions[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_program] = ACTIONS(SHIFT(1)),
        [sym__statement] = ACTIONS(SHIFT(2)),
        [sym__loop_statement] = ACTIONS(SHIFT(3)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(5)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_program, 0)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [sym__declaration] = ACTIONS(SHIFT(3)),
        [sym__expression] = ACTIONS(SHIFT(3)),
    },
    [1] = {
        [ts_builtin_sym_end] = ACTIONS(ACCEPT_INPUT()),
    },
    [2] = {
        [sym__statement] = ACTIONS(SHIFT(2)),
        [sym__loop_statement] = ACTIONS(SHIFT(3)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(61)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [sym__declaration] = ACTIONS(SHIFT(3)),
        [sym__expression] = ACTIONS(SHIFT(3)),
    },
    [3] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(60)),
    },
    [4] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__loop_statement, 1)),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_program, 1)),
    },
    [6] = {
        [sym__for_init] = ACTIONS(SHIFT(7)),
        [sym__for_condition] = ACTIONS(SHIFT(8)),
        [sym_variable_declaration] = ACTIONS(SHIFT(9)),
        [sym__expression_list] = ACTIONS(SHIFT(9)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(10)),
        [anon_sym_LPAREN] = ACTIONS(SHIFT(11)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(12)),
        [sym__expression] = ACTIONS(SHIFT(13)),
    },
    [7] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(56)),
    },
    [8] = {
        [sym__code_block] = ACTIONS(SHIFT(55)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(28)),
    },
    [9] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__for_init, 1)),
    },
    [10] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(50)),
        [sym__expression] = ACTIONS(SHIFT(51)),
    },
    [11] = {
        [sym__for_init] = ACTIONS(SHIFT(36)),
        [sym__for_condition] = ACTIONS(SHIFT(37)),
        [sym_variable_declaration] = ACTIONS(SHIFT(9)),
        [sym__expression_list] = ACTIONS(SHIFT(9)),
        [anon_sym_SEMI] = ACTIONS(SHIFT(38)),
        [sym__variable_declaration_head] = ACTIONS(SHIFT(12)),
        [sym__expression] = ACTIONS(SHIFT(13)),
    },
    [12] = {
        [sym__variable_name] = ACTIONS(SHIFT(18)),
        [sym_identifier] = ACTIONS(SHIFT(19)),
    },
    [13] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(14)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 1)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(15)),
    },
    [14] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__expression_list, 2)),
    },
    [15] = {
        [sym__expression] = ACTIONS(SHIFT(16)),
    },
    [16] = {
        [aux_sym__expression_list_repeat1] = ACTIONS(SHIFT(17)),
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 2)),
        [anon_sym_COMMA] = ACTIONS(SHIFT(15)),
    },
    [17] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(aux_sym__expression_list_repeat1, 3)),
    },
    [18] = {
        [sym_type] = ACTIONS(SHIFT(20)),
        [sym__type_annotation] = ACTIONS(SHIFT(21)),
        [sym__type_identifier] = ACTIONS(SHIFT(22)),
        [sym__type_name] = ACTIONS(SHIFT(23)),
        [sym_identifier] = ACTIONS(SHIFT(24)),
    },
    [19] = {
        [sym_type] = ACTIONS(REDUCE(sym__variable_name, 1)),
        [sym__type_annotation] = ACTIONS(REDUCE(sym__variable_name, 1)),
        [sym__type_identifier] = ACTIONS(REDUCE(sym__variable_name, 1)),
        [sym__type_name] = ACTIONS(REDUCE(sym__variable_name, 1)),
        [sym_identifier] = ACTIONS(REDUCE(sym__variable_name, 1)),
    },
    [20] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_annotation, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_annotation, 1)),
    },
    [21] = {
        [sym__code_block] = ACTIONS(SHIFT(27)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(28)),
    },
    [22] = {
        [sym__code_block] = ACTIONS(REDUCE(sym_type, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym_type, 1)),
    },
    [23] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 1)),
        [anon_sym_DOT] = ACTIONS(SHIFT(25)),
    },
    [24] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_name, 1)),
        [anon_sym_DOT] = ACTIONS(REDUCE(sym__type_name, 1)),
    },
    [25] = {
        [sym__type_identifier] = ACTIONS(SHIFT(26)),
        [sym__type_name] = ACTIONS(SHIFT(23)),
        [sym_identifier] = ACTIONS(SHIFT(24)),
    },
    [26] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__type_identifier, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__type_identifier, 3)),
    },
    [27] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_variable_declaration, 4)),
    },
    [28] = {
        [sym__statement] = ACTIONS(SHIFT(29)),
        [sym__statements] = ACTIONS(SHIFT(30)),
        [sym__loop_statement] = ACTIONS(SHIFT(31)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(32)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 0)),
        [sym__declaration] = ACTIONS(SHIFT(31)),
        [sym__expression] = ACTIONS(SHIFT(31)),
    },
    [29] = {
        [sym__statement] = ACTIONS(SHIFT(29)),
        [sym__loop_statement] = ACTIONS(SHIFT(31)),
        [sym_for_statement] = ACTIONS(SHIFT(4)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(35)),
        [anon_sym_for] = ACTIONS(SHIFT(6)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [sym__declaration] = ACTIONS(SHIFT(31)),
        [sym__expression] = ACTIONS(SHIFT(31)),
    },
    [30] = {
        [anon_sym_RBRACE] = ACTIONS(SHIFT(34)),
    },
    [31] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(33)),
    },
    [32] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statements, 1)),
    },
    [33] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_RBRACE] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [34] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym__code_block, 3)),
    },
    [35] = {
        [anon_sym_RBRACE] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
    [36] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(46)),
    },
    [37] = {
        [anon_sym_RPAREN] = ACTIONS(SHIFT(44)),
    },
    [38] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(39)),
        [sym__expression] = ACTIONS(SHIFT(40)),
    },
    [39] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym__expression] = ACTIONS(SHIFT(43)),
    },
    [40] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(41)),
    },
    [41] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym__expression] = ACTIONS(SHIFT(42)),
    },
    [42] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [43] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [44] = {
        [sym__code_block] = ACTIONS(SHIFT(45)),
        [anon_sym_LBRACE] = ACTIONS(SHIFT(28)),
    },
    [45] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 5)),
    },
    [46] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(41)),
        [sym__expression] = ACTIONS(SHIFT(47)),
    },
    [47] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(48)),
    },
    [48] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym__expression] = ACTIONS(SHIFT(49)),
    },
    [49] = {
        [anon_sym_RPAREN] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [50] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 2)),
        [sym__expression] = ACTIONS(SHIFT(54)),
    },
    [51] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(52)),
    },
    [52] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [sym__expression] = ACTIONS(SHIFT(53)),
    },
    [53] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
    },
    [54] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 3)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 3)),
    },
    [55] = {
        [anon_sym_SEMI] = ACTIONS(REDUCE(sym_for_statement, 3)),
    },
    [56] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(52)),
        [sym__expression] = ACTIONS(SHIFT(57)),
    },
    [57] = {
        [anon_sym_SEMI] = ACTIONS(SHIFT(58)),
    },
    [58] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 4)),
        [sym__expression] = ACTIONS(SHIFT(59)),
    },
    [59] = {
        [sym__code_block] = ACTIONS(REDUCE(sym__for_condition, 5)),
        [anon_sym_LBRACE] = ACTIONS(REDUCE(sym__for_condition, 5)),
    },
    [60] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__loop_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym_for_statement] = ACTIONS(REDUCE(sym__statement, 2)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__statement, 2)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statement, 2)),
        [anon_sym_for] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 2)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 2)),
    },
    [61] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_swift);
