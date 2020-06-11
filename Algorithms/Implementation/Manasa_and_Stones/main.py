### Manasa and Stones - Solution

def stones(n, a, b):
    last_stones = set()
    for i in range(n):
        last_stones.add((a*i) + b*(n-i-1))
    result = sorted(list(last_stones))
    print(*result)

for _ in range(int(input())):
    n, a, b = (int(input()) for _ in range(3))
    stones(n, a, b)