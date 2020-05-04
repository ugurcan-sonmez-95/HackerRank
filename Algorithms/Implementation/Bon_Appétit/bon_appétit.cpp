// Bon Appétit - Solution

#include <iostream>
#include <vector>
#include <numeric>

void bonAppetit(std::vector<int> bill, int k, int b) {
    int sum {std::accumulate(bill.begin(), bill.end(), 0)};
    int costAnna {(sum - bill[k]) / 2};
    if (costAnna == b) 
        std::cout << "Bon Appetit" << std::endl;
    else 
        std::cout << b - costAnna << std::endl;
}

int main() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> bill;
    int val;
    for (int i{}; i < n; i++) {
        std::cin >> val;
        bill.push_back(val);
    }
    int b;
    std::cin >> b;
    bonAppetit(bill, k, b);

    return 0;
}