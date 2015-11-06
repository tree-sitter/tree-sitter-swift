#include "tree_sitter/parser.h"

#define STATE_COUNT 6
#define SYMBOL_COUNT 7

enum {
    sym_program = ts_builtin_sym_start,
    sym__statement,
    aux_sym_program_repeat1,
    sym__expression,
    sym__declaration,
};

static const char *ts_symbol_names[] = {
    [sym_program] = "program",
    [sym__statement] = "_statement",
    [aux_sym_program_repeat1] = "program_repeat1",
    [ts_builtin_sym_error] = "ERROR",
    [ts_builtin_sym_end] = "END",
    [sym__expression] = "_expression",
    [sym__declaration] = "_declaration",
};

static const TSNodeType ts_node_types[SYMBOL_COUNT] = {
    [sym_program] = TSNodeTypeNamed,
    [sym__statement] = TSNodeTypeHidden,
    [aux_sym_program_repeat1] = TSNodeTypeHidden,
    [ts_builtin_sym_error] = TSNodeTypeNamed,
    [ts_builtin_sym_end] = TSNodeTypeHidden,
    [sym__expression] = TSNodeTypeHidden,
    [sym__declaration] = TSNodeTypeHidden,
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
            if (lookahead == 'i')
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(9);
            LEX_ERROR();
        case 2:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 3:
            if (lookahead == 'm')
                ADVANCE(4);
            LEX_ERROR();
        case 4:
            if (lookahead == 'p')
                ADVANCE(5);
            LEX_ERROR();
        case 5:
            if (lookahead == 'o')
                ADVANCE(6);
            LEX_ERROR();
        case 6:
            if (lookahead == 'r')
                ADVANCE(7);
            LEX_ERROR();
        case 7:
            if (lookahead == 't')
                ADVANCE(8);
            LEX_ERROR();
        case 8:
            ACCEPT_TOKEN(sym__declaration);
        case 9:
            if (lookahead == 'r')
                ADVANCE(10);
            LEX_ERROR();
        case 10:
            if (lookahead == 'y')
                ADVANCE(11);
            LEX_ERROR();
        case 11:
            ACCEPT_TOKEN(sym__expression);
        case 12:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(12);
            LEX_ERROR();
        case ts_lex_state_error:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(1);
            if (lookahead == 'i')
                ADVANCE(3);
            if (lookahead == 't')
                ADVANCE(9);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 1,
    [1] = 12,
    [2] = 1,
    [3] = 12,
    [4] = 1,
    [5] = 12,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static const TSParseAction *ts_parse_actions[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_program] = ACTIONS(SHIFT(1)),
        [sym__statement] = ACTIONS(SHIFT(2)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(3)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_program, 0)),
        [sym__expression] = ACTIONS(SHIFT(4)),
        [sym__declaration] = ACTIONS(SHIFT(4)),
    },
    [1] = {
        [ts_builtin_sym_end] = ACTIONS(ACCEPT_INPUT()),
    },
    [2] = {
        [sym__statement] = ACTIONS(SHIFT(2)),
        [aux_sym_program_repeat1] = ACTIONS(SHIFT(5)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym_program_repeat1, 1)),
        [sym__expression] = ACTIONS(SHIFT(4)),
        [sym__declaration] = ACTIONS(SHIFT(4)),
    },
    [3] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym_program, 1)),
    },
    [4] = {
        [sym__statement] = ACTIONS(REDUCE(sym__statement, 1)),
        [aux_sym_program_repeat1] = ACTIONS(REDUCE(sym__statement, 1)),
        [ts_builtin_sym_end] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__expression] = ACTIONS(REDUCE(sym__statement, 1)),
        [sym__declaration] = ACTIONS(REDUCE(sym__statement, 1)),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(REDUCE(aux_sym_program_repeat1, 2)),
    },
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_swift);
