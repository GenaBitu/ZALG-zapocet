#include "../Main.hpp"
using namespace std;

std::string Queen::toString()
{
    return "Q";
}

void Queen::check()
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
    if(SIZE < (xPos + yPos)) {start = xPos + yPos - SIZE;}
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
