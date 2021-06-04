// Listing 8.5 Demonstrates allocating, using, and deleting pointers
//
#include <iostream>

int main() {

	using namespace std;

	int localVariable = 5;
	int *pLocal =&localVariable;
	int * pHeap = new int;

	*pHeap = 7;

	cout << "localVariable: "  << localVariable << endl;

	cout << "*pLocal: " << *pLocal << endl;

	cout << "*pHeap: " << *pHeap << endl;

	delete pHeap;
	
	pHeap = new int;
	*pHeap = 9;

	cout << "*pHeap: " << *pHeap << endl;

	delete pHeap;
	pHeap = 0;

	return 0;

		
}
