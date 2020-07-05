// Palindrome Index - Solution

#include <iostream>
#include <algorithm>

int getIndex(std::string s) {
    std::string rev_str(s);
    std::reverse(rev_str.begin(), rev_str.end());
    if (s == rev_str)
        return -1;
    int i{}, idx_last{s.size()-1};
    while (i < idx_last) {
        if (s[i] != s[idx_last]) {
            if ((s[i-1] == s[idx_last+1]) && (s[i+1] == s[idx_last]) && (s[i+2] == s[idx_last-1]))
                return i;
            break;
        }
        idx_last--;
        i++;
    }
    return idx_last;    
}

void mainFunc(int q, std::string s) {
    std::cin >> q;
    while (q) {
        std::cin >> s;
        int result = getIndex(s);
        std::cout << result << '\n';
        q--;
    }
}

int main() {
    int q;
    std::string s;
    mainFunc(q, s);

    return 0;
}