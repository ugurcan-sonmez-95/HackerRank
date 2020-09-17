// CamelCase - Solution

#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

void numberOfWords(const std::string &s) {
    std::cout << 1 + std::count_if(s.begin()+1, s.end(), [](char c) { return std::isupper(c); }) << '\n';
}

int main() {
    std::string s;
    std::getline(std::cin, s);
    numberOfWords(s);

    return 0;
}