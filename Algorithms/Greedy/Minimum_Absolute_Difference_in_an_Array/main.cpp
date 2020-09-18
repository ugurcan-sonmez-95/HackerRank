// Minimum Absolute Difference in an Array - Solution

#include <iostream>
#include <vector>
#include <algorithm>

void minimumAbsoluteDifference(std::vector<int> &nums) {
    std::sort(nums.begin(), nums.end());
    int min = abs(nums[1]-nums[0]);
    for (int i{2}; i < nums.size(); i++) {
        const int temp = abs(nums[i]-nums[i-1]);
        if (temp < min)
            min = temp;
    }
    std::cout << min;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i{}; i < nums.size(); i++)
        std::cin >> nums[i];
    minimumAbsoluteDifference(nums);

    return 0;
}