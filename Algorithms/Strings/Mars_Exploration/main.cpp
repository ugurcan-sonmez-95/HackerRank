// Mars Exploration - Solution

#include <iostream>
#include <vector>

void marsExploration(const std::string &s) {
    std::string str = "SOS";
    const std::string str1 = str;
    for (int i{1}; i < (s.size()/3); i++)
        str += str1;
    int count{};
    for (int i{}; i < s.size(); i+=3) {
        for (int j{i}; j < i+3; j++) 
            if (str[j] != s[j])
                count++;
    }
    std::cout << count;
}

int main() {
    std::string s;
    std::cin >> s;
    marsExploration(s);

    return 0;
}