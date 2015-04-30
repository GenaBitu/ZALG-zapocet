#include "../Main.hpp"
using namespace std;

std::string Knight::toString()
{
    return "H";     //H for horse, K is taken by King
}

bool Knight::check(unsigned int xPosition, unsigned int yPosition)
{
    for(unsigned int i{0}; i < ID - 1; i++)
    {
        if(((PIECES[i]->xPos == xPosition + 2) and ((PIECES[i]->yPos == yPosition + 1) or (PIECES[i]->yPos + 1 == yPosition))) or ((PIECES[i]->xPos == xPosition + 1) and ((PIECES[i]->yPos == yPosition + 2) or (PIECES[i]->yPos + 2 == yPosition))) or ((PIECES[i]->xPos + 2 == xPosition) and ((PIECES[i]->yPos == yPosition + 1) or (PIECES[i]->yPos + 1 == yPosition))) or ((PIECES[i]->xPos + 1 == xPosition) and ((PIECES[i]->yPos == yPosition + 2) or (PIECES[i]->yPos + 2 == yPosition))))
        {
            return false;
        }
    }
    return true;
}

void Knight::disable()
{
    if(BOARD[yPos * SIZE + xPos] == 0)
    {
        BOARD[yPos * SIZE + xPos] = ID;
    }
    if(yPos > 0)
    {
        if(yPos > 1)
        {
            if(xPos > 0 and BOARD[(yPos - 2) * SIZE + (xPos - 1)] == 0)
            {
                BOARD[(yPos - 2) * SIZE + (xPos - 1)] = ID;
            }
            if(xPos < (SIZE - 1) and BOARD[(yPos - 2) * SIZE + (xPos + 1)] == 0)
            {
                BOARD[(yPos - 2) * SIZE + (xPos + 1)] = ID;
            }
        }
        if(xPos > 1 and BOARD[(yPos - 1) * SIZE + (xPos - 2)] == 0)
        {
            BOARD[(yPos - 1) * SIZE + (xPos - 2)] = ID;
        }
        if(xPos < (SIZE - 2) and BOARD[(yPos - 1) * SIZE + (xPos + 2)] == 0)
        {
            BOARD[(yPos - 1) * SIZE + (xPos + 2)] = ID;
        }
    }
    if(yPos < (SIZE - 1))
    {
        if(yPos < (SIZE - 2))
        {
            if(xPos > 0 and BOARD[(yPos + 2) * SIZE + (xPos - 1)] == 0)
            {
                BOARD[(yPos + 2) * SIZE + (xPos - 1)] = ID;
            }
            if(xPos < (SIZE - 1) and BOARD[(yPos + 2) * SIZE + (xPos + 1)] == 0)
            {
                BOARD[(yPos + 2) * SIZE + (xPos + 1)] = ID;
            }
        }
        if(xPos > 1 and BOARD[(yPos + 1) * SIZE + (xPos - 2)] == 0)
        {
            BOARD[(yPos + 1) * SIZE + (xPos - 2)] = ID;
        }
        if(xPos < (SIZE - 2) and BOARD[(yPos + 1) * SIZE + (xPos + 2)] == 0)
        {
            BOARD[(yPos + 1) * SIZE + (xPos + 2)] = ID;
        }
    }
}
