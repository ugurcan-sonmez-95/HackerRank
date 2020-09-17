// Sherlock and Anagrams - Solution

#include <iostream>
#include <algorithm>
#include <map>

int calcAnagramPairs(const std::string &s) {
    std::map<std::string, int> anagrams;
    for (int i{1}; i < s.size(); i++) {
        for (int j{}; j < s.size()-i+1; j++) {
            std::string str = s.substr(j, i);
            std::sort(str.begin(), str.end());
            anagrams[str]++;
        }
    }
    int count{};
    for (auto &str: anagrams)
        for (int i{}; i < str.second; i++)
            count += i;
    return count;
}

void outputResult(int q, std::string &s) {
    std::cin >> q;
    while (q) {
        std::cin >> s;
        const int result = calcAnagramPairs(s);
        std::cout << result << '\n';
        q--;
    }
}

int main() {
    int q;
    std::string s;
    outputResult(q, s);

    return 0;
}