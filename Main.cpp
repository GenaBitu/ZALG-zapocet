#include "Main.hpp"
using namespace std;

unsigned int SIZE{1};
bool* BOARD = new bool[SIZE * SIZE]{};
std::vector<Piece*> PIECES;

void printBoard()
{
    for(unsigned int i{0}; i < SIZE * SIZE; i++)
    {
        if(BOARD[i]) {cout << "X";}
        else {cout << ".";}
        if(((i + 1) % SIZE) == 0) {cout << endl;}
    }
}

int main()
{
    PIECES.push_back(new Queen{});
    PIECES.push_back(new Queen{});
    PIECES.push_back(new Queen{});
    PIECES.push_back(new Queen{});
    PIECES.push_back(new Queen{});
    PIECES.push_back(new Queen{});
    PIECES.push_back(new Queen{});
    PIECES.push_back(new Queen{});
    /*bool success{false};
    while(!success and SIZE < 10) // In case something goes really wrong
    {
        
        SIZE++;
    }*/
    cout << endl;
    PIECES[0]->put(3, 5);
    printBoard();
}
