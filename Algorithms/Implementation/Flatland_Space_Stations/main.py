### Flatland Space Stations - Solution

def flatlandSpaceStations(n, c):
    c.sort()
    max_distance = max(c[0], n-c[-1]-1, *[int((c[i+1]-c[i])/2) for i in range(len(c)-1)])
    print(max_distance)

n, m = map(int, input().split())
c = list(map(int, input().split()[:m]))
flatlandSpaceStations(n, c)