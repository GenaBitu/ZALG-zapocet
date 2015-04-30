#include "../Main.hpp"
using namespace std;

std::string Queen::toString()
{
    return "Q";
}

bool Queen::check(unsigned int xPosition, unsigned int yPosition)
{
    unsigned int diff = yPosition - xPosition;
    unsigned int sum = yPosition + xPosition;
    for(unsigned int i{0}; i < ID - 1; i++)
    {
        if(((PIECES[i]->yPos - PIECES[i]->xPos) == diff) or ((PIECES[i]->yPos + PIECES[i]->xPos) == sum) or (PIECES[i]->xPos == xPosition) or (PIECES[i]->yPos == yPosition))
        {
            return false;
        }
    }
    return true;
}

void Queen::disable()
{
    // Rook
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
    
    // Bishop
    unsigned int start{0};
    if(yPos > xPos) {start = yPos - xPos;}
    unsigned int end{SIZE + yPos - xPos};
    if (end > SIZE) {end = SIZE;}
    for(unsigned int i{start}; i < end; i++)
    {
        if(BOARD[i * SIZE + (xPos - yPos + i)] == 0)
        {
            BOARD[i * SIZE + (xPos - yPos + i)] = ID;
        }
    }
    start = 0;
    if(SIZE < (xPos + yPos + 1)) {start = xPos + yPos - SIZE + 1;}
    end = xPos + yPos + 1;
    if(end > SIZE) {end = SIZE;}
    for(unsigned int i{start}; i < end; i++)
    {
        if(BOARD[(xPos + yPos - i) * SIZE + i] == 0)
        {
            BOARD[(xPos + yPos - i) * SIZE + i] = ID;
        }
    }
}
