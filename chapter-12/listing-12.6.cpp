// listing 12.4 - Demonstrates the use of virtual inheritance


#include<iostream>
using namespace std;

typedef int HANDS;
enum COLOR { Red, Green, Blue, Yellow, White, Black, Brown } ;

class Animal        // A common base class for  both horse and bird
{
    public:
        Animal(int);
        virtual ~Animal() { cout << "Animal destructor...\n"; }
        virtual int GetAge() const { return itsAge; }
        virtual void SetAge(int age) { itsAge = age; }
    private:
        int itsAge;
};

Animal::Animal (int age):
itsAge(age)
{
    cout << "Animal constructor...\n";
}

class Horse : virtual public Animal
{
    public:
        Horse(COLOR color, HANDS height, int age);
        virtual ~Horse() { cout << "Horse deconstructor...\n"; }
        virtual void Whinny() const { cout << "Whinny!...\n"; }
        virtual HANDS GetHeight() const { return itsHeight; }
        virtual COLOR GetColor() const { return itsColor; }
    protected:
        HANDS itsHeight;
        COLOR itsColor;
};

Horse::Horse (COLOR color, HANDS height, int age):
Animal(age),
itsColor(color), itsHeight(height)
{
    cout << "Horse constructor...\n"; 
}

class Bird : virtual public Animal
{
    public:
        Bird (COLOR color, bool migrates, int age); 
        virtual ~Bird () { cout << "Bird destructor...\n" ;}
        virtual void Chirp () const { cout << "Chirp!...\n"; }
        virtual void Fly() const { cout << "I can FLy! I can Fly!..\n"; }
        virtual COLOR GetColor() const { return itsColor ; }
        virtual bool GetMigration() const { return itsMigration ; }
    protected:
        COLOR itsColor;
        bool itsMigration;
};

Bird::Bird(COLOR color, bool migrates, int age):
Animal(age),
itsColor(color), itsMigration(migrates)
{
    cout << "Bird Constructor...\n";
}

class Pegasus : public Horse, public Bird
{
    public:
        void Chirp() const override { Whinny(); }
        Pegasus  ( COLOR, HANDS, bool, long, int);
        ~Pegasus () { cout << "Pegasus destructor...\n"; }
        virtual long GetNumberBelievers() const 
        {
            return itsNumberBelievers;
        }
        virtual COLOR GetColor() const override { return Horse::itsColor; }
    private:
        long itsNumberBelievers;
};

Pegasus::Pegasus (
        COLOR acolor,
        HANDS height,
        bool migrates,
        long numBelieve,
        int age
        ):
    Horse(acolor, height, age),
    Bird(acolor, migrates, age),
    Animal(age * 2),
    itsNumberBelievers(numBelieve)
{
    cout << "Pegasus constructor...\n";
}

int main ()
{
    Pegasus *pPeg = new Pegasus(Red, 5, true, 10, 2);
    int age = pPeg->GetAge();
    cout << "This Pegasus is " << age << " years old.\n";
    delete pPeg;
    return 0;
}
