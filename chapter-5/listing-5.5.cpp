// Listing 5.5 - demonstrates if staatement with else clause

#include <iostream>
int main ()
{
    using std::cout;
    using std::cin;

    int firstNumber, secondNumber;
    cout << "Please enter a big number: ";
    cin >> firstNumber;

    cout << "Please enter a smaller number: ";
    cin >> secondNumber;

    if (firstNumber > secondNumber)
        cout << "\nThanks!\n";
    else
        cout << "\n Oops, The first number is not bigger!\n";
    
    return 0;

}