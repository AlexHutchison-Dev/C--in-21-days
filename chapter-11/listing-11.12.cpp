// Listing 11.12 - Demonstrates the use of provate inheritance

#include<iostream>

using namespace std;

class ElectricMotor
{
    public:
        ElectricMotor () {}
        virtual ~ElectricMotor () {}

    public: 
        void StartMotor() 
        {
            Accelerate();
            Cruise();
        }

        void StopMotor()
        {
            cout << "Motor Stopped!\n";
        }

    private:
        void Accelerate ()
        {
            cout << "Motor started." << endl; 
        }

        void Cruise ()
        {
            cout << "Motor running at constant speed" << endl;
        }
};

class Fan : private ElectricMotor
{
    public:
        Fan() {}
        ~Fan() override {}

        void StartFan () 
        {
            StartMotor();
        }

        void StopFan()
        {
            StopMotor();
        }
};

int main ()
{
    Fan mFan;

    mFan.StartFan();
    mFan.StopFan();

    /*
     * Note:
     *      The next two lines access the base class ElectricMotor, However as Fan features 
     *      'private inheritance' from ElectricMotor, neither the base class instance nor its 
     *      public methods are accessible to the users of the class Fan.
     *
     *      Uncommenting them will cause a compile time error.
     */

    //mFan.Accellerate ();
    //ElectricMotor * pMotor = &mFan;

}
