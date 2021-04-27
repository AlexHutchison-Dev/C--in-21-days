// Listing 6.2 - demonstrating the use of local variables and paramaters

#include <iostream>

float Convert(float);

int main()
{
    using namespace std;

    float TempFer;
    float TempCel;

    cout << "Please enter the temperature in Fahrenheit: ";
    cin  >> TempFer;
    
    TempCel = Convert(TempFer);

    cout << "\n Here is the temperature in Celcius: " << TempCel << endl;

    return 0;
}

float Convert(float TempFer)
{
    float TempCel;
    TempCel = ((TempFer - 32) *5) / 9;
    return TempCel;
}