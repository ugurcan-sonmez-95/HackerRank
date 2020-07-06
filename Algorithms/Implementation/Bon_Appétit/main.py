### Bon Appétit - Solution 

def bonAppetit(bill, k, b):
    total = sum(bill)
    costAnna = (total - bill[k]) // 2
    if costAnna == b:
        print("Bon Appetit")
    else:
        print(b - costAnna)

n, k = map(int, input().split())
bill = list(map(int, input().split()[:n]))
b = int(input())
bonAppetit(bill, k, b)