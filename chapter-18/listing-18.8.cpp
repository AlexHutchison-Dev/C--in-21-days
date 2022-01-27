// Listing 18.8 Demonstration of size() and capacity()

#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Instantialte a vector object that holds 5 integers of default value
  vector<int> vecDynamicIntegerArray(5);

  cout << "Vector of integers was instantiated with " << endl;
  cout << "Size: " << vecDynamicIntegerArray.size() << endl;
  cout << "Capacity: " << vecDynamicIntegerArray.capacity() << endl;
  cout << endl;

  // Inserting a 6th element into the vector
  vecDynamicIntegerArray.push_back(666);

  cout << "After inserting an additional element... " << endl;
  cout << "Size:" << vecDynamicIntegerArray.size() << endl;
  cout << "Capacity: " << vecDynamicIntegerArray.capacity() << endl;
  cout << endl;

  // Inserting another element
  vecDynamicIntegerArray.push_back(777);

  cout << "After inserting yet another additional element... " << endl;
  cout << "Size:" << vecDynamicIntegerArray.size() << endl;
  cout << "Capacity: " << vecDynamicIntegerArray.capacity() << endl;
  cout << endl;

  return 0;
}
