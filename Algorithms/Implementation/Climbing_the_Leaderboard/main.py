### Climbing the Leaderboard - Solution

def climbingLeaderboard(scores, alice):
    lb = sorted(set(scores), reverse=True)
    length = len(lb)
    for score in alice:
        while (length > 0) and (score >= lb[length-1]):
            length -= 1
        print(length+1)

n = int(input())
scores = list(map(int, input().split()[:n]))
m = int(input())
alice = list(map(int, input().split()[:m]))
climbingLeaderboard(scores, alice)