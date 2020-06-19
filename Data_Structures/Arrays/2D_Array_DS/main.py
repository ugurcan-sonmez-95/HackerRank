### 2D Array - DS - Solution

def hourglassSum(arr):
    largest_sum = -63
    for i in range(len(arr)-2):
        for j in range(len(arr)-2):
            temp = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]
            if (temp > largest_sum):
                largest_sum = temp
    print(largest_sum)

arr = [list(map(int, input().split()[:6])) for _ in range(6)]
hourglassSum(arr)