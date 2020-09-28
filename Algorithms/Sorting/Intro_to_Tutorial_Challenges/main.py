### Intro to Tutorial Challenges - Solution

def introTutorial(V, vec):
    print(vec.index(V))

V, n = int(input()), int(input())
vec = tuple(map(int, input().split()[:n]))
introTutorial(V, vec)