#include <iostream>
#include <string>
#include <map>
#include "main.h"
using namespace std;

// TODO
    // Board representation and rules
    // Basic alpha beta search
    // Basic evaluation function
    // GUI interface
    // Opening book
    // 5 men endgame tablebase
    // Parallel search
    // Ongoing improvement of search and evaluate

int main() {
    cout << "Welcome to Ninjicken\n";
    cout << "Copyright 2020 Andrew Mather\n";
    cout << "Use \"help\" to show commands\n";
    cout << "Don't have too much fun!\n\n";

    // Initialise stuff
    bool play = false;
    bool playerTurn = true;
    int colour;
    show_board();

    // INIT BOARD
    // INIT OPENING BOOK
    // INIT TABLEBASES

    for (;;) {
        // If computers turn run think
        if (play && !playerTurn) {
            cout << "Computer's turn\n";
        }

        // If persons turn ask for input
        string inputStr;
        cout << "\nNinjicken: ";
        cin >> inputStr;

        // Check if a command
        // Else parse entered move
        if (inputStr.compare("help") == 0) {
            cout << "help - display help menu\n";
            cout << "quit - quit program\n";
            cout << "show - show board\n";
            cout << "play - play game and select colour\n";
            cout << "end - end game and reset board\n";
            cout << "undo - undo prev move not implemented\n";
            cout << "depth n - search depth not implemented\n";
            cout << "time n - search time not implemented\n";
            continue;
        }
        if (inputStr.compare("quit") == 0) {
            cout << "Quitting Ninjicken\n";
            break;
        }
        if (inputStr.compare("show") == 0 || inputStr.compare("s") == 0) {
            show_board();
            continue;
        }
        if (inputStr.compare("play") == 0) {
            if (play) {
                cout << "Game already in progress\n";
                continue;
            }

            cout << "Beginning a game\n";
            cout << "Select white (0) or black (1): ";
            int colourSelect;
            cin >> colourSelect;

            if (colourSelect == WHITE) {
                colour = WHITE;
                play = true;
                cout << "Game beginning as white\n";
            } else if (colourSelect == BLACK) {
                colour = BLACK;
                play = true;
                cout << "Game beginning as black\n";
            } else {
                cout << "Invalid choice\n";
                play = false;
            }
            continue;
        }
        if (inputStr.compare("end") == 0) {
            cout << "Game state reset\n";
            play = false;
            // TODO: reset here
            show_board();
            continue;
        }

        // Not checks above passed, thus a move was entered
        // Check game in progress and players turn
        // Move parsing

        cout << "default";
        break;
    }

    // close a book file if open
    return 0;
}

void show_board() {
    std::cout << "rnbqkbnr\n";
    std::cout << "pppppppp\n";
    std::cout << "........\n";
    std::cout << "........\n";
    std::cout << "........\n";
    std::cout << "........\n";
    std::cout << "PPPPPPPP\n";
    std::cout << "RNBQKBNR\n";
}