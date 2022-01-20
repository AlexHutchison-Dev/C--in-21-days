// Listing 15.4 - Sample usage of the Template Class CHoldsPair defined in
#include <iostream>

using namespace std;

template <typename T1 = int, typename T2 = double> class CHoldsPair {
private:
  T1 m_value1;
  T2 m_value2;

public:
  // Constructor that initialises member variables
  CHoldsPair(const T1 &value1, const T2 &value2) {
    m_value1 = value1;
    m_value2 = value2;
  };

  // Acessor functions
  const T1 &GetFirstValue() { return m_value1; };

  const T2 &GetSeccondValue() { return m_value2; };
};

int main() {

  // Two instantiations of template CholdsPair
  CHoldsPair<> mIntFloatPair(300, 10.09);
  CHoldsPair<short, char *> mShortStringPair(
      25, (char *)"Learn template, Love C++");

  // Output values containded in the first object
  cout << "The first object contains - " << endl;
  cout << "Value 1: " << mIntFloatPair.GetFirstValue() << endl;
  cout << "Value 2: " << mIntFloatPair.GetSeccondValue() << endl;

  cout << "\n\n";

  // Output values containded in the first object
  cout << "The seccond object contains - " << endl;
  cout << "Value 1: " << mShortStringPair.GetFirstValue() << endl;
  cout << "Value 2: " << mShortStringPair.GetSeccondValue() << endl;
}
