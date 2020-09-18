// Find the Median - Solution

#include <iostream>
#include <vector>
#include <algorithm>

void findMedian(std::vector<int> &nums) {
    std::sort(nums.begin(), nums.end());
    const int idx{nums.size()/2};
    std::cout << nums[idx];
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i{}; i < nums.size(); i++)
        std::cin >> nums[i];
    findMedian(nums);

    return 0;
}