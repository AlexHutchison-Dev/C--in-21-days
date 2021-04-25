//Listing4.3
// Demonstrating use of arrays with consts and enumerations

#include <iostream>

int main()
{
    enum WeekDays {Sun, Mon, Tue, Wed, Thu, Fri, Sat, DaysInWeek};

    int ArrayWeek[DaysInWeek] = {10, 20, 30, 40, 50, 60, 70};

    std::cout << "The Value at Tuesday is:\t" << ArrayWeek[Tue] << std::endl;

    return 0;
}
