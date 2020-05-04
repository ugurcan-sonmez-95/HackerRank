// Find Digits - Solution

#include <iostream>

int findDigits(int n) {
    int count{}, remainder, num{n};
    while (num > 0) {
        remainder = num % 10;
        if ((remainder != 0) && (n % remainder == 0)) 
            count++;
        num /= 10; 
    }
    return count;
}

int main() {
    int t; 
    std::cin >> t;
    int n;
    for (int i{}; i < t; i++) {
        std::cin >> n;
        int result = findDigits(n);
        std::cout << result << std::endl;
    }
    return 0;
}