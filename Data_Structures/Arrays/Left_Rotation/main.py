### Left Rotation - Solution

def leftRotation(arr):
    new_arr = arr[d:] + arr[:d]
    print(*new_arr)

n, d = map(int, input().split())
arr = list(map(int, input().split()[:n]))
leftRotation(arr)