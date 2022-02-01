// Listing 20.4 Using the Erase member function on a multiset

#include <iostream>
#include <set>

using namespace std;

typedef multiset<int> MSETINT;

int main() {
  MSETINT msetIntegers;

  // Insert some random values
  msetIntegers.insert(43);
  msetIntegers.insert(78);
  msetIntegers.insert(78);
  msetIntegers.insert(-1);
  msetIntegers.insert(124);

  MSETINT::const_iterator iElement;

  cout << "Multiset contains " << msetIntegers.size() << " elements";
  cout << " These are:" << endl;

  // Write contents of msetINtegers to the screen
  for (iElement = msetIntegers.begin(); iElement != msetIntegers.end();
       ++iElement) {
    cout << *iElement << endl;
  }

  cout << "Please eneter a number to be erased from the set" << endl;
  cout << "> ";
  int numberToErase = 0;
  cin >> numberToErase;

  cout << "Erasing " << msetIntegers.count(numberToErase) << " instances of "
       << numberToErase << endl;

  msetIntegers.erase(numberToErase);

  cout << "Multiset contains " << msetIntegers.size() << " elements" << endl;
  cout << " These are:" << endl;

  MSETINT::const_iterator iElementAgain;

  // Write contents of msetINtegers to the screen
  for (iElementAgain = msetIntegers.begin();
       iElementAgain != msetIntegers.end(); ++iElementAgain) {
    cout << *iElementAgain << endl;
  }

  return 0;
}
