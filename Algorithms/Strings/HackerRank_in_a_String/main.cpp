// HackerRank_in_a_String! - Solution

#include <iostream>

void hackerrankInString(int query_count, std::string s) {
    std::cin >> query_count;
    while (query_count) {
        std::cin >> s;
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
        std::cout << ans << '\n';
        query_count--;
    }
}

int main() {
    int query_count;
    std::string s;
    hackerrankInString(query_count, s);
    
    return 0;
}