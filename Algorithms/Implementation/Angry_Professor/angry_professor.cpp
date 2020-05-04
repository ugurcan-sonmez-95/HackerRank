// Angry Professor - Solution

#include <iostream>
#include <vector>
#include <algorithm>

std::string angryProfessor(int k, std::vector<int> a) {
    int count = std::count_if(a.begin(), a.end(), [](int x) { return x <= 0; });
    return count >= k ? "NO" : "YES";
}

int main() {
    int t;
    std::cin >> t;
    while (t != 0) {
        int n, k;
        std::cin >> n >> k;
        std::vector<int> a;
        int val;
        for (int i{}; i < n; i++) {
            std::cin >> val;
            a.push_back(val);
        }
        std::string result = angryProfessor(k, a);
        std::cout << result << std::endl;
        t--;
    }
    return 0;
}