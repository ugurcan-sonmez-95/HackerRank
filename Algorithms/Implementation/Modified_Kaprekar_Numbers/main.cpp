// Modified Kaprekar Numbers - Solution

#include <iostream>
#include <cmath>

void kaprekarNumbers(const long p, const long q) {
    int testCount{};
    for (long i{p}; i <= q; i++) {
        const std::string str{std::to_string(i)};
        const long squared{i*i}, digits = std::pow(10, str.size());
        const long n1{squared / digits}, n2{squared % digits};
        if (n1+n2 == i) {
            std::cout << i << " ";
            testCount++;        
        } 
    }
    if (testCount == 0) 
        std::cout << "INVALID RANGE";
}

int main() {
    int p, q;
    std::cin >> p >> q;
    kaprekarNumbers(p, q);

    return 0;
}