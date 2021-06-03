// Listing 7.4 - demonstrates break and continue

#include <iostream>

int main ()
{
    using namespace std;

    unsigned short small;
    unsigned long large;
    unsigned long skip;
    unsigned long target;
    const unsigned short MAX_Small = 65535;

    cout << "Enter a small number: ";
    cin >> small;

    cout << "Enter a large number: ";
    cin >> large;

    cout  << "Enter a skip number: ";
    cin >> skip;

    cout << "Enter a target number: ";
    cin >> target;

    cout << "\n";
    
    //set up 2 stop conditions for the small loop
    while (small < large && small < MAX_Small)
    {
        small++;
        if (small % skip ==0)   // skip the decrement
        {
            cout << "skipping on " << small << endl;
            continue;
        }

        if (large  == target)   // exact match for target
        {
            cout << "Target reached!";
            break;
        }

        large -=2;
    }

    cout << "\nSmall : " << small << " Large: " << large << endl;
    return 0;

}
