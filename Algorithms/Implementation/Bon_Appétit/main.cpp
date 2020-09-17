// Bon Appétit - Solution

#include <iostream>
#include <vector>
#include <numeric>

void bonAppetit(const std::vector<int> &bill, const int k, const int b) {
    const int sum {std::accumulate(bill.begin(), bill.end(), 0)};
    const int costAnna {(sum - bill[k]) / 2};
    if (costAnna == b) 
        std::cout << "Bon Appetit";
    else 
        std::cout << b - costAnna;
}

int main() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> bill(n);
    for (int i{}; i < bill.size(); i++) 
        std::cin >> bill[i];
    int b;
    std::cin >> b;
    bonAppetit(bill, k, b);

    return 0;
}