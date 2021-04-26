// Listing 5.3 - demontrates the use of prefix and postfix increment and decrement oprerators

#include <iostream>

int main()
{
    using std::cout;

    int myAge = 33; // initialize two intergers
    int yourAge = 33;
    cout << "I am " << myAge << " years old" << std::endl;
    cout << "You are " << yourAge << " years old" << std::endl;

    myAge++;   // postfix increment
    ++yourAge; // prefix increment

    cout << "One year passes..." << std::endl;
    cout << "I am " << myAge << " years old" << std::endl;
    cout << "You are " << yourAge << " years old" << std::endl;
    cout << "Another year passes..." << std::endl;
    cout << "I am " << myAge++ << " years old" << std::endl;      // as the expression myAge++ retrieves the variable passing it to cout
    cout << "You are " << ++yourAge << " years old" << std::endl; // before incrementing the it will print 34 but the value will be 35
    cout << "Lets print it again..." << std::endl;
    cout << "I am " << myAge << " years old" << std::endl;
    cout << "You are " << yourAge << " years old" << std::endl;

    return 0;
}