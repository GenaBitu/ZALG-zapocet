#ifndef ROOK_HPP
#define ROOK_HPP

class Rook : public Piece
{
public:
    char toString() const;
private:
    bool check(unsigned int xPosition, unsigned int yPosition) const;
    void disable() const;
};

#endif // ROOK_HPP
