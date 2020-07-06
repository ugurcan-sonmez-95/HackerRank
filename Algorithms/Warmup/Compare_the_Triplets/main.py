### Compare Triplets - Solution

def compareTriplets(alice, bob):
    aliceScore, bobScore = 0, 0
    for i in range(len(alice)):
        if alice[i] > bob[i]:
            aliceScore += 1
        elif bob[i] > alice[i]:
            bobScore += 1
    totalScores = [aliceScore, bobScore]
    return totalScores

alice = list(map(int, input().split()))
bob = list(map(int, input().split()))
print(*compareTriplets(alice, bob))