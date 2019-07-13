
#ifndef Game_hpp
#define Game_hpp

#include <iostream>
#include "LoadedDie.hpp"

class Game
{
private:
    int rndsPlay;
    int numSidesPlayer1;
    int numSidesPlayer2;
    int player1Score;
    int player2Score;
    int draws;
    int *player1Stats;
    int *player2Stats;
    
public:
    Game();
    Game(int, int, int);
    void playGame(int, int);
    ~Game();
};

#endif /* Game_hpp */
