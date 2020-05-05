// Strange Counter - Solution

#include <iostream>

long strangeCounter(long t) {
    long val{3};
    while (t > val) {
        t -= val;
        val *= 2;
    }
    long result = val - t + 1;
    return result;
}

int main() {
    long t;
    std::cin >> t;
    long result = strangeCounter(t);
    std::cout << result << std::endl;

    return 0;
}