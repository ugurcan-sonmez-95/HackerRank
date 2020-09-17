// Viral Advertising - Solution

#include <iostream>
#include <cmath>

int viralAdvertising(const int n) {
    int sharedCount{5}, likeCount{2}, cumulativeCount{2};
    for (int i{}; i < n-1; i++) {
        sharedCount = likeCount * 3;
        likeCount = std::floor(sharedCount/2);
        cumulativeCount += likeCount;
    }
    return cumulativeCount;
}

int main() {
    int n;
    std::cin >> n;
    const int result = viralAdvertising(n);
    std::cout << result;

    return 0;
}