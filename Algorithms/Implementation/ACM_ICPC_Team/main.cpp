// ACM ICPC Team - Solution

#include <iostream>
#include <vector>

std::vector<int> acmTeam(const std::vector<std::string> &topic) {
    std::string s[topic[0].size()];
    int count, max{}, temp{1};
    for (int i{}; i < topic.size(); i++) {
        for (int j{i+1}; j < topic.size(); j++) {
            count = 0;
            for (int k{}; k < topic[0].size(); k++) {
                s[k] = topic[i][k] | topic[j][k];
                if (s[k] == "1") 
                    count++;
                if (count > max) {
                    max = count;
                    temp = 1;
                }
                else if (count == max) 
                    temp++;
            }
        }
    }
    std::vector<int> nums;
    nums.push_back(max);
    nums.push_back(temp);
    return nums;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::string> topic;
    std::string s;
    for (int i{}; i < n; i++) {
        std::cin >> s;
        if (s.size() == m) 
            topic.push_back(s);
    }
    const std::vector<int> result = acmTeam(topic);
    for (auto &el: result) 
        std::cout << el << '\n';

    return 0;
}