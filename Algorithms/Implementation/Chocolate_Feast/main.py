### Chocolate Feast - Solution

def chocolateFeast():
    t = int(input())
    while t:
        n, c, m = map(int, input().split())
        chocolate_count, wrapper_count = n//c, n//c 
        while (wrapper_count >= m):
            extra_chocolate = 0
            extra_chocolate += wrapper_count // m
            remainder = wrapper_count % m
            wrapper_count = extra_chocolate + remainder
            chocolate_count += extra_chocolate
        print(chocolate_count)
        t -= 1

chocolateFeast()