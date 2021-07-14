// Listing 11.9 - Demonstrates using multiple wirtual functions called in turn

#include<iostream>

using namespace std;

class Mammal 
{
    public:
        Mammal():itsAge(1){}
        virtual ~Mammal() {}
        virtual void Speak () const{ cout << "Mammal speak!...\n"; }

    private: 
        int itsAge;

};

class Dog : public Mammal
{
    public:
       void Speak() const override { cout << "Woof!\n"; }

};

class Cat : public Mammal
{
    public:
       void Speak() const override { cout << "Meow!\n"; }

};

class Horse : public Mammal
{
    public:
       void Speak() const override { cout << "Neigh!\n"; }

};

class Pig : public Mammal
{
    public:
       void Speak() const override { cout << "Oink!\n"; }

};

int main () 
{
    Mammal* theArray[5];

    Mammal* ptr;

    int choice, i;

    for (i = 0; i < 5; i++)
    {
        cout << "(1) dog (2) cat (3) horse (4) pig: ";
        cin >> choice;

        switch (choice)
        {
            case 1: ptr = new Dog;
                    break;
            case 2: ptr = new Cat;
                    break;
            case 3: ptr = new Horse;
                    break;
            case 4: ptr = new Pig;
                    break;
            default: ptr = new Mammal;
                     break;

        }
        theArray[i] = ptr;
    }

    for (i = 0; i < 5; i++)
    {
        theArray[i]->Speak();
    }

    return 0;
}


