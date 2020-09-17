// The Love-Letter Mystery - Solution

#include <iostream>

void theLoveLetterMystery(int q, std::string &s) {
    std::cin >> q;
    while (q) {
        std::cin >> s;
        int count{};
        int i{}, j{s.size()-1};
        while (i < j) {
            count += abs(s[i]-s[j]);
            i++;
            j--;
        }
        std::cout << count << '\n';
        q--;
    }
}

int main() {
    int q;
    std::string s;
    theLoveLetterMystery(q, s);
    return 0;
}