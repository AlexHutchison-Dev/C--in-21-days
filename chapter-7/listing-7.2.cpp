// Listing 7.2 - demonstrates looping with while

#include <iostream>

int main()
{
    using namespace std;

    int counter = 0; //intitializ the condition

    while (counter < 5)
    {
        counter++;
        cout << counter << "counter: " << counter << endl;
    }

    cout << "Complete. Counter: " << counter << endl;
    return 0;
}