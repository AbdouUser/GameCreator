#ifndef GAMEADAPTER_H
#define GAMEADAPTER_H

#include "GameState.h"

class GameAdapter
{
    public:
        GameAdapter();
        virtual ~GameAdapter();
        GameAdapter(const GameAdapter& other);
        void play();
        void autoplay();
        GameState initBoards(int maxLevel,char** files);

    protected:

    private:
};

#endif // GAMEADAPTER_H
