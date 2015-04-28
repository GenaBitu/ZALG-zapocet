#ifndef PIECE_HPP
#define PIECE_HPP

class Piece
{
public:
    unsigned int xPos;
    unsigned int yPos;
    virtual std::string toString() = 0;
    void place(unsigned int xPosition, unsigned int yPosition);
    virtual ~Piece();
private:
    virtual void check() = 0;
};

#endif // PIECE_HPP
