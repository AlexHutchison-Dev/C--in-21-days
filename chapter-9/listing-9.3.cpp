// Listing 9.3 - Demonstrates  Assigning to a reference
//
#include <iostream>

int main () {
	
	using namespace std; 
	int intOne;
	int &rSomeRef = intOne;

	intOne = 5;

	cout  << "intOne: " << intOne << endl;
	cout << "rSomeRef: " << rSomeRef << endl;

	cout << "&intOne: " << &intOne << endl;
	cout << "&rSomeRef" << &rSomeRef << endl;

	int intTwo =8;

	rSomeRef = intTwo;	// Not What you think
	cout << endl;

	cout  << "intOne: " << intOne << endl;
	cout  << "intTwo: " << intTwo << endl;
	cout << "rSomeRef: " << rSomeRef << endl;

	cout << "&intOne: " << &intOne << endl;
	cout << "&intTwo: " << &intTwo << endl;
	cout << "&rSomeRef" << &rSomeRef << endl;
	
	return 0;
}
