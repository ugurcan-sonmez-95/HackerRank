// Mini-Max Sum - Solution

#include <iostream>
#include <vector>

void miniMaxSum(std::vector<int> vec) {
    long min{}, max{}, sum{};
    min = vec[0];
    max = min;
    sum = min;
    for (int i{1}; i < vec.size(); i++) {
        sum += vec[i];
        if (vec[i] < min)
            min = vec[i];
        else if (vec[i] > max)
            max = vec[i];
    }
    std::cout << (sum - max) << " " << (sum - min) << '\n';
}

int main() {
    std::vector<int> vec(5);
    for (int i{}; i < vec.size(); i++) {
        std::cin >> vec[i];
    }
    miniMaxSum(vec);

    return 0;
}