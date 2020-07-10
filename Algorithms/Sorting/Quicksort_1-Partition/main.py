### Quicksort 1 - Partition - Solution

def quickSort(arr):
    pivotNum = arr[0]
    for i in range(1, len(arr)):
        if pivotNum > arr[i]:
            for j in range(i, 0, -1):
                temp = arr[j]
                arr[j] = arr[j-1]
                arr[j-1] = temp
    print(*arr)

n = int(input())
arr = list(map(int, input().split()[:n]))
quickSort(arr)