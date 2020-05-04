// Sequence Equation - Solution

#include <iostream>
#include <vector>

std::vector<int> permutationEquation(std::vector<int> p) {
    std::vector<int> nums(p.size());
    for (int i{1}; i <= p.size(); i++) {
        for (int j{1}; j <= p.size(); j++) {
            if (p[p[j-1]-1] == i) 
                nums[i-1] = j;
        }
    }
    return nums;
}

int main() {
    int n; 
    std::cin >> n;
    std::vector<int> p;
    int val;
    for (int i{}; i < n; i++) {
        std::cin >> val;
        p.push_back(val);
    }
    std::vector<int> result = permutationEquation(p);
    for (auto el: result)
        std::cout << el << std::endl;

    return 0;
}