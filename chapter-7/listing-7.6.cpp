// Listing 7.6 - demonstrates skipping the body of a while loop when condition is false.

#include <iostream>

int main()
{
    int counter;

    std::cout << "How many hello's?: ";
    std::cin >> counter;

    while (counter > 0)
        {
            std::cout << "Hello!\n";
            counter--;
        }
    
    std::cout << "Counter is output: " << counter << "\n";
    return 0;

}