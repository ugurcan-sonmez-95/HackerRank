// Append and Delete - Solution

#include <iostream>
#define sizeSum (s.size() + t.size())

void appendAndDelete(std::string s, std::string t, int k, int i) {
    for (i = 0; s[i] == t[i]; i++);
    std::cout << (sizeSum <= k + i*2 && (sizeSum % 2 == k % 2 || sizeSum < k) ? "Yes" : "No");
}

int main() {
    std::string s, t;
    int k, i;
    std::cin >> s >> t >> k;
    appendAndDelete(s, t, k, i);

    return 0;
}