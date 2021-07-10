// Listing 10.7 - Begin Rectangle.h

#include<iostream>

class Point                             // holds x,y coordinates
{
    // no constructor, use default
    public:
        void SetX(int x) { itsX = x; };
        void SetY(int y) { itsY = y; };
        int GetX() const { return itsX; }
        int GetY() const { return itsY; }
    private:
        int itsX, itsY;
};
// end of Points Declaration


class Rectangle
{
    public:
        Rectangle(int top, int left, int bottom, int right ); 
        
        ~Rectangle() 
        {
        }


        int GetTop() const { return itsTop; }
        int GetLeft() const { return itsLeft; }
        int GetBottom() const { return itsBottom; }
        int GetRight() const { return itsRight; }

        Point GetUpperLeft() const { return itsUpperLeft; }
        Point GetLowerLeft() const { return itsLowerLeft; }
        Point GetUpperRight() const { return itsUpperRight; }
        Point GetLowerRight() const { return itsLowerRight; }

        void SetUpperLeft(Point location) { itsUpperLeft = location; }
        void SetLowerLeft(Point location) { itsLowerLeft = location;  }
        void SetUpperRight(Point location) { itsUpperRight = location; }
        void SetLowerRight(Point location) { itsLowerRight = location; }

        void SetTop(int top) { itsTop = top; }
        void SetLeft(int left) { itsLeft = left; }
        void SetBottom(int bottom) { itsBottom = bottom; }
        void SetRight(int right) { itsRight = right; }

        int GetArea () const;

    private:
        Point itsUpperLeft;
        Point itsUpperRight;
        Point itsLowerLeft;
        Point itsLowerRight;
        int itsTop;
        int itsLeft;
        int itsBottom;
        int itsRight;
};

// end Rectangle.hpp

