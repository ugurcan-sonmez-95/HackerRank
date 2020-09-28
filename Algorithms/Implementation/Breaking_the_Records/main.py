### Breaking the Records - Solution

def breakingRecords(scores):
    countMin, countMax = 0, 0
    lowest, highest = scores[0], scores[0]
    for i in range(1, len(scores)):
        if scores[i] < lowest:
            lowest = scores[i]
            countMin += 1
        elif scores[i] > highest:
            highest = scores[i]
            countMax += 1
    print(countMax, countMin)


games = int(input())
scores = tuple(map(int, input().split()[:games]))
breakingRecords(scores)