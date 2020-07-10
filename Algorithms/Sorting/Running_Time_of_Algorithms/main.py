### Running Time of Algorithms - Solution

def runningTime(arr):
    shiftCount = 0
    for i in range(1, len(arr)):
        comp, prev = arr[i], i-1
        while (prev >= 0) and (arr[prev] > comp):
            arr[prev+1] = arr[prev]
            prev -= 1
            shiftCount += 1
        arr[prev+1] = comp
    print(shiftCount)

n = int(input())
arr = list(map(int, input().split()[:n]))
runningTime(arr)