### Happy Ladybugs - Solution

def happyLadyBugs(b):
    for ch in b:
        if ((ch != '_') and b.count(ch) == 1):
            return "NO"
    if (b.count('_') == 0):
        for i in range(1, len(b)-1):
            if ((b[i] != b[i-1]) and (b[i] != b[i+1])):
                return "NO"
    return "YES"

for _ in range(int(input())):
    n = int(input())
    b = input()[:n]
    print(happyLadyBugs(b))