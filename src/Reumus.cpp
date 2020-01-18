#include "Reumus.h"

Reumus::Reumus(int x,int y): Pawn(pos_x,pos_y)
{
    id='X';
}

Reumus::~Reumus()
{
    //dtor
}
bool Reumus::moveAuthorisation(int offset_x,int offset_y){
    return false;
}
