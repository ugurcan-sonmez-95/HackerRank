### Big Sorting - Solution

def bigSorting(nums):
    sorted_nums = tuple(sorted(sorted(nums), key=len))
    print(*sorted_nums, sep='\n')

n = int(input())
nums = tuple(input() for _ in range(n))
bigSorting(nums)