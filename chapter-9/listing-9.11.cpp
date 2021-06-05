// Listing 9.11 - Demonstrates passing references to objects 
//
//
//
//
#include <iostream>

using namespace std;

class SimpleCat
{
    public:
        SimpleCat();                // constructor
        SimpleCat(SimpleCat&);      //copy Constructor
        ~SimpleCat();               //destructor

        int GetAge() const { return itsAge; }
        void SetAge(int age) {itsAge = age;}

    private:
        int itsAge;
};

SimpleCat::SimpleCat()
{
    cout << "SimpleCat Constructor..." << endl;
    itsAge = 1;
}

SimpleCat::SimpleCat(SimpleCat&)
{
    cout << "SimpleCat Copy Constructor..." << endl;
}

SimpleCat::~SimpleCat()
{
    cout << "SimpleCat Destructor..." << endl;
}

const SimpleCat & FunctionTwo (const SimpleCat & theCat);


int main () {
    cout << "Making a cat..." << endl;
    SimpleCat Ciri;
    cout << "Ciri is "; 
    cout << Ciri.GetAge();
    cout << " years old" << endl;

    int age = 5;

    Ciri.SetAge(age);
    cout << "Ciri is "; 
    cout << Ciri.GetAge();
    cout << " years old" << endl;


    cout << "Calling FunctionTwo..." << endl;
    FunctionTwo(Ciri);
    cout << "Ciri is "; 
    cout << Ciri.GetAge();
    cout << " years old" << endl;


    return 0;
}


//FunctionTwo passes a const pointer
const SimpleCat & FunctionTwo(const SimpleCat & theCat) {
    cout << "FunctionTwo returning..." << endl;
    cout << "Ciri is now " << theCat.GetAge();
    cout << " years old." << endl; 
    //  theCat->SetAge(8);          theCat that is passed to this function is a constant and therefore this code would not compile were this line to be uncommented.
    return theCat;
}

