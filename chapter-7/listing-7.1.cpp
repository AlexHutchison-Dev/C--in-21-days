// Listing 7.1 - demonstrates loop itteration using goto

#include <iostream>

int main()
{
    using namespace std;
    int counter = 0;        // initialize counter

    loop:
        counter ++;         // top of the loop
        cout << "counter: " << counter << endl;
        if (counter < 5)    // test the value
            goto loop;      // jump to top of loop

    cout << "Complete. Counter: " << counter << endl;
    return 0;
}