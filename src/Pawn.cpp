#include "../Main.hpp"
using namespace std;

std::string Pawn::toString()
{
    return "P";
}

void Pawn::check()
{
    BOARD[yPos * SIZE + xPos] = true;
    if(yPos > 0)
    {
        if(xPos > 0) {BOARD[(yPos - 1) * SIZE + (xPos - 1)] = true;}
        if(xPos < (SIZE - 1)) {BOARD[(yPos - 1) * SIZE + (xPos + 1)] = true;}
    }
}
