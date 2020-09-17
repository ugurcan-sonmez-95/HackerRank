// Making Anagrams - Solution

#include <iostream>
#include <algorithm>

void makingAnagrams(std::string &s1, std::string &s2) {
    for (int i{}; i < s1.size(); i++) {
        auto find = std::find(s2.begin(), s2.end(), s1[i]);
        if (find != s2.end()) {
            s1.erase(i, 1);
            s2.erase(find);
            i--;
        }
    }
    const int count{s1.size()+s2.size()};
    std::cout << count;
}

int main() {
    std::string s1, s2;
    std::cin >> s1 >> s2;
    makingAnagrams(s1, s2);

    return 0;
}