### Bigger is Greater - Solution

def biggerIsGreater():
    t = int(input())
    while t:
        w = list(input())
        i = len(w) - 1
        while (i > 0) and (w[i-1] >= w[i]):
            i -= 1
        if i <= 0:
            print("no answer")
        else:
            j = len(w) - 1
            while (w[j] <= w[i-1]):
                j -= 1
            w[i-1], w[j] = w[j], w[i-1]
            w[i:] = reversed(w[i:])
            print(*w, sep="")
        t -= 1

biggerIsGreater()