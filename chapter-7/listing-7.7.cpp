// Listing 7.7 - demonstrates do while loops

#include <iostream>

int main()
{
    using namespace std;
    int counter;

    cout << "How many hello's?: ";
    cin >> counter;

    do
    {
        cout << "Hello!\n";
        counter--;
    } while (counter > 0);
    
    cout << "Counter is: " << counter << endl;
    return 0;
}