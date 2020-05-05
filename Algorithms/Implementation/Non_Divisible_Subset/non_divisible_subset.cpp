// Non-Divisible Subset - Solution

#include <iostream>
#include <vector>
#include <algorithm>

int nonDivisibleSubset(int n, int k, std::vector<int> s) {
    std::vector<int> vec(k);
    for (int i{}; i < n; i++) 
        vec[s[i] % k]++;
    if (k % 2 == 0)
        vec[k/2] = std::min(vec[k/2], 1);
    int result = std::min(vec[0], 1);
    for (int i{1}; i < (k/2)+1; i++) 
        result += std::max(vec[i], vec[k-i]);
    return result;
}

int main() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> s(n);
    for (int i{}; i < s.size(); i++) {
        std::cin >> s[i];
    }
    int result = nonDivisibleSubset(n, k, s);
    std::cout << result << std::endl;

    return 0;
}