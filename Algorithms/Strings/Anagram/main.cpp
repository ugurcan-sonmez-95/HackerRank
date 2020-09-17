// Anagram - Solution

#include <iostream>
#include <algorithm>

int calcChangeCount(const std::string &s) {
    int count{};
    if (s.size() % 2 != 0)
        return -1;
    const std::string substr_start(s.substr(0, s.size()/2));
    std::string substr_end(s.substr(s.size()/2));
    for (auto &ch: substr_start) {
        const int idx = substr_end.find(ch);
        if (idx == -1)
            count++;
        else
            substr_end.erase(idx, 1);
    } 
    return count;
}

void outputResult(int q, std::string &s) {
    std::cin >> q;
    while (q) {
        std::cin >> s;
        const int result = calcChangeCount(s);
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