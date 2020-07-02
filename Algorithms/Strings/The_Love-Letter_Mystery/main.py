### The Love-Letter Mystery - Solution

def theLoveLetterMystery(q, s):
    q = int(input())
    while q:
        s = input()
        count = 0
        i, j = 0, len(s)-1
        while (i < j):
            count += abs(ord(s[i])-ord(s[j]))
            i += 1
            j -= 1
        print(count)
        q -= 1

q, s = None, ''
theLoveLetterMystery(q, s)