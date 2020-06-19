### Array Manipulation - Solution

def arrayManipulation(n, queries):
    sums = [0] * (n+1)
    for i in range(len(queries)):
        a, b, k = queries[i][0], queries[i][1], queries[i][2]
        sums[a] += k
        if ((b+1) <= n):
            sums[b+1] -= k
    temp, maximum = 0, 0
    for j in range(len(sums)):
        temp += sums[j]
        if (temp > maximum):
            maximum = temp
    print(maximum)

n, m = map(int, input().split())
queries = [list(map(int, input().split())) for _ in range(m)]
arrayManipulation(n, queries)