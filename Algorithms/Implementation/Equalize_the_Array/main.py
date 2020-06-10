### Equalize the Array - Solution

def equalizeArray(arr):
    count = [0] * 101
    for i in range(len(arr)):
        count[arr[i]] += 1
    maximum = max(count)
    del_count = len(arr) - maximum
    print(del_count)

n = int(input())
arr = list(map(int, input().split()[:n]))
equalizeArray(arr)