// Exercise 1
//
//Write an if statement that examines 2 intergers and changes the larger to the smaller using only one else clause

#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Please enter 2 intergers." << endl;
    cout << "First: ";
    cin >> a;
    cout << "\n";
    cout << "Second: ";
    cin >> b;
    cout << "\n";

    if (a > b)
    {
        a = b;
    }
    else
    {
        b = a;
    }

    cout << "After examination the value are now a: " << a << " b: " << b << endl;

    return 0;
}