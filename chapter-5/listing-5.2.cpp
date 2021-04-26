// Listing 5.2 - Demonstrates subtraction and interger overflow

// Problems can occur when the result of subtraction of unsigned ints is negative as after 0 the
// value wraps around to its largest possible value and starts to subtract from there, this is interger
// overflow.

#include <iostream>

int main()
{
    using std::cout;
    using std::endl;

    unsigned int difference;
    unsigned int bigNumber = 100;
    unsigned int smallNumber = 50;

    difference = bigNumber - smallNumber;
    cout << "Difference is: " << difference << endl;

    difference = smallNumber - bigNumber;
    cout << "\nNow difference is: " << difference << endl;

    return 0;
    
}