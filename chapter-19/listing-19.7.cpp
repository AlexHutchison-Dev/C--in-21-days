// Listing 19.7 - Sorting a lit in ascending and decending order

#include <iostream>
#include <list>

using namespace std;

void PrintListContents(const list<int> &listInput);
bool SortPredicate_Descending(const int &lsh, const int &rsh);
int main() {
  list<int> listIntegers;

  // Insert elements at the begining
  listIntegers.push_front(444);
  listIntegers.push_front(300);
  listIntegers.push_front(2111);
  listIntegers.push_front(-1);
  listIntegers.push_front(0);

  // Insert an element at the end
  listIntegers.push_back(-5);

  cout << "Initial contents of a list" << endl;
  PrintListContents(listIntegers);

  listIntegers.sort();

  cout << "Contents of the list after using sort():" << endl;
  PrintListContents(listIntegers);

  listIntegers.sort(SortPredicate_Descending);
  cout << "Contents of the list after using sort(SortPredicate_Descending):"
       << endl;
  PrintListContents(listIntegers);
}

void PrintListContents(const list<int> &listInput) {
  // Write values to the screen.....
  cout << "{ ";
  std::list<int>::const_iterator iElementLocator;
  for (iElementLocator = listInput.begin(); iElementLocator != listInput.end();
       iElementLocator++) {
    cout << *iElementLocator << " ";
  }
  cout << "}" << endl << endl;
}

bool SortPredicate_Descending(const int &lsh, const int &rsh) {
  return (rsh < lsh);
}
