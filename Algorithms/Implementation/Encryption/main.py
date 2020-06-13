### Encryption - Solution

from math import ceil, sqrt

def encryption(s):
    col_num = ceil(sqrt(len(s)))
    for i in range(col_num):
        for j in range(i, len(s), col_num):
            print(s[j], end="")
        print(" ", end="")

s = input()
encryption(s)