// Counting Valleys - Solution

#include <iostream>

int countingValleys(int n, std::string s) {
    int level{}, valleyCount{};
    for (int i{}; i < n; i++) {
        if (s[i] == 'U') {
            level++;
            if (level == 0) 
                valleyCount++;   
        } else 
            level--;
    }
    return valleyCount;
}

int main() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    int result = countingValleys(n, s);
    std::cout << result << std::endl;

    return 0;
}