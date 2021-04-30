// Exercise 3 - Chapter 6

//What is wrong with the function in the following code?

// Its prototype and definition declare its return type as void but it returns an unsigned short int. 
// Also when the function is called it is called with the argument int, this is a keyword reserved by the compiler
// and therfore cannot be a variable name, it need to be called with an argument with a value.

#include <iostream>

void myFunc(unsigned short int x);

int main()
{
    unsigned short int x, y;
    y = myFunc(int);
    std::cout << "x: " << x << " y: " << y << std::endl;
    return 0;
}

void myFunc(unsigned short int x)
{
    return (4 * x);
}