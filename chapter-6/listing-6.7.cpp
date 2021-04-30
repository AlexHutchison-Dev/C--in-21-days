// Listing 6.7 - demonstrates use of default paramater values.

// if an paramater is listed in the prototype with a default, but no corresponding argument is passed in the function call, 
// the function will use the default value initilized in the prototype.

// Note: All paramaters with out defaults must preceed any with defaults as the compiler matches arguments in order, the user
// has no way to skip a paramater and ask for the default, e.g dont do this int area(int length = 10, int width, int height);
// do this int area(int width, int height, int length =10);.


#include <iostream>

int AreaCube(int length, int width =25, int height = 1);

int main()
{
    int length = 100;
    int width = 50;
    int height = 2;
    int area;
    
    area = AreaCube(length, width, height);

    std:: cout << "First area equals: " << area << std::endl;

    area = AreaCube(length, width);

    std:: cout << "Second area equals: " << area << std::endl;

    area = AreaCube(length);

    std:: cout << "Third area equals: " << area << std::endl;

    return 0;
}

int AreaCube(int length, int width, int height)
{
    return (length * width) * height;
}