### A Very Big Sum - Solution

def aVeryBigSum(arr):
    print(sum(arr))

size = int(input())
arr = list(map(int, input().split()[:size]))
aVeryBigSum(arr)