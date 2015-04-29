#ifndef BISHOP_HPP
#define BISHOP_HPP

class Bishop : public Piece
{
public:
    std::string toString();
private:
    void disable();
};

#endif // BISHOP_HPP
