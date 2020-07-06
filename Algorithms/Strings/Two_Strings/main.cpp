// Two Strings - Solution

#include <iostream>

std::string checkSubstr(std::string s1, std::string s2) {
    for (auto c1: s1) 
        if (s2.find(c1) != -1)
            return "YES";
    return "NO";
}

void outputResult(int p, std::string s1, std::string s2) {
    std::cin >> p;
    while (p) {
        std::cin >> s1 >> s2;
        std::string result = checkSubstr(s1, s2);
        std::cout << result << '\n';
        p--;
    }
}

int main() {
    int p;
    std::string s1, s2;
    outputResult(p, s1, s2);

    return 0;
}