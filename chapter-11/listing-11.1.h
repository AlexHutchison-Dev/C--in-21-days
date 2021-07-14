// Listing 11.1 - Demonstrates simple inheritance


#include<iostream>
using namespace std;

enum BREED {GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mammal
{
    public: 
        //constructors
        Mammal();
        ~Mammal();

        //accessors
        int GetAge() const;
        void SetAge(int);l
        int GetWeight() const;
        void SetWeight();

        //other methods
        void Speak();
        void Sleep();

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
        BREED GetBreed() const;
        BREED SetBreed(BREED);

        //other methods
        void WagTail();
        void BegForFood();

    protected:
        BREED itsBreed;
};

