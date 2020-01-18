#ifndef BOARD_H
#define BOARD_H
#include "Pawn.h"
#include "Oueurj.h"
#include "Streumons.h"
#include "Reumus.h"
#include "Diams.h"
#include <iostream>
using namespace std;

class Board
{
    public:
        Board();
        Board(const string path);
        virtual ~Board();
        Board(const Board& other);
        int getLevel()const;
        int getRows()const;
        int getColumns()const;
        bool operator<(const Board &) const;


        //Board &operator=(string path) { this->x = x; return *this; }

        friend ostream &operator<<(ostream &o,const Board &b);


    protected:
        bool moveAuthorisation(const Pawn &pawn,int offset_x,int offset_y);
        int  moveto(Pawn &pawn,int offset_x,int offset_y);
    private:
        int columns=-1;
        int rows=-1;
        int level=-1;
        Pawn **board;

};



#endif // BOARD_H
