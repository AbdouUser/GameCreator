#include <iostream>
#include "Board.h"
using namespace std;

int main(int ac, char **param)
{
    string fileName="fichier.game"
    if(ac>0)
        if(!param.compare(fileName))
            Board b("fichier.board");

    cout<<"result"<<endl<<b;

    return 0;
}
