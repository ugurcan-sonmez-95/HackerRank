// Happy Ladybugs - Solution

#include <iostream>
#include <algorithm>
#include <vector>

std::string checkPossible(const std::string &b) {
    for (auto &ch: b) 
        if (ch != '_' && std::count(b.begin(), b.end(), ch) == 1) 
            return "NO";
    if (std::count(b.begin(), b.end(), '_') == 0) {
        for (int i{1}; i < b.size()-1; i++) 
            if (b[i] != b[i-1] && b[i] != b[i+1]) 
                return "NO";
    }
    return "YES";
}

void outputResult(int g, int n, std::string &b) {
    std::cin >> g;
    while (g) {
        std::cin >> n >> b;
        const std::string result = checkPossible(b);
        std::cout << result << '\n';
        g--;
    }
}

int main() {
    int g, n; 
    std::string b;
    outputResult(g, n, b);

    return 0;
}