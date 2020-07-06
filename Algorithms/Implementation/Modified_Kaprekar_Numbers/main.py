### Modified Kaprekar Numbers - Solution

from math import pow

def kaprekarNumbers(p, q):
    count = 0
    for num in range(p, q+1):
        squared, digits = num ** 2, pow(10, len(str(num)))
        n1, n2 = squared // digits, squared % digits
        if n1+n2 == num:
            print(num, end=' ')
            count += 1
    if count == 0:
        print('INVALID RANGE')

p = int(input())
q = int(input())
kaprekarNumbers(p, q)