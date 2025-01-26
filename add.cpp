#include <iostream>
#include <string>

int add(int num1, int num2);

int main() {
  int num1, num2;

  std::cout << "#1: ";
  std::cin >> num1;

  std::cout << "#2: ";
  std::cin >> num2;

  std::cout << "ANS: " << add(num1, num2);

  return 0;
}

int add(int num1, int num2) {
  return std::stoi(std::to_string(num1) + std::to_string(num2)); 
}
