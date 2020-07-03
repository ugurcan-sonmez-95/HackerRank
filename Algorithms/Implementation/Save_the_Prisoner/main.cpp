// Save the Prisoner! - Solution

#include <iostream>

void saveThePrisoner(int t, int n, int m, int s) {
    std::cin >> t;
    while (t) {
        std::cin >> n >> m >> s;
        int chairNum {((s-1) + m) % n};
        std::cout << (chairNum == 0 ? n : chairNum) << '\n';
        t--;
    }
}

int main() {
    int t, n, m, s;
    saveThePrisoner(t, n, m, s);

    return 0;
}