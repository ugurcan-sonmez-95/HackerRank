### Mini-Max Sum - Solution

def miniMaxSum(arr):
  minimum = sum(arr) - max(arr)
  maximum = sum(arr) - min(arr)
  print(minimum, maximum)  

arr = list(map(int, input().split()[:5]))
miniMaxSum(arr)