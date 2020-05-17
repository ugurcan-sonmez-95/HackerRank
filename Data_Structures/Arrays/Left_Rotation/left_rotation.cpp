// Left Rotation - Solution

#include <iostream>
#include <vector>
#include <algorithm>

void leftRotation(int d, std::vector<int> v) {
    std::rotate(v.begin(), v.begin()+d, v.end());
    for (auto el: v)
        std::cout << el << " ";
}

int main() {
    int n, d;
    std::cin >> n >> d;
    std::vector<int> v(n);
    for (int i{}; i < v.size(); i++)
        std::cin >> v[i];
    leftRotation(d, v);

    return 0;
}