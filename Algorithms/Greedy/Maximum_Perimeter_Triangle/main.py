### Maximum Perimeter Triangle - Solution

def maximumPerimeterTriangle(sticks):
    sticks.sort()
    idx = len(sticks)-3
    while (idx >= 0) and (sticks[idx]+sticks[idx+1] <= sticks[idx+2]):
        idx -= 1
    if idx >= 0:
        print(sticks[idx], sticks[idx+1], sticks[idx+2])
    else:
        print(-1)

n = int(input())
sticks = list(map(int, input().split()[:n]))
maximumPerimeterTriangle(sticks)