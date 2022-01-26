// Chapter 17 - Exercise 3

// Write a program to convert every other characer of a string to upper case.

#include <iostream>
#include <string>

using namespace std;

int main() {
  string strInput;

  cout << "Please insert a string for alternate character capitalizatoin:";
  cout << "> ";
  getline(cin, strInput);
  cout << endl << endl;

  for (int i = 0; i < strInput.length(); i++) {
    if (i % 2 == 0 || i == 0) {
      strInput[i] = toupper(strInput[i]);
    }
  }

  cout << "the resulting string is:" << endl;
  cout << strInput << endl;

  return 0;
}
