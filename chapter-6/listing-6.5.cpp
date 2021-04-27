// Listing 6.5 - demonstrating global and local variables.

#include <iostream>

void myFunction();

int x = 5, y = 7;

int main()
{
    using namespace std;

    cout << "x from main: " << x << endl;
    cout << "y from main: " << y << endl;

    myFunction();

    cout << endl;

    cout << "Back from myFunction(): " << endl << endl;
    cout << "x from main: " << x << endl;
    cout << "y from main: " << y << endl;
    return 0;
}

void myFunction()
{
    using std::cout;

    int y = 10;
    cout << std::endl;

    cout << "x from myFunction(): " << x << std::endl;
    cout << "y from myFunction(): " << y << std::endl;
}