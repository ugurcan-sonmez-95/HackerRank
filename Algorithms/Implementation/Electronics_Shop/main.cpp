// Electronics Shop - Solution

#include <iostream>
#include <vector>

int getMoneySpent(const std::vector<int> &keyboards, const std::vector<int> &drives, const int b) {
    int max{-1};
    for (int i{}; i < keyboards.size(); i++) {
        for (int j{}; j < drives.size(); j++) {
            const int sum{keyboards[i] + drives[j]};
            if (sum <= b && sum > max) 
                max = sum;
        }
    }
    return max;
}

int main() {
    int b, n, m;
    std::cin >> b >> n >> m;
    std::vector<int> keyboards(n);
    for (int i{}; i < keyboards.size(); i++) 
        std::cin >> keyboards[i];
    std::vector<int> drives(m);
    for (int j{}; j < drives.size(); j++) 
        std::cin >> drives[j];
    const int result = getMoneySpent(keyboards, drives, b);
    std::cout << result;

    return 0;
}