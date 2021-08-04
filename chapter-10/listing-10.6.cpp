// Listing 10.6 - Demonstrates inline functions and the inclusion of header files,
// be sure to include the header files.

#include "Cat.hpp"

Cat::Cat(int initialAge)        //constructor
{
    itsAge = initialAge;
} 

Cat::~Cat()                     // default destructor declared to maintain form as
{                               // constructor declared 

}                               


// Create an instance of Cat, set its age, have it meow, tell us its age,
// then meow again

int main () 
{
    Cat Paws(5);
    Paws.Meow();
    std::cout << "Paws is a cat, who is ";
    std::cout << Paws.GetAge() << " years old.\n";
    Paws.Meow();
    Paws.SetAge(7);
    std::cout << "Paws is a cat, who is ";
    std::cout << Paws.GetAge() << " years old.\n";
    return 0;
}
