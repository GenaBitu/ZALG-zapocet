#ifndef KNIGHT_HPP
#define KNIGHT_HPP

class Knight : public Piece
{
public:
    std::string toString();
private:
    void check();
};

#endif // KNIGHT_HPP
