// Sherlock and The Beast - Solution

#include <iostream>

std::string findDecentNumber(int n) {
    int temp {n};
    while (temp > 0) {
        if (temp%3 == 0) 
            break;
        else
            temp -= 5;
    }
    if (temp < 0)
        return "-1";
    std::string final_str;
    int rep_count {temp/3};
    while (rep_count) {
        final_str += "555";
        rep_count--;
    }
    rep_count = (n-temp) / 5;
    while (rep_count) {
        final_str += "33333";
        rep_count--;
    }
    return final_str;
}

void outputResult() {
    int t, n;
    std::cin >> t;
    while (t) {
        std::cin >> n;
        std::string result = findDecentNumber(n);
        std::cout << result << '\n';
        t--;
    }
}

int main() {
    outputResult();

    return 0;
}