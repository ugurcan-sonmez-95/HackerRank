// Cavity Map - Solution

#include <iostream>
#include <vector>

std::vector<std::string> cavityMap(std::vector<std::string> &matrix) {
    for (int i{1}; i < matrix.size()-1; i++) {
        for (int j{1}; j < matrix.size()-1; j++) 
            if (matrix[i][j] > matrix[i-1][j] && matrix[i][j] > matrix[i][j-1] && matrix[i][j] > matrix[i][j+1] && matrix[i][j] > matrix[i+1][j])
                matrix[i][j] = 'X';
    }
    return matrix;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> matrix(n);
    for (int i{}; i < n; i++) 
        std::cin >> matrix[i];
    const std::vector<std::string> result = cavityMap(matrix);
    for (int j{}; j < result.size(); j++) {
        for (int k{}; k < result.size(); k++)
            std::cout << result[j][k];
        std::cout << '\n';
    }
    return 0;
}