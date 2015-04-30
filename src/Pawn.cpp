#include "../Main.hpp"
using namespace std;

std::string Pawn::toString()
{
    return "P";
}

bool Pawn::check(unsigned int xPosition, unsigned int yPosition)
{
    for(unsigned int i{0}; i < ID - 1; i++)
    {
        if((PIECES[i]->yPos + 1 == yPosition) and ((PIECES[i]->xPos + 1 == xPosition) or (PIECES[i]->xPos == xPosition + 1)))
        {
            return false;
        }
    }
    return true;
}

void Pawn::disable()
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
        if(xPos < (SIZE - 1) and BOARD[(yPos - 1) * SIZE + (xPos + 1)] == 0)
        {
            BOARD[(yPos - 1) * SIZE + (xPos + 1)] = ID;
        }
    }
}
