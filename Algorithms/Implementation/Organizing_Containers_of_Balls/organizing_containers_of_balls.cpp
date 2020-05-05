// Organizing Containers of Balls - Solution

#include <iostream>
#include <vector>
#include <algorithm>

std::string organizingContainers(std::vector<std::vector<int>> container) {
    std::vector<int> rowSum, colSum;
    int n = container.size();
    for (int i{}; i < n; i++) {
        int sum{};  
        for (int j{}; j < n; j++)
            sum += container[i][j]; 
        rowSum.push_back(sum);
    }
    for (int i{}; i < n; i++) {
        int sum{};
        for (int j{}; j < n; j++)
            sum += container[j][i];
        colSum.push_back(sum);
    }
    std::sort(rowSum.begin(), rowSum.end());
    std::sort(colSum.begin(), colSum.end());
    if (rowSum == colSum) 
        return "Possible";
    else 
        return "Impossible";
}

int main() {
    int q;
    std::cin >> q;
    while (q != 0) {
        int n;
        std::cin >> n;
        std::vector<std::vector<int>> container(n);
        int val;
        for (int j{}; j < n; j++) {
            for (int k{}; k < n; k++) {
                std::cin >> val;
                container[j].push_back(val);
            } 
        }
        std::string result = organizingContainers(container);
        std::cout << result << std::endl;
        q--;
    }
    return 0;
}