#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <string>
#include "eval.h"

const int WHITE = 0;
const int BLACK = 1;

void show_board(Board gameboard);
int parse_move(std::string move);

#endif