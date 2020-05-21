// Halloween Sale - Solution

#include <iostream>

int howManyGames(int p, int d, int m, int s) {
    int count{-1};
    while (s >= 0) {
        s -= p;
        if ((p-d) > m) 
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
    int result = howManyGames(p, d, m, s);
    std::cout << result;

    return 0;
}