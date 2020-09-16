// Solve Me First - Solution

#include <iostream>

int solveMeFirst(const int a, const int b) {
    return a + b;  
}

int main() {
  int num1, num2;
  std::cin >> num1 >> num2;
  const int sum = solveMeFirst(num1, num2);
  std::cout << sum << '\n';

  return 0;
}