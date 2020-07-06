// Weighted Uniform Strings - Solution 

#include <iostream>
#include <vector>
#include <set>

std::vector<std::string> getAnswers(std::set<int> total_weight, int query_count) {
    int query;
    std::vector<std::string> ans;
    for (int j{}; j < query_count; j++) {
        std::cin >> query;
        auto find = total_weight.find(query);
        if (find != total_weight.end())
            ans.push_back("Yes");
        else
            ans.push_back("No");
    }
    return ans;
}

void outputResult(std::string s, int query_count) {
    std::set<int> total_weight;
    int count{1}, weight;
    for (int i{}; i < s.size(); i++) {
        weight = s[i]-'a'+1;
        if ((i+1 != s.size()) && (s[i] == s[i+1]))
            count++;
        else
            count = 1;
        total_weight.insert(weight*count);
    }
    std::vector<std::string> answers = getAnswers(total_weight, query_count);
    for (auto ans: answers)
        std::cout << ans << '\n';
}

int main() {
    std::string s;
    std::cin >> s;
    int query_count{};
    std::cin >> query_count;
    outputResult(s, query_count);
    
    return 0;
}