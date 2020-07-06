### Angry Professor - Solution

def angryProfessor():
    t = int(input())
    while t:
        n, k = map(int, input().split())
        a = list(map(int, input().split()[:n]))
        count = 0
        for time in a:
            if time <= 0:
                count += 1
        print("YES" if count < k else "NO")
        t -= 1

angryProfessor()