#include "Game.hpp"

Game::Game()
{
    rndsPlay = 0;
    numSidesPlayer1 = 0;
    numSidesPlayer2 = 0;
    player1Score = 0;
    player2Score = 0;
    draws = 0;
}

Game::Game(int setRnds, int player1Sides, int player2Sides)
{
    rndsPlay = setRnds;
    numSidesPlayer1 = player1Sides;
    numSidesPlayer2 = player2Sides;
    player1Score = 0;
    player2Score = 0;
    player1Stats = new int[rndsPlay];
    player2Stats = new int[rndsPlay];
}
/* Play game function that basically does all the work for the program.
   this includes placing the stats of each round in the array. Printing
   out detailed stats. Calling the functions to roll the dice.*/
void Game::playGame(int player1Die, int player2Die)
{
    const std::string diceType[] = {"N/A", "regular die", "loaded die"}; //Array to tell player what dice type is being used

    if(player1Die == 1)
    {
        Dice player1(numSidesPlayer1);
        for(int i = 0; i < rndsPlay; i++)
        {
            player1Stats[i] = player1.rollDie();
        }
    }
    
    else if(player1Die == 2)
    {
        LoadedDice player1LD(numSidesPlayer1);
        for(int i = 0; i < rndsPlay; i++)
        {
            player1Stats[i] = player1LD.rollLoad();
        }
    }
    
    if(player2Die == 1)
    {
        Dice player2(numSidesPlayer2);
        for(int j = 0; j < rndsPlay; j++)
        {
            player2Stats[j] = player2.rollDie();
        }
        
    }
    
    else if(player2Die == 2)
    {
        LoadedDice player2LD(numSidesPlayer2);
        for(int j = 0; j < rndsPlay; j++)
        {
            player2Stats[j] = player2LD.rollLoad();
        }
    }
    
    for(int i = 0; i < rndsPlay; i++)
    {
        std::cout << "Round # " << i + 1 << std::endl;
        std::cout << "Player 1 has rolled a " << player1Stats[i] << std::endl;
        std::cout << "Player 2 has rolled a " << player2Stats[i] << std::endl;
        
        if(player1Stats[i] > player2Stats[i])
        {
            std::cout << "Player 1 has won this round" << std::endl;
            player1Score++;
        }
        
        else if(player2Stats[i] > player1Stats[i])
        {
            std::cout << "Player 2 has won this round" << std::endl;
            player2Score++;
        }
        
        else
        {
            std::cout << "The round is a draw" << std::endl;
            draws++;
        }
        
        std::cout << "Player 1's Die has " << numSidesPlayer1 << " sides and is a " << diceType[player1Die] << "." << std::endl;
        std::cout << "Player 2's Die has " << numSidesPlayer2 << " sides and is a " << diceType[player2Die] << "." << std::endl;
        std::cout << std::endl;
    }
    
    if(player1Score > player2Score)
    {
        std::cout << "Player 1 is the winner" << std::endl;
        std::cout << "Player 1 has won " << player1Score << " round[s]" << std::endl;
    }
    
    else if(player2Score > player1Score)
    {
        std::cout << "Player 2 is the winner" << std::endl;
        std::cout << "Player 2 has won " << player2Score << " round[s]" << std::endl;
    }
    
    else
    {
        std::cout << "Their is a draw!" << std::endl;
        std::cout << "With a score of " << player1Score << std::endl;
    }
}

Game::~Game()
{
    delete [] player1Stats;
    delete [] player2Stats;
}







