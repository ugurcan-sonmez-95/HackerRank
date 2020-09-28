### Minimum Distances - Solution

def minimumDistances(arr):
    diff = []
    for i in range(len(arr)-1):
        for j in range(i+1, len(arr)):
            if arr[i] == arr[j]:
                diff.append(j-i)
    if len(diff) != 0:
        print(min(diff))
    else:
        print(-1)

n = int(input())
arr = tuple(map(int, input().split()[:n]))
minimumDistances(arr)