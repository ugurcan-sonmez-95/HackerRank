### Missing Numbers - Solution

from collections import Counter

def missingNumbers(first_vec, sec_vec):
    first = Counter(first_vec)
    second = Counter(sec_vec)
    missingNums = tuple(sorted((second-first).keys()))
    print(*missingNums)

n = int(input())
first_vec = tuple(map(int, input().split()[:n]))
m = int(input())
sec_vec = tuple(map(int, input().split()[:m]))
missingNumbers(first_vec, sec_vec)