// Listing 9.9 - Demonstrates passing objects by reference - passing pointers to objects
//
#include <iostream>

using namespace std;

class SimpleCat
{
    public:
        SimpleCat();                // constructor
        SimpleCat(SimpleCat&);      //copy Constructor
        ~SimpleCat();               //destructor
};

SimpleCat::SimpleCat()
{
    cout << "SimpleCat Constructor..." << endl;
}

SimpleCat::SimpleCat(SimpleCat&)
{
    cout << "SimpleCat Copy Constructor..." << endl;
}

SimpleCat::~SimpleCat()
{
    cout << "SimpleCat Destructor..." << endl;
}

SimpleCat FunctionOne (SimpleCat theCat);
SimpleCat* FunctionTwo (SimpleCat *theCat);


int main () {
    cout << "Making a cat..." << endl;
    SimpleCat Ciri;
    cout << "Calling FunctionOne..." << endl;
    FunctionOne(Ciri);
    cout << "Calling FunctionTwo..." << endl;
    FunctionTwo(&Ciri);

    return 0;
}

//FunctionOne passed by value
SimpleCat FunctionOne(SimpleCat theCat)
{
    cout << "FunctionOne returning..." << endl;
    return theCat;

}

//FunctionTwo passed by reference
SimpleCat* FunctionTwo(SimpleCat *theCat) {
    cout << "FunctionTwo returning..." << endl;
    return theCat;
}

