#ifndef KING_HPP
#define KING_HPP

class King : public Piece
{
public:
    char toString() const;
private:
    bool check(unsigned int xPosition, unsigned int yPosition) const;
    void disable() const;
};

#endif // KING_HPP
