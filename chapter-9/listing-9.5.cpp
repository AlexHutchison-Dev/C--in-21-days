// Listing 9.5 -Demonstrates passing by reference
//
#include <iostream>

using namespace std;

void swap(int *x, int *y);

int main () {
	int x = 5, y = 10;

	cout << "Main. Before swap, x: " << x << " y: " << y << endl;

	swap(&x,&y);

	cout << "Main. After Swap, x: " << x << " y: " << y <<endl;

	return 0;

}

void swap (int *px, int *py) {
	int tmp;

	cout << "Swap. Before swap, *px: " << *px << " *py: " <<*py << endl;

	tmp = *px; 
	*px = *py;
	*py = tmp;

	cout << "Swap. After swap, *px: " << *px << " *py: " << *py <<endl;

}

