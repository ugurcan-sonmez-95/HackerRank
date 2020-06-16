### Beautiful Days at the Movies - Solution

def beautifulDays(i, j, k):
    count = 0
    for x in range(i, j+1):
        if (abs(x - int(str(x)[::-1])) % k == 0):
            count += 1
    print(count)

i, j, k = map(int, input().split())
beautifulDays(i, j, k)