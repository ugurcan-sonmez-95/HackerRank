// Funny String - Solution

#include <iostream>
#include <algorithm>

std::string funnyString(std::string s) {
    std::string reversed = s;
    std::reverse(reversed.begin(), reversed.end());
    for (int i{}; i < s.size()-1; i++)
        if (abs(s[i]-s[i+1]) != abs(reversed[i]-reversed[i+1]))
            return "Not Funny";
    return "Funny";
}

int main() {
    int q;
    std::cin >> q;
    std::string s;
    while (q) {
        std::cin >> s;
        std::string result = funnyString(s);
        std::cout << result << '\n';
        q--;
    }
    return 0;
}