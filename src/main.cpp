#include <iostream>
#include "main.h"

int main() {
    std::cout << "Welcome to Ninjicken\n";
    std::cout << "Copyright 2020 Andrew Mather\n";
    std::cout << "Use \"help\" to show commands\n";
    std::cout << "Don't have too much fun!\n\n";

    // Initialise stuff
    show_board();

    for (;;) {
        // Program runs
        // If computers turn run think

        // If persons turn ask for input
        std::cout << "Input> ";
        
        // Check if a command
        // Else parse entered move
        break;
    }

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
    std::cout << "\n";
}