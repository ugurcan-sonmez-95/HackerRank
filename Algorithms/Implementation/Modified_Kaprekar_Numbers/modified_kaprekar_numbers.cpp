// Modified Kaprekar Numbers - Solution

#include <iostream>
#include <cmath>

void kaprekarNumbers(long p, long q) {
    int testCount{};
    for (long i{p}; i <= q; i++) {
        std::string str{std::to_string(i)};
        long squared{i*i}, digits = std::pow(10, str.size());
        long n1{squared / digits}, n2{squared % digits};
        if (n1+n2 == i) {
            std::cout << i << " ";
            testCount++;        
        } 
    }
    if (testCount == 0) 
        std::cout << "INVALID RANGE" << std::endl;
}

int main() {
    int p, q;
    std::cin >> p >> q;
    kaprekarNumbers(p, q);

    return 0;
}