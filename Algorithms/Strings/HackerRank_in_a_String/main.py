### HackerRank_in_a_String! - Solution

def hackerrankInString(s):
    s1 = "hackerrank"
    count, temp = 0, 0
    for i in range(len(s1)):
        for j in range(temp, len(s)):
            if (s[j] == s1[i]):
                count += 1
                temp = j+1
                break
    ans = "YES" if (count == 10) else "NO"
    print(ans)

for _ in range(int(input())):
    s = input()
    hackerrankInString(s)