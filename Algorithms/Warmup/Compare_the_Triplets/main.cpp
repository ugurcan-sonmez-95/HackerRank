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
    std::vector<int> a(3), b(3);
    for (int i{}; i < a.size(); i++) {
        std::cin >> a[i];
    }
    for (int j{}; j < b.size(); j++) {
        std::cin >> b[j];
    }
    std::vector<int> result = compareTriplets(a, b);
    for (auto el: result) 
        std::cout << el << " ";

    return 0;
}