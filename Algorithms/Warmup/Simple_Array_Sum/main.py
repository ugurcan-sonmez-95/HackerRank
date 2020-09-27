### Simple Array Sum - Solution

def simpleArraySum(arr):
    print(sum(arr))

size = int(input())
arr = tuple(map(int, input().split()[:size]))
simpleArraySum(arr)