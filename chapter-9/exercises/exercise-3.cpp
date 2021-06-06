// Exercise 3 
//
// Compile the program from exercise 2, what causes errors and what causes 
// warnings?
//
//  Reassigning the varOne causes an error as it is a constant and therfore cannot
//  be reassigned.
//
//  Reassigning the pointer to varTwo also throws an error as it is also a const.
//

#include <iostream>

using namespace std;

int main () {

    const int varOne = 6;
    const int *pPointer = &varOne;
    
    cout << "varOne: " << varOne << " *pPointer: " << *pPointer << endl;

    *pPointer = 7;
    
    cout << "varOne: " << varOne << " *pPointer: " << *pPointer << endl;

    int varTwo = 0;
    *pPointer = &varTwo;

    cout << "varOne: " << varOne << " *pPointer: " << *pPointer << endl;
    
    return 0;

}
