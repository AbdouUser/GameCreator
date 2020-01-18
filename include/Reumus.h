#ifndef REUMUS_H
#define REUMUS_H

#include <Pawn.h>
#include <iostream>
using namespace std;


class Reumus : public Pawn
{
    public:
        Reumus(int x, int y);
        virtual ~Reumus();
        int moveto(int offset_x,int offset_y);
        char getType() const;

    protected:
        bool moveAuthorisation(int offset_x,int offset_y);
    private:
};

#endif // REUMUS_H
