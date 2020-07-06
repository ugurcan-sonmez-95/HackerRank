### Two Strings - Solution

def checkSubstr(s1, s2):
    for ch in s1:
        if ch in s2:
            return "YES"
    return "NO"

def main():
    p = int(input())
    while p:
        s1, s2 = input(), input()
        result = checkSubstr(s1, s2)
        print(result)
        p -= 1

main()