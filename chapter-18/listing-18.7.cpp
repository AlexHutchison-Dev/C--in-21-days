// Listing 18.7.cpp Using pop_back to remove elements from a vector

#include <iostream>
#include <vector>

using namespace std;
;

int main() {
  vector<int> vecDynamicIntegerArray;

  // Insert sample integers intop the array
  vecDynamicIntegerArray.push_back(50);
  vecDynamicIntegerArray.push_back(1);
  vecDynamicIntegerArray.push_back(987);
  vecDynamicIntegerArray.push_back(1001);

  cout << "The vector contains ";
  cout << vecDynamicIntegerArray.size();
  cout << " elements before calling pop_back" << endl;

  // Erase one elelment from the ened of the vector
  vecDynamicIntegerArray.pop_back();

  cout << "The vector contains ";
  cout << vecDynamicIntegerArray.size();
  cout << " elements after calling pop_back" << endl;

  cout << endl << "Enumerating vector:" << endl;

  unsigned int nElementIndex = 0;

  while (nElementIndex < vecDynamicIntegerArray.size()) {
    cout << "Element at position " << nElementIndex
         << " is : " << vecDynamicIntegerArray[nElementIndex] << endl;

    // Move to next element
    ++nElementIndex;
  }

  return 0;
}
