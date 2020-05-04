// Plus Minus - Solution

#include <iostream>
#include <iomanip>
#include <vector>

void plusMinus(std::vector<int> vec) {
    double p{}, n{}, z{};
    for (int i{}; i < vec.size(); i++)
        vec[i] > 0 ? p++ : vec[i] < 0 ? n++ : z++;
    std::cout << std::fixed << std::setprecision(6) << p / vec.size() << "\n" << n / vec.size() << "\n" << z / vec.size() << std::endl;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec;
    int val;
    for (int i{}; i < n; i++) {
        std::cin >> val;
        vec.push_back(val);
    }
    plusMinus(vec);
    return 0;
}