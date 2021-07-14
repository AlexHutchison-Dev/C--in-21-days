// Employee header file


class Employee 
{
    public:
        Employee (int age, int years, float salary);
        ~Employee();

        int GetAge() const { return itsAge; }
        int GetYearsOfService() const { return itsYearsOfService; }
        float GetSalary() const { return itsSalary; }

        int RoundSalary();

        void SetAge( int age );
        void SetYearsOfService(int years);
        void SetSalary ( float salary );
    
    private:
        int itsAge;
        int itsYearsOfService;
        float itsSalary;
};

