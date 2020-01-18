#ifndef GAMESTATE_H
#define GAMESTATE_H


class GameState
{
    private:
        static GameState instance;
        GameState() {}
        GameState(GameState &g) {}
        void operator=(GameState &g) {}
        ~GameState() {}


        char **board;
        int currentLevel;
        int teleports=0;
        int Maxlevel;
        int columns;
        int rows;

    public:
        void log(string message) { cerr << message << endl; }
        static GameState *getInstance() { return &instance; }


    protected:


};

#endif // GAMESTATE_H
