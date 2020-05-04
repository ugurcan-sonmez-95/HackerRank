// Cats and a Mouse - Solution

#include <iostream>

std::string catAndMouse(int x, int y, int z) {
    return abs(z-x) < abs(z-y) ? "Cat A" : abs(z-y) < abs(z-x) ? "Cat B" : "Mouse C";
}

int main() {
    int q;
    std::cin >> q;
    while (q != 0) {
        int x, y, z;
        std::cin >> x >> y >> z;
        std::string result = catAndMouse(x, y, z);
        std::cout << result << std::endl;
        q--;
    }
    return 0;
}