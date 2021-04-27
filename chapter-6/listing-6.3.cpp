// Listing 6.3 - demonstrates variables scoped within a block

#include <iostream>

void myfunc();

int main()
{
    int x = 5;
    std:: cout << "\nmain() x is: " << x;

    myfunc();

    std::cout << "\nBack in main(), x is: " << x << std::endl;

    return 0;
}

void myfunc()
{
    int x = 8;
    std:: cout << "\nIn myfunc() x is: " << x;

    {
        std::cout << "\nIn block in myfunc()";

        int x = 9;

        std::cout << "\nVery local x is: " << x;

    }

    std::cout << "\nOut of block and back in myfunc(), x is: " << x << std::endl;

}