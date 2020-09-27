### Birthday Cake Candles - Solution

def birthdayCakeCandles(heights):
    tallest = max(heights)
    count = heights.count(tallest)
    print(count)

candle_count = int(input())
heights = tuple(map(int, input().split()[:candle_count]))
birthdayCakeCandles(heights)