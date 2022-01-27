// Listing 18.3 - Set Elements in a vector using array semantics

#include <iostream>
#include <vector>

int main() {
  std::vector<int> vecDynamicIntegerArray(4);

  // Copy Integer values into individual element locations
  vecDynamicIntegerArray[0] = 50;
  vecDynamicIntegerArray[1] = 1;
  vecDynamicIntegerArray[2] = 987;
  vecDynamicIntegerArray[3] = 1001;

  std::cout << " The Vector consytis: " << vecDynamicIntegerArray.size()
            << " Elements." << std::endl;

  return 0;
}
