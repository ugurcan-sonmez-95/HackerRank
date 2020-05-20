// Utopian Tree - Solution

#include <iostream>

int utopianTree(int n) {
    int height{1};
    for (int i{1}; i <= n; i++) 
        i % 2 == 0 ? height++ : height *= 2;
    return height;
}

int main() {
    int t;
    std::cin >> t;
    for (int i{}; i < t; i++) {
        int n;
        std::cin >> n;
        int result = utopianTree(n);
        std::cout << result << std::endl;
    }
    return 0;
}