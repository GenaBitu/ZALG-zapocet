#ifndef KNIGHT_HPP
#define KNIGHT_HPP

class Knight : public Piece
{
public:
    std::string toString();
private:
    bool check();
    void disable();
};

#endif // KNIGHT_HPP
