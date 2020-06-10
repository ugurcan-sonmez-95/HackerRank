### ACM ICPC Team - Solution

from itertools import combinations

def acmTeam(topic):
    total = [sum(x[0] or x[1] for x in list(zip(*i))) for i in combinations(topic, 2)]
    print(max(total), total.count(max(total)), sep='\n')

n, m = (int(x) for x in input().split())
topic = [list(map(int, input()[:m])) for _ in range(n)]
acmTeam(topic)