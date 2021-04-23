// Demonstration of variables

#include <iostream>

typedef unsigned short int USHORT;

int main()
{
    using namespace std;

    USHORT Width = 5, Length;
    Length = 10;

    // create unsignedshort and and initilize with product of Width and Sum
    USHORT Area = (Width * Length);

    cout << "Width: " << Width << endl;
    cout << "Length: " << Length << endl;
    cout << "Area: " << Area << endl;

    return 0;

}