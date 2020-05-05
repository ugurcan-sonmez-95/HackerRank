// Birthday Chocolate - Solution

#include <iostream> 
#include <vector>

int birthday(std::vector<int> s, int d, int m) {
    int count{};
    for (int i{}; i < s.size(); i++) {
        int sum{};
        for (int j{i}; j < i + m; j++) 
            sum = sum + s[j];
        if (sum == d) 
            count++;
    }
    return count;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> s(n);
    for (int i{}; i < s.size(); i++) {
        std::cin >> s[i];
    }
    int d, m;
    std::cin >> d >> m;
    int result = birthday(s, d, m);
    std::cout << result << std::endl;

    return 0;
}