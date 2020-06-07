### Migratory Birds - Solution

def migratoryBirds(type_nums):
    count = [0] * len(type_nums)
    for i in type_nums:
        count[i] += 1
    min_id = count.index(max(count))
    print(min_id)

birds = int(input())
type_nums = list(map(int, input().split()[:birds]))
migratoryBirds(type_nums)