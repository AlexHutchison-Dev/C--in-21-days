// Listing 4.2 demonstrates what writing past the bounds of an array is!

// Do not run, may crash system!!

#include <iostream>

using namespace std;

int main()
{
    long TargetArray[25]; //array to fill

    int i;
    for (i = 0; i < 25; i++)
        TargetArray[i] = 10;

    cout << "Test 1:\n";                                    //Test current values (should be 10)
    cout << "TargetArray[0]: " << TargetArray[0] << endl;   //lower bound
    cout << "TargetArray[24]: " << TargetArray[24] << endl; //upper bound

    cout << "\nAttempting to assign value beyond upper bound...";
    for (i = 0; i <= 25; i++) // going a little to far
        TargetArray[i] = 20;  // assignment may fail for element 25

    cout << "Test 2:\n";
    cout << "TargetArray[0]: " << TargetArray[0] << endl;   //lower bound
    cout << "TargetArray[24]: " << TargetArray[24] << endl; //upper bound
    cout << "TargetArray[25]: " << TargetArray[25] << endl; //out of bounds

    return 0;
}