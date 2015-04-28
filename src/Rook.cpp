#include "../Main.hpp"
using namespace std;

std::string Rook::toString()
{
    return "R";
}

void Rook::check()
{
    for(unsigned int i{0}; i < SIZE ; i++)
    {
        BOARD[i * SIZE + xPos] = true;
        BOARD[yPos * SIZE + i] = true;
    }
}
