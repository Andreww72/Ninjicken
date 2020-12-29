#ifndef BOARD_H
#define BOARD_H

const int NUM_PIECE_TYPES{6};
enum Pieces {
    EMPTY,  // 0 
    PAWN,   // 1
    KNIGHT, // 2
    BISHOP, // 3
    ROOK,   // 4
    QUEEN,  // 5
    KING    // 6
};

class Board {

    public:
        // Board state
        int board[8][8]{
            {ROOK, KNIGHT, BISHOP, QUEEN, KING, BISHOP, KNIGHT, ROOK},
            {PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN},
            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
            {PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN},
            {ROOK, KNIGHT, BISHOP, QUEEN, KING, BISHOP, KNIGHT, ROOK}
        };

        // Move stack here
        int moves;

        // Piece counts
        int white_pieces[7]{0, 8, 2, 2, 2, 1, 1};
        int black_pieces[7]{0, 8, 2, 2, 2, 1, 1};

        // Castling rights
        bool whiteCastleKing = false;
        bool whiteCastleQueen = false;
        bool blackCastleKing = false;
        bool blackCastleQueen = false;

        // En passant?

        // Methods
        int genMoves();
        bool checkMove();
        int makeMove();
        int undoMove();
};

#endif