// Separate the Numbers - Solution

#include <iostream>
#include <string>
#include <vector>

std::string separateNumbers(std::string s) {
    int start{1}, stop{static_cast<int>(s.size())/2+1};
    while (start < stop) {
        int i{start};
        while (i < stop-1) {
            long long n1 = std::stoll(s.substr(0, i));
            std::string check_start = s.substr(0, i) + std::to_string(n1+1);
            if (s.rfind(check_start, 0) == 0)
                break;
            i++;
        }
        std::string cmp_str;
        long long n2 = std::stoll(s.substr(0, i));
        std::vector<long long> vec{n2};
        while (cmp_str.size() < s.size()) {
            cmp_str += std::to_string(vec[vec.size()-1]);
            vec.push_back(vec[vec.size()-1]+1);
        }
        start = i+1;
        if (cmp_str == s)
            return "YES " + s.substr(0, i); 
    }
    return "NO";
}

int main() {
    int q;
    std::cin >> q;
    std::string s;
    for (int i{}; i < q; i++) {
        std::cin >> s;
        std::string result = separateNumbers(s);
        std::cout << result << '\n';
    }
    return 0;
}