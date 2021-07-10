// Listing 10.1 - Demonstrates the declaration of a class, and the definition of an object of that
// class.
//

#include<iostream>

class Cat       // Declare the Cat class 
{
    public:                 //members that follow are public
        int itsAge;         //member variable
        int itsWeight;      //member variable
            // note the semi-colon
};

int main() {
    Cat Paws;
    Paws.itsAge = 5;        // assign a value to the member variable
    std::cout << "Paws is a Cat who is " ;
    std::cout << Paws.itsAge << " years old. \n";

    return 0;
}
