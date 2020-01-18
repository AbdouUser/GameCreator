#ifndef OUEURJ_H
#define OUEURJ_H

#include "Oueurj.h"
#include "Pawn.h"
#include <iostream>
using namespace std;

class Oueurj: public Pawn
{
    public:
        Oueurj();
        Oueurj(int x, int y);
        virtual ~Oueurj();
        Oueurj(const Oueurj& other);
        int moveto(int offset_x,int offset_y);
        char getType() const;

    protected:
        bool moveAuthorisation(int offset_x,int offset_y);
        ostream &operator<<(ostream &o);
    private:

};

#endif // OUEURJ_H
