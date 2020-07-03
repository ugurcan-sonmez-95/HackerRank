### Manasa and Stones - Solution

def stones():
    t = int(input())
    while t:
        n, a, b = (int(input()) for _ in range(3))
        last_stones = set()
        for i in range(n):
            last_stones.add((a*i) + b*(n-i-1))
        result = sorted(list(last_stones))
        print(*result)
        t -= 1

stones()