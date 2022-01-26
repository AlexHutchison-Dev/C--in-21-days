// Listing 17.5 - Demonstrates using the  erase member functions to truncate a
// string

#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string strSample("Hello String! Wake up to beautiful day!");
  cout << "The origional sample string is: " << endl;
  cout << strSample << endl;

  // Delete characters from the string given start position and count
  cout << "Truncating the seccond sentance: " << endl;
  strSample.erase(13, 28);
  cout << strSample << endl << endl;

  // Find a character 'S' in the string using STL find algorithm
  string::iterator iCharS = find(strSample.begin(), strSample.end(), 'S');

  // If character 'S' in the string, erase to delete the character
  cout << "Erasing character 'S' from the string: " << endl;
  if (iCharS != strSample.end()) {
    strSample.erase(iCharS);
  }

  cout << endl << endl;

  // Erase a range of characters using an overloaded version of erase()
  cout << "Erasing a range of characters using an overliaded version of erase()"
       << endl;
  strSample.erase(strSample.begin(), strSample.end());

  cout << endl;

  // Verify the length after the erase opertation above
  if (strSample.length() == 0) {
    cout << "The string is empty!" << endl;
  }

  return 0;
}
