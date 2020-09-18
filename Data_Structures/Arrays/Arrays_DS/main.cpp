// Arrays - DS - Solution

#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> reverseArray(std::vector<int> &a) {
    std::reverse(a.begin(), a.end());
    return a;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i{}; i < a.size(); i++)
        std::cin >> a[i];
    const std::vector<int> result = reverseArray(a);
    for (auto &el: result)
        std::cout << el << " ";

    return 0;
}