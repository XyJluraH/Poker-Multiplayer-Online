#ifndef GAME_H
#define GAME_H

class GameImpl;

class Game
{
public:
    Game();
    ~Game();

private:
    GameImpl* pimpl;
};

#endif // GAME_H
