// Strong Password - Solution

#include <iostream>
#include <cctype>
#include <algorithm>

int minimumNumber(int n, std::string password) {
    bool lowercase=false, uppercase=false, digit=false, special_char=false;
    for (auto ch: password) {
        if (std::isalpha(ch)) {
            if (std::islower(ch))
                lowercase = true;
            else if (std::isupper(ch))
                uppercase = true;
        } else {
            if (std::isdigit(ch))
                digit = true;
            else
                special_char = true; 
        }
    }
    int count{};
    if (!lowercase)
        count++;
    if (!uppercase)
        count++;
    if (!digit)
        count++;
    if (!special_char)
        count++;
    count = std::max(count, 6-n);
    return count;
}

int main() {
    int n;
    std::cin >> n;
    std::string password;
    char ch;
    for (int i{}; i < n; i++) {
        std::cin >> ch;
        password.push_back(ch);
    }
    int result = minimumNumber(n, password);
    std::cout << result; 

    return 0;
}