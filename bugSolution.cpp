#include <iostream>
#include <vector>

int main() {
  // Instead of std::vector<bool>, use std::vector<char> or std::vector<int>
  std::vector<char> vec;
  vec.push_back(1); // Representing true
  vec.push_back(0); // Representing false

  bool b = vec[0];
  bool c = vec[1];

  std::cout << "b: " << b << std::endl; // Output: b: 1
  std::cout << "c: " << c << std::endl; // Output: c: 0

  return 0;
}
