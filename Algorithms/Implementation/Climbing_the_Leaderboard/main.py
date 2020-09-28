### Climbing the Leaderboard - Solution

def climbingLeaderboard(scores, alice):
    lb = tuple(sorted(scores, reverse=True))
    length = len(lb)
    for score in alice:
        while (length > 0) and (score >= lb[length-1]):
            length -= 1
        print(length+1)

n = int(input())
scores = set(map(int, input().split()[:n]))
m = int(input())
alice = tuple(map(int, input().split()[:m]))
climbingLeaderboard(scores, alice)