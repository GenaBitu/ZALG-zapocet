#include "../Main.hpp"
using namespace std;

char Bishop::toString() const
{
    return 'B';
}

bool Bishop::check(unsigned int xPosition, unsigned int yPosition) const
{
    unsigned int diff = yPosition - xPosition;
    unsigned int sum = yPosition + xPosition;
    for(unsigned int i{0}; i < ID - 1; i++)
    {
        if(((PIECES[i]->yPos - PIECES[i]->xPos) == diff) or ((PIECES[i]->yPos + PIECES[i]->xPos) == sum))
        {
            return false;
        }
    }
    return true;
}

void Bishop::disable() const
{
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
