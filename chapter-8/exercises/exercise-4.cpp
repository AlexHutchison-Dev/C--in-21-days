// Exercise 4
//
// Write a small program that decalares an interger and a pointer to interger. Assign the address of the interger to the pointer.
// Use the pointer to set a value to the interger variable.
//
#include <iostream>

int main () {

	int interger = 10;
	int *pPointer = &interger;
	std::cout << "interger: " << interger << std::endl;
	*pPointer = 20;
	std::cout << "interger: " << interger << std::endl;

	return 0;
}

