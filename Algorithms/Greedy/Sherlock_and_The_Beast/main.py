### Sherlock and The Beast - Solution

def findDecentNumber(n):
    temp = n
    while temp > 0:
        if temp%3 == 0:
            break
        else:
            temp -= 5
    if temp < 0:
        return -1
    final_str = ""
    rep_count = temp // 3
    while rep_count:
        final_str += "555"
        rep_count -= 1
    rep_count = (n-temp) // 5
    while rep_count:
        final_str += "33333"
        rep_count -= 1
    return final_str


def main():
    t = int(input())
    while t:
        n = int(input())
        result = findDecentNumber(n)
        print(result)
        t -= 1


main()