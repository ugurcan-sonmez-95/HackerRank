// Service Lane - Solution

#include <iostream>
#include <vector>
#include <algorithm>

void serviceLane(int n, int t, int i, int j) {
    std::cin >> n >> t;
    std::vector<int> width(n);
    for (int k{}; k < width.size(); k++)
        std::cin >> width[k];
    while (t) {
        std::cin >> i >> j;
        int largest = *std::min_element(width.begin()+i, width.begin()+j+1);
        std::cout << largest << '\n';
        t--;
    }
}

int main() {
    int n, t, i, j;
    serviceLane(n, t, i, j);
    
    return 0;
}