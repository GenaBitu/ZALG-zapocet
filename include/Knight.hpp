#ifndef KNIGHT_HPP
#define KNIGHT_HPP

class Knight : public Piece
{
public:
    char toString() const;
private:
    bool check(unsigned int xPosition, unsigned int yPosition) const;
    void disable() const;
};

#endif // KNIGHT_HPP
