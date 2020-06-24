### Weighted Uniform Strings - Solution

def weightedUniformStrings(s, query_count):
    total_weight = set()
    count = 1
    for i in range(len(s)):
        weight = ord(s[i])-ord('a')+1
        if ((i+1 != len(s)) and (s[i] == s[i+1])):
            count += 1
        else:
            count = 1
        total_weight.add(weight*count)
    for _ in range(query_count):
        query = int(input())
        print("Yes" if (query in total_weight) else "No")

s = input()
query_count = int(input())
weightedUniformStrings(s, query_count)