// Listing 17.6 Reversing a string

#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  string strSample("Hello String! We will reverse you!");
  cout << "The origional sample string is: " << strSample << endl << endl;

  reverse(strSample.begin(), strSample.end());

  cout << "The string after applying the std::reverse algorithm is: "
       << strSample << endl
       << endl;

  return 0;
}
