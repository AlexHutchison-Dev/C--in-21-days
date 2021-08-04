// Listing 12.10 - Demonstrates Deriving abstract classes from other abstract classes


#include<iostream>
using namespace std;

enum COLOR { Red, Green, Blue, Yellow, White, Black, Brown } ;

class Animal            // common base to both Mammal and Fish
{
    public:
        Animal(int);
        virtual ~Animal() { cout << "Animal destructor...\n"; }
        virtual int GetAge() const { return itsAge; }
        virtual void SetAge(int age) { itsAge = age; }
        virtual void Sleep () const = 0;
        virtual void Eat() const = 0;
        virtual void Reproduce() const = 0;
        virtual void Move() const =0;
        virtual void Speak() const =0;
    private:
        int itsAge;
};

Animal::Animal (int age) :
   itsAge(age)
{
    cout << "Animal constructor...\n";
} 

class Mammal : public Animal
{
    public:
        Mammal(int age) : Animal(age) { cout << "Mammal constructor...\n"; }
        virtual ~Mammal() { cout << "Mammal deconstructor...\n"; }
        virtual void Reproduce() const override { cout << "Mammal reproduction depicted...\n"; }

};

class Fish : public Animal
{
    public:
        Fish (int age) : Animal(age) { cout << "Fish constructor...\n"; }
        virtual ~Fish() { cout << "Fish deconstructor...\n"; }
        virtual void Sleep() const override { cout << "Fish snooring!\n"; }
        virtual void Eat() const override { cout << "Fish Feeding...\n"; }
        virtual void Reproduce() const override { cout << "Fish Reproducing ...\n"; }
        virtual void Move() const override {  cout << "Fish swimming...\n"; }
        virtual void Speak() const override {}
};

class Horse: public Mammal
{
    public:
        Horse(int age, COLOR color): Mammal(age), itsColor(color) 
        { cout << "Horse constructor...\n"; }
        virtual ~Horse() { cout << "Horse deconstructor...\n"; }
        virtual void Speak() const override { cout << "Whinny!...\n"; }
        virtual COLOR GetItsColor() const { return itsColor; }
        virtual void Sleep() const override { cout << "Horse snooring!...\n"; } 
        virtual void Eat() const override { cout << "Horse eating...\n"; }
        virtual void Move() const override { cout << "Hose running... \n"; }
    protected:
        COLOR itsColor;
};

class Dog : public Mammal
{
    public:
        Dog(int age, COLOR color) : Mammal(age), itsColor(color) { cout << "Dog constructor...\n"; }
        virtual ~Dog() { cout << "Dog deconstructor...\n"; }
        virtual void Speak() const override { cout << "Wooof!...\n"; }
        virtual void Sleep() const override { cout << "Dog snooring...\n" ;}
        virtual void Eat() const override { cout << "Dog eating...\n"; }
        virtual void Move() const override { cout << "Dog Moving...\n"; }
    protected:
        COLOR itsColor;
};

int main ()
{
    Animal *pAnimal = 0;
    int choice;
    bool fQuit = false;

    while ( !fQuit )
    {
        cout << "(1) Dog    (2) Horse      (3) Fish     (0) Quit: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
            case 1:
                pAnimal = new Dog(5, Brown);
                break;
            case 2:
                pAnimal = new Horse(4, Black);
                break;
            case 3:
                pAnimal = new Fish(5);
                break;
            default:
                fQuit = true;
                break;
        }

        if (fQuit == false)
        {
            pAnimal->Speak();
            pAnimal->Eat();
            pAnimal->Reproduce();
            pAnimal->Sleep();
            pAnimal->Move();
            delete pAnimal;
            cout << endl;
        }
    }
    return 0;
}
