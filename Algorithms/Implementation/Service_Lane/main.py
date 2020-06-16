### Service Lane - Solution

def serviceLane(width, i, j):
    largest = min(width[i:j+1])
    print(largest)

n, t = map(int, input().split())
width = list(map(int, input().split()[:n]))
for _ in range(t):
    i, j = map(int, input().split())
    serviceLane(width, i, j)