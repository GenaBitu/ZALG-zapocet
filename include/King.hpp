#ifndef KING_HPP
#define KING_HPP

class King : public Piece
{
public:
    std::string toString();
private:
    bool check(unsigned int xPosition, unsigned int yPosition);
    void disable();
};

#endif // KING_HPP
