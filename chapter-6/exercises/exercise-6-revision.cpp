//Exercise 6 - Chapter 6

// Write a progrma that asks for a number and a power. Write a recursive function that takes the number to the power.

/* 
*   After reviewing the soulution in the answers appendix I realised that my implementation, though technically recusrsion as 
*   the function called itself demonstrated a lack of understanding of how to design a recursive solution. I was strugling with the 
*   fact that I would times n by n in the first function call and pass that mutated n to the recursion, however this meant I now needed
*   to multiply the new value of n by its original value, which this function no longer had access to. 
*
*   I solved this by making n a global variable and storing its mutations in an argument named original. I knew that this was not an 
*   ideal solution, as I was vaugly aware the stacking nature of the function calls in recursion meant that the first call should 
*   always have access to the original value of n but was unable to make the conceptual mental leap to a solution.  After reading the 
*   solution it seems obvious, meaning I need a little more study of this to reinforce the fundamental pinciples of recursion.
*/

#include <iostream>

unsigned long int calculateExponent(unsigned long int total, int power, int count);


int main()
{
    using namespace std;

    int number, power, count = 0;
    unsigned long int result = -1;

    cout << "Enter a number: ";
    cin >> number;
    cout << "Power: ";
    cin >> power;
    cout << endl;

    result = calculateExponent(number, power, count);

    if (result <= 0)
        cout << "Result is too large, try smaller number\n";
    else
        cout << number << " to the power of " << power << " = " << result << endl;

    return 0;
}

unsigned long int calculateExponent(unsigned long int number, int power, int count)
{   
    if (count < power -1)
        return (number * calculateExponent(number, power, ++count));    // here is where i was going wrong passing (number * number) as
    else                                                                // the number argument tot the recrsive call of calculateExponent
        return number;
}