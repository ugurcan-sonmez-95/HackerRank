// Luck Balance - Solution

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

void luckBalance(const int k, const std::vector<std::vector<int>> &contests) {
    std::vector<int> important, unimportant;
    for (int i{}; i < contests.size(); i++) {
        if (contests[i][1] == 1)
            important.push_back(contests[i][0]);
        else
            unimportant.push_back(contests[i][0]);
    }
    std::sort(important.begin(), important.end());
    int sum1 = std::accumulate(important.begin(), important.end(), 0);
    const int sum2 = std::accumulate(unimportant.begin(), unimportant.end(), 0);
    for (int j{}; j < static_cast<int>(important.size())-k; j++)
        sum1 -= important[j] * 2;
    const int max_luck {sum1 + sum2};
    std::cout << max_luck;
}

int main() {
    int n, k;
    std::cin >> n >> k;
    std::vector<std::vector<int>> contests(n);
    int num;
    for (int i{}; i < contests.size(); i++) {
        for (int j{}; j < 2; j++) {
            std::cin >> num;
            contests[i].push_back(num);
        }
    }
    luckBalance(k, contests);

    return 0;
}