// Exercise 5
//
// What is wrong with this code ?
//
//	The pointer pInt is declared but not initialized and therefore is hanging or floating pointer. Theese are dangerouse as they can cause memory to be overwritten in surprising polaces making bugs that can be hard to track down.
//
//	should be :
//		int *pint = 0;
//	or : 
//		int *pInt = &someInt;
//

#include <iostream>

int main () {

	int *pint;
	*pint = 9;
	std::cout << " The value at pInt : " << *pint << std::endl;
	return 0;	
}

