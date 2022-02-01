// Listing 20.3 Using the find member function

#include <iostream>
#include <set>

using namespace std;

// This example would function just as well with a multiset too. If this
// typedefinition were changed to instantiate a multiset this code would work
// without further adaptation
typedef set<int> SETINT;

int main() {
  SETINT setIntegers;

  // Insert some rsndom integers
  setIntegers.insert(43);
  setIntegers.insert(70);
  setIntegers.insert(-1);
  setIntegers.insert(1241);

  SETINT::const_iterator iElement;

  // Write contents of the set to the screen
  for (iElement = setIntegers.begin(); iElement != setIntegers.end();
       iElement++) {
    cout << *iElement << endl;
  }

  // Try finding an element
  SETINT::iterator iElementFound = setIntegers.find(-1);

  // CHeck if found
  if (iElementFound != setIntegers.end()) {
    cout << "Element " << *iElementFound << " found!" << endl;
  } else {
    cout << "Element not founs in set!" << endl;
  }

  // Try finding another element
  SETINT::iterator iAnotherFind = setIntegers.find(12345);

  // Check if found
  if (iAnotherFind != setIntegers.end())

  {
    cout << "Element " << *iAnotherFind << " found!" << endl;
  } else {
    cout << "Element not founs in set!" << endl;
  }

  return 0;
}
