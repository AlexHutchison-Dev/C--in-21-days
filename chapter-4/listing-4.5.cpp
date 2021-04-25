// Listing 4.5 char array and buffers

/*
*   There are a couple of problems with this method of getting input, firstly if the user enters more than 79 characters
*   then the buffer will overflow, and cin reads a space as the end of the data so if the user tries to input more than one
*   word, only the first will be added to the buffer.
*
*/

#include <iostream>
using namespace std;

int main()
{
    char buffer[80] = {'\0'};
    cout << "Enter the string: ";
    cin >> buffer;
    cout << "Here is the Buffer: " << buffer << endl;

    return 0;
}