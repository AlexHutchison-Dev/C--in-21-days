// Listing 7.3 - demonstrates complex while loops

#include <iostream>

int main()
    {
        using namespace std;

        unsigned short int small;
        unsigned long large;
        const unsigned short MAX_SMALL = 65535;

        cout << "Enter a small number: ";
        cin >> small;

        cout << "Enter a large number: ";
        cin >> large;

        cout << "small: " << small << ".\t";

        // for each itteration, test two conditions
        while (small < large && small < MAX_SMALL)
        {
            if (small % 5000 == 0)
                cout << ".";    // write "." every 5000 iterations ish
            
            small++;
            large -=2;
        }

        cout << "\nsmall: " << small << " large: " << large << endl;
        return 0;
    }
