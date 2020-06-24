// Pangrams - Solution

#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>


void pangrams(std::string s) {
    s.erase(std::remove_if(s.begin(), s.end(), isspace), s.end());
    std::transform(s.begin(), s.end(), s.begin(), tolower);
    std::unordered_set<char> uniques(s.begin(), s.end());
    if (uniques.size() == 26) 
        std::cout << "pangram";
    else
        std::cout << "not pangram";
}

int main() {
    std::string s;
    std::getline(std::cin, s);
    pangrams(s);

    return 0;
}