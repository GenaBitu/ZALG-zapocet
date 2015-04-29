#include "../Main.hpp"
using namespace std;

std::string Knight::toString()
{
    return "H";     //H for horse, K is taken by King
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
