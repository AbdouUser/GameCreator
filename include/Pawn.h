#ifndef PAWN_H
#define PAWN_H

#include <iostream>
using namespace std;

class Pawn
{
    public:
        Pawn();
        Pawn(int x,int y);
        virtual ~Pawn();
        Pawn(const Pawn& other);
        int moveto(int offset_x,int offset_y);
        int getX() const;
        int getY() const;
        char getType() const;

    protected:
        virtual bool moveAuthorisation(int offset_x,int offset_y);
        friend ostream &operator<<(ostream &o,const Pawn &p);
        int pos_x;
        int pos_y;
        char id='-';
    private:

};

#endif // PAWN_H
