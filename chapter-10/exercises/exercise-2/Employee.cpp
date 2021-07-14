// Empoyee.cpp - creates an employee object, sets age, years of service and salary and prints them


#include<iostream>
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

int main () 
{
    Employee newEmployee;

    newEmployee.SetAge(25);
    newEmployee.SetYearsOfService(4);
    newEmployee.SetSalary(84000.00);

    std::cout << "New Employee Age: " << newEmployee.GetAge() << " Years Service: " << newEmployee.GetYearsOfService();
    std::cout << " Salary: " << newEmployee.GetSalary() << ".\n";


    return 0;
}
