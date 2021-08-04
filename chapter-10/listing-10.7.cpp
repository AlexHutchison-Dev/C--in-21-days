// lIsting 10.8 - Rectangle.cpp Demonstrates using an object we created to make up
// part of an object we create


#include "Rectangle.hpp"

Rectangle::Rectangle(int top, int left, int bottom, int right) 
{
    itsTop = top;
    itsLeft = left;
    itsRight = right;
    itsBottom = bottom;

    itsUpperLeft.SetX(left);
    itsUpperLeft.SetY(top);

    itsUpperRight.SetX(right);
    itsUpperRight.SetY(top);

    itsLowerLeft.SetX(left);
    itsLowerLeft.SetY(bottom);

    itsLowerRight.SetX(right);
    itsLowerRight.SetY(bottom);
}

// compute area of the rectangle by finding sides, establish width and height,
// then multiply

int Rectangle::GetArea() const 
{
    int width = itsRight - itsLeft;
    int height = itsTop - itsBottom;

    return (height * width);
}

int main () 
{
    // initialize a local Rectangle instance
    Rectangle MyRectangle (100, 20,50,80);

    int area = MyRectangle.GetArea();

    std::cout << "Area: " << area << ".\n";
    std::cout << "Upper Left X coordinate: " ;
    std::cout << MyRectangle.GetUpperLeft().GetX() << std::endl;

   return 0; 
}


