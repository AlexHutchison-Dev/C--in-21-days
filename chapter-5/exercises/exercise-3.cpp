// Exercise 3

// Enter the program from exercise 2 and enter the numbers 20,10, 50 . Did you get the out put you expected? Why not?

// I think the intention of the progrma was to check if a minus b is equal to c but as they used the assignment operator instead of the 
// equals operator "==" it checks if a-b is truthy and asignes that value to c. As 10 is a truthy (i.e non zero) value the if statement
// evalutes as true in unintended circumstances.

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