// Listing 9.8 -Demonstrates - Returning multiple values from a function using references 
//
#include <iostream>

using namespace std;


enum ERR_CODE {SUCCESS, ERROR};

ERR_CODE Factor(int n, int&, int&);

int main () {
    
    int number, squared, cubed;
    ERR_CODE result;

    cout << "Enter a number (0 - 20 ): ";
    cin >> number;

    result = Factor(number, squared, cubed);

    if (result == SUCCESS) {
        cout << "number: " << number << endl;
        cout << "squared: " << squared << endl;
        cout << "cubed: " << cubed << endl;
    }
    else {
        cout << "Error!: Number out of range." << endl;
    }

    return 0;

}

ERR_CODE Factor (int n, int &rSquared, int &rCubed) {


    if (n > 20 || n < 0)
    {
        return ERROR;   // a simple error code
    }
    else {
        rSquared = n*n;
        rCubed = n*n*n;
        return SUCCESS;
    }

}


