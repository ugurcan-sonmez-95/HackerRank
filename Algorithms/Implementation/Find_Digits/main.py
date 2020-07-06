### Find Digits - Solution

def findDigits():
    t = int(input())
    while t:
        n = input()
        count = 0
        for i in range(len(n)):
            if int(n[i]) != 0: 
                if int(n) % int(n[i]) == 0:
                    count += 1
        print(count)
        t -= 1

findDigits()