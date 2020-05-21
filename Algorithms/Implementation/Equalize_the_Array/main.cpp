// Equalize the Array - Solution

#include <iostream>
#include <vector>
#include <algorithm>

int equalizeArray(std::vector<int> vec) {
    int nums[100];
    for (int i{}; i < 100; i++)
        nums[i] = 0;
    for (int j{}; j < vec.size(); j++)
        nums[vec[j]] += 1;
    int max = *std::max_element(nums, nums+100);
    int deletionCount = vec.size() - max;
    return deletionCount;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for (int i{}; i < vec.size(); i++) {
        std::cin >> vec[i];
    }
    int result = equalizeArray(vec);
    std::cout << result;

    return 0;
}