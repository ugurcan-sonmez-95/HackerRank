### Halloween Sale - Solution

def howManyGames(p, d, m, s):
    count = 0
    while s-p >= 0:
        count += 1
        s -= p
        if p-d > m:
            p -= d
        else:
            p = m
    print(count)

p, d, m, s = map(int, input().split())
howManyGames(p, d, m, s)