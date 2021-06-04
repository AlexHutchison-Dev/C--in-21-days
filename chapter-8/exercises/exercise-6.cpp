// Exercise 6 
//
// What is wrong with this code?
//
//	The line pVar = 9; is trying to assign an int to a variable type pointer.  
//	
//	We can assume that the programmer intended to assign the value 9 to the variable someVariable that the pVar pointer points too.
//	the coreect code would be : 
//		*pVar = 9;
//	the dereferencing operator means that the value at the address store in pVar not the address itself is set to 9.
//

#include <iostream>

using namespace std;

int main () {
	int someVariable = 5;
	cout << "SomeVariable : " << someVariable << endl;
	int *pVar = & someVariable;
	cout << "pVar:" << pVar << "*pVar: " << *pVar << endl;
	pVar = 9;
	cout << "SomeVariable: " << *pVar << endl;
		
	return 0;
}

