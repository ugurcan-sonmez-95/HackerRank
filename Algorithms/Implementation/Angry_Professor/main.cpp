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
    int n, k;
    while (t != 0) {
        std::cin >> n >> k;
        std::vector<int> a(n);
        for (int i{}; i < a.size(); i++) {
            std::cin >> a[i];
        }
        std::string result = angryProfessor(k, a);
        std::cout << result << '\n';
        t--;
    }
    return 0;
}