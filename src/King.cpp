#include "../Main.hpp"
using namespace std;

std::string King::toString()
{
    return "K";
}

void King::check()
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
