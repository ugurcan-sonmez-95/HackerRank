// Sherlock and the Valid String - Solution

#include <iostream>
#include <algorithm>
#include <vector>

std::string checkValid(std::vector<int> &countVec) {
    const int max = *std::max_element(countVec.begin(), countVec.end());
    int min = *std::min_element(countVec.begin(), countVec.end());
    const int maxCount = std::count(countVec.begin(), countVec.end(), max);
    const int minCount = std::count(countVec.begin(), countVec.end(), min);
    if (max - min == 0) 
        return "YES";
    else if (maxCount == 1 && max-min == 1)
        return "YES";
    else if (minCount == 1) {
        const auto minIndex = std::min_element(countVec.begin(), countVec.end());
        countVec.erase(minIndex);
        min = *std::min_element(countVec.begin(), countVec.end());
        if (max - min == 0)
            return "YES";
        else
            return "NO";
    }
    else
        return "NO";
}

void isValid(std::string &s) {
    std::sort(s.begin(), s.end());
    int count{1};
    std::vector<int> countVec;
    for (int i{}; i < s.size(); i++) {
        if (s[i] == s[i+1])
            count++;
        else {
            countVec.push_back(count);
            count = 1;
        }
    }
    const std::string result = checkValid(countVec);
    std::cout << result;
}

int main() {
    std::string s;
    std::cin >> s;
    isValid(s);

    return 0;
}