// Sherlock and Squares - Solution

#include <iostream>
#include <cmath>

int squares(int a, int b) {
    int count = std::floor(std::sqrt(b) - std::floor(std::sqrt(a)));
    if (std::floor(sqrt(a)) - sqrt(a) == 0) 
        return (count + 1);
    else 
        return count; 
}

int main() {
    int q; 
    std::cin >> q;
    int a, b;
    while (q != 0) {
        std::cin >> a >> b;
        int result = squares(a, b);
        std::cout << result << std::endl;
        q--;
    }
    return 0;
}