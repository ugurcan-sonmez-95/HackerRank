### Between Two Sets - Solution

def getTotalX(arrA, arrB):
    count = 0
    for i in range(max(arrA), min(arrB)+1):
        if all(i%j==0 for j in arrA):
            if all(j%i==0 for j in arrB):
                count += 1
    print(count)

n, m = (int(x) for x in input().split())
arrA = list(map(int, input().split()[:n]))
arrB = list(map(int, input().split()[:m]))
getTotalX(arrA, arrB) 