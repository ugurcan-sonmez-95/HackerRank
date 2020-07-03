### Utopian Tree - Solution

def utopianTree():
    t = int(input())
    while t:
        n = int(input())
        height = 1
        for i in range(1, n+1):
            if (i % 2 == 0):
                height += 1
            else:
                height *= 2
        print(height)
        t -= 1

utopianTree()