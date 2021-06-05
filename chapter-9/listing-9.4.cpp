// Listing 9.4 -Demonstrates passing by value
//
#include <iostream>

using namespace std;

void swap(int x, int y);

int main () {
	int x = 5, y = 10;

	cout << "Main. Before swap, x: " << x << " y: " << y << endl;

	swap(x,y);

	cout << "Main. After Swap, x: " << x << " y: " << y <<endl;

	return 0;

}

void swap (int x, int y) {
	int tmp;

	cout << "Swap. Before swap, x: " << x << " y: " << y << endl;

	tmp = x; 
	x = y;
	y = tmp;

	cout << "Swap. After swap, x: " << x << " y: " << y <<endl;

}

