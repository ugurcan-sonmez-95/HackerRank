### Sparse Arrays - Solution

def matchingStrings(strings, queries):
    total_count = []
    for string in queries:
        count = strings.count(string)
        total_count.append(count)
    print(*total_count, sep='\n') 

n = int(input())
strings = tuple(input() for _ in range(n))
q = int(input())
queries = tuple(input() for _ in range(q))
matchingStrings(strings, queries)