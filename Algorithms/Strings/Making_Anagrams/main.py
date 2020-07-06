### Making Anagrams - Solution

def makingAnagrams(s1, s2):
    for ch in s1:
        if ch in s2:
            s1 = s1.replace(ch, "", 1)
            s2 = s2.replace(ch, "", 1)
    count = len(s1) + len(s2)
    print(count)

s1, s2 = input(), input()
makingAnagrams(s1, s2)