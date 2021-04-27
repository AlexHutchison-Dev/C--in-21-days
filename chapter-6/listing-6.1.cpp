// Listing 6.1 - demonstrates the use of function prototypes

#include <iostream>

int Area(int length, int width);

int main()
{
    using std::cout;
    using std::cin;

    int lengthOfYard = 0;
    int widthOfYard = 0;
    int areaOfYard = 0;

    cout << "\nHow wide is your yard? ";
    cin >> widthOfYard;
    cout << "\nHow long is your yard? ";
    cin >> lengthOfYard;

    areaOfYard = Area(lengthOfYard, widthOfYard);

    cout << "\nYour yard is " << areaOfYard << " square feet.\n\n";

    return 0;
}

int Area(int len, int wid)
{
    return len * wid;
}