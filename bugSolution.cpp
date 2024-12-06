#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec; 
  for (int i = 0; i < 10; ++i) {
    vec.push_back(i);
  }

  // Correct way 1: Using iterators
  for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;

  // Correct way 2: Using at() method which performs bounds checking 
  for (size_t i = 0; i < vec.size(); ++i) {
    std::cout << vec.at(i) << " ";
  }
  std::cout << std::endl;

  vec.push_back(10); // This is now safe

  // Correct way 3: Accessing elements after resizing using data() method (use cautiously)
  int *ptr = vec.data(); // Pointer to the beginning of the underlying array. Use cautiously; it is only valid until the vector is modified.
  for (size_t i = 0; i < vec.size(); ++i) { 
    std::cout << ptr[i] << " "; 
  }
  std::cout << std::endl;
  return 0;
} 