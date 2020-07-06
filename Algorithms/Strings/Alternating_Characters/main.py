### Alternating Characters - Solution

def alternatingCharacters():
    q = int(input())
    while q:
        s = input()
        del_count = 0
        for i in range(len(s)-1):
            if s[i] == s[i+1]:
                del_count += 1
        print(del_count)
        q -= 1

alternatingCharacters()