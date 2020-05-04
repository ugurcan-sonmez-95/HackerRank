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
    std::vector<int> a;
    int val1; 
    for (int i{}; i < n; i++) {
        std::cin >> val1;
        a.push_back(val1);
    }
    std::vector<int> queries;
    int val2;
    for (int j{}; j < q; j++) {
        std::cin >> val2;
        queries.push_back(val2);
    }
    std::vector<int> result = circularArrayRotation(a, k, queries);
    for (auto el: result) 
        std::cout << el << std::endl;

    return 0;
}