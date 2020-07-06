### Beautiful Triplets - Solution

def beautifulTriplets(d, arr):
    count = 0
    for i in range(len(arr)):
        if (arr[i]+d in arr) and (arr[i]+2*d in arr):
            count += 1
    print(count)

n, d = map(int, input().split())
arr = list(map(int, input().split()[:n]))
beautifulTriplets(d, arr)