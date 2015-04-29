#ifndef QUEEN_HPP
#define QUEEN_HPP

class Queen : public Piece
{
public:
    std::string toString();
private:
    bool check();
    void disable();
};

#endif // QUEEN_HPP
