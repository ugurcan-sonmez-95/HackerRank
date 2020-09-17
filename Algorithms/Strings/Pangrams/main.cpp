// Pangrams - Solution

#include <iostream>
#include <string>
#include <set>
#include <algorithm>


void pangrams(std::string &s) {
    s.erase(std::remove_if(s.begin(), s.end(), isspace), s.end());
    std::transform(s.begin(), s.end(), s.begin(), tolower);
    const std::set<char> uniques(s.begin(), s.end());
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