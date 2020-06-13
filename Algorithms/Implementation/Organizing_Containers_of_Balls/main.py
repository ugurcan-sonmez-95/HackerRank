### Organizing Containers of Balls - Solution

def organizingContainers(container):
    row_sum, col_sum = [], []
    for i in range(len(container)):
        total = 0
        for j in range(len(container)):
            total += container[i][j]
        row_sum.append(total)
    for k in range(len(container)):
        total = 0
        for l in range(len(container)):
            total += container[l][k]
        col_sum.append(total)
    row_sum.sort()
    col_sum.sort()
    if (row_sum == col_sum):
        print("Possible")
    else:
        print("Impossible")

for _ in range(int(input())):
    n = int(input())
    container = [list(map(int, input().split())) for _ in range(n)]
    organizingContainers(container)