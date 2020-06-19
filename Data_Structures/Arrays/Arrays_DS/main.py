### Arrays - DS - Solution

def reverseArray(arr):
    rev_list = list(reversed(arr))
    print(*rev_list)

n = int(input())
arr = list(map(int, input().split()[:n]))
reverseArray(arr)