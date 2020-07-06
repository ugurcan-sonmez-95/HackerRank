### Jumping on the Clouds - Solution

def jumpingOnClouds(c):
    count, i = 0, 0
    while i != len(c)-1:
        if (i < len(c)-2) and (c[i+2] == 0):
            i += 2
        else:
            i += 1
        count += 1
    print(count)

n = int(input())
c = list(map(int, input().split()[:n]))
jumpingOnClouds(c)