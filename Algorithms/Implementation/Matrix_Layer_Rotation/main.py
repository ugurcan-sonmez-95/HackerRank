### Matrix Layer Rotation - Solution

from copy import deepcopy

def matrixRotation(*args):
    num_of_loops = min(row, col) // 2
    rows = []
    for i in range(num_of_loops):
        r = []
        for j in range(i, row-i-1):
            r.append(matrix[j][i])
        for k in range(i, col-i-1):
            r.append(matrix[row-i-1][k])
        for l in range(row-i-1, i, -1):
            r.append(matrix[l][col-i-1])
        for m in range(col-i-1, i, -1):
            r.append(matrix[i][m])
        rows.append(r)
    final_matrix = deepcopy(matrix)
    for i in range(num_of_loops):
        r = rows[i]
        rotate = rot_count % len(r)
        index = -rotate
        for j in range(i, row-i-1):
            final_matrix[j][i] = r[index]
            index += 1
            index %= len(r)
        for k in range(i, col-i-1):
            final_matrix[row-i-1][k] = r[index]
            index += 1
            index %= len(r)
        for l in range(row-i-1, i, -1):
            final_matrix[l][col-i-1] = r[index]
            index += 1
            index %= len(r)
        for m in range(col-i-1, i, -1):
            final_matrix[i][m] = r[index]
            index += 1
            index %= len(r)
    for i in final_matrix:
        print(*i)

row, col, rot_count = map(int, input().split())
matrix = [list(map(int, input().split()[:col])) for _ in range(row)]
matrixRotation(row, col, rot_count, matrix)