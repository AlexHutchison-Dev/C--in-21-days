// Listing 11.6 - Demonstrates Hiding methods 

#include<iostream>

using std::cout;

class Mammal
{
    public: 
        void Move() const { cout << "Mammal move one step.\n";  }
        void Move (int distance) const 
        {
            cout << "Mammal move: " << distance << " steps.\n";
        } 

    protected:
        int itsAge;
        int itsWeight;
};

class Dog : public Mammal
{
    public:
        //You may recieve a warniing from the compiler that you are hiding a function
        void Move() const { cout << "Dog moves 5 steps.\n"; }
};

int main ()
{
    Mammal bigAnimal;
    Dog Fido;
    bigAnimal.Move();
    bigAnimal.Move(2);
    Fido.Move();
    //Fido.Move(10);            As the Dog class overrode the Move class of mammal it can no longer
    //                          access any of the overloaded versions of its baseclass by the same
    //                          name.
    return 0;
}
