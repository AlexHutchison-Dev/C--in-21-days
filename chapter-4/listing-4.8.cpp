// Listing 4.8 Using strncpy()

/*  strncpy() protrcts against writing past the end of the buffer when the source string is longer than the destination array, where strcpy() will just
*   keep writing. in order to do this it takes an interger as a fourth argument that tells it how many characters to copy.
*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    const int MAX_LENGTH = 80;
    char String1[] = "No man is an island";
    char String2[MAX_LENGTH + 1] = {"\0"};

    strncpy(String2, String1, MAX_LENGTH); // Safer than strcpy

    cout << "String1: " << String1 << endl;
    cout << "String2: " << String2 << endl;

    return 0;
}