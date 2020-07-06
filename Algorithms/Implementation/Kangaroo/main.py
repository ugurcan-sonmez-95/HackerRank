### Kangaroo - Solution

def kangaroo(*args):
    if v1 > v2:
        if (x1-x2) % (v2-v1) == 0:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")

x1, v1, x2, v2 = map(int, input().split())
kangaroo(x1, v1, x2, v2)