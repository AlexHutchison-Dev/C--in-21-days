// Write a virtual copy constructor for the class Square in exercise 3

    virtual Square* Clone () const { return new Square(&this); } 
