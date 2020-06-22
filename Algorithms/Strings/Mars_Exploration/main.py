### Mars Exploration - Solution

def marsExploration(s):
    s1 = 'SOS'*(len(s) // 3)
    count = 0
    for i in range(0, len(s), 3):
        for j in range(i, i+3):
            if (s1[j] != s[j]):
                count += 1
    print(count)

s = input()
marsExploration(s)