// Empoyee.cpp - creates two  employees object, sets age, years of service and salary and prints them


#include<iostream>
#include<iomanip>
#include "Employee.h"

Employee::Employee(int age, int years, float salary) {
    itsAge = age;
    itsYearsOfService = years;
    itsSalary = salary;
}

Employee::~Employee()
{
}

void Employee::SetAge ( int age ) 
{
    itsAge = age;
}

void Employee::SetYearsOfService ( int years )
{
    itsYearsOfService = years;
}

void Employee::SetSalary ( float salary )
{
    itsSalary = salary;
}

int Employee::RoundSalary () 
{
    int rounded = (int(itsSalary / 1000) * 1000);

    return rounded;
}

int main () 
{
    Employee Bob(25, 4, 85464.00);

    std::cout << "Bob's Age: " << Bob.GetAge() << " Years Service: " << Bob.GetYearsOfService();
    std::cout << " Salary: $" << std::setprecision(2) << std::fixed << Bob.GetSalary();
    std::cout << " Salary rounded to nearest 1000: $" << Bob.RoundSalary() << "\n";

    Employee Alice(43, 7, 123453.00);

    std::cout << "Alice's Age: " << Alice.GetAge() << " Years Service: " << Bob.GetYearsOfService();
    std::cout << " Salary: $" << std::setprecision(2) << Alice.GetSalary();
    std::cout << " Salary rounded to nearest 1000: $" << Alice.RoundSalary() << "\n";



    return 0;
}
