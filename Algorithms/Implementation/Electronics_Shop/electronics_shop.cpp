// Electronics Shop - Solution

#include <iostream>
#include <vector>

int getMoneySpent(std::vector<int> keyboards, std::vector<int> drives, int b) {
    int max{-1};
    for (int i{}; i < keyboards.size(); i++) {
        for (int j{}; j < drives.size(); j++) {
            int sum{keyboards[i] + drives[j]};
            if (sum <= b && sum > max) 
                max = sum;
        }
    }
    return max;
}

int main() {
    int b, n, m;
    std::cin >> b >> n >> m;
    std::vector<int> keyboards;
    int val1;
    for (int i{}; i < n; i++) {
        std::cin >> val1;
        keyboards.push_back(val1);
    }
    std::vector<int> drives;
    int val2;
    for (int j{}; j < m; j++) {
        std::cin >> val2;
        drives.push_back(val2);
    }
    int result = getMoneySpent(keyboards, drives, b);
    std::cout << result << std::endl;

    return 0;
}