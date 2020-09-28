### Game of Thrones - I - Solution

def gameOfThrones(s):
    sorted_s = tuple(sorted(s))
    count, oddCount = 1, 0
    for i in range(len(sorted_s)-1):
        if sorted_s[i] == sorted_s[i+1]:
            count += 1
        else:
            if count % 2 != 0:
                oddCount += 1
            count = 1
    if oddCount > 1:
        print("NO")
    else:
        print("YES")

s = input()
gameOfThrones(s)