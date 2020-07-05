// Anagram - Solution

#include <iostream>
#include <algorithm>

int calcChangeCount(std::string s) {
    int count{};
    if (s.size() % 2 != 0)
        return -1;
    std::string substr_start(s.substr(0, s.size()/2));
    std::string substr_end(s.substr(s.size()/2));
    for (auto ch: substr_start) {
        int idx = substr_end.find(ch);
        if (idx == -1)
            count++;
        else
            substr_end.erase(idx, 1);
    } 
    return count;
}

void mainFunc(int q, std::string s) {
    std::cin >> q;
    while (q) {
        std::cin >> s;
        int result = calcChangeCount(s);
        std::cout << result << '\n';
        q--;
    }
}

int main() {
    int q;
    std::string s;
    mainFunc(q, s);

    return 0;
}