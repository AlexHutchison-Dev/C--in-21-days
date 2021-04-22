#include <iostream>

int Add (int first, int seccond) {
    std::cout << "Add() recieved " << first <<" and " << seccond << std::endl;
    return (first + seccond);
}

int main()
{
    using std::cout;
    using std::cin;

    cout << "Im in main()\n";
    int a, b, c;
    cout << "Enter two numbers: ";
    cin >> a;
    cin >> b;
    cout << "Callin Add()\n";
    c = Add (a,b);
    cout << "c was set to " << c;
    cout << "\nExiting...\n\n";
    return 0;
}