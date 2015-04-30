#ifndef PAWN_HPP
#define PAWN_HPP

class Pawn : public Piece
{
public:
    std::string toString();
private:
    bool check(unsigned int xPosition, unsigned int yPosition);
    void disable();
};

#endif // PAWN_HPP
