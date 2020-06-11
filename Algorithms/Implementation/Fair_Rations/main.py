### Fair Rations - Solution

def fairRations(arr):
    odd_num = 0
    for i in range(len(arr)):
        if (arr[i] % 2 != 0):
            odd_num += 1
    if (odd_num % 2 != 0):
        print("NO")
    else:
        loaves = 0
        for j in range(len(arr)-1):
            if (arr[j] % 2 != 0):
                arr[j] += 1
                arr[j+1] += 1
                loaves += 2
        print(loaves)

n = int(input())
arr = list(map(int, input().split()[:n]))
fairRations(arr)