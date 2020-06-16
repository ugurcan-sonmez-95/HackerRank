### The Hurdle Race - Solution

def hurdleRace(k, height):
    print(0 if k>=max(height) else max(height)-k)

n, k = map(int, input().split())
height = list(map(int, input().split()[:n]))
hurdleRace(k, height)