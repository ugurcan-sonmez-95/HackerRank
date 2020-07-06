### Cats and a Mouse - Solution

def catAndMouse():
    q = int(input())
    while q:
        x, y, z = map(int, input().split())
        if abs(x - z) < abs(y - z):
            print("Cat A")
        elif abs(y - z) < abs(x - z):
            print("Cat B")
        else:
            print("Mouse C")
        q -= 1

catAndMouse()