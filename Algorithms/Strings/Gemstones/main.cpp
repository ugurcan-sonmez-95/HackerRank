// Gemstones - Solution

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

void gemstones(std::vector<std::string> &str_vec) {
    std::map<char, int> char_dict;
    for (auto &str: str_vec) {
        std::sort(str.begin(), str.end());
        for (int i{}; i < str.size(); i++)
            if (str[i] != str[i+1])
                char_dict[str[i]]++;
    }
    auto find = char_dict.begin();
    int count{};
    while (find != char_dict.end()) {
        if (find->second == str_vec.size())
            count++;
        find++;
    }
    std::cout << count;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> str_vec(n);
    for (int i{}; i < str_vec.size(); i++) 
        std::cin >> str_vec[i];
    gemstones(str_vec);

    return 0;
}