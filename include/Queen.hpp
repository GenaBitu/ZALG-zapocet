#ifndef QUEEN_HPP
#define QUEEN_HPP

class Queen : public Piece
{
public:
    std::string toString();
private:
    bool check(unsigned int xPosition, unsigned int yPosition);
    void disable();
};

#endif // QUEEN_HPP
