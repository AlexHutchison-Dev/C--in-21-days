// Show the declaration of a class Square, which derives from Rectangle, which in turn derives from Shape.
//

class Shape
{
    public:
        Shape() {}
        ~Shape() {}
};

class Rectangle : public Shape
{
    public:
        Rectangle () {}
        ~Rectangle () {}
};

class Square : public Rectangle
{
    public:
        Square() {}
        ~Square() {}
};

