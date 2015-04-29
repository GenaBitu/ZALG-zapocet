#include "../Main.hpp"
using namespace std;

std::string Bishop::toString()
{
    return "B";
}

bool Bishop::check()
{
    unsigned int diff = yPos - xPos;
    unsigned int sum = yPos + xPos;
    for(unsigned int i{1}; i < ID; i++)
    {
        if(((PIECES[i]->yPos - PIECES[i]->xPos) == diff) or ((PIECES[i]->yPos + PIECES[i]->xPos) == sum))
        {
            return false;
        }
    }
    return true;
}

void Bishop::disable()
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
