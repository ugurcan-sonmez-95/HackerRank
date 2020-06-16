### Sherlock and Squares - Solution

from math import sqrt, floor

def squares(a, b):
    count = floor(sqrt(b) - floor(sqrt(a)))
    if (sqrt(a) - floor(sqrt(a)) == 0):
        count += 1
    print(count)

for _ in range(int(input())):
    a, b = map(int, input().split())
    squares(a, b)