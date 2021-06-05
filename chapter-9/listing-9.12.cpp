// Listing 9.12 - Demonstrates Returning a reference to a non-existant object
//
#include <iostream>

int& GetInt ();

int main () {
    int & rInt = GetInt();
    std::cout << "rInt = " << rInt << std::endl;

    return 0;

}

int & GetInt () {
    int nLocalInt = 25;

    return nLocalInt;
}
