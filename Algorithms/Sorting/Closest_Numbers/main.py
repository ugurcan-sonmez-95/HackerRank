### Closest Numbers - Solution

def closestNumbers(arr):
    arr.sort()
    diffNums = []
    for i in range(len(arr)-1):
        diffNums.append(arr[i+1]-arr[i])
    minDiff = min(diffNums)
    pairs = []
    for j in range(len(arr)-1):
        if arr[j+1]-arr[j] == minDiff:
            pairs.append(arr[j])
            pairs.append(arr[j+1])
    print(*pairs)

n = int(input())
arr = list(map(int, input().split()[:n]))
closestNumbers(arr)