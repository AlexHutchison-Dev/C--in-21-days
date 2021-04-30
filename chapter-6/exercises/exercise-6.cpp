//Exercise 6 - Chapter 6

// Write a progrma that asks for a number and a power. Write a recursive function that takes the number to the power.

#include <iostream>

unsigned long int calculateExponent(unsigned long int total, int power, int count);

int number;

int main()
{
    using namespace std;

    int power, count = 0;
    unsigned long int result = -1;

    cout << "Enter a number: ";
    cin >> number;
    cout << "Power: ";
    cin >> power;
    cout << endl;

    result = calculateExponent(number, power, count);

    if (result <= 0)
        cout << "Result is too large, try smaller number\n";
    else
        cout << number << " to the power of " << power << " = " << result << endl;

    return 0;
}

unsigned long int calculateExponent(unsigned long int total, int power, int count)
{   
    if (count < power -1)
        return calculateExponent((total * number), power, ++count);
    else        
        return (total);
}