// 3D Surface Area - Solution

#include <iostream>
#include <vector>
#include <algorithm>

int surfaceArea(std::vector<std::vector<int>> A) {
    int area{}, temp;
    for (int i{}; i < A.size(); i++) {
        for (int j{}; j < A[i].size(); j++) {
            temp = 2 * (A[i][j]*2 + 1);
            area += temp;
            if (i > 0)
                area -= 2 * std::min(A[i-1][j], A[i][j]);
            if (j > 0) 
                area -= 2 * std::min(A[i][j-1], A[i][j]);
        }
    }
    return area;
}

int main() {
    int H, W;
    std::cin >> H >> W;
    std::vector<std::vector<int>> A(H);
    int val;
    for (int i{}; i < A.size(); i++) {
        for (int j{}; j < W; j++) {
            std::cin >> val;
            A[i].push_back(val);  
        } 
    }
    int result = surfaceArea(A);
    std::cout << result;

    return 0;
}