// A Very Big Sum - Solution

#include <iostream>
#include <vector>

long aVeryBigSum(std::vector<long> &vec) {
    long sum{};
    for (auto &num: vec)
        sum += num;
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<long> vec(n);
    for (int i{}; i < vec.size(); i++) 
        std::cin >> vec[i];
    long result = aVeryBigSum(vec);
    std::cout << result;

    return 0;
}