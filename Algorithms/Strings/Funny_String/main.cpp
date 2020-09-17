// Funny String - Solution

#include <iostream>
#include <algorithm>
#include <vector>

void funnyString(int q, std::string &s) {
    std::cin >> q;
    while (q) {
        std::vector<std::string> ans;
        std::cin >> s;
        std::string reversed = s;
        std::reverse(reversed.begin(), reversed.end());
        for (int i{}; i < s.size()-1; i++) {
            if (abs(s[i]-s[i+1]) != abs(reversed[i]-reversed[i+1])) {
                ans.push_back("Not Funny");
                break;
            }
        } 
        if (!ans.size())
            ans.push_back("Funny");
        for (auto &string: ans)
            std::cout << string << '\n';
        q--;
    }
}

int main() {
    int q;
    std::string s;
    funnyString(q, s);

    return 0;
}