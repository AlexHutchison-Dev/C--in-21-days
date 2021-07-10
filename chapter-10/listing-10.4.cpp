// Listing 10.3 - Demonstrates the declaration of constructor and destructor 
// for the cat class


#include<iostream>

using namespace std;

class Cat       //begin class declaration
{
    public:                     // begin section for public members
        Cat(int initialAge);    // constructor
        ~Cat();                 // destructor
        int GetAge();           // accessor member function
        void SetAge(int Age);   // accessor member function
        void Meow();            // general member function

    private:                    // begin section for private members
        int itsAge;             // member variable
};

// constructor for Cat
Cat::Cat(int initialAge) {
    itsAge = initialAge;
}

// destructor for Cat
Cat::~Cat()                     
{
}

// definition of GetAge, Public accessor function
// returns value of itsAge member
int Cat::GetAge()
{
    return itsAge;
}

// definition of SetAge, public accessor function
// sets itsAge member variable

void Cat::SetAge(int age) 
{
    // set member variable itsAge to the value passed in
    // as the paramater age.
    
    itsAge = age;


}

// definition of Meow method
// action : prints Meow to the screen

void Cat::Meow ()
{
    cout << "Meow!\n";
}


int main () 
{
    Cat Paws(5);
    Paws.Meow();
    cout << "Paws is a cat who is ";
    cout << Paws.GetAge() << " years old.\n";

    Paws.SetAge(7);
    cout << "Now Paws is ";
    cout << Paws.GetAge() << " years old.\n";

    return 0;
}

