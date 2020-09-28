### Apple and Orange - Solution

def countApplesAndOranges(*args):
    count = (sum(s <= (a+i) <= t for i in list_apple), sum(s <= (b+j) <= t for j in list_orange))
    print(*count, sep='\n')

s, t = map(int, input().split())
a, b = map(int, input().split())
apples, oranges = map(int, input().split())
list_apple = tuple(map(int, input().split()[:apples]))
list_orange = tuple(map(int, input().split()[:oranges]))
countApplesAndOranges(s,t,a,b,list_apple,list_orange)