#include "../Main.hpp"
using namespace std;

std::string Queen::toString()
{
    return "Q";
}

void Queen::check()
{
    for(unsigned int i{0}; i < SIZE ; i++)
    {
        BOARD[i * SIZE + xPos] = true;
        BOARD[yPos * SIZE + i] = true;
    }
    
    unsigned int start{0};
    if(yPos > xPos) {start = yPos - xPos;}
    unsigned int end{SIZE + yPos - xPos};
    if (end > SIZE) {end = SIZE;}
    for(unsigned int i{start}; i < end; i++)
    {
        BOARD[i * SIZE + (xPos - yPos + i)] = true;
    }
    start = 0;
    if(SIZE < (xPos + yPos)) {start = xPos + yPos - SIZE;}
    end = xPos + yPos + 1;
    if(end > SIZE) {end = SIZE;}
    for(unsigned int i{start}; i < end; i++)
    {
        BOARD[(xPos + yPos - i) * SIZE + i] = true;
    }
}
