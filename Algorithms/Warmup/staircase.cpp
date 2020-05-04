// Staircase - Solution

#include <iostream>

void staircase(int n) {
    for (int i{1}; i <= n; i++) {
        std::string hash(i,'#'), space(n-i,' ');
        std::cout << space << std::right << hash << std::endl;
    }
}

int main() {
    int n;
    std::cin >> n;
    staircase(n);

    return 0;
}