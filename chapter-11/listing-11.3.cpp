// Listing 11.3 - Demonstrates the oreder constructors and destructors are called


#include<iostream>
using namespace std;
using std::cout;
using std::endl;

enum BREED {GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mammal
{
    public: 
        //constructors
        Mammal();
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
        ~Dog();

        //accessors
        BREED GetBreed() const { return itsBreed; }
        void SetBreed(BREED breed) { itsBreed = breed; } 

        //other methods
        void WagTail() { cout << "Tail wagging!" << endl; }
        void BegForFood() { cout << "Begging for food!" << endl; }

    protected:
        BREED itsBreed;
};

Mammal::Mammal():
    itsAge(3),
    itsWeight(5)
{
    std::cout << "Mammal constructor..." << std::endl;
}

Mammal::~Mammal()
{
    std::cout << "Mammal destructor..." << endl;
}

Dog::Dog():
    itsBreed(GOLDEN)
{
    std::cout << "Dog constructor..." << endl;
}

Dog::~Dog()
{
    std::cout << "Dog deconstructor..." << endl;
}

int main() 
{
    Dog Fido;
    Fido.Speak();
    Fido.WagTail();
    cout << "Fido is " << Fido.GetAge() << " years old." << endl;
    return 0;
}
