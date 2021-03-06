### Jumping on the Clouds: Revisited - Solution

def jumpingOnClouds(c, k):
    energy, i = 100, len(c)
    while i:
        i = (i+k) % len(c)
        if c[i] == 0:
            energy -= 1
        else:
            energy -= 3
    print(energy)

n, k = map(int, input().split())
c = tuple(map(int, input().split()[:n]))
jumpingOnClouds(c, k)