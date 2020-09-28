### Luck Balance - Solution

def luckBalance(k, contests):
    important, unimportant = [], []
    for i in range(len(contests)):
        if contests[i][1] == 1:
            important.append(contests[i][0])
        else:
            unimportant.append(contests[i][0])
    important.sort()
    sum1, sum2 = sum(important), sum(unimportant)
    for j in range(len(important)-k):
        sum1 -= important[j] * 2
    max_luck = sum1 + sum2
    print(max_luck)

n, k = map(int, input().split())
contests = tuple(tuple(map(int, input().split()[:2])) for _ in range(n))
luckBalance(k, contests)