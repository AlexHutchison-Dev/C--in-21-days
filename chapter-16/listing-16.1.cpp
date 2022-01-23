// Listing 16.1 - Demonstrates Finding an Element in a Vector

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  // A dymanic array of intergers
  vector<int> vecIntArray;

  // Insert sample intergers into the array
  vecIntArray.push_back(50);
  vecIntArray.push_back(2991);
  vecIntArray.push_back(23);
  vecIntArray.push_back(9999);

  cout << "The contents of the vector are: " << endl;

  // Walk the array and read values using itterator
  vector<int>::iterator iArrayWalk = vecIntArray.begin();

  while (iArrayWalk != vecIntArray.end()) {
    // Write the value to the screen
    cout << *iArrayWalk << endl;

    // Increment the iterator to access the next element
    ++iArrayWalk;
  }

  // Find an element (say 2991) in the array using the 'find' algorithm

  vector<int>::iterator iElement =
      find(vecIntArray.begin(), vecIntArray.end(), 2991);

  // Check if value was found:
  if (iElement != vecIntArray.end()) {
    // Value was found... Determine position in the array:
    int nPosition = distance(vecIntArray.begin(), iElement);
    cout << "Value: " << *iElement;
    cout << " found in the vector at position: " << nPosition << endl;
  }

  return 0;
}
