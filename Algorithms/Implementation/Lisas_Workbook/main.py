### Lisa's Workbook - Solution

def workbook(*args):
    special, page_num = 0, 1
    for i in range(1, n+1):
        for j in range(1, arr[i-1]+1):
            if j == page_num:
                special += 1
            if (j % k == 0) or (j == arr[i-1]):
                page_num += 1
    print(special)

n, k = map(int, input().split())
arr = list(map(int, input().split()[:n]))
workbook(n, k, arr)