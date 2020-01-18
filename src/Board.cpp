#include "Board.h"
#include <iostream>
#include <fstream>
#include <string>

Board::Board()
{
    //ctor
}
Board::Board(const string path){
ifstream file(path.c_str());
    if(file)
    {
        int COLUMNS,ROWS,LEVEL;
        string word;
        while(!file.eof())
        {
            file>>word;
            cout << word << endl;
            if(word=="COLUMNS:"){
                file>>COLUMNS;
                this->columns=COLUMNS;
             }
            if(word=="ROWS:"){
                file>>ROWS;
                this->rows=ROWS;
            }
            if(word=="LEVEL:"){
                file>>LEVEL;
                this->level=LEVEL;
            }
            if(word=="PAWN:"){
                if(this->level>-1 && this->rows>-1  && this->columns>-1 )
                {
                    board= new Pawn* [this->rows];
                    for(int i=0;i<this->columns;i++)
                    {
                        board[i] =new Pawn[columns];
                        //wmemset(board[i],' ', columns*sizeof(char));
                    }
                }

                for(int i=0;i<rows;i++)
                    for(int j=0;j<columns;j++){
                    char pawn;
                    file>>pawn;
                    switch(pawn){
                    case 'j':
                        this->board[i][j]=Oueurj(i,j);
                        break;
                    case 's':
                        this->board[i][j]=Streumons(i,j);
                        break;
                    case 'x':
                        this->board[i][j]=Reumus(i,j);
                        break;
                    case '$':
                        this->board[i][j]=Diams(i,j);
                        break;
                    case '-':
                        this->board[i][j]=Pawn();

                    }
                }
                break;
            }

        }
}
}
Board::~Board()
{

}
int Board::getRows() const
{
return this->rows;
}
int Board::getColumns() const
{
return this->columns;
}


/*Board::Board(const Board& other)
{
    return ;
}*/
bool Board::moveAuthorisation(const Pawn &pawn,int offset_x,int offset_y){
    return (pawn.getX()+offset_x<this->rows && pawn.getX()+offset_x>0 && pawn.getY()+offset_y<this->columns && pawn.getY()+offset_y>0);
}

int Board::moveto(Pawn &pawn,int offset_x,int offset_y){
    if(moveAuthorisation(pawn,offset_x,offset_y))
        return pawn.moveto(offset_x,offset_y);
    else
        return -1;
}
bool Board::operator<(const Board &other) const{
    return (this->level<other.level);
}

ostream &operator<<(ostream &o,const Board &b) {
 for (int r = 0; r < b.getRows(); ++r)
 {
    for (int c = 0; c < b.getColumns(); ++c)
    {
        Pawn *pawn=&b.board[r][c];
        if(pawn!=NULL)
            o<<b.board[r][c];
        else
            o<<" ";

    }
    o<<endl;
 }
 return o<<endl;
}

