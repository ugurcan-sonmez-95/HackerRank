### Simple Array Sum - Solution

def simpleArraySum(arr):
    print(sum(arr))

size = int(input())
arr = list(map(int, input().split()[:size]))
simpleArraySum(arr)