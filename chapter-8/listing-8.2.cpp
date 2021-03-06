// Listing 8.2 Demonstrates manipulating data using pointers

#include <iostream>

typedef unsigned short int USHORT;

int main () {
	
	using namespace std;
	
	USHORT myAge;
	USHORT * pAge = 0;
	
	myAge = 33;

	std::cout << "myAge: " << myAge << endl;
	pAge = &myAge;	//assign address of myAge to pAge
	cout << "*pAge: " << *pAge << endl << endl;

	cout << "Setting *pAge = 7 ... " << endl;

	*pAge = 7;	// sets myAge to 7

	cout << "*pAge: " << *pAge << endl;
	cout << "myAge: " << myAge << endl;

	cout << "Settinf myAge to = 9... " << endl;
	myAge = 9 ;

	cout << "myAge: " << myAge <<  endl;
	cout << "*pAge: " << *pAge << endl;

	return 0;

}
