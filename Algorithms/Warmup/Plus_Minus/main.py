### Plus Minus - Solution

def plusMinus(arr):
    pos, neg, zero = 0, 0, 0
    for i in range(len(arr)):
        if arr[i] > 0:
            pos += 1
        elif arr[i] < 0:
            neg += 1
        else:
            zero += 1
    decimals = [format(pos/len(arr), ".6f"), format(neg/len(arr), ".6f"), format(zero/len(arr), ".6f")]
    print(*decimals, sep='\n')

size = int(input())
arr = list(map(int, input().split()[:size]))
plusMinus(arr)