// Chocolate Feast - Solution

#include <iostream>

void chocolateFeast(int t, int n, int c, int m) {
    std::cin >> t;
    while (t) {
        std::cin >> n >> c >> m;
        int chocolateCount{n/c}, wrapper{n/c};
        while (wrapper >= m) {
            int count{};
            count += wrapper / m;
            int remainder{wrapper % m};
            wrapper = count + remainder;
            chocolateCount += count;
        }
        std::cout << chocolateCount << '\n';
        t--;
    }
}

int main() {
    int t, n, c, m;
    chocolateFeast(t, n, c, m);

    return 0;
}