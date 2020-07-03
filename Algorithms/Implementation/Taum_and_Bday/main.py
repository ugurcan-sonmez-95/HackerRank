### Taum and B'day - Solution

def taumBday():
    t = int(input())
    while t:
        b, w = map(int, input().split())
        bc, wc, z = map(int, input().split())
        print((b*min(bc, wc+z) + w*min(wc, bc+z)))
        t -= 1

taumBday()