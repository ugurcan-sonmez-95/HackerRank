### Absolute Permutation - Solution

def absolutePermutation(n, k):
    perm = []
    if (k == 0):
        for i in range(1, n+1):
            perm.append(i)
    elif (n % (k*2) != 0):
        perm.append(-1)
    else:
        bool_check = True
        for j in range(1, n+1):
            if (bool_check):
                perm.append(j+k)
            else:
                perm.append(j-k)
            if (j % k == 0):
                if (bool_check):
                    bool_check = False
                else:
                    bool_check = True
    print(*perm)

for _ in range(int(input())):
    n, k = (int(x) for x in input().split())
    absolutePermutation(n, k)