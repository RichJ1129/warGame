#include "Menu.hpp"

//Switch case that returns 1 or 2 depending on the user input
int menu()
{
    int userInput = 0;
    
    std::cout << "1: Play Game" << std::endl;
    std::cout << "2: Exit Game" << std::endl;
    
    userInput = inputValidationInt();
    
    
    switch (userInput)
    {
        case 1:
            return 1;
                
        case 2:
            return 2;
    }
    
    return 0;
}

int restartMenu()
{
    int userInput = 0;
    
    std::cout << "1: Play again?" << std::endl;
    std::cout << "2: Exit Game" << std::endl;
    
    userInput = inputValidationInt();
    
    
    switch (userInput)
    {
        case 1:
            return 1;
            
        case 2:
            return 2;
    }
    
    return 0;
}
