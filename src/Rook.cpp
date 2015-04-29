#include "../Main.hpp"
using namespace std;

std::string Rook::toString()
{
    return "R";
}

bool Rook::check()
{
    for(unsigned int i{1}; i < ID; i++)
    {
        if((PIECES[i]->xPos == xPos) or (PIECES[i]->yPos == yPos))
        {
            return false;
        }
    }
    return true;
}

void Rook::disable()
{
    for(unsigned int i{0}; i < SIZE ; i++)
    {
        if(BOARD[i * SIZE + xPos] == 0)
        {
            BOARD[i * SIZE + xPos] = ID;
        }
        if(BOARD[yPos * SIZE + i] == 0)
        {
            BOARD[yPos * SIZE + i] = ID;
        }
    }
}
