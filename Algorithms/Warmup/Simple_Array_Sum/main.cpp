// Simple Array Sum - Solution

#include <iostream>
#include <vector> 

int simplevecraySum(std::vector<int> &vec) {
    int sum{};
    for (auto &num: vec)
        sum += num;
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for (int i{}; i < vec.size(); i++) 
        std::cin >> vec[i];
    int result = simplevecraySum(vec);
    std::cout << result;

    return 0;
}