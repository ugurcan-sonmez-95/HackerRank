### Separate the Numbers - Solution

from copy import copy

def separateNumbers(q, s):
    q = int(input())
    while q:
        s = input()
        start, stop = 1, (len(s)//2)+1
        while (start < stop):
            i = copy(start)
            while (i < stop-1):
                check_start = s[:i] + str(int(s[:i])+1)
                if (s.startswith(check_start)):
                    break
                i += 1
            cmp_str = ""
            arr = [int(s[:i])]
            while (len(cmp_str) < len(s)):
                cmp_str += str(arr[-1])
                arr.append(arr[-1]+1)
            start = i+1
            if (cmp_str == s):
                print("YES " + s[:i])
                break
        else:
            print("NO")
        q -= 1

q, s = None, ''
separateNumbers(q, s)