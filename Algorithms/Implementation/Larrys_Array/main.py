### Larry's Array - Solution

def larrysArray(arr):
    count = 0
    for i in range(len(arr)-1):
        for j in range(i+1, len(arr)):
            if (arr[j] < arr[i]):
                count += 1
    print("YES" if (count % 2 == 0) else "NO")

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()[:n]))
    larrysArray(arr)