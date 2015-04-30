#include "Main.hpp"
using namespace std;

unsigned int SIZE{8};
unsigned int* BOARD = new unsigned int[SIZE * SIZE]{};
std::vector<Piece*> PIECES;

void printChecks()
{
    for(unsigned int i{0}; i < SIZE * SIZE; i++)
    {
        if(BOARD[i] != 0) {cout << BOARD[i];}
        else {cout << ".";}
        if(((i + 1) % SIZE) == 0) {cout << endl;}
    }
}

void printBoard()
{
    string output{};
    for(unsigned int i{0}; i < SIZE; i++)
    {
        output.append(string(SIZE, '.') + '\n');
    }
    for(unsigned int i{0}; i < PIECES.size(); i++)
    {
        output.replace(PIECES[i]->yPos * (SIZE + 1) + PIECES[i]->xPos, 1, PIECES[i]->toString());
    }
    cout << output << endl;
}

bool populate(unsigned int current)
{
    for(unsigned int i{0}; i < SIZE; i++)
    {
        for(unsigned int j{0}; j < SIZE; j++)
        {
            if(PIECES[current]->tryPut(i, j))
            {
                current++;
                if(current == PIECES.size())
                {
                    return true;
                }
                if(populate(current))
                {
                    return true;
                }
                current--;
                PIECES[current]->erase();
            }
        }
    }
    return false;
}

int main()
{
    /*for (int i = 0; i < 8; i++) {
        PIECES.push_back(new Queen{});
    }*/
    PIECES.push_back(new Queen{});
    PIECES.push_back(new Bishop{});
    PIECES.push_back(new Bishop{});
    PIECES.push_back(new Rook{});
    PIECES.push_back(new Rook{});
    PIECES.push_back(new Knight{});
    PIECES.push_back(new Knight{});
    PIECES.push_back(new King{});
    PIECES.push_back(new Pawn{});
    PIECES.push_back(new Pawn{});
    PIECES.push_back(new Pawn{});
    PIECES.push_back(new Pawn{});
    PIECES.push_back(new Pawn{});
    PIECES.push_back(new Pawn{});
    PIECES.push_back(new Pawn{});
    PIECES.push_back(new Pawn{});

    cout << "Success: " << populate() << endl;
    printBoard();

    for(unsigned int i{0}; i < PIECES.size(); i++)
    {
        delete PIECES[i];
    }
    PIECES.clear();
    delete[] BOARD;
}
