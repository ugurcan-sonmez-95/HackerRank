// Dynamic Array - Solution

#include <iostream>
#include <vector>

std::vector<int> dynamicArray(int N, std::vector<std::vector<int>> queries) {
    std::vector<std::vector<int>> s0;
    std::vector<int> lastAnswers;
    s0.resize(N);
    int lastAnswer{};
    for (int i{}; i < queries.size(); i++) {
        int x = queries[i][1], y = queries[i][2], idx = (x^lastAnswer) % N;
        if (queries[i][0] == 1)
            s0[idx].push_back(y);
        else if (queries[i][0] == 2) {
            lastAnswer = s0[idx][y % s0[idx].size()];
            lastAnswers.push_back(lastAnswer);
        }
    }
    return lastAnswers;
}

int main() {
    int N, Q; 
    std::cin >> N >> Q;
    std::vector<std::vector<int>> queries(Q);
    int val;
    for (int i{}; i < queries.size(); i++) {
        for (int j{}; j < 3; j++) {
            std::cin >> val;
            queries[i].push_back(val);
        }
    }
    std::vector<int> result = dynamicArray(N, queries);
    for (auto el: result)
        std::cout << el << '\n';

    return 0;
}