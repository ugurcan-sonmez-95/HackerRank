### Find Digits - Solution

def findDigits(n):
    count = 0
    for i in range(len(n)):
        if (int(n[i]) != 0): 
            if (int(n) % int(n[i]) == 0):
                count += 1
    print(count)

for _ in range((int(input()))):
    n = input()
    findDigits(n)