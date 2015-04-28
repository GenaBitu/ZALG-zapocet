#ifndef ROOK_HPP
#define ROOK_HPP

class Rook : public Piece
{
public:
    std::string toString();
private:
    void check();
};

#endif // ROOK_HPP
