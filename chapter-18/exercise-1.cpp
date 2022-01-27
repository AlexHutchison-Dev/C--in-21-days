// Chapter 18 Exercise 1
//
// Write an interactive program the accepts integer input from the user and
// stores it in a vector. The user should be able to query an element at any
// time using an index

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string getModeFromUser();
int getIntToAdd();
int queryIndex();
int setExitToTrue();

vector<int> intStore;

int main() {

  bool exit = false;

  while (exit == false) {
    string input = getModeFromUser();

    if (input == "a") {

      intStore.push_back(getIntToAdd());

    } else if (input == "q") {

      queryIndex();

    } else if (input == "x") {

      exit = setExitToTrue();
    }
    input = "";
  }

  return 0;
}

string getModeFromUser() {
  string input;
  cout << "Please press:" << endl
       << "'a' to add to the vector," << endl
       << "'q' to query  what integer is at an index" << endl
       << "or 'x' to exit:" << endl;
  cout << "> ";
  getline(cin, input);
  cout << endl << endl;
  return input;
}

int getIntToAdd() {
  int intToAdd;

  cout << "Please eneter an integer to add to the vector: " << endl;
  cout << "> ";
  cin >> intToAdd;
  cout << endl << endl;

  return intToAdd;
}

int queryIndex() {
  bool validIndex = false;
  int index = -1;

  while (index < 0 || index > intStore.size()) {
    cout << "Please enter the index you wish to query:" << endl;
    cout << "> ";
    cin >> index;
    cout << endl;
  }
  cout << "The integer stored at index [" << index
       << "] is: " << intStore.at(index) << endl;
  cout << endl << endl;
  return 0;
}

int setExitToTrue() { return 1; }
