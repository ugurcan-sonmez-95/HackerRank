// Angry Professor - Solution

#include <iostream>
#include <vector>
#include <algorithm>

void angryProfessor(int t, int n, int k) {
    std::cin >> t;
    while (t) {
        std::cin >> n >> k;
        std::vector<int> a(n);
        for (int i{}; i < a.size(); i++)
            std::cin >> a[i];
        const int count = std::count_if(a.begin(), a.end(), [](int x) {return x <= 0;});
        std::cout << (count >= k ? "NO" : "YES") << '\n';        
        t--;
    }
}

int main() {
    int t, n, k;
    angryProfessor(t, n, k);

    return 0;
}