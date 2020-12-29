#include <iostream>
#include "eval.h"

// Need to teach checkmate and stalemate / value of the king

int evaluate(Board board) {

    int white_value{0}, black_value{0};
    // Loop over pieces plus the empty position
    for (int i = 0; i < NUM_PIECE_TYPES+1; i++) {
        white_value += board.white_pieces[i] * PIECE_VALUES[i+1];
        black_value += board.black_pieces[i] * PIECE_VALUES[i+1];
    }

    std::cout << white_value;
    std::cout << "\n";
    std::cout << black_value;
    std::cout << "\n";

    int eval = white_value - black_value;
    return eval;
}