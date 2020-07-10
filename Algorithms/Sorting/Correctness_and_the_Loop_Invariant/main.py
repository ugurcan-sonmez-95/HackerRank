### Correctness and the Loop Invariant - Solution

def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i-1
        while (j >= 0) and (arr[j] > key):
           arr[j+1] = arr[j]
           j -= 1
        arr[j+1] = key
    print(*arr)

m = int(input())
arr = list(map(int, input().split()[:m]))
insertion_sort(arr)