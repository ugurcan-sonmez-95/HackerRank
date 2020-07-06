### The Bomberman Game - Solution 

from copy import deepcopy

def bomberMan(n, grid):
    final_grid1 = deepcopy(grid)
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            final_grid1[i][j] = 'O'
    final_grid2 = deepcopy(final_grid1)
    final_grid3 = deepcopy(final_grid1)
    for k in range(len(grid)):
        for l in range(len(grid[0])):
            if grid[k][l] == 'O':
                final_grid2[k][l] = '.'
                if k > 0:
                    final_grid2[k-1][l] = '.'
                if l > 0:
                    final_grid2[k][l-1] = '.'
                if l < len(grid[0])-1:
                    final_grid2[k][l+1] = '.'
                if k < len(grid)-1:
                    final_grid2[k+1][l] = '.'
    for m in range(len(grid)):
        for p in range(len(grid[0])):
            if final_grid2[m][p] == 'O':
                final_grid3[m][p] = '.'
                if m > 0:
                    final_grid3[m-1][p] = '.'
                if p > 0:
                    final_grid3[m][p-1] = '.'
                if p < len(grid[0])-1:
                    final_grid3[m][p+1] = '.'
                if m < len(grid)-1:
                    final_grid3[m+1][p] = '.'
    if (n == 1) or (n == 0):
        return grid
    if (n % 2) == 0:
        return final_grid1
    if (n % 4) == 3:
        return final_grid2
    return final_grid3

r, c, n = map(int, input().split())
grid = [list(input()[:c]) for _ in range(r)]
result = bomberMan(n, grid)
for i in range(len(result)):
    print(*result[i], sep='')