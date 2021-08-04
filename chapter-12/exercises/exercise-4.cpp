//Chapter 12

//Exercise 4

//Modify the code from exercise 3 so that car is an abstract class and derive sportscar and coupe 
//from Car. In the car class provide an implementation of one of the pure functions in vehicles 
//and make it non pure.


class Vehicle
{
    public:
        Vehicle () {};
        virtual ~Vehicle() {};
        virtual void Brake() = 0;
        virtual void Accelarate() = 0;
};

class Car : public Vehicle
{
    public:
        virtual Move();

};

class Bus : public Vehicle
{
    public:
        virtual Brake() override;
        virtual Move() override;

};

class SportsCar : public Car
{
    vitual void Brake();
};

class Coupe : public Car
{
    virtual void Brake(); 
}

