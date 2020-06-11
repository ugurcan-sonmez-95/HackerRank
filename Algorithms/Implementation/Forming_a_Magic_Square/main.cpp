// Forming a Magic Square - Solution

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int formingMagicSquare(std::vector<std::vector<int>> s) {
    std::vector<std::vector<std::vector<int>>> magic_squares 
                                   {{{8,1,6},{3,5,7},{4,9,2}}, 
                                    {{6,1,8},{7,5,3},{2,9,4}},
                                    {{4,9,2},{3,5,7},{8,1,6}},
                                    {{2,9,4},{7,5,3},{6,1,8}},
                                    {{8,3,4},{1,5,9},{6,7,2}},
                                    {{4,3,8},{9,5,1},{2,7,6}},
                                    {{6,7,2},{1,5,9},{8,3,4}},
                                    {{2,7,6},{9,5,1},{4,3,8}}};
    std::vector<int> totalSum;
    int sum{};
    for (int i{}; i < 8; i++) {
        for (int j{}; j < 3; j++) {
            for (int k{}; k < 3; k++) {
                sum += std::abs(magic_squares[i][j][k] - s[j][k]);
            }
        }
        totalSum.push_back(sum);
        sum = 0;
    }
    int min = *std::min_element(totalSum.begin(), totalSum.end());
    return min;
}

int main() {
    std::vector<std::vector<int>> s(3);
    int value;
    for (int i{}; i < 3; i++) {
        for (int j{}; j < 3; j++) {
            std::cin >> value;
            s[i].push_back(value);
        }
    }
    int result = formingMagicSquare(s);
    std::cout << result; 

    return 0;
}