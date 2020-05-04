// A Very Big Sum - Solution

#include <iostream>
#include <vector>

long aVeryBigSum(std::vector<long> vec) {
    long sum{};
    for (auto num: vec)
        sum += num;
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<long> vec;
    int val;
    for (int i{}; i < n; i++) {
        std::cin >> val;
        vec.push_back(val);
    }
    long result = aVeryBigSum(vec);
    std::cout << result << std::endl;

    return 0;
}