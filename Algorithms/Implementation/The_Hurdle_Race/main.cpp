// The Hurdle Race - Solution

#include <iostream>
#include <vector>
#include <algorithm>

int hurdleRace(int k, std::vector<int> height) {
    int max {*std::max_element(height.begin(), height.end())};
    return max <= k ? 0 : (max-k); 
}

int main() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> height(n);
    for (int i{}; i < height.size(); i++) {
        std::cin >> height[i];
    }
    int result = hurdleRace(k, height);
    std::cout << result;

    return 0;
}