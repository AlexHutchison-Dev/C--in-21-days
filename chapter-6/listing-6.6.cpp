// Listing 6.6 - demonstrates multiple return statements

#include <iostream>

int Double(int amountToDouble);

int main()
{
    using std::cout;

    int result = 0;
    int input;

    cout << "Enter a number between 0 and 10,000 to double: ";
    std::cin >> input;

    cout << "\nBefore Double() is called...";
    cout << "\ninput: " << input << " doubled: " << result << "\n";

    result = Double(input);

    cout << "\nAfter Double() is called...";
    cout << "\ninput: " << input << " doubled: " << result << "\n";

    return 0;
}

int Double(int original)
{
    if (original <= 10000)
        return original * 2;
    else
        return -1;

    std::cout << "You cant get here!\n";
}