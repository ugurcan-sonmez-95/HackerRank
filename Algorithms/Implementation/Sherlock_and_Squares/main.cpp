// Sherlock and Squares - Solution

#include <iostream>
#include <cmath>

void squares(int q, int a, int b) {
    std::cin >> q;
    while (q) {
        std::cin >> a >> b;
        const int count = std::floor(std::sqrt(b) - std::floor(std::sqrt(a)));
        if (std::floor(sqrt(a)) - sqrt(a) == 0) 
            std::cout << count+1 << '\n';
        else 
            std::cout << count << '\n'; 
        q--;
    }
}

int main() {
    int q, a, b;
    squares(q, a, b);
    
    return 0;
}