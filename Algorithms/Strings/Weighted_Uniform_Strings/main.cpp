// Weighted Uniform Strings - Solution 

#include <iostream>
#include <vector>

std::vector<std::string> getAnswers(std::vector<bool> bool_check, int query_count) {
    int weight;
    std::vector<std::string> ans;
    for (int j{}; j < query_count; j++) {
        std::cin >> weight;
        if (bool_check[weight])
            ans.push_back("Yes");
        else
            ans.push_back("No");
    }
    return ans;
}

std::vector<std::string> mainFunc(std::string s, int query_count) {
    std::vector<bool> bool_check(10e6);
    int count{1};
    char prev{' '};
    for (int i{}; i < s.size(); i++) {
        int letter_weight = s[i]-'a'+1;
        if (s[i] == prev) {
            count++;
            letter_weight *= count;
        } else
            count = 1;
        prev = s[i];
        bool_check[letter_weight] = true;
    }
    std::vector<std::string> answers = getAnswers(bool_check, query_count);
    return answers;
}

int main() {
    std::string s;
    std::cin >> s;
    int query_count{};
    std::cin >> query_count;
    std::vector<std::string> result = mainFunc(s, query_count);
    for (auto ans: result)
        std::cout << ans << '\n';
    
    return 0;
}