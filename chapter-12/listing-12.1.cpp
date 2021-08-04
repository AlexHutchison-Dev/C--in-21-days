// Listing 12.1 - Demonstrates getting horses to fly with single inheritance

#include<iostream>

using namespace std;

class Horse 
{
    public: 
        void Gallop() { cout << "Galloping!\n"; }
        virtual void Fly() {cout << "Horses cant fly!\n" ;}
    private: 
        int itsAge;

};

class Pegasus : public Horse
{
    public:
        void Fly () override {
            cout << "I can fly!, I can Fly!\n" ;
        }
};

const int NumberHorses = 5;

int main () 
{
    Horse * Ranch[NumberHorses];
    Horse* pHorse;

    int choice, i;

    for (i=0; i < NumberHorses; i++)
    {
        cout << "(1) horse (2) pegasus: ";
        cin >> choice;

        if (choice == 2)
        {
            pHorse = new Pegasus;
        }
        else 
        {
            pHorse = new Horse;
        }
         
        Ranch[i] = pHorse;

    }

    cout << endl;

    for (i=0; i<NumberHorses;i++)
    {
        Ranch[i]->Fly();
        delete Ranch[i];
    }

    return 0;
}
