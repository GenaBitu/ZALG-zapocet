#ifndef QUEEN_HPP
#define QUEEN_HPP

class Queen : public Piece
{
public:
    std::string toString();
private:
    void check();
};

#endif // QUEEN_HPP
