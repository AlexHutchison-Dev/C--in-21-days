// Listing 10.2 - Demonstrates the declaration of a class, Data members are private, public accessor
// methods mediate setting and getting the values of the private data. 

class Cat       // Declare the Cat class 
{
    public:
        // public accessors
        unsigned int GetAge();
        void SetAge(unsigned int Age);

        unsigned int GetWeight();
        void SetWeight(unsigned int Weight);

        // public member function
        void Meow();

    private:                 
        int itsAge;         
        int itsWeight;     
};

