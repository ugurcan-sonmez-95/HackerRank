### Alternating Characters - Solution

def alternatingCharacters(s):
    del_count = 0
    for i in range(len(s)-1):
        if (s[i] == s[i+1]):
            del_count += 1
    print(del_count)

for _ in range(int(input())):
    s = input()
    alternatingCharacters(s)