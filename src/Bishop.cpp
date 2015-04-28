#include "../Main.hpp"
using namespace std;

std::string Bishop::toString()
{
    return "B";
}

void Bishop::check()
{
    
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
