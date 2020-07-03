// Minimum Distances - Solution

#include <iostream>
#include <vector>
#include <algorithm>

int minimumDistances(std::vector<int> a) {
    std::vector<int> nums;
    for (int i{}; i < a.size()-1; i++) {
        for (int j{i+1}; j < a.size(); j++) {
            if (a[i] == a[j])
                nums.push_back(j-i);
        }
    }
    int min;
    if (!nums.empty()) 
        min = *std::min_element(nums.begin(), nums.end());
    else 
        min = -1;
    return min;
}

int main() {
    int n;
    std::cin >> n; 
    std::vector<int> a(n);
    for (int i{}; i < a.size(); i++) 
        std::cin >> a[i];
    int result = minimumDistances(a);
    std::cout << result;

    return 0;
}