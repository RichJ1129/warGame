
#include "LoadedDie.hpp"


LoadedDice::LoadedDice()
{
    numSides = 3;
}

LoadedDice::LoadedDice(int userDice)
{
    numSides = userDice;
}

//Rolled dice function using rand function
int LoadedDice::rollLoad() const
{
    int rolledNum = (rand() % numSides) + 1;
    
    int loadedNum = (rand() % 6) + 1;

    if (loadedNum == 1) // Happens ~16% of the time
    {
        return numSides;
    }
    
    else if (loadedNum == 2 && numSides > 1) //Happens ~16% of the time
    {
        return numSides - 1;
    }
        
    else
    {
        return rolledNum;
    }
    
}
