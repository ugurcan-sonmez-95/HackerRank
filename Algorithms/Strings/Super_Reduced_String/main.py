### Super Reduced String - Solution

def superReducedString(s):
    i = 0
    while i < len(s)-1:
        if s[i] == s[i+1]:
            del s[i:(i+2)]
            i = 0
        else:
            i += 1
    if len(s) == 0:
        print("Empty String")
    else:
        print(*s, sep='')

s = list(input())
superReducedString(s)