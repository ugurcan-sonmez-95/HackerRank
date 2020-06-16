### Angry Professor - Solution

def angryProfessor(k, a):
    count = 0
    for time in a:
        if (time <= 0):
            count += 1
    print("YES" if count < k else "NO")

for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()[:n]))
    angryProfessor(k, a)