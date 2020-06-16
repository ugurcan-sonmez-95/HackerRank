### Electronics Shop - Solution

def getMoneySpent(keyboards, drives, b):
    maximum = -1
    for i in range(len(keyboards)):
        for j in range(len(drives)):
            total = keyboards[i] + drives[j]
            if (total <= b and total > maximum):
                maximum = total
    print(maximum)

b, n, m = map(int, input().split())
keyboards = list(map(int, input().split()[:n]))
drives = list(map(int, input().split()[:m]))
getMoneySpent(keyboards, drives, b)