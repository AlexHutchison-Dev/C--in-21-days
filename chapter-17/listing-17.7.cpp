// Listing 17.7 Performig case conversions on an STL string using std::transform

#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  cout << "Please enter a string for case conversion: " << endl;
  cout << "> ";

  string strInput;
  getline(cin, strInput);
  cout << endl;

  cout << "The string converted to upper case is: " << endl;
  transform(strInput.begin(), strInput.end(), strInput.begin(),
            [](unsigned char c) { return toupper(c); });
  cout << strInput << endl << endl;

  cout << "The string converted to lower case is: " << endl;
  transform(strInput.begin(), strInput.end(), strInput.begin(),
            [](unsigned char c) { return tolower(c); });
  cout << strInput << endl << endl;
  return 0;
}
