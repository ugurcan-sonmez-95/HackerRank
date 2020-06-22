// Caesar Cipher - Solution

#include <iostream>
#include <vector>
#include <cctype>

void caesarCipher(std::string s, int k) {
    char first_letter;
    for (auto &ch: s) {
        if (std::isalpha(ch)) {
            first_letter = std::isupper(ch) ? 'A' : 'a';
            ch = first_letter + ((ch - first_letter + k) % 26);
        }
    }
    std::cout << s;
}

int main() {
    int n;
    std::cin >> n;
    std::string s;
    char ch;
    for (int i{}; i < n; i++) {
        std::cin >> ch;
        s.push_back(ch);
    }
    int k;
    std::cin >> k;
    caesarCipher(s, k);

    return 0;
}