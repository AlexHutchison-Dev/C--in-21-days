// Listing 11.8 - Demonstrates using virtual methods

#include<iostream>
using std::cout;

class Mammal
{
    public:
        Mammal():itsAge(1) { cout << "Mammal constructor...\n"; }
        virtual ~Mammal() { cout << "Mammal destructure...\n"; }
        void Move() const { cout << "Mammal move one step.\n";  }
        virtual void Speak() const { cout << "Mammal speak\n"; }

    protected:
        int itsAge;
};

class Dog : public Mammal
{
    public:
        Dog() { cout << "Dog constructor...\n"; }
        virtual ~Dog() { cout << "Dog destructor...\n"; }
        void WagTail() const { cout << "Wagging tail!...\n"; }
        void Speak() const override {cout << "Dog speak\n"; }           //override keyword is not required but aids with code readability 
        void Move() const { cout << "Dog moves 5 steps...\n";  }        //and the compiler will also flag if you try use the overide keyword
                                                                        //on a non virtual function.
};

int main () 
{
    Mammal *pDog = new Dog;
    pDog->Move();
    pDog->Speak();

    return 0;
}
