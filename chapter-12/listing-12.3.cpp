// lIsting 12.3 - Demonstrates Multiple Inheritance


#include<iostream>
using namespace std;

class Horse
{
    public:
        Horse() { cout << "Horse constructor...\n"; }
        virtual ~Horse() { cout << "Horse deconstructor...\n"; }
        virtual void Whinny() const { cout << "Whinny!...\n"; }
    private:
        int itsAge;
};

class Bird
{
    public:
        Bird () { cout << "Bird constrctor...\n"; }
        virtual ~Bird () { cout << "Bird destructor...\n" ;}
        virtual void Chirp () const { cout << "Chirp!...\n"; }
        virtual void Fly() const { cout << "Ican FLy! I can Fly!..\n"; }
    private:
        int itsWeight;

};

class Pegasus : public Horse, public Bird
{
    public:
        Pegasus () { cout << "Pegasus constructor...\n"; }
        ~Pegasus () { cout << "Pegasus destructor...\n"; }
        void Chirp () const { Whinny(); }
};

const int MagicNumber = 2;

int main ()
{
    Horse* Ranch[MagicNumber];
    Bird* Aviary[MagicNumber];
    Horse * pHorse;
    Bird * pBird;
    int choice, i;

    for (i=0; i < MagicNumber; i++)
    {
        cout << "\n (1) Horse   (2) Pegasus:\t";
        cin >> choice;

        if (choice == 2)
            pHorse = new Pegasus;
        else
            pHorse = new Horse;
        Ranch[i] = pHorse;
    }

    for (i=0; i < MagicNumber; i++)
    {
        cout << "\n(1) Bird (2) Pegasus:\t";
        cin >> choice;

        if (choice == 2)
            pBird = new Pegasus;
        else
            pBird = new Bird;
        Aviary[i] = pBird;
    }

    cout << endl;
     for (i=0; i < MagicNumber; i++)
    {
        cout << "\nRanch[" << i << "]:";
        Ranch[i]->Whinny();
        delete Ranch[i];
    }
     for (i=0; i < MagicNumber; i++)
    {
        cout << "\nAviary[" << i << "]:";
        Aviary[i]->Chirp();
        Aviary[i]->Fly();
        delete Aviary[i];
    }

    return 0;
}
