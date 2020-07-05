### Palindrome Index - Solution

def getIndex(s):
    rev_str = list(reversed(s))
    if (s == rev_str):
        return -1
    i, idx_last = 0, len(s)-1
    while (i < idx_last):
        if (s[i] != s[idx_last]):
            s.pop(i)
            if ("".join(s) == "".join(list(reversed(s)))):
                return i
            return idx_last
        idx_last -= 1
        i += 1

def main():
    q = int(input())
    while q:
        s = list(input())
        result = getIndex(s)
        print(result)
        q -= 1

main()