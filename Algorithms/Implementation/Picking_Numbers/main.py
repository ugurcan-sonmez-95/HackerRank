### Picking Numbers - Solution

def pickingNumbers(arr):
    ar, maximum = [0] * 101, 0
    for i in range(len(arr)):
        ar[arr[i]] += 1
    for j in range(100):
        total = ar[j] + ar[j+1]
        if total > maximum:
            maximum = total
    print(maximum)

n = int(input())
arr = list(map(int, input().split()[:n]))
pickingNumbers(arr)