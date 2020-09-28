### Non-Divisible Subset - Solution

def nonDivisibleSubset(k, s):
    subset_len = [0] * k
    for i in range(len(s)):
        subset_len[s[i] % k] += 1
    if k % 2 == 0:
        subset_len[k//2] = min(subset_len[k//2], 1)
    result = min(subset_len[0], 1)
    for j in range(1, (k//2)+1):
        result += max(subset_len[j], subset_len[k-j])
    print(result)

n, k = map(int, input().split())
s = tuple(map(int, input().split()[:n]))
nonDivisibleSubset(k, s)