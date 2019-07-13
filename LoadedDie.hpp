
#ifndef LoadedDie_hpp
#define LoadedDie_hpp

#include <iostream>
#include "Die.hpp"

class LoadedDice : public Dice
{
public:
    LoadedDice();
    LoadedDice(int);
    int rollLoad() const;

};

#endif /* LoadedDie_hpp */
