#ifndef PAWN_HPP
#define PAWN_HPP

class Pawn : public Piece
{
public:
    std::string toString();
private:
    void check();
};

#endif // PAWN_HPP
