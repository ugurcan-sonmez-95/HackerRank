### Highest Value Palindrome - Solution

def checkHighestPalindrome(k, start, end, pal_s, s):
    start, end = 0, len(s)-1
    while start <= end:
        if start == end:
            if k > 0:
                pal_s[start] = '9'
        if pal_s[start] < '9':
            if (k >= 2) and (pal_s[start] == s[start]) and (pal_s[end] == s[end]):
                pal_s[start] = pal_s[end] = '9'
                k -= 2
            elif (k >= 1) and (pal_s[start] != s[start] or pal_s[end] != s[end]):
                pal_s[start] = pal_s[end] = '9'
                k -= 1
        start += 1
        end -= 1
    return pal_s

def main(k, s):
    pal_s = s.copy()
    start, end = 0, len(s)-1
    while start < end:
        if s[start] != s[end]:
            pal_s[start] = pal_s[end] = max(s[start], s[end])
            k -= 1
        start += 1
        end -= 1
    if k < 0:
        print(-1)
    else:
        result = checkHighestPalindrome(k, start, end, pal_s, s)
        print(*result, sep='')

n, k = map(int, input().split())
s = list(input()[:n])
main(k, s)