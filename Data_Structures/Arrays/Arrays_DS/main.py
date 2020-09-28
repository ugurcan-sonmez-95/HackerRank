### Arrays - DS - Solution

def reverseArray(arr):
    rev_list = tuple(reversed(arr))
    print(*rev_list)

n = int(input())
arr = tuple(map(int, input().split()[:n]))
reverseArray(arr)