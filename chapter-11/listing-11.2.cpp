// Listing 11.2 - Demonstrates the use of a derived object


#include<iostream>
using namespace std;
using std::cout;
using std::endl;

enum BREED {GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mammal
{
    public: 
        //constructors
        Mammal():itsAge(2), itsWeight(5){}
        ~Mammal(){}

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
        Dog():itsBreed(GOLDEN) {} 
        ~Dog() {}

        //accessors
        BREED GetBreed() const { return itsBreed; }
        void SetBreed(BREED breed) { itsBreed = breed; } 

        //other methods
        void WagTail() { cout << "Tail wagging!" << endl; }
        void BegForFood() { cout << "Begging for food!" << endl; }

    protected:
        BREED itsBreed;
};


int main() 
{
    Dog Fido;
    Fido.Speak();
    Fido.WagTail();
    cout << "Fido is " << Fido.GetAge() << " years old." << endl;
    return 0;
}
