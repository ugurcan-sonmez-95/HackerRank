### Utopian Tree - Solution

def utopianTree(n):
    height = 1
    for i in range(1, n+1):
        if (i % 2 == 0):
            height += 1
        else:
            height *= 2
    print(height)

for _ in range(int(input())):
    n = int(input())
    utopianTree(n)