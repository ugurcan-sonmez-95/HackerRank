// Viral Advertising - Solution

#include <iostream>
#include <cmath>

int viralAdvertising(int n) {
    int cumulativeCount{2}, likeCount{2}, sharedCount{6};
    for (int i{2}; i <= n; i++) {
        likeCount = std::floor(sharedCount/2);
        sharedCount = likeCount * 3;
        cumulativeCount += likeCount;
    }
    return cumulativeCount;
}

int main() {
    int n;
    std::cin >> n;
    int result = viralAdvertising(n);
    std::cout << result << std::endl;

    return 0;
}