// Listing 7.10 - demonstrates multiple statements in for loops

#include <iostream>
int main()
{
    for (int i = 0, j = 0; i < 3; i++, j++)
    {
        std::cout << "I: " << i << " J: " << j << std::endl;
    }

    return 0;
}