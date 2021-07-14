// Empoyee.cpp - creates two  employees object, sets age, years of service and salary and prints them


#include<iostream>
#include<iomanip>
#include "Employee.h"

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
    Employee Bob;

    Bob.SetAge(25);
    Bob.SetYearsOfService(4);
    Bob.SetSalary(85464.00);

    std::cout << "Bob's Age: " << Bob.GetAge() << " Years Service: " << Bob.GetYearsOfService();
    std::cout << " Salary: " << std::setprecision(2) << std::fixed << Bob.GetSalary();
    std::cout << " Salary rounded to nearest 1000: " << Bob.RoundSalary() << "\n";

    Employee Alice;

    Alice.SetAge(34);
    Alice.SetYearsOfService(7);
    Alice.SetSalary(123456.00);

    std::cout << "Alice's Age: " << Alice.GetAge() << " Years Service: " << Bob.GetYearsOfService();
    std::cout << " Salary: " << std::setprecision(2) << Alice.GetSalary();
    std::cout << " Salary rounded to nearest 1000: " << Alice.RoundSalary() << "\n";



    return 0;
}
