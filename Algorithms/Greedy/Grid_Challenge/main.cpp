// Grid Challenge - Solution

#include <iostream>
#include <vector>
#include <algorithm>

bool compareStrings(std::string s1, std::string s2) {
    for (int i{}; i < s1.size(); i++)
        if (s1[i] < s2[i])
            return true;
    return false;
}

std::string gridChallenge(std::vector<std::string> grid) {
    for (auto &str: grid)
        std::sort(str.begin(), str.end());
    if (std::is_sorted(grid.begin(), grid.end(), compareStrings))
        return "YES";
    return "NO";
}

void outputResult() {
    int t, n;
    std::cin >> t;
    while (t) {
        std::cin >> n;
        std::vector<std::string> grid(n);
        for (int i{}; i < grid.size(); i++)
            std::cin >> grid[i];
        std::string result = gridChallenge(grid);
        std::cout << result << '\n';
        t--;
    }
}

int main() {
    outputResult();

    return 0;
}