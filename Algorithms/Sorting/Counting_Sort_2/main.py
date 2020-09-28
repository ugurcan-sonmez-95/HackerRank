### Counting Sort 2 - Solution

from collections import Counter

def countingSort(arr):
    cnt = Counter(arr)
    idxCounter = tuple(cnt[i] for i in range(100))
    for j in range(100):
        if idxCounter[j] != 0:
            for _ in range(idxCounter[j]):
                print(j, end=' ')

n = int(input())
arr = tuple(map(int, input().split()[:n]))
countingSort(arr)