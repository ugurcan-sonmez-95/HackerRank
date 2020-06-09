### Repeated String - Solution

def repeatedString(s, n):
    print(s.count('a') * (n // len(s)) + s[:n%len(s)].count('a'))

s, n = input(), int(input())
repeatedString(s, n)