// Highest Value Palindrome - Solution

#include <iostream>
#include <vector>
#include <algorithm>

std::string checkHighestPalindrome(int k, int start, int end, std::string &pal_s, const std::string &s) {
    start = 0;
    end = s.size()-1;
    while (start <= end) {
        if (start == end)
            if (k > 0)
                pal_s[start] = '9';
        if (pal_s[start] < '9') {
            if ((k >= 2) && (pal_s[start] == s[start]) && (pal_s[end] == s[end])) {
                pal_s[start] = pal_s[end] = '9';
                k -= 2;
            }
            else if ((k >= 1) && ((pal_s[start] != s[start]) || pal_s[end] != s[end])) {
                pal_s[start] = pal_s[end] = '9';
                k--;
            }
        }
        start++;
        end--;
    }
    return pal_s;
}

void outputResult(int k, const std::string &s) {
    std::string pal_s = s;
    int start{}, end{s.size()-1};
    while (start < end) {
        if (s[start] != s[end]) {
            pal_s[start] = pal_s[end] = std::max(s[start], s[end]);
            k--;
        }
        start++;
        end--;
    }
    if (k < 0)
        std::cout << "-1";
    else {
        const std::string result = checkHighestPalindrome(k, start, end, pal_s, s);
        std::cout << result;
    }
}

int main() {
    int n, k;
    std::cin >> n >> k;
    std::string s(n, ' ');
    std::cin >> s;
    outputResult(k, s);

    return 0;
}