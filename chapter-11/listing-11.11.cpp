// Listing 11.11 - Demonstrates the use of virtual copy constructor

#include<iostream>

using namespace std;

class Mammal
{
    public:
        Mammal(): itsAge(1) { cout << "Mammal Constructor...\n"; }
        virtual ~Mammal() { cout << "Mammal destructor...\n"; }
        Mammal (const Mammal & rhs);
        virtual void Speak() const { cout << "Mammal speak.\n"; }
        virtual Mammal* Clone () { return new Mammal(*this); }
        int GetAge() const { return itsAge; }

    protected:
        int itsAge;

};

Mammal::Mammal (const Mammal & rhs) : itsAge(rhs.GetAge())
{
    cout << "Mammal copy Constructor...\n";
}

class Dog : public Mammal
{
    public:
        Dog() { cout << "Dog constructor...\n"; }
        virtual ~Dog() { cout << "Dog destructor...\n"; }
        Dog ( const Dog & rhs );
        void Speak() const override { cout << "Woof!\n"; }
        virtual Mammal* Clone() override { return new Dog(*this); }

};

Dog::Dog(const Dog & rhs):
Mammal(rhs)
{
    cout << "Dog copy constructor...\n";
}

class Cat : public Mammal
{
    public:
        Cat() { cout << "Cat constructor...\n"; }
        virtual ~Cat() { cout << "Cat deconstructor...\n"; }
        Cat ( const Cat & rhs );
        void Speak() const override { cout << "Meow!\n"; }
        virtual Mammal* Clone() override { return new Cat(*this); }

};

Cat::Cat(const Cat & rhs):
    Mammal(rhs)
{
    cout << "Cat copy constructor\n";
}


enum ANIMALS {MAMMAL, DOG, CAT};
const int NumAnimalTypes = 3;

int main()
{
    Mammal *TheArray[NumAnimalTypes];
    Mammal* ptr;

    int choice, i;
    for ( i = 0; i < NumAnimalTypes; i++)
    {
        cout << "(1) dog, (2) cat, (3) mammal: " ;
        cin >> choice;
        switch(choice)
        {
            case DOG: ptr = new Dog;
                      break;
            case CAT: ptr = new Cat;
                      break;
            default: ptr = new Mammal;
                     break;
        }
        TheArray[i] = ptr;

    }
    Mammal *OtherArray[NumAnimalTypes];
    for (i=0; i < NumAnimalTypes; i++)
    {
        TheArray[i]->Speak();
        OtherArray[i] = TheArray[i]->Clone();
    }
    for (i = 0; i < NumAnimalTypes; i++)
    {
        OtherArray[i]->Speak();
    }

    return 0;

}

