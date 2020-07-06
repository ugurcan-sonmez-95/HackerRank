### Ema's Supercomputer - Solution
 
def sizePlus(i, j, row, col, grid_copy):
    size = 1
    while (i-size >= 0) and (i+size < row) and (j-size >= 0) and (j+size < col) and (grid_copy[i-size][j] == grid_copy[i][j-size] == grid_copy[i][j+size] == grid_copy[i+size][j] == 'G'):
        size += 1
    return (size-1)

def removePlus(k, i, j, grid_copy):
    grid_copy[i][j] = '1'
    for diff in range(1, k+1):
        grid_copy[i-diff][j] = '1'
        grid_copy[i][j-diff] = '1'
        grid_copy[i][j+diff] = '1'
        grid_copy[i+diff][j] = '1'

def maxArea(grid_copy):
    maximum = max([(4*sizePlus(i, j, row, col, grid_copy))+1 for i in range(row) for j in range(col) if grid_copy[i][j] == 'G'])
    return maximum

def main(row, col, grid):
    prod = 0
    for i in range(row):
        for j in range(col):
            grid_copy = [el.copy() for el in grid]
            size = sizePlus(i, j, row, col, grid_copy)
            for k in range(size+1):
                removePlus(k, i, j, grid_copy)
                max_area = (4*k+1)*maxArea(grid_copy)
                if max_area > prod:
                    prod = max_area
    print(prod)


row, col = map(int, input().split())
grid = [list(input()[:col]) for _ in range(row)]
main(row, col, grid)