#ifndef EVAL_H
#define EVAL_H

#include "board.h"

const int VAL_PAWN{100};
const int VAL_KNIGHT{300};
const int VAL_BISHOP{325};
const int VAL_ROOK{500};
const int VAL_QUEEN{950};
const int VAL_KING{10000};
const int PIECE_VALUES[7]{0, VAL_PAWN, VAL_KNIGHT, VAL_BISHOP, VAL_ROOK, VAL_QUEEN, VAL_KING};

int evaluate(Board board);

#endif