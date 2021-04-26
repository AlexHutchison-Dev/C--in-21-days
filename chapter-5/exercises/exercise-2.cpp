// Exercise 2

// Examine the following program and imagine enetering 3 numbers, and write what aout put you expect.
// with the values a: 1, b: 2, c: 3, I expect the output "a: 1 minus b 2 = c -1" as -1 evaluates as true becaause it is a non 0 value. 
//From reading the code I suspect this was not the intended output and they probably wantes to use == in the if statement.

#include <iostream> 
using namespace std;

int main()
{
    int a, b, c;
    cout << "Please eneter three numbers\n";
    cout << "a: ";
    cin >> a;
    cout << "\nb: ";
    cin >> b;
    cout << "\nc: ";
    cin >> c;

    if (c = (a-b))
        cout << "a: " << a << " minus b: " << b << " equals c: " << c;
    else 
        cout << "a-b does not equal c\n";
    
    return 0;

}