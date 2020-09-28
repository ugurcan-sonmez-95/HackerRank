### Beautiful Pairs - Solution

def beautifulPairs(A, B):
    count = 0
    for num in A:
        if num in B:
            B.remove(num)
            count += 1
    count = count+1 if count < len(A) else count-1
    print(count)

n = int(input())
A = tuple(map(int, input().split()[:n]))
B = list(map(int, input().split()[:n]))
beautifulPairs(A, B)