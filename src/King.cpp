#include "../Main.hpp"
using namespace std;

std::string King::toString()
{
    return "K";
}

void King::check()
{
    BOARD[yPos * SIZE + xPos] = true;
    if(yPos > 0)
    {
        if(xPos > 0) {BOARD[(yPos - 1) * SIZE + (xPos - 1)] = true;}
        BOARD[(yPos - 1) * SIZE + xPos] = true;
        if(xPos < (SIZE - 1)) {BOARD[(yPos - 1) * SIZE + (xPos + 1)] = true;}
    }
    if(xPos > 0) {BOARD[yPos * SIZE + (xPos - 1)] = true;}
    if(xPos < (SIZE - 1)) {BOARD[yPos * SIZE + (xPos + 1)] = true;}
    if(yPos < (SIZE - 1))
    {
        if(xPos > 0) {BOARD[(yPos + 1) * SIZE + (xPos - 1)] = true;}
        BOARD[(yPos + 1) * SIZE + xPos] = true;
        if(xPos < (SIZE - 1)) {BOARD[(yPos + 1) * SIZE + (xPos + 1)] = true;}
    }
}
