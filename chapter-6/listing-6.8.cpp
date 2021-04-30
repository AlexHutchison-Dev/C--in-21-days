// Listing 6.8 - demonstrates function polymorphism

#include <iostream>

int Double(int);
long Double(long);
float Double(float);
double Double(double);

using namespace std;

int main()
{
    int myInt = 6500;
    long myLong = 6500;
    float myFloat = 6.5f;
    double myDouble = 6.5e20;

    int doubledInt;
    long doubledLong;
    float doubledFloat;
    double doubledDouble;

    cout << "myInt: " << myInt << endl;
    cout << "myLong: " << myLong << endl;
    cout << "myFloat: " << myFloat << endl;
    cout << "myDouble: " << myDouble << endl;

    doubledInt = Double(myInt);
    doubledLong = Double(myLong);
    doubledFloat = Double(myFloat);
    doubledDouble = Double(myDouble);

    cout << "doubledInt: " << doubledInt << endl;
    cout << "doubledLong: " << doubledLong << endl;
    cout << "doubledFloat: " << doubledFloat << endl;
    cout << "doubledDouble: " << doubledDouble << endl;

    return 0;
}

int Double(int original)
{
    cout << "In Double(int)\n";
    return 2 * original;
}

long Double(long original)
{
    cout << "In Double(long)\n";
    return 2 * original;
}

float Double(float original)
{
    cout << "In Double(float)\n";
    return 2 * original;
}

double Double(double original)
{
    cout << "In Double(double)\n";
    return 2 * original;
}