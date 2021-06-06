// Exercise 6
//
// Write a program that produces a memory leak.
//
#include <iostream>

using namespace std;

int FuncOne();

int main() {

    int localVar = FuncOne();
    cout << " The value of localvVar is: " << localVar << endl;
    return 0;

}

int FuncOne ()
{
    int * pVar = new int(5);
    return *pVar;
}
