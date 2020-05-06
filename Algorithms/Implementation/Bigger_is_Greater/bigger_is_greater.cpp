// Bigger is Greater - Solution

#include <iostream>
#include <algorithm>

std::string biggerIsGreater(std::string w) {
    return std::next_permutation(w.begin(), w.end()) ? w : "no answer";
}

int main() {
    int T;
    std::cin >> T;
    std::string w;
    while (T != 0) {
        std::cin >> w;
        std::string result = biggerIsGreater(w);
        std::cout << result << std::endl;
        T--;
    }
    return 0;
}