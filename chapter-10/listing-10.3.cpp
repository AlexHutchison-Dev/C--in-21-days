// Listing 10.3 - Demonstrates the declaration of a class and the definition od class methods including
// getters and setters


#include<iostream>

using namespace std;

class Cat       //begin class declaration
{
    public:                     // begin section for public members
        int GetAge();           // accessor member function
        void SetAge(int Age);   // accessor member function
        void Meow();            // general member function

    private:                    // begin section for private members
        int itsAge;             // member variable
};

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
    Cat Paws;
    Paws.SetAge(5);
    Paws.Meow();
    cout << "Paws is a cat who is ";
    cout << Paws.GetAge() << " years old.\n";

    return 0;
}

