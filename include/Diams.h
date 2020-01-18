#ifndef DIAMS_H
#define DIAMS_H

#include <Pawn.h>
#include <iostream>
using namespace std;

class Diams : public Pawn
{
    public:
        Diams(int x, int y);
        virtual ~Diams();
        char getType() const;

    protected:
        friend ostream &operator<<(ostream &o,const Diams &d);

    private:
};

#endif // DIAMS_H
