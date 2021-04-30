//Exercise 5 - Chapter 6

// Write a function that takes 2 unsigned shor intergers and returns the result
// of dividing the first by the seccond. Do not do the division if the seccond
// number is xero but do return -1.

#include <iostream>

float Divider(unsigned short int x, unsigned short int y);

int main()
{
    using std::cin;
    using std::cout;

    int x, y;
    float result;

    cout << "Enter two numbers....\n";
    cout << "1: ";
    cin >> x;
    cout << "2: ";
    cin >> y;
    cout << "\n";

    result = Divider(x, y);

    if (result > 0)
        cout << "1 divided by 2 = " << result << "\n";
    else
        cout << "ERR Cannot divide by 0\n";

    return 0;
}

float Divider(unsigned short int x, unsigned short int y)
{
    if (y > 0)
        return (x / (y * 1.0));
    else
        return -1;
}