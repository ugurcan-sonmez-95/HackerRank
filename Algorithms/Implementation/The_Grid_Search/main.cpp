// The Grid Search - Solution

#include <iostream>
#include <vector>

std::string checkExists(std::vector<std::string> G, std::vector<std::string> P) {
    for (int i{}; i < G.size(); i++) {
        for (int j{}; j < G[0].size(); j++) {
            int testCount{};
            if (G[i][j] == P[0][0]) {
                for (int k{}; k < P.size(); k++) {
                    for (int m{}; m < P[0].size(); m++) {
                        if (i+k < G.size() && j+m < G[0].size() && G[i+k][j+m] == P[k][m])
                            testCount++;
                        else 
                            break;
                    }
                }
            }
            if (testCount == P.size() * P[0].size()) 
                return "YES";
        }
    }
    return "NO";
}

void outputResult() {
    int t, R, C, r, c;
    std::string s1, s2;
    std::cin >> t;
    while (t) {
        std::vector<std::string> G, P;
        std::cin >> R >> C;
        for (int i{}; i < R; i++) {
            std::cin >> s1;
            if (s1.size() == C)
                G.push_back(s1);
        }
        std::cin >> r >> c;
        for (int j{}; j < r; j++) {
            std::cin >> s2;
            if (s2.size() == c)
                P.push_back(s2);
        }
        std::string ans = checkExists(G, P);
        std::cout << ans << '\n';
        t--;
    }
}

int main() {
    outputResult();

    return 0;
}