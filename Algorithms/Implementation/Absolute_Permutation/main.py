### Absolute Permutation - Solution

def smallestAbsolutePermutation(n, k):
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
    return perm

def main():
    t = int(input())
    while t:
        n, k = map(int, input().split())
        result = smallestAbsolutePermutation(n, k)
        print(*result)
        t -= 1

main()