// Listing 17.4 - Using the string::find function

#include <iostream>
#include <string>

int main() {
  using namespace std;

  string strSample("Good day String! Today is beautiful!");
  cout << "The sample string is: " << strSample << endl;
  cout << strSample << endl << endl;

  // Find substring "day" in it ....

  size_t nOffset = strSample.find("day", 0);

  // Check if the substring was found
  if (nOffset != string::npos) {
    cout << "The first instance of \"day\" was found at offset: " << nOffset
         << endl;
  } else {
    cout << "Substring not found." << endl;
  }
  cout << endl << endl;

  cout << "Locating all instances of \"day\":" << endl;
  size_t nSubstringOffset = strSample.find("day", 0);

  while (nSubstringOffset != string::npos) {
    cout << "\"day\" found at offset: " << nSubstringOffset << endl;

    // Make the 'find' function sesarch the next character onwards
    size_t nSearchOffset = nSubstringOffset + 1;

    nSubstringOffset = strSample.find("day", nSearchOffset);
  }

  cout << endl;

  cout << "Locating all instances of the character 'a'" << endl;
  const char chCharToSearch = 'a';
  size_t nCharacterOffset = strSample.find(chCharToSearch, 0);

  while (nCharacterOffset != string::npos) {
    cout << "'" << chCharToSearch << "' found";
    cout << " at position: " << nCharacterOffset << endl;
    // Make the find function search forward from the next character onwards
    size_t nCharacterSearchOffset = nCharacterOffset + 1;
    nCharacterOffset = strSample.find(chCharToSearch, nCharacterSearchOffset);
  }

  return 0;
}
