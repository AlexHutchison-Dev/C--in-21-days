// Listing 19.5 - Erasing elements from a list

#include <iostream>
#include <list>

using namespace std;

void PrintListContents(const list<int> &listInput);

int main() {

  std::list<int> listIntegers;

  // Insert elements at the begining of the list
  listIntegers.push_front(4);
  listIntegers.push_front(3);

  // Store an iterator obtained in using the insert function
  list<int>::iterator iElementValueTwo;
  iElementValueTwo = listIntegers.insert(listIntegers.begin(), 2);

  listIntegers.push_front(1);
  listIntegers.push_front(0);

  // Insert an element at the end
  listIntegers.push_back(5);

  cout << "Initial contents of the list: " << endl;
  PrintListContents(listIntegers);
  cout << endl;

  listIntegers.erase(listIntegers.begin(), iElementValueTwo);
  cout << "Contents after erasing a range of elements:" << endl;
  PrintListContents(listIntegers);

  cout << "Contents after erasig " << *iElementValueTwo << ":" << endl;
  listIntegers.erase(iElementValueTwo);
  PrintListContents(listIntegers);

  return 0;
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
