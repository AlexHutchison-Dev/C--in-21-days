// Listing 19.4 - Inserting in the middle of the a list

#include <iostream>
#include <list>

using namespace std;

void PrintListContents(const list<int> &listInput);

int main() {

  list<int> listIntegers1;

  // Inserting elements iath the beggining of a list
  listIntegers1.insert(listIntegers1.begin(), 4);
  listIntegers1.insert(listIntegers1.begin(), 3);
  listIntegers1.insert(listIntegers1.begin(), 2);
  listIntegers1.insert(listIntegers1.begin(), 1);

  // Insertig an element at the end
  listIntegers1.insert(listIntegers1.end(), 5);
  cout << "The contents of the list 1 after inserting elements: " << endl;

  PrintListContents(listIntegers1);

  list<int> listIntegers2;

  // Inserting 4 elements with the same value
  listIntegers2.insert(listIntegers2.begin(), 4, 0);

  cout << "The contents of the list 2 after inserting ";
  cout << listIntegers2.size() << " elements of a value: " << endl;

  PrintListContents(listIntegers2);

  list<int> listIntegers3;

  // Inserting elements from anotheer list at the begining
  listIntegers3.insert(listIntegers3.begin(), listIntegers1.begin(),
                       listIntegers1.end());

  cout << "The contents of the list 2 after inserting the contents of";
  cout << " list 1 at the begining:" << endl;

  PrintListContents(listIntegers3);

  // Inserting elements from anotheer list at the begining
  listIntegers3.insert(listIntegers3.end(), listIntegers1.begin(),
                       listIntegers1.end());

  cout << "The contents of the list 2 after inserting the contents of";
  cout << " list 1 at the end:" << endl;

  PrintListContents(listIntegers3);

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
