std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}

int* ptr = &vec[0];

for (int i = 0; i < vec.size(); ++i) {
  // Accessing vector elements through pointer
  std::cout << ptr[i] << " ";
}

vec.push_back(10); //Causes undefined behaviour because the memory pointed to by ptr might be invalidated.