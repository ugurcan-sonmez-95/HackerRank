### Insertion Sort - Part 1 - Solution

def insertionSort1(arr):
    num, i = arr[-1], len(arr)-2
    while i >= 0:
        if num <= arr[i]:
            arr[i+1] = arr[i]
            print(*arr)
            if i == 0:
                arr[i] = num
                print(*arr)
        else:
            arr[i+1] = num
            print(*arr)
            break
        i -= 1

n = int(input())
arr = list(map(int, input().split()[:n]))
insertionSort1(arr)