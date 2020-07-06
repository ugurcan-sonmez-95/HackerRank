// Game of Thrones - I - Solution

#include <iostream>
#include <algorithm>

void gameOfThrones(std::string s) {
    std::sort(s.begin(), s.end());
    int count{1}, oddCount{};
    for (int i{}; i < s.size()-1; i++) {
        if (s[i] == s[i+1])
            count++;
        else {
            if (count % 2 != 0)
                oddCount++;
            count = 1;
        }
    }
    if (oddCount > 1)
        std::cout << "NO";
    else
        std::cout << "YES";      
}

int main() {
    std::string s;
    std::cin >> s;
    gameOfThrones(s);

    return 0;
}