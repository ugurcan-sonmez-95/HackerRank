### Anagram - Solution

def calcChangeCount(s):
    count = 0
    if (len(s)%2 != 0):
        return -1
    substr_start = s[:(len(s)//2)]
    substr_end = s[(len(s)//2):]
    for ch in substr_start:
        idx = substr_end.find(ch)
        if (idx == -1):
            count += 1
        else:
            substr_end = substr_end[:idx] + substr_end[(idx+1):]
    return count

def main():
    q = int(input())
    while q:
        s = input()
        result = calcChangeCount(s)
        print(result)
        q -= 1

main()