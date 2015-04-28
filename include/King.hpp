#ifndef KING_HPP
#define KING_HPP

class King : public Piece
{
public:
    std::string toString();
private:
    void check();
};

#endif // KING_HPP
