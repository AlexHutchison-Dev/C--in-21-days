// Listing 9.13 - Demonstrates memory leaks
 
//
#include <iostream>

int& GetInt ();

int main () {
    int & rInt = GetInt();
    std::cout << "rInt = " << rInt << std::endl;

    return 0;

}

int & GetInt () {
    // Instantiate an interger object on the free store (heap)
    int*  pInt = new int(25);

    return *pInt ;
}
