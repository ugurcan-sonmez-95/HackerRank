### Taum and B'day - Solution

def taumBday(*args):
    print((b*min(bc, wc+z) + w*min(wc, bc+z)))

for _ in range(int(input())):
    b, w = (int(x) for x in input().split())
    bc, wc, z = (int(x) for x in input().split())
    taumBday(b, w, bc, wc, z)