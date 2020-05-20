// Extra Long Factorials - Solution

#include <iostream>

#define max 500

int multiply(int x, int result[], int result_size) {
    int carry{};
    for (int i{}; i < result_size; i++) {
        int temp = result[i] * x + carry;
        result[i] = temp % 10;
        carry = temp / 10;
    }
    while (carry != 0) {
        result[result_size] = carry % 10;
        carry /= 10;
        result_size++;
    }
    return result_size;
}

void extraLongFactorials(int n) {
    int result[max];
    result[0] = 1;
    int result_size{1};
    for (int i{2}; i <= n; i++)
        result_size = multiply(i, result, result_size);
    for (int i{result_size-1}; i >= 0; i--) 
        std::cout << result[i];
} 

int main() {
    int n; 
    std::cin >> n;
    extraLongFactorials(n);

    return 0;
}