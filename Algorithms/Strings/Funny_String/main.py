### Funny String - Solution

def funnyString(s):
    rev_s = list(reversed(s))
    for i in range(len(s)-1):
        if (abs(ord(s[i])-ord(s[i+1])) != abs(ord(rev_s[i])-ord(rev_s[i+1]))):
            return "Not Funny"
    return "Funny" 

for _ in range(int(input())):
    s = list(input())
    result = funnyString(s)
    print(result)