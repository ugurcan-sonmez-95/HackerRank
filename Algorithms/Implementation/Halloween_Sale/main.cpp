// Halloween Sale - Solution

#include <iostream>

int howManyGames(int p, const int d, const int m, int s) {
    int count{};
    while (s-p >= 0) {
        s -= p;
        if (p-d > m) 
            p -= d;
        else 
            p = m;
        count++; 
    }
    return count;
}

int main() {
    int p, d, m, s;
    std::cin >> p >> d >> m >> s;
    const int result = howManyGames(p, d, m, s);
    std::cout << result;

    return 0;
}