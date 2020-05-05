// Manasa and Stones - Solution

#include <iostream>
#include <set>
#include <algorithm>

std::set<int> stones(int n, int a, int b) {
    std::set<int> nums;
    for (int i{}; i < n; i++) {
        nums.insert((a*i) + b*(n-i-1));
    }
    return nums;
}

int main() {
    int t, n, a, b;
    std::cin >> t;
    while (t != 0) {
    std::cin >> n >> a >> b;
    std::set<int> result = stones(n, a, b);
    std::for_each(result.begin(), result.end(), [](int x) { std::cout << x << " "; });
    std::cout << std::endl;
    t--;
    }
    return 0;
}