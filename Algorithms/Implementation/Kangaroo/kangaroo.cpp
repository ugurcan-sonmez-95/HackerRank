// Kangaroo - Solution

#include <iostream>

std::string kangaroo(int x1, int v1, int x2, int v2) {
    if (v1 > v2) {
        if ((x1-x2) % (v2-v1) == 0) return "YES";
    }
    return "NO";
}

int main() {
    int x1, v1, x2, v2;
    std::cin >> x1 >> v1 >> x2 >> v2;
    std::string result = kangaroo(x1, v1, x2, v2);
    std::cout << result << std::endl;

    return 0;
}