// Climbing the Leaderboard - Solution

#include <iostream>
#include <vector>
#include <map>

std::vector<int> climbingLeaderboard(std::vector<int> scores, std::vector<int> alice) {
    std::vector<int> ranks;
    std::map<int, int> scoresRank;
    int rank{1};
    for (int i{}; i < scores.size(); i++) {
        if (scoresRank[scores[i]] == 0) 
            scoresRank[scores[i]] = rank++;
    }
    for (auto sc: alice) {
        auto it = scoresRank.upper_bound(sc);
        if (it->second == 0) 
            ranks.push_back(1);
        else 
            ranks.push_back(it->second + 1);
    }
    return ranks;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> scores(n);
    for (int i{}; i < scores.size(); i++)
        std::cin >> scores[i];
    int m;
    std::cin >> m;
    std::vector<int> alice(m);
    for (int j{}; j < alice.size(); j++) 
        std::cin >> alice[j];
    std::vector<int> result = climbingLeaderboard(scores, alice);
    for (auto el: result)
        std::cout << el << std::endl;

    return 0;
}