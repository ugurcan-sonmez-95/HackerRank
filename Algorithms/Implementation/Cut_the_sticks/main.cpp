// Cut the sticks - Solution

#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> cutTheSticks(std::vector<int> &vec) {
    std::vector<int> count;
    while (vec.size() != 0) {
        count.push_back(vec.size());
        const int min = *std::min_element(vec.begin(), vec.end());
        for (int i{}; i < vec.size(); i++) {
            vec[i] -= min;
            if (vec[i] == 0) {
                vec.erase(vec.begin()+i, vec.begin()+i+1);
                i -= 1;
            }
        }
    }
    return count;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for (int i{}; i < vec.size(); i++) 
        std::cin >> vec[i];
    const std::vector<int> result = cutTheSticks(vec);
    for (auto &el: result)
        std::cout << el << '\n';

    return 0;
}