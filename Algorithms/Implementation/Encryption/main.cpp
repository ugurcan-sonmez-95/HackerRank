// Encryption - Solution

#include <iostream>
#include <cmath>
#include <string>

void encryption(const std::string &s) {
    const int colCount = std::ceil(std::sqrt(s.size()));
    for (int i{}; i < colCount; i++) {
        for (int j{i}; j < s.size(); j += colCount) 
            std::cout << s[j];
        std::cout << " "; 
    }
}

int main() {
    std::string s;
    std::getline(std::cin, s);
    encryption(s);

    return 0;
}