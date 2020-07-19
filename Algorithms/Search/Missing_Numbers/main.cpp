// Missing Numbers - Solution

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

std::vector<int> missingNumbers(std::vector<int> first_vec, std::vector<int> sec_vec) {
    std::set<int> missingNums;
    for (auto num: sec_vec) {
        auto find = std::find(first_vec.begin(), first_vec.end(), num);
        if (find != first_vec.end())
            first_vec.erase(find);
        else
            missingNums.insert(num);
    }
    std::vector<int> missingNum(missingNums.begin(), missingNums.end());
    std::sort(missingNum.begin(), missingNum.end());
    return missingNum;
}

int main() {
    int n, m;
    std::cin >> n;
    std::vector<int> first_vec(n);
    for (int i{}; i < first_vec.size(); i++)
        std::cin >> first_vec[i];
    std::cin >> m;
    std::vector<int> sec_vec(m);
    for (int j{}; j < sec_vec.size(); j++)
        std::cin >> sec_vec[j];
    
    std::vector<int> result = missingNumbers(first_vec, sec_vec);
    for (auto num: result)
        std::cout << num << " ";

    return 0;
}