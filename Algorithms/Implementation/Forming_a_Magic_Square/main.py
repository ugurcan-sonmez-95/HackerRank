### Forming a Magic Square - Solution

def formingMagicSquare(matrix):
    magic_squares = (((8,1,6),(3,5,7),(4,9,2)),
                     ((6,1,8),(7,5,3),(2,9,4)),
                     ((4,9,2),(3,5,7),(8,1,6)),
                     ((2,9,4),(7,5,3),(6,1,8)),
                     ((8,3,4),(1,5,9),(6,7,2)),
                     ((4,3,8),(9,5,1),(2,7,6)),
                     ((6,7,2),(1,5,9),(8,3,4)),
                     ((2,7,6),(9,5,1),(4,3,8)))
    cost = []
    total = 0
    for i in range(8):
        for j in range(3):
            for k in range(3):
                total += abs(magic_squares[i][j][k] - matrix[j][k])
        cost.append(total)
        total = 0
    min_cost = min(cost)
    print(min_cost)

matrix = tuple(tuple(map(int, input().split()[:3])) for _ in range(3))
formingMagicSquare(matrix)