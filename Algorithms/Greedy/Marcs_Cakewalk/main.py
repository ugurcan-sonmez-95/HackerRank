### Marc's Cakewalk - Solution

def marcsCakewalk(calorie):
    calorie.sort(reverse=True)
    sum = 0
    for i in range(len(calorie)):
        sum += 2**i * calorie[i]
    print(sum)

n = int(input())
calorie = list(map(int, input().split()[:n]))
marcsCakewalk(calorie)