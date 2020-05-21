// Repeated String - Solution

#include <iostream>

long repeatedString(std::string s, long n) {
    long count1{}, count2{}, remainder, totalCount;
    for (int i{}; i < s.size(); i++) {
        if (s[i] == 'a') 
            count1++;
    }
    remainder = n % s.size();
    for (int j{}; j < remainder; j++) {
        if (s[j] == 'a') 
            count2++;
    }
    totalCount = (((n-remainder) / s.size()) * count1 + count2);
    return totalCount;
}

int main() {
    std::string s;
    std::cin >> s;
    long n;
    std::cin >> n;
    long result = repeatedString(s, n);
    std::cout << result;

    return 0;
}