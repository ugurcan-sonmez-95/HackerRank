// Super Reduced String - Solution

#include <iostream>
#include <string>

std::string superReducedString(std::string s) {
    for (int i{}; i < static_cast<int>(s.size()-1); i++) {
        if (i > -1 && s[i] == s[i+1]) {
            s.erase(i,2);
            i -= 2;
        } 
    }
    if (s.empty()) 
        return "Empty String";
    else 
        return s;
}

int main() {
    std::string s;
    std::getline(std::cin, s);
    std::string result = superReducedString(s);
    std::cout << result;

    return 0;
}