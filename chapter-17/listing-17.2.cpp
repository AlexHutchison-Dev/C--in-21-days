// Listing 17.2 Accessing Character Elements of an STL String

#include <iostream>
#include <string>

using namespace std;

int main() {
  // Sample string
  string strSTLString("Hello STL String!");

  // Access contents of the string
  cout << "Displaying characters using the array syntax:" << endl;

  for (size_t nCharCounter = 0; nCharCounter < strSTLString.length();
       ++nCharCounter) {
    cout << "Character [" << nCharCounter << "]:  ";
    cout << strSTLString[nCharCounter] << endl;
  }

  cout << endl;

  // Access contents of string using iterators
  cout << "Displaying characters of a string using iterators: " << endl;
  int nCharOffset = 0;
  string::const_iterator iCharacterLocator;

  for (iCharacterLocator = strSTLString.begin();
       iCharacterLocator != strSTLString.end(); ++iCharacterLocator) {
    cout << "Character [" << nCharOffset++ << "]: " << *iCharacterLocator
         << endl;
  }

  cout << endl;

  // Access characters of string with C style string

  cout << "The char* style representation of a string is: ";
  cout << strSTLString.c_str() << endl;
}
