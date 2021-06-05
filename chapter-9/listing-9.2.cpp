//Listing 9.2 - Demonstrates taking the address of a reference

#include <iostream>

int main () {

    using namespace std;
    
    int intOne;
    int &rSomeRef = intOne;

    intOne = 5;
    cout << "intONe: " << intOne << endl;
    cout << "rSomeRef: " << rSomeRef << endl;

    cout << "&intOne: " << &intOne << endl;
    cout << "&rSomeRef: " << &rSomeRef << endl;

    return 0;

}
