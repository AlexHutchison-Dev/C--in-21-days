// Listing 12.2 - Demostrates casting down using RTTI (Run-Time Type Information)
// The fact that typ_casting is required is an indicator of bad inheritance hierachy.

#include<iostream>
using namespace std;

enum TYPE {HORSE, PEGASUS};

class Horse
{ 
    public: 
        virtual void Gallop () { cout << "Galloping...\n"; }

    private: 
        int istAge;

};

class Pegasus : public Horse
{
    public:
        virtual void Fly() {
            cout << "Ican fly! Ican Fly!\n";
        }
};

const int NumberHorses = 5;
int main ()
{
    Horse* Ranch[NumberHorses];
    Horse* pHorse;

    int choice, i;

    for (i=0; i < NumberHorses; i++)
    {
        cout << " (1)  Horse    (2) Pegasus:    ";
        cin >> choice;

        if (choice == 2)
            pHorse = new Pegasus;
        else 
            pHorse = new Horse;
        Ranch[i] = pHorse;
    }
    
    
    cout << endl;
    for (i=0; i < NumberHorses; i++)
    {
        Pegasus * pPeg = dynamic_cast < Pegasus * > (Ranch[i]);
        if (pPeg != NULL) 
            pPeg->Fly();
        else 
            cout << "Just a Horse!\n";
    }
    return 0;
}



