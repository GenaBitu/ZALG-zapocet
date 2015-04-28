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
extern bool* BOARD;
extern std::vector<Piece*> PIECES;

void printBoard();

#endif // MAIN_HPP
