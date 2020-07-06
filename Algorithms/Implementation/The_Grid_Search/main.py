### The Grid Search - Solution

def checkExists(grid, pattern):
    count = 0
    for i in range(len(grid[0])-len(pattern[0])+1):
        for j in range(len(grid)-len(pattern)+1):
            if grid[j][i:(i+len(pattern[0]))] == pattern[0]:
                for k in range(1, len(pattern)):
                    if grid[j+k][i:(i+len(pattern[0]))] == pattern[k]:
                        count += 1
                        if count == len(pattern)-1:
                            return "YES"
                    else:
                        count = 0
    return "NO"

def main():
    t = int(input())
    while t:
        R, C = map(int, input().split())
        grid = [list(map(str, input()[:C])) for _ in range(R)]
        r, c = map(int, input().split())
        pattern = [list(map(str, input()[:c])) for _ in range(r)]
        result = checkExists(grid, pattern)
        print(result)
        t -= 1

main()