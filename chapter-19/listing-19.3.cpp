// Listing 19.3 Inserting Elements in the back of the list

#include <iostream>
#include <list>

using namespace std;

int main() {
  list<int> listInts;

  listInts.push_back(10);
  listInts.push_back(2001);
  listInts.push_back(-1);
  listInts.push_back(9999);

  list<int>::iterator iElement;

  for (iElement = listInts.begin(); iElement != listInts.end(); iElement++) {
    cout << *iElement << endl;
  }

  return 0;
}
