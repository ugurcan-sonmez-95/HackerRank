### Larry's Array - Solution

def larrysArray():
    t = int(input())
    while t:
        n = int(input())
        arr = list(map(int, input().split()[:n]))
        count = 0
        for i in range(len(arr)-1):
            for j in range(i+1, len(arr)):
                if arr[j] < arr[i]:
                    count += 1
        print("YES" if (count % 2 == 0) else "NO")
        t -= 1

larrysArray()