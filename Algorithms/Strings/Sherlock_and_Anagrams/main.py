### Sherlock and Anagrams - Solution

from collections import Counter

def calcAnagramPairs(s):
    anagrams = Counter("".join(sorted(s[j:(j+i)])) for i in range(1, len(s)) for j in range(len(s)-i+1))
    count = sum(sum(range(val)) for val in anagrams.values())
    return count

def main():
    q = int(input())
    while q:
        s = input()
        result = calcAnagramPairs(s)
        print(result)
        q -= 1

main()