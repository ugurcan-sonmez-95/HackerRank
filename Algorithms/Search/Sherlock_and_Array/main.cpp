// Sherlock and Array - Solution

#include <iostream>
#include <vector>
#include <numeric>

std::string getAns(std::vector<int> nums) {  
    int sum = std::accumulate(nums.begin(), nums.end(), 0); 
    int left_sum {}, cur;
    for (auto num: nums) {
        cur = num;
        sum -= cur;
        if (left_sum == sum)
            return "YES";
        left_sum += cur;
    } 
    return "NO";
}

void outputResult() {
    int t, n;
    std::cin >> t;
    while (t) {
        std::cin >> n;
        std::vector<int> nums(n);
        for (int i{}; i < nums.size(); i++)
            std::cin >> nums[i];
        std::string result = getAns(nums);
        std::cout << result << '\n';
        t--;
    }
}

int main() {
    outputResult();

    return 0;
}