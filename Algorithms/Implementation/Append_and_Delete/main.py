### Append and Delete - Solution

def appendAndDelete(s, t, k):
    numOfSameChars = min(len(s), len(t))
    for i in range(len(t)):
        if s[:i] != t[:i]:
            numOfSameChars = i - 1
            break
    diff = (len(s)-numOfSameChars) + (len(t)-numOfSameChars)
    print("Yes" if ((diff <= k and diff%2 == k%2) or (len(s)+len(t) < k)) else "No")

s, t, k = input(), input(), int(input())
appendAndDelete(s, t, k)