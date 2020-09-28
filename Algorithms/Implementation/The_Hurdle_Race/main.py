### The Hurdle Race - Solution

def hurdleRace(k, height):
    print(0 if k>=max(height) else max(height)-k)

n, k = map(int, input().split())
height = tuple(map(int, input().split()[:n]))
hurdleRace(k, height)