// 2D Array - DS - Solution

#include <iostream>
#include <vector>

int hourglassSum(std::vector<std::vector<int>> v) {
    int largestSum{-63}, tmp;
    for (int i{}; i < v.size()-2; i++) {
        for (int j{}; j < v[0].size()-2; j++) {
            tmp = v[i][j] + v[i][j+1] + v[i][j+2] + v[i+1][j+1] + v[i+2][j] + v[i+2][j+1] + v[i+2][j+2];
            if (tmp > largestSum)
                largestSum = tmp;
        }
    }
    return largestSum;
}

int main() {
    std::vector<std::vector<int>> v(6);
    int val;
    for (int i{}; i < v.size(); i++) {
        for (int j{}; j < 6; j++) {
            std::cin >> val;
            v[i].push_back(val);
        }
    }
    int result = hourglassSum(v);
    std::cout << result;

    return 0;
}