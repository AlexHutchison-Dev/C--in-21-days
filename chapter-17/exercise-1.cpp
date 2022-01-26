// Chapter 17 Exercise 1

// Write a program to verify if the word input by a user is a palendrome.

#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string strInput;

  cout << "Please input a string to test if it is a palendrome: " << endl;
  cout << "> ";
  getline(cin, strInput);

  cout << endl << endl;

  // Make all characters lowercase so that doesnt obscure comparison
  transform(strInput.begin(), strInput.end(), strInput.begin(),
            [](char c) { return tolower(c); });

  string strReversed = strInput;
  reverse(strReversed.begin(), strReversed.end());

  if (strReversed == strInput) {
    cout << "The string " << strInput << " is a palendrome!" << endl;
  } else {
    cout << "the string " << strInput << " is not a palendrome!" << endl;
  }

  return 0;
}
