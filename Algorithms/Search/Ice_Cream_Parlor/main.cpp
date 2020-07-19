// Ice Cream Parlor - Solution

#include <iostream>
#include <vector>

std::vector<int> icecreamParlor(int m, std::vector<int> vec) {
    std::vector<int> indexes;
    for (int i{}; i < vec.size()-1; i++) {
        for (int j{i+1}; j < vec.size(); j++) {
            if (vec[i]+vec[j] == m) {
                indexes.push_back(i+1);
                indexes.push_back(j+1);
                break;
            }
        }
        if (!vec.size())
            break;
    }
    return indexes;
}

void outputResult() {
    int t, m, n;
    std::cin >> t;
    while (t) {
        std::cin >> m >> n;
        std::vector<int> vec(n);
        for (int i{}; i < vec.size(); i++)
            std::cin >> vec[i];
        std::vector<int> result = icecreamParlor(m, vec);
        for (auto num: result)
            std::cout << num << " ";
        std::cout << '\n';
        t--;
    }
}

int main() {
    outputResult();

    return 0;
}