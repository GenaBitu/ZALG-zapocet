#include "../Main.hpp"
using namespace std;

unsigned int Piece::usedIDs = 1;

Piece::Piece() : xPos{}, yPos{}, ID{usedIDs}
{
    usedIDs++;
}

void Piece::put(unsigned int xPosition, unsigned int yPosition)
{
    if(xPosition >= SIZE or yPosition >= SIZE)
    {
        cerr << "ERROR: Trying to place a Piece in an invalid spot!" << endl;
        return;
    }
    xPos = xPosition;
    yPos = yPosition;
    disable();
}

void Piece::erase()
{
    for(unsigned int i{0}; i < SIZE * SIZE; i++)
    {
        if(BOARD[i] == ID)
        {
            BOARD[i] = 0;
        }
    }
}

bool Piece::tryPut(unsigned int xPosition, unsigned int yPosition)
{
    if((BOARD[yPosition * SIZE + xPosition] == 0) and check(xPosition, yPosition))
    {
        put(xPosition, yPosition);
        return true;
    }
    else
    {
        return false;
    }
}

Piece::~Piece() {}
