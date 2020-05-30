// Two Characters - Solution

#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

// Checks whether there are adjacent elements that are the same in the vector
bool validation(std::vector<char> chars_to_validate) {
    for (int i{}; i < chars_to_validate.size()-1; i++) {
        if (chars_to_validate[i] == chars_to_validate[i+1])
            return false;
    }
    return true;
}

// Gets the size of longest possible alternate string 
int maxAlternateStringSize(std::string s) {
    int max_size{};     
    std::unordered_set<char> set_of_chars(s.begin(), s.end()); // Gets the unique elements as unsorted from s
    std::vector<char> vec_of_chars(set_of_chars.begin(), set_of_chars.end());
    for (int i{}; i < vec_of_chars.size(); i++) {
        for (int j{i+1}; j < vec_of_chars.size(); j++) {
            std::vector<char> chars_to_validate;
            for (auto ch: s) {
                if (ch == vec_of_chars[i] || ch == vec_of_chars[j]) // Gets only two distinct elements from s and adds them to a vector
                    chars_to_validate.push_back(ch);
            }
            if (validation(chars_to_validate)) 
                max_size = std::max(max_size, static_cast<int>(chars_to_validate.size()));
        }
    } 
    return max_size;
}

int main() {
    int size_of_s;
    std::cin >> size_of_s;
    std::string s;
    char ch;
    for (int i{}; i < size_of_s; i++) {
        std::cin >> ch;
        s.push_back(ch);
    }
    int result = maxAlternateStringSize(s);
    std::cout << result;

    return 0;
}