// Exercise 1
//
// Make a program that declares an int, a reference to an int and a pointer to an int.
//
#include <iostream>

int main () {
    int myInt = 5;
    int &rInt = myInt;
    int *pInt = 0;

    pInt = &myInt;

    std::cout << "myInt: " << myInt << " rInt: " << rInt << " *pInt: " << *pInt << std::endl;
    std::cout << std::endl;

    std::cout << "Changing value with reference...." << std::endl;
    rInt = 7;

    std::cout << "myInt: " << myInt << " rInt: " << rInt << " *pInt: " << *pInt << std::endl;
    std::cout << std::endl;


    std::cout << "Changing value with pointer..." << std::endl;
    *pInt = 132;



    std::cout << "myInt: " << myInt << " rInt: " << rInt << " *pInt: " << *pInt << std::endl;
    std::cout << std::endl;

    return 0;
    

}
