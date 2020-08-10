// Maximum Perimeter Triangle - Solution

#include <iostream>
#include <vector>
#include <algorithm>

void maximumPerimeterTriangle(std::vector<int> sticks) {
    std::sort(sticks.begin(), sticks.end());
    int idx {sticks.size()-3};
    while (idx >= 0 && sticks[idx]+sticks[idx+1] <= sticks[idx+2])
        idx--;
    if (idx >= 0)
        std::cout << sticks[idx] << " " << sticks[idx+1] << " " << sticks[idx+2];
    else
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