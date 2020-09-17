// String Construction - Solution

#include <iostream>
#include <set>

int calcMinCost(const std::string &s) {
    const std::set<char> set_s(s.begin(), s.end());
    const int cost{set_s.size()};
    return cost;
}

void outputResult(int n, std::string &s) {
    std::cin >> n;
    while (n) {
        std::cin >> s;
        const int cost = calcMinCost(s);
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