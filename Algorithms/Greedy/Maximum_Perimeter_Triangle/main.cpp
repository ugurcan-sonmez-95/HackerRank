// Maximum Perimeter Triangle - Solution

#include <iostream>
#include <vector>
#include <algorithm>

bool checkTriangle(const int num1, const int num2, const int num3) {
    return num1+num2 > num3;
}

void maximumPerimeterTriangle(std::vector<int> &sticks) {
    std::sort(sticks.begin(), sticks.end());
    for (int i{sticks.size()-1}; i >= 2; i--) {
        if (checkTriangle(sticks[i-2], sticks[i-1], sticks[i])) {
            std::cout << sticks[i-2] << " " << sticks[i-1] << " " << sticks[i];
            return;
        } 
    }
    std::cout << -1;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> sticks(n);
    for (int i{}; i < sticks.size(); i++)
        std::cin >> sticks[i];
    maximumPerimeterTriangle(sticks);

    return 0;
}