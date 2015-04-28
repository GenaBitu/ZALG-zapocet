#include "../Main.hpp"
using namespace std;

Piece::Piece() : xPos{}, yPos{} {}

void Piece::put(unsigned int xPosition, unsigned int yPosition)
{
    if(xPosition >= SIZE or yPosition >= SIZE)
    {
        cerr << "ERROR: Trying to place a Piece in an invalid spot!" << endl;
        return;
    }
    xPos = xPosition;
    yPos = yPosition;
    check();
}

bool Piece::tryPut(unsigned int xPosition, unsigned int yPosition)
{
    if(BOARD[yPosition * SIZE + xPosition])
    {
        return false;
    }
    else
    {
        put(xPosition, yPosition);
        return true;
    }
}


Piece::~Piece() {}
