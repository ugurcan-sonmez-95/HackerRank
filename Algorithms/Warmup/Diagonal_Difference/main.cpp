// Diagonal Difference - Solution

#include <iostream>
#include <vector>

int diagonalDifference(std::vector<std::vector<int>> &vec) {
    int total{};
    for (int i{}; i < vec.size(); i++)
        total += vec[i][i] - vec[i][(vec.size()-1)-i];
    return abs(total);
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::vector<int>> vec(n);
    int val;
    for (int i{}; i < n; i++) {
        for (int j{}; j < n; j++) {
            std::cin >> val; 
            vec[i].push_back(val);
        }
    }
    int result = diagonalDifference(vec);
    std::cout << result;

    return 0;
}