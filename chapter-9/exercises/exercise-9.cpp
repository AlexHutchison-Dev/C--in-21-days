// Exercise 9
//
// Fix the problem from exercise 8;
// I think that using apointer instead of a reference will be the best way to 
// achieve the desired functonality.
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
};

CAT * MakeCat(int age);

int main () {
    int age = 7;
    CAT * Boots = MakeCat(age);
    cout << "Boots is: " << Boots->GetAge() << " years old." << endl;
    delete Boots;
    return 0;
}

CAT * MakeCat (int age) {
    return new CAT(age);
}


