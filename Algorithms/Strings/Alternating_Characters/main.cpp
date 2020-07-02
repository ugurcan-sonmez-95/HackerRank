// Alternating Characters - Solution

#include <iostream>

void alternatingCharacters(int q, std::string s) {
    std::cin >> q;
    while (q) {
        std::cin >> s;
        int del_count{};
        for (int i{}; i < s.size()-1; i++) 
            if (s[i] == s[i+1])
                del_count++;
        std::cout << del_count << '\n';
        q--;
    }
}

int main() {
    int q;
    std::string s;
    alternatingCharacters(q, s);

    return 0;
}