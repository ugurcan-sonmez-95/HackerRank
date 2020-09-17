// Organizing Containers of Balls - Solution

#include <iostream>
#include <vector>
#include <algorithm>

std::string checkPossible(const std::vector<std::vector<int>> &container) {
    std::vector<int> rowSum, colSum;
    const int n = container.size();
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

void outputResult(int q, int num) {
    std::cin >> q;
    while (q) {
        std::cin >> num;
        std::vector<std::vector<int>> container(num);
        int val;
        for (int i{}; i < num; i++) {
            for (int j{}; j < num; j++) {
                std::cin >> val;
                container[i].push_back(val);
            } 
        }
        const std::string result = checkPossible(container);
        std::cout << result << '\n';
        q--;
    }
}

int main() {
    int q, num;
    outputResult(q, num);

    return 0;
}