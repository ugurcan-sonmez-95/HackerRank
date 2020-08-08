### Minimum Absolute Difference in an Array - Solution

def minimumAbsoluteDifference(nums):
    nums.sort()
    min_diff = abs(nums[1]-nums[0])
    for i in range(2, len(nums)):
        temp = abs(nums[i]-nums[i-1])
        if temp < min_diff:
            min_diff = temp
    print(min_diff)

n = int(input())
nums = list(map(int, input().split()[:n]))
minimumAbsoluteDifference(nums)