// Matrix Layer Rotation - Solution

#include <iostream>
#include <vector>
#include <algorithm>

void matrixRotation(int m, int n, int r, std::vector<std::vector<int>> matrix) {
    int numOfLoops = std::min(m,n) / 2;
    for (int i{}; i < numOfLoops; i++) {
        int numOfRotations = r % (2 * (m + n - (4 * i)) - 4);
        for (int j{}; j < numOfRotations; j++) {
            // rotate top row 
            for (int k{i}; k < n-i-1; k++) {
                int tmp = matrix[i][k];
                matrix[i][k] = matrix[i][k+1];
                matrix[i][k+1] = tmp;
            }
            // rotate right column
            for (int p{i}; p < m-i-1; p++) {
                int tmp = matrix[p][n-i-1];
                matrix[p][n-i-1] = matrix[p+1][n-i-1];
                matrix[p+1][n-i-1] = tmp;
            }
            // rotate bottom row
            for (int t{n-i-1}; t > i; t--) {
                int tmp = matrix[m-i-1][t];
                matrix[m-i-1][t] = matrix[m-i-1][t-1];
                matrix[m-i-1][t-1] = tmp;
            }
            // rotate left column
            for (int l{m-i-1}; l > i+1; l--) {
                int tmp = matrix[l][i];
                matrix[l][i] = matrix[l-1][i];
                matrix[l-1][i] = tmp;
            }
        }
    }
    for (int i{}; i < matrix.size(); i++) {
        for (int j{}; j < matrix[0].size(); j++) 
            std::cout << matrix[i][j] << " ";
        std::cout << '\n';
    }
}

int main() {
    int m, n, r;
    std::cin >> m >> n >> r;
    std::vector<std::vector<int>> matrix(m);
    int val;
    for (int i{}; i < m; i++) {
        for (int j{}; j < n; j++) {
            std::cin >> val;
            matrix[i].push_back(val);
        }
    }
    matrixRotation(m, n, r, matrix);

    return 0;
}