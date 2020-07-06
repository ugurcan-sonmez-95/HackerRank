### Sherlock and Squares - Solution

from math import sqrt, floor

def squares():
    q = int(input())
    while q:
        a, b = map(int, input().split())
        count = floor(sqrt(b) - floor(sqrt(a)))
        if sqrt(a) - floor(sqrt(a)) == 0:
            count += 1
        print(count)
        q -= 1

squares()