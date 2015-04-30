#ifndef PIECE_HPP
#define PIECE_HPP

class Piece
{
public:
    Piece();
    Piece(const Piece&) = delete;
    Piece(Piece&&) = delete;
    Piece& operator= (const Piece&) = delete;
    Piece& operator= (Piece&&) = delete;
    unsigned int xPos;
    unsigned int yPos;
    virtual char toString() const = 0;
    void put(unsigned int xPosition, unsigned int yPosition);
    void erase();
    bool tryPut(unsigned int xPosition, unsigned int yPosition);
    virtual ~Piece();
protected:
    const unsigned int ID;
private:
    static unsigned int usedIDs;
    virtual bool check(unsigned int xPosition, unsigned int yPosition) const = 0;
    virtual void disable() const = 0;
};

#endif // PIECE_HPP
