### Diagonal Difference - Solution

def diagonalDifference(matrix):
    left_to_right, right_to_left = 0, 0
    for i in range(len(matrix)):
        left_to_right += matrix[i][i]
        right_to_left += matrix[i][n-i-1]
    difference = abs(left_to_right-right_to_left) 
    print(difference)

n = int(input())
matrix = tuple(tuple(map(int, input().split()[:n])) for _ in range(n))
diagonalDifference(matrix)