// Apple and Orange - Solution

#include <iostream>

int main() {
    int s, t, a, b, m, n, apple_dist, orange_dist, apple_on_house{}, orange_on_house{};
    std::cin >> s >> t >> a >> b >> m >> n;
    for (int i{}; i < m; i++) {
        std::cin >> apple_dist;
        apple_dist += a;
        if (apple_dist >= s && apple_dist <= t) 
            apple_on_house++;
    }
    for (int j{}; j < n; j++) {
        std::cin >> orange_dist;
        orange_dist += b;
        if (orange_dist >= s && orange_dist <= t) 
            orange_on_house++;
    }
    std::cout << apple_on_house << "\n" << orange_on_house;
    
    return 0;
}