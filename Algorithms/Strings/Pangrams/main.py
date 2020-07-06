### Pangrams - Solution

def pangrams(s):
    new_s = s.lower()
    uniques = set(new_s)
    if len(uniques) == 27: # We check against 27 because there will be chars + one space
        print("pangram")
    else:
        print("not pangram")

s = input()
pangrams(s)