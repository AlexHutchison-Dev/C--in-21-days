// Listing 8.1  Demonstrates the address-of operator and addresses of local variables

#include <iostream>

int main () {

    using namespace std;

    unsigned short shortVar=5; 
    unsigned long longVar = 65535;
    long sVar = -65535;

    cout << "shortVar: \t" << shortVar;
    cout << "\t Address of shortVar: \t";
    cout << &shortVar << endl;

    cout << "longVar:\t" << longVar;
    cout << "\t Address of longVar: \t";
    cout << &longVar << endl;

    cout << "sVar:   \t" << sVar;
    cout << "\t Address of sVar: \t";
    cout << &sVar << endl;

    return 0;

}