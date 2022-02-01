// Listing 10.2 Inserting into a set and multi set

#include <iostream>
#include <set>

using namespace std;

template <typename Container> void PrintContents(const Container &stlContainer);

int main() {
  set<int> setIntegers;
  multiset<int> msetIntegers;

  setIntegers.insert(60);
  setIntegers.insert(-1);
  setIntegers.insert(3000);

  cout << " Writintg the contents of the set to the screen" << endl;
  PrintContents(setIntegers);

  msetIntegers.insert(setIntegers.begin(), setIntegers.end());
  msetIntegers.insert(3000);

  cout << "Writing the contents of the multiset to the screen" << endl;
  PrintContents(msetIntegers);

  cout << "The number of instancess of 3000 in the multiset are: "
       << msetIntegers.count(3000) << endl;

  return 0;
}

template <typename Container>
void PrintContents(const Container &stlContainer) {
  typename Container::const_iterator iElementLocator = stlContainer.begin();

  while (iElementLocator != stlContainer.end()) {
    cout << *iElementLocator << endl;
    ++iElementLocator;
  }
}
