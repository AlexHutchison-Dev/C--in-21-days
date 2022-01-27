// Listing 18.5 Accessing elements in a vector using array semantics

// This method has all the same risks as accessing array elements this way,
// mainly there is no bounds checking. This can be avaided by using the
// vector.at(index) method instead

#include <iostream>
#include <vector>

int main() {
  using namespace std;

  vector<int> vecDynamicIntegerArray;

  // INsert sample integers into array
  vecDynamicIntegerArray.push_back(50);
  vecDynamicIntegerArray.push_back(1);
  vecDynamicIntegerArray.push_back(987);
  vecDynamicIntegerArray.push_back(1001);

  unsigned int nElementIndex = 0;
  while (nElementIndex < vecDynamicIntegerArray.size()) {
    cout << "Element at position " << nElementIndex;
    cout << " is: " << vecDynamicIntegerArray[nElementIndex] << endl;

    ++nElementIndex;
  }

  return 0;
}
