// Listing 4.7 using strcpy()

// strycpy() takes 2 character arrays as arguments, a destination followed by a source.

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char String1[] = "No man is an island.";
    char String2[80] = {'\0'};

    strcpy(String2, String1);

    cout << "String1: " << String1 << endl;
    cout << "String2: " << String2 << endl;

    return 0;
}