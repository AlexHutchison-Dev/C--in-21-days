// Listing 5.9 - demonstrates the conditional operator

#include <iostream>

int main()
{
    using namespace std;

    int x, y, z;

    cout << "Enter two numbers.\n";
    cout << "First: ";
    cin >> x;
    cout << "Second: ";
    cin >> y;
    cout << "\n";

    if (x > y)
    {
        z = x;
    }
    else 
        z =y;
    
    cout << "After if test, z: " << z << "\n";

    z = (x > z) ? x : y;

    cout << "After conditional test, z: " << z << "\n";

    return 0;
}