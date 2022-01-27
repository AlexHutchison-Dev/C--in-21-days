// Chapter 18 Exercise 3

// Jack sells jars on ebay, to help him with packaging and shipping write him a
// program into which he can enter the dimensions of theese articles, store them
// in a vector and print them to the screen

#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

class Item {

private:
  int m_height;
  int m_width;

public:
  Item(int height, int width) {
    m_height = height;
    m_width = width;
  }

  void PrintDimensions() {
    std::cout << "Package Dimensions are height: " << m_height
              << " width: " << m_width << endl
              << endl;
  }
};

string getModeFromUser();
void addNewPackage();
void printPackages();

vector<Item> packages;

int main() {

  bool exit = false;

  while (exit == false) {
    string input = getModeFromUser();

    if (input == "a") {

      addNewPackage();

    } else if (input == "p") {

      printPackages();

    } else if (input == "x") {

      exit = true;
    }
    input = "";
  }

  return 0;
}

string getModeFromUser() {
  string input;
  cout << "Please press" << endl
       << "'a' to add to a package the vector," << endl
       << "'p' to print the dimensions of all packages" << endl
       << " or 'x' to exit:" << endl;
  cout << "> ";
  getline(cin, input);
  cout << endl << endl;
  return input;
}

void addNewPackage() {
  int height;
  int width;

  cout << "Please enter the height of the package:" << endl;
  cout << "> ";
  cin >> height;
  cout << endl;

  cout << "Please enter the width of the package: " << endl;
  cout << "> ";
  cin >> width;

  Item package(height, width);
  packages.push_back(package);
}

void printPackages() {
  vector<Item>::iterator iElement;
  for (iElement = packages.begin(); iElement != packages.end(); iElement++) {
    iElement->PrintDimensions();
  }
}
