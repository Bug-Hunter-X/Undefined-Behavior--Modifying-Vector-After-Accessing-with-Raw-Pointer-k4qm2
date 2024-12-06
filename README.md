# Undefined Behavior in C++: Modifying Vector After Raw Pointer Access

This repository demonstrates a common C++ error: accessing a `std::vector`'s elements using a raw pointer and then modifying the vector. Modifying the vector (e.g., using `push_back`) may invalidate the raw pointer, leading to undefined behavior.

The `bug.cpp` file contains the buggy code. The `bugSolution.cpp` file shows how to solve the issue using iterators or avoiding raw pointers entirely.

**How to Reproduce:**

1. Clone the repository.
2. Compile `bug.cpp` using a C++ compiler (e.g., g++).
3. Run the compiled executable. You will likely see unexpected results or a program crash.
4. Compile and run `bugSolution.cpp` to see the correct way to access and manipulate vector elements.