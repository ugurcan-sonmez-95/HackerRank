### Dynamic Array - Solution

def dynamicArray(n, queries):
    seq = tuple([] for _ in range(n))
    last_answers = []
    last_answer = 0
    for i in range(len(queries)):
        x, y = queries[i][1], queries[i][2]
        idx = (x^last_answer) % n
        if queries[i][0] == 1:
            seq[idx].append(y) 
        elif queries[i][0] == 2:
            last_answer = seq[idx][y % len(seq[idx])]
            last_answers.append(last_answer)
    print(*last_answers, sep='\n')

n, q = map(int, input().split())
queries = tuple(tuple(map(int, input().split()[:3])) for _ in range(q))
dynamicArray(n, queries)