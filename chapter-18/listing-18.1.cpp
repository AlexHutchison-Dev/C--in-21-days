// Listing 18.1  Instantiating std::vector

#include <vector>

int main() {
  std::vector<int> vecDynamicIntergerArray;

  // Instantiate a vector with 10 initial elements
  std::vector<int> vecArrayWith10Elements(10);

  // INstantiate an array with 10 elements equal to 90
  std::vector<int> vecArrayWith10ElementsInitializedTo90(10, 90);

  // Instantiate a vector with 5 elements copied from another vector
  std::vector<int> vecSomeElementsCopied(vecArrayWith10Elements.begin(),
                                         vecArrayWith10Elements.begin() + 5);

  return 0;
}
