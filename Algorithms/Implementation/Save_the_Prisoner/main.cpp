// Save the Prisoner! - Solution

#include <iostream>

int saveThePrisoner(int n, int m, int s) {
    int chairNum {((s-1) + m) % n};
    return chairNum == 0 ? n : chairNum;
}

int main() {
    int t;
    std::cin >> t;
    while (t != 0) {
        int n, m, s;
        std::cin >> n >> m >> s;
        int result = saveThePrisoner(n, m, s);
        std::cout << result << '\n';
        t--;
    }
    return 0;
}