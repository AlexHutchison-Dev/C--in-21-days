// Listing 4.6 using cin.get()

/*
*   cin.get() takes 3 arguments, the name of the buffer, the number of characters, and the terminating character, in this example I 
*   only passed the first two as the new line default value for the terminating character works for this use case.  IF the input exceedes
*   the number of characters specified the exceess characters are dicarded.
*/

#include <iostream>
using namespace std;

int main()
{
    char Buffer[80] = {'\0'};
    cout << "Enter the string: ";
    cin.get(Buffer, 79);    // get text up to 79 charaactersn or newline
    cout << "Here is the Buffer: " << Buffer << endl;

    return 0;
}