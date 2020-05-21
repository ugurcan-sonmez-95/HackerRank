// Sparse Arrays - Solution

#include <iostream>
#include <vector>

std::vector<int> matchingStrings(std::vector<std::string> strings, std::vector<std::string> queries) {
    std::vector<int> total;
    for (int i{}; i < queries.size(); i++) {
        int count{};
        for (int j{}; j < strings.size(); j++) {
            if (strings[j] == queries[i])
                count++;
        }
        total.push_back(count);
    }
    return total;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> strings(n);
    for (int i{}; i < strings.size(); i++)
        std::cin >> strings[i];
    int q;
    std::cin >> q;
    std::vector<std::string> queries(q);
    for (int j{}; j < queries.size(); j++) 
        std::cin >> queries[j];
    std::vector<int> result = matchingStrings(strings, queries);
    for (auto el: result)
        std::cout << el << '\n';

    return 0;
}