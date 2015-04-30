#include "../Main.hpp"
using namespace std;

char Rook::toString() const
{
    return 'R';
}

bool Rook::check(unsigned int xPosition, unsigned int yPosition) const
{
    for(unsigned int i{0}; i < ID - 1; i++)
    {
        if((PIECES[i]->xPos == xPosition) or (PIECES[i]->yPos == yPosition))
        {
            return false;
        }
    }
    return true;
}

void Rook::disable() const
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
