### Cut the sticks - Solution

def cutTheSticks(arr):
    while len(arr):
        print(len(arr))
        arr = tuple(length for length in arr if (length != min(arr)))

n = int(input())
arr = tuple(map(int, input().split()))
cutTheSticks(arr)