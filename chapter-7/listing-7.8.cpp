// Listing 7.8 - while reexamined

#include <iostream>

int main()
{
    int counter = 0;

    while (counter < 5 )
    {
        counter++;
        std:: cout << "Looping! ";
    }

    std::cout << "\nCounter: " << counter << std::endl;
    return 0;
}