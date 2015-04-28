#ifndef MAIN_HPP
#define MAIN_HPP

#include "include/Libs.hpp"

#include "include/Piece.hpp"
#include "include/Bishop.hpp"
#include "include/King.hpp"
#include "include/Knight.hpp"
#include "include/Pawn.hpp"
#include "include/Queen.hpp"
#include "include/Rook.hpp"

extern unsigned int SIZE;
extern unsigned int* BOARD;
extern std::vector<Piece*> PIECES;

void printChecks();
void printBoard();
bool populate(unsigned int current = 0);

#endif // MAIN_HPP
