// Simple Array Sum - Solution

#include <iostream>
#include <vector> 

int simpleArraySum(std::vector<int> ar) {
    int sum{};
    for (auto num: ar)
        sum += num;
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> ar;
    int val;
    for (int i{}; i < n; i++) {
        std::cin >> val;
        ar.push_back(val);
    }
    int result = simpleArraySum(ar);
    std::cout << result << std::endl;

    return 0;
}