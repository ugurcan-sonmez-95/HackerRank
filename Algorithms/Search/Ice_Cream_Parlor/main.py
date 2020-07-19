### Ice Cream Parlor - Solution

def icecreamParlor(m, arr):
    indexes = []
    for i in range(len(arr)-1):
        for j in range(i+1, len(arr)):
            if arr[i]+arr[j] == m:
                indexes.append(i+1)
                indexes.append(j+1)
                break
        if len(indexes) != 0:
            break
    return indexes

def main():
    t = int(input())
    while t:
        m, n = int(input()), int(input())
        arr = list(map(int, input().split()[:n]))
        result = icecreamParlor(m, arr)
        print(*result)
        t -= 1

main()