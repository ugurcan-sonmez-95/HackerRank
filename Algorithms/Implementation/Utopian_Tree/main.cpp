// Utopian Tree - Solution

#include <iostream>

void utopianTree(int t, int n) {
    std::cin >> t;
    while (t) {
        std::cin >> n;
        int height{1};
        for (int i{1}; i <= n; i++) 
            i % 2 == 0 ? height++ : height *= 2;
        std::cout << height << '\n';
        t--;
    }
}

int main() {
    int t, n;
    utopianTree(t, n);

    return 0;
}