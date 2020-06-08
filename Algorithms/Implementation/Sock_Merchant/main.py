### Sock Merchant - Solution

def sockMerchant(arr):
    count, i = 0, 0
    arr.sort()
    while (i < len(arr)-1):
        if (arr[i] == arr[i+1]):
            count += 1
            i += 2
        else:
            i += 1
    print(count)

n = int(input())
arr = list(map(int, input().split()[:n]))
sockMerchant(arr)