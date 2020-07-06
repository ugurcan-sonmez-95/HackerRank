### Strange Counter - Solution

def strangeCounter(t):
    val = 3
    while t > val:
        t -= val
        val *= 2
    final_val = val - t + 1
    print(final_val)

t = int(input())
strangeCounter(t)