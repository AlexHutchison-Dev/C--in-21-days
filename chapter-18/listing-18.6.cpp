// Listing 18.6 - Accesssing element in a vector using pointer semantics

#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vecDynamicIntegerArray;

  // Insert sample integers intop the array
  vecDynamicIntegerArray.push_back(50);
  vecDynamicIntegerArray.push_back(1);
  vecDynamicIntegerArray.push_back(987);
  vecDynamicIntegerArray.push_back(1001);

  /// Access objects in a vector using iterators
  vector<int>::iterator iElementIterator = vecDynamicIntegerArray.begin();

  while (iElementIterator != vecDynamicIntegerArray.end()) {
    cout << "The element at position " << *iElementIterator << " is "
         << *iElementIterator << endl;
    ++iElementIterator;
  }

  return 0;
}
