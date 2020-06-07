### Apple and Orange - Solution

def countApplesAndOranges(*args):
    count = [sum(s <= (a+i) <= t for i in list_apple), sum(s <= (b+j) <= t for j in list_orange)]
    print(*count, sep='\n')

s, t = (int(x) for x in input().split())
a, b = (int(x) for x in input().split())
apples, oranges = (int(x) for x in input().split())
list_apple = list(map(int, input().split()[:apples]))
list_orange = list(map(int, input().split()[:oranges]))
countApplesAndOranges(s,t,a,b,list_apple,list_orange)