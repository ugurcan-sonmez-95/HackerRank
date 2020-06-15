### The Grid Search - Solution

def gridSearch(grid, pattern):
    count = 0
    for i in range(len(grid[0])-len(pattern[0])+1):
        for j in range(len(grid)-len(pattern)+1):
            if (grid[j][i:(i+len(pattern[0]))] == pattern[0]):
                for k in range(1, len(pattern)):
                    if (grid[j+k][i:(i+len(pattern[0]))] == pattern[k]):
                        count += 1
                        if (count == len(pattern)-1):
                            return "YES"
                    else:
                        count = 0
    return "NO"

for _ in range(int(input())):
    R, C = (int(x) for x in input().split())
    grid = [list(map(str, input()[:C])) for _ in range(R)]
    r, c = (int(x) for x in input().split())
    pattern = [list(map(str, input()[:c])) for _ in range(r)]
    result = gridSearch(grid, pattern)
    print(result)