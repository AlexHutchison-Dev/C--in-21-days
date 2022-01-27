// Listing 18.9 - Demonstrates using the STL deque class

#include <deque>
#include <iostream>
using namespace std;

int main() {
  // Define a deque of integers
  deque<int> dqIntegers;

  // Insert integers at the bottom of the array
  dqIntegers.push_back(3);
  dqIntegers.push_back(4);
  dqIntegers.push_back(5);

  // Inser integers at the top of the array
  dqIntegers.push_front(2);
  dqIntegers.push_front(1);
  dqIntegers.push_front(0);

  // Display contents of the deque
  for (size_t nCount = 0; nCount < dqIntegers.size(); nCount++) {
    cout << "Element [" << nCount << "] = " << dqIntegers[nCount] << endl;
  }
  cout << endl;

  // Erase an element from the front of  array
  dqIntegers.pop_front();

  // Erase an element from the bottom of the array
  dqIntegers.pop_back();

  deque<int>::iterator iElementLocator;

  for (iElementLocator = dqIntegers.begin();
       iElementLocator != dqIntegers.end(); ++iElementLocator) {
    size_t nOffset = distance(dqIntegers.begin(), iElementLocator);
    cout << "Element [" << nOffset << "] = " << *iElementLocator << endl;
  }

  cout << endl;

  return 0;
}
