// Alternating Characters - Solution

#include <iostream>

void alternatingCharacters(std::string s) {
    int del_count{};
    for (int i{}; i < s.size()-1; i++) 
        if (s[i] == s[i+1])
            del_count++;
    std::cout << del_count << '\n';
}

int main() {
    int q;
    std::cin >> q;
    std::string s;
    while (q) {
        std::cin >> s;
        alternatingCharacters(s);
        q--;
    }
    return 0;
}