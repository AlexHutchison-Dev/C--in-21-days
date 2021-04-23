// Listing 2.3 using th using keyword

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    cout << "Hello there. \n";
    cout << "The manipulator std::endl ";
    cout << "writes an new line to the screen.";
    cout << endl;
    cout << "Here is a very big number: \t" << 70000;
    cout << endl;
    cout << "Here is the sum of 8 and 5:\t";
    cout << 8 + 5 << endl;
    cout << "Here is a fraction:\t\t";
    cout << (float)5 / 8 << endl;
    cout << "And a very big number:\t";
    cout << (double)70000 * 700000 << endl;
    cout << "Dont forget to replace Jesse Liberty ";
    cout << "with your name...\n";
    cout << "Alex Hutchison is a programmer!\n";
    
    return 0;
}