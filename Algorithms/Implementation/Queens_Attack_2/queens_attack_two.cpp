// Queen's Attack II - Solution

#include <iostream>
#include <vector>
#include <algorithm>

int queensAttack(int n, int k, int r_q, int c_q, std::vector<std::vector<int>> obstacles) {
    int up {n - r_q}, down {r_q - 1}, left {c_q - 1}, right {n - c_q};
    int right_up = std::min(right,up), right_down = std::min(right,down);
    int left_up = std::min(left,up), left_down = std::min(left,down);
    for (auto obstacle: obstacles) {
        if (obstacle[1] == c_q) {
            if (obstacle[0] < r_q) 
                down = std::min(down, r_q-1-obstacle[0]);
            else
                up = std::min(up, obstacle[0]-r_q-1); 
        }
        else if (obstacle[0] == r_q) {
            if (obstacle[1] < c_q)
                left = std::min(left, c_q-obstacle[1]-1);
            else
                right = std::min(right, obstacle[1]-c_q-1); 
        }
        else if (abs(r_q-obstacle[0]) == abs(c_q-obstacle[1])) {
            if (obstacle[1] < c_q) {
                if (r_q < obstacle[0])
                    left_up = std::min(left_up, c_q-obstacle[1]-1);
                else 
                    left_down = std::min(left_down, c_q-obstacle[1]-1);
            }
            else
                if (r_q < obstacle[0])
                    right_up = std::min(right_up, obstacle[1]-c_q-1);
                else
                    right_down = std::min(right_down, obstacle[1]-c_q-1);
        }
    }
    int sum = up + down + left + right + left_up + left_down + right_up + right_down;
    return sum;
}

int main() {
    int n, k, r_q, c_q;
    std::cin >> n >> k >> r_q >> c_q;
    std::vector<std::vector<int>> obstacles(k);
    int obstacle;
    if (k != 0) {
        for (int i{}; i < obstacles.size(); i++) {
            for (int j{}; j < 2; j++) {
                std::cin >> obstacle;
                obstacles[i].push_back(obstacle);
            }
        }
    }
    int result = queensAttack(n, k, r_q, c_q, obstacles);
    std::cout << result << std::endl;

    return 0;
}