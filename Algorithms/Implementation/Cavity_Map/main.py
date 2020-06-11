### Cavity Map - Solution

def cavityMap(grid):
    for i in range(1, len(grid)-1):
        for j in range(1, len(grid)-1):
            if ((grid[i][j] > grid[i-1][j]) and (grid[i][j] > grid[i][j-1]) and (grid[i][j] > grid[i][j+1]) and (grid[i][j] > grid[i+1][j])):
                grid[i][j] = 'X'
    return grid

n = int(input())
grid = [list(map(str, input()[:n])) for _ in range(n)]
final_grid = cavityMap(grid)
for i in range(len(final_grid)):
    print(*final_grid[i], sep='')