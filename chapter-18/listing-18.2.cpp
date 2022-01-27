// Listing 18.2 - Inserting elements in a vector  Using the push_back method

#include <iostream>
#include <vector>

int main() {
  std::vector<int> vecDynamicIntergerArray;

  // Insert sample intergers into the vector
  vecDynamicIntergerArray.push_back(50);
  vecDynamicIntergerArray.push_back(1);
  vecDynamicIntergerArray.push_back(987);
  vecDynamicIntergerArray.push_back(1001);
  std::cout << " The Vector consytis: " << vecDynamicIntergerArray.size()
            << " Elements." << std::endl;

  return 0;
}
