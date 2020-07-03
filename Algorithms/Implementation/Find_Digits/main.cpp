// Find Digits - Solution

#include <iostream>

void findDigits(int t, int n) {
    std::cin >> t;
    while (t) {
        std::cin >> n;
        int count{}, remainder, num{n};
        while (num > 0) {
            remainder = num % 10;
            if ((remainder != 0) && (n % remainder == 0)) 
                count++;
            num /= 10; 
        }
        std::cout << count << '\n';
        t--;
    }
}

int main() {
    int t, n;
    findDigits(t, n);

    return 0;
}