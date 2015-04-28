#ifndef PIECE_HPP
#define PIECE_HPP

class Piece
{
public:
    Piece();
    unsigned int xPos;
    unsigned int yPos;
    virtual std::string toString() = 0;
    void put(unsigned int xPosition, unsigned int yPosition);
    bool tryPut(unsigned int xPosition, unsigned int yPosition);
    bool place();
    virtual ~Piece();
private:
    virtual void check() = 0;
};

#endif // PIECE_HPP
