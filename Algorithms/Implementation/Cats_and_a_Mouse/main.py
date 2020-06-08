### Cats and a Mouse - Solution

def catAndMouse(x, y, z):
    if (abs(x - z) < abs(y - z)):
        print("Cat A")
    elif (abs(y - z) < abs(x - z)):
        print("Cat B")
    else:
        print("Mouse C")

for _ in range(int(input())):
    x, y, z = (int(x) for x in input().split())
    catAndMouse(x, y, z)