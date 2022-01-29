// Listing 19.2 Inserting Elements in the front of the list

#include <iostream>
#include <list>

using namespace std;

int main() {
  list<int> listInts;

  listInts.push_front(10);
  listInts.push_front(2001);
  listInts.push_front(-1);
  listInts.push_front(9999);

  list<int>::iterator iElement;

  for (iElement = listInts.begin(); iElement != listInts.end(); iElement++) {
    cout << *iElement << endl;
  }

  return 0;
}
