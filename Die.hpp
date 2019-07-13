
#ifndef Die_hpp
#define Die_hpp

#include <iostream>
#include <ctime>
#include <cstdlib>

class Dice
{
protected:
    int numSides;

public:
    Dice();
    Dice(int);
    void setNumSides(int);
    int getNumSides();
    
    int rollDie() const;
};

#endif /* Die_hpp */
