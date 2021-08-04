//Chapter 12

//Exercise 1

//Write the code that derives car and bus from the class vehicle. Make verhicle be an abstract class
//with two pure virtual finctions. Make car and Bus not be abstract classes.


class Vehicle
{
    public:
        Vehicle () {};
        virtual ~Vehicle() {};
        virtual Brake() = 0;
        virtual Accelarate() = 0;
};

class Car : public Vehicle
{
    public:
        virtual Brake() override;
        virtual Move() override;

}

class Bus : public Vehicle
{
    public:
        virtual Brake() override;
        virtual Move() override;

}
