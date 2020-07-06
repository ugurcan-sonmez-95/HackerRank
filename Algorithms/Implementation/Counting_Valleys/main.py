### Counting Valleys - Solution

def countingValleys(s):
    level, count = 0, 0
    for i in range(len(s)):
        if s[i] == 'U':
            level += 1
            if level == 0:
                count += 1
        else:
            level -= 1
    print(count)

n = int(input())
s = input()[:n]
countingValleys(s)