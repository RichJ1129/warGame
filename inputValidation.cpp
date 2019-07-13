#include "inputValidation.hpp"

/*Input Validation function to make sure user enters an integer value of either
 Source:learncpp.com/cpp-tutorial/5-10-stdcin-extraction-and-dealing-with-invalid-text-input/
 */

int inputValidationInt()
{
    while (true)
    {
        int userInput;
        std::cin >> userInput;
        
        
        if (userInput == 1 || userInput == 2)
        {
            std::cin.ignore(10000, '\n');
            return userInput;
        }
        
        else
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "The input is invalid. Please enter a new value." << std::endl;
        }
    }
}

int inputValidationDie()
{
    while (true)
    {
        int userInput;
        std::cin >> userInput;
        
        
        if (userInput > 0)
        {
            std::cin.ignore(10000, '\n');
            return userInput;
        }
        
        else
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "The input is invalid. Please enter a new value." << std::endl;
        }
    }
}

std::string inputValidationDieType()
{
    while (true)
    {
        std::string userInput;
        std::cin >> userInput;
        std::transform(userInput.begin(), userInput.end(), userInput.begin(), ::tolower);

        if (userInput == "loaded" || userInput == "regular")
        {
            std::cin.ignore(10000, '\n');
            return userInput;
        }
        
        else
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "The input is invalid. Please enter a new value." << std::endl;
        }
    }

}
