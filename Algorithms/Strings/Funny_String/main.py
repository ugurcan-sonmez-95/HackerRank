### Funny String - Solution

def funnyString():
    q = int(input())
    while q:
        s = input()
        rev_s = list(reversed(s))
        for i in range(len(s)-1):
            if abs(ord(s[i])-ord(s[i+1])) != abs(ord(rev_s[i])-ord(rev_s[i+1])):
                print("Not Funny")
                break
        else:
            print("Funny") 
        q -= 1

funnyString()