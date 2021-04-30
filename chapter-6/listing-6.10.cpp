// Listing 6.10 - demostrates recursion using the Fibonacci series

#include <iostream>

using namespace std;

int fib(int number);

int main()
{
    int number, answer;

    cout << "Enter number to find: ";
    cin >> number;

    answer = fib(number);

    cout << answer << " is the " << number << "th Fibonacci number\n";

    return 0;
}

int fib(int number)
{
    cout << "Processing fib(" << number << ")...";

    if (number < 3)
    {
        cout << "Return 1!\n";
        return 1;
    }
    else
    {
        cout << "Call fib(" << number - 2 << ") and fib(" << number - 1 << ")\n";
        return (fib(number - 2) + fib(number - 1));
    }
}