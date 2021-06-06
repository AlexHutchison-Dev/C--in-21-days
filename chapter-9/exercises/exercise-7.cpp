//Exercise 7
//
//Fix the memory leak in exercise 6
//
#include <iostream>

void FuncOne();

int main () {
    FuncOne();
    return 0;
}

void FuncOne() {
    int * pVar = new int (5);
    std::cout << "The value of *pVar is: " << *pVar << std::endl;
    delete pVar;
}


