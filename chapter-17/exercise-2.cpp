// Chapter 17 - Exercise 2

// Write a program thet tells the user how many vowels in a sentance.

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

  string vowels = "aeiou";
  string strInput;
  int vowelCount = 0;

  cout << "Please enter a string for a vowel count:";
  cout << "> ";
  getline(cin, strInput);
  cout << endl << endl;

  for (int i = 0; i < strInput.length(); i++) {
    size_t char_in_vowels = vowels.find(strInput[i], 0);

    // find seems to return a massive integer if the char not found so checking
    // if the value retuned is less than the lenght of the string
    if (char_in_vowels < strInput.length()) {
      vowelCount++;
    }
  }

  cout << "The string : " << strInput << " contains " << vowelCount
       << " vowels." << endl;

  return 0;
}
