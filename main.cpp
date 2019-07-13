/*********************************************************************
 ** Program name: War Game
 ** Author: Richard Joseph
 ** Date: 4/21/19
 ** Description: War game with Dice. User has choice to use regular die
                 or loaded die.
 *********************************************************************/

#include <iostream>
#include <algorithm>
#include "Game.hpp"
#include "Menu.hpp"

int main()
{
    srand(time(0));

    int user = menu();
    
    
    while(user == 1)
    {
        int player1DieChoice = 0;
        int player2DieChoice = 0;
        int player1Sides = 0;
        int player2Sides = 0;
        int numberOfRounds = 0;
        std::string player1DieString;
        std::string player2DieString;
        
        std::cout << "Welcome to the War Game!" << std::endl;
        std::cout << "For a regular die type in 'Regular'. For a loaded die type in 'Loaded'" << std::endl;
        std::cout << "Please enter the type of die for player 1: " << std::endl;
        player1DieString = inputValidationDieType();
        
        if(player1DieString == "loaded")
        {
            player1DieChoice = 2;
        }
        
        else if(player1DieString == "regular")
        {
            player1DieChoice = 1;
        }
        
        std::cout << "Please enter the type of die for player 2: " << std::endl;
        player2DieString = inputValidationDieType();
        
        if(player2DieString == "loaded")
        {
            player2DieChoice = 2;
        }
        
        else if(player2DieString == "regular")
        {
            player2DieChoice = 1;
        }
        std::cout << "Please enter the number of sides for the die for player 1: " << std::endl;
        player1Sides = inputValidationDie();
        std::cout << "Please enter the number of sides for the die for player 2: " << std::endl;
        player2Sides = inputValidationDie();
        std::cout << "Please enter the number of rounds that you want to play: " << std::endl;
        numberOfRounds = inputValidationDie();
        std::cout << std::endl;
        
        Game start(numberOfRounds, player1Sides, player2Sides);
        
        start.playGame(player1DieChoice, player2DieChoice);
    
        std::cout << std::endl;
        
        user = menu();
    }
    
    return 0;
}
