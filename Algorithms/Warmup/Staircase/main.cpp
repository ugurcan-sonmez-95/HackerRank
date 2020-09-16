// Staircase - Solution

#include <iostream>

void staircase(const int n) {
    for (int i{1}; i <= n; i++) {
        const std::string hash(i,'#'), space(n-i,' ');
        std::cout << space << std::right << hash << '\n';
    }
}

int main() {
    int n;
    std::cin >> n;
    staircase(n);

    return 0;
}