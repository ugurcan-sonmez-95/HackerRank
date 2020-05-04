// Sock Merchant - Solution

#include <iostream>
#include <vector>
#include <algorithm>

int sockMerchant(int n, std::vector<int> vec) {
    int pairCount{}, i{};
    std::sort(vec.begin(), vec.end());
    while (i < n) {
        if (vec[i] == vec[i+1]) {
            pairCount++;
            i += 2;
        } else 
            i++;
    }
    return pairCount;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec;
    int val;
    for (int i{}; i < n; i++) {
        std::cin >> val;
        vec.push_back(val);
    }
    int result = sockMerchant(n, vec);
    std::cout << result << std::endl;

    return 0;
}