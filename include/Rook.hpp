#ifndef ROOK_HPP
#define ROOK_HPP

class Rook : public Piece
{
public:
    std::string toString();
private:
    bool check(unsigned int xPosition, unsigned int yPosition);
    void disable();
};

#endif // ROOK_HPP
