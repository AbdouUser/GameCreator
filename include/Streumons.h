#ifndef STREUMONS_H
#define STREUMONS_H

#include <Pawn.h>
#include <iostream>
using namespace std;

class Streumons : public Pawn
{
    public:
        Streumons(int x, int y);
        virtual ~Streumons();
        Streumons(const Streumons& other);
        int moveto(int offset_x,int offset_y);
        char getType() const;
    protected:
        bool moveAuthorisation(int offset_x,int offset_y);
        friend ostream &operator<<(ostream &o,const Pawn &p);
};

#endif // STREUMONS_H
