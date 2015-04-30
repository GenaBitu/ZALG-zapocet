#ifndef QUEEN_HPP
#define QUEEN_HPP

class Queen : public Piece
{
public:
    char toString() const;
private:
    bool check(unsigned int xPosition, unsigned int yPosition) const;
    void disable() const;
};

#endif // QUEEN_HPP
