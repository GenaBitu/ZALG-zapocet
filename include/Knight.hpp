#ifndef KNIGHT_HPP
#define KNIGHT_HPP

class Knight : public Piece
{
public:
    std::string toString();
private:
    bool check(unsigned int xPosition, unsigned int yPosition);
    void disable();
};

#endif // KNIGHT_HPP
