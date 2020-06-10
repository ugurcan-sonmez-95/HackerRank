// Service Lane - Solution

#include <iostream>
#include <vector>
#include <algorithm>

int serviceLane(std::vector<int> width, int i, int j) {
    int largest = *std::min_element(width.begin()+i, width.begin()+j+1);
    return largest;
}

int main() {
    int n, t;
    std::cin >> n >> t;
    std::vector<int> width(n);
    for (int k{}; k < n; k++) 
        std::cin >> width[k];
    int i, j;
    while (t != 0) {
        std::cin >> i >> j;
        int result = serviceLane(width, i, j);
        std::cout << result << '\n';
        t--;
    }
    return 0;
}