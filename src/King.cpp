#include "../Main.hpp"
using namespace std;

char King::toString() const
{
    return 'K';
}

bool King::check(unsigned int xPosition, unsigned int yPosition) const
{
    for(unsigned int i{0}; i < ID - 1; i++)
    {
        if((PIECES[i]->xPos + 1 >= xPosition) and (PIECES[i]->xPos <= xPosition + 1) and (PIECES[i]->yPos + 1 >= yPosition) and (PIECES[i]->yPos <= yPosition + 1))
        {
            return false;
        }
    }
    return true;
}

void King::disable() const
{
    if(BOARD[yPos * SIZE + xPos] == 0)
    {
        BOARD[yPos * SIZE + xPos] = ID;
    }
    if(yPos > 0)
    {
        if(xPos > 0 and BOARD[(yPos - 1) * SIZE + (xPos - 1)] == 0)
        {
            BOARD[(yPos - 1) * SIZE + (xPos - 1)] = ID;
        }
        if(BOARD[(yPos - 1) * SIZE + xPos] == 0)
        {
            BOARD[(yPos - 1) * SIZE + xPos] = ID;
        }
        if(xPos < (SIZE - 1) and BOARD[(yPos - 1) * SIZE + (xPos + 1)] == 0)
        {
            BOARD[(yPos - 1) * SIZE + (xPos + 1)] = ID;
        }
    }
    if(xPos > 0 and BOARD[yPos * SIZE + (xPos - 1)] == 0)
    {
        BOARD[yPos * SIZE + (xPos - 1)] = ID;
    }
    if(xPos < (SIZE - 1) and BOARD[yPos * SIZE + (xPos + 1)] == 0)
    {
        BOARD[yPos * SIZE + (xPos + 1)] = ID;
    }
    if(yPos < (SIZE - 1))
    {
        if(xPos > 0 and BOARD[(yPos + 1) * SIZE + (xPos - 1)] == 0)
        {
            BOARD[(yPos + 1) * SIZE + (xPos - 1)] = ID;
        }
        if(BOARD[(yPos + 1) * SIZE + xPos] == 0)
        {
            BOARD[(yPos + 1) * SIZE + xPos] = ID;
        }
        if(xPos < (SIZE - 1) and BOARD[(yPos + 1) * SIZE + (xPos + 1)] == 0)
        {
            BOARD[(yPos + 1) * SIZE + (xPos + 1)] = ID;
        }
    }
}
