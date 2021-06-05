// Listing 9.6 -Demonstrates passing by reference
// using references
#include <iostream>

using namespace std;

void swap(int &x, int &y);

int main () {
	int x = 5, y = 10;

	cout << "Main. Before swap, x: " << x << " y: " << y << endl;

	swap(x,y);

	cout << "Main. After Swap, x: " << x << " y: " << y <<endl;

	return 0;

}

void swap (int &rx, int &ry) {
	int tmp;

	cout << "Swap. Before swap, rx: " << rx << " ry: " << ry << endl;

	tmp =  rx; 
	rx = ry;
	ry = tmp;

	cout << "Swap. After swap, rx: " << rx << " ry: " << ry <<endl;

}

