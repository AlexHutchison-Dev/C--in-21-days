// Listing 5.7 - demonstrates why braces arre important in nested if statements

#include <iostream>

int main()
{
    using namespace std;

    int x;
    cout << "Enter a number less than 10 or greater than 100: ";
    cin >> x;
    cout << "\n";

    if (x >= 10)
        if (x > 100)
            cout << "More than 100, Thanks!\n";
    else //not the else intended!
        cout << "Less than 10, Thanks!\n";

    return 0;
}