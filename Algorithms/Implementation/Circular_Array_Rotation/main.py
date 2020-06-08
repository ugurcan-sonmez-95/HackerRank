### Circular Array Rotation - Solution

def circularArrayRotation(arr, k):
    k %= n
    final_arr = (arr[-k:] + arr[:-k])
    return final_arr

n, k, queries = (int(x) for x in input().split())
arr = list(map(int, input().split()[:n]))
final_arr = circularArrayRotation(arr, k)
for _ in range(queries):
    m = int(input())
    print(final_arr[m])