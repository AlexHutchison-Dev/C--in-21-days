// Listing 18.4 - Using vector::insert to insert elements into the middle of a
// vector

#include <iostream>
#include <vector>

int main() {
  using namespace std;

  // Instantiate a vector with 4 elements, each initialized to 90
  vector<int> vecIntegers(4, 90);
  cout << "The initial contents of the vector is :  ";

  vector<int>::iterator iElement;
  for (iElement = vecIntegers.begin(); iElement != vecIntegers.end();
       iElement++) {
    cout << *iElement << ' ';
  }

  cout << endl;

  // Insert 25 at the begging
  vecIntegers.insert(vecIntegers.begin(), 25);

  cout << "The vector after inserting 25 at the beginning is: ";

  for (iElement = vecIntegers.begin(); iElement != vecIntegers.end();
       iElement++) {
    cout << *iElement << ' ';
  }

  cout << endl;

  // Insert 2 numbers of 45 at the end
  vecIntegers.insert(vecIntegers.end(), 2, 45);

  cout << "The vector after inserting 2 x 45 at the end is : ";

  for (iElement = vecIntegers.begin(); iElement != vecIntegers.end();
       iElement++) {
    cout << *iElement << ' ';
  }

  cout << endl;

  // Another vector containing 2 elements of 30
  vector<int> vec2(2, 30);

  // Insert 2 elements from another container in position[1]
  vecIntegers.insert(vecIntegers.begin() + 1, vec2.begin(), vec2.end());

  cout << "The vector after c=opying 2 elements from vec2 into position [1] "
          "is: ";

  for (iElement = vecIntegers.begin(); iElement != vecIntegers.end();
       iElement++) {
    cout << *iElement << ' ';
  }

  cout << endl;

  return 0;
}
