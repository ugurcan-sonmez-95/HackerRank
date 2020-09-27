### Compare Triplets - Solution

def compareTriplets(alice, bob):
    aliceScore, bobScore = 0, 0
    for i in range(len(alice)):
        if alice[i] > bob[i]:
            aliceScore += 1
        elif bob[i] > alice[i]:
            bobScore += 1
    totalScores = (aliceScore, bobScore)
    return totalScores

alice = tuple(map(int, input().split()))
bob = tuple(map(int, input().split()))
print(*compareTriplets(alice, bob))