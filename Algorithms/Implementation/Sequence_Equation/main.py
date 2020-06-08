### Sequence Equation - Solution

def permutationEquation(p):
    arr = [0] * len(p)
    for i in range(1, len(p)+1):
        for j in range(1, len(p)+1):
            if (p[p[j-1]-1] == i):
                arr[i-1] = j
    print(*arr, sep='\n')

n = int(input())
p = list(map(int, input().split()[:n]))
permutationEquation(p)