### Service Lane - Solution

def serviceLane():
    n, t = map(int, input().split())
    width = list(map(int, input().split()[:n]))
    while t:
        i, j = map(int, input().split())
        largest = min(width[i:j+1])
        print(largest)
        t -= 1

serviceLane()