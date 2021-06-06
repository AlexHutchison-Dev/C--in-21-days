// Exercise 2 
//
// Write a program tha declares a constant pointer to a constant interger. 
// Initialize the pointer to an interger variable, varOne Assign 6 to varOne. 
// Use the pointer to assign 7 to varOne. Create seccond interger variable, 
// varTwo. Reassign the pointer to varTwo. 
//
// Do not compile this exercise yet.
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
