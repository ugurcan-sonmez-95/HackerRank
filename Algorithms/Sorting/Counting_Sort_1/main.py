### Counting Sort 1 - Solution

from collections import Counter

def countingSort(arr):
    cnt = Counter(arr)
    idxCounter = (cnt[i] for i in range(100))
    print(*idxCounter) 

n = int(input())
arr = list(map(int, input().split()[:n]))
countingSort(arr)