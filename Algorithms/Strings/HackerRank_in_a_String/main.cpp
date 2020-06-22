// HackerRank_in_a_String! - Solution

#include <iostream>

std::string hackerrankInString(std::string s) {
    std::string s1 = "hackerrank";
    int count{}, temp{};
    for (int i{}; i < s1.size(); i++) {
        for (int j{temp}; j < s.size(); j++) {
            if (s[j] == s1[i]) {
                count++;
                temp = j+1;
                break;
            }
        }
    }
    std::string ans = (count == 10 ? "YES" : "NO"); 
    return ans;
}

int main() {
    int query_count;
    std::cin >> query_count;
    std::string s;
    for (int i{}; i < query_count; i++) {
        std::cin >> s;
        std::string result = hackerrankInString(s);
        std::cout << result << '\n';
    }
    return 0;
}