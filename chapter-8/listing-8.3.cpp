// Listing 8.3 Demonstrates what is stored in a pointer
//

#include <iostream>

int main() {

	using namespace std;

	unsigned short int myAge = 5, yourAge = 10;

	// a pointer
	unsigned short int *pAge = &myAge;

	cout << endl;

	cout << "myAge: " << myAge << "\t\t yourAge:\t" << yourAge << endl;

	cout << "&myAge:\t"  << &myAge << "\t\t&yourAge:\t" << &yourAge << endl;

	cout << "pAge:\t" << pAge << endl;

	cout << "*pAge:\t" << *pAge << endl;
	cout << endl;
	
	cout << "Reassigning: pAge = &yourAge..." << endl << endl;

	pAge = &yourAge;	// reassign the pointer

	
	cout << "myAge: " << myAge << "\t\t yourAge:\t" << yourAge << endl;

	cout << "&myAge:\t"  << &myAge << "\t\t&yourAge:\t" << &yourAge << endl;

	cout << "pAge:\t" << pAge << endl;

	cout << "*pAge:\t" << *pAge << endl;

	cout << "&pAge:\t" << &pAge << endl;

	cout << endl;

	return 0;
	       	

}
