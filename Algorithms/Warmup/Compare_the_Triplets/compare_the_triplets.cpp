// Compare the Triplets - Solution

#include <iostream>
#include <vector>

std::vector<int> compareTriplets(std::vector<int> a, std::vector<int> b) {
    int pointAlice{}, pointBob{};
    std::vector<int> result;
    for (int i{}; i < a.size(); i++) {
        if (a[i] > b[i])
            pointAlice += 1;
        else if (a[i] < b[i])
            pointBob += 1;
    }
    result.push_back(pointAlice);
    result.push_back(pointBob);
    return result;
}

int main() {
    std::vector<int> a, b;
    int val1;
    for (int i{}; i < 3; i++) {
        std::cin >> val1;
        a.push_back(val1);
    }
    int val2;
    for (int j{}; j < 3; j++) {
        std::cin >> val2;
        b.push_back(val2);
    }
    std::vector<int> result = compareTriplets(a, b);
    for (auto el: result) 
        std::cout << el << " ";

    return 0;
}