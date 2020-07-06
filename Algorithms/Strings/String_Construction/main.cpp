// String Construction - Solution

#include <iostream>
#include <set>

int calcMinCost(std::string s) {
    std::set<char> set_s(s.begin(), s.end());
    int cost{set_s.size()};
    return cost;
}

void outputResult(int n, std::string s) {
    std::cin >> n;
    while (n) {
        std::cin >> s;
        int cost = calcMinCost(s);
        std::cout << cost << '\n';
        n--;
    }
}

int main() {
    int n;
    std::string s;
    outputResult(n, s);

    return 0;
}