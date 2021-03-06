// Apple and Orange - Solution

#include <iostream>

int calcApples(const int m, const int a, const int s, const int t, int apple_dist, int apple_on_house) {
    apple_on_house = 0;
    for (int i{}; i < m; i++) {
        std::cin >> apple_dist;
        apple_dist += a;
        if (apple_dist >= s && apple_dist <= t) 
            apple_on_house++;
    }
    return apple_on_house;
}

int calcOranges(const int n, const int b, const int s, const int t, int orange_dist, int orange_on_house) {
    orange_on_house = 0;
    for (int j{}; j < n; j++) {
        std::cin >> orange_dist;
        orange_dist += b;
        if (orange_dist >= s && orange_dist <= t) 
            orange_on_house++;
    }
    return orange_on_house;
}

void outputResult(const int apple_count, const int orange_count) {
    std::cout << apple_count << "\n" << orange_count;
}

int main() {
    int s, t, a, b, m, n, apple_dist, orange_dist, apple_on_house, orange_on_house;
    std::cin >> s >> t >> a >> b >> m >> n;
    const int apple_count = calcApples(m, a, s, t, apple_dist, apple_on_house);
    const int orange_count = calcOranges(n, b, s, t, orange_dist, orange_on_house);
    outputResult(apple_count, orange_count);
    
    return 0;
}