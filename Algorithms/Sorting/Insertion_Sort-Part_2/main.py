### Insertion Sort - Part 2 - Solution

def insertionSort2(nums):
    for i in range(1, len(nums)):
        comp, prev = nums[i], i-1
        while (prev >= 0) and (nums[prev] > comp):
            nums[prev+1] = nums[prev]
            prev -= 1
        nums[prev+1] = comp
        print(*nums) 

n = int(input())
nums = list(map(int, input().split()[:n]))
insertionSort2(nums)