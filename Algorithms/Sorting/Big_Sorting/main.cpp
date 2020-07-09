// Big Sorting - Solution

#include <iostream>
#include <vector>
#include <algorithm>

bool compareStrings(std::string s1, std::string s2) {
    if (s1.size() == s2.size())
        return s1 < s2;
    return s1.size() < s2.size();
}

void bigSorting(std::vector<std::string> nums) {
    std::sort(nums.begin(), nums.end(), compareStrings);
    for (auto num: nums)
        std::cout << num << '\n';
}

int main() {
    long long n;
    std::cin >> n;
    std::vector<std::string> nums(n);
    for (int i{}; i < nums.size(); i++) 
        std::cin >> nums[i];
    bigSorting(nums);

    return 0;
}