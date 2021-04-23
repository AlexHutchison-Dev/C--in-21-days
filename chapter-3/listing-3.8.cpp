#include <iostream>

int main()
{
    enum Days
    {
        Sunday,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };

    Days today;
    today = Monday;

    if ( today == Sunday  || today == Saturday )
        std::cout << "\n Gotta Love the Weekend!\n";
    else 
        std::cout << "\nBack to Work!\n";

    return 0;
}