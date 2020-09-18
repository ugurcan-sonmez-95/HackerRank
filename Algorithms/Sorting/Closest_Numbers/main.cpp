// Closest Numbers - Solution

#include <iostream>
#include <vector>
#include <algorithm>

void closestNumbers(std::vector<int> &nums) {
    std::sort(nums.begin(), nums.end());
    std::vector<int> diffNums;
    for (int i{}; i < nums.size()-1; i++) 
        diffNums.push_back(nums[i+1]-nums[i]);
    const int minDiff = *std::min_element(diffNums.begin(), diffNums.end());
    std::vector<int> pairs;
    for (int j{}; j < nums.size()-1; j++) {
        if (nums[j+1]-nums[j] == minDiff) {
            pairs.push_back(nums[j]);
            pairs.push_back(nums[j+1]);
        }
    }
    for (auto &num: pairs)
        std::cout << num << " ";
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i{}; i < nums.size(); i++)
        std::cin >> nums[i];
    closestNumbers(nums);

    return 0;
}