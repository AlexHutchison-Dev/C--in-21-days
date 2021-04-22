/*
*   Exercise 5
*
*   Modify Listin 2.7 to include a subtract function.
*
*/

#include <iostream>

int Add(int first, int seccond)
{
    std::cout << "Add() recieved " << first << " and " << seccond << std::endl;
    return (first + seccond);
}

int Subtract(int first, int seccond)
{
    std::cout << "Subtract() recieved " << first << " and " << seccond << std::endl;
    return (first - seccond);
}

int main()
{
    using std::cin;
    using std::cout;

    cout << "Im in main()\n";
    int a, b, c;
    cout << "Enter two numbers: ";
    cin >> a;
    cin >> b;
    cout << "\n";
    cout << "Callin Add()\n";
    c = Add(a, b);
    cout << "c was set to " << c << "\n\n";
    cout << "Calling Subtract()\n";
    c = Subtract(a, b);
    cout << "c was set to " << c << "\n\n";
    cout << "\nExiting...\n\n";
    return 0;
}