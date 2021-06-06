// Exercise 8
//
// What is wrong with this program?
//
//The program creates a CAT object on the free stor without deleting it causing
// a memory leak.
//
//
#include <iostream>

using namespace std;

class CAT {
    public:
        CAT (int age) {itsAge = age;}
        ~CAT(){}
        int GetAge() const {return itsAge;}

    private:
        int itsAge;
}

CAT & MakeCat(int age);

int main () {
    int age = 7;
    CAT Boots = MakeCat(age);
    cout << "Boots is: " << Boots.GetAge() << " years old." << endl;
    return 0;
}
