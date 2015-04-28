#include "../Main.hpp"
using namespace std;

std::string Knight::toString()
{
    return "H";     //H for horse, K is taken by King
}

void Knight::check()
{
    BOARD[yPos * SIZE + xPos] = true;
    if(yPos > 0)
    {
        if(yPos > 1)
        {
            if(xPos > 0) {BOARD[(yPos - 2) * SIZE + (xPos - 1)] = true;}
            if(xPos < (SIZE - 1)) {BOARD[(yPos - 2) * SIZE + (xPos + 1)] = true;}
        }
        if(xPos > 1) {BOARD[(yPos - 1) * SIZE + (xPos - 2)] = true;}
        if(xPos < (SIZE - 2)) {BOARD[(yPos - 1) * SIZE + (xPos + 2)] = true;}
        
    }
    if(yPos < (SIZE - 1))
    {
        if(yPos < (SIZE - 2))
        {
            if(xPos > 0) {BOARD[(yPos + 2) * SIZE + (xPos - 1)] = true;}
            if(xPos < (SIZE - 1)) {BOARD[(yPos + 2) * SIZE + (xPos + 1)] = true;}
        }
        if(xPos > 1) {BOARD[(yPos + 1) * SIZE + (xPos - 2)] = true;}
        if(xPos < (SIZE - 2)) {BOARD[(yPos + 1) * SIZE + (xPos + 2)] = true;}
        
    }
}
