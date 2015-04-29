#include "../Main.hpp"
using namespace std;

std::string Pawn::toString()
{
    return "P";
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
