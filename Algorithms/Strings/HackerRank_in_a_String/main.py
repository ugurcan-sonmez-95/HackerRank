### HackerRank_in_a_String! - Solution

def hackerrankInString():
    query_count = int(input())
    while query_count:
        s = input()
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
        query_count -= 1

hackerrankInString()