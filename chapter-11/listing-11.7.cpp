// Listing 11.7 - Demonstrates calling a base method from an overridden method

#include<iostream>

using namespace std;

class Mammal
{
    public:

        void Move() const { cout << "Mammal move one step.\n"; }
        void Move(int distance) const { cout << "Mammal move " << distance << " steps.\n"; }
    
    protected:
        int istsAge;
        int itsWeight;
};

class Dog : public Mammal
{
    public:
        void Move() const;
};

void Dog::Move() const
{
    cout << "In dog move...\n";
    Mammal::Move(3);
}

int main () 
{
    Mammal bigAnimal;
    Dog Fido;
    bigAnimal.Move(2);
    Fido.Mammal::Move(6);
    return 0;
}
