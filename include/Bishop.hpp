#ifndef BISHOP_HPP
#define BISHOP_HPP

class Bishop : public Piece
{
public:
    std::string toString();
private:
    bool check(unsigned int xPosition, unsigned int yPosition);
    void disable();
};

#endif // BISHOP_HPP
