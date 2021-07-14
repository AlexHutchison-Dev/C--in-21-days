// Listing 11.4 - Demonstrates overloading constructors in derived classes


#include<iostream>
using namespace std;

enum BREED {GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mammal
{
    public: 
        //constructors
        Mammal();
        Mammal(int age);
        ~Mammal();

        //accessors
        int GetAge() const { return itsAge; }
        void SetAge(int age) { itsAge = age; }
        int GetWeight() const { return itsWeight; }
        void SetWeight(int weight) { itsWeight = weight; }

        //other methods
        void Speak() const { cout << "Mammal sound!" << endl; }
        void Sleep() const { cout << "Shh! im sleeping." << endl;}

    protected:
        int itsAge;
        int itsWeight;
};

class Dog : public Mammal
{
    public:
        //constructors
        Dog();
        Dog(int age);
        Dog(int age, int weight);
        Dog(int age, BREED breed);
        Dog(int age, int weight, BREED breed);
        ~Dog();

        //accessors
        BREED GetBreed() const { return itsBreed; }
        void SetBreed(BREED breed) { itsBreed = breed; } 

        //other methods
        void WagTail() { cout << "Tail wagging!" << endl; }
        void BegForFood() { cout << "Begging for food!" << endl; }

    private:
        BREED itsBreed;
};

Mammal::Mammal():
    itsAge(3),
    itsWeight(5)
{
    std::cout << "Mammal constructor..." << std::endl;
}

Mammal::Mammal(int age):
itsAge(age),
itsWeight(5)
{
    cout << "Mammal(int) constructor..." << endl;
}

Mammal::~Mammal()
{
    std::cout << "Mammal destructor..." << endl;
}

Dog::Dog():
    Mammal(),
    itsBreed(GOLDEN)
{
    std::cout << "Dog constructor..." << endl;
}

Dog::Dog(int age):
Mammal(age),
itsBreed(GOLDEN)
{
    cout << "Dog(int) constructor..." << endl;
}

Dog::Dog(int age, int weight):
Mammal(age),
itsBreed(GOLDEN)
{
    itsWeight = weight;
    cout << "DOg(int int) constructor..." << endl;
}

Dog::Dog(int age, int weight, BREED breed):
Mammal(age),
itsBreed(breed)
{
    itsWeight = weight;
    cout << "Dog(int,int BREED) constructor..." << endl;
}

Dog::Dog(int age, BREED breed):
Mammal(age),
itsBreed(breed)
{
    cout << "Dog(int, BREED) constructor..." << endl;
}

Dog::~Dog()
{
    std::cout << "Dog deconstructor..." << endl;
}

int main() 
{
    Dog Fido;
    Dog Rover(5);
    Dog Buster(5,6);
    Dog Yorkie(3, GOLDEN);
    Dog Dobbie(4,20,DOBERMAN);
    Fido.Speak();
    Rover.WagTail();
    cout << "Yorkie is " << Yorkie.GetAge() << " years old." << endl;
    cout << "Dobbie weighs: " << Dobbie.GetWeight() << " Pounds." << endl;

    return 0;
}
