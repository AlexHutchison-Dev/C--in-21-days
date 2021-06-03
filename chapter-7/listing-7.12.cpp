// Listing 7.12 - demonstrates for loop with none of the three statements. Not reccomended!

#include <iostream>

int main()
{
    int counter = 0;
    int max;

    std::cout << "How many Hellos?: ";
    std::cin >> max;

    for (;;)
    {
        if (counter < max)
        {
            std::cout << "Hello! " << std::endl;
            counter++;
        }
        else
        {
            break;
        }
    }

    return 0;
}