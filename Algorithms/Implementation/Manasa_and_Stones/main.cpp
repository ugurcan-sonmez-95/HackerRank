// Manasa and Stones - Solution

#include <iostream>
#include <set>
#include <algorithm>

void stones(int t, int n, int a, int b) {
    std::cin >> t;
    while (t) {
        std::cin >> n >> a >> b;
        std::set<int> nums;
        for (int i{}; i < n; i++)
            nums.insert((a*i) + b*(n-i-1));
        std::for_each(nums.begin(), nums.end(), [](int x) {std::cout << x << " ";});
        std::cout << '\n';        
        t--;
    }
}

int main() {
    int t, n, a, b;
    stones(t, n, a, b);

    return 0;
}