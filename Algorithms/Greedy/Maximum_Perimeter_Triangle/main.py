### Maximum Perimeter Triangle - Solution

def checkTriangle(num1, num2, num3):
    return num1+num2 > num3

def maximumPerimeterTriangle(sticks):
    sticks.sort()
    for i in range(len(sticks)-1, 1, -1):
        if checkTriangle(sticks[i-2], sticks[i-1], sticks[i]):
            print(sticks[i-2], sticks[i-1], sticks[i])
            break
    else:
        print(-1)

n = int(input())
sticks = list(map(int, input().split()[:n]))
maximumPerimeterTriangle(sticks)