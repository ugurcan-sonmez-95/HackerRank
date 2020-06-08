### Jumping on the Clouds: Revisited - Solution

def jumpingOnClouds(c, k):
    energy, i = 100, len(c)
    while (i != 0):
        i = (i+k) % len(c)
        if (c[i] == 0):
            energy -= 1
        else:
            energy -= 3
    print(energy)

n, k = (int(x) for x in input().split())
c = list(map(int, input().split()[:n]))
jumpingOnClouds(c, k)