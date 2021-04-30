//Exercise 4 - Chapter 6

// What is wrong with the function in the following code?

// There is a semicolon at the end of the functions definition.

#include <iostream>

int myFunc(unsigned short int x);

int main()
{
    unsigned short int x, y;
    x = 7;
    y = myFunc(x);
    std::cout << "x: " << x << " y: " << y << std::endl;
    return 0;
}

int myFunc(unsigned short int x);
{
    return (4 * x);
}