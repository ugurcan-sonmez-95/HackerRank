// Cavity Map - Solution

#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> vec(n);
    for (int i{}; i < n; i++) 
        std::cin >> vec[i];
    for (int j{1}; j < n-1; j++) {
        for (int k{1}; k < n-1; k++) {
            if (vec[j][k] > vec[j-1][k] && vec[j][k] > vec[j][k-1] && vec[j][k] > vec[j][k+1] && vec[j][k] > vec[j+1][k])
                vec[j][k] = 'X';
        }
    }
    for (int a{}; a < n; a++) {
        for (int b{}; b < n; b++)
            std::cout << vec[a][b];
        std::cout << '\n';
    }
    return 0;
}