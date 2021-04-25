// Listing 4.9 Using C++ strings

#include <string>
#include <iostream>

int main()
{
    // A sample string
    std::string str1("This is a C++ string ");

    // display to the console
    std::cout << "This is str1:\t" << str1 << std::endl;

    // a seccond sample string
    std::string str2;

    // assign to make a copy of the first string int the seccond
    str2 = str1;

    // display the copy
    std::cout << "Result of assignment\t" << str2 << std::endl;

    // changing / overwuiting the seccond string
    str2 = "Hello String!";

    std::cout << "Afteroverwiting contents str2 is:\t" << str2 << std::endl
              << std::endl;

    std::string strAddResult;

    // Add the two std::strings (concatenate) and store in a third
    strAddResult = str1 + str2;

    std::cout << "The result of str1 + str2 is:\t" << strAddResult << std::endl;

    return 0;
}