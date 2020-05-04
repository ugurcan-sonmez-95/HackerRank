// Divisible Sum Pairs - Solution

#include <iostream>
#include <vector>

int divisibleSumPairs(int n, int k, std::vector<int> vec) {
    int count{};
    n = vec.size();
    for (int i{}; i < n-1; i++) {
        for (int j{i+1}; j < n; j++) {
            int sum{};
            sum += vec[i] + vec[j];
            if (sum % k == 0) 
                count++;
        } 
    }
    return count;   
}

int main() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> vec;
    int val;
    for (int i{}; i < n; i++) {
        std::cin >> val;
        vec.push_back(val);
    }
    int result = divisibleSumPairs(n, k, vec);
    std::cout << result << std::endl;

    return 0;
}