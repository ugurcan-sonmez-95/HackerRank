### String Construction - Solution

def calcMinCost(s):
    cost = len(set(s))
    return cost

def main():
    n = int(input())
    while n:
        s = input()
        cost = calcMinCost(s)
        print(cost)
        n -= 1

main()