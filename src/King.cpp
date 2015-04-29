#include "../Main.hpp"
using namespace std;

std::string King::toString()
{
    return "K";
}

bool King::check()
{
    for(unsigned int i{1}; i < ID; i++)
    {
        if((PIECES[i]->xPos + 1 >= xPos) and (PIECES[i]->xPos <= xPos + 1) and (PIECES[i]->yPos + 1 >= yPos) and (PIECES[i]->yPos <= yPos + 1))
        {
            return false;
        }
    }
    return true;
}

void King::disable()
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
