// Bigger is Greater - Solution

#include <iostream>
#include <algorithm>

void biggerIsGreater(int t, std::string &w) {
    std::cin >> t;
    while (t) {
        std::cin >> w;
        std::cout << (std::next_permutation(w.begin(), w.end()) ? w : "no answer") << '\n';
        t--;
    }
}

int main() {
    int t;
    std::string w;
    biggerIsGreater(t, w);
    
    return 0;
}