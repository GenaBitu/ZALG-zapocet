#ifndef PAWN_HPP
#define PAWN_HPP

class Pawn : public Piece
{
public:
    char toString() const;
private:
    bool check(unsigned int xPosition, unsigned int yPosition) const;
    void disable() const;
};

#endif // PAWN_HPP
