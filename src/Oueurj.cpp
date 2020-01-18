#include "Oueurj.h"


Oueurj::Oueurj(int x,int y): Pawn(pos_x,pos_y)
{
    id='J';
}

Oueurj::~Oueurj()
{
    //dtor
}

Oueurj::Oueurj(const Oueurj& other)
{
    //copy ctor
}

bool Oueurj::moveAuthorisation(int offset_x,int offset_y){
    if(pos_x-offset_x>1||pos_x-offset_x<-1||pos_y-offset_y>1||pos_y-offset_y<-1)
        return false;
    return true;
}
char Oueurj::getType() const {
    return this->id;
}

