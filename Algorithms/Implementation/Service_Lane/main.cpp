// Service Lane - Solution

#include <iostream>
#include <algorithm>

int main() {
    int n, t;
    std::cin >> n >> t;
    int indices[n];
    for (int a{}; a < n; a++)
        std::cin >> indices[a];
    for (int b{}; b < t; b++) {
        int i, j;
        std::cin >> i >> j;
        int min = *std::min_element(indices+i, indices+j+1);
        std::cout << min << '\n';
    }
    return 0;
}