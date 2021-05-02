#include "main.h"

// TODO
// Board representation and rules
// Basic alpha beta search
// Basic evaluation function
// GUI interface
// Opening book
// 5 men endgame tablebase
// Bitboard board representation
// Parallel search function
// Ongoing improvement of search and evaluate

int main() {
    std::cout << "Welcome to Ninjicken\n";
    std::cout << "Copyright 2020 Andrew Mather\n";
    std::cout << "Use \"help\" to show commands\n";
    std::cout << "Don't have too much fun!\n\n";

    // Initialise stuff
    bool play{false};
    bool playerTurn{true};
    int colour;
    Board gameBoard;
    show_board(gameBoard);

    for (;;) {
        // Is it the computer's turn?
        if (play && !playerTurn) {
            std::cout << "Computer's turn\n";

            // Computer think and play move here

            // End of turn pass over to player
            playerTurn = true;

            std::cout << "Computer played ..\n";
            show_board(gameBoard);
            continue;
        }

        // If persons turn ask for input
        std::string inputStr;
        std::cout << "\nNinjicken: ";
        std::cin >> inputStr;

        // Check if a command
        // Else parse entered move
        if (inputStr.compare("help") == 0) {
            std::cout << "help - display help menu\n";
            std::cout << "quit - quit program\n";
            std::cout << "show - show board\n";
            std::cout << "play - play game and select colour\n";
            std::cout << "end - end game and reset board\n";
            std::cout << "eval - evaluation score\n";
            std::cout << "undo - undo prev move not implemented\n";
            std::cout << "depth n - search depth not implemented\n";
            std::cout << "time n - search time not implemented\n";
            continue;
        }
        if (inputStr.compare("quit") == 0) {
            std::cout << "Quitting Ninjicken\n";
            break;
        }
        if (inputStr.compare("show") == 0 || inputStr.compare("s") == 0) {
            show_board(gameBoard);
            continue;
        }
        if (inputStr.compare("play") == 0) {
            if (play) {
                std::cout << "Game already in progress\n";
                continue;
            }

            std::cout << "Beginning a game\n";
            std::cout << "Select white (0) or black (1): ";
            int colourSelect;
            std::cin >> colourSelect;

            if (colourSelect == WHITE) {
                colour = WHITE;
                play = true;
                playerTurn = true;
                std::cout << "Game beginning as white\n";
            } else if (colourSelect == BLACK) {
                colour = BLACK;
                play = true;
                playerTurn = false;
                std::cout << "Game beginning as black\n";
            } else {
                std::cout << "Invalid choice\n";
                play = false;
            }
            continue;
        }
        if (inputStr.compare("end") == 0) {
            std::cout << "Game state reset\n";
            play = false;
            // DESTROY BOARD OBJECT
            // CREATE NEW BOARD OBJECT
            show_board(gameBoard);
            continue;
        }
        if (inputStr.compare("eval") == 0) {
            int eval = evaluate(gameBoard);;
            std::cout << "Evaluation: ";
            std::cout << eval;
            std::cout << "\n";
            continue;
        }

        // Not checks above passed, thus a move was entered
        // Check game in progress and players turn
        // Move parsing
        int move = parse_move(inputStr);
        gameBoard.makeMove(move);

        std::cout << "default";
        break;
    }

    return 0;
}

int parse_move(std::string move) {
    std::cout << move;
    return 1;
}

void show_board(Board gameBoard) {
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            switch (gameBoard.board[i][j]) {
                case EMPTY:
                    std::cout << ".";
                    break;
                case PAWN:
                    std::cout << "P";
                    break;
                case KNIGHT:
                    std::cout << "N";
                    break;
                case BISHOP:
                    std::cout << "B";
                    break;
                case ROOK:
                    std::cout << "R";
                    break;
                case QUEEN:
                    std::cout << "Q";
                    break;
                case KING:
                    std::cout << "K";
                    break;
            }
        }
        std::cout << "\n";
    }
}