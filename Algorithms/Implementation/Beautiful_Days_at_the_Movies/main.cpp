// Beautiful Days at the Movies - Solution

#include <iostream>

int beautifulDays(int i, int j, int k) {
    int count{}, m{}, reversed{}, remainder;
    for (int n{i}; n <= j; n++) {
        m = n;
        while (m != 0) {
            remainder = m % 10;
            reversed = reversed * 10 + remainder;
            m /= 10;
        }
        if (abs(n-reversed) % k == 0) 
            count++;
        reversed = 0;
    }
    return count;
}

int main() {
    int i, j, k;
    std::cin >> i >> j >> k;
    int result = beautifulDays(i, j, k);
    std::cout << result;

    return 0;
}