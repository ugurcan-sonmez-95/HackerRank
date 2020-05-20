// Flatland Space Stations - Solution

#include <iostream>
#include <vector>
#include <algorithm>

int flatlandSpaceStations(int n, std::vector<int> c) {
    int max{};
    for (int i{}; i < n; i++) {
        int temp{n};
        for (int j{}; j < c.size(); j++) {
            int diff{abs(c[j]-i)}; 
            temp = std::min(temp, diff);
        }
        max = std::max(temp, max);
    }
    return max;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> c(m);
    for (int i{}; i < c.size(); i++) {
        std::cin >> c[i];
    }
    int result = flatlandSpaceStations(n, c);
    std::cout << result << std::endl;

    return 0;
}