#ifndef EVAL_H
#define EVAL_H

#include <iostream>
#include "board.h"

#define DOUBLED_PAWN_PENALTY		10
#define ISOLATED_PAWN_PENALTY		20
#define BACKWARDS_PAWN_PENALTY		8
#define PASSED_PAWN_BONUS			20
#define ROOK_SEMI_OPEN_FILE_BONUS	10
#define ROOK_OPEN_FILE_BONUS		15
#define ROOK_ON_SEVENTH_BONUS		20

#define VAL_PAWN    100
#define VAL_KNIGHT  300
#define VAL_BISHOP  325
#define VAL_ROOK    500
#define VAL_QUEEN   950
#define VAL_KING    10000

// Zeroth index empty so piece indexes correspond with assigned enum value from board.h
extern const int PIECE_VALUES[7];

extern const int pawn_pcsq[64];
extern const int knight_pcsq[64];
extern const int bishop_pcsq[64];
extern const int king_pcsq[64];
extern const int king_endgame_pcsq[64];

int evaluate(Board board);

#endif