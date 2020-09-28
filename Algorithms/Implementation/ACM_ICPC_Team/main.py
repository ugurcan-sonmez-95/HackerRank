### ACM ICPC Team - Solution

from itertools import combinations

def acmTeam(topic):
    total = tuple(sum(x[0] or x[1] for x in tuple(zip(*i))) for i in combinations(topic, 2))
    print(max(total), total.count(max(total)), sep='\n')

n, m = map(int, input().split())
topic = tuple(tuple(map(int, input()[:m])) for _ in range(n))
acmTeam(topic)