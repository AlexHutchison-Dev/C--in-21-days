// Listing 7.5 - demonstrates while(true) loops

// Seems to be a risk of getting into infinite loops with this, ie if the break condition is never met.

#include <iostream>

int main()
{
    int counter = 0;

    while (true)
    {
        counter++;
        if (counter > 10)
            break;
    }

    std::cout << "Counter: " << counter << std::endl;
    return 0;
}