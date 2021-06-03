// Listing 7.9 - demonstrates looping with for loops

#include <iostream>

int main()
{
    int counter = 0;    //This could be done in the for loop parenthesis'
    for (counter = 0; counter < 5; counter++)
    {
        std::cout << "Looping! ";
    }

    std::cout << "\nCOunter: " << counter << std::endl;
    return 0;
}