// Chocolate Feast - Solution

#include <iostream>

int chocolateFeast(int n, int c, int m) {
    int chocolateCount{n/c}, wrapper{n/c};
    while (wrapper >= m) {
        int count{};
        count += wrapper / m;
        int remainder{wrapper % m};
        wrapper = count + remainder;
        chocolateCount += count;
    }
    return chocolateCount;
}

int main() {
    int t;
    std::cin >> t;
    int n, c, m;
    while (t != 0) {
        std::cin >> n >> c >> m;
        int result = chocolateFeast(n, c, m);
        std::cout << result << std::endl;
        t--;
    }
    return 0;
}