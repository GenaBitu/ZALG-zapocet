#ifndef BISHOP_HPP
#define BISHOP_HPP

class Bishop : public Piece
{
public:
    char toString() const;
private:
    bool check(unsigned int xPosition, unsigned int yPosition) const;
    void disable() const;
};

#endif // BISHOP_HPP
