// Happy Ladybugs - Solution

#include <iostream>
#include <algorithm>

std::string happyLadybugs(std::string b) {
    for (auto ch: b) {
        if (ch != '_' && std::count(b.begin(), b.end(), ch) == 1) 
            return "NO";
    }
    if (std::count(b.begin(), b.end(), '_') == 0) {
        for (int i{1}; i < b.size()-1; i++) {
            if (b[i] != b[i-1] && b[i] != b[i+1]) 
                return "NO";
        }
    }
    return "YES";
}

int main() {
    int g, n; 
    std::string b;
    std::cin >> g;
    while (g != 0) {
        std::cin >> n >> b;
        std::string result = happyLadybugs(b);
        std::cout << result << std::endl;
        g--;
    }
    return 0;
}