### Birthday Chocolate - Solution

def birthday(nums, d, m):
    count = 0
    for i in range(len(nums)):
        if (sum(nums[i:i+m]) == d):
            count += 1
    print(count)

squares = int(input())
nums = list(map(int, input().split()[:squares]))
d, m = (int(x) for x in input().split())
birthday(nums, d, m)