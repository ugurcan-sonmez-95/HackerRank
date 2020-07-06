### 3D Surface Area - Solution

def surfaceArea(A):
    area = 0
    for i in range(len(A)):
        for j in range(len(A[i])):
            temp = 2 * (A[i][j]*2 + 1)
            area += temp
            if i > 0:
                area -= 2 * min(A[i-1][j], A[i][j])
            if j > 0:
                area -= 2 * min(A[i][j-1], A[i][j])
    print(area)

h, w = map(int, input().split())
A = [list(map(int, input().split()[:w])) for _ in range(h)]
surfaceArea(A)