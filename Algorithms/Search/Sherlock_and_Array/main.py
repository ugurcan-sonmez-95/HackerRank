### Sherlock and Array - Solution

def getAns(arr):
    total = sum(arr)
    left_sum = 0
    for num in arr:
        cur = num
        total -= cur
        if left_sum == total:
            return "YES"
        left_sum += cur
    return "NO" 

def main():
    t = int(input())
    while t:
        n = int(input())
        arr = tuple(map(int, input().split()[:n]))
        result = getAns(arr)
        print(result)
        t -= 1

main()