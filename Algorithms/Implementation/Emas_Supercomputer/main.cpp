// Ema's Supercomputer - Solution

#include <iostream>
#include <algorithm>

int twoPluses(const int n, const int m, const int N) {
    char grid[N][N];
    for (int i{}; i < n; i++) 
        for (int j{}; j < m; j++)
            std::cin >> grid[i][j];
    int product;
    for (int i{1}; i < n; i++) {
        for (int j{1}; j < m; j++) {
            int x{}; 
            while (grid[i+x][j] == 'G' && grid[i][j+x] == 'G' && grid[i-x][j] == 'G' && grid[i][j-x] == 'G') {
                grid[i+x][j] = grid[i][j+x] = grid[i-x][j] = grid[i][j-x] = '1';
                for (int k{1}; k < n; k++) {
                    for (int l{1}; l < m; l++) {
                        int y{};
                        while (grid[k+y][l] == 'G' && grid[k][l+y] == 'G' && grid[k-y][l] == 'G' && grid[k][l-y] == 'G') {
                            product = std::max(product, (4*x+1)*(4*y+1));
                            y++;
                        }
                    }
                }
                x++;
            }
            x = 0;
            while (grid[i+x][j] == '1' && grid[i][j+x] == '1' && grid[i-x][j] == '1' && grid[i][j-x] == '1') {
                grid[i+x][j] = grid[i][j+x] = grid[i-x][j] = grid[i][j-x] = 'G';
                x++;
            }
        }
    }
    return product;
}

int main() {
    int n, m;
    const int N{20};
    std::cin >> n >> m;
    const int result = twoPluses(n, m, N);
    std::cout << result;

    return 0;
}