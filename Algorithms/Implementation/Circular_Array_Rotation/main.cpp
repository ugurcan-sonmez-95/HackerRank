// Circular Array Rotation - Solution

#include <iostream>
#include <vector>

std::vector<int> circularArrayRotation(std::vector<int> a, int k, std::vector<int> queries) {
    std::vector<int> rotated(a.size());
    for (int i{}; i < a.size(); i++) {
        int index = (i+k) % a.size();
        rotated[index] = a[i];
    }
    std::vector<int> nums;
    for (auto q: queries) 
        nums.push_back(rotated[q]);
    return nums;
}

int main() {
    int n, k, q;
    std::cin >> n >> k >> q;
    std::vector<int> a(n);
    for (int i{}; i < a.size(); i++) {
        std::cin >> a[i];
    }
    std::vector<int> queries(q);
    for (int j{}; j < queries.size(); j++) {
        std::cin >> queries[j];
    }
    std::vector<int> result = circularArrayRotation(a, k, queries);
    for (auto el: result) 
        std::cout << el << '\n';

    return 0;
}