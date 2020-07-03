// Cats and a Mouse - Solution

#include <iostream>

void catAndMouse(int q, int x, int y, int z) {
    std::cin >> q;
    while (q) {
        std::cin >> x >> y >> z;
        std::cout << (abs(z-x) < abs(z-y) ? "Cat A" : abs(z-y) < abs(z-x) ? "Cat B" : "Mouse C") << '\n';
        q--;
    }
}

int main() {
    int q;
    int x, y, z;
    catAndMouse(q, x, y, z);

    return 0;
}