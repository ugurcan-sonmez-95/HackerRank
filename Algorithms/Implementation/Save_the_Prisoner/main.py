### Save the Prisoner! - Solution 

def saveThePrisoner():
    t = int(input())
    while t:
        n, m, s = map(int, input().split())
        print(((s+m-2) % n) + 1)
        t -= 1

saveThePrisoner()