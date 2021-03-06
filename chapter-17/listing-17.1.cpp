// Listing 17.1 STL String Initialization and Copy Techniques

#include <iostream>
#include <string>

using namespace std;

int main() {
  const char *pszConstString = "Hello String!";

  cout << "Constant string is: " << pszConstString << endl;

  std::string strFromConst(pszConstString);
  cout << "strFromConst id: " << strFromConst << endl;

  std::string str2("Hello String 2!");
  std::string str2Copy(str2);
  cout << "str2Copy is: " << str2Copy << endl;

  // Initialize string to first five characters of another
  std::string strPartialCopy(pszConstString, 5);
  cout << "strPartialCopy is: " << strPartialCopy << endl;

  // Initialize string to contain 10 'a's
  std::string strRepeatChars(10, 'a');
  cout << "strRepeatChars is: " << strRepeatChars << endl;

  return 0;
}
