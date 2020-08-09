### Grid Challenge - Solution

def gridChallenge(grid):
    sorted_grid = []
    for i in range(len(grid)):
        sorted_grid.append("".join(sorted(grid[i][0])))
    for i in range(len(sorted_grid)-1):
        for j in range(i+1, len(sorted_grid)):
            for k in range(len(sorted_grid[0])):
                if sorted_grid[i][k] > sorted_grid[j][k]:
                    return "NO"
    return "YES"

def outputResult():
    t = int(input())
    while t:
        n = int(input())
        grid = [list(map(str, input().split()[:n])) for _ in range(n)]
        result = gridChallenge(grid)
        print(result)
        t -= 1

outputResult()