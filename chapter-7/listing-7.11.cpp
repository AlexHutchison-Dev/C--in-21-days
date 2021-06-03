// Listing 7.11 - demonstrates for loops with null statement to act like while loops

#include <iostream>

int main()
{
    int counter = 0;

    for (; counter < 10;)
    {
        counter++;
        std::cout << "Looping! ";
    }

    std::cout << "\nCounter: " << counter << std::endl;
    return 0;
}