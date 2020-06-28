### Gemstones - Solution

def gemstones(str_list):
    intersect = set.intersection(*str_list)
    print(len(intersect))

str_list = [set(input()) for _ in range(int(input()))]
gemstones(str_list)