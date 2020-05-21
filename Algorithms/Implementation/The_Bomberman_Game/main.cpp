// The Bomberman Game - Solution

#include <iostream>
#include <vector>

std::vector<std::string> bomberMan(int r, int c, int n, std::vector<std::string> grid) {
    std::vector<std::string> finalGrid1 = grid, finalGrid2, finalGrid3;
    for (int i{}; i < r; i++) {
        for (int j{}; j < c; j++)
            finalGrid1[i][j] = 'O';
    } 
    finalGrid3 = finalGrid2 = finalGrid1;
    for (int k{}; k < r; k++) {
        for (int l{}; l < c; l++) {
            if (grid[k][l] == 'O') {
                finalGrid2[k][l] = '.';
                if (k > 0) 
                    finalGrid2[k-1][l] = '.';
                if (l > 0)
                    finalGrid2[k][l-1] = '.';
                if (l < c-1)
                    finalGrid2[k][l+1] = '.';
                if (k < r-1)
                    finalGrid2[k+1][l] = '.'; 
            }
        }
    }
    for (int m{}; m < r; m++) {
        for (int p{}; p < c; p++) {
            if (finalGrid2[m][p] == 'O') {
                finalGrid3[m][p] = '.';
                if (m > 0)
                    finalGrid3[m-1][p] = '.';
                if (p > 0)
                    finalGrid3[m][p-1] = '.';
                if (p < c-1)
                    finalGrid3[m][p+1] = '.';
                if (m < r-1)
                    finalGrid3[m+1][p] = '.'; 
            }
        }
    }
    if (n == 1 || n == 0)
        return grid;
    if (n % 2 == 0)
        return finalGrid1;
    if (n % 4 == 3)
        return finalGrid2;
    return finalGrid3;
}

int main() {
    int r, c, n;
    std::cin >> r >> c >> n;
    std::vector<std::string> grid(r);
    char ch; 
    for (int i{}; i < r; i++) {
        for (int j{}; j < c; j++) {
            std::cin >> ch;
            grid[i].push_back(ch);
        }
    }
    std::vector<std::string> result = bomberMan(r, c, n, grid);
    for (auto el: result)
        std::cout << el << '\n';

    return 0;
}