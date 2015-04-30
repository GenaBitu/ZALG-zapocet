#include "Main.hpp"
using namespace std;

unsigned int SIZE{8};
unsigned int* BOARD = new unsigned int[SIZE * SIZE]{};
std::vector<Piece*> PIECES;

std::string printChecks()
{
    // Formated table
    // Top row
    string output{"\u250C"};
    for(unsigned int i{0}; i < SIZE - 1; i++)
    {
        output += "\u2500\u2500\u2500\u252C";
    }
    // Last segment is always separate because last character differs
    output += "\u2500\u2500\u2500\u2510\n";
    // All but last rows, always row of values and a separator row
    for(unsigned int i{0}; i < SIZE - 1; i++)
    {
        output += "\u2502";
        for(unsigned int j{0}; j < SIZE; j++)
        {
            if(BOARD[i * SIZE + j] < 10){output += " ";}
            output += to_string(BOARD[i * SIZE + j]);
            if(BOARD[i * SIZE + j] < 100){output += " ";}
            output += "\u2502";
        }
        output += "\n\u251C";
        for(unsigned int j{0}; j < SIZE - 1; j++)
        {
            output += "\u2500\u2500\u2500\u253C";
        }
        output += "\u2500\u2500\u2500\u2524\n";
    }
    output += "\u2502";
    // Last value row
    for(unsigned int i{0}; i < SIZE; i++)
    {
        if(BOARD[SIZE * (SIZE - 1) + i] < 10){output += " ";}
        output += to_string(BOARD[SIZE * (SIZE - 1) + i]);
        if(BOARD[SIZE * (SIZE - 1) + i] < 100){output += " ";}
        output += "\u2502";
    }
    // Final separator row
    output += "\n\u2514";
    for(unsigned int i{0}; i < SIZE - 1; i++)
    {
        output += "\u2500\u2500\u2500\u2534";
    }
    output += "\u2500\u2500\u2500\u2518";
    return output;
}

std::string printBoard()
{
    // Piece table
    char* PTable{new char[SIZE * SIZE]};
    for(unsigned int i{0}; i < SIZE * SIZE; i++)
    {
        PTable[i] = ' ';
    }
    for(unsigned int i{0}; i < PIECES.size(); i++)
    {
        PTable[PIECES[i]->yPos * SIZE + PIECES[i]->xPos] = PIECES[i]->toString();
    }
    
    // Formated table
    // Top row
    string output{"\u250C"};
    for(unsigned int i{0}; i < SIZE - 1; i++)
    {
        output += "\u2500\u2500\u2500\u252C";
    }
    // Last segment is always separate because last character differs
    output += "\u2500\u2500\u2500\u2510\n";
    // All but last rows, always row of values and a separator row
    for(unsigned int i{0}; i < SIZE - 1; i++)
    {
        output += "\u2502";
        for(unsigned int j{0}; j < SIZE; j++)
        {
            output += " ";
            output += PTable[i * SIZE + j];
            output += " \u2502";
        }
        output += "\n\u251C";
        for(unsigned int j{0}; j < SIZE - 1; j++)
        {
            output += "\u2500\u2500\u2500\u253C";
        }
        output += "\u2500\u2500\u2500\u2524\n";
    }
    output += "\u2502";
    // Last value row
    for(unsigned int i{0}; i < SIZE; i++)
    {
        output += " ";
        output += PTable[SIZE * (SIZE - 1) + i];
        output += " \u2502";
    }
    // Final separator row
    output += "\n\u2514";
    for(unsigned int i{0}; i < SIZE - 1; i++)
    {
        output += "\u2500\u2500\u2500\u2534";
    }
    output += "\u2500\u2500\u2500\u2518";
    return output;
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

    bool success{populate()};
    cout << "Success: " << (success ? "yes" : "no") << endl;
    if(success) {cout << printBoard() << endl;}

    for(unsigned int i{0}; i < PIECES.size(); i++)
    {
        delete PIECES[i];
    }
    PIECES.clear();
    delete[] BOARD;
}
