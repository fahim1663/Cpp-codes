 #include <iostream>

void modifyByValue(int value) {
  value *= 2; // Modify the copy of value (no effect on original)
}

void modifyByReference(int& ref) {
  ref *= 2; // Modify the original variable through the reference
}

int main() {
  int x = 5;

  std::cout << "x before modifyByValue: " << x << std::endl;
  modifyByValue(x); // Pass by value (copy)
  std::cout << "x after modifyByValue: " << x << std::endl; // x remains 5

  std::cout << "x before modifyByReference: " << x << std::endl;
  modifyByReference(x); // Pass by reference (modifies original)
  std::cout << "x after modifyByReference: " << x << std::endl; // x becomes 10

  return 0;
}
