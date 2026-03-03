#ifndef GAME_H
#define GAME_H

#include "raylib.h"

enum GameState {
    MENU,
    PLAYING,
    PAUSED,
    GAMEOVER
};

class Game{

    public:
        Game();
        ~Game();

        void Run();

    private:

        void Update();
        void Draw();

        void DrawMenu();
        void DrawGame();
        void DrawPause();

        GameState currentstate;

        int screenwidth;
        int screenheight;

};

#endif