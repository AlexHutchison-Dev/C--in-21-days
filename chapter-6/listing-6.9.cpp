// Listing 6.9 - demonstrates inline functions

#include <iostream>

inline int Double(int);

int main()
{
    int target;
    
    using namespace std;

    cout << "Enter a number to work with:";
    cin >> target;
    cout << endl;

    target = Double(target);
    cout << "Target: " << target << endl;

    target = Double(target);
    cout << "Target: " << target << endl;

    target = Double(target);
    cout << "Target: " << target << endl;

    return 0;

}

int Double(int original)
{
    return original * 2;
}