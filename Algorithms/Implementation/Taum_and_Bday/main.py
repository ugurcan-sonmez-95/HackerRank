### Taum and B'day - Solution

def taumBday(*args):
    print((b*min(bc, wc+z) + w*min(wc, bc+z)))

for _ in range(int(input())):
    b, w = map(int, input().split())
    bc, wc, z = map(int, input().split())
    taumBday(b, w, bc, wc, z)