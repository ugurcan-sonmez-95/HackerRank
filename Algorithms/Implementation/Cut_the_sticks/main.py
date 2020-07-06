### Cut the sticks - Solution

def cutTheSticks(arr):
    while len(arr):
        print(len(arr))
        arr = [length for length in arr if (length != min(arr))]

n = int(input())
arr = list(map(int, input().split()))
cutTheSticks(arr)