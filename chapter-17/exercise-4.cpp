// Chapter 17 - Exercise 4

// Create a program with string variables "I", "love", "stl", "strings!" and
// append them with a
// space between and display the sentance.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> strings = {"I", "love", "STL", "strings!"};
  string strToOutput;

  for (int i = 0; i < 4; i++) {
    strToOutput.append(strings[i]);
    if (i < 3)
      strToOutput.append(" ");
  }

  cout << strToOutput << endl;
}
