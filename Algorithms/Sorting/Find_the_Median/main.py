### Find the Median - Solution

def findMedian(arr):
    arr.sort()
    index = len(arr) // 2
    print(arr[index])

n = int(input())
arr = list(map(int, input().split()[:n]))
findMedian(arr)