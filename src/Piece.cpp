#include "../Main.hpp"
using namespace std;

void Piece::place(unsigned int xPosition, unsigned int yPosition)
{
    xPos = xPosition;
    yPos = yPosition;
    BOARD[xPos * SIZE + yPos] = false;
    check();
}

Piece::~Piece() {}
