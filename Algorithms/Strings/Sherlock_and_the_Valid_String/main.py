### Sherlock and the Valid String - Solution

def isValid(s):
    char_freq = [s.count(ch) for ch in set(s)]
    if max(char_freq) - min(char_freq) == 0:
        print("YES")
    elif (char_freq.count(max(char_freq)) == 1) and (max(char_freq)-min(char_freq) == 1):
        print("YES")
    elif char_freq.count(min(char_freq)) == 1:
        char_freq.remove(min(char_freq))
        if max(char_freq) - min(char_freq) == 0:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")

s = input()
isValid(s)