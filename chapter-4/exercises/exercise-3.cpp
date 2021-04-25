// Name concatenator

#include <iostream>
#include <string>

int main()
{
    std::string first = "Martin", middle = "Luther", last = "King";
    std::string fullName = first + " " + middle + " " + last;

    std::cout << "Full Name: ";
    std::cout << fullName << std::endl;

    return 0;
}