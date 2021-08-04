//Listing 12.7 - Implementing pure virtual functions

#include<iostream>
using namespace std;

class Shape
{
    public:
        Shape(){}
        virtual ~Shape(){}
        virtual double GetArea() = 0;                   // Pure virtual functions
        virtual double GetPerim() = 0;
        virtual void Draw() = 0;

    private:
};

void Shape::Draw()
{
    cout << "Abstract drawing mechanism!\n";
}

class Circle : public Shape
{
    public:
        Circle( int radius ): itsRadius(radius){}
        ~Circle() {}
        double GetArea() { return 3 * itsRadius * itsRadius; }
        double GetPerim() { return 6 * itsRadius; }
        void Draw();         
    private:
        int itsRadius;
        int itsCircumference;
};

void Circle::Draw()
{
    cout << "Circle drawing routine here!\n";
    Shape::Draw();
}

class Rectangle: public Shape
{
    public:
        Rectangle (int len, int width): itsLength(len), itsWidth(width) {}
        virtual ~Rectangle() {}
        virtual double GetArea() { return itsLength * itsWidth; }
        virtual double GetPerim() { return 2 * itsLength + 2 * itsWidth; }
        virtual int GetLength() const { return itsLength; }
        virtual int GetWidth() const { return itsWidth; }
        virtual void Draw();
    private:
        int itsLength;
        int itsWidth; 
};

void Rectangle::Draw()
{
    Shape::Draw();
    for ( int i = 0; i < itsLength; i++ )
    {
        for ( int j = 0; j < itsWidth; j++ )
        {
            cout << "x";
        }
        
        cout << "\n";
    }

}

class Square: public Rectangle
{
    public: 
        Square(int len);
        Square(int len, int width);
        ~Square() {} 
        double GetPerim() { return 4 * GetLength(); }
};

Square::Square( int len ):
    Rectangle(len,len)
{}

Square::Square(int len, int width): 
Rectangle(len, width)
{
    if( GetLength() != GetWidth() )
    {
        cout << "Error! Not a square!\n";
    }
}

int main ()
{
    int choice;
    bool fQuit = false;
    Shape *sp;

    while ( !fQuit )
    {
        cout << "(1) Circle     (2) Rectangle       (3) Square      (0) Quit:";
        cin >> choice;
        cout << "\n";

        switch (choice)
        {
            case 0: fQuit = true;
                    break;

            case 1: sp = new Circle(5);
                    break;
            
            case 2: sp = new Rectangle(4,6);
                    break;

            case 3: sp = new Square(5);
                    break;

            default: 
                    cout << "Please Enter a number between 0 and  3:\t" << endl;
                    continue;
                    break;
        }

        if (!fQuit)
        {
            sp->Draw();
            delete sp;
            sp = 0;
            cout << endl;
        }
    }

    return 0;
}
