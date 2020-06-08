### Viral Advertising - Solution

from math import floor

def viralAdvertising(n):
    shared, likes, cumulative = 5, 2, 2
    for _ in range(n-1):
        shared = likes * 3
        likes = floor(shared/2)
        cumulative += likes
    print(cumulative)

n = int(input())
viralAdvertising(n)